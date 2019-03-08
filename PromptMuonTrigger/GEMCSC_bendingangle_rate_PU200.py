# Run quiet mode
import sys
sys.argv.append( '-b' )
import ROOT 
ROOT.gROOT.SetBatch(1)
#from Helpers import *
ROOT.gErrorIgnoreLevel=1001
from ROOT import * 
import random
import os
import numpy as np
from math import *
from GEMCSCdPhiDict_wholeChamber import *

ROOT.gROOT.SetBatch(1)
ROOT.gStyle.SetStatW(0.07)
ROOT.gStyle.SetStatH(0.06)

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

#etabin = [1.0, 1.2, 1.3,  1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95,
#	      2.0, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5]
#myetabin = np.asarray(etabin)
etabin = [1.0, 1.2, 1.3,  1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2.0, 2.05, 2.1, 2.15, 2.2, 2.25,2.3, 2.35,2.4, 2.45, 2.5]
myetabin = np.asarray(etabin)
#ptbins = np.asarray(binLow)
binLow = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,12.0,14.0,16.0,18.0,20.0,24.0,28.0,32.0,36.0,42.0,50.0]
#binLow = [x*1.0 for x in range(0,51)]
ptbins = np.asarray(binLow)
#etabin = [1.0, 1.2, 1.3,  1.4, 1.5, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95,
		#2.0, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5]
#ptbin = [
#	#1, 2.0,   2.5,  
#      3.0, 3.5,   4.0,   4.5,   5.0,   6.0,   7.0,   8.0,
#      10.0,  12.0,  14.0,  16.0,  18.0,  20.0,  25.0,  30.0,  35.0,  40.0,
#      45.0,  50.0]#  60.0,  70.0,  80.0,  90.0, 100.0, 120.0, 140.0]
#rateptbin = [5.0, 6.0, 7.0,8.0, 10.0, 12.0, 14.0, 16.0, 20.0, 25.0, 30.0, 35.0]
ptbin = [x*1.0 for x in range(0,  51)]
rateptbin = [3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0,12.0, 13.0, 14.0,15.0, 16.0, 18.0, 20.0,22.0, 25.0, 28.0, 30.0, 35.0, 40.0, 50.0]
myptbins = np.asarray(ptbin)
print "myptbin ",myptbins
myrateptbin = np.asarray(rateptbin)
#aolor = [ROOT.kBlack, ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kOrange+8]
#color = [ROOT.kBlue, ROOT.kRed, ROOT.kMagenta+2, ROOT.kGreen+2,ROOT.kOrange+8]
color = [ROOT.kBlack, ROOT.kBlue, ROOT.kGreen+2, ROOT.kRed, ROOT.kOrange+8] #ROOT.kMagenta+2,ROOT.kOrange+8]
maker =[25, 22,21,20,24]
pu=200

#ratesample = "RateTree_20170620.root"
#ratesample = "RateTree_20170627.root"
ratesample = "/Users/taohuang/Documents/CSCTrigger/GEMCSCbending_20170620_PU200/RateTree_20170722_GE11GE21.root"
rfile = ROOT.TFile(ratesample)
total = rfile.Get("h_eventcountME0Segment192").GetEntries()
#signalsample = "../ME0Bending_20170427/out_ana_promptMu_PU200_192_20170715_fixedGE11GE21.root"
signalsampleCSConly = "../ME0Bending_20170427/out_ana_promptMu_PU200_192_20170601.root"
#signalsampleGE11only = "../ME0Bending_20170427/out_ana_promptMu_PU200_192_20170715_fixedGE11only.root"
#signalsample = "/Users/taohuang/Documents/CSCTrigger/GEMCSCbending_20170620_PU200/SingleMu_EMTF_ME0_PU200_GEMCSCANA_20170722_GE11GE21.root"
signalsample = "SingleMu_EMTF_ME0_PU200_GEMCSCANA_20170807_newEMTF_GE11GE21_ME0eta21.root"
signalsampleGE11only = "/Users/taohuang/Documents/CSCTrigger/GEMCSCbending_20170620_PU200/SingleMu_EMTF_ME0_PU200_GEMCSCANA_20170722_GE11only.root"
#total = 284900.000000
SF = 30.0*1000.0/total#khz
SF140 = SF*14.0/20.0
print "SF ",SF



#______________________________________________________________________________
def getDPhiFromLUT(st, pt, fraction, evenodd):
    ststring = "ME11"
    if st==2:
	ststring = "ME21"
    fracstring = "Eff%d"%fraction
    ptstring = "Pt%d"%pt
    pt_string = ("%s"%(ptstring)).ljust(4)
    #dphi_lct_pad["ME11"]["Eff95"]["Pt10"]["even"]
    return dphi_lct_pad[ststring][fracstring][pt_string][evenodd]
#______________________________________________________________________________
def getDPhicut(st, pt, is_odd):
  
  ME11GEMdPhi = [
    [-2, 1.0, 1.0],
    [5.0,  0.02131422,  0.00907379 ],
    [7.0,  0.01480166,  0.00658598 ],
    [10.0,  0.01019511,  0.00467867 ],
    [15.0,  0.00685720,  0.00336636 ],
    [20.0,  0.00528981,  0.00279064 ],
    [30.0,  0.00381797,  0.00231837 ],
    [40.0,  0.00313074,  0.00213513 ],
  ]

  ME21GEMdPhi = [
    [-2, 1.0, 1.0],
    [5.0,  0.00884066,  0.00479478 ],
    [7.0,  0.00660301,  0.00403733 ],
    [10.0,  0.00503144,  0.00369953 ],
    [15.0,  0.00409270,  0.00358023 ],
    [20.0,  0.00378257,  0.00358023 ],
    [30.0,  0.00369842,  0.00358023 ],
    [40.0,  0.00369842,  0.00358023 ],
    ]


  dPhiLib = ME11GEMdPhi
  if st==2:
    dPhiLib = ME21GEMdPhi
  for ipt in range(0, len(dPhiLib)):
      if abs(dPhiLib[ipt][0]-pt)<1:
      	if is_odd:
      	   return dPhiLib[ipt][1]
        else:
      	   return dPhiLib[ipt][2]
def getME0dPhiLUTValue(pt, fraction, filename):
    readinLUT = open(filename,'r')
    startread = False; endread = False

    for line in readinLUT:
	if endread:
		break
	#ME0pt5fraction96
	if  line.startswith("ME0pt%dfraction%d"%(pt, fraction)):
		startread = True
		continue
	if startread and line=="}\n":
		endread = True
		continue
	if line.startswith("{"):
		continue
	if startread and not(endread):
		#print "line ",line ," float ",float(line)
		return float(line)

	    #evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
def getGE11GE21LUTValue(pt, fraction, etamin, etamax, nevenodd, filename):
    algos_lut = {"GE11": -1, "GE21": -1}
    readinLUT = open(filename,'r')
    startread = [False, False]
    endread = [False, False]
    ievenodd = 0
    for line in readinLUT:
	#Positioneta16to18pt5fraction76  
	getall = (endread[0] and endread[1])
	if getall:
	    break
	ialgo = -1
	for algo in algos_lut:
	    ialgo += 1
	    if line.startswith("%seta%dto%dpt%dfraction%d"%(algo, int(etamin*10), int(etamax*10),pt, fraction)):
		startread[ialgo] = True
		continue
	    if startread[ialgo] and line.startswith("}"):
		endread[ialgo] = True
		continue
	    if line.startswith("{"):
		continue
	    #evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
	    if startread[ialgo] and not(endread[ialgo]):
		if algo=="GE11":
		    allnums = line.split(",")
		    #print "allnums ",allnums," nevenodd ",nevenodd
		    algos_lut[algo] = float(allnums[nevenodd])
		    endread[ialgo] = True
		elif algo=="GE21":
		    allnums = line.split(",")
		    algos_lut[algo] = float(allnums[nevenodd])
		    endread[ialgo] = True
    #for key in algos_lut:
    #	print "algo ",key, " value ",algos_lut[key]
    return algos_lut
	  

def getFinalLUTValue(pt, fraction, etamin, etamax, npar, filename):
    algos_lut = {"GE11": -1, "GE21": -1,"Hybrid":[]}
    readinLUT = open(filename,'r')
    startread = [False, False, False]
    endread = [False, False, False]
    inpar = 0
    for line in readinLUT:
	#Positioneta16to18pt5fraction76  
	getall = (endread[0] and endread[1] and endread[2])
	if getall:
	    break
	ialgo = -1
	for algo in algos_lut:
	    ialgo += 1
	    if algo == "GE11" or algo == "GE21":
	        continue
	    if line.startswith("%seta%dto%dpt%dfraction%d"%(algo, int(etamin*10), int(etamax*10),pt, fraction)):
		    #print "line ",line," startread"
		startread[ialgo] = True
		continue
	    if startread[ialgo] and line.startswith("}"):
		    #print "line ",line," endread"
		endread[ialgo] = True
		continue
	    if line.startswith("{\n"):
		continue
	    #evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
	    #print "algo ",algo, " to find value , line ",line
	    if startread[ialgo] and not(endread[ialgo]):
		if algo=="GE11":
		    allnums = line.split(",")
		    algos_lut[algo] = float(allnums[npar/2])
		    endread[ialgo] = True
		elif algo=="GE21":
		    allnums = line.split(",")
		    algos_lut[algo] = float(allnums[(npar+1)%2])
		    endread[ialgo] = True
		elif algo=="Hybrid" and inpar == npar:
		    allnums = line[1:-3].split(",")
		    #print "hybrid allnums ",allnums
		    for ipara in range(0,5):
			algos_lut[algo].append(float(allnums[ipara]))
		    endread[ialgo] = True
		elif algo=="Hybrid":
		    inpar += 1
	  
    #print "all lut for pt ",pt," fraction ",fraction, " etamin ", etamin, " etamax ",etamax, " npar ",npar
    #for key in algos_lut:
	    #print "algo ",key, " value ",algos_lut[key]
    return algos_lut
		    

def getCut(ch, todraw, basecut, dphimin, dphimax, step, fraction):
    frac = 1.0
    fraction = fraction*0.01
    total = getEvents(ch, basecut)
    naccept = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, dphimax))
    frac = float(naccept)/float(total)
    naccept2 = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, dphimin))
    frac2 = float(naccept2)/float(total)
    if frac<fraction:
	print "error! , with init range max ",dphimax," efficiency is ",frac," required eff: ",fraction
	sys.exit(0)
	return dphimax
    elif frac2>fraction:
	print "error! , with init range min ",dphimin," efficiency is ",frac2," required eff: ",fraction
	sys.exit(0)
	return dphimin
    xcut = (dphimin+dphimax)/2.0
    naccept = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, xcut))
    frac = float(naccept)/float(total)
    #print "naccept ",naccept," frac ",frac, " xcut ",xcut," dphimin ",dphimin, " dphimax ",dphimax," required eff: ",fraction
    while(dphimax-dphimin > step):
	if frac>fraction:
	    dphimax = xcut
	elif frac<fraction:
	    dphimin = xcut
	else:
	    break
	xcut = (dphimin+dphimax)/2.0
	naccept = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, xcut))
	frac = float(naccept)/float(total)
	#print "naccept ",naccept, " frac ",frac, " xcut ",xcut," dphimin ",dphimin, " dphimax ",dphimax," required eff: ",fraction
    print " fraction ",fraction," cuteff ", frac," xcut ",xcut
    return xcut

def getTefficiency(ch, todraw, dencut, numcut, nbins, xmin, xmax):
    hden = TH1F("hden","hden",nbins, xmin, xmax)
    hnum = TH1F("hnum","hnum",nbins, xmin, xmax)
    ch.Draw(todraw+">>hden", dencut)
    ch.Draw(todraw+">>hnum", numcut)
    Teff = TEfficiency(hnum, hden)
    SetOwnership(Teff, False)
    return Teff

def getOverallEff(Teff, xinit, xend = -1):
    hden = Teff.GetCopyTotalHisto()
    hnum = Teff.GetCopyPassedHisto()
    nbins = hden.GetXaxis().GetNbins()
    xbin = hden.FindBin(xinit)
    if xend == -1:
	    endbin = nbins
    else:
	    endbin = hden.FindBin(xend)
    den = hden.Integral(xbin, endbin)
    num = hnum.Integral(xbin, endbin)
    eff = float(num)/float(den) 
    #print "Teff ",Teff," den ",den," num ",num," eff ",eff
    return eff,sqrt(eff*(1.0-eff)/den)
def frange(end,start=0,inc=0,precision=1):
    """A range function that accepts float increments."""
    import math

    if not start:
        start = end + 0.0
        end = 0.0
    else: end += 0.0

    if not inc:
        inc = 1.0
    count = int(math.ceil((start - end) / inc))

    L = [None] * (count+1)

    L[0] = end
    for i in (xrange(1,count)):
        L[i] = L[i-1] + inc
    L[count] = start
    return L

def addFilesToChain(ch, filedir):
    if os.path.isdir(filedir):
    	  ls = os.listdir(filedir)
    	  for x in ls:
	      	if not(x.endswith(".root")):
			#print "x.endswith(.root) ", x.endswith(".root")
			continue
		x = filedir[:]+x
    		if os.path.isdir(x):
			continue
		ch.Add(x)
    elif os.path.isfile(filedir):
	  ch.Add(filedir)
    else:
	  print " it is not file or dir ", filedir
## draw an ellipse that includes 95% of the entries

signalAcceptance = 0.90

def getEllipse(x,y,a,b, alpha=0, x0=0, y0=0):
  x1 = x*cos(alpha)+y*sin(alpha)-x0
  y1 = x*sin(alpha)-y*cos(alpha)-y0
  if (alpha>0):
	angle = "#frac{#pi}{%d}"%(int(pi/alpha))
  elif (alpha<0):
	angle = "-#frac{#pi}{%d}"%(int(pi/fabs(alpha)))
  else:
    	angle = "0"
  #print "x ",x," y ",y," a ",a," b ",b," alpha ",alpha," x1 ",x1," y1 ",y1," angle ",angle
  return x1*x1/(a*a) + y1*y1/(b*b)

def passEllipse(x,y,a,b,alpha, x0=0, y0=0):
    return getEllipse(x,y,a,b,alpha, x0, y0) <= 1

def failEllipse(x,y,a,b,alpha, x0=0, y0=0):
    return getEllipse(x,y,a,b,alpha,x0, y0) > 1

def getBackgroundRejectionEllipse(a_axis, b_axis, alpha, x0, y0, signalHist, backgroundHist):
    if signalHist.GetEntries()==0 or backgroundHist.GetEntries()==0:
    	print "warning!!! entries (S and B) ",signalHist.GetEntries(),backgroundHist.GetEntries()
    	return (1.0,0)
    #print "signal and bg, integral/entris ", signalHist.Integral() / signalHist.GetEntries(), backgroundHist.Integral() / backgroundHist.GetEntries()
    signalEntriesTotal = signalHist.GetEntries()*1.0
    backgroundEntriesTotal = backgroundHist.GetEntries()*1.0

    entriesInEllipseSignal  = 0
    entriesOutEllipseBackground  = 0
    entriesInEllipseBackground  = 0.0

    signalAcceptanceFactor = 0
    background = 0
    
    ## loop on entries in histogram
    for j in range(1,signalHist.GetNbinsX()+1):
        for k in range(1,signalHist.GetNbinsY()+1):
            
            ## get the bin centers
            signal_x = signalHist.GetXaxis().GetBinCenter(j)
            signal_y = signalHist.GetYaxis().GetBinCenter(k)

            background_x = backgroundHist.GetXaxis().GetBinCenter(j)
            background_y = backgroundHist.GetYaxis().GetBinCenter(k)

            ## signal passes
            if passEllipse(signal_x, signal_y, a_axis, b_axis, alpha, x0, y0):
                entriesInEllipseSignal += signalHist.GetBinContent(j,k)

            ## background fails
            #if failEllipse(background_x, background_y, a_axis, b_axis, alpha, x0, y0):
             #   entriesOutEllipseBackground += backgroundHist.GetBinContent(j,k)
            if passEllipse(background_x, background_y, a_axis, b_axis, alpha, x0, y0):
                entriesInEllipseBackground += backgroundHist.GetBinContent(j,k)

            ## current signal acceptance
    signalAcceptanceFactor = entriesInEllipseSignal / signalEntriesTotal

            ## current background rejection
            #background = entriesOutEllipseBackground / backgroundEntriesTotal
    background = 1 - entriesInEllipseBackground/backgroundEntriesTotal
            #if background<0.50:
            #    break
            #print j,k,signalAcceptanceFactor,background

    return signalAcceptanceFactor, background
            



def get_proptionality_factor(eta, npar):
	slope=0.0
	#slopes_1 = [0,0.645, 0.852,0]
	slopes_1 = [1.279, 0.6357, 1.001, 0.5252]
	slopes_2 = [0.630, .364, .541, .325]
	#slopes_1 = [1.279, 0.6457, 1.001, 0.5252]
	#slopes_2 = [0.648, 0.3542, 0.5636, 0.3217]
	if (abs(eta)<1.6):
		slope = slopes_1[npar]
	if (abs(eta)>=1.6):
		slope = slopes_2[npar]
    
	return slope


def drawEllipse(hist, hist2, nEvent_list, anglecut_list, a, b, alpha, x0, y0, eff1, nrate, xtitle, ytitle,st_title, text, picname):
    gStyle.SetTitleBorderSize(0);
    gStyle.SetPadLeftMargin(0.126);
    gStyle.SetPadRightMargin(0.04);
    gStyle.SetPadTopMargin(0.06);
    gStyle.SetPadBottomMargin(0.13);
    gPad.SetTickx(1)
    gPad.SetTicky(1)
    xBins = hist.GetXaxis().GetNbins()
    yBins = hist.GetYaxis().GetNbins()
    xmin = hist.GetXaxis().GetXmin()
    xmax = hist.GetXaxis().GetXmax()
    ymin = hist.GetYaxis().GetXmin()
    ymax = hist.GetYaxis().GetXmax()
    #btest = TH2F("btest","btest",xBins/2,xmin/2.0,xmax/2.0,yBins/2,ymin/2.0,ymax/2.0)
    btest = TH2F("btest","btest",xBins,xmin,xmax,yBins,ymin,ymax)
    btest.GetXaxis().SetTitle(hist2.GetXaxis().GetTitle())
    btest.GetYaxis().SetTitle(hist2.GetYaxis().GetTitle())
    btest.SetTitle(hist.GetTitle())
    el2 = TEllipse(x0,y0,a,b,0,360, alpha*180.0/pi);
    el2.SetLineColor(kBlack);
    #el2.SetLineWidth(3);
    el2.SetFillStyle(4000)
    #meanx_s = hist.GetMean(1)
    #meany_s = hist.GetMean(2)
    #meanx_b = hist2.GetMean(1)
    #meany_b = hist2.GetMean(2)
    c = TCanvas("c_%d_%d"%(int(a*100),int(b*100)),"c_%d_%d"%(int(a*100),int(b*100)),900,400)
    #c.Clear()
    c.Divide(2,1)
    c.cd(1)
    btest.Draw()
    #print "drawellipse , hist entries ",hist.GetEntries()
    #print  "hist print ",hist.Print("ALL")
    hist.Draw("samecolz")
    hist.SetTitle(st_title[1])

    el2.Draw("same")
    
    xline1 = TLine(-anglecut_list[0], ymin/2, -anglecut_list[0], ymax/4) 
    xline2 = TLine(anglecut_list[0], ymin/2, anglecut_list[0], ymax/4) 
    xline1.SetLineColor(kBlack)
    xline2.SetLineColor(kBlack)
    xline1.SetLineStyle(2)
    xline2.SetLineStyle(2)
    xline1.Draw("same")
    xline2.Draw("same")
    angle = alpha*180/pi
    print "in Drawellipse a ",a," b ",b," alpha ",alpha," angle ", alpha*180.0/pi, " x0 ",x0, " y0 ",y0," xcut ",anglecut_list[0]," ycut ",anglecut_list[1]
    acep_x = float(nEvent_list[6])/float(nEvent_list[5])
    acep_y = float(nEvent_list[7])/float(nEvent_list[5])
    tex1 = ROOT.TLatex(0.15,.3,"%s"%(text))
    tex1.SetNDC()
    tex10 = TLatex(0.2,.9,"Singal entries %d"%(nEvent_list[5]))
    tex10.SetNDC()
    tex3 = TLatex(0.15, 0.7, "Acceptance %.3f(ST1) %.3f(ST2) %.3f(H)"%(acep_x, acep_y, eff1))
    tex3.SetTextSize(0.05)
    tex3.SetNDC()
    tex4 = TLatex(0.15, 0.8, "#splitline{HCut: a=%.3f,b=%.3f,angle=%.1f,center(%.3f,%.3f)}{St1-Cut: %.4f, St2-Cut: %.4f}"%(a, b, angle, x0, y0, anglecut_list[0],anglecut_list[1]))
    tex4.SetTextSize(0.05)
    tex4.SetNDC()
    tex4.SetNDC()
    tex4.Draw("same")
    tex3.Draw("same")
    tex1.Draw("same")
    tex10.Draw("same")
    c.cd(2)
    rej_x = 1-float(nEvent_list[2])/float(nEvent_list[1])
    rej_y = 1-float(nEvent_list[3])/float(nEvent_list[1])
    rej_h = 1-(nrate)/float(nEvent_list[1])
    #btest2 = TH2F("btest2","btest2",xBins/2,xmin/2.0,xmax/2.0,yBins/2,ymin/2.0,ymax/2.0)
    btest2 = TH2F("btest2","btest2",xBins,xmin,xmax,yBins,ymin,ymax)
    btest2.GetXaxis().SetTitle(hist2.GetXaxis().GetTitle())
    btest2.GetYaxis().SetTitle(hist2.GetYaxis().GetTitle())
    btest2.SetTitle(hist2.GetName())
    btest2.Draw()
    hist2.Draw("samecolz")
    hist2.SetTitle(st_title[0])
    el2.Draw("same")
    xline1.Draw("same")
    xline2.Draw("same")
    print "Singal Acceptance: X ",acep_x, " Y ",acep_y, " H ",eff1, " Rate nEvent ",nEvent_list[0]," this category ",nEvent_list[1]," Rejection: X ",rej_x," Y ",rej_y," H ",rej_h
    tex2 = TLatex(0.15, 0.7, "Rate: %.0f(ST1), %.0f(ST2), %.0f(H)"%(nEvent_list[2], nEvent_list[3], nrate))
    tex2.SetTextSize(0.05)
    tex2.SetNDC()
    #tex5 = TLatex(0.15, 0.9, "ellipse center(%.1f, %.3f)"%(x0, y0))
    #tex5 = TLatex(0.15, 0.85, "#splitline{Rate nEvent %d, this case: %d}{Hybrid %d+%d}"%(nEvent_list[0], nEvent_list[1], nrate, nEvent_list[-1]))
    tex5 = TLatex(0.15, 0.85, "#splitline{Rate nEvent %d, this case: %d}{}"%(nEvent_list[0], nEvent_list[1]))
    tex5.SetTextSize(0.05)
    tex5.SetNDC()
    tex2.Draw("same")
    tex5.Draw("same")
    #tex11.Draw("same")
    c.cd()

    
    c.SaveAs(picname+ "_ellipse.pdf")
    c.SaveAs(picname+ "_ellipse.png")
    c.SaveAs(picname+ "_ellipse.C")

#get events number by drawing tree???
def getEvents(ch, cut):
    hist = TH2F("hist","hist", 1,-1,1, 1,-1,1)
    ch.Draw("1:1>>hist",cut)
    return hist.GetEntries()
def loopEllipse(chain, chain1, nEvent_list, anglecut_list, fraction, astart, bstart, xaxis, yaxis,x_bins, y_bins,xtitle, ytitle,st_title, etamin, etamax, cuts,text,picname):

    gStyle.SetOptFit(0111)
    gStyle.SetOptStat(0)

    #xBins = b0.GetXaxis().GetNbins()
    #yBins = b0.GetYaxis().GetNbins()
    #xminBin = b0.GetXaxis().GetXmin()
    #xmaxBin = b0.GetXaxis().GetXmax()
    #yminBin = b0.GetYaxis().GetXmin()
    #ymaxBin = b0.GetYaxis().GetXmax()
    doTest = False
    xBins = int(x_bins[1:-1].split(',')[0])
    xminBin = float(x_bins[1:-1].split(',')[1])
    xmaxBin = float(x_bins[1:-1].split(',')[2])
    yBins = int(y_bins[1:-1].split(',')[0])
    yminBin = float(y_bins[1:-1].split(',')[1])
    ymaxBin = float(y_bins[1:-1].split(',')[2])
    xbinwidth = (xmaxBin-xminBin)/xBins
    ybinwidth = (ymaxBin-yminBin)/yBins

    todrawb0 = "%s"%yaxis[0]+":"+"%s>>b0"%xaxis[0]
    todrawb_hist = "(%s*(abs(%s)<0.1)+0.025*(abs(%s)>.1))"%(yaxis[0], yaxis[0], yaxis[0])+":"+"(%s*(abs(%s)<0.1)+0.025*(abs(%s)>.1))"%(xaxis[0], xaxis[0], xaxis[0])
    todrawb01 = todrawb_hist+">>b01"
    #todrawb1 = "%s*charge"%yaxis+":"+"%s*charge>>b1"%xaxis
    todrawb1 = "%s"%yaxis[1]+":"+"%s>>b1"%xaxis[1]
    todrawb_hist1 = "(%s*(abs(%s)<0.1)+0.025*(abs(%s)>.1))"%(yaxis[1], yaxis[1], yaxis[1])+":"+"(%s*(abs(%s)<0.1)+0.025*(abs(%s)>.1))"%(xaxis[1], xaxis[1], xaxis[1])
    todrawb11 = todrawb_hist1+">>b11"
    b0 = TH2F("b0","b0",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b01 = TH2F("b01","b01",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b01.GetXaxis().SetTitle("%s"%xtitle)
    b01.GetYaxis().SetTitle("%s"%ytitle)
    #b0.SetTitle("%s Vs %s,%s"%(ytitle, xtitle, st_title)) 
    #b0.SetTitleSize(0.05)
    b01.SetStats(1)
    chain.Draw(todrawb0,cuts[0])#background
    chain.Draw(todrawb01,cuts[0])#background, for plotting
    #b0.Add(b01)
    print "background todraw ",todrawb0, " cuts ", cuts[0]," b0.Getentries ",b0.GetEntries()," b01 todraw ",todrawb01, " same cut, entries ",b01.GetEntries()

    
    b1 = TH2F("b1","b1",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b11 = TH2F("b11","b11",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b1.GetXaxis().SetTitle("%s"%xtitle)
    b1.GetYaxis().SetTitle("%s"%ytitle)
    #b1.SetTitle("%s Vs %s,%s"%(ytitle, xtitle, st_title)) 
    #b1.SetTitleFont(62)
    #b1.SetTitleSize(0.05)
    #b1.SetMaximum(30)
    b1.SetStats(1)
    chain1.Draw(todrawb1,cuts[1])#signal
    chain1.Draw(todrawb11,cuts[1])#signal, for plotting
    #b1.Add(b11)
    print "signal todraw ",todrawb1, " cuts ", cuts[1]," b1.Getentries ",b1.GetEntries()," b11 todraw ", todrawb11, " same cut, entries ",b11.GetEntries()


    totrate = b0.GetEntries()
    totsignal = b1.GetEntries()
    

    extraEvents_ellipse_b = getEvents(chain, cuts[0]+"&& abs(%s)<=%f"%(xaxis[0], anglecut_list[0])+"&& abs(%s) == 99"%(yaxis[0]))+getEvents(chain, cuts[0]+"&& abs(%s)<=%f"%(yaxis[0], anglecut_list[1])+"&& abs(%s) == 99"%(xaxis[0]))
    extraEvents_ellipse_s1 = getEvents(chain1, cuts[1]+"&& abs(%s)<=%f"%(xaxis[1], anglecut_list[0])+"&& abs(%s)>1"%(yaxis[1]))
    extraEvents_ellipse_s2 = getEvents(chain1, cuts[1]+"&& abs(%s)<=%f"%(yaxis[1], anglecut_list[1])+"&& abs(%s) >1"%(xaxis[1]))
    print "extraEvents_ellipse_s1 ",extraEvents_ellipse_s1," cut ",cuts[1]+"&& abs(%s)<=%f"%(xaxis[1], anglecut_list[0])+"&& abs(%s)>1"%(yaxis[1])," s2 ",extraEvents_ellipse_s2," cut ",cuts[1]+"&& abs(%s)<=%f"%(yaxis[1], anglecut_list[1])+"&& abs(%s) >1"%(xaxis[1])
    extraEvents_ellipse_s = extraEvents_ellipse_s1 + extraEvents_ellipse_s2
    nEvent_list.append(b0.GetEntries())
    nEvent_list.append(getEvents(chain, cuts[0]+"&& abs(%s)<=%f"%(xaxis[0], anglecut_list[0])))#rate, overflow and underflow are included
    nEvent_list.append(getEvents(chain, cuts[0]+"&& abs(%s)<=%f"%(yaxis[0], anglecut_list[1])))
    nEvent_list.append(extraEvents_ellipse_b)
    nEvent_list.append(b1.GetEntries())
    nEvent_list.append(getEvents(chain1, cuts[1]+"&& abs(%s)<=%f"%(xaxis[1], anglecut_list[0])))#rate, overflow and underflow are included
    nEvent_list.append(getEvents(chain1, cuts[1]+"&& abs(%s)<=%f"%(yaxis[1], anglecut_list[1])))
    nEvent_list.append(extraEvents_ellipse_s)

    def getEffandRateFromEllipse(maxa, maxb, alpha, x0, y0):
	xaxis1 = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(xaxis[0], alpha, yaxis[0], alpha, x0)
	yaxis1 = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(xaxis[0], alpha, yaxis[0], alpha, y0)
	ellipse_b = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)
	xaxis2 = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(xaxis[1], alpha, yaxis[1], alpha, x0)
	yaxis2 = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(xaxis[1], alpha, yaxis[1], alpha, y0)
	ellipse_s = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis2, xaxis2, maxa, maxa, yaxis2, yaxis2, maxb, maxb)

	cut_s = cuts[1]+"&& ( "+ellipse_s+" || "+"(abs(%s)<=%f && abs(%s)>1)"%(xaxis[1], anglecut_list[0], yaxis[1])+" || "+"(abs(%s)<=%f && abs(%s)>1))"%(yaxis[1], anglecut_list[1], xaxis[1])
	cut_b = cuts[0]+"&& ("+ellipse_b+" || "+"(abs(%s)<=%f && abs(%s)>1)"%(xaxis[0], anglecut_list[0], yaxis[0])+" || "+"(abs(%s)<=%f && abs(%s)>1))"%(yaxis[0], anglecut_list[1], xaxis[0])
	nsignal = getEvents(chain1, cut_s)
	#print "signal ellipse ",cuts[1]+"&&"+ellipse_s," nsignal ",nsignal
	nrate = getEvents(chain, cut_b)
	return float(nsignal)/float(totsignal),nrate

    print "nEvent_list ",nEvent_list," anglecut_list ", anglecut_list
    """"
    xbin_m = Long(0)
    ybin_m = Long(0)
    zbin_m = Long(0)
    b1.GetMaximumBin(xbin_m, ybin_m, zbin_m)
    maxBin_x = b1.GetXaxis().GetBinCenter(xbin_m)
    maxBin_y = b1.GetYaxis().GetBinCenter(ybin_m)
    maxBin_alpha = 0
    if abs(maxBin_x)>0:
    	maxBin_alpha = atan(maxBin_y/maxBin_x)#by default in radian
    print "maxBin_x ",maxBin_x," maxBin_y ",maxBin_y," maxBin_alpha ",maxBin_alpha
    """
    maxBin_alpha = atan(anglecut_list[1]/anglecut_list[0])
    if (b1.GetEntries()<1 or b0.GetEntries() <1 ):
    	print "signal entries ",b1.GetEntries(), " bg entries ",b0.GetEntries() 
    #print "signal integral/entris ", b1.Integral() / b1.GetEntries(),"   Bg ", b0.Integral() / b0.GetEntries()
    nalpha = 0
    alpha = 0.0
    xratio = 0.0
    yratio = 0.0
    #use (0,0) as center
    centerx = 0
    centery = 0
    for factor in [1.5, 1.7, 2.0, 2.5, 3.0]:
	max_a = anglecut_list[0]*factor
	max_b = anglecut_list[1]*factor
	print "find max a b, factor ", factor," max_a ",max_a, " max_b ",max_b
    	signalAcceptanceFactor, background = getEffandRateFromEllipse(max_a, max_b, maxBin_alpha, centerx, centery)
	drawEllipse(b11, b0,nEvent_list, anglecut_list, max_a, max_b, 0, centerx, centery, signalAcceptanceFactor, background, xtitle, ytitle,st_title, text, picname+"_maxfactor%d_initial"%(int(factor*10)))
    	if signalAcceptanceFactor > fraction+0.015 or signalAcceptanceFactor >= .99:#make sure fraction<.97
		break
    for factor in [0.5, 0.4, 0.3, .2, 0.1, 0.01, 0]:
	min_a = anglecut_list[0]*factor
	min_b = anglecut_list[1]*factor
	print "find min a b, factor ", factor," min_a ",min_a, " min_b ",min_b
    	signalAcceptanceFactor, background = getEffandRateFromEllipse(min_a, min_b, maxBin_alpha, centerx, centery)
	drawEllipse(b11, b0,nEvent_list, anglecut_list, min_a, min_b, 0, centerx, centery, signalAcceptanceFactor, background, xtitle, ytitle,st_title, text, picname+"_minfractor%d_initial"%(int(factor*10)))
    	if signalAcceptanceFactor < fraction-.15:#make sure fraction<.97
		break


    a_range = frange(min_a, max_a, xbinwidth)
    b_range = frange(min_b/2.0, max_b*2.0, ybinwidth)
    dalpha = maxBin_alpha #maximum alpha range : 16/180*pi
    if dalpha > pi*16/180.0:
    	dalpha = pi*16/180.0
    alphas = [maxBin_alpha+n*dalpha/4.0 for n in range(-4, 5)]
    if doTest:
	a_range = frange(min_a, max_a, xbinwidth*4)
	b_range = frange(min_b/2.0, max_b*1.5, ybinwidth*4)
    	dalpha = 8*pi/180.0
	alphas = [maxBin_alpha+n*dalpha/2.0 for n in range(-1, 2)]
    print "arange ",a_range," brange ", b_range,  " xbinwidth ", xbinwidth ," xbins ",x_bins, " ybins ",y_bins," alphas ",alphas

    preselected_axes_signalAcc_backRej = []
    fraction = fraction/100.0
    lena = len(a_range)
    lenb = len(b_range)
    maxRate = b0.GetEntries()
    maxAccept = 0
    max_alpha = 0.
    max_b_lowedge = b_range[0]
    max_b_highedge = b_range[-1]
    bstep = fabs(b_range[1]-b_range[0])
    max_centerx = 0.0
    max_centery = 0.0
    #signalAcceptanceFactor, background = getBackgroundRejectionEllipse(max_a, max_b, 0, centerx, centery, b1, b0)
    #signalAcceptanceFactor, background = getEffandRateFromEllipse(max_a, max_b, 0, centerx, centery)

    #drawEllipse(b11, b0,nEvent_list, anglecut_list, max_a, max_b, 0, centerx, centery, signalAcceptanceFactor, background, xtitle, ytitle,st_title, text, picname+"_%d_initial"%(lena*lenb))
    totalnalpha = 7
    
    #for nalpha in range(totalnalpha):
    #for nalpha in range(1):
    #for a_axis in range(0):
    #for xratio in [0.0]:
    #for xratio in [0.0]:
    for nalpha in range(0, len(alphas)):
       alpha = alphas[nalpha]
       centerx = 0.0
       centery = 0.0
       max_b_highedge = b_range[-1]
       b_axis = max_b_highedge
       m =0
       print "nalpha ", nalpha," alpha ",alpha, " max_b ",b_axis," high dege ",max_b_highedge," centerx ",centerx," centery ", centery
       for a_axis in a_range:
	#alpha = 0.0
	    m = m+1
	    max_b_lowedge = b_range[0]
	    signalAcceptanceFactor, background = getEffandRateFromEllipse(a_axis, b_axis, alpha, centerx, centery)
	    #signalAcceptanceFactor, background = getBackgroundRejectionEllipse(a_axis, b_axis, alpha, centerx, centery, b1, b0)
	    #drawEllipse(b1, b0, a_axis, b_axis, alpha, meanx_s, meany_s, signalAcceptanceFactor, background, xtitle, ytitle,st_title, text, picname+"_nalpha%d_m%d"%(nalpha, m))
	    print "new cnenter a ", a_axis, " b ", b_axis, " alpha ",alpha, " x0 ",centerx," y0 ",centery," bhigh ",max_b_highedge, " blow ", max_b_lowedge, " signal ", signalAcceptanceFactor, " bg ",background
	    if signalAcceptanceFactor < fraction:
		    continue
	    step = max_b_highedge - max_b_lowedge
	    n =0
	    while (step> bstep):
	    #for b_axis in b_range:
		b_axis = (max_b_highedge+max_b_lowedge)/2.0
		n = n+1
		#signalAcceptanceFactor, background = getBackgroundRejectionEllipse(a_axis, b_axis, alpha, centerx, centery, b1, b0)
		signalAcceptanceFactor, background = getEffandRateFromEllipse(a_axis, b_axis, alpha, centerx, centery)
		#print "n ", n," bstep ",step, " a ", a_axis, " b ", b_axis, " signal ", signalAcceptanceFactor, " bg ",background
		if signalAcceptanceFactor > fraction:
		    max_b_highedge = b_axis
		    if background < maxRate:
			print " n ", n," bstep ",step, " a ", a_axis, " b ", b_axis," nalpha ", nalpha, " alpha ",alpha," x0 ", centerx, " y0 ", centery," signal ", signalAcceptanceFactor, " bg ",background
			maxRate = background
			maxAccept = signalAcceptanceFactor
			max_a = a_axis
			max_b = b_axis
			max_alpha = alpha
			max_centerx = centerx
			max_centery = centery
			drawEllipse(b11, b0, nEvent_list, anglecut_list, a_axis, b_axis, max_alpha, max_centerx, max_centery, signalAcceptanceFactor, background, xtitle, ytitle,st_title, text, picname+"_nalpha%d_m%d_n%d"%(nalpha, m,n))
		    #preselected_axes_signalAcc_backRej.append([a_axis, b_axis, signalAcceptanceFactor, background])
		else:
		    max_b_lowedge = b_axis	     
		step = max_b_highedge - max_b_lowedge	
	    max_b_highedge = b_axis+2*ybinwidth
	
    
    nEvent_list[4] = maxRate
    nEvent_list[-1] = int(nEvent_list[5]*maxAccept) 
    #ellipse = "%s*%s/(%f*%f)+%s*%s/(%f*%f)<1.0"%(xaxis, xaxis, max_a, max_a, yaxis, yaxis, max_b, max_b)
    print "max_a ",max_a," max_b ",max_b, " alpha ",max_alpha, " x0 ",max_centerx," y0 ",max_centery ," signalAcceptanceFactor ",maxAccept," background ",maxRate," final nEvent_list ",nEvent_list
    return (max_a, max_b, max_alpha, max_centerx, max_centery)
            

def gethist1D(chain,den, todraw="pt"):
	
    h1 = ROOT.TH1F("h1","h1",len(myptbins)-1, myptbins)
    #h1 = ROOT.TH1F("h1","h1",50, 0.0, 50.0)
    chain.Draw("fabs(%s) >> h1"%todraw,den)
    #print "gethist1D, den ",den
    #h1.Print("ALL")
    return h1


def gethist1DEta(chain, den, todraw="eta"):
    h1 = ROOT.TH1F("h1","h1", len(myetabin)-1, myetabin)
    chain.Draw("fabs(%s) >> h1"%todraw,den)
    return h1

def getUpperlimit(h, fractionToKeep):

    ## just a safety to prevent it from crashing
    if h.GetEntries() == 0:
        return 0.0000
    
    ax = h.GetXaxis()
    total = h.Integral()
    bin = 1
    fractionToKeep = fractionToKeep/100.0
    for b in range(ax.GetNbins()):
        if (h.Integral(0,b)/total > fractionToKeep):
            bin = b - 1
            break

    ## interpolate
    x1 = ax.GetBinUpEdge(bin)
    x2 = ax.GetBinUpEdge(bin + 1)
    y1 = h.Integral(0, bin)/total
    y2 = h.Integral(0, bin + 1)/total
    x = x1 + (fractionToKeep - y1)/(y2-y1)*(x2-x1)
    return x

def getcuts(filedir, treename0, den, num, pt, npar,etamin, etamax, fractionToKeep,x_bins, xtitle, txt, picname):
	
    	xBins = int(x_bins[1:-1].split(',')[0])
    	xminBin = float(x_bins[1:-1].split(',')[1])
    	xmaxBin = float(x_bins[1:-1].split(',')[2])
    	if (etamin<1.6):
    		ring = 2
    	if (etamin>=1.6):
        	ring = 1
    	chain = ROOT.TChain(treename0)
   	chain3 = ROOT.TChain("GEMCSCAnalyzer/trk_eff_CSC_ME2%d"%ring)
    	if os.path.isdir(filedir):
    		ls = os.listdir(filedir)
    	 	for x in ls:
	      		if not(x.endswith(".root")):
				#print "x.endswith(.root) ", x.endswith(".root")
				continue
			x = filedir[:]+x
    			if os.path.isdir(x):
				continue
			chain.Add(x)
			chain3.Add(x)
    	elif os.path.isfile(filedir):
		chain.Add(filedir)
		chain3.Add(filedir)
    	else:
	  	print " it is not file or dir ", filedir

	chain.AddFriend(chain3)

	evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
	#hasnum = "&& fabs(%s)>0"%(num)
	hist = ROOT.TH1F("hist","hist",3000,0.0,xmaxBin*1.5)
	if pt>2 and pt<10:
    		deltapt=.5
	else:
	   	deltapt=1.0	   
        chain.Draw("TMath::Abs(%s)>>hist"%(num),den+"&& pt>%f && pt<%f"%(pt-deltapt, pt+deltapt))
       	#hist.Print("ALL")
	upperlim = getUpperlimit(hist, fractionToKeep)
       	print "cuts ",den+"&& pt>%f && pt<%f"%(pt-1, pt+1)," upperlim ",upperlim
        return upperlim
        """
	print "eta%dto%dnpar%d%spt%dfraction%d:%f"%(int(etamin*10), int(etamax*10), npar,num,pt,fractionToKeep,upperlim)
	c1 = ROOT.TCanvas()
	c1.SetGridx()
	c1.SetGridy()
	c1.SetTickx()
	c1.SetTicky()
        hist.Draw()
     	hist.GetXaxis().SetTitle("%s"%xtitle)
     	hist.GetYaxis().SetTitle("%s"%ytitle)
	hist.SetTitle("%s distribution "%xtitle)
	#tex = ROOT.TLatex(0.15,0.87,"%s"%txt)
	tex = ROOT.TLatex(0.4,0.6,"#splitline{%s}{p_{T}>%d GeV, cut:%.4f}"%(txt,pt, upperlim))
	tex.SetTextSize(0.05)
	tex.SetTextFont(62)
	tex.SetNDC()
	#tex.Draw("same")
        #return Teffs
	#c1.Update()
	#c1.SaveAs("%s_Plateau%d_binsimPt%d.png"%(picname, fractionToKeep,pt))
	#c1.SaveAs("%s_Plateau%d_binsimPt%d.pdf"%(picname, fractionToKeep,pt))

    	"""
#_____________________________________________________________
def makeEffplot_v2(chainlist,todraw, den, num, etamin, etamax, xtitle,ytitle,leg, legheader, txt,picname):
	
    color = [ ROOT.kOrange+7, ROOT.kBlue, ROOT.kBlue, ROOT.kGreen+2, ROOT.kRed]
    color = [ROOT.kRed, ROOT.kBlack, ROOT.kBlue, ROOT.kGreen+2, ROOT.kGreen]
    marker = [26,21, 25, 20, 24]
    b1 = ROOT.TH1F("b1","b1",len(myptbins)-1, myptbins)
    #b1 = ROOT.TH1F("b1","b1", 50, 0.0, 50.0)
    b1.GetYaxis().SetRangeUser(0.00,1.05)
    b1.GetYaxis().SetTitleOffset(1.1)
    b1.GetYaxis().SetNdivisions(520)
    b1.GetYaxis().SetTitle("L1 trigger efficiency")
    b1.GetXaxis().SetTitle("True muon p_{T} [GeV]")
    b1.GetXaxis().SetTitleSize(0.05)
    b1.GetXaxis().SetLabelSize(0.05)
    b1.GetYaxis().SetTitleSize(0.05)
    b1.GetYaxis().SetLabelSize(0.05)
    #b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 0 PU")
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")

    
    
    Teffs = []
    hdens = []
    hnums = []
    npars = 4
    Upperlimits = [0 for x in range(npars)]
    #color = [ROOT.kBlue, ROOT.kRed, ROOT.kMagenta+2, ROOT.kGreen+2,ROOT.kCyan+2]
    #maker = [20,21,22,23,33]
    
    if (etamin<1.6):
	    ring = 2
    if (etamin>=1.6):
	    ring = 1
    #muons = ["Prompt Muons","Displaced Muons, 5<|d_{xy}|<50cm"]
    muons = ["Prompt Muons","Prompt Muons"]
    for n in range(len(chainlist)):
	#if n>=1:
	#    continue
	#print "n ",n
	chain = chainlist[n]
	hden = ROOT.TH1F("hden%d"%n,"hden%d"%n,len(myptbins)-1, myptbins)
	hnum = ROOT.TH1F("hnum%d"%n,"hnum%d"%n,len(myptbins)-1, myptbins)
	for i in range(len(myptbins)):
		hden.SetBinContent(i, 0)
		hnum.SetBinContent(i,.0)
	#Teffs.append(ROOT.TEfficiency(hnum, hden))
	hdens.append(hden)
	hnums.append(hnum)
	hdens[n].Add(gethist1D(chain, den[n],todraw))
	hnums[n].Add(gethist1D(chain, den[n]+" && %s"%(num[n]), todraw))
	#print " den cut ",den[n]," entries ", hdens[n].GetEntries()," num cut ", den[n]+" && %s"%(num[n])," entries ",hnums[n].GetEntries()


    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()

    b1.SetStats(0)
    b1.Draw()
    dy = 0.05*(len(chainlist)+1)
    #legend = ROOT.TLegend(0.45,0.15,0.9,0.5)
    legend = ROOT.TLegend(0.42,0.20,0.88,0.2+dy)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.05)
    legend.SetHeader("%s"%legheader)
    for n in range(len(chainlist)):
	#if n>=1:
	#    continue
	Teffs.append(ROOT.TEfficiency(hnums[n],hdens[n]))	
	SetOwnership(Teffs[n], False)
	m = len(Teffs)-1
	Teffs[m].SetLineColor(color[n])
	Teffs[m].SetLineWidth(2)
	Teffs[m].SetMarkerColor(color[n])
	Teffs[m].SetMarkerStyle(marker[n])
	Teffs[m].Draw("sameZ")
	legend.AddEntry(Teffs[n],"%s"%leg[n],"pl")
    #print "Teffs ",Teffs
    #Teffs[0].Print("ALL")
    legend.Draw("same")

    tex = ROOT.TLatex(0.44,0.57,"%s"%txt)
    #tex = ROOT.TLatex(0.45,0.57,"#splitline{%s}{%d%% eff at %d [GeV]}"%(txt,fractionToKeep,pt))
    #tex = ROOT.TLatex(0.45,0.57,"#splitline{%s}{check the sign of #Delta Y_{12} and #Delta Y_{23}}"%(txt))
    tex.SetTextSize(0.05)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))
    return Teffs
	

#_____________________________________________________________
def makeEffplot_eta(chainlist,todraw, den, num, etamin, etamax, xtitle,ytitle,leg, legheader, txt,picname):
	
    color = [ ROOT.kRed, ROOT.kBlue, ROOT.kBlue, ROOT.kGreen+2, ROOT.kRed]
    marker = [26, 25, 21, 24, 20]
    b1 = ROOT.TH1F("b1","b1", len(myetabin)-1, myetabin)
    b1.GetYaxis().SetRangeUser(0.0,1.05)
    b1.GetYaxis().SetTitleOffset(1.1)
    b1.GetYaxis().SetNdivisions(520)
    b1.GetXaxis().SetTitle(xtitle)
    b1.GetYaxis().SetTitle(ytitle)
    b1.GetXaxis().SetTitleSize(0.05)
    b1.GetXaxis().SetLabelSize(0.05)
    b1.GetYaxis().SetTitleSize(0.05)
    b1.GetYaxis().SetLabelSize(0.05)
    #b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*8+" 14 TeV, 200 PU")
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
    
    
    Teffs = []
    hdens = []
    hnums = []
    npars = 4
    Upperlimits = [0 for x in range(npars)]
    #print "chainlist ",chainlist
    
    if (etamin<1.6):
	    ring = 2
    if (etamin>=1.6):
	    ring = 1
    #legend = ROOT.TLegend(0.45,0.15,0.9,0.5)
    legend = ROOT.TLegend(0.45,0.20,0.8,0.50)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.05)
    legend.SetHeader("%s"%legheader)
    muons = ["Prompt Muons","Displaced Muons, 5<|d_{xy}|<50cm"]
    for n in range(len(chainlist)):
	#	print "n ",n," den ",den[n]," num ",num[n]
	hden = ROOT.TH1F("hden%d"%n,"hden%d"%n,len(myetabin)-1, myetabin)
	hnum = ROOT.TH1F("hnum%d"%n,"hnum%d"%n,len(myetabin)-1, myetabin)
	for i in range(0, len(myetabin)-1):
		hden.SetBinContent(i, 0)
		hnum.SetBinContent(i,.0)
	#Teffs.append(ROOT.TEfficiency(hnum, hden))
	hdens.append(hden)
	hnums.append(hnum)
	chain = chainlist[n]
	#print "den ",den[n]," num ", num[n], " todraw ",todraw
	hdens[n].Add(gethist1DEta(chain, den[n],todraw))
	hnums[n].Add(gethist1DEta(chain, den[n]+" && %s"%(num[n]), todraw))

    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()

    b1.SetStats(0)
    b1.Draw()
    for n in range(len(chainlist)):
	Teffs.append(ROOT.TEfficiency(hnums[n],hdens[n]))	
	SetOwnership(Teffs[n], False)
	m = len(Teffs)-1
	Teffs[m].SetLineColor(color[n])
	Teffs[m].SetLineWidth(2)
	Teffs[m].SetMarkerColor(color[n])
	Teffs[m].SetMarkerStyle(marker[n])
	Teffs[m].Draw("sameZ")
	legend.AddEntry(Teffs[n],"%s"%leg[n],"pl")
    #print "Teffs ",Teffs
    #Teffs[0].Print("ALL")
    legend.Draw("same")

    tex = ROOT.TLatex(0.35,0.57,"%s"%txt)
    #tex = ROOT.TLatex(0.45,0.57,"#splitline{%s}{%d%% eff at %d [GeV]}"%(txt,fractionToKeep,pt))
    #tex = ROOT.TLatex(0.45,0.57,"#splitline{%s}{check the sign of #Delta Y_{12} and #Delta Y_{23}}"%(txt))
    tex.SetTextSize(0.05)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))
    return Teffs

def makeplots(Teffs, legs, text, picname):
    color = [ROOT.kRed, ROOT.kBlue,  ROOT.kBlack, ROOT.kGreen+2, kBlack]
    marker = [26, 25, 21, 20, 24]

    b1 = ROOT.TH1F("b1","b1",len(ptbins)-1, ptbins)
    #b1 = ROOT.TH1F("b1","b1",50,0.0, 50.0)
    b1.GetYaxis().SetRangeUser(0.0,1.05)
    b1.GetYaxis().SetTitleOffset(1.1)
    b1.GetYaxis().SetNdivisions(520)
    b1.GetYaxis().SetTitle("L1 trigger efficiency")
    b1.GetXaxis().SetTitle("True muon p_{T} [GeV]")
    b1.GetXaxis().SetTitleSize(0.05)
    b1.GetXaxis().SetLabelSize(0.05)
    b1.GetYaxis().SetTitleSize(0.05)
    b1.GetYaxis().SetLabelSize(0.05)
    #b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
    
    
    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()

    dy_leg = .05+ 0.06*len(Teffs)
    
    legend = ROOT.TLegend(0.4,0.2,0.9,0.2+dy_leg)
    legend.SetHeader("L1Mu(standalone) Performance")
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.04)
    #legend.SetHeader("%"%legheader)
    b1.SetStats(0)
    b1.Draw()
    for n in range(len(Teffs)):
	Teffs[n].SetLineColor(color[n])
	Teffs[n].SetLineWidth(2)
	Teffs[n].SetMarkerColor(color[n])
	Teffs[n].SetMarkerStyle(marker[n])
	Teffs[n].Draw("samepZ")
	legend.AddEntry(Teffs[n],"%s"%legs[n],"pl")
    legend.Draw("same")

    tex = ROOT.TLatex(0.43,0.55,"%s"%text)
    tex.SetTextSize(0.05)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))


def makeplotsEta(Teffs, legs, legheader, text, picname):
	
    color = [ROOT.kGreen+2, ROOT.kGreen+2, ROOT.kBlue, ROOT.kBlue,  ROOT.kOrange+7]
    marker = [20, 24, 21, 25, 26]
    color = [ROOT.kRed,ROOT.kBlue, ROOT.kBlack, ROOT.kGreen+2, ROOT.kGreen]
    marker = [26, 25, 21, 20, 24]

    etabin = [1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55]
    myetabin = np.asarray(etabin)
    b1 = ROOT.TH1F("b1","b1", len(myetabin)-1, myetabin)
    b1.GetYaxis().SetRangeUser(0.50,1.05)
    b1.GetYaxis().SetTitleOffset(1.1)
    b1.GetYaxis().SetNdivisions(520)
    b1.GetYaxis().SetTitle("L1 trigger efficiency")
    b1.GetXaxis().SetTitle("Simulated |#eta|")
    b1.GetXaxis().SetTitleSize(0.05)
    b1.GetXaxis().SetLabelSize(0.05)
    b1.GetYaxis().SetTitleSize(0.05)
    b1.GetYaxis().SetLabelSize(0.05)
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")

    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()

    dy_leg = 0.05*(len(Teffs)+1)
    
    legend = ROOT.TLegend(0.2, 0.15,0.85,0.15+dy_leg)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.05)
    legend.SetHeader("%s"%legheader)
    b1.SetStats(0)
    b1.Draw()
    for n in range(len(Teffs)):
	Teffs[n].SetLineColor(color[n])
	Teffs[n].SetLineWidth(2)
	Teffs[n].SetMarkerColor(color[n])
	Teffs[n].SetMarkerStyle(marker[n])
	Teffs[n].Draw("samepZ")
	legend.AddEntry(Teffs[n],"%s"%legs[n],"pl")
    legend.Draw("same")

    tex = ROOT.TLatex(0.15,0.88,"%s"%text)
    tex.SetTextSize(0.04)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))

def getRateVsEtav2(L1MuTriggerRate, histname, myetabin, cut):
    etabin = [1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2.0, 2.05, 2.1, 2.15, 2.2, 2.25,2.3, 2.35,2.4, 2.45]
    #etabin = [1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55]
    myetabin = np.asarray(etabin)
    hist = TH1F(histname, histname, len(myetabin)-1, myetabin)
    L1MuTriggerRate.Draw("abs(L1Mu_eta)>>"+histname, cut)
    hist.GetXaxis().SetTitle("L1Mu |#eta|")
    hist.GetYaxis().SetTitle("L1 Trigger Rate [kHz]")
    SetOwnership(hist, False)
    return hist


def getRateVsEta(L1MuTriggerRate, histname, myetabin, cut):
    hist = TH1F(histname, histname, len(myetabin)-1, myetabin)
    L1MuTriggerRate.Draw("abs(L1Mu_eta)>>"+histname, cut)
    hist.GetXaxis().SetTitle("L1Mu |#eta|")
    hist.GetYaxis().SetTitle("L1 Trigger Rate [kHz]")
    SetOwnership(hist, False)
    return hist

def plotshistograms(hists, legs,legheader, text, picname, RateVsPt=False):

    color = [ROOT.kGreen+2, ROOT.kGreen+2, ROOT.kBlue, ROOT.kBlue,  ROOT.kOrange+7]
    color = [ ROOT.kRed, ROOT.kBlue, ROOT.kBlack, ROOT.kGreen+2]
    marker = [26, 25, 21, 24, 20]
    #hs = ROOT.THStack("hs"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*7+" 14 TeV, 200 PU")
    hs = ROOT.THStack("hs"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()
    c1.SetLogy()
    if RateVsPt:
	hs.SetMinimum(.1)
	#hs.SetMaximum(500.)
        hs.SetMaximum(2000)
    #else:
	#hs.SetMinimum(.01)
	#hs.SetMaximum(100.)
	#pass

    dy_leg = 0.05*(len(hists)+1)

    x0 = 0.2; x1 =0.75; y0 = 0.15; 
    if RateVsPt:
	    x0 = 0.5; x1 = 0.88; y0 = 0.7
    #legend = ROOT.TLegend(0.15,0.15,0.6,0.15+dy_leg)
    legend = ROOT.TLegend(x0, y0, x1, y0+dy_leg)

    legend.SetHeader(legheader)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.05)
    nhist = -1
    for hist in hists:
	nhist +=1
	hist.SetMarkerColor(color[nhist])
	hist.SetLineColor(color[nhist])
	hist.SetLineWidth(2)
	hist.SetMarkerStyle(marker[nhist])
	hist.SetMarkerSize(1)
	hist.SetLineWidth(2)
	#for rate
	#hist.Scale(SF)
	hs.Add(hist)
	#legend.AddEntry(hist, legs[nhist]+",event:%d"%hist.GetEntries(),"pl")
	legend.AddEntry(hist, legs[nhist],"pl")
    hs.Draw("nostacke")
    legend.Draw("same")
    if RateVsPt:
	c1.SetLogy()
	#c2.SetLogx()
	c1.SetGridx()
	c1.SetGridy()
	
    c1.Update()
    c1.Modified()
    #print "hists[0] ",hists[0]
    #hs.GetHistogram().GetXaxis().SetTitle(hists[0].GetXaxis().GetTitle())
    #hs.GetHistogram().GetYaxis().SetTitle(hists[0].GetYaxis().GetTitle())
    hs.GetHistogram().GetXaxis().SetTitle("L1Mu |#eta|")
    texh=0.88
    if RateVsPt:
	hs.GetHistogram().GetXaxis().SetTitle("Trigger p_{T} threshold [GeV]")
	texh = 0.2
    hs.GetHistogram().GetYaxis().SetTitle("L1 Trigger rate [kHz]")
    hs.GetHistogram().GetXaxis().SetTitleSize(.05)
    hs.GetHistogram().GetYaxis().SetTitleSize(.05)
	
    tex = ROOT.TLatex(0.2,texh,"%s"%text)
    tex.SetTextSize(0.045)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))

##############################################################3


treename = "GEMCSCAnalyzer/trk_eff_CSC_ALL"
filedir16 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt2_50_1M/GEMCSC_Ana_ctau0_Pt2_50_PU140_20170314/170315_023223/0000/combined/out_ana_prompt.root"
#filedir46 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt10_100k/GEMCSC_Ana_ctau0_Pt10_PU0_20170222/170222_173137/0000/combined/out_ana_fixedpt.root"
filedir16 = "out_ana_prompt_pu140_1M_20170314.root"
filedir46 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt7_100k/GEMCSC_Ana_ctau0_Pt7_PU0_20170303/170303_233949/0000/combined/out_ana_fixedpt.root"

evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
netas = [1.2,1.4,1.6,1.8,2.0,2.2]
netas = [1.6,1.8,2.0,2.2]
allnpar = [0,1,2,3]
filedirs_v6 = [filedir16, filedir46]
#filedirs_v6 = ["out_ana.root","out_ana.root"]
fraction = 98
if len(sys.argv)>=3:
	#take dir name from arguments, condor mode
	#pt = int(sys.argv[])
	#fraction = int(sys.argv[2])
        outputdir1 = sys.argv[1]
        outputdir2 = sys.argv[2]
	#outputdir1 = "Profile_Ellipse_PT_0929_Pt%d_BGPt%d/"%(pt1,pt2)
	#outputdir2 = "Hybrid_Ellipse_PT_0929_Pt%d_BGPt%d/"%(pt1,pt2)
	#filedirs_v6 = ["out_ana_prompt.root","out_ana_displaced.root"]
	filedirs_v6 = ["out_ana_prompt.root","out_ana_fixedpt.root"]
	#if outputdir1[-1] != "/":
	#	outputdir1 = outputdir1+"/"
	#if outputdir2[-1] != "/":
	#	outputdir2 = outputdir2+"/"
else:
	pt = 10
	pt1 = 0
	outputdir1 = "GEMCSC_20170621_00_local_badGE11_20_ratept/"
	outputdir2 = "GEMCSC_20170814_RateVseff_pt40_badGE11frac30/"
	outputdir2 = "GEMCSC_20170904_RateVsPT_badGE11Frac30_newEtabin/"

#pt1 = 10
#pt2 = 7
#LUT = open("GEMCSCBendinghybridLUT_Pt%d_fraction%d.log"%(pt, fraction),"w+")
#LUT_nEvent = open("EventNum_Pt%d_fraction%d.log"%(pt, fraction),"w+")
LUT_st1 = open("GEMCSCBendingGE11LUT_alltest.log","w+")
LUT_st2 = open("GEMCSCBendingGE21LUT_alltest.log","w+")
#for npt in range(len(Pts)):	
def plotalleta(pt, simpt, netas, fraction, outputrootfile, allLUTfile, badGE11bending=0):
    simpt_h = simpt
    badeff = badGE11bending*1.0/100.0
    Teffs_0 = []
    Teffs_0_ME11 = []
    Teffs_0_ME21 = []
    extrapic=""
    extratxt=""
    #fraction_d = 99
    #LUT.write("eta%dto%dfraction%d"%(int(netas[0]*10), int(netas[-1]*10), fraction)+extratxt+"\n")
    #LUT_nEvent.write("eta%dto%dfraction%d"%(int(netas[0]*10), int(netas[-1]*10), fraction)+extratxt+"\n")
    LUT_st1.write("eta%dto%dpt%dfraction%d"%(int(netas[0]*10), int(netas[-1]*10),pt, fraction)+extratxt+"\n")
    LUT_st2.write("eta%dto%dpt%dfraction%d"%(int(netas[0]*10), int(netas[-1]*10),pt, fraction)+extratxt+"\n")
    
    ratefile = TFile(ratesample)
    h_total = ratefile.Get("h_eventcountME0Segment192")
    rateEvents = h_total.GetEntries()
    L1MuTriggerRate = TChain("L1MuTriggerRateME0Segment192")
    addFilesToChain(L1MuTriggerRate, ratesample)

    GEMCSCTrackCh0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    GEMCSCME11Ch0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME11")
    GEMCSCME21Ch0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME21")
    GEMCSCTrackCh1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    GEMCSCME11Ch1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME11")
    GEMCSCME21Ch1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME21")
    addFilesToChain(GEMCSCTrackCh0, signalsampleGE11only) 
    addFilesToChain(GEMCSCME11Ch0, signalsampleGE11only) 
    addFilesToChain(GEMCSCME21Ch0, signalsampleGE11only) 
    addFilesToChain(GEMCSCTrackCh1, signalsample) 
    addFilesToChain(GEMCSCME11Ch1, signalsample) 
    addFilesToChain(GEMCSCME21Ch1, signalsample) 
    GEMCSCTrackCh0.AddFriend(GEMCSCME11Ch0)
    GEMCSCTrackCh0.AddFriend(GEMCSCME21Ch0)
    GEMCSCTrackCh1.AddFriend(GEMCSCME11Ch1)
    GEMCSCTrackCh1.AddFriend(GEMCSCME21Ch1)
    GEMCSCTrackCh0_CSConly = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    addFilesToChain(GEMCSCTrackCh0_CSConly, signalsampleCSConly) 

    Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
    GE11Cuts = []
    GE21Cuts = []
    rate_x = "gemdphi_st1"
    rate_y = "gemdphi_st2"
    legs = ["prompt muon","prompt muon with fixed pt"]
    legsall = ["CSC only","CSC + GE11"," CSC + GE11 + GE21"]
    efflist = []
    ratelist = []
    ratehist_csc_list = []
    ratehist_st1_list = []
    ratehist_h_list = []
    quality = 0; quality2 = 0
    dR1cut = .1
    for neta in range(len(netas)-1):
       
       if (netas[neta]<0 or netas[neta+1]<0):
	    continue
       etamin = netas[neta]
       etamax = netas[neta+1]
       GE11Cuts.append([])
       GE21Cuts.append([])
       ratehist_h_all = 0
       Teffallnpars = []
       Teffallnpars_ME11 = []
       Teffallnpars_ME21 = []
       #pt = Pts[npt]
       #pt1 = Pts_1[npt]
       #etacuts = "fabs(L1Mu_eta)>%f && fabs(L1Mu_eta)<%f"%(netas[neta], netas[neta+1])
       etacuts = "fabs(eta)>%f && fabs(eta)<%f"%(netas[neta], netas[neta+1])
       ring = 1
       #LUT.write("{\n")
       #LUT_nEvent.write("{\n")
       LUT_st1.write("{\n")
       LUT_st2.write("{\n")
       #basesignalcut = etacuts + "&& has_tfTrack>0 && has_gmtCand>0 && L1Mu_quality>=%d && nstubs>=2 && meRing==%d "%(quality, ring)
       #basesignalcut = etacuts + "&& has_tfTrack>0 && has_gmtCand>0 && nstubs>=2 && meRing==%d "%(ring)
       basesignalcut = etacuts
       
       nevenodd = 0
       for evenodd in ["odd","even"]:
	    if fraction==100:
		xcut = 100
		ycut = 100
	    else:
		    #algos_lut = getFinalLUTValue(pt, fraction, etamin, etamax, nevenodd, allLUTfile)
		algos_lut = getGE11GE21LUTValue(pt, fraction, etamin, etamax, nevenodd, allLUTfile)
		xcut = algos_lut["GE11"]
		ycut = algos_lut["GE21"]
		xaxis = "trk_eff_CSC_ME11.dphi_pad_fit_%s"%(evenodd)
		yaxis = "trk_eff_CSC_ME21.dphi_pad_fit_%s"%(evenodd)
		#xcut1 = getCut(GEMCSCTrackCh0, xaxis, basesignalcut+"&& fabs(%s)<1"%(xaxis)+" && L1Mu_pt>=%f && pt>=%f && pt<%f"%(pt, pt-1, pt+2), 0.0, 0.05, 0.00001, fraction)
		#ycut1 = getCut(GEMCSCTrackCh0, yaxis, basesignalcut+"&& fabs(%s)<1"%(yaxis)+" && L1Mu_pt>=%f && pt>=%f && pt<%f"%(pt, pt-1, pt+2), 0.0, 0.05, 0.00001, fraction)
	    #print evenodd," xcut from LUT ",xcut," xcut here ",xcut1#, " ycut from LUT ",ycut," ycut here ",ycut1
	    nevenodd += 1
	    #LUT_st1.write("%f"%xcut)
	    #LUT_st2.write("%f"%ycut)
	    #if evenodd == "odd":
		#LUT_st1.write(",")
		#LUT_st2.write(",")
	    GE11Cuts[neta].append(xcut)
	    GE21Cuts[neta].append(ycut)
		    
       #LUT_st1.write("\n},\n")
       #LUT_st2.write("\n},\n")
       print "frac ",fraction, " GE11 cuts ",GE11Cuts, " GE21cuts ",GE21Cuts
       text1 = "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV"%(netas[neta],netas[neta+1], pt)
       baseratecut2 = "hasME1 && CSCTF_dR1<%f && maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f"%(dR1cut, etamin, etamax, quality2, pt)
       #baseratecut_CSConly = "maxPromptPt && abs(L1Mu_eta)>1.6 && abs(L1Mu_eta)<2.4 && L1Mu_quality>=12 && L1Mu_pt>=%f"%( pt)
       #ratehist_CSC = getRateVsEta(L1MuTriggerRate, "ratehist_CSConly_eta%dto%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), pt), myetabin, baseratecut_CSConly) 

       L1MuQcut = "L1Mu_quality>=%d && "%quality
       GE11bendingCut = L1MuQcut+ "L1Mu_pt>=%f && L1Mu_st1_dR< %f  && (abs(trk_eff_CSC_ME11.dphi_pad_fit_odd)<%f || abs(trk_eff_CSC_ME11.dphi_pad_fit_even)<%f)"%(pt, dR1cut, GE11Cuts[neta][0], GE11Cuts[neta][1])
       GE11bendingCut_bad = L1MuQcut+"L1Mu_pt>=%f && L1Mu_st1_dR< %f && (((abs(trk_eff_CSC_ME11.dphi_pad_fit_odd)<%f || abs(trk_eff_CSC_ME11.dphi_pad_fit_even)<%f)"%(pt, dR1cut,  GE11Cuts[neta][0], GE11Cuts[neta][1])+"&& rand01_v1>%f) || (rand01_v1<%f && L1Mu_st1_dR< %f))"%(badeff, badeff, dR1cut)
       #GE11bendingCut = L1MuQcut+ "L1Mu_pt>=%f && hasME1 && (abs(trk_eff_CSC_ME11.dphi_pad_fit_odd)<%f || abs(trk_eff_CSC_ME11.dphi_pad_fit_even)<%f)"%(pt, GE11Cuts[neta][0], GE11Cuts[neta][1])
       #GE11bendingCut_bad = L1MuQcut+"L1Mu_pt>=%f && hasME1 && (((abs(trk_eff_CSC_ME11.dphi_2strippad_fit_odd)<%f || abs(trk_eff_CSC_ME11.dphi_2strippad_fit_even)<%f)"%(pt, GE11Cuts[neta][0], GE11Cuts[neta][1])+"&& rand01_v1>%f) || (rand01_v1<%f && trk_eff_CSC_ME11.has_gem_pad>0))"%(badeff, badeff)
       GE21bendingCut = L1MuQcut+ "L1Mu_pt>=%f && (abs(trk_eff_CSC_ME21.dphi_pad_fit_odd)<%f || abs(trk_eff_CSC_ME21.dphi_pad_fit_even)<%f)"%(pt, GE21Cuts[neta][0], GE21Cuts[neta][1])

       Teffs_cutx = makeEffplot_v2([GEMCSCTrackCh0], "pt",[basesignalcut],[GE11bendingCut], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11" ,text1,outputdir2+"GEMCSC_St1_GE11cut_eff_20170208_pt%d_fraction%d_st2eta%dto%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       TeffsEta_cutx = makeEffplot_eta([GEMCSCTrackCh0], "abs(eta)",[basesignalcut+" && pt>=%d"%(simpt)],[GE11bendingCut], netas[neta], netas[neta+1],"Simulated |#eta|","bending angle cut efficiency",legs,"GE11-ME11" ,text1,outputdir2+"GEMCSC_St1_GE11cut_effvseta_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_all"%(pt, simpt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       
       Teffs_cutx_badeff = makeEffplot_v2([GEMCSCTrackCh0], "pt",[basesignalcut],[GE11bendingCut_bad], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11" ,text1,outputdir2+"GEMCSC_St1_GE11cut_eff_20170208_pt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       TeffsEta_cutx_badeff = makeEffplot_eta([GEMCSCTrackCh0], "abs(eta)",[basesignalcut+" && pt>=%d"%(simpt)],[GE11bendingCut_bad], netas[neta], netas[neta+1],"Simulated |#eta|","bending angle cut efficiency",legs,"GE11-ME11" ,text1,outputdir2+"GEMCSC_St1_GE11cut_effvseta_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, simpt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       #print "Signal GE11 basecut ",basesignalcut," bending angle cut ",GE11bendingCut," GE11bending cut bad ",GE11bendingCut_bad
       Teffs_cuty = makeEffplot_v2([GEMCSCTrackCh1], "pt",[basesignalcut], [GE21bendingCut], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE21-ME21" ,text1,outputdir2+"GEMCSC_St2_GE21cut_eff_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_all"%(pt, simpt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       TeffsEta_cuty = makeEffplot_eta([GEMCSCTrackCh1], "abs(eta)",[basesignalcut+" && pt>=%d"%(simpt)], [GE21bendingCut], netas[neta], netas[neta+1],"Simulated |#eta|","bending angle cut efficiency",legs,"GE21-ME21" ,text1,outputdir2+"GEMCSC_St2_GE21cut_effvseta_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_all"%(pt, simpt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       #Teffs_cutx[0].SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%d"%(pt)+"fraction%d"%fraction)
       #Teffs_cuty[0].SetName("GE21eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%d"%(pt)+"fraction%d"%fraction)
       #Teffs_cutx[0].Write()
       #Teffs_cuty[0].Write()
       Teffallnpars_ME11.append(Teffs_cutx)
       Teffallnpars_ME21.append(Teffs_cuty)

       GE11SignalCut_h = "("+GE11bendingCut+"&& (!hasME2 || (abs(trk_eff_CSC_ME21.dphi_pad_fit_even)>1 && abs(trk_eff_CSC_ME21.dphi_pad_fit_odd)>1))"+")"
       GE21SignalCut_h = "("+GE21bendingCut+"&& (L1Mu_st1_dR>%f || (abs(trk_eff_CSC_ME11.dphi_pad_fit_even)>1 && abs(trk_eff_CSC_ME11.dphi_pad_fit_odd)>1)) && abs(eta)>2.1"%(dR1cut)+")"
       GE11SignalCut_h_bad = "("+GE11bendingCut+" && (!hasME2 || (abs(trk_eff_CSC_ME21.dphi_pad_fit_even)>1 && abs(trk_eff_CSC_ME21.dphi_pad_fit_odd)>1) )&& rand01_v1>%f"%badeff+")"
       GE21SignalCut_h_bad = "("+GE21bendingCut+"&& L1Mu_st1_dR<%f && (L1Mu_st1_dR>%f || (abs(trk_eff_CSC_ME11.dphi_pad_fit_even)>1 && abs(trk_eff_CSC_ME11.dphi_pad_fit_odd)>1) || (L1Mu_st1_dR<%f && rand01_v1<%f))"%(dR1cut, dR1cut, dR1cut, badeff)+")"
       GE21SignalCut_h_bad_type2 = "("+GE21bendingCut+"&& L1Mu_st1_dR<%f && rand01_v1<%f)"%(dR1cut, badeff)
       GE21SignalCut_h_bad_type1 = "("+GE21bendingCut+"&& abs(eta)>2.1 && (L1Mu_st1_dR>%f || (abs(trk_eff_CSC_ME11.dphi_pad_fit_even)>1 && abs(trk_eff_CSC_ME11.dphi_pad_fit_odd)>1))"%(dR1cut)+")"
       #GE11SignalCut_h = "("+GE11bendingCut+"&& (!hasME2 || (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)>1 && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)>1)) "+")"
       #GE21SignalCut_h = "("+GE21bendingCut+"&& (!hasME1 || (abs(trk_eff_CSC_ME11.dphi_2strippad_fit_even)>1 && abs(trk_eff_CSC_ME11.dphi_2strippad_fit_odd)>1)) && abs(eta)>2.1"+")"
       #GE11SignalCut_h_bad = "("+GE11bendingCut+"&& ((!hasME2 || (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)>1 && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)>1)) && rand01_v1>%f)"%badeff+")"
       #GE21SignalCut_h_bad = "("+GE21bendingCut+"&& ((!hasME1 || (abs(trk_eff_CSC_ME11.dphi_2strippad_fit_even)>1 && abs(trk_eff_CSC_ME11.dphi_2strippad_fit_odd)>1)) || rand01_v1<%f)"%badeff+")"
       finalSignalCut_h = "("+GE11SignalCut_h+" || "+GE21SignalCut_h
       #finalSignalCut_h = "("+GE11SignalCut_h
       finalSignalCut_h_bad = "("+GE11SignalCut_h_bad+" || "+GE21SignalCut_h_bad
       finalSignalCut_h_bad_type1 = "("+GE11SignalCut_h_bad+" || "+GE21SignalCut_h_bad_type1
       finalSignalCut_h_bad_type2 = "("+GE21SignalCut_h_bad_type2+")"

       GE11bendingRateCut = "hasME1 && CSCTF_dR1<%f && ((CSCTF_ch1%%2==1 && abs(%s)<%f) || (CSCTF_ch1%%2==0 && abs(%s)<%f))"%(dR1cut, rate_x, GE11Cuts[neta][0], rate_x, GE11Cuts[neta][1])
       GE11bendingRateCut_bad = "hasME1 && CSCTF_dR1<%f && ((((CSCTF_ch1%%2==1 && abs(%s)<%f) || (CSCTF_ch1%%2==0 && abs(%s)<%f))"%(dR1cut, rate_x, GE11Cuts[neta][0], rate_x, GE11Cuts[neta][1])+"&& RandFloat01>%f) || (RandFloat01<%f))"%(badeff, badeff)
       GE21bendingRateCut = "hasME2 && ((CSCTF_ch2%%2==1 && abs(%s)<%f) || (CSCTF_ch2%%2==0 && abs(%s)<%f))"%(rate_y, GE21Cuts[neta][0], rate_y, GE21Cuts[neta][1])
       GE11Ratecut_h = "("+GE11bendingRateCut+"&& abs(%s)>1"%(rate_y)+ " && npar_bending<0)"
       GE11Ratecut_h_bad = "("+ GE11bendingRateCut +" && RandFloat01>%f && abs(%s)>1"%(badeff, rate_y)+ "&& npar_bending<0)"
       GE21Ratecut_h = "("+GE21bendingRateCut+"&& abs(%s)>1"%(rate_x)+" && npar_bending<0 && abs(L1Mu_eta)>2.1)"
       GE21Ratecut_h_bad = "("+GE21bendingRateCut+"&& ((abs(%s)>1 && npar_bending<0 && abs(L1Mu_eta)>2.1) || RandFloat01<%f)"%(rate_x,badeff)+")"
       GE21Ratecut_h_bad_type2 = "("+GE21bendingRateCut+"&& RandFloat01<%f)"%(badeff)
       GE21Ratecut_h_bad_type1 = "("+GE21bendingRateCut+" && abs(%s)>1 && npar_bending<0 && abs(L1Mu_eta)>2.1)"%(rate_x)
       ratehist_st1 = getRateVsEta(L1MuTriggerRate, "ratehist_GE11_eta%dto%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt), myetabin, baseratecut2 + "&&" +GE11bendingRateCut)
       ratehist_st1_bad = getRateVsEta(L1MuTriggerRate, "ratehist_GE11_eta%dto%d_frac%d_pt%d_badGE11frac%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt, badGE11bending), myetabin, baseratecut2 + "&&" +GE11bendingRateCut_bad)
       #print "ratecut for GE11 ", baseratecut2 + "&&" +GE11bendingRateCut," ratecut for GE11bad ", baseratecut2 + "&&" +GE11bendingRateCut_bad
       ratehist_st2 = getRateVsEta(L1MuTriggerRate, "ratehist_GE21_eta%dto%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt), myetabin, baseratecut2 + "&& "+GE21bendingRateCut)
       #print "Rate GE11 cut ",baseratecut2 + "&&" + GE11bendingRateCut, " GE11bendingRateCut_bad ",baseratecut2 + "&&" + GE11bendingRateCut_bad
       #print "ratehist_st1_bad : ",baseratecut + "&&" +GE11bendingRateCut_bad," bad entries ",ratehist_st1_bad.GetEntries()," normal entries ", ratehist_st1.GetEntries()
       #ratehist_h_all = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt), myetabin, baseratecut2 + "&& ("+GE11Ratecut_h+" || "+GE21Ratecut_h+")" )
       #ratehist_h_all_bad = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d_badGE11frac%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt, badGE11bending), myetabin, baseratecut + "&& ("+GE11Ratecut_h_bad+" || "+GE21Ratecut_h_bad+")" )
       ratehist_h_all = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt), myetabin, baseratecut2 + "&& ("+ GE11Ratecut_h +" || "+ GE21Ratecut_h+")")
       ratehist_h_all_bad = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d_badGE11frac%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt, badGE11bending), myetabin, baseratecut2 + "&& ("+GE11Ratecut_h_bad+" || "+GE21Ratecut_h_bad+")" )
       ratehist_h_all_bad_type1 = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d_badGE11frac%d_type1"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt, badGE11bending), myetabin, baseratecut2 +"&& ("+GE11Ratecut_h_bad+" || "+GE21Ratecut_h_bad_type1+")" )
       ratehist_h_all_bad_type2 = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d_badGE11frac%d_type2"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt, badGE11bending), myetabin, baseratecut2 +"&& ("+GE21Ratecut_h_bad_type2+")" )
       #print "rate normal ",ratehist_h_all.GetEntries()," cut ", baseratecut2 + "&& ("+ GE11Ratecut_h +" || "+ GE21Ratecut_h+")"," rate bad type1 ",ratehist_h_all_bad_type1.GetEntries()," cut ",baseratecut2 +"&& ("+GE11Ratecut_h_bad+" || "+GE21Ratecut_h_bad_type1+")"," type2 ",ratehist_h_all_bad_type2.GetEntries()," cut ",baseratecut2 +"&& ("+GE21Ratecut_h_bad_type2+")" 
       #print "badGE11 cut ", baseratecut + "&& ("+GE11Ratecut_h_bad+" || "+GE21Ratecut_h_bad+")"," bad entries ",ratehist_h_all_bad.GetEntries()," normal cut ", baseratecut + "&& ("+GE11Ratecut_h+" || "+GE21Ratecut_h+")"," normal entries ",ratehist_h_all.GetEntries()
       for npar in allnpar:
		me11 = evenodds[npar].split(',')[0]
		me21 = evenodds[npar].split(',')[1]
	        xaxis = "trk_eff_CSC_ME11.dphi_pad_fit_%s"%(me11)
	        yaxis = "trk_eff_CSC_ME21.dphi_pad_fit_%s"%(me21)
	        #xaxis = "trk_eff_CSC_ME11.dphi_pad_fit_%s"%(me11)
	        #yaxis = "trk_eff_CSC_ME21.dphi_pad_fit_%s"%(me21)
		xcut = GE11Cuts[neta][0]
		ycut = GE21Cuts[neta][0]
		if me11 == "even":
		    xcut = GE11Cuts[neta][1]
		if me21 == "even":
		    ycut = GE21Cuts[neta][1]
		algos_lut = getFinalLUTValue(pt, fraction, etamin, etamax, npar, allLUTfile)
		maxa = algos_lut["Hybrid"][0] 
		maxb = algos_lut["Hybrid"][1] 
		alpha= algos_lut["Hybrid"][2]
		x0 =  algos_lut["Hybrid"][3]
		y0 =  algos_lut["Hybrid"][4]
		chambers = "ME1%d %s,ME2%d %s"%(ring, me11, ring, me21)
		st_title = ["Prompt muon, 2<p_{T}<%d"%pt, "Prompt Muon, p_{T}=%d"%pt]
    		checkvalue = "&& fabs(%s)<1 && fabs(%s)<1"%(xaxis, yaxis)
		checkx_sh = "&& (trk_eff_CSC_ME11.has_csc_sh&1)>0 && (trk_eff_CSC_ME11.has_gem_sh&1)>0"
		checky_sh = "&& (trk_eff_CSC_ME21.has_csc_sh&1)>0 && (trk_eff_CSC_ME21.has_gem_sh&1)>0"
		if me11 == "even":
		    checkx_sh = "&& (trk_eff_CSC_ME11.has_csc_sh&2)>0 && (trk_eff_CSC_ME11.has_gem_sh&2)>0"
		if me21 == "even":
		    checky_sh = "&& (trk_eff_CSC_ME21.has_csc_sh&2)>0 && (trk_eff_CSC_ME21.has_gem_sh&2)>0"

		cutsbase =  [etacuts + "&& has_tfTrack>0 && has_gmtCand>0 && nstubs>=2 && meRing==%d "%(ring)+checkx_sh+checky_sh, etacuts + "&& has_tfTrack>0 && has_gmtCand && nstubs>=2 && meRing==%d"%(ring)+checkx_sh+checky_sh]
		x_bins = "(400,-0.04,0.04)"
		y_bins = "(300,-0.03,0.03)"
		xtitle = "#Delta#phi_{GEMCSC}^{st1}"
		ytitle = "#Delta#phi_{GEMCSC}^{st2}"
		#ratecut = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && npar_bending==%d && L1Mu_pt>=%f"%(etamin, etamax, npar, pt)
		ratecut = baseratecut2+"&& npar_bending==%d"%npar
		text = "#splitline{%s}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(chambers, netas[neta],netas[neta+1], pt)
		"""
		#should be less than 98%
		#nEvent_list = []
		#nEvent_list.append(rateEvents)
		#anglecut_list = [xcut, ycut]
		#astart = .0001
		#bstart = .0# not used 
		#xaxislist = [rate_x, xaxis]
		#yaxislist = [rate_y, yaxis]
		cutslist = [ratecut, cutsbase[1]+"&& pt>=%f"%(pt)+"&& trackpt>=%f"%(pt)]
		#(maxa, maxb, alpha, x0, y0) = loopEllipse(L1MuTriggerRate, GEMCSCTrackCh0, nEvent_list, anglecut_list, fraction, astart, bstart, xaxislist, yaxislist, x_bins, y_bins, xtitle, ytitle, st_title, netas[neta], netas[neta+1], cutslist,text,outputdir1+"GEMCSC_St1St2_hyrid_profile_20170208_pt%d_ptbg%d_fraction%d_st2eta%dto%d_npar%d"%(pt, pt1, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar))
		#print "max_a ",maxa," maxb ",maxb," alpha ",alpha," x0 ",x0, " y0 ",y0
		#xaxis1 = "(%s*TMath::Cos(%f)*charge+%s*TMath::Sin(%f)*charge-%f)"%(xaxis, alpha, yaxis, alpha, x0)
		#yaxis1 = "(%s*TMath::Sin(%f)*charge-%s*TMath::Cos(%f)*charge-%f)"%(xaxis, alpha, yaxis, alpha, y0)
		"""
		xaxis1 = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(xaxis, alpha, yaxis, alpha, x0)
		yaxis1 = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(xaxis, alpha, yaxis, alpha, y0)
		#ellipse = "((%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0)"%(xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)
		#ellipse_bad = "((%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)+" && rand01_v1>%f)"%badeff
		ellipse = "(L1Mu_st1_dR<%f && hasME2 && (%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0)"%(dR1cut, xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)
		ellipse_bad = "(L1Mu_st1_dR<%f && hasME2 &&(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(dR1cut, xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)+" && rand01_v1>%f)"%badeff
		combinedCut = "L1Mu_pt>=%f"%pt+" && ("+ellipse+" || "+"(abs(%s)<%f && abs(%s)>1)"%(xaxis,xcut,yaxis)+" || "+"(abs(%s)<%f && abs(%s)>1)"%(yaxis,ycut,xaxis)+")"
		finalSignalCut_h  = finalSignalCut_h+"|| "+ellipse
		finalSignalCut_h_bad  = finalSignalCut_h_bad+"|| "+ellipse_bad
		finalSignalCut_h_bad_type1 = finalSignalCut_h_bad_type1+" || "+ellipse_bad
		#Teffs = makeEffplot_v2([GEMCSCTrackCh0], "pt", [cutsbase[0], cutsbase[1]], [combinedCut, combinedCut], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 + GE21-ME21",text,outputdir2+"GEMCSC_St1St2_hybrid_eff_20170208_pt%d_ptbg%d_fraction%d_st2eta%dto%d_npar%d"%(pt, pt1, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar))
		legs3 = ["GE11-ME11","GE21-ME21","GE11-ME11+GE21-ME21"]
		#makeplots([Teffs_cutx[0], Teffs_cuty[0], Teffs[0]], legs3, text,outputdir2+"GEMCSC_St1St2_combined3_eff_20170208_pt%d_ptbg%d_fraction%d_St2eta%dto%d_npar%d"%(pt, pt1, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar)) 
		#LUT.write("eta%dto%dnpar%dfraction%d:(%f,%f,%f,%f,%f)\n"%(int(netas[neta]*10), int(netas[neta+1]*10), npar,fraction,maxa,maxb,alpha, x0, y0))		
		xaxis_rate = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(rate_x, alpha, rate_y, alpha, x0)
		yaxis_rate = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(rate_x, alpha, rate_y, alpha, y0)
		ellipse_rate = "CSCTF_dR1<%f &&"%dR1cut+"(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis_rate, xaxis_rate, maxa, maxa, yaxis_rate, yaxis_rate, maxb, maxb)
		#ratecut_ellipse = ratecut+"&& ("+ellipse_rate+" || (abs(%s)<=%f && abs(%s)>1) "%(rate_x, xcut, rate_y)+"|| (abs(%s)<=%f && abs(%s)>1))"%(rate_y, ycut, rate_x)
		ratecut_ellipse = "npar_bending==%d"%npar +"&& "+ellipse_rate
		ratecut_ellipse_bad = "npar_bending==%d"%npar +"&& "+ellipse_rate+" && RandFloat01>%f"%badeff
		ratehist_h = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), npar, fraction, pt), myetabin, baseratecut2+ "&& "+ ratecut_ellipse)
		ratehist_h_bad = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d_badGE11frac%d"%(int(netas[neta]*10),int(netas[neta+1]*10), npar, fraction, pt, badGE11bending), myetabin, baseratecut2+ "&& "+ ratecut_ellipse_bad)

		#print "baseratecut2 ", baseratecut2," rate ellipse ", ratecut_ellipse, " rate ellipse_bad ",ratecut_ellipse_bad
		#print "rate ge11 ",ratehist_st1.GetEntries()," hybrid ",ratehist_h.GetEntries()," hybrid bad ",ratehist_h_bad.GetEntries()
		#if npar==0:
		    #    ratehist_h_all = ratehist_h.Clone()
		#else:
		ratehist_h_all.Add(ratehist_h)
		ratehist_h_all_bad.Add(ratehist_h_bad)
		ratehist_h_all_bad_type1.Add(ratehist_h_bad)
		#print "npar ",npar, " ratehist_h_bad cut ", baseratecut+ "&& "+ ratecut_ellipse_bad," entries now ",ratehist_h_all_bad.GetEntries()," normal entries ", ratehist_h_all.GetEntries()
		#print "npar ",npar, " ratehist_h_bad cut entries ",ratehist_h_all_bad.GetEntries()," normal entries ", ratehist_h_all.GetEntries()
		#ratehist_h.Write()
		#Teffs[0].SetName("hybrideta%dto%dnpar%d"%(int(netas[neta]*10),int(netas[neta+1]*10), npar)+"pt%d"%(pt)+"fraction%d"%fraction)
		#Teffs[0].Write()
		#LUT.write("{%f,%f,%f,%f,%f},\n"%(maxa,maxb,alpha, x0, y0))		
		#for item in nEvent_list:
		#    LUT_nEvent.write("%f "%item)
		#LUT_nEvent.write("\n")
		#makeplots([Teffs_ddY[0], Teffs_dphi_dir[0], Teffs[0]], legs3, text,outputdir2+"GEMCSC_ctau0andctau1000_combined3_eff_20170120_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_npar%d_dirinterstation%s"%(pt, pt1, fraction, fraction_d, int(netas[neta]*10),int(netas[neta+1]*10), npar, extrapic)) 
		#Teffallnpars.append(Teffs)
       #LUT.write("},\n")
       #LUT_nEvent.write("},\n")
       #finalSignalCut_h =  L1MuQcut+finalSignalCut_h+")"
       #finalSignalCut_h_bad =  L1MuQcut+finalSignalCut_h_bad+")"
       #finalSignalCut_h = finalSignalCut_h+") && L1Mu_pt>=%d && L1Mu_quality>=%d && hasME1"%(pt, quality2)
       #finalSignalCut_h_bad = finalSignalCut_h_bad+") && L1Mu_pt>=%d && L1Mu_quality>=%d && hasME1"%(pt, quality2)
       finalSignalCut_h = finalSignalCut_h+") && L1Mu_pt>=%d && L1Mu_quality>=%d"%(pt, quality2)
       finalSignalCut_h_bad = finalSignalCut_h_bad+") && L1Mu_pt>=%d && L1Mu_quality>=%d"%(pt, quality2)
       finalSignalCut_h_bad_type1 = finalSignalCut_h_bad_type1+") && L1Mu_pt>=%d && L1Mu_quality>=%d"%(pt, quality2)
       finalSignalCut_h_bad_type2 = finalSignalCut_h_bad_type2 + "&& L1Mu_pt>=%d"%(pt)
       #print "finalSignalCut_h_bad_type2 ",finalSignalCut_h_bad_type2
       #print "finalSignalCut_h ",finalSignalCut_h," finalSignalCut_h_bad ",finalSignalCut_h_bad
       Teff0_v2 = makeEffplot_v2([GEMCSCTrackCh1], "pt",[basesignalcut],[finalSignalCut_h], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_eff_20170208_pt%d_fraction%d_st2eta%dto%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       TeffEta0_v2 = makeEffplot_eta([GEMCSCTrackCh1], "abs(eta)",[basesignalcut+" && pt>=%d"%(simpt_h)],[finalSignalCut_h], netas[neta], netas[neta+1],"Simulted |#eta|","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_effvseta_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_all"%(pt, simpt_h, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       #Teff0_bad = makeEffplot_v2([GEMCSCTrackCh1], "pt",[basesignalcut],[finalSignalCut_h_bad], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_eff_20170208_pt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       #TeffEta0_bad = makeEffplot_eta([GEMCSCTrackCh1], "abs(eta)",[basesignalcut+" && pt>=%d"%(simpt)],[finalSignalCut_h_bad], netas[neta], netas[neta+1],"Simulated |#eta|","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_effvseta_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, simpt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       legs_types = ["combined","good muons (%.2f)"%(1-badeff),"bad muons(%.2f)"%(badeff)]
       Teff0_bad = makeEffplot_v2([GEMCSCTrackCh1, GEMCSCTrackCh1, GEMCSCTrackCh1], "pt",[basesignalcut, basesignalcut+"&& rand01_v1>%f"%(badeff), basesignalcut+"&& rand01_v1<%f"%(badeff)],[finalSignalCut_h_bad, finalSignalCut_h_bad_type1, finalSignalCut_h_bad_type2], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs_types,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_eff_20170208_pt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       TeffEta0_bad = makeEffplot_eta([GEMCSCTrackCh1, GEMCSCTrackCh1, GEMCSCTrackCh1], "abs(eta)",[basesignalcut+" && pt>=%d"%(simpt), basesignalcut+" && pt>=%d && rand01_v1>%f"%(simpt, badeff), basesignalcut+" && pt>=%d && rand01_v1<%f"%(simpt, badeff)],[finalSignalCut_h_bad, finalSignalCut_h_bad_type1, finalSignalCut_h_bad_type2], netas[neta], netas[neta+1],"Simulated |#eta|","bending angle cut efficiency",legs_types,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_effvseta_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, simpt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       #Teff0 = Teffallnpars[0][0]
       Teff0_h = Teff0_v2[0]
       Teff0_h_bad = Teff0_bad[0]
       Teff0_h_bad_type1 = Teff0_bad[1]
       Teff0_h_bad_type2 = Teff0_bad[2]
       #Teff1 = Teffallnpars[0][1]
       Teff0_st1 = Teffallnpars_ME11[0][0]
       Teff0_st1_bad = Teffs_cutx_badeff[0]
       #Teff1_st1 = Teffallnpars_ME11[0][1]
       Teff0_st2 = Teffallnpars_ME21[0][0]
       #Teff1_st2 = Teffallnpars_ME21[0][1]
       Teffeta0_h = TeffEta0_v2[0]
       Teffeta0_h_bad = TeffEta0_bad[0]
       Teffeta0_st1 = TeffsEta_cutx[0]
       Teffeta0_st1_bad = TeffsEta_cutx_badeff[0]
       #for xpar in range(len(Teffallnpars)-1):
	   #Teff0.Add(Teffallnpars[xpar+1][0])		   
   	#Teff1.Add(Teffallnpars[xpar+1][1])		   
	#Teff0_st1.Add(Teffallnpars_ME11[xpar+1][0])		   
   	#Teff1_st1.Add(Teffallnpars_ME11[xpar+1][1])		   
	#Teff0_st2.Add(Teffallnpars_ME21[xpar+1][0])		   
   	#Teff1_st2.Add(Teffallnpars_ME21[xpar+1][1])		   
       efflist.append(getOverallEff(Teff0_st1, pt*1.1, pt*1.1+3))
       efflist.append(getOverallEff(Teff0_h, pt*1.1, pt*1.1+3))
       efflist.append(getOverallEff(Teff0_st1_bad, pt*1.1, pt*1.1+3))
       efflist.append(getOverallEff(Teff0_h_bad, pt*1.1, pt*1.1+3))
       efflist.append(getOverallEff(Teff0_h_bad_type1, pt*1.1, pt*1.1+3))
       efflist.append(getOverallEff(Teff0_h_bad_type2, pt*1.1, pt*1.1+3))
       ratelist.append(ratehist_st1.GetEntries())
       ratelist.append(ratehist_h_all.GetEntries())
       ratelist.append(ratehist_st1_bad.GetEntries())
       ratelist.append(ratehist_h_all_bad.GetEntries())
       ratelist.append(ratehist_h_all_bad_type1.GetEntries())
       ratelist.append(ratehist_h_all_bad_type2.GetEntries())
       print "pt ", pt, " fraction ",fraction, " efflist ",efflist, " ratelist ",ratelist
       #print "eff ge11 ",getOverallEff(Teff0_st1, pt), " ge21 ",getOverallEff(Teff0_st2, pt), " hybrid ",getOverallEff(Teff0_v2[0], pt)," badGE11 ",badGE11bending," eff ge11 ",getOverallEff(Teff0_st1_bad, pt)," hybrid ",getOverallEff(Teff0_bad[0], pt)
       #print "rate ge11 ",ratehist_st1.GetEntries()," ge21 ",ratehist_st2.GetEntries()," hybrid ",ratehist_h_all.GetEntries()," badGE11 case, ge11 rate ",ratehist_st1_bad.GetEntries(), " hybrid ",ratehist_h_all_bad.GetEntries()
       #GE11eta16to21npar2pt5fraction95;1
       Teff0_h.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%d"%(pt,fraction))
       Teffeta0_h.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dvseta"%(pt,fraction))
       Teff0_h_bad.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dbadGE11frac%d"%(pt,fraction, badGE11bending))
       Teffeta0_h_bad.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dbadGE11frac%dvseta"%(pt,fraction, badGE11bending))
       #Teff1.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"Singalpt%dptbg%d"%(pt,pt1))
       Teff0_st1.SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%d"%(pt,fraction))
       Teffeta0_st1.SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dvseta"%(pt,fraction))
       Teff0_st1_bad.SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dbadGE11frac%d"%(pt,fraction, badGE11bending))
       Teffeta0_st1_bad.SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dbadGE11frac%dvseta"%(pt,fraction, badGE11bending))
      
       #Teff1_st1.SetName("ME11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"Singalpt%dptbg%d"%(pt,pt1))
       Teff0_st2.SetName("GE21eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%d"%(pt,fraction))
       #Teff0_st2.SetName("GE21eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%d"%(pt,fraction))
       #TeffsEta_cuty[0].SetName("GE21eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dvseta"%(pt,fraction))
       #Teff1_st2.SetName("ME21eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"Singalpt%dptbg%d"%(pt,pt1))
       text_h = "#splitline{GE11-ME11+GE21-ME21}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV%s}"%(netas[neta],netas[neta+1], pt, extratxt)
       text_ME11 = "#splitline{GE11-ME11}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV%s}"%(netas[neta],netas[neta+1], pt, extratxt)
       text_ME21 = "#splitline{GE21-ME21}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV%s}"%(netas[neta],netas[neta+1], pt, extratxt)
       #makeplots([Teff0, Teff1], legs, text_h,outputdir2+"GEMCSC_hybrid_eff_20170120_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, pt1, fraction, fraction_d, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       #makeplots([Teff0_st1, Teff1_st1], legs, text_ME11,outputdir2+"GEMCSC_GE11ME11_eff_20170120_pt%d_fraction%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       #makeplots([Teff0_st1, Teff1_st2], legs, text_ME21,outputdir2+"GEMCSC_GE21ME21_eff_20170120_pt%d_fraction%d_St2eta%dto%d_allnpar%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       #text3 = "#splitline{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV%s}{Prompt muon}"%(netas[neta],netas[neta+1], pt, extratxt)
       text3 = "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV%s"%(netas[neta],netas[neta+1], pt, extratxt)
       makeplots([Teff0_st1, Teff0_st2, Teff0_v2[0]], legs3, text3,outputdir2+"GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt%d_fraction%d_St2eta%dto%d_allnpar%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       legs4 = ["YE11 bending angle cut","Combined cut with YE11 and YE21 bending", "YE11 bending angle cut+20% CSC aging", "#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}"]
       makeplots([Teff0_st1, Teff0_h, Teff0_st1_bad, Teff0_h_bad], legs4, text3,outputdir2+"GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt%d_fraction%d_St2eta%dto%d_allnpar_badGE11frac%d%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending, extrapic)) 
       text4 = "p_{T}^{L1}>%d GeV%s"%(pt, extratxt)
       #plotshistograms([ratehist_CSC, ratehist_st1, ratehist_h_all], legsall, "L1Mu with Q>=12", text4, outputdir2+"TriggerRate_combiend_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
       #ratehist_csc_list.append(ratehist_CSC); 
       ratehist_st1_list.append(ratehist_st1); ratehist_h_list.append(ratehist_h_all)


       etamin = netas[0]; etamax = netas[-1]
       alletacut = "abs(eta)<%f && abs(eta)>%f"%(etamax, etamin) 
       #dencut = alletacut + "&& trk_eff_CSC_ME11.has_csc_sh>0 && trk_eff_CSC_ME21.has_csc_sh>0 && trk_eff_CSC_ME11.has_gem_sh>0 && trk_eff_CSC_ME21.has_gem_sh>0"
       numcut = "has_tfTrack>0 && has_gmtCand>0 && nstubs>=2"

       legs = ["GE11only","GE11GE21"]
       L1MuEff = makeEffplot_v2([GEMCSCTrackCh0, GEMCSCTrackCh1], "pt",[alletacut, alletacut],[numcut, numcut], etamin, etamax, "true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_L1Mu_eff_20170208_pt%d_fraction%d_st2eta%dto%d_all"%(pt, fraction, int(etamin*10),int(etamax*10)))
       L1MuEffeta = makeEffplot_eta([GEMCSCTrackCh0, GEMCSCTrackCh1], "abs(eta)",[alletacut+"&& pt>%d"%(simpt), alletacut+"&& pt>%d"%(simpt)],[numcut, numcut], etamin, etamax, "true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_L1Mu_etaeff_20170208_pt%d_simpt%d_fraction%d_st2eta%dto%d_all"%(pt, simpt, fraction, int(etamin*10),int(etamax*10)))
       ratehist_st1.Scale(SF); ratehist_h_all.Scale(SF); ratehist_st1_bad.Scale(SF); ratehist_h_all_bad.Scale(SF)
       plotshistograms([ratehist_st1, ratehist_h_all, ratehist_st1_bad, ratehist_h_all_bad], legs4, "L1Mu with hits in ME11", text3, outputdir2+"TriggerRate_combiend_20170120_pt%d_fraction%d_St2eta%dto%d_allnpar_badGE11frac%d%s"%(pt, fraction, int(etamin*10),int(etamax*10),  badGE11bending, extrapic))
       makeplotsEta([Teffeta0_st1, Teffeta0_h, Teffeta0_st1_bad, Teffeta0_h_bad], legs4, " ", "p_{T}^{sim}>%d GeV"%(simpt), outputdir2+"TriggerEff_eta_pt%d_simpt%d_eta164_215_GE11GE21_GE11GE21_combined"%(pt, simpt))
       csconlycut = "has_gmtCand>0 && L1Mu_quality>=12 && L1Mu_pt>=%d"%(pt)
       TeffCSConly = makeEffplot_v2([GEMCSCTrackCh0_CSConly], "pt",[alletacut],[csconlycut], etamin, etamax, "true muon p_{T} GeV","CSC only L1Mu efficiency",legs,"CSC only" ,text1,outputdir2+"GEMCSC_L1Mu_CSconlyQ12_eff_20170208_pt%d_fraction%d_st2eta%dto%d_all"%(pt, fraction, int(etamin*10),int(etamax*10)))

       legs4_v2 = ["L1Mu w/ GE21 (inputs to L1Trk+L1Mu)","L1Mu w/o GE21","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=%d GeV (Standalone L1Mu)"%(pt),"CSC+GE11: hits in ME11, p_{T}^{L1}>=%d GeV (Standalone L1Mu)"%(pt), "CSC only: EMTFQ>=12"]
       legs5_v2 = ["L1Mu w/ GE21 (inputs to L1Trk+L1Mu)","L1Mu w/o GE21","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=%d GeV (Standalone L1Mu)"%(pt),"CSC+GE11: hits in ME11, p_{T}^{L1}>=%d GeV (Standalone L1Mu)"%(pt), "CSC only: EMTFQ>=12"]
       makeplots([L1MuEff[1], L1MuEff[0], Teff0_h, Teff0_st1], legs4_v2, text3, outputdir2+"GEMCSC_TriggerEff_pt%d_fraction%d_St2eta%dto%d_allnpar_badGE11frac%d_L1Mu%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending, extrapic)) 
       makeplots([L1MuEff[1], L1MuEff[0], Teff0_h, Teff0_st1, TeffCSConly[0]], legs5_v2, text3, outputdir2+"GEMCSC_TriggerEff_pt%d_fraction%d_St2eta%dto%d_allnpar_badGE11frac%d_L1Mu%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending, extrapic)) 

       #makeplots([Teff0_h, Teff0_st1, TeffCSConly[0]], legs5_v2, text3, outputdir2+"GEMCSC_TriggerEff_pt%d_fraction%d_St2eta%dto%d_allnpar_badGE11frac%d_L1Mu%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending, extrapic)) 
       makeplotsEta([L1MuEffeta[1],L1MuEffeta[0], Teffeta0_h, Teffeta0_st1], legs4_v2, " ", "p_{T}^{sim}>%d GeV"%(simpt), outputdir2+"GEMCSC_TriggerEtaEff_pt%d_fraction%d_St2eta%dto%d_allnpar_badGE11frac%d_L1Mu%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending, extrapic))
       #plotTeffs([triggereff1, triggereff3, triggereff1_GE11GE21, triggereff3_GE11GE21], legs, legheader, "Simulated p_{T} [GeV]", "Trigger efficiency", "%.2f<|#eta|<%.2f"%(etamin, etamax), SBPlots, "TriggerEff_eta_eta164_215_nstubs2_GE11GE21_combined")

       #Teffs_0.append(Teff0)
       #Teffs_0_ME21.append(Teff0_st2)
       #Teffs_0_ME11.append(Teff0_st1)
       Teff0_h.Write();Teff0_st1.Write();Teff0_st2.Write()
       Teff0_h_bad.Write();Teff0_st1_bad.Write()
       Teffeta0_h.Write();Teffeta0_st1.Write();Teffeta0_h_bad.Write();Teffeta0_st1_bad.Write()
       ratehist_h_all.Write(); ratehist_st1.Write(); ratehist_st2.Write()
       ratehist_h_all_bad.Write(); ratehist_st1_bad.Write()
    """
       #Teffs_1.append(Teff1)
    Teffs0_alleta = Teffs_0[0] 
    Teffs0_alleta_st1 = Teffs_0_ME11[0] 
    Teffs0_alleta_st2 = Teffs_0_ME21[0] 
    #Teffs1_alleta = Teffs_1[0] 
    for xeta in range(len(Teffs_0)-1):
       Teffs0_alleta.Add(Teffs_0[xeta+1])	 
       Teffs0_alleta_st1.Add(Teffs_0_ME11[xeta+1])	 
       Teffs0_alleta_st2.Add(Teffs_0_ME21[xeta+1])	 
       #Teffs1_alleta.Add(Teffs_1[xeta+1])	 
    Teffs0_alleta.SetName("hybrideta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"BGt%dptbg%d"%(pt,pt1))
    Teffs0_alleta_st1.SetName("ME11eta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"BGpt%d"%(pt))
    Teffs0_alleta_st2.SetName("ME21eta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"BGpt%d"%(pt))
    #Teffs1_alleta.SetName("hybrideta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"Singalpt%dptbg%d"%(pt,pt1))
    text_alleta = "#splitline{Hybrid algorithm}{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}"%(netas[0],netas[-1], pt, extratxt)
    text_alleta_3 = "#splitline{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}{Prompt muon}"%(netas[0],netas[-1], pt, extratxt)
    #makeplots([Teffs0_alleta, Teffs1_alleta], legs, text_alleta,outputdir2+"GEMCSC_GE11ME21_GE21ME21_hybrid_eff_20170120_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, pt1, fraction,fraction_d, int(netas[0]*10),int(netas[-1]*10), extrapic)) 
    makeplots([Teffs0_alleta_st1, Teffs0_alleta_st2, Teffs0_alleta], legs3, text_alleta_3,outputdir2+"GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt%d_ptbg%d_fraction%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, pt1, fraction, int(netas[0]*10),int(netas[-1]*10), extrapic)) 
    """
    Teff_out.Close()
    return efflist,ratelist
def plotall(pts, fractions, netas,outputrootfile, allLUTfile, badGE11=0):
    simpt = 0
    fraction_rate = 98 
    hrate_template = ROOT.TH1F("hrate_ge11","hrate_ge11",len(rateptbin)-1, myrateptbin)
    hrate_ge11 = ROOT.TH1F("hrate_ge11","hrate_ge11",len(rateptbin)-1, myrateptbin)
    hrate_h = ROOT.TH1F("hrate_h","hrate_h",len(rateptbin)-1, myrateptbin)
    hrate_ge11_bad = ROOT.TH1F("hrate_ge11_bad","hrate_ge21_bad",len(rateptbin)-1, myrateptbin)
    hrate_h_bad = ROOT.TH1F("hrate_h_bad","hrate_h_bad",len(rateptbin)-1, myrateptbin)
    etamin = netas[0]
    etamax = netas[-1]
    for pt in pts:
	ratelist_ge11 = []
	rateErrlist_ge11 = []
	ratelist_ge11_bad = []
	rateErrlist_ge11_bad = []
	ratelist_h = []
	rateErrlist_h = []
	ratelist_h_bad = []
	rateErrlist_h_bad = []
	ratelist_h_bad_type1 = []
	rateErrlist_h_bad_type1 = []
	ratelist_h_bad_type2 = []
	rateErrlist_h_bad_type2 = []
	efflist_ge11 = []
	effErrlist_ge11 = []
	efflist_ge11_bad = []
	effErrlist_ge11_bad = []
	efflist_h = []
	effErrlist_h = []
	efflist_h_bad = []
	effErrlist_h_bad = []
	efflist_h_bad_type1 = []
	effErrlist_h_bad_type1 = []
	efflist_h_bad_type2 = []
	effErrlist_h_bad_type2 = []
	fracErrlist = []
	fraclist = []
	simpt = pt+5
	for frac in fractions:
	    efflist, ratelist = plotalleta(pt, simpt, netas, frac, outputrootfile, allLUTfile, badGE11)
	    if frac==fraction_rate:
		hrate_ge11.Fill(pt, ratelist[0]*SF)
		hrate_h.Fill(pt, ratelist[1]*SF)
		hrate_ge11_bad.Fill(pt, ratelist[2]*SF)
		hrate_h_bad.Fill(pt, ratelist[3]*SF)
	    ratelist_ge11.append(ratelist[0]*SF)
	    rateErrlist_ge11.append(sqrt(ratelist[0])*SF)
	    ratelist_h.append(ratelist[1]*SF)
	    rateErrlist_h.append(sqrt(ratelist[1])*SF)
	    ratelist_ge11_bad.append(ratelist[2]*SF)
	    rateErrlist_ge11_bad.append(sqrt(ratelist[2])*SF)
	    ratelist_h_bad.append(ratelist[3]*SF)
	    rateErrlist_h_bad.append(sqrt(ratelist[3])*SF)
	    ratelist_h_bad_type1.append(ratelist[4]*SF)
	    rateErrlist_h_bad_type1.append(sqrt(ratelist[4])*SF)
	    ratelist_h_bad_type2.append(ratelist[5]*SF)
	    rateErrlist_h_bad_type2.append(sqrt(ratelist[5])*SF)
	    efflist_ge11.append(efflist[0][0])
	    effErrlist_ge11.append(efflist[0][1])
	    efflist_h.append(efflist[1][0])
	    effErrlist_h.append(efflist[1][1])
	    efflist_ge11_bad.append(efflist[2][0])
	    effErrlist_ge11_bad.append(efflist[2][1])
	    efflist_h_bad.append(efflist[3][0])
	    effErrlist_h_bad.append(efflist[3][1])
	    efflist_h_bad_type1.append(efflist[4][0])
	    effErrlist_h_bad_type1.append(efflist[4][1])
	    efflist_h_bad_type2.append(efflist[5][0])
	    effErrlist_h_bad_type2.append(efflist[5][1])
	    fracErrlist.append(sqrt(1-frac/100.0)/100.0)
	    fraclist.append(frac/100.0)
	Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
	graph_ge11 = TGraphErrors(len(efflist_ge11), np.array(efflist_ge11), np.array(ratelist_ge11), np.array(effErrlist_ge11), np.array(rateErrlist_ge11))
	graph_h = TGraphErrors(len(efflist_h), np.array(efflist_h), np.array(ratelist_h), np.array(effErrlist_h), np.array(rateErrlist_h))
	graph_ge11_frac = TGraphErrors(len(fraclist), np.array(fraclist), np.array(ratelist_ge11), np.array(fracErrlist), np.array(rateErrlist_ge11))
	graph_h_frac = TGraphErrors(len(fraclist), np.array(fraclist), np.array(ratelist_h), np.array(fracErrlist), np.array(rateErrlist_h))
	graph_ge11_bad = TGraphErrors(len(efflist_ge11_bad), np.array(efflist_ge11_bad), np.array(ratelist_ge11_bad), np.array(effErrlist_ge11_bad), np.array(rateErrlist_ge11_bad))
	graph_h_bad = TGraphErrors(len(efflist_h_bad), np.array(efflist_h_bad), np.array(ratelist_h_bad), np.array(effErrlist_h_bad), np.array(rateErrlist_h_bad))
	graph_h_bad_type1 = TGraphErrors(len(efflist_h_bad_type1), np.array(efflist_h_bad_type1), np.array(ratelist_h_bad_type1), np.array(effErrlist_h_bad_type1), np.array(rateErrlist_h_bad_type1))
	graph_h_bad_type2 = TGraphErrors(len(efflist_h_bad_type2), np.array(efflist_h_bad_type2), np.array(ratelist_h_bad_type2), np.array(effErrlist_h_bad_type2), np.array(rateErrlist_h_bad_type2))
	ratemax = ratelist_ge11_bad[-1]
	ratemax2 = ratelist_ge11[-1]
	legend = TLegend(0.15,0.64,0.60,0.90)
	legend.SetHeader("L1Mu(standalone) Performance")
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	tex = TLatex(0.15,.55, "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV"%(etamin, etamax, pt))
	tex.SetNDC()
	#legend.SetTextSize(.05)
	c1 = TCanvas()
	mgerr =TMultiGraph()
	color = [ROOT.kBlue, ROOT.kRed, ROOT.kBlue-10, ROOT.kRed-10, ROOT.kGreen+2, ROOT.kGreen-9]
	#print "size ", len(efflist_p[npar]), " ",efflist_p[npar]
	graph_ge11.SetMarkerStyle(maker[0])
	graph_ge11.SetMarkerColor(color[0])
	graph_ge11.SetLineColor(color[0])
	graph_ge11.SetFillColor(color[0])
	graph_h.SetMarkerStyle(maker[1])
	graph_h.SetMarkerColor(color[1])
	graph_h.SetLineColor(color[1])
	graph_h.SetFillColor(color[1])
	graph_ge11_bad.SetMarkerStyle(maker[2])
	graph_ge11_bad.SetMarkerColor(color[2])
	graph_ge11_bad.SetLineColor(color[2])
	graph_ge11_bad.SetFillColor(color[2])
	graph_h_bad.SetMarkerStyle(maker[3])
	graph_h_bad.SetMarkerColor(color[3])
	graph_h_bad.SetLineColor(color[3])
	graph_h_bad.SetFillColor(color[3])
	graph_h_bad_type1.SetLineColor(color[4])
	graph_h_bad_type1.SetFillColor(color[4])
	graph_h_bad_type1.SetMarkerStyle(maker[3])
	graph_h_bad_type1.SetMarkerColor(color[4])
	graph_h_bad_type2.SetLineColor(color[5])
	graph_h_bad_type2.SetFillColor(color[5])
	graph_h_bad_type2.SetMarkerStyle(maker[3])
	graph_h_bad_type2.SetMarkerColor(color[5])
	mgerr.Add(graph_h_bad)
	mgerr.Add(graph_ge11)
	mgerr.Add(graph_h)
	mgerr.Add(graph_ge11_bad)
	mgerr.Add(graph_h_bad_type1)
	mgerr.Add(graph_h_bad_type2)
        graph_ge11.SetName("TriggerEffVsRate_GE11Cut_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph_h.SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph_ge11_bad.SetName("TriggerEffVsRate_GE11Cut_pt%d_eta%dto%d_badGE11"%(pt,int(etamin*10), int(etamax*10)))
        graph_h_bad.SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_badGE11"%(pt,int(etamin*10), int(etamax*10)))
	graph_ge11.Write()
	graph_h.Write()
	graph_ge11_bad.Write()
	graph_h_bad.Write()
	legend.AddEntry(graph_ge11,"Phase-1+GE11(CSC+GE11)", "f")
	legend.AddEntry(graph_h,"Phase-2(CSC+GE11+GE21)", "f")
	legend.AddEntry(graph_ge11_bad,"Phase-1+GE11(CSC+GE11):%d %% ME11 off"%badGE11, "f")
	legend.AddEntry(graph_h_bad,"Phase-2(CSC+GE11+GE21):%d %% ME11 off"%badGE11, "f")
	legend.AddEntry(graph_h_bad_type1,"Phase-2(CSC+GE11+GE21): good muons(%d %%)"%(100-badGE11), "f")
	legend.AddEntry(graph_h_bad_type2,"Phase-2(CSC+GE11+GE21): bad muons(%d %%)"%badGE11, "f")
	
	#mgerr.Draw("Ae3")
	mgerr.Draw("AP")
	legend.Draw("same")
	tex.Draw("same")
	mgerr.SetMinimum(0.)
	mgerr.SetMaximum(ratemax*1.2)
	#mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
	mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
	mgerr.GetXaxis().SetTitle("L1 Trigger efficiency")
	mgerr.GetYaxis().SetTitle("L1 Trigger rate [kHz]")
        mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
	mgerr.Write()
	c1.SaveAs(outputdir2+"TriggerEffVsRate_GEMCSCBending_pt%d_eta%dto%d_PU%d_%dCSCAging.png"%(pt,int(etamin*10), int(etamax*10), pu, badGE11))
	c1.SaveAs(outputdir2+"TriggerEffVsRate_GEMCSCBending_pt%d_eta%dto%d_PU%d_%dCSCAging.pdf"%(pt,int(etamin*10), int(etamax*10), pu, badGE11))
	c1.SaveAs(outputdir2+"TriggerEffVsRate_GEMCSCBending_pt%d_eta%dto%d_PU%d_%dCSCAging.C"%(pt,int(etamin*10), int(etamax*10), pu, badGE11))
	
	c2 = TCanvas()
	legend2 = TLegend(0.15,0.68,0.60,0.90)
	legend2.SetHeader("L1Mu(standalone) Performance")
	legend2.SetFillColor(ROOT.kWhite)
	legend2.SetTextFont(42)
	tex2 = TLatex(0.15,.55, "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV"%(etamin, etamax, pt))
	tex2.SetNDC()
	mgerr2 =TMultiGraph()
	graph_ge11_frac.SetMarkerStyle(maker[0])
	graph_ge11_frac.SetMarkerColor(color[0])
	graph_ge11_frac.SetLineColor(color[0])
	graph_ge11_frac.SetFillColor(color[0])
	graph_h_frac.SetMarkerStyle(maker[1])
	graph_h_frac.SetMarkerColor(color[1])
	graph_h_frac.SetLineColor(color[1])
	graph_h_frac.SetFillColor(color[1])
	mgerr2.Add(graph_ge11_frac)
	mgerr2.Add(graph_h_frac)
	legend2.AddEntry(graph_ge11_frac,"YE11 bending angle cut", "f")
	legend2.AddEntry(graph_h_frac,"Combined bending angle cut", "f")
	mgerr2.Draw("AP")
	legend2.Draw("same")
	tex2.Draw("same")
	mgerr2.SetMinimum(0.)
	mgerr2.SetMaximum(ratemax2*1.2)
	#mgerr2.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
	mgerr2.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
	mgerr2.GetXaxis().SetTitle("L1 Trigger efficiency")
	mgerr2.GetYaxis().SetTitle("L1 Trigger rate [kHz]")
        mgerr2.SetName("TriggerEffVsRate_frac_all_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
	mgerr2.Write()
	c2.SaveAs(outputdir2+"TriggerEffVsRate_frac_GEMCSCBending_pt%d_eta%dto%d_PU%d_%dCSCAging.png"%(pt,int(etamin*10), int(etamax*10), pu, badGE11))
	c2.SaveAs(outputdir2+"TriggerEffVsRate_frac_GEMCSCBending_pt%d_eta%dto%d_PU%d_%dCSCAging.pdf"%(pt,int(etamin*10), int(etamax*10), pu, badGE11))
	c2.SaveAs(outputdir2+"TriggerEffVsRate_frac_GEMCSCBending_pt%d_eta%dto%d_PU%d_%dCSCAging.C"%(pt,int(etamin*10), int(etamax*10), pu, badGE11))

	Teff_out.Close()
    Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
    c2 = TCanvas()
    legend2 = TLegend(0.4,0.7,0.90,0.85)
    legend2.SetFillColor(ROOT.kWhite)
    legend2.SetTextFont(42)
    tex2 = TLatex(0.2,.88, "%.2f<|#eta|<%.2f, L1Mu with Q>=4"%(etamin, etamax))
    tex2.SetNDC()
    hrate_ge11.Sumw2(False)
    hrate_h.Sumw2(False)
    hrate_ge11_bad.Sumw2(False)
    hrate_h_bad.Sumw2(False)
    c2.SetLogy()
    #c2.SetLogx()
    c2.SetGridx()
    c2.SetGridy()
    hrate_template.SetMinimum(.2)
    hrate_template.SetMaximum(2000)
    #hrate_template.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
    hrate_template.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
    hrate_template.GetXaxis().SetTitle("Muon trigger p_{T} threshold [GeV]")
    hrate_template.GetYaxis().SetTitle("L1 Trigger rate [kHz]")
    hrate_ge11.SetMarkerStyle(maker[0])
    hrate_ge11.SetMarkerColor(color[0])
    hrate_ge11.SetLineColor(color[0])
    hrate_ge11.SetFillColor(color[0])
    hrate_h.SetMarkerStyle(maker[1])
    hrate_h.SetMarkerColor(color[1])
    hrate_h.SetLineColor(color[1])
    hrate_h.SetFillColor(color[1])
    hrate_ge11_bad.SetMarkerStyle(maker[2])
    hrate_ge11_bad.SetMarkerColor(color[2])
    hrate_ge11_bad.SetLineColor(color[2])
    hrate_ge11_bad.SetFillColor(color[2])
    hrate_h_bad.SetMarkerStyle(maker[3])
    hrate_h_bad.SetMarkerColor(color[3])
    hrate_h_bad.SetLineColor(color[3])
    hrate_h_bad.SetFillColor(color[3])
    legend2.AddEntry(hrate_ge11,"YE11 bending angle cut", "pl")
    legend2.AddEntry(hrate_h,"Combined bending angle cut", "pl")
    legend2.AddEntry(hrate_ge11_bad,"YE11 bending angle cut+%d %% CSC aging"%(badGE11), "pl")
    legend2.AddEntry(hrate_h_bad,"#splitline{Combined bending angle cut}{+%d %% CSC aging}"%(badGE11), "pl")
    hrate_template.Draw()
    hrate_ge11.Draw("samee")
    hrate_h.Draw("samee")
    hrate_ge11_bad.Draw("samee")
    hrate_h_bad.Draw("samee")
    legend2.Draw("same")
    tex2.Draw("same")
    hrate_template.Write()
    hrate_ge11.Write()
    hrate_h.Write()
    hrate_ge11_bad.Write()
    hrate_h_bad.Write()

    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_%dCSCAging.png"%(int(etamin*10), int(etamax*10), pu, fraction_rate, badGE11))
    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_%dCSCAging.pdf"%(int(etamin*10), int(etamax*10), pu, fraction_rate, badGE11))
    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_%dCSCAging.C"%(int(etamin*10), int(etamax*10), pu, fraction_rate, badGE11))
    Teff_out.Close()


def getTriggerRateVsPt(pts, fractions_rate, netas,outputrootfile, badGE11=0):
    #fractions_pt = {5:85, 7:90, 10:91, 12:92, 15:94, 20:94, 25:95, 30:96}
    #pts = [5, 7,10, 12, 15, 20, 25, 30]
    pt1 = 0
    hrate_template = ROOT.TH1F("hrate_ge11","hrate_ge11",len(rateptbin)-1, myrateptbin)
    hrate_ge11 = ROOT.TH1F("hrate_ge11","hrate_ge11",len(rateptbin)-1, myrateptbin)
    hrate_h = ROOT.TH1F("hrate_h","hrate_h",len(rateptbin)-1, myrateptbin)
    hrate_ge11_bad = ROOT.TH1F("hrate_ge11_bad","hrate_ge21_bad",len(rateptbin)-1, myrateptbin)
    hrate_h_bad = ROOT.TH1F("hrate_h_bad","hrate_h_bad",len(rateptbin)-1, myrateptbin)
    hrate_Q1 = ROOT.TH1F("hrate_Q1","hrate_Q1",len(rateptbin)-1, myrateptbin)
    hrate_Q2 = ROOT.TH1F("hrate_Q2","hrate_Q2",len(rateptbin)-1, myrateptbin)
    etamin = netas[0]
    etamax = netas[-1]
    legsall = ["CSC only","CSC + GE11"," CSC + GE11 + GE21"]
    quality1 = 4; quality2 = 12
    ratefile = TFile(ratesample)
    h_total = ratefile.Get("h_eventcountME0Segment192")
    #h_total.Print()
    rateEvents = h_total.GetEntries()
    L1MuTriggerRate = TChain("L1MuTriggerRateME0Segment192")
    addFilesToChain(L1MuTriggerRate, ratesample)

    for pt in pts:
	    pt1 = pt+5
	    baseratecut1 = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f"%(etamin, etamax,quality1, pt)
	    baseratecut2 = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f"%(etamin, etamax,quality2, pt)
	    ratehist_Q1 = getRateVsEta(L1MuTriggerRate, "ratehist_Q1", myetabin, baseratecut1)
	    ratehist_Q2 = getRateVsEta(L1MuTriggerRate, "ratehist_Q1", myetabin, baseratecut2)

	    fraction_rate_GE11 = fractions_rate[0]
	    
	    if pt>=20 and pt<30:
		    fraction_rate_GE11 = fraction_rate_GE11+2
	    if pt>=30: 
		    fraction_rate_GE11 = fraction_rate_GE11+4

	    efflist1, ratelist1 = plotalleta(pt, pt1, netas, fraction_rate_GE11, outputrootfile, allLUTfile, badGE11)
	    efflist2, ratelist2 = plotalleta(pt, pt1, netas, fractions_rate[1], outputrootfile, allLUTfile, badGE11)
	    #efflist3, ratelist3 = plotalleta(pt, pt1, netas, fractions_rate[2], outputrootfile, allLUTfile, badGE11)
	    #efflist4, ratelist4 = plotalleta(pt, pt1, netas, fractions_rate[3], outputrootfile, allLUTfile, badGE11)

	    ipt = hrate_ge11.FindBin(pt)
	    #print "pt ",pt," ipt ",ipt," fraction ",fraction_rate
	    hrate_ge11.SetBinContent(ipt,     ratelist1[0])
	    hrate_h.SetBinContent(ipt,        ratelist2[1])
	    hrate_ge11_bad.SetBinContent(ipt, ratelist1[2])
	    hrate_h_bad.SetBinContent(ipt,    ratelist2[3])
	    #hrate_h.SetBinContent(ipt,        ratelist2[1])
	    #hrate_ge11_bad.SetBinContent(ipt, ratelist3[2])
	    #hrate_h_bad.SetBinContent(ipt,    ratelist4[3])
	    hrate_Q1.SetBinContent(ipt, ratehist_Q1.GetEntries())
	    hrate_Q2.SetBinContent(ipt, ratehist_Q2.GetEntries())
	    #hrate_ge11.Fill(pt,ratelist1[0])
	    #hrate_h.Fill(pt, ratelist2[1])
	    #hrate_ge11_bad.Fill(pt, ratelist3[2])
	    #hrate_h_bad.Fill(pt, ratelist4[3])
	    #hrate_Q1.Fill(pt, ratehist_Q1.GetEntries())
	    #hrate_Q2.Fill(pt, ratehist_Q2.GetEntries())
	    #ratehist_CSC = ratehist_cscs_1[0]; ratehist_st1 = ratehist_st1s_1[0]; ratehist_h_all = ratehist_hs_2[0]
	    #ratehist_CSC.Scale(SF); ratehist_st1.Scale(SF); ratehist_h_all(SF)
	    #text4 = "p_{T}^{L1} >%d GeV"%(pt)
	    #plotshistograms([ratehist_CSC, ratehist_st1, ratehist_h_all], legsall, "L1Mu with Q>=12", text4, outputdir2+"TriggerRate_combiend_20170131_pt%d_St2eta%dto%d_allnpar"%(pt, int(etamin*10),int(etamax*10)))
    Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
    hrate_Q1.Sumw2()
    hrate_Q2.Sumw2()
    hrate_ge11.Sumw2()
    hrate_h.Sumw2()
    hrate_ge11_bad.Sumw2()
    hrate_h_bad.Sumw2()
    hrate_Q1.Scale(SF)
    hrate_Q2.Scale(SF)
    hrate_ge11.Scale(SF)
    hrate_h.Scale(SF)
    hrate_ge11_bad.Scale(SF)
    hrate_h_bad.Scale(SF)
    c2 = TCanvas()
    legend2 = TLegend(0.4,0.6,0.90,0.9)
    legend2.SetHeader("L1Mu(standalone) Performance")
    legend2.SetFillColor(ROOT.kWhite)
    legend2.SetTextFont(42)
    tex2 = TLatex(0.2,.2, "%.2f<|#eta|<%.2f"%(etamin, etamax))
    tex2.SetNDC()
    c2.SetLogy()
    #c2.SetLogx()
    c2.SetGridx()
    c2.SetGridy()
    #color = [ROOT.kBlue, ROOT.kRed, ROOT.kBlue-10, ROOT.kRed-10, ROOT.kOrange+7]
    color = [ROOT.kBlue+1, ROOT.kBlack, ROOT.kBlue-7, ROOT.kGray+1, ROOT.kRed]
    #marker = [21, 20, 25, 24, 26]
    marker = [25, 21, 25, 21, 26]
    hrate_template.SetMinimum(.2)
    hrate_template.SetMaximum(2000)
    #hrate_template.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
    hrate_template.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
    hrate_template.GetXaxis().SetTitle("Muon trigger p_{T} threshold [GeV]")
    hrate_template.GetYaxis().SetTitle("L1 trigger rate [kHz]")
    hrate_Q2.SetMarkerStyle(marker[4])
    hrate_Q2.SetMarkerColor(color[4])
    hrate_Q2.SetLineColor(color[4])
    hrate_Q2.SetLineWidth(2)
    hrate_ge11.SetMarkerStyle(marker[0])
    hrate_ge11.SetMarkerColor(color[0])
    hrate_ge11.SetLineColor(color[0])
    hrate_ge11.SetFillColor(color[0])
    hrate_ge11.SetLineWidth(2)
    hrate_h.SetMarkerStyle(marker[1])
    hrate_h.SetMarkerColor(color[1])
    hrate_h.SetLineColor(color[1])
    hrate_h.SetFillColor(color[1])
    hrate_h.SetLineWidth(2)
    hrate_ge11_bad.SetMarkerStyle(marker[2])
    hrate_ge11_bad.SetMarkerColor(color[2])
    hrate_ge11_bad.SetLineColor(color[2])
    hrate_ge11_bad.SetFillColor(color[2])
    hrate_ge11_bad.SetLineWidth(2)
    hrate_h_bad.SetMarkerStyle(marker[3])
    hrate_h_bad.SetMarkerColor(color[3])
    hrate_h_bad.SetLineColor(color[3])
    hrate_h_bad.SetFillColor(color[3])
    hrate_h_bad.SetLineWidth(2)
    legend2.AddEntry(hrate_Q2,"Phase-1 detector(CSC): Run-2 Trigger Configuration", "pl")
    legend2.AddEntry(hrate_ge11,"Phase-1+GE11(CSC+GE11): ideal detectors", "pl")
    legend2.AddEntry(hrate_h,"Phase-2 (CSC+GE11+GE21): ideal detectors", "pl")
    legend2.AddEntry(hrate_ge11_bad,"Phase-1+GE11(CSC+GE11): %d%% CSC ME11 off"%(badGE11), "pl")
    legend2.AddEntry(hrate_h_bad,"Phase-2 (CSC+GE11+GE21): %d%% CSC ME11 off"%(badGE11), "pl")
    hrate_template.Draw()
    hrate_Q2.Draw("samee")
    hrate_ge11.Draw("samee")
    hrate_h.Draw("samee")
    hrate_ge11_bad.Draw("samee")
    hrate_h_bad.Draw("samee")
    legend2.Draw("same")
    tex2.Draw("same")
    hrate_template.Write()
    hrate_ge11.Write()
    hrate_h.Write()

    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_CSCAging%d_addCSC.png"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0], badGE11))
    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_CSCAging%d_addCSC.pdf"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0], badGE11))
    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_CSCAging%d_addCSC.C"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0], badGE11))
    hrate_Q1.SetMarkerStyle(maker[2])
    hrate_Q1.SetMarkerColor(color[2])
    hrate_Q1.SetLineColor(color[2])

    c3 = TCanvas()
    legend3 = TLegend(0.4,0.6,0.90,0.85)
    legend3.SetHeader("L1Mu(standalone) Performance")
    legend3.SetFillColor(ROOT.kWhite)
    legend3.SetTextFont(42)
    hrate_template.SetMinimum(.2)
    hrate_template.SetMaximum(2000)
    c3.SetLogy()
    #c2.SetLogx()
    c3.SetGridx()
    c3.SetGridy()
    #legend3.AddEntry(hrate_Q1,"CSC only: EMTFQ>=4", "pl")
    legend3.AddEntry(hrate_Q2,"Phase-1 detector(CSC): Run-2 Trigger Configuration", "pl")
    legend3.AddEntry(hrate_ge11,"Phase-1+GE11(CSC+GE11)", "pl")
    legend3.AddEntry(hrate_h,"Phase-2 (CSC+GE11+GE21)", "pl")
    hrate_template.Draw()
    #hrate_Q1.Draw("samee")
    hrate_ge11.Draw("samee")
    hrate_h.Draw("samee")
    hrate_Q2.Draw("samee")
    tex2.Draw("same")
    legend3.Draw("same")
    c3.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_addCSC.png"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0]))
    c3.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_addCSC.pdf"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0]))
    c3.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_addCSC.C"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0]))


    c4 = TCanvas()
    legend4 = TLegend(0.4,0.6,0.90,0.85)
    legend4.SetHeader("L1Mu(standalone) Performance")
    legend4.SetFillColor(ROOT.kWhite)
    legend4.SetTextFont(42)
    hrate_template.SetMinimum(.2)
    hrate_template.SetMaximum(2000)
    c4.SetLogy()
    #c2.SetLogx()
    c4.SetGridx()
    c4.SetGridy()
    #legend3.AddEntry(hrate_Q1,"CSC only: EMTFQ>=4", "pl")
    legend4.AddEntry(hrate_ge11,"Phase-1+GE11(CSC+GE11): ideal detector", "pl")
    legend4.AddEntry(hrate_ge11_bad,"Phase-1+GE11(CSC+GE11): %d %% ME11 CSC off"%(badGE11), "pl")
    legend4.AddEntry(hrate_h_bad,"Phase-2 (CSC+GE11+GE21): %d %% ME11 CSC off"%(badGE11), "pl")
    hrate_template.Draw()
    #hrate_Q1.Draw("samee")
    hrate_ge11_bad.Draw("samee")
    hrate_h_bad.Draw("samee")
    hrate_ge11.Draw("samee")
    tex2.Draw("same")
    legend4.Draw("same")
    c4.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_onlyAging%d.png"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0], badGE11))
    c4.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_onlyAging%d.pdf"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0], badGE11))
    c4.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d_onlyAging%d.C"%(int(etamin*10), int(etamax*10), pu, fractions_rate[0], badGE11))




    Teff_out.Close()

    #1. CSC+GE11+GE21+ME0, L1Mu+L1Tkr
    #2. CSC+GE11, L1Mu+L1Tkr
    #3. CSC only EMTFQ>=12
    #4. CSC+GE11+GE21+ME0: EMTFQ>=4+ has hits in ME11 + bending angl cut
    #5. CSC+GE11: EMTFQ>=4+has hits in ME11 + bending angle cut
def getallTriggerRateEffVsEta(outputrootfile, fractions, pts, netas, allLUTfile):
	
	#outputdir3 = outputdir2+ "CombinedPlots_frac94_98/"
    outputdir3 = outputdir2+ "CombinedPlots_frac94_94/"
    if not os.path.exists(outputdir3):
        os.makedirs(outputdir3)
    pt = pts[-1]; pt1 = pts[0];  pt2 = pts[1]
    L1MuTriggerRate = TChain("L1MuTriggerRateME0Segment192")
    addFilesToChain(L1MuTriggerRate, ratesample)
    #ME0dphi:10->0.005, 16: 0.004
    #ME0dPhifile = "ME0DPhiLUT.log"
    ME0dPhifile = "ME0DPhiLUT_20170802.log"
    ME0dphi = getME0dPhiLUTValue(pt, 98, ME0dPhifile)
    print "ME0dphi ",ME0dphi
    #ME0dPhiLUT = {10:0.005, 16:.003, 20:0.0025}
    ME0etamin = 2.1; ME0etamax = 2.4
    quality = 4
    ME0_dR = 0.2
    dR1cut = 0.3#deltaR(ME11, EMTF)
    baseratecut_step0 = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d "%( ME0etamin, ME0etamax, quality)
    baseratecut_step1 = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f "%(ME0etamin, ME0etamax, quality, pt)
    baseratecut_step2 = "maxPromptPt && L1Mu_me0_dR < %f && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f && L1Mu_me0_phi<99"%(ME0_dR, ME0etamin, ME0etamax, quality, pt)
    
    baseratecut = "maxPromptPt && abs(L1Mu_me0_dPhi)<%f && L1Mu_me0_dR < %f && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f && L1Mu_me0_phi<99"%(ME0dphi, ME0_dR, ME0etamin, ME0etamax, quality, pt)
    ratehist_ME0_step0 = getRateVsEta(L1MuTriggerRate, "ratehist_ME0_step0", myetabin, baseratecut_step0)
    ratehist_ME0_step1 = getRateVsEta(L1MuTriggerRate, "ratehist_ME0_step1", myetabin, baseratecut_step1)
    ratehist_ME0_step2 = getRateVsEta(L1MuTriggerRate, "ratehist_ME0_step2", myetabin, baseratecut_step2)
    ratehist_ME0 = getRateVsEta(L1MuTriggerRate, "ratehist_ME0", myetabin, baseratecut)
    print "Trigger rate event step0 ",ratehist_ME0_step0.GetEntries()," step1 ",ratehist_ME0_step1.GetEntries()," step2 ",ratehist_ME0_step2.GetEntries()," step3 ",ratehist_ME0.GetEntries()
    ratehist_ME0_step0.Sumw2(False); ratehist_ME0_step1.Sumw2(False); ratehist_ME0_step2.Sumw2(False); ratehist_ME0.Sumw2(False)
    ratehist_ME0_step0.Scale(SF); ratehist_ME0_step1.Scale(SF); ratehist_ME0_step2.Scale(SF); ratehist_ME0.Scale(SF)
    legsallME0 = ["No pt cut","p_{T}^{L1}>%d GeV"%pt,"p_{T}^{L1}>%d GeV + L1Mu with ME0"%pt,"p_{T}^{L1}>%d GeV + L1Mu with ME0+ME0 bending cut"%pt]
    textME0 = "Prompt muon trigger "
    plotshistograms([ratehist_ME0_step0, ratehist_ME0_step1, ratehist_ME0_step2, ratehist_ME0], legsallME0, "L1 Muon with EMTFQ>=4", textME0, outputdir3+"TriggerRateME0_combiend_20170131_pt%d_St2eta%dto%d_withME0_q%d_allnpar_dR02_me0dphi005_Andq12_PU140"%(pt, int(ME0etamin*10),int(ME0etamax*10), quality), False)

    baseratecut_CSC = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f "%(1.65, 2.4, quality, pt)
    ratehist_CSC = getRateVsEtav2(L1MuTriggerRate, "ratehist_CSC", myetabin, baseratecut_CSC)

    baseratecut_CSC_q12 = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f "%(1.65, 2.4, 12, pt)
    ratehist_CSC_q12 = getRateVsEtav2(L1MuTriggerRate, "ratehist_CSC", myetabin, baseratecut_CSC_q12)
    #odd->1; even->2
    algos_lut = getGE11GE21LUTValue(pt, 95, 1.64, 2.15, 0, allLUTfile)
    GE21cut_odd = algos_lut["GE21"]
    algos_lut = getGE11GE21LUTValue(pt, 95, 1.64, 2.15, 1, allLUTfile)
    GE21cut_even = algos_lut["GE21"]
    #print "pt ",pt, " GE21cut_odd ",GE21cut_odd," GE21cut_even ",GE21cut_even
    rate_y = "gemdphi_st2"
    baseratecut_GE21only = "maxPromptPt && hasME1 && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f "%(2.15, 2.4, quality, pt)
    ratehist_CSC = getRateVsEta(L1MuTriggerRate, "ratehist_CSC", myetabin, baseratecut_CSC)
    print "GE21cut odd ",GE21cut_odd," even ",GE21cut_even
    GE21bendingRateCut = "hasME2 && ((CSCTF_ch2%%2==1 && abs(%s)<%f) || (CSCTF_ch2%%2==0 && abs(%s)<%f))"%(rate_y, GE21cut_odd, rate_y, GE21cut_even)
    #GE21bendingRateCut = "hasME2"
    
    ratehist_GE21only = getRateVsEta(L1MuTriggerRate, "ratehist_GE21_eta%dto%d_frac%d_pt%d"%(int(2.15*10),int(2.4*10), fraction, pt), myetabin, baseratecut_GE21only + "&& "+GE21bendingRateCut)
    #plotalleta(pt, 0, netas, fractions[0], outputrootfile, allLUTfile, badGE11)
    #plotalleta(pt, 0, netas, fractions[1], outputrootfile, allLUTfile, badGE11)
    ratehist_CSC.Sumw2(False); ratehist_GE21only.Sumw2(False);  ratehist_CSC_q12.Sumw2(False)
    ratehist_CSC.Scale(SF);ratehist_GE21only.Scale(SF);  ratehist_CSC_q12.Scale(SF)
    rfile = TFile(outputrootfile,"READ")

    etamin = netas[0]; etamax = netas[-1]; badGE11 = 20
    legsall = ["CSC only + Q>=4","CSC + GE11 + Q>=4"," CSC + GE11 + GE21 + Q>=4", "CSC + GE11 + GE21 + ME0 + Q>=4", "CSC only + Q>=12"]
    ratehist_h_all = rfile.Get("ratehist_hybrid_eta16to21_frac%d_pt%d"%(fractions[0], pt2))
    ratehist_st1 = rfile.Get("ratehist_GE11_eta16to21_frac%d_pt%d"%(fractions[1], pt1))
    #print "ratehist_h_all ",ratehist_h_all," histname ","ratehist_hybrid_eta16to21_frac%d_pt%d"%(fractions[0], pt2)," ratehist_st1 ",ratehist_st1," histname ","ratehist_GE11_eta16to21_frac%d_pt%d"%(fractions[1], pt1)
    eff_h_all = rfile.Get("hybrideta16to21pt%dfraction%dvseta"%(pt2, fractions[0]))
    eff_st1 = rfile.Get("GE11eta16to21pt%dfraction%dvseta"%(pt1, fractions[1]))
    effpt_h = rfile.Get("hybrideta16to21pt%dfraction%d"%(pt2, fractions[0]))
    effpt_st1 = rfile.Get("GE11eta16to21pt%dfraction%d"%(pt1, fractions[1]))
    effpt_h_bad = rfile.Get("hybrideta16to21pt%dfraction%dbadGE11frac%d"%(pt2, fractions[0], badGE11))
    effpt_st1_bad = rfile.Get("GE11eta16to21pt%dfraction%dbadGE11frac%d"%(pt1, fractions[1], badGE11))
    ratehist_st1.Scale(1.0/SF); ratehist_st1.Sumw2(False); ratehist_st1.Scale(SF)
    ratehist_h_all.Scale(1.0/SF); ratehist_h_all.Sumw2(False); ratehist_h_all.Scale(SF)
    ratehistfinal = ratehist_h_all.Clone()
    #ratehist_h_all.Add(ratehist_GE21only)
    ratehist_ME0.Add(ratehistfinal)
    
    #ratehist_CSC = rfile.Get("ratehist_CSConly_eta16to21_pt10")
    #ratehist_CSC.Scale(SF); ratehist_st1.Scale(SF); ratehist_h_all.Scale(SF); ratehist_ME0.Scale(SF); ratehist_CSC_q12.Scale(SF); ratehist_GE21only.Scale(SF)
    #ratehist_CSC.Scale(SF140); ratehist_st1.Scale(SF140); ratehist_h_all.Scale(SF140); ratehist_ME0.Scale(SF140); ratehist_CSC_q12.Scale(SF140)
    print "Rate number CSC ",ratehist_CSC.Integral()," GE11 ",ratehist_st1.Integral()," GE11GE21 ",ratehist_h_all.Integral()," GE11GE21ME0 ",ratehist_ME0.Integral()
    text4 = "p_{T}^{Trig} >%d GeV"%(pt)
    legsv2 = ["CSC only: EMTFQ>=12","CSC+GE11: EMTFQ>=4","CSC+GE11+GE21+ME0: EMTFQ>=4","CSC+GE11+GE21: EMTFQ>=4"]
    #legsv2 = ["CSC: EMTFQ>=4","CSC+GE11, EMTFQ>=4","CSC+GE11+GE21: EMTFQ>=4","CSC: EMTFQ>=12"]
    legsv2 = ["CSC only: EMTFQ>=12","CSC+GE11: EMTFQ>=4","CSC+GE11+GE21+ME0: EMTFQ>=4"]


    quality1 = 4; quality2 = 12; simpt = pt+5
    legGE11 = "Phase-1+GE11(CSC+GE11)"
    #legGE11 = "CSC+GE11: hits in ME11, bending angle cut, p_{T}^{L1}>%d"%(pt)
    legs3 = ["CSC+GE11+GE21: No Q cut, No p_{T} cut","CSC+GE11: No Q cut, No p_{T} cut","CSC only: EMTF Q>=%d, p_{T}^{L1}>%d GeV"%(quality2, pt), " CSC+GE11+GE21: hits in ME11,p_{T}^{L1}>%d, GE21-ME21 bending angle cut"%(pt),"CSC+GE11+GE21+ME0:No Q cut,bending angle cut, p_{T}^{L1}>%d GeV"%(pt) ]
    legs3 = ["CSC+GE11+GE21","CSC+GE11","Phase-1 detector (CSC): Run-2 Trigger Configuration","CSC+GE11+GE21","Phase-2(CSC+GE11+GE21+ME0)"]
    #plotshistograms([ratehist_CSC_q12, ratehist_st1, ratehist_ME0, ratehist_GE21only], [legs3[2], legGE11, legs3[4], legs3[3]], "L1 standalone muon, p_{T}^{L1}>%d GeV"%(pt), text4, outputdir3+"TriggerRateVseta_combined_20170131_pt%d_St2eta%dto%d_withGE2195_q%d_allnpar_dR03_Andq12_PU200"%(pt, int(etamin*10),int(etamax*10), quality), False)
    plotshistograms([ratehist_CSC_q12, ratehist_st1, ratehist_ME0], [legs3[2], legGE11, legs3[4]], "L1Mu(standalone) Performance", text4, outputdir3+"TriggerRateVSeta_combined_20170131_pt%d_St2eta%dto%d_q%d_allnpar_Andq12_PU200"%(pt, int(etamin*10),int(etamax*10), quality2), False)
    GEMCSCTrackCh0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    addFilesToChain(GEMCSCTrackCh0, signalsample) 
    GEMCSCME21Ch0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME21")
    addFilesToChain(GEMCSCME21Ch0, signalsample) 
    GEMCSCTrackCh0.AddFriend(GEMCSCME21Ch0)
    GEMCSCTrackCh0_GE11only = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    addFilesToChain(GEMCSCTrackCh0_GE11only, signalsampleGE11only) 
    GEMCSCTrackCh0_CSConly = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    addFilesToChain(GEMCSCTrackCh0_CSConly, signalsampleCSConly) 



    #use sim eta
    texteff = "p_{T}^{Trig} >%d GeV, p_{T}^{True}>%d GeV"%(pt, simpt)
    textpTeff_ME0 = "p_{T}^{Trig} >%d GeV, %.2f<|#eta|<%.2f"%(pt, ME0etamin, ME0etamax)
    textpTeff_GE11 = "p_{T}^{Trig} >%d GeV, %.2f<|#eta|<%.2f"%(pt, etamin, etamax)
    #baseSignalcut_CSConly = "abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && pt>=%f"%(1.6, 2.4, quality1, simpt)
    baseSignalcut_CSConly = "abs(eta)>%f && abs(eta)<%f && pt>=%f"%(1.65, 2.4, simpt)
    numSignalcut_L1trk = "has_gmtCand>0"
    numSignalcut_CSConly = "has_gmtCand>0 && L1Mu_pt>=%d && L1Mu_quality>=%d"%(pt, quality2)
    numSignalcut_CSConly_q12 = "has_gmtCand>0 && L1Mu_quality>=%d && L1Mu_pt>=%d"%(quality2, pt)
    #baseSignalcut_ME0 = "abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && pt>=%f"%(ME0etamin, ME0etamax, quality1, simpt)
    baseSignalcut_ME0 = "abs(eta)>%f && abs(eta)<%f && pt>=%f"%(ME0etamin, ME0etamax, simpt)
    baseSignalcut_ME0_pt = "abs(eta)>%f && abs(eta)<%f"%(ME0etamin, ME0etamax)
    baseSignalcut_GE21 = "abs(eta)>%f && abs(eta)<%f && pt>=%f "%(2.1, ME0etamax, simpt)
    numSignalcut_ME0 = "abs(L1Mu_me0_dPhi)<%f && L1Mu_me0_dR<0.2 && L1Mu_pt>=%d && L1Mu_quality>=%d"%(ME0dphi, pt,quality1)
    numsingalcut_GE21 = "L1Mu_pt>=%f && L1Mu_st1_dR<%f && hasME2 && L1Mu_quality>=%d && (abs(trk_eff_CSC_ME21.dphi_pad_fit_odd)<%f || abs(trk_eff_CSC_ME21.dphi_pad_fit_even)<%f)"%(pt,dR1cut,  quality1, GE21cut_odd, GE21cut_even )
    #legs3 = [legsall[0], legsall[-1], legsall[2], legsall[-2]]

    TeffME0 = makeEffplot_v2([GEMCSCTrackCh0_CSConly, GEMCSCTrackCh0], "pt",[ baseSignalcut_ME0_pt, baseSignalcut_ME0_pt],[numSignalcut_CSConly_q12,  numSignalcut_ME0], 2.1, 2.4, "true muon p_{T} GeV","L1Mu with ME0 bending cut",["Phase-1 detector(CSC): Run-2 Trigger Configuration","Phase-2(CSC+GE11GE21+ME0)"],"L1Mu(standalone) Performance" ,textpTeff_ME0,outputdir3+"GEMCSC_L1Mu_CSConly_withME0Eta21_eff_20170208_pt%d_st2eta%dto%d_all"%(pt, int(ME0etamin*10),int(ME0etamax*10)))

    #legGE11 = "CSC+GE11: hits in ME11, bending angle cut, p_{T}^{L1}>%d"%(pt)
    #Teff_all = makeEffplot_eta([GEMCSCTrackCh0, GEMCSCTrackCh0, GEMCSCTrackCh0, GEMCSCTrackCh0], "abs(eta)",[baseSignalcut_CSConly, baseSignalcut_CSConly,baseSignalcut_GE21, baseSignalcut_ME0],[numSignalcut_CSConly, numSignalcut_CSConly_q12, numsingalcut_GE21, numSignalcut_ME0], 1.6, 2.4,"Simulated |#eta|","",legs3,"L1 muon",texteff,outputdir2+"GEMCSC_CSC_ME0_eff_20170621_pt%d_simpt%d_eta%dto%d_MEdR03_q4_andq12_all"%(pt, pt+5, int(1.6*10),int(2.4*10)))
    etacut = "abs(eta)>%f && abs(eta)<%f "%(1.65, 2.1)
    #for x in [3, 4, 5,6, 7,8, 9,10, 12, 14, 16, 18, 20, 25, 30, 35, 40]:
	    #numSignalcut_CSConly_q12_pt = "has_gmtCand>0 && L1Mu_quality>=%d && L1Mu_pt>=%d"%(quality2, x)
	    #numSignalcut_hasME1 = "has_gmtCand>0 && L1Mu_pt>=%d && L1Mu_st1_dR<.3"%(x)
	    #Teffpt = makeEffplot_v2([GEMCSCTrackCh0_CSConly, GEMCSCTrackCh0], "pt",[etacut, etacut],[numSignalcut_CSConly_q12_pt,  numSignalcut_hasME1], 1.65, 2.15, "true muon p_{T} GeV","L1Mu (standalone)",["CSC only: EMTFQ>=12","CSC+GE11+GE21: hits in ME1"],"L1Mu" ,"p_{T}^{Trig}>%d GeV, 1.65<|#eta|<2.15"%(x),outputdir3+"GEMCSC_L1Mu_CSConly_GE11region_eff_20170208_pt%d_st2eta%dto%d_all"%(x, 165, 215))
    TeffCSConly = makeEffplot_v2([GEMCSCTrackCh0_CSConly], "pt",[etacut],[numSignalcut_CSConly_q12], 1.65, 2.15, "true muon p_{T} GeV","CSC only L1Mu efficiency",["CSC only"],"CSC only" ,texteff,outputdir3+"GEMCSC_L1Mu_CSconlyQ12_eff_20170208_pt%d_st2eta%dto%d_all"%(pt, int(etamin*10),int(etamax*10)))

    makeplots([TeffCSConly[0], effpt_st1, effpt_h], [legs3[2],legGE11, legs3[4]], textpTeff_GE11, outputdir3+"GEMCSC_TriggerEff_pt%d_St2eta164to215_allnpar"%(pt)) 

    Teff_all = makeEffplot_eta([GEMCSCTrackCh0, GEMCSCTrackCh0_GE11only, GEMCSCTrackCh0_CSConly, GEMCSCTrackCh0, GEMCSCTrackCh0], "abs(eta)",[baseSignalcut_CSConly, baseSignalcut_CSConly, baseSignalcut_CSConly, baseSignalcut_GE21, baseSignalcut_ME0],[numSignalcut_L1trk, numSignalcut_L1trk, numSignalcut_CSConly_q12, numsingalcut_GE21, numSignalcut_ME0], 1.2, 2.4,"Simulated |#eta|","",legs3,"L1Mu(standalone) Performance",texteff,outputdir3+"GEMCSC_CSC_ME0_eff_20170719_pt%d_simpt%d_eta%dto%d_MEdR03_q4_andq12_all"%(pt, pt+5, int(1.6*10),int(2.4*10)))
    efffinal = eff_h_all.Clone()
    #eff_h_all.Add(Teff_all[2])
    Teff_all[4].Add(efffinal)
    legL1Trk = ["CSC + GE11 + GE21","CSC + GE11"]
    #makeplotsEta([Teff_all[0], Teff_all[1]], legL1Trk, "L1Mu Trigger (inputs to L1Trk+L1Mu)", texteff, outputdir2+"GEMCSC_promptMu_L1MuTrk_effvsetaf_20170719_pt%d_simpt%d_eta%dto%d_all"%(pt, pt+5, int(1.6*10),int(2.4*10))) 
    #makeplotsEta([Teff_all[0], Teff_all[1], Teff_all[4], eff_st1, Teff_all[2]], [legs3[0], legs3[1], legs3[4], legGE11, legs3[2]], "Muon trigger", texteff, outputdir3+"GEMCSC_promptMu_L1MuTrkAndL1StandaloneMu_effvsetaf_20170719_pt%d_simpt%d_eta%dto%d_all"%(pt, pt+5, int(1.6*10),int(2.4*10))) 
    #makeplotsEta([Teff_all[4], eff_st1, Teff_all[2]], [legs3[4],legGE11, legs3[2]], "L1Mu(standalone) Performance", texteff, outputdir3+"GEMCSC_promptMu_L1StandaloneMu_effvsetaf_20170719_pt%d_simpt%d_eta%dto%d_all"%(pt, pt+5, int(1.6*10),int(2.4*10))) 
    #makeplotsEta([Teff_all[4], eff_st1, Teff_all[2], Teff_all[3]], [legs3[4],legGE11, legs3[2], legs3[3]], "L1Mu(standalone) Performance", texteff, outputdir3+"GEMCSC_promptMu_L1StandaloneMu_withGE2195_effvsetaf_20170719_pt%d_simpt%d_eta%dto%d_all"%(pt, pt+5, int(1.6*10),int(2.4*10))) 
    makeplotsEta([Teff_all[2], eff_st1, Teff_all[4]], [legs3[2],legGE11, legs3[4]], "L1Mu(standalone) Performance", texteff, outputdir3+"GEMCSC_promptMu_L1StandaloneMu_effvsetaf_20170719_pt%d_simpt%d_eta%dto%d_all"%(pt, pt+5, int(1.6*10),int(2.4*10))) 
    makeplotsEta([Teff_all[2], eff_st1, Teff_all[4], Teff_all[3]], [legs3[2],legGE11, legs3[4], legs3[3]], "L1Mu(standalone) Performance", texteff, outputdir3+"GEMCSC_promptMu_L1StandaloneMu_withGE2195_effvsetaf_20170719_pt%d_simpt%d_eta%dto%d_all"%(pt, pt+5, int(1.6*10),int(2.4*10))) 



    
def getME0TriggerRateVsPt(ratesample, pts, fraction, etamin, etamax, quality, allLUTfile):
    outputdir3 = "TriggerRateVsPt_20170802_ME0region_withGE21_eta21/"
    L1MuTriggerRate = TChain("L1MuTriggerRateME0Segment192")
    addFilesToChain(L1MuTriggerRate, ratesample)
    hrate_template = ROOT.TH1F("hrate_tmp","hrate_tmp",len(rateptbin)-1, myrateptbin)
    hrate_ge21 = ROOT.TH1F("hrate_ge21","hrate_ge21",len(rateptbin)-1, myrateptbin)
    hrate_me0 = ROOT.TH1F("hrate_me0","hrate_me0",len(rateptbin)-1, myrateptbin)
    hrate_q12 = ROOT.TH1F("hrate_q12","hrate_q12",len(rateptbin)-1, myrateptbin)
    ME0_dR = 0.2
    #ME0dPhifile = "ME0DPhiLUT.log"
    ME0dPhifile = "ME0DPhiLUT_20170727.log"
    ME0dPhifile = "ME0DPhiLUT_20170802.log"
    dR1cut = .3
    ipt = 1
    for pt in pts:
	
	ME0dphi = getME0dPhiLUTValue(pt, fraction, ME0dPhifile)
	print "pt ",pt, " ME0dphi ",ME0dphi
        baserateME0cut = "maxPromptPt && abs(L1Mu_me0_dPhi)<%f && L1Mu_me0_dR < %f && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f && L1Mu_me0_phi<99"%(ME0dphi, ME0_dR, etamin, etamax, quality, pt)
        baseratecut_CSC_q12 = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f "%(etamin, etamax, 12, pt)
        baseratecut_GE21only = "maxPromptPt && hasME1 && CSCTF_dR1<%f && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f "%(dR1cut, etamin, etamax, quality, pt)
        ratehist_ME0 = getRateVsEta(L1MuTriggerRate, "ratehist_ME0", myetabin, baserateME0cut)
        ratehist_CSC_q12 = getRateVsEtav2(L1MuTriggerRate, "ratehist_CSC", myetabin, baseratecut_CSC_q12)
        #odd->1; even->2
        algos_lut = getGE11GE21LUTValue(pt, 95, 1.64, 2.15, 0, allLUTfile)
        GE21cut_odd = algos_lut["GE21"]
        algos_lut = getGE11GE21LUTValue(pt, 95, 1.64, 2.15, 1, allLUTfile)
        GE21cut_even = algos_lut["GE21"]
        rate_y = "gemdphi_st2"
        print "pt ",pt," GE21cut odd ",GE21cut_odd," even ",GE21cut_even
        GE21bendingRateCut = "hasME2 && ((CSCTF_ch2%%2==1 && abs(%s)<%f) || (CSCTF_ch2%%2==0 && abs(%s)<%f))"%(rate_y, GE21cut_odd, rate_y, GE21cut_even)
        ratehist_GE21only = getRateVsEta(L1MuTriggerRate, "ratehist_GE21_eta%dto%d_frac%d_pt%d"%(int(2.1*10),int(2.4*10), fraction, pt), myetabin, baseratecut_GE21only + "&& "+GE21bendingRateCut)
	hrate_ge21.Fill(pt, ratehist_GE21only.GetEntries())
	hrate_me0.Fill(pt, ratehist_ME0.GetEntries())
	hrate_q12.Fill(pt, ratehist_CSC_q12.GetEntries())
	ipt =  hrate_ge21.FindBin(pt)
	#hrate_ge21.SetBinContent(ipt, ratehist_GE21only.GetEntries()*SF)
	#hrate_ge21.SetBinError(ipt, sqrt(ratehist_GE21only.GetEntries())*SF)
	#hrate_me0.SetBinContent(ipt, ratehist_ME0.GetEntries()*SF)
	#hrate_me0.SetBinError(ipt, sqrt(ratehist_ME0.GetEntries())*SF)
	#hrate_q12.SetBinContent(ipt, ratehist_CSC_q12.GetEntries()*SF)
	#hrate_q12.SetBinError(ipt, sqrt(ratehist_CSC_q12.GetEntries())*SF)



    text = "%.2f<|#eta|<%.2f"%(etamin, etamax)
    hrate_q12.Sumw2(False)
    hrate_ge21.Sumw2(False)
    hrate_me0.Sumw2(False)
    hrate_ge21.Scale(SF)
    hrate_me0.Scale(SF)
    hrate_q12.Scale(SF)
    #plotshistograms([hrate_q12, hrate_ge21, hrate_me0], ["CSC only: EMTFQ>=12","CSC+GE21: hits in ME11, bending angle cut","CSC+GE21+ME0: ME0 bending angle cut"], "L1 standalone muon", text, outputdir3+"TriggerRateVSpt_combined_20170722_St2eta%dto%d_q%d_fraction%d_withGE2195_allnpar_Andq12_PU200_test"%(int(etamin*10),int(etamax*10), quality, fraction), True)
    plotshistograms([hrate_q12, hrate_ge21, hrate_me0], ["Phase-1 detector(CSC): Run-2 Trigger Configuration","Phase-1+GE11+GE21(CSC+GE11+GE21)","Phase-2(CSC+GE11+GE21+ME0)"], "L1Mu(standalone) performance", text, outputdir3+"TriggerRateVSpt_combined_20170722_St2eta%dto%d_q%d_fraction%d_withGE2195_allnpar_Andq12_PU200_test"%(int(etamin*10),int(etamax*10), quality, fraction), True)
    plotshistograms([hrate_q12, hrate_me0], ["Phase-1 detector(CSC): Run-2 Trigger Configuration", "Phase-2(CSC+GE11+GE21+ME0)"], "L1Mu(standalone) performance", text, outputdir3+"TriggerRateVSpt_combined_20170722_St2eta%dto%d_q%d_fraction%d_allnpar_Andq12_PU200_test"%(int(etamin*10),int(etamax*10), quality, fraction), True)





    #efficiency 



def getTriggerRateNoCut(ratesample, pt, etamin, etamax, quality, hasME1):
	#hrate_prompt = ROOT.TH1F("hrate_prompt","hrate_prompt",len(myetabin)-1, myetabin)

    #ratesample = "../ME0Bending_20170427/RateTree_20170613.root"
    ratefile = TFile(ratesample)
    h_total = ratefile.Get("h_eventcountME0Segment192")
    #h_total.Print()
    rateEvents = h_total.GetEntries()
    L1MuTriggerRate = TChain("L1MuTriggerRateME0Segment192")
    addFilesToChain(L1MuTriggerRate, ratesample)

    #hrate_prompt = TH1F("hrate","hrate",len(myetabin)-1, myetabin)
    hrate_prompt = TH1F("hrate","hrate",16, 1.6, 2.4)
    text1 = "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV"%(etamin, etamax, pt)
    baseratecut = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=%d && L1Mu_pt>=%f"%(etamin, etamax,quality, pt)
    if hasME1:
	    baseratecut = baseratecut + "&& hasME1"
    print "baseratecut ",baseratecut," todraw ","abs(L1Mu_eta)>>hrate_prompt"," L1MuTriggerRate ",L1MuTriggerRate
    c1 = TCanvas()
    c1.SetLogy()
    c1.SetGridx()
    c1.SetGridy()
    L1MuTriggerRate.Draw("abs(L1Mu_eta)>>hrate",baseratecut)
    #hrate_prompt.Print("ALL")
    hrate_prompt.Scale(SF)
    hrate_prompt.Draw("e")
    total = hrate_prompt.Integral()
    #hrate_prompt.Draw()
    #hrate_prompt.SetMinimum(.2)
    #hrate_prompt.SetMaximum(2000)
    #hrate_prompt.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
    hrate_prompt.SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation"+"  "*4+" #sqrt{s}=14 TeV, <PU>=200")
    hrate_prompt.GetXaxis().SetTitle("L1Mu |#eta|")
    hrate_prompt.GetYaxis().SetTitle("L1 trigger rate [kHz]")
    #hrate_ge11.SetMarkerStyle(maker[0])
    #hrate_ge11.SetMarkerColor(color[0])
    tex = ROOT.TLatex(.2, .2, text1)
    tex.SetNDC()
    tex.Draw("same")
    legend1 = TLegend(0.4,0.8,0.90,0.88)
    legend1.SetHeader("Single L1Mu")
    legend1.SetFillColor(ROOT.kWhite)
    #legend1.AddEntry(hrate_prompt, "L1Mu with hit in ME1","pl")
    legend1.AddEntry(hrate_prompt, "Quality >= 12, total %.1f kHz"%total,"pl")
    legend1.Draw("same")

    c1.SaveAs(outputdir2+"TriggerRateVseta_q%d_eta%dto%d_PU%d.png"%(quality, int(etamin*10), int(etamax*10), pu))
    c1.SaveAs(outputdir2+"TriggerRateVseta_q%d_eta%dto%d_PU%d.pdf"%(quality, int(etamin*10), int(etamax*10), pu))
    c1.SaveAs(outputdir2+"TriggerRateVseta_q%d_eta%dto%d_PU%d.C"%(quality, int(etamin*10), int(etamax*10), pu))

def produceME0dPhiLUT(ME0etamin, ME0etamax, ME0dR, pts, fractions):
    for pt in pts:
        for frac in fractions:
           GEMCSCTrackCh0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
           addFilesToChain(GEMCSCTrackCh0, signalsample) 
	   #ME0etamin = 2.1; ME0etamax = 2.4; ME0dR = .2
           baseSignalcut_ME0 = "abs(eta)>%f && abs(eta)<%f && L1Mu_me0_dR < %f && pt>=%f && pt<%f"%(ME0etamin, ME0etamax, ME0dR, pt-1, pt+2)
           ME0dphicut = getCut(GEMCSCTrackCh0, "abs(L1Mu_me0_dPhi)", baseSignalcut_ME0, 0.0, 0.02, 0.0001, frac)
           #print "pt ",pt, " frac ",frac, " ME0dphi cut ",ME0dphicut
           print "ME0pt%dfraction%d:"%(pt, frac)
           print "{\n%f\n}"%ME0dphicut
   

    
print "outputdir1 ",outputdir1," outputdir2 ",outputdir2
if not os.path.exists(outputdir1):
        os.makedirs(outputdir1)
if not os.path.exists(outputdir2):
        os.makedirs(outputdir2)
pt1 = 0
pts = [5, 7, 10, 12, 16, 20]
fractions = [75+x for x in range(0, 24)]

ME0dPhifile = "ME0DPhiLUT_20170727.log"
#pts = [2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12, 13, 14,15, 16, 18, 20,22, 25, 28, 30, 35, 40, 50]
pts = [4, 5, 6, 7, 8, 9, 10, 11,12, 13, 14,15, 16, 18, 20,22, 25, 28, 30, 35, 40, 50]
pts = [5,6, 7,8, 9,10, 11, 12,13,14, 15, 16,18, 20,22, 25, 28, 30, 35, 40]
#produceME0dPhiLUT(2.05, 2.4, 0.2, pts, fractions)
#getME0dPhiLUTValue(10, 98, ME0dPhifile)
#print "x ",x,type(x)
#pts = [10]
#fractions = [98]
badGE11 = 30
netas = [1.65, 2.1]

#allLUTfile = "finalLUT_20170312.log"
allLUTfile = "finalLUT_20170314_all.log"
allLUTfile = "finalLUT_20170801_pt10.log"
allLUTfile = "finalLUT_20170802.log"
ME0LUTfile = "ME0DPhiLUT_20170802.log"
outputrootfile = outputdir2+"TriggerRateVsPT.root"
#getTriggerRateNoCut(ratesample, 10, 1.6, 2.4, 12, False)
#fractions = [90, 91, 92, 93, 95,96,97, 98, 99]
#for fraction in fractions:
	#getGE11GE21LUTValue(10, fraction, 1.65, 2.15, 0, allLUTfile)
	#getGE11GE21LUTValue(10, fraction, 1.65, 2.15, 1, allLUTfile)
	#getFinalLUTValue(10, fraction, 1.65, 2.15, 1, allLUTfile)
#outputrootfile = outputdir2+"TriggerRateVsEff.root"
#plotall([20], fractions, netas, outputrootfile, allLUTfile, badGE11)
#plotall([15], fractions, netas, outputrootfile, allLUTfile, badGE11)
#plotall([10], fractions, netas, outputrootfile, allLUTfile, badGE11)
#plotall([30], [90, 91, 92, 93, 94, 95, 96, 97,98], netas, outputrootfile, allLUTfile, badGE11)
#plotall([40], [90, 91, 92, 93, 94, 95, 96, 97,98], netas, outputrootfile, allLUTfile, badGE11)
#plotall([15], [95], netas, outputrootfile, allLUTfile, badGE11)
#plotall([10], [98], netas, outputrootfile, allLUTfile, badGE11)

#getTriggerRateVsPt([10, 20], [98, 93, 98, 93], netas,outputrootfile, badGE11)
#getTriggerRateVsPt(pts, [94, 94, 94, 94], netas,outputrootfile, badGE11)

#getallTriggerRateEffVsEta(outputrootfile, [94, 94], [5,5,5], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [94, 94], [7,7,7], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [94, 94], [10, 10, 10], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [94, 94], [15, 15, 15], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [94, 96], [20, 20, 20], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [94, 96], [25, 25, 25], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [94, 98], [30, 30, 30], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [94, 98], [40, 40, 40], netas, allLUTfile)
#getallTriggerRateEffVsEta(outputrootfile, [93, 98], 16, netas)
#getallTriggerRateEffVsEta(outputrootfile, [93, 98], 20, netas)
getME0TriggerRateVsPt(ratesample, pts, 98, 2.1, 2.4, 4, allLUTfile)
