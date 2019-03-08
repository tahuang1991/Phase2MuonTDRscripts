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

def addTwoHistogram(hist1, hist2):
    nbins = hist1.GetXaxis().GetNbins()
    for i in range(1, nbins+1):
	binwidth = hist2.GetXaxis().GetBinWidth(1)
	content1 = hist1.GetBinContent(i)
	upedge1 = hist1.GetXaxis().GetBinUpEdge(i)
	lowedge1 = hist1.GetXaxis().GetBinLowEdge(i)
	bincenter2 = upedge1-binwidth
	xbin2 = hist2.FindBin(upedge1-binwidth)
	content2 = hist2.GetBinContent(xbin2)
	content = content1 + content2
	while (bincenter2 > lowedge1):
	    bincenter2 = bincenter2-binwidth
	    xbin2 = hist2.FindBin(bincenter2)
	    content2 = hist2.GetBinContent(xbin2)
	    content += content2
	hist1.SetBinContent(i, content)
	print "i ",i," bincenter ",bincenter2, " xbin2 ",xbin2," content1 ",content1," content2 ",content2

def getOverallEff(Teff, xinit):
    hden = Teff.GetCopyTotalHisto()
    hnum = Teff.GetCopyPassedHisto()
    nbins = hden.GetXaxis().GetNbins()
    xbin = hden.FindBin(xinit)
    den = hden.Integral(xbin, nbins)
    num = hnum.Integral(xbin, nbins)
    eff = float(num)/float(den) 
    #print "Teff ",Teff," den ",den," num ",num," eff ",eff
    return eff, sqrt(eff*(1-eff)/den), den
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
		
    
def getEffAndRate(pt, fractions, etamin, etamax, wfilename, filedir, condoroutroot, SBPlots, useGE21, doPlots=True, doLUTs=False, doRates=True):#uncertainty?

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
    nsignals_p = []
    nsignals_d = []
    nsignals_h = []

    extrasuffix = ""
    extraleg = "with GE21"
    if not(useGE21):
	extrasuffix = "_noGE21"
	extraleg = "w/o GE21"
    if etamin<1.6:
	extraleg = ""

    #nstarts = {1.8 : 1, 2.0: 2}
    nstarts = {1.2 : 1, 1.4: 2}
    #nstarts = {1.6: 1, 1.8 : 2, 2.0: 3}
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

    rfilename = filedir+condoroutroot
    rfile = TFile(rfilename, "READ")
    for frac in fractions:
	filename  = filedir+"EventsNum_Pt_%d_fraction_%d.log"%(pt, frac)
	if not(os.path.isfile(filename)):
	    print "failed to open file ",filename
	    continue
	fileopen = open(filename,'r')
	npar = 0
	"""
	startreading = False
	endreading = False
	istart = 0
	iend = 0
	print "fileopen ",fileopen, " nstarts ",nstarts[etamin]," etamin ",etamin
	for line in fileopen:
	    #v1: {284900.000000 1501.000000 64.000000 286.000000 982.000000 877.000000 876.000000 42.000000 840.000000
	    #v2: 284900.000000 1641.000000 29.000000 167.000000 18.000000 19122.000000 14524.000000 14528.000000 14601.000000  
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
	    #print "line ",line," istart ",istart," iend ",iend," starreading ",startreading," endreading ",endreading
	    if (not (startreading and not(endreading))):
		continue
	    allnums = line.split(" ")
	    #print "filename ", filename, "all nums ", allnums
	    n_signal_tot = float(allnums[5])
	    n_signal_p = float(allnums[6])
	    n_signal_d = float(allnums[7])
	    n_signal_h = float(allnums[8])
	    n_rate_tot = float(allnums[1])
	    n_rate_p = float(allnums[2])*SF
	    n_rate_d = float(allnums[3])*SF
	    n_rate_h = float(allnums[4])*SF
	    eff_p = n_signal_p/n_signal_tot
	    eff_d = n_signal_d/n_signal_tot
	    eff_h = n_signal_h/n_signal_tot
	    effErr_p = eff_p * sqrt((1-eff_p)/n_signal_p)
	    effErr_d = eff_d * sqrt((1-eff_d)/n_signal_p)
	    effErr_h = eff_h * sqrt((1.0-eff_h)/n_signal_p)
	    RateErr_p = sqrt(float(allnums[2]))*SF
	    RateErr_d = sqrt(float(allnums[3]))*SF
	    RateErr_h = sqrt(float(allnums[4]))*SF
	    if (len(nsignals)<4):
		nsignals.append(n_signal_tot)
	"""
	while npar <4:

	    histname_p = "ratehist_position_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), npar, frac, pt)
	    teffname1_p = "poistioneta%dto%dnpar%ddisplacedmuonpt%dptbg0fraction%d"%(int(etamin*10), int(etamax*10), npar,pt, frac)
	    histname_d = "ratehist_direction_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), npar, frac, pt)
	    teffname1_d = "directioneta%dto%dnpar%ddisplacedmuonpt%dptbg0fraction%d"%(int(etamin*10), int(etamax*10), npar,pt, frac)
	    histname_h = "ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), npar, frac, pt)
	    teffname1_h = "hybrideta%dto%dnpar%ddisplacedmuonpt%dptbg0fraction%d"%(int(etamin*10), int(etamax*10), npar,pt, frac)
	    print "teffname1_p ",teffname1_p
	    eff_p, effErr_p, nsignal_p = getOverallEff(rfile.Get(teffname1_p).Clone(), pt)
	    eff_d, effErr_d, nsignal_d = getOverallEff(rfile.Get(teffname1_d).Clone(), pt)
	    eff_h, effErr_h, nsignal_h = getOverallEff(rfile.Get(teffname1_h).Clone(), pt)
	    #print "pt ",pt," frac ",frac," etamin ",etamin, " etamax ",etamax, " eff_p ",eff_p," nsignal_p ",nsignal_p," eff_h ",eff_h, " nsignal_h ",nsignal_h
	    n_rate_p = rfile.Get(histname_p).GetEntries()*SF200
	    n_rate_d = rfile.Get(histname_d).GetEntries()*SF200
	    n_rate_h = rfile.Get(histname_h).GetEntries()*SF200
	    RateErr_p = sqrt(n_rate_p*SF200)
	    RateErr_d = sqrt(n_rate_d*SF200)
	    RateErr_h = sqrt(n_rate_h*SF200)
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
	    if (len(nsignals_h)<4):
		nsignals_h.append(nsignal_h)
		nsignals_d.append(nsignal_d)
		nsignals_p.append(nsignal_p)
	    npar += 1 

    totsignals = 0.0
    for n in nsignals_h:
	totsignals += n
    #print "nsignals ",nsignals
    #print "filename ",filename
    def getCombinedEffandRatePlot(algo, selectedPoint, fractions, thisfrac):
	hratelist = []
	Tefflistprompt = []
	Tefflistdisplaced = []
	for npar in range(0, 4):
	    ncount = -1
	    fraction = 0
	    for frac in fractions: 
		filename  = filedir+"EventsNum_Pt_%d_fraction_%d.log"%(pt, frac)
		if os.path.isfile(filename):
		    ncount += 1
		if ncount == selectedPoint[npar]:
		    fraction = frac
		    break
	    if ncount == -1:
		print "failed to find point ",selectedPoint[npar]," in par ",npar," pt ",pt
	    #ratehist_hybrid_eta20to21_npar1_frac96_pt7;1
	    #hybrideta18to20npar2displacedmuonpt7ptbg0fraction92;1
	    #hybrideta18to20npar3displacedmuonpt7ptbg0fraction92;1
	    algo2 = algo
	    if algo=="position":
		algo2 = "poistion"
	    histname = "ratehist_%s_eta%dto%d_npar%d_frac%d_pt%d"%(algo, int(etamin*10), int(etamax*10), npar, fraction, pt)
	    teffname1 = "%seta%dto%dnpar%dpromptmuonpt%dptbg0fraction%d"%(algo2, int(etamin*10), int(etamax*10), npar,pt, fraction)
	    teffname2 = "%seta%dto%dnpar%ddisplacedmuonpt%dptbg0fraction%d"%(algo2, int(etamin*10), int(etamax*10), npar, pt, fraction)
	    hratelist.append(rfile.Get(histname).Clone())
	    Tefflistprompt.append(rfile.Get(teffname1).Clone())
	    Tefflistdisplaced.append(rfile.Get(teffname2).Clone())
	    #getOverallEff(Tefflistdisplaced[npar], pt)
	    #getOverallEff(Tefflistdisplaced[npar], pt)
	    #print "selected rate ",histname
	for npar in range(1, 4):
	    #if npar == 0:
		#hist = hratelist[0].Clone()
	    #else:
	    #hist.Add(hratelist[npar])
	    hratelist[0].Add(hratelist[npar])
	    Tefflistprompt[0].Add(Tefflistprompt[npar])
	    Tefflistdisplaced[0].Add(Tefflistdisplaced[npar])
	#rfile.Close()
	hratelist[0].SetName("ratehist_%s_eta%dto%d_npar%d_frac%d_pt%d"%(algo, int(etamin*10), int(etamax*10), 4, thisfrac, pt)+extrasuffix)
	Tefflistprompt[0].SetName("Teff_prompt_%s_eta%dto%d_npar%d_frac%d_pt%d"%(algo, int(etamin*10), int(etamax*10), 4, thisfrac, pt)+extrasuffix)
	Tefflistdisplaced[0].SetName("Teff_displaced_%s_eta%dto%d_npar%d_frac%d_pt%d"%(algo, int(etamin*10), int(etamax*10), 4, thisfrac, pt)+extrasuffix)
	#SetOwnership(hratelist[0], False)
	#hratelist[0].Print("ALL")
	return Tefflistdisplaced[0], Tefflistdisplaced[0], hratelist[0]
	#return 
	    
    def getLUTsValue(algo, selectedPoint, fractions, lut, tag):
	cutlist = []
	for npar in range(0, 4):
	    #npoint = selectedPoint[npar]
	    ncount = -1
	    fraction = 0
	    for frac in fractions: 
		filename  = filedir+"EventsNum_Pt_%d_fraction_%d.log"%(pt, frac)
		if os.path.isfile(filename):
		    ncount += 1
		if ncount == selectedPoint[npar]:
		    fraction = frac
		    break
	    if ncount == -1:
		print "failed to find point ",selectedPoint[npar]," in par ",npar," pt ",pt
	    readinLUT = open(filedir+"%sLUT_Pt%d_fraction%d.log"%(algo, pt, fraction),'r')
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
		if (algo == "Position" or algo == "Direction"):
		    allnums = line.split(",")
		    cutlist.append(allnums[npar])
		    break
		if algo == "Hybrid" and npar == iline:
		    cutlist.append(line)
		    break
	print "algo ",algo, " cuts ",cutlist
	lut.write(algo+tag+"\n{\n")
	if algo == "Position" or algo == "Direction":
	    for x in cutlist[:-1]:
		lut.write(x+",")
	    lut.write(cutlist[-1]+"}\n")
	else:
	    lut.writelines(x for x in cutlist)
	    lut.write("}\n")
		#print "filename ", filename, "all nums ", allnums

    finalLUT = open("finalLUT_20170303.log",'a')
    hratelist_p = []
    hratelist_d = []
    hratelist_h = []
    nfrac = -1
    for frac in fractions:
	nfrac += 1
	print "pt ",pt," etamin ",etamin, "etamax ",etamax, " fraction ",frac
	peff,prate,pselected = maximizeSensitivity(efflist_p, ratelist_p, nsignals_p, frac)
	deff,drate,dselected = maximizeSensitivity(efflist_d, ratelist_d, nsignals_d, frac)
	heff,hrate,hselected = maximizeSensitivity(efflist_h, ratelist_h, nsignals_h, frac)
	print "from log file, optimial position eff ",peff, " prate ",prate ," hybrid eff ",heff," hrate ",hrate
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
	    getLUTsValue("Position", pselected, fractions, finalLUT, tag)
	    getLUTsValue("Direction", dselected, fractions, finalLUT, tag)
	    getLUTsValue("Hybrid", hselected, fractions, finalLUT, tag)
	if doRates:
	    wfile = TFile(wfilename, "UPDATE") 
	    teff1_p, teff2_p, hrate_p = getCombinedEffandRatePlot("position", pselected, fractions, frac)
	    teff1_d, teff2_d, hrate_d = getCombinedEffandRatePlot("direction", dselected, fractions, frac)
	    teff1_h, teff2_h, hrate_h = getCombinedEffandRatePlot("hybrid", hselected, fractions, frac)
	    eff1_p, err1_p, nsignal_p = getOverallEff(teff1_p, pt)
	    eff2_p, err2_p, nsignal2_d = getOverallEff(teff2_p, pt)
	    eff1_h, err1_h, nsignal_h = getOverallEff(teff1_h, pt)
	    eff2_h, err2_h, nsignal2_h = getOverallEff(teff2_h, pt)
	    print "eff1 p ",eff1_p, " eff2_p ",eff2_p, " eff1_h ",eff1_h, " eff2_h ",eff2_h, " rate entries position ",hrate_p.GetEntries()," hyrid ",hrate_h.GetEntries()
	    teff1_p.Write();teff2_p.Write();hrate_p.Write()
	    teff1_d.Write();teff2_d.Write();hrate_d.Write()
	    teff1_h.Write();teff2_h.Write();hrate_h.Write()
	    wfile.Close()
	    
    wfile = TFile(wfilename, "UPDATE") 
    #print "total rate ",ratelist_h 
    legs = ["Position-based algorithm","Stub alignment algorithm %s"%extraleg,"Hybrid algorithm %s"%extraleg]

    if not(doPlots):	
	wfile.Close()
	return
    graphlist_p = []
    graphlist_d = []
    graphlist_h = []
    for npar in range(0, 5):
	legend = ROOT.TLegend(0.15,0.75,0.63,0.9)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	legend.SetTextSize(.05)
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
	
	graphlist_p[npar].SetName("TriggerEffVsRate_position_pt%d_eta%dto%d_npar%d%s"%(pt, int(etamin*10), int(etamax*10), npar, extrasuffix))
	graphlist_d[npar].SetName("TriggerEffVsRate_direction_pt%d_eta%dto%d_npar%d%s"%(pt, int(etamin*10), int(etamax*10), npar, extrasuffix))
	graphlist_h[npar].SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d%s"%(pt, int(etamin*10), int(etamax*10), npar, extrasuffix))
	
	mgerr.Add(graphlist_p[npar])
	#mgerr.Add(graphlist_d[npar])
	mgerr.Add(graphlist_h[npar])
	legend.AddEntry(graphlist_p[npar],legs[0],"pl")
	#legend.AddEntry(graphlist_d[npar],legs[1],"pl")
	legend.AddEntry(graphlist_h[npar],legs[2],"pl")
	mgerr.Draw("AP")
	legend.Draw("same")
	mgerr.SetTitle("Trigger Eff Vs Rate, p_{T}>%d GeV, %.1f<|#eta|<%.2f, parity=%d"%(pt, etamin, etamax, npar))
	mgerr.SetMinimum(0)
	if npar==4:
	    mgerr.SetTitle("Trigger Eff Vs Rate, p_{T}>%d GeV, %.1f<|#eta|<%.2f, all parities"%(pt, etamin, etamax))

	mgerr.GetXaxis().SetTitle("Trigger Efficiency")
	mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d%s.png"%(pt, int(etamin*10), int(etamax*10), npar, extrasuffix))
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d%s.pdf"%(pt, int(etamin*10), int(etamax*10), npar, extrasuffix))
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d%s.C"%(pt, int(etamin*10), int(etamax*10), npar, extrasuffix))
	mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d_npar%d%s"%(pt, int(etamin*10), int(etamax*10), npar, extrasuffix))
	graphlist_p[npar].Write()
	graphlist_d[npar].Write()
	graphlist_h[npar].Write()
	mgerr.Write()
    wfile.Close()
    return totsignals, efflist_p[4], ratelist_p[4], efflist_d[4], ratelist_d[4], efflist_h[4], ratelist_h[4]

def CombinedGE21_SB(filename, pts, netas, SBPlots):
    tfile = TFile(filename, "UPDATE")
    color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
    maker = [20,21,22,23,33]
    legs = ["Position-based algorithm","Hybrid algorithm without GE21","Hybrid algorithm with GE21"]
    for pt in pts:
      for neta in range(len(netas)):
	if neta < len(netas)-1:
	    etamin = netas[neta]
	    etamax = netas[neta+1]
	    allnpar = 5
	else:
	    etamin = netas[0]
	    etamax = netas[-1]
	    allnpar = 1
	
	for npar in range(allnpar):
	    #print "pt ",pt, " etamin ",etamin, " etamax ",etamax," npar ",npar,"TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d"%(pt, int(etamin*10), int(etamax*10), npar)
	    legend = ROOT.TLegend(0.15,0.7,0.65,0.92)
	    legend.SetFillColor(ROOT.kWhite)
	    legend.SetTextFont(42)
	    legend.SetTextSize(.05)
	    c1 = TCanvas()
	    mgerr =TMultiGraph()
	    if allnpar>1:
		graph_GE21 = tfile.Get("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d"%(int(pt), int(etamin*10), int(etamax*10), npar))
		graph_noGE21 = tfile.Get("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_npar%d_noGE21"%(int(pt), int(etamin*10), int(etamax*10), npar))
		graph_p = tfile.Get("TriggerEffVsRate_position_pt%d_eta%dto%d_npar%d"%(int(pt), int(etamin*10), int(etamax*10), npar))
	    else:
		graph_GE21 = tfile.Get("TriggerEffVsRate_hybrid_pt%d_eta%dto%d"%(int(pt), int(etamin*10), int(etamax*10)))
		graph_noGE21 = tfile.Get("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_noGE21"%(int(pt), int(etamin*10), int(etamax*10)))
		graph_p = tfile.Get("TriggerEffVsRate_position_pt%d_eta%dto%d"%(int(pt), int(etamin*10), int(etamax*10)))

	    graph_p.SetMarkerStyle(maker[0])
	    graph_p.SetMarkerColor(color[0])
	    graph_p.SetLineColor(color[0])
	    graph_noGE21.SetMarkerStyle(maker[3])
	    graph_noGE21.SetMarkerColor(color[3])
	    graph_noGE21.SetLineColor(color[3])
	    graph_GE21.SetMarkerStyle(maker[2])
	    graph_GE21.SetMarkerColor(color[2])
	    graph_GE21.SetLineColor(color[2])

	    mgerr.Add(graph_p)
	    mgerr.Add(graph_noGE21)
	    mgerr.Add(graph_GE21)

	    legend.AddEntry(graph_p,legs[0],"p")
	    legend.AddEntry(graph_noGE21,legs[1],"p")
	    legend.AddEntry(graph_GE21,legs[2],"p")
	    mgerr.Draw("AP")
	    legend.Draw("same")
	    #mgerr.SetTitle("Trigger Eff Vs Rate, p_{T}>%d GeV, %.2f<|#eta|<%.2f, parity=%d"%(pt, etamin, etamax, npar))
	    mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
	    mgerr.SetMinimum(0)
	    tex = TLatex()
	    if npar==4 or allnpar==1:
		tex.Draw(0.2, 0.88,"p_{T}>%d GeV, %.2f<|#eta|<%.2f, all parities"%(pt, etamin, etamax))
	    else:
		tex.Draw(0.2, 0.88,"p_{T}>%d GeV, %.2f<|#eta|<%.2f, parity=%d"%(pt, etamin, etamax, npar))
	    mgerr.GetXaxis().SetTitle("Trigger Efficiency")
	    mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")
	    if allnpar==5:
		c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d_all.png"%(pt, int(etamin*10), int(etamax*10), npar))
		c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d_all.pdf"%(pt, int(etamin*10), int(etamax*10), npar))
		c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_npar%d_all.C"%(pt, int(etamin*10), int(etamax*10), npar))
		mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d_npar%d_combined"%(pt, int(etamin*10), int(etamax*10), npar))
	    else:
		c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_all.png"%(pt, int(etamin*10), int(etamax*10)))
		c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_all.pdf"%(pt, int(etamin*10), int(etamax*10)))
		c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_all.C"%(pt, int(etamin*10), int(etamax*10)))
		mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d_combined"%(pt, int(etamin*10), int(etamax*10)))
	    mgerr.Write()
    tfile.Close()
	

def CombinedGE21_effAndrate(filename, pts, netas, SBPlots):
    tfile = TFile(filename, "UPDATE")
    color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
    maker = [20,21,22,23,33]
    legs = ["Position-based algorithm","Hybrid algorithm without GE21","Hybrid algorithm with GE21"]
    pu = 200
    for pt in pts:
	efflist_p = []
	ratelist_p = []
	effErrlist_p = []
	rateErrlist_p = []
	efflist_h_noGE21 = []
	ratelist_h_noGE21 = []
	effErrlist_h_noGE21 = []
	rateErrlist_h_noGE21 = []
	efflist_h = []
	ratelist_h = []
	effErrlist_h = []
	rateErrlist_h = []
	for frac in fractions:
	    teff_h_displaced = []
	    teff_h_noGE21_displaced = []
	    teff_p_displaced = []
	    teff_h_displaced = []
	    teff_h_noGE21_displaced = []
	    teff_p_displaced = []
	    histrate_h = []
	    histrate_p = []
	    histrate_h_noGE21 = []
	    for neta in range(len(netas)-1):
		etamin = netas[neta]
		etamax = netas[neta+1]
		suffix = ""
		if etamin>=1.6:
		    suffix = "_noGE21"
		print "pt ",pt, " etamin ",etamin, " etamax ",etamax," frac ",frac
		#Teff_displaced_hybrid_eta12to14_npar4_frac82_pt10
		teff_p_displaced.append(tfile.Get("Teff_displaced_position_eta%dto%d_npar4_frac%d_pt%d"%(int(etamin*10), int(etamax*10), frac, pt)))
		teff_h_displaced.append(tfile.Get("Teff_displaced_hybrid_eta%dto%d_npar4_frac%d_pt%d"%(int(etamin*10), int(etamax*10), frac, pt)))
		teff_h_noGE21_displaced.append(tfile.Get("Teff_displaced_hybrid_eta%dto%d_npar4_frac%d_pt%d"%(int(etamin*10), int(etamax*10), frac, pt)+suffix))
		#getOverallEff(teff_p_displaced[neta], pt)
		#getOverallEff(teff_h_displaced[neta], pt)
		#getOverallEff(teff_h_noGE21_displaced[neta], pt)
		histrate_p.append(tfile.Get("ratehist_position_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), 4, frac, pt)))
		histrate_h.append(tfile.Get("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), 4, frac, pt)))
		histrate_h_noGE21.append(tfile.Get("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), 4, frac, pt)+suffix))
	    for neta in range(0, len(netas)-1):
		print "etamin ",netas[neta]," etamax ",netas[neta+1], " rate entries position ",histrate_p[neta].GetEntries()," hyrbid ",histrate_h[neta].GetEntries()," after adding , hrate ",histrate_h[0].GetEntries()
		if neta==0: continue
		teff_p_displaced[0].Add(teff_p_displaced[neta])
		teff_h_displaced[0].Add(teff_h_displaced[neta])
		teff_h_noGE21_displaced[0].Add(teff_h_noGE21_displaced[neta])
		if netas[neta] > 1.6:		
		    histrate_p[0].Add(histrate_p[neta])
		    histrate_h[0].Add(histrate_h[neta])
		    histrate_h_noGE21[0].Add(histrate_h_noGE21[neta])
		elif netas[neta] == 1.6:
		    addTwoHistogram(histrate_p[neta], histrate_p[0]); histrate_p[0]= histrate_p[neta].Clone()
		    addTwoHistogram(histrate_h[neta], histrate_h[0]); histrate_h[0] = histrate_h[neta].Clone()
		    addTwoHistogram(histrate_h_noGE21[neta], histrate_h_noGE21[0]); histrate_h_noGE21[0] = histrate_h_noGE21[neta].Clone()
		elif netas[neta] < 1.6:
		    histrate_p[0].Add(histrate_p[neta])
		    histrate_h[0].Add(histrate_h[neta])
		    histrate_h_noGE21[0] = histrate_h[0].Clone()

	    etamin = netas[0]
	    etamax = netas[-1]
	    print "etamin ",etamin," etamax ",etamax, " rate entries position ",histrate_p[0].GetEntries()," hyrbid ",histrate_h[0].GetEntries()," hybrid_noGE21 ",histrate_h_noGE21[0].GetEntries()
	    peff,peffErr,nsignal_p = getOverallEff(teff_p_displaced[0], pt)
	    prate = histrate_p[0].GetEntries()*SF200
	    efflist_p.append(peff)
	    ratelist_p.append(prate)
	    effErrlist_p.append(peffErr)
	    rateErrlist_p.append(sqrt(prate*SF200))
	    hnoGE21eff,hnoGE21effErr,nsignal_h_noGE21 = getOverallEff(teff_h_noGE21_displaced[0], pt)
	    hnoGE21rate = histrate_h_noGE21[0].GetEntries()*SF200
	    efflist_h_noGE21.append(hnoGE21eff)
	    ratelist_h_noGE21.append(hnoGE21rate)
	    effErrlist_h_noGE21.append(hnoGE21effErr)
	    rateErrlist_h_noGE21.append(sqrt(hnoGE21rate*SF200))
	    heff,heffErr,nsignal_h = getOverallEff(teff_h_displaced[0], pt)
	    hrate = histrate_h[0].GetEntries()*SF200
	    efflist_h.append(heff)
	    ratelist_h.append(hrate)
	    effErrlist_h.append(heffErr)
	    rateErrlist_h.append(sqrt(hrate*SF200))
	    print "pt ",pt," peff ",peff," prate ",prate, " hnoGE21eff ",hnoGE21eff," hnoGE21rate ",hnoGE21rate," heff ",heff," hrate ",hrate," frac ",frac 
	     
	    teff_p_displaced[0].SetName("Teff_displaced_position_eta%dto%d_npar4_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), frac, pt, pu))
	    teff_h_displaced[0].SetName("Teff_displaced_hybrid_eta%dto%d_npar4_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), frac, pt, pu))
	    teff_h_noGE21_displaced[0].SetName("Teff_displaced_hybrid_eta%dto%d_npar4_frac%d_pt%d_noGE21_PU%d"%(int(etamin*10), int(etamax*10), frac, pt, pu))
	    histrate_p[0].SetName("ratehist_position_eta%dto%d_npar%d_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), 4, frac, pt, pu))
	    histrate_h[0].SetName("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), 4, frac, pt, pu))
	    histrate_h_noGE21[0].SetName("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d_noGE21_PU%d"%(int(etamin*10), int(etamax*10), 4, frac, pt, pu))
	    teff_p_displaced[0].SetMarkerStyle(maker[0])
	    teff_p_displaced[0].SetMarkerColor(color[0])
	    teff_p_displaced[0].SetLineColor(color[0])
	    histrate_p[0].SetMarkerStyle(maker[0])
	    histrate_p[0].SetMarkerColor(color[0])
	    histrate_p[0].SetLineColor(color[0])
	    teff_h_noGE21_displaced[0].SetMarkerStyle(maker[3])
	    teff_h_noGE21_displaced[0].SetMarkerColor(color[3])
	    teff_h_noGE21_displaced[0].SetLineColor(color[3])
	    histrate_h_noGE21[0].SetMarkerStyle(maker[3])
	    histrate_h_noGE21[0].SetMarkerColor(color[3])
	    histrate_h_noGE21[0].SetLineColor(color[3])
	    teff_h_displaced[0].SetMarkerStyle(maker[2])
	    teff_h_displaced[0].SetMarkerColor(color[2])
	    teff_h_displaced[0].SetLineColor(color[2])
	    histrate_h[0].SetMarkerStyle(maker[2])
	    histrate_h[0].SetMarkerColor(color[2])
	    histrate_h[0].SetLineColor(color[2])

	    tex1 = TLatex(.4, .6,"p_{T}^{L1}>%d GeV, %.2f<|#eta|<%.2f"%(pt, etamin, etamax))
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
	
	    legend1 = ROOT.TLegend(0.4,0.2,0.88,0.5)
	    legend1.SetFillColor(ROOT.kWhite)
	    legend1.SetTextFont(42)
	    #legend1.SetTextSize(.05)
	    legend1.AddEntry(teff_p_displaced[0], legs[0], "p")
	    legend1.AddEntry(teff_h_noGE21_displaced[0], legs[1], "p")
	    legend1.AddEntry(teff_h_displaced[0], legs[2], "p")
	    b1.Draw()
	    teff_p_displaced[0].Draw("samep")
	    teff_h_noGE21_displaced[0].Draw("samep")
	    teff_h_displaced[0].Draw("samep")
	    legend1.Draw("same")
	    tex1.Draw("same")
	    #c1.SaveAs(SBPlots+"TriggerEff_turnon_pt%d_eta%dto%d_frac%d_PU%d.png"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c1.SaveAs(SBPlots+"TriggerEff_turnon_pt%d_eta%dto%d_frac%d_PU%d.pdf"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c1.SaveAs(SBPlots+"TriggerEff_turnon_pt%d_eta%dto%d_frac%d_PU%d.C"%(pt, int(etamin*10), int(etamax*10), frac, pu))

	    c2 = TCanvas()
	    c2.Clear()
	    b2 = ROOT.TH1F("b2","b2",len(myetabin)-1, myetabin)
	    b2.GetYaxis().SetRangeUser(0.0, 50)
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
	    legend2 = ROOT.TLegend(0.15,0.6,0.6,0.8)
	    legend2.SetFillColor(ROOT.kWhite)
	    legend2.SetTextFont(42)
	    #legend2.SetTextSize(.04)
	    legend2.AddEntry(histrate_p[0], legs[0], "p")
	    legend2.AddEntry(histrate_h_noGE21[0], legs[1], "p")
	    legend2.AddEntry(histrate_h[0], legs[2], "p")
	    b2.Draw()
	    histrate_p[0].Scale(SF200)
	    histrate_h_noGE21[0].Scale(SF200)
	    histrate_h[0].Scale(SF200)

	    histrate_p[0].Draw("samee")
	    histrate_h_noGE21[0].Draw("samee")
	    histrate_h[0].Draw("samee")
	    legend2.Draw("same")
	    tex2.Draw("same")
	    #c2.SaveAs(SBPlots+"TriggerRate_eta_pt%d_eta%dto%d_frac%d_PU%d.png"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c2.SaveAs(SBPlots+"TriggerRate_eta_pt%d_eta%dto%d_frac%d_PU%d.pdf"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    c2.SaveAs(SBPlots+"TriggerRate_eta_pt%d_eta%dto%d_frac%d_PU%d.C"%(pt, int(etamin*10), int(etamax*10), frac, pu))
	    teff_p_displaced[0].Write()
	    teff_h_displaced[0].Write()
	    teff_h_noGE21_displaced[0].Write()
	    histrate_p[0].Write()
	    histrate_h[0].Write()
	    histrate_h_noGE21[0].Write()
	etamin = netas[0]
	etamax = netas[-1]
	tex3 = TLatex(.2, .88,"p_{T}^{L1}>%d GeV, %.2f<|#eta|<%.2f"%(pt, etamin, etamax))
	tex3.SetNDC()
	legend = ROOT.TLegend(0.15,0.7,0.65,0.85)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	#legend.SetTextSize(.04)
	c3 = TCanvas()
	mgerr =TMultiGraph()
	graph_p = TGraphErrors(len(efflist_p), np.array(efflist_p), np.array(ratelist_p), np.array(effErrlist_p), np.array(rateErrlist_p))
	graph_noGE21 = TGraphErrors(len(efflist_h_noGE21), np.array(efflist_h_noGE21), np.array(ratelist_h_noGE21), np.array(effErrlist_h_noGE21), np.array(rateErrlist_h_noGE21))
	graph_GE21 = TGraphErrors(len(efflist_h), np.array(efflist_h), np.array(ratelist_h), np.array(effErrlist_h), np.array(rateErrlist_h))
	graph_p.SetMarkerStyle(maker[0])
	graph_p.SetMarkerColor(color[0])
	graph_p.SetLineColor(color[0])
	graph_noGE21.SetMarkerStyle(maker[3])
	graph_noGE21.SetMarkerColor(color[3])
	graph_noGE21.SetLineColor(color[3])
	graph_GE21.SetMarkerStyle(maker[2])
	graph_GE21.SetMarkerColor(color[2])
	graph_GE21.SetLineColor(color[2])

	mgerr.Add(graph_p)
	mgerr.Add(graph_noGE21)
	mgerr.Add(graph_GE21)

	legend.AddEntry(graph_p,legs[0],"p")
	legend.AddEntry(graph_noGE21,legs[1],"p")
	legend.AddEntry(graph_GE21,legs[2],"p")
	mgerr.Draw("AP")
	legend.Draw("same")
	tex3.Draw("same")
	mgerr.SetMinimum(0)
	mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, %d PU"%pu)
	mgerr.GetXaxis().SetTitle("Trigger Efficiency")
	mgerr.GetYaxis().SetTitle("Trigger Rate [kHz]")
	#c3.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_all_v2.png"%(pt, int(etamin*10), int(etamax*10)))
	c3.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_all_PU%d.pdf"%(pt, int(etamin*10), int(etamax*10), pu))
	c3.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d_all_PU%d.C"%(pt, int(etamin*10), int(etamax*10), pu))
	mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d_combined_PU%d"%(pt, int(etamin*10), int(etamax*10), pu))
	graph_p.Write()
	graph_noGE21.Write()
	graph_GE21.Write()
	mgerr.Write()
	

    tfile.Close()


def getallPtEffAndRate(pts, fractions, etas, rootfile, filedir, condoroutroot, SBPlots, useGE21, doPlots, doLUTs, doRates):
    for pt in pts:
	peffalleta = []
	pratealleta = []
	deffalleta = []
	dratealleta = []
	heffalleta = []
	hratealleta = []
	nalleta = []
	for neta in range(len(etas)-1):
	    etamin = etas[neta]
	    etamax = etas[neta+1]
	    #all 4 parities efflist_p[nfrac]
	    ntot, efflist_p, ratelist_p, efflist_d, ratelist_d,efflist_h, ratelist_h = getEffAndRate(pt, fractions, etamin, etamax, rootfile, filedir, condoroutroot, SBPlots, useGE21, doPlots, doLUTs, doRates)
	    nalleta.append(ntot)
	    peffalleta.append(efflist_p), pratealleta.append(ratelist_p)
	    deffalleta.append(efflist_d), dratealleta.append(ratelist_d)
	    heffalleta.append(efflist_h), hratealleta.append(ratelist_h)

	if len(etas)<3:	continue
	def getfinalEffAndRate(nalleta, effalleta,  ratealleta, nfrac):
	    totden = 0.0
	    totnum = 0.0
	    totrate = 0.0
	    for neta in range(len(etas)-1):
		totden += nalleta[neta]
		totnum += effalleta[neta][nfrac]*nalleta[neta]
		totrate += ratealleta[neta][nfrac]
	    return totnum, totden, totrate
		

	efflist_p_alleta = []
	ratelist_p_alleta = []
	effErrlist_p_alleta = []
	rateErrlist_p_alleta = []
	efflist_d_alleta = []
	ratelist_d_alleta = []
	effErrlist_d_alleta = []
	rateErrlist_d_alleta = []
	efflist_h_alleta = []
	ratelist_h_alleta = []
	effErrlist_h_alleta = []
	rateErrlist_h_alleta = []
	nfrac = -1
	etamin = netas[0]; etamax = netas[-1]
	for frac in fractions:
	    nfrac += 1
	    ptotnum, ptotden, ptotrate  = getfinalEffAndRate(nalleta, peffalleta,  pratealleta, nfrac)
	    dtotnum, dtotden, dtotrate  = getfinalEffAndRate(nalleta, deffalleta,  dratealleta, nfrac)
	    htotnum, htotden, htotrate  = getfinalEffAndRate(nalleta, heffalleta,  hratealleta, nfrac)
	    peff = float(ptotnum)/float(ptotden)
	    efflist_p_alleta.append(peff)
	    ratelist_p_alleta.append(ptotrate)
	    effErrlist_p_alleta.append(sqrt((1-peff)*peff/ptotden))
	    rateErrlist_p_alleta.append(sqrt(ptotrate*SF))
	    deff = float(dtotnum)/float(dtotden)
	    efflist_d_alleta.append(deff)
	    ratelist_d_alleta.append(dtotrate)
	    effErrlist_d_alleta.append(sqrt((1-deff)*deff/dtotden))
	    rateErrlist_d_alleta.append(sqrt(dtotrate*SF))
	    heff = float(htotnum)/float(htotden)
	    efflist_h_alleta.append(heff)
	    ratelist_h_alleta.append(htotrate)
	    effErrlist_h_alleta.append(sqrt((1-heff)*heff/htotden))
	    rateErrlist_h_alleta.append(sqrt(htotrate*SF))
	    print "pt ",pt, " etamin ",etamin," etamax ",etamax, " frac ",frac," ptotden ",ptotden," ptotnum ",ptotnum," htotnum ",htotnum," nalleta ",nalleta," peff ",peff, " heff ",heff
	extrasuffix = ""
	extraleg = "with GE21"
	if not(useGE21):
	    extrasuffix = "_noGE21"
	    extraleg = "w/o GE21"
	if etamin<1.6:
	    extraleg = ""
	wfile = TFile(rootfile, "UPDATE") 
	#print "total rate ",ratelist_h 
	legs = ["Position-based algorithm","Stub alignment algorithm %s"%extraleg,"Hybrid algorithm %s"%extraleg]
	tex = TLatex(0.2, 0.88,"p_{T}>%d GeV, %.2f<|#eta|<%.2f, all parities"%(pt, etamin, etamax))
	tex.SetNDC()
	legend = ROOT.TLegend(0.15,0.7,0.63,0.85)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	#legend.SetTextSize(.05)
	c1 = TCanvas()
	mgerr =TMultiGraph()
	graph_p = TGraphErrors(len(efflist_p_alleta), np.array(efflist_p_alleta), np.array(ratelist_p_alleta), np.array(effErrlist_p_alleta), np.array(rateErrlist_p_alleta))
	graph_d = TGraphErrors(len(efflist_d_alleta), np.array(efflist_d_alleta), np.array(ratelist_d_alleta), np.array(effErrlist_d_alleta), np.array(rateErrlist_d_alleta))
	graph_h = TGraphErrors(len(efflist_h_alleta), np.array(efflist_h_alleta), np.array(ratelist_h_alleta), np.array(effErrlist_h_alleta), np.array(rateErrlist_h_alleta))
	graph_p.SetMarkerStyle(maker[0])
	graph_p.SetMarkerColor(color[0])
	graph_d.SetMarkerStyle(maker[1])
	graph_d.SetMarkerColor(color[1])
	graph_h.SetMarkerStyle(maker[2])
	graph_h.SetMarkerColor(color[2])
	etamin = netas[0]; etamax = netas[-1]
	graph_p.SetName("TriggerEffVsRate_position_pt%d_eta%dto%d%s"%(pt, int(etamin*10), int(etamax*10), extrasuffix))
	graph_d.SetName("TriggerEffVsRate_direction_pt%d_eta%dto%d%s"%(pt, int(etamin*10), int(etamax*10), extrasuffix))
	graph_h.SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d%s"%(pt, int(etamin*10), int(etamax*10), extrasuffix))
	mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d%s"%(pt, int(etamin*10), int(etamax*10), extrasuffix))
	
	mgerr.Add(graph_p)
	#mgerr.Add(graph_d)
	mgerr.Add(graph_h)
	legend.AddEntry(graph_p,legs[0],"pl")
	#legend.AddEntry(graph_d,legs[1],"pl")
	legend.AddEntry(graph_h,legs[2],"pl")
	mgerr.Draw("AP")
	legend.Draw("same")
	tex.Draw("same")
	mgerr.SetMinimum(0)
	mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 200 PU")
	#mgerr.SetTitle("Trigger Eff Vs Rate, p_{T}>%d GeV, %.2f<|#eta|<%.2f, all parities"%(pt, etamin, etamax))
	mgerr.GetXaxis().SetTitle("Trigger Efficiency")
	mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d%s.png"%(pt, int(etamin*10), int(etamax*10),  extrasuffix))
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d%s.pdf"%(pt, int(etamin*10), int(etamax*10),  extrasuffix))
	c1.SaveAs(SBPlots+"TriggerEff_Rate_pt%d_eta%dto%d%s.C"%(pt, int(etamin*10), int(etamax*10),  extrasuffix))
	graph_p.Write()
	graph_d.Write()
	graph_h.Write()
	mgerr.Write()

	wfile.Close()

	     



	    
#DecompresZipFiles("./")
#SBPlots = "eta16to215SBPlots_20170304_withGE21_v2/"
#SBPlots = "eta16to215SBPlots_20170304_combined_PU200/"
SBPlots = "eta12to16SBPlots_20170312_combined_PU200/"
if not os.path.exists(SBPlots):
        os.makedirs(SBPlots)

#filedir = "condor_20170221_rate_fraction90_95_99_withGE21_eta20to215/"
#filedir = "condor_20170223_rate_fraction90_95_99_noGE21_eta18to215/"
#filedir = "condor_20170223_rate_fraction90_95_99_noGE21_eta18to215/"
filedir = "condor_20170303_rate_fraction90_95_99_eta12to16/"
#filedir = "condor_20170303_rate_fraction90_95_99_eta16to215_noGE21/"
fractions = [x for x in range(76, 97)]
pts = [5, 7, 10,12, 15, 20]
netas = [1.6,1.8,2.0,2.15]
netas = [1.2,1.4,1.6]
useGE21 = True
condoroutroot = "Teffout_eta12to16.root"
outputroot = "SB_eta12to16_20170312.root"
#getallPtEffAndRate(pts, fractions, netas, outputroot, filedir, condoroutroot, SBPlots, useGE21, True, True, True)
filename = "SB_eta16to215_all_20170304_backup.root"
filename = "SB_eta16to215_all_20170306.root"
filename = "SB_eta12to215_all_20170306.root"
netas = [1.2,1.4,1.6,1.8,2.0,2.15]
#CombinedGE21_SB(filename, pts, netas, SBPlots)
#CombinedGE21_effAndrate(filename, pts, netas, SBPlots)
