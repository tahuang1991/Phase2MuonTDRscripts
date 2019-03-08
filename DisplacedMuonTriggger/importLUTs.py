import sys
import os
import numpy as np
from math import *
import ROOT


lutfile_R = ROOT.TFile("DisplacedMuTrigger_endcap_LUT.root","RECREATE")
lutfile_R.Close()
#tree = ROOT.TTree("DisplacedMuTrigger_endcap_LUT")

evenodds = ["odd,even","odd,odd","even,even","even,odd"]

def getFinalLUTValue(pt, fraction, etamin, etamax, npar, suffix, filename, algorithm):

    algos_lut = {"Position": -1, "Direction"+suffix: -1,"Hybrid"+suffix:[]}

    readinLUT = open(filename,'r')
    startread = [False, False, False]
    endread = [False, False, False]
    
    #if etamax > 2.0 and etamax <= 2.15:
    #        etamax = 2.1
    #if etamin<2.2 and etamin>=2.0:
    #	    etamin = 2.0
    if etamin>= 1.6 and etamin<1.8:
	    etamin = 1.65
    inpar = 0
    for line in readinLUT:
	#Positioneta16to18pt5fraction76  
	getall = (endread[0] and endread[1] and endread[2])
	if getall:
	    break
	ialgo = -1
	for algo in algos_lut:
            if algo != algorithm:
                continue
	    ialgo += 1
	    #print "ialgo ",ialgo, " algo ",algo
            #print "%seta%dto%dpt%dfraction%d"%(algo, int(etamin*10), int(etamax*10),pt, fraction)
	    if line.startswith("%seta%dto%dpt%dfraction%d"%(algo, int(etamin*10), int(etamax*10),pt, fraction)):
		startread[ialgo] = True
		continue
	    if startread[ialgo] and line=="}\n":
		endread[ialgo] = True
		continue
	    if line=="{\n":
		continue
	    if startread[ialgo] and not(endread[ialgo]):
		if algo=="Position" or algo[:9]=="Direction":
		    allnums = line.split(",")
		    algos_lut[algo] = float(allnums[npar])
		    endread[ialgo] = True
		elif algo[:6]=="Hybrid" and inpar == npar:
		    allnums = line[1:-3].split(",")
		    for ipara in range(0,5):
			algos_lut[algo].append(float(allnums[ipara]))
		    endread[ialgo] = True
		elif algo[:6]=="Hybrid":
		    inpar += 1
	  
    #print "all lut for pt ",pt," fraction ",fraction, " etamin ", etamin, " etamax ",etamax, " npar ",npar
    #for key in algos_lut:
    print "algo ",algorithm," pt ",pt," fraction ",fraction," etamin ",etamin," etamax ",etamax, " value ",algos_lut[algorithm]
    return algos_lut
		    
#def importLUTs(ptbins, etabins, fractions, filename):
def importLUTs_Position(ptbins, etabins, fraction, filename):
    lutfile_R = ROOT.TFile("DisplacedMuTrigger_endcap_LUT_Position_frac%d.root"%fraction,"RECREATE")
    position_lut = open("position_lut_frac%d.h"%fraction, "w")
    ptstr = [" %d, "% x for x in ptbins ] ; ptstr[-1] = ptstr[-1][:-2]
    etastr = [" %.2f, "% x for x in etabins ]; etastr[-1] = etastr[-1][:-2]
    #wpstr = ["%d%%, "%x for x in fractions]
    position_lut.write("/***********************************************************************\n")
    position_lut.write("* Ptbins ");        position_lut.write(" ".join(ptstr)+"\n")
    position_lut.write("* Etabins ");       position_lut.write(" ".join(etastr)+"\n")
    position_lut.write("* Npartiy ");       position_lut.write(" ".join(evenodds)+"\n")
    #position_lut.write("* WorkingPoints "); position_lut.write(" ".join(wpstr)+"\n")
    position_lut.write("***********************************************************************/\n")
    position_lut.write("enum {NEtabins_position = %d};\n"%(len(etabins)))
    position_lut.write("const double Etabins_position[NEtabins_position] = {"+" ".join(etastr)+"};\n")
    position_lut.write("const double PositionLUT[NPtbins][NEtabins_position][NParitybins] = {\n")
    for ipt, pt in enumerate(ptbins):
        ptcomment = "/// pt=%d"%pt
        position_lut.write("{%s\n"%ptcomment)
        for ieta, eta in enumerate(etabins[:-1]):
            etamax = etabins[ieta+1]
            etamin = eta
            etamax_str = 'Etamax'+str(etamax).replace('.','p')
            etamin_str = 'Etamin'+str(etamin).replace('.','p')
            etacomment = "/// %.2f<|eta|<%.2f"%(etamin, etamax)
            #position_lut.write("\t{%s\n"%etacomment)
            position_lut.write("\t{")
            for npar in range(0,4):
                parcomment = "/// npar=%d,%s"%(npar, evenodds[npar])
                #position_lut.write("\t\t{")
                #direction_lut.write("\t\t{")
                #hybrid_lut.write("\t\t{%s\n"%parcomment)
                #for ifrac, fraction in enumerate(fractions):
		#wpcomment = "/// WP=%d%%"%fraction
		algos_lut = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "", filename, "Position")
		#algos_lut_noGE21 = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "_noGE21", filename)
		position_lut.write(" %.3f"%algos_lut["Position"])
		if npar != 3:
		    position_lut.write(",")
                hist = ROOT.TH1F("PositionAlgo_pt%d_%s_%s_npar%d_eff%d"%(pt, etamin_str, etamax_str, npar, fraction), "PositionAlgo_pt%d_%s_%s_npar%d_eff%d"%(pt, etamin_str, etamax_str, npar, fraction), 5, 0, 5)
                hist.SetBinContent(1, algos_lut["Position"])
                hist.Write()

		
                #position_lut.write(" },%s\n"%parcomment)
            position_lut.write(" },%s\n"%etacomment)
        position_lut.write(" \t\t\t\t\t},%s\n"%ptcomment)
    position_lut.write("\t}; /// positionLUT end\n")



def importLUTs_Direction(ptbins, etabins, fraction, filename):
    lutfile_R = ROOT.TFile("DisplacedMuTrigger_endcap_LUT_direction_frac%d.root"%fraction,"RECREATE")
    direction_lut = open("direction_lut_frac%d.h"%(fraction), "w")
    ptstr = [" %d, "% x for x in ptbins ] ; ptstr[-1] = ptstr[-1][:-2]
    etastr = [" %.2f, "% x for x in etabins ]; etastr[-1] = etastr[-1][:-2]
    #wpstr = ["%d%%, "%x for x in fractions]
    direction_lut.write("/***********************************************************************\n")
    direction_lut.write("* Ptbins ");        direction_lut.write(" ".join(ptstr)+"\n")
    direction_lut.write("* Etabins ");       direction_lut.write(" ".join(etastr)+"\n")
    direction_lut.write("* Npartiy ");       direction_lut.write(" ".join(evenodds)+"\n")
    #direction_lut.write("* WorkingPoints "); direction_lut.write(" ".join(wpstr)+"\n")
    direction_lut.write("***********************************************************************/\n")
    direction_lut.write("enum {NEtabins_direction = %d};\n"%(len(etabins)))
    direction_lut.write("const double Etabins_direction[NEtabins_direction] = {"+" ".join(etastr)+"};\n")
    direction_lut.write("const double DirectionLUT[NPtbins][NEtabins_direction][NParitybins] = {\n")
    for ipt, pt in enumerate(ptbins):
        ptcomment = "/// pt=%d"%pt
        direction_lut.write("{%s\n"%ptcomment)
        for ieta, eta in enumerate(etabins[:-1]):
            etamax = etabins[ieta+1]
            etamin = eta
            etamax_str = 'Etamax'+str(etamax).replace('.','p')
            etamin_str = 'Etamin'+str(etamin).replace('.','p')
            etacomment = "/// %.2f<|eta|<%.2f"%(etamin, etamax)
            #direction_lut.write("\t{%s\n"%etacomment)
            direction_lut.write("\t{")
            for npar in range(0,4):
                parcomment = "/// npar=%d,%s"%(npar, evenodds[npar])
                #direction_lut.write("\t\t{")
                #for ifrac, fraction in enumerate(fractions):
		#wpcomment = "/// WP=%d%%"%fraction
		algos_lut = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "", filename, "Direction")
		#algos_lut_noGE21 = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "_noGE21", filename)
		direction_lut.write(" %.3f"%algos_lut["Direction"])
		if npar != 3:
		    direction_lut.write(",")
                hist = ROOT.TH1F("DirectionAlgo_pt%d_%s_%s_npar%d_eff%d"%(pt, etamin_str, etamax_str, npar, fraction), "DirectionAlgo_pt%d_%s_%s_npar%d_eff%d"%(pt, etamin_str, etamax_str, npar, fraction), 5, 0, 5)
                hist.SetBinContent(1, algos_lut["Direction"])
                hist.Write()

		
                #direction_lut.write(" },%s\n"%parcomment)
            direction_lut.write(" },%s\n"%etacomment)
        direction_lut.write(" \t\t\t\t\t},%s\n"%ptcomment)
    direction_lut.write("\t}; /// directionLUT end\n")
    lutfile_R.Close()


def importLUTs_Hybrid(ptbins, etabins, fraction, filename):

    lutfile_R = ROOT.TFile("DisplacedMuTrigger_endcap_LUT_hybrid_frac%d.root"%fraction,"RECREATE")
    hybrid_lut = open("hybrid_lut_frac%d.h"%(fraction), "w")
    #hybrid_noGE21_lut = open("hybrid_noGE21_lut.h", "w")
    ptstr = [" %d, "% x for x in ptbins ] ; ptstr[-1] = ptstr[-1][:-2]
    etastr = [" %.2f, "% x for x in etabins ]; etastr[-1] = etastr[-1][:-2]
    #wpstr = ["%d%%, "%x for x in fractions]
    hybrid_lut.write("/***********************************************************************\n")
    hybrid_lut.write("* Ptbins ");        hybrid_lut.write(" ".join(ptstr)+"\n")
    hybrid_lut.write("* Etabins ");       hybrid_lut.write(" ".join(etastr)+"\n")
    hybrid_lut.write("* Npartiy ");       hybrid_lut.write(" ".join(evenodds)+"\n")
    #hybrid_lut.write("* WorkingPoints "); hybrid_lut.write(" ".join(wpstr)+"\n")
    hybrid_lut.write("* (a, b, theta, x0, y0) in ellipe formula (x*cos(theta)+y*sin(theta)-x0)^2/a^2 + (x*sin(theta) - y*cos(theta)-y0)^2/b^2 <= 1\n")
    hybrid_lut.write("***********************************************************************/\n")
    #hybrid_noGE21_lut.write("* Ptbins ");        hybrid_noGE21_lut.write(" ".join(ptstr)+"\n")
    #hybrid_noGE21_lut.write("* Etabins ");       hybrid_noGE21_lut.write(" ".join(etastr)+"\n")
    #hybrid_noGE21_lut.write("* Npartiy ");       hybrid_noGE21_lut.write(" ".join(evenodds)+"\n")
    #hybrid_noGE21_lut.write("* WorkingPoints "); hybrid_noGE21_lut.write(" ".join(wpstr)+"\n")
    #hybrid_noGE21_lut.write("* (a, b, theta, x0, y0) in ellipe formula (x*cos(theta)+y*sin(theta)-x0)^2/a^2 + (x*sin(theta) - y*cos(theta)-y0)^2/b^2 <= 1\n")
    #hybrid_noGE21_lut.write("***********************************************************************/\n")

    hybrid_lut.write("enum {NEtabins_hybrid = %d};\n"%(len(etabins)))
    hybrid_lut.write("const double Etabins_hybrid[NEtabins_hybrid] = {"+" ".join(etastr)+"};\n")
    hybrid_lut.write("const double HybridLUT[NPtbins][NEtabins_hybrid][NParitybins][NHybridParas] = {\n")
    #hybrid_noGE21_lut.write("const double HybridNoGE21LUT[NPtbins][NEtabins][NParitybins][NWPbins][NHybridParas] = {\n")
    for ipt, pt in enumerate(ptbins):
        ptcomment = "/// pt=%d"%pt
        hybrid_lut.write("{%s\n"%ptcomment)
        for ieta, eta in enumerate(etabins[:-1]):
            etamax = etabins[ieta+1]
            etamin = eta
            etamax_str = 'Etamax'+str(etamax).replace('.','p')
            etamin_str = 'Etamin'+str(etamin).replace('.','p')

            etacomment = "/// %.2f<|eta|<%.2f"%(etamin, etamax)
            hybrid_lut.write("\t{%s\n"%etacomment)
            for npar in range(0,4):
                parcomment = "/// npar=%d,%s"%(npar, evenodds[npar])
                #hybrid_lut.write("\t\t{%s\n"%parcomment)
                #for ifrac, fraction in enumerate(fractions):
		#wpcomment = "/// WP=%d%%"%fraction
		algos_lut = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "", filename, "Hybrid")
		#algos_lut_noGE21 = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "_noGE21", filename)

                hist = ROOT.TH1F("HybridAlgo_pt%d_%s_%s_npar%d_eff%d"%(pt, etamin_str, etamax_str, npar, fraction), "HybridAlgo_pt%d_%s_%s_npar%d_eff%d"%(pt, etamin_str, etamax_str, npar, fraction), 5, 0, 5)
                for i, value in enumerate(algos_lut["Hybrid"]):
                    hist.SetBinContent(i+1, value)
                hist.Write()


                

		hybrid_lut.write("\t\t {")
		ellipse = ["%.3f, "%x for x in algos_lut["Hybrid"]]
		ellipse[-1] = ellipse[-1][:-2]
		hybrid_lut.write("".join(ellipse))
		hybrid_lut.write(" },%s\n"%parcomment)
		
                #hybrid_lut.write("\t\t\t\t\t\t },%s\n"%parcomment)
            hybrid_lut.write("\t\t\t\t\t\t\t},%s\n"%etacomment)
        hybrid_lut.write("\t\t\t\t\t\t\t\t},%s\n"%ptcomment)
    hybrid_lut.write("\t}; ///hybridLUT end\n")


    lutfile_R.Close()

ptbins = [5, 7, 10,12, 15, 20]
#fractions = [x for x in range(90, 97)]
filename = "finalLUT_20180322.log"
etabins_1 = [1.2,1.4,1.6,1.8,2.0,2.2, 2.4]
etabins_2 = [1.2,1.4,1.6,1.8,2.0,2.1, 2.2, 2.4]
etabins_3 = [1.2,1.4,1.6,1.8,2.0,2.1]
#importLUTs(ptbins, etabins, fractions,filename)
for frac in range(80, 97):
    importLUTs_Position(ptbins, etabins_1, frac,filename)
    importLUTs_Direction(ptbins, etabins_2, frac,filename)
    importLUTs_Hybrid(ptbins, etabins_3, frac,filename)

#importLUTs_Position(ptbins, etabins_1, 96,filename)
#importLUTs_Direction(ptbins, etabins_2, 96,filename)
#importLUTs_Hybrid(ptbins, etabins_3, 96,filename)
