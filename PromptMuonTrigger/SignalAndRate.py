import sys
import ROOT 
ROOT.gROOT.SetBatch(1)
#from Helpers import *
ROOT.gErrorIgnoreLevel=1001
from ROOT import * 
import os
import numpy as np
from math import *

ROOT.gROOT.SetBatch(1)
ROOT.gStyle.SetStatW(0.07)
ROOT.gStyle.SetStatH(0.06)

#ROOT.gStyle.SetOptStat(111110)
ROOT.gStyle.SetOptStat(0)

#ROOT.gStyle.SetErrorX(0)
#ROOT.gStyle.SetErrorY(0)

ROOT.gStyle.SetTitleStyle(0)
ROOT.gStyle.SetTitleAlign(13) ## coord in top left
ROOT.gStyle.SetTitleX(0.)
ROOT.gStyle.SetTitleY(1.)
ROOT.gStyle.SetTitleW(1)
ROOT.gStyle.SetTitleH(0.058)
ROOT.gStyle.SetTitleBorderSize(0)

ROOT.gStyle.SetPadLeftMargin(0.126)
ROOT.gStyle.SetPadRightMargin(0.10)
ROOT.gStyle.SetPadTopMargin(0.06)
ROOT.gStyle.SetPadBottomMargin(0.13)

ROOT.gStyle.SetMarkerStyle(1)

etabin = [1.0, 1.2, 1.3,  1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95,
	      2.0, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5]
myetabin = np.asarray(etabin)
binLow = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,12.0,14.0,16.0,18.0,20.0,24.0,28.0,32.0,36.0,42.0,50.0]
ptbins = np.asarray(binLow)
total = 284900.000000
SF = 30.0*1000/total#khz
SF200 = 30.0*1000/total*(200.0/140.0)#khz
pu =200
color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
maker = [20,21,22,23,33]

def DecompresZipFiles(path):

    if os.path.isdir(path):
      ls = os.listdir(path)
      for x in ls:
	if not(x.endswith(".zip")):
	    #print "x.endswith(.root) ", x.endswith(".root")
	    continue
	os.system("unzip %s"%(path+x))
    elif os.path.isfile(path):
      os.system("unzip "+path)
    else:
      print " it is not file or dir ", filedir[0]

def getOverallEff(Teff, xinit):
    hden = Teff.GetCopyTotalHisto()
    hnum = Teff.GetCopyPassedHisto()
    nbins = hden.GetXaxis().GetNbins()
    xbin = hden.FindBin(xinit)
    den = hden.Integral(xbin, nbins)
    num = hnum.Integral(xbin, nbins)
    eff = float(num)/float(den) 
    #print "Teff ",Teff," den ",den," num ",num," eff ",eff
    return eff, sqrt(eff*(1-eff)/den)

def maximizeSensitivity(efflist, ratelist, nsignals, fraction):
    fraction = float(fraction)/100.0
    signal_tot = 0.0
    for n in nsignals:
	signal_tot += n
    weightlist = []
    selectedPoints = [0,0,0,0]
    Eff = 0.0
    for npar in range(0, 4):
	weightlist.append(float(nsignals[npar])/float(signal_tot))
    def getEffAndRate():
	efftmp = 0.0
	ratetmp = 0
	for npar in range(0, 4):
	    x = selectedPoints[npar]
	    efftmp += efflist[npar][x]*weightlist[npar]
	    ratetmp += ratelist[npar][x]
	return efftmp, ratetmp
    def getNextPoint():
	nextpar = -1
	drate = 999999
	for  npar in range(0, 4):
	    x = selectedPoints[npar]
	    if x>= len(ratelist[npar])-1:
		continue#impossible value
	    if ratelist[npar][x+1] < drate:
		nextpar = npar
		drate = ratelist[npar][x+1]
	return nextpar

    Eff,Nrate = getEffAndRate()
    #print "ratelist ",ratelist, " efflist ",efflist, " weightlist ",weightlist," nsignals ",nsignals
    #print "initial Eff ",Eff, " Nrate ",Nrate
    while (Eff<fraction):
	nextpar = getNextPoint()
	if nextpar < 0 :
	    break
	selectedPoints[nextpar] += 1
	Eff,Nrate = getEffAndRate()		
    ##varying final selected points
    #print "final Eff ",Eff, " Rate ",Nrate, " selectedPoints ",selectedPoints
    return Eff,Nrate,selectedPoints
		
    
def getEffAndRate(pt, fractions, etamin, etamax, wfilename, filedir,condoroutroot, SBPlots, useGE21, doPlots=True, doLUTs=True, doRates=True):#uncertainty?

    efflist_p = []
    ratelist_p = []
    effErrlist_p = []
    rateErrlist_p = []
    efflist_d = []
    ratelist_d = []
    effErrlist_d = []
    rateErrlist_d = []
    efflist_h = []
    ratelist_h = []
    effErrlist_h = []
    rateErrlist_h = []
    nsignals = []

    nstarts = {1.66 : 1, 2.0: 2}
    for npar in range(0, 5):
	efflist_p.append([])
	ratelist_p.append([])
	effErrlist_p.append([])
	rateErrlist_p.append([])
	efflist_d.append([])
	ratelist_d.append([])
	effErrlist_d.append([])
	rateErrlist_d.append([])
	efflist_h.append([])
	ratelist_h.append([])
	effErrlist_h.append([])
	rateErrlist_h.append([])

    for frac in fractions:
	filename = filedir+"EventNum_Pt%d_fraction%d.log"%(pt, frac)
	if not(os.path.isfile(filename)):
	    print "failed to open file ",filename
	    continue
	fileopen = open(filename,'r')
	npar = 0
	startreading = False
	endreading = False
	istart = 0
	iend = 0
	print "fileopen ",fileopen, " nstarts ",nstarts[etamin]," etamin ",etamin
	for line in fileopen:
	     #{284900.000000 1501.000000 64.000000 286.000000 982.000000 877.000000 876.000000 42.000000 840.000000
	    #print "line ",line," istart ",istart," iend ",iend
	    if line.startswith("{"):
		istart += 1
		continue
	    if line.startswith("},"):
		iend += 1
		continue

	    if istart >= nstarts[etamin]:
		startreading = True
	    if iend >= (nstarts[etamin]):
		endreading = True
	    print "line ",line," istart ",istart," iend ",iend," starreading ",startreading," endreading ",endreading
	    if (not (startreading and not(endreading))):
		continue
	    allnums = line.split(" ")
	    #print "filename ", filename, "all nums ", allnums
	    n_signal_tot = float(allnums[5])
	    n_signal_p = float(allnums[6])
	    n_signal_d = float(allnums[7])
	    n_signal_h = float(allnums[8])
	    n_rate_tot = float(allnums[1])
	    n_rate_p = float(allnums[2])*SF200
	    n_rate_d = float(allnums[3])*SF200
	    n_rate_h = float(allnums[4])*SF200
	    eff_p = n_signal_p/n_signal_tot
	    eff_d = n_signal_d/n_signal_tot
	    eff_h = n_signal_h/n_signal_tot
	    effErr_p = eff_p * sqrt((1-eff_p)/n_signal_p)
	    effErr_d = eff_d * sqrt((1-eff_d)/n_signal_p)
	    effErr_h = eff_h * sqrt((1.0-eff_h)/n_signal_p)
	    RateErr_p = sqrt(float(allnums[2]))*SF200
	    RateErr_d = sqrt(float(allnums[3]))*SF200
	    RateErr_h = sqrt(float(allnums[4]))*SF200
	    
	    if (len(nsignals)<4):
		nsignals.append(n_signal_tot)

	    efflist_p[npar].append(eff_p)
	    ratelist_p[npar].append(n_rate_p)
	    effErrlist_p[npar].append(effErr_p)
	    rateErrlist_p[npar].append(RateErr_p)
	    efflist_d[npar].append(eff_d)
	    ratelist_d[npar].append(n_rate_d)
	    effErrlist_d[npar].append(effErr_d)
	    rateErrlist_d[npar].append(RateErr_d)
	    efflist_h[npar].append(eff_h)
	    ratelist_h[npar].append(n_rate_h)
	    effErrlist_h[npar].append(effErr_h)
	    rateErrlist_h[npar].append(RateErr_h)
	    npar += 1 

    totsignals = 0.0
    for n in nsignals:
	totsignals += n
    print "nsignals ",nsignals
    rfilename = filedir+condoroutroot                                                                                                                     
    rfile = TFile(rfilename, "READ")
    legs = ["GE11-ME11 bending angle cut","GE21-ME21 bending angle cut","GE11-ME11 and GE21-ME21 bending angle cut"]
    def getCombinedEffandRatePlot(algo, selectedPoint, fractions, thisfrac):
	hratelist = []
	Tefflist = []
	for npar in range(0, 4):
	    ncount = -1
	    fraction = 0
	    for frac in fractions: 
		filename  = filedir+"EventNum_Pt%d_fraction%d.log"%(pt, frac)
		if os.path.isfile(filename):
		    ncount += 1
		if ncount == selectedPoint[npar]:
		    fraction = frac
		    break
	    if ncount == -1:
		print "failed to find point ",selectedPoint[npar]," in par ",npar," pt ",pt
	    algo2 =algo
	    if algo=="hybrid":
		algo2="Hybrid"
	    #ratehist_GE11_eta16to21_npar3_frac97_pt7;1
	    #GE11eta16to21npar0pt7fraction98;1
	     #KEY: TEfficiency	Hybrideta16to21npar3pt7fraction94;1 
	       #KEY: TH1F    ratehist_GE11_eta16to21_npar0_frac95_pt7;1
	    histname = "ratehist_%s_eta%dto%d_npar%d_frac%d_pt%d"%(algo, int(etamin*10), int(etamax*10), npar, fraction, pt)
	    teffname1 = "%seta%dto%dnpar%dpt%dfraction%d"%(algo2, int(etamin*10), int(etamax*10), npar,pt, fraction)
	    print "histname ",histname, " teffname ",teffname1
	    hratelist.append(rfile.Get(histname).Clone())
	    Tefflist.append(rfile.Get(teffname1).Clone())
	    #getOverallEff(Tefflistprompt[npar], pt)
	    #getOverallEff(Tefflistdisplaced[npar], pt)
	    #print "selected rate ",histname
	for npar in range(1, 4):
	    #if npar == 0:
		#hist = hratelist[0].Clone()
	    #else:
	    #hist.Add(hratelist[npar])
	    hratelist[0].Add(hratelist[npar])
	    Tefflist[0].Add(Tefflist[npar])
	#rfile.Close()
	hratelist[0].SetName("ratehist_%s_eta%dto%d_npar%d_frac%d_pt%d"%(algo, int(etamin*10), int(etamax*10), 4, thisfrac, pt))
	Tefflist[0].SetName("Teff_%s_eta%dto%d_npar%d_frac%d_pt%d"%(algo, int(etamin*10), int(etamax*10), 4, thisfrac, pt))
	#SetOwnership(hratelist[0], False)
	#hratelist[0].Print("ALL")
	return Tefflist[0], hratelist[0]
	#return 
	    
    def getLUTsValue(algo, selectedPoint, fractions, lut, tag):
	cutlist = []
	for npar in range(0, 4):
	    #npoint = selectedPoint[npar]
	    ncount = -1
	    fraction = 0
	    for frac in fractions: 
		#filename  = filedir+"EventsNum_Pt_%d_fraction_%d.log"%(pt, frac)
		filename = filedir+"EventNum_Pt%d_fraction%d.log"%(pt, frac)
		if os.path.isfile(filename):
		    ncount += 1
		if ncount == selectedPoint[npar]:
		    fraction = frac
		    break
	    if ncount == -1:
		print "failed to find point ",selectedPoint[npar]," in par ",npar," pt ",pt
	    #GEMCSCBendingGE21LUT_Pt16_fraction91
	    readinLUT = open(filedir+"GEMCSCBending%sLUT_Pt%d_fraction%d.log"%(algo, pt, fraction),'r')
	    startreading = False
	    endreading = False
	    istart = 0
	    iend = 0
	    iline = -1
	    print "fileopen ",readinLUT
	    for line in readinLUT:
		 #{284900.000000 1501.000000 64.000000 286.000000 982.000000 877.000000 876.000000 42.000000 840.000000
		#print "line ",line," istart ",istart," iend ",iend
		if line.startswith("{") and not(line.endswith(",\n")):
		    istart += 1
		    continue
		if line.startswith("},"):
		    iend += 1
		    continue
		if istart >= nstarts[etamin]:
		    startreading = True
		if iend >= nstarts[etamin]:
		    endreading = True
		print "line ",line," istart ",istart," iend ",iend," starreading ",startreading," endreading ",endreading," nstart ", nstarts[etamin]
		if (not (startreading and not(endreading))):
		    continue
		iline += 1
		if (algo == "GE11" or algo == "GE21"):
		    allnums = line.split(",")
		    cutlist.append(allnums[npar])
		    break
		if algo == "Hybrid" and npar == iline:
		    cutlist.append(line)
		    break
	print "algo ",algo, " cuts ",cutlist
	lut.write(algo+tag+":\n{\n")
	if algo == "GE11" or algo == "GE21":
	    for x in cutlist[:-1]:
		lut.write(x+",")
	    lut.write(cutlist[-1]+"}\n")
	else:
	    lut.writelines(x for x in cutlist)
	    lut.write("}\n")
		#print "filename ", filename, "all nums ", allnums

    finalLUT = open("finalLUT_20170314_hybridonly.log",'a')
    for frac in fractions:
	peff,prate,pselected = maximizeSensitivity(efflist_p, ratelist_p, nsignals, frac)
	deff,drate,dselected = maximizeSensitivity(efflist_d, ratelist_d, nsignals, frac)
	heff,hrate,hselected = maximizeSensitivity(efflist_h, ratelist_h, nsignals, frac)
	efflist_p[4].append(peff)
	ratelist_p[4].append(prate)
	effErrlist_p[4].append(sqrt((1-peff)*peff/totsignals))
	rateErrlist_p[4].append(sqrt(prate*SF200))
	efflist_d[4].append(deff)
	ratelist_d[4].append(drate)
	effErrlist_d[4].append(sqrt((1-deff)*deff/totsignals))
	rateErrlist_d[4].append(sqrt(drate*SF200))
	efflist_h[4].append(heff)
	ratelist_h[4].append(hrate)
	effErrlist_h[4].append(sqrt((1-heff)*heff/totsignals))
	rateErrlist_h[4].append(sqrt(hrate*SF200))
	if doLUTs:
	    #finalLUT.write("eta%dto%dpt%dfraction%d"%(int(etamin*10), int(etamax*10), pt, frac)+"\n")	
	    tag = "eta%dto%dpt%dfraction%d"%(int(etamin*10), int(etamax*10), pt, frac)
	    #getLUTsValue("GE11", pselected, fractions, finalLUT, tag)
	    #getLUTsValue("GE21", dselected, fractions, finalLUT, tag)
	    getLUTsValue("Hybrid", hselected, fractions, finalLUT, tag)
	if doRates:
	    wfile = TFile(wfilename, "UPDATE") 
	    teff1_p, hrate_p = getCombinedEffandRatePlot("GE11", pselected, fractions, frac)
	    teff1_d, hrate_d = getCombinedEffandRatePlot("GE21", dselected, fractions, frac)
	    teff1_h, hrate_h = getCombinedEffandRatePlot("hybrid", hselected, fractions, frac)
	    eff1_p, err1_p = getOverallEff(teff1_p, pt)
	    eff1_h, err1_h = getOverallEff(teff1_h, pt)
	    print "eff1 p ",eff1_p, " eff1_h ",eff1_h, " rate entries position ",hrate_p.GetEntries()," hyrid ",hrate_h.GetEntries()
	    teff1_p.SetMarkerStyle(maker[0]);hrate_p.SetMarkerStyle(maker[0])
	    teff1_p.SetMarkerColor(color[0]);hrate_p.SetMarkerColor(color[0])
	    teff1_p.SetLineColor(color[0]);hrate_p.SetLineColor(color[0])
	    teff1_h.SetMarkerStyle(maker[2]);hrate_h.SetMarkerStyle(maker[2])
	    teff1_h.SetMarkerColor(color[2]);hrate_h.SetMarkerColor(color[2])
	    teff1_h.SetLineColor(color[2]);hrate_h.SetLineColor(color[2])

	    tex1 = TLatex(.4, .6,"p_{T}^{L1}>=%d GeV, %.2f<|#eta|<%.2f"%(pt, etamin, etamax))
	    tex1.SetNDC()
	    c1 = TCanvas()
	    b1 = ROOT.TH1F("b1","b1",len(ptbins)-1, ptbins)
	    b1.GetYaxis().SetRangeUser(0.0,1.05)
	    b1.GetYaxis().SetTitleOffset(1.1)
	    b1.GetYaxis().SetNdivisions(520)
	    b1.GetYaxis().SetTitle("Trigger efficiency")
	    b1.GetXaxis().SetTitle("True muon p_{T} [GeV]")
	    b1.GetXaxis().SetTitleSize(0.05)
	    b1.GetXaxis().SetLabelSize(0.05)
	    b1.GetYaxis().SetTitleSize(0.05)
	    b1.GetYaxis().SetLabelSize(0.05)
	    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
	
	    legend1 = ROOT.TLegend(0.35,0.2,0.88,0.35)
	    legend1.SetFillColor(ROOT.kWhite)
	    legend1.SetTextFont(42)
	    #legend1.SetTextSize(.05)
	    legend1.AddEntry(teff1_p, legs[0], "p")
	    #legend1.AddEntry(teff_h_noGE21_prompt[0], legs[1], "p")
	    legend1.AddEntry(teff1_h, legs[2], "p")
	    b1.Draw()
	    teff1_p.Draw("samep")
	    #teff_h_noGE21_prompt[0].Draw("samep")
	    teff1_h.Draw("samep")
	    legend1.Draw("same")
	    tex1.Draw("same")
	    #c1.SaveAs(SBPlots+"TriggerEff_turnon_pt%d_eta%dto%d_frac%d_PU%d.png"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c1.SaveAs(SBPlots+"TriggerEff_turnon_pt%d_eta%dto%d_frac%d_PU%d.pdf"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c1.SaveAs(SBPlots+"TriggerEff_turnon_pt%d_eta%dto%d_frac%d_PU%d.C"%(pt, int(etamin*10), int(etamax*10), frac, pu))

	    c2 = TCanvas()
	    c2.Clear()
	    b2 = ROOT.TH1F("b2","b2",len(myetabin)-1, myetabin)
	    b2.GetYaxis().SetRangeUser(0.0, 30)
	    b2.GetYaxis().SetTitleOffset(1.1)
	    b2.GetYaxis().SetNdivisions(510)
	    b2.GetYaxis().SetTitle("Trigger Rate [kHz]")
	    b2.GetXaxis().SetTitle("L1Mu |#eta|")
	    b2.GetXaxis().SetTitleSize(0.05)
	    b2.GetXaxis().SetLabelSize(0.05)
	    b2.GetYaxis().SetTitleSize(0.05)
	    b2.GetYaxis().SetLabelSize(0.05)
	    b2.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, %d PU"%pu)
	    c2.SetGridx()
	    c2.SetGridy()

	    tex2 = TLatex(.15, .85,"p_{T}^{L1}>%d GeV, %.2f<|#eta|<%.2f, overall efficiency %d%%"%(pt, etamin, etamax, frac))
	    tex2.SetNDC()
	    legend2 = ROOT.TLegend(0.15,0.6,0.7,0.75)
	    legend2.SetFillColor(ROOT.kWhite)
	    legend2.SetTextFont(42)
	    #legend2.SetTextSize(.04)
	    legend2.AddEntry(hrate_p, legs[0], "p")
	    #legend2.AddEntry(histrate_h_noGE21[0], legs[1], "p")
	    legend2.AddEntry(hrate_h, legs[2], "p")
	    b2.Draw()
	    hrate_p.Scale(SF200)
	    #histrate_h_noGE21[0].Scale(SF200)
	    hrate_h.Scale(SF200)

	    hrate_p.Draw("samee")
	    #histrate_h_noGE21[0].Draw("samee")
	    hrate_h.Draw("samee")
	    legend2.Draw("same")
	    tex2.Draw("same")
	    #c2.SaveAs(SBPlots+"TriggerRate_eta_pt%d_eta%dto%d_frac%d_PU%d.png"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c2.SaveAs(SBPlots+"TriggerRate_eta_pt%d_eta%dto%d_frac%d_PU%d.pdf"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c2.SaveAs(SBPlots+"TriggerRate_eta_pt%d_eta%dto%d_frac%d_PU%d.C"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    
	    teff1_p.Write();hrate_p.Write()
	    teff1_d.Write();hrate_h.Write()
	    teff1_h.Write();hrate_d.Write()
	    wfile.Close()
    
    wfile = TFile(wfilename, "UPDATE") 
    #legs = ["GE11Cut-based algorithm","Stub alignment algorithm %s"%extraleg,"Hybrid algorithm %s"%extraleg]

    if not(doPlots):	
	wfile.Close()
	return
    graphlist_p = []
    graphlist_d = []
    graphlist_h = []
    for npar in range(0, 5):
	legend = ROOT.TLegend(0.15,0.7,0.63,0.85)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	#legend.SetTextSize(.05)
	c1 = TCanvas()
	mgerr =TMultiGraph()
	#print "size ", len(efflist_p[npar]), " ",efflist_p[npar]

	graphlist_p.append(TGraphErrors(len(efflist_p[npar]), np.array(efflist_p[npar]), np.array(ratelist_p[npar]), np.array(effErrlist_p[npar]), np.array(rateErrlist_p[npar])))
	graphlist_d.append(TGraphErrors(len(efflist_d[npar]), np.array(efflist_d[npar]), np.array(ratelist_d[npar]), np.array(effErrlist_d[npar]), np.array(rateErrlist_d[npar])))
	graphlist_h.append(TGraphErrors(len(efflist_h[npar]), np.array(efflist_h[npar]), np.array(ratelist_h[npar]), np.array(effErrlist_h[npar]), np.array(rateErrlist_h[npar])))
	graphlist_p[npar].SetMarkerStyle(maker[0])
	graphlist_p[npar].SetMarkerColor(color[0])
	#graphlist_p[npar].SetMarkerSize(.8)
	graphlist_d[npar].SetMarkerStyle(maker[1])
	graphlist_d[npar].SetMarkerColor(color[1])
	graphlist_h[npar].SetMarkerStyle(maker[2])
	graphlist_h[npar].SetMarkerColor(color[2])
	
	graphlist_p[npar].SetName("TriggerEffVsRate_GE11Cut_pt%d_eta%dto%d_npar%d"%(pt, int(etamin*10), int(etamax*10), npar))
	graphlist_d[npar].SetName("TriggerEffVsRate_GE21Cut_pt%d_eta%dto%d_npar%d"%(pt, int(etamin*10), int(etamax*10), npar))
	graphlist_h[npar].SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d"%(pt, int(etamin*10), int(etamax*10), npar))
	
	mgerr.Add(graphlist_p[npar])
	#mgerr.Add(graphlist_d[npar])
	mgerr.Add(graphlist_h[npar])
	legend.AddEntry(graphlist_p[npar],legs[0],"pl")
	#legend.AddEntry(graphlist_d[npar],legs[1],"pl")
	legend.AddEntry(graphlist_h[npar],legs[2],"pl")
	mgerr.Draw("AP")
	legend.Draw("same")
	tex = TLatex()
	mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
	mgerr.SetMinimum(0)
	if npar==4:
	    tex.DrawLatexNDC(0.2, 0.88, "p_{T}>=%d GeV, %.2f<|#eta|<%.2f, all parities"%(pt, etamin, etamax))
	else:
	    tex.DrawLatexNDC(0.2, 0.88, "p_{T}>=%d GeV, %.2f<|#eta|<%.2f, npar=%d"%(pt, etamin, etamax, npar))


	mgerr.GetXaxis().SetTitle("Trigger Eff")
	mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d.png"%(pt, int(etamin*10), int(etamax*10), npar))
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d.pdf"%(pt, int(etamin*10), int(etamax*10), npar))
	mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d_npar%d"%(pt, int(etamin*10), int(etamax*10), npar))
	graphlist_p[npar].Write()
	graphlist_d[npar].Write()
	graphlist_h[npar].Write()
	mgerr.Write()
    #wfile.Write()
    wfile.Close()

def CombinedGE21(filename, pts, netas, SBPlots):
    #tfile = TFile(filename, 'UPDATE')
    tfile = TFile(filename, "UPDATE")
    color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
    maker = [20,21,22,23,33]
    legs = ["GE11Cut-based algorithm","Hybrid algorithm without GE21","Hybrid algorithm with GE21"]
    for pt in pts:
      for neta in range(len(netas)-1):
	etamin = netas[neta]
	etamax = netas[neta+1]
	for npar in range(5):
	    #print "pt ",pt, " etamin ",etamin, " etamax ",etamax," npar ",npar,"TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d"%(pt, int(etamin*10), int(etamax*10), npar)
	    legend = ROOT.TLegend(0.15,0.7,0.65,0.92)
	    legend.SetFillColor(ROOT.kWhite)
	    legend.SetTextFont(42)
	    legend.SetTextSize(.05)
	    c1 = TCanvas()
	    mgerr =TMultiGraph()
	    graph_GE21 = tfile.Get("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d"%(int(pt), int(etamin*10), int(etamax*10), npar))
	    graph_noGE21 = tfile.Get("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d_noGE21"%(int(pt), int(etamin*10), int(etamax*10), npar))
	    graph_p = tfile.Get("TriggerEffVsRate_GE11Cut_pt%d_eta%dto%d_npar%d"%(int(pt), int(etamin*10), int(etamax*10), npar))

	    graph_p.SetMarkerStyle(maker[0])
	    graph_p.SetMarkerColor(color[0])
	    graph_noGE21.SetMarkerStyle(maker[3])
	    graph_noGE21.SetMarkerColor(color[3])
	    graph_GE21.SetMarkerStyle(maker[2])
	    graph_GE21.SetMarkerColor(color[2])

	    mgerr.Add(graph_p)
	    mgerr.Add(graph_noGE21)
	    mgerr.Add(graph_GE21)

	    legend.AddEntry(graph_p,legs[0],"p")
	    legend.AddEntry(graph_noGE21,legs[1],"p")
	    legend.AddEntry(graph_GE21,legs[2],"p")
	    mgerr.Draw("AP")
	    legend.Draw("same")
	    mgerr.SetTitle("Trigger Eff Vs Rate, p_{T}>%d GeV, %.1f<|#eta|<%.2f, parity=%d"%(pt, etamin, etamax, npar))
	    mgerr.SetMinimum(0)
	    if npar==4:
		mgerr.SetTitle("Trigger Eff Vs Rate, p_{T}>%d GeV, %.1f<|#eta|<%.2f, all parities"%(pt, etamin, etamax))

	    mgerr.GetXaxis().SetTitle("Trigger Eff")
	    mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")
	    c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d_all.png"%(pt, int(etamin*10), int(etamax*10), npar))
	    c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d_all.pdf"%(pt, int(etamin*10), int(etamax*10), npar))
	    mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d_npar%d_combined"%(pt, int(etamin*10), int(etamax*10), npar))
	    mgerr.Write()
def getallPtEffAndRate(pts, fractions, etas, rootfile, filedir, condoroutroot, SBPlots, useGE21, doPlots, doLUTs, doRates):
    for neta in range(len(etas)-1):
	etamin = etas[neta]
	etamax = etas[neta+1]
	for pt in pts:
	    getEffAndRate(pt, fractions, etamin, etamax, rootfile, filedir, condoroutroot, SBPlots, useGE21, doPlots, doLUTs, doRates)

#_p: st1 cut, _d: st2 cut, h: hybrid cut
	    
DecompresZipFiles("./")
SBPlots = "GEMCSC_bending_SBPlots_20170312/"
#SBPlots = "eta18to215SBPlots_20170223_noGE21_fixErrorBar/"
if not os.path.exists(SBPlots):
        os.makedirs(SBPlots)

#filedir = "condor_20170221_rate_fraction90_95_99_withGE21_eta20to215/"
#filedir = "condor_20170223_rate_fraction90_95_99_noGE21_eta18to215/"
filedir = "condor_20170223_rate_fraction90_95_99_noGE21_eta18to215/"
filedir = "condor_GEMCSC_20170303_rate_floatpt/"
filedir = "condor_GEMCSC_20170303_rate_fixedpt/"
filedir = "condor_GEMCSC_20170304_rate_floatpt/"
filedir = "condor_GEMCSC_20170312_rate_floatpt/"
fractions = [x for x in range(90, 100)]
pts = [5, 7, 10, 12, 16, 20]
netas = [1.66, 2.15]
useGE21 = False
outputroot = "SB_20170312_GEMCSC_test.root"
condoroutroot ="Teffout_all.root"
#getallPtEffAndRate(pts, fractions, netas, outputroot, filedir, condoroutroot, SBPlots, useGE21, False, True, False)
filename = "graphs_all_20170223_fixedErr.root"
#CombinedGE21(filename, pts, netas, SBPlots)

