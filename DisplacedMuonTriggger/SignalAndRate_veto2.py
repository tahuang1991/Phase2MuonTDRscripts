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
rateptbin = [5.0, 6.0, 7.0,8.0, 10.0, 12.0, 15.0, 20.0, 25.0, 30.0, 35.0]
myrateptbin = np.asarray(rateptbin)
total = 284900.000000
SF = 30.0*1000/total#khz
SF200 = 30.0*1000/total*(200.0/140.0)#khz
pu = 140
color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
maker = [20,21,22,23,33]
evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]

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
	  
def gethist1D(chain, den, todraw="pt"):
    h1 = ROOT.TH1F("h1","h1",len(ptbins)-1, ptbins)
    chain.Draw("fabs(%s) >> h1"%todraw,den)
    return h1

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
		
    
def getFinalLUTValue(pt, fraction, etamin, etamax, npar, suffix, filename):
    algos_lut = {"Position": -1, "Direction"+suffix: -1,"Hybrid"+suffix:[]}
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
	    #print "ialgo ",ialgo, " algo ",algo
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
	#print "algo ",key, " value ",algos_lut[key]
    return algos_lut
		    

#_____________________________________________________________
def makeEffplot_v2(chainlist,todraw, den, num, etamin, etamax, xtitle,ytitle,leg, legheader, txt,picname):
	
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
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*8+" 14 TeV, 140 PU")
    
    
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
    legend.SetTextSize(.05)
    legend.SetHeader("%s"%legheader)
    muons = ["Prompt Muons","Displaced Muons, 5<|d_{xy}|<50cm"]
    for n in range(len(chainlist)):
	#	print "n ",n," den ",den[n]," num ",num[n]
	hden = ROOT.TH1F("hden%d"%n,"hden%d"%n,len(ptbins)-1, ptbins)
	hnum = ROOT.TH1F("hnum%d"%n,"hnum%d"%n,len(ptbins)-1, ptbins)
	for i in range(len(ptbins)):
		hden.SetBinContent(i, 0)
		hnum.SetBinContent(i,.0)
	#Teffs.append(ROOT.TEfficiency(hnum, hden))
	hdens.append(hden)
	hnums.append(hnum)
	chain = chainlist[n]
	hdens[n].Add(gethist1D(chain, den[n],todraw))
	hnums[n].Add(gethist1D(chain, den[n]+" && %s"%(num[n]), todraw))

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
	Teffs[m].SetMarkerColor(color[n])
	Teffs[m].SetMarkerStyle(maker[n])
	Teffs[m].Draw("same")
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
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*8+" 14 TeV, 140 PU")

    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()

    dy_leg = 0.06*len(Teffs)
    
    legend = ROOT.TLegend(0.45,0.2,0.9,0.2+dy_leg)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.05)
    #legend.SetHeader("%"%legheader)
    b1.SetStats(0)
    b1.Draw()
    for n in range(len(Teffs)):
	Teffs[n].SetLineColor(color[n])
	Teffs[n].SetMarkerColor(color[n])
	Teffs[n].SetMarkerStyle(maker[n])
	Teffs[n].Draw("samep")
	legend.AddEntry(Teffs[n],"%s"%legs[n],"pl")
    legend.Draw("same")

    tex = ROOT.TLatex(0.4,0.7,"%s"%text)
    tex.SetTextSize(0.04)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))

def plotshistograms(hists, legs,legheader, text, picname, RateVsPt=False):

    hs = ROOT.THStack("hs"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*8+" 14 TeV, 140 PU")
    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()
    if RateVsPt:
	hs.SetMinimum(.1)
	hs.SetMaximum(200.)
    dy_leg = 0.05*(len(hists)+1)

    legend = ROOT.TLegend(0.35,0.7,0.85,0.7+dy_leg)
    legend.SetHeader(legheader)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.05)
    nhist = -1
    for hist in hists:
	nhist +=1
	hist.SetMarkerColor(color[nhist])
	hist.SetLineColor(color[nhist])
	hist.SetMarkerStyle(maker[nhist])
	#for rate
	#hist.Scale(SF)
	hs.Add(hist)
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
    texh=0.6
    if RateVsPt:
	hs.GetHistogram().GetXaxis().SetTitle("Trigger p_{T} threshold [GeV]")
	texh = 0.2
    hs.GetHistogram().GetYaxis().SetTitle("Trigger rate [kHz]")
	
    tex = ROOT.TLatex(0.2,texh,"%s"%text)
    tex.SetTextSize(0.04)
    tex.SetTextFont(52)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))


def plotsgraphs(graphs, legs, legheader, text, picname):

    c1 = TCanvas()
    mgerr =TMultiGraph()
    #print "size ", len(efflist_p[npar]), " ",efflist_p[npar]
    dy_leg = 0.06*(len(graphs)+1)
    legend = ROOT.TLegend(0.15,0.65,0.5,0.65+dy_leg)
    legend.SetHeader(legheader)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.05)
    n= -1
    for graph in graphs:
	n += 1
	graph.SetMarkerStyle(maker[n])
	graph.SetMarkerColor(color[n])
	graph.SetLineColor(color[n])
	graph.SetFillColor(color[n])
    	legend.AddEntry(graph, legs[n], "p")
	mgerr.Add(graph)

    mgerr.Draw("AP")
    legend.Draw("same")
    c1.Update()
    mgerr.SetMinimum(0)
    mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, %d PU"%pu)
    mgerr.GetXaxis().SetTitle("Trigger efficiency")
    mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")

    tex = ROOT.TLatex(0.2,0.68+dy_leg,"%s"%text)
    tex.SetTextSize(0.05)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))
    return mgerr


def getRateVsEta(L1MuTriggerRate, histname, myetabin, cut, vetotype):
    if vetotype == 1:
	    cut = cut + "&& !L1Mu_looseveto"
    elif vetotype == 2:
	    cut = cut + "&& !L1Mu_mediumveto"
    elif vetotype == 3:
	    cut = cut + "&& !L1Mu_tightveto"
    hist = TH1F(histname, histname, len(myetabin)-1, myetabin)
    L1MuTriggerRate.Draw("abs(L1Mu_eta)>>"+histname, cut)
    hist.GetXaxis().SetTitle("L1Mu |#eta|")
    hist.GetYaxis().SetTitle("Trigger Rate [kHz]")
    hist.Scale(SF)
    hist.Sumw2()
    return hist


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
    nsignals = []

    extrasuffix = ""
    extraleg = "with GE21"
    if not(useGE21):
	extrasuffix = "_noGE21"
	extraleg = "w/o GE21"
    if etamin<1.6:
	extraleg = ""

    #nstarts = {1.8 : 1, 2.0: 2}
    #nstarts = {1.2 : 1, 1.4: 2}
    nstarts = {1.6: 1, 1.8 : 2, 2.0: 3, 1.2 : 1, 1.4: 2}
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
	filename  = filedir+"EventsNum_Pt_%d_fraction_%d.log"%(pt, frac)
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
    #print "nsignals ",nsignals
    rfilename = filedir+condoroutroot
    rfile = TFile(rfilename, "READ")
    print "filename ",filename
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
	    #hybrideta18to20npar2promptmuonpt7ptbg0fraction92;1
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
	    #getOverallEff(Tefflistprompt[npar], pt)
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
	return Tefflistprompt[0], Tefflistdisplaced[0], hratelist[0]
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
	lut.write(algo+extrasuffix+tag+"\n{\n")
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
	peff,prate,pselected = maximizeSensitivity(efflist_p, ratelist_p, nsignals, frac)
	deff,drate,dselected = maximizeSensitivity(efflist_d, ratelist_d, nsignals, frac)
	heff,hrate,hselected = maximizeSensitivity(efflist_h, ratelist_h, nsignals, frac)
	print "from log file position eff ",peff, " prate ",prate ," hybrid eff ",heff," hrate ",hrate
	efflist_p[4].append(peff)
	ratelist_p[4].append(prate)
	effErrlist_p[4].append(sqrt((1-peff)*peff/totsignals))
	rateErrlist_p[4].append(sqrt(prate*SF))
	efflist_d[4].append(deff)
	ratelist_d[4].append(drate)
	effErrlist_d[4].append(sqrt((1-deff)*deff/totsignals))
	rateErrlist_d[4].append(sqrt(drate*SF))
	efflist_h[4].append(heff)
	ratelist_h[4].append(hrate)
	effErrlist_h[4].append(sqrt((1-heff)*heff/totsignals))
	rateErrlist_h[4].append(sqrt(hrate*SF))
	if doLUTs:
	    #finalLUT.write("eta%dto%dpt%dfraction%d"%(int(etamin*10), int(etamax*10), pt, frac)+"\n")	
	    tag = "eta%dto%dpt%dfraction%d"%(int(etamin*10), int(etamax*10), pt, frac)
	    #getLUTsValue("Position", pselected, fractions, finalLUT, tag)
	    getLUTsValue("Direction", dselected, fractions, finalLUT, tag)
	    getLUTsValue("Hybrid", hselected, fractions, finalLUT, tag)
	if doRates:
	    wfile = TFile(wfilename, "UPDATE") 
	    teff1_p, teff2_p, hrate_p = getCombinedEffandRatePlot("position", pselected, fractions, frac)
	    teff1_d, teff2_d, hrate_d = getCombinedEffandRatePlot("direction", dselected, fractions, frac)
	    teff1_h, teff2_h, hrate_h = getCombinedEffandRatePlot("hybrid", hselected, fractions, frac)
	    eff1_p, err1_p = getOverallEff(teff1_p, pt)
	    eff2_p, err2_p = getOverallEff(teff2_p, pt)
	    eff1_h, err1_h = getOverallEff(teff1_h, pt)
	    eff2_h, err2_h = getOverallEff(teff2_h, pt)
	    print "eff1 p ",eff1_p, " eff2_p ",eff2_p, " eff1_h ",eff1_h, " eff2_h ",eff2_h, " rate entries position ",hrate_p.GetEntries()," hyrid ",hrate_h.GetEntries()
	    teff1_p.Write();teff2_p.Write();hrate_p.Write()
	    teff1_d.Write();teff2_d.Write();hrate_h.Write()
	    teff1_h.Write();teff2_h.Write();hrate_d.Write()
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
    tfile = TFile(filename, "READ")
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
	    teff_h_prompt = []
	    teff_h_noGE21_prompt = []
	    teff_p_prompt = []
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
		teff_p_prompt.append(tfile.Get("Teff_displaced_position_eta%dto%d_npar4_frac%d_pt%d"%(int(etamin*10), int(etamax*10), frac, pt)))
		teff_h_prompt.append(tfile.Get("Teff_displaced_hybrid_eta%dto%d_npar4_frac%d_pt%d"%(int(etamin*10), int(etamax*10), frac, pt)))
		teff_h_noGE21_prompt.append(tfile.Get("Teff_displaced_hybrid_eta%dto%d_npar4_frac%d_pt%d"%(int(etamin*10), int(etamax*10), frac, pt)+suffix))
		getOverallEff(teff_p_prompt[neta], pt)
		getOverallEff(teff_h_prompt[neta], pt)
		getOverallEff(teff_h_noGE21_prompt[neta], pt)
		histrate_p.append(tfile.Get("ratehist_position_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), 4, frac, pt)))
		histrate_h.append(tfile.Get("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), 4, frac, pt)))
		histrate_h_noGE21.append(tfile.Get("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10), int(etamax*10), 4, frac, pt)+suffix))
	    for neta in range(1, len(netas)-1):
		teff_p_prompt[0].Add(teff_p_prompt[neta])
		teff_h_prompt[0].Add(teff_h_prompt[neta])
		teff_h_noGE21_prompt[0].Add(teff_h_noGE21_prompt[neta])
		if netas[neta] != 1.6:		
		    histrate_p[0].Add(histrate_p[neta])
		    histrate_h[0].Add(histrate_h[neta])
		    histrate_h_noGE21[0].Add(histrate_h_noGE21[neta])
		else:
		    addTwoHistogram(histrate_p[neta], histrate_p[0]); histrate_p[0]= histrate_p[neta].Clone()
		    addTwoHistogram(histrate_h[neta], histrate_h[0]); histrate_h[0] = histrate_h[neta].Clone()
		    addTwoHistogram(histrate_h_noGE21[neta], histrate_h_noGE21[0]); histrate_h_noGE21[0] = histrate_h_noGE21[neta].Clone()

	    etamin = netas[0]
	    etamax = netas[-1]
	    peff,peffErr = getOverallEff(teff_p_prompt[0], pt)
	    prate = histrate_p[0].GetEntries()*SF200
	    efflist_p.append(peff)
	    ratelist_p.append(prate)
	    effErrlist_p.append(peffErr)
	    rateErrlist_p.append(sqrt(prate*SF200))
	    hnoGE21eff,hnoGE21effErr = getOverallEff(teff_h_noGE21_prompt[0], pt)
	    hnoGE21rate = histrate_h_noGE21[0].GetEntries()*SF200
	    efflist_h_noGE21.append(hnoGE21eff)
	    ratelist_h_noGE21.append(hnoGE21rate)
	    effErrlist_h_noGE21.append(hnoGE21effErr)
	    rateErrlist_h_noGE21.append(sqrt(hnoGE21rate*SF200))
	    heff,heffErr = getOverallEff(teff_h_prompt[0], pt)
	    hrate = histrate_h[0].GetEntries()*SF200
	    efflist_h.append(heff)
	    ratelist_h.append(hrate)
	    effErrlist_h.append(heffErr)
	    rateErrlist_h.append(sqrt(hrate*SF200))
	    print "pt ",pt," peff ",peff," prate ",prate, " hnoGE21eff ",hnoGE21eff," hnoGE21rate ",hnoGE21rate," heff ",heff," hrate ",hrate," frac ",frac 
	     
	    teff_p_prompt[0].SetName("Teff_prompt_position_eta%dto%d_npar4_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), frac, pt, pu))
	    teff_h_prompt[0].SetName("Teff_prompt_hybrid_eta%dto%d_npar4_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), frac, pt, pu))
	    teff_h_noGE21_prompt[0].SetName("Teff_prompt_hybrid_eta%dto%d_npar4_frac%d_pt%d_noGE21_PU%d"%(int(etamin*10), int(etamax*10), frac, pt, pu))
	    histrate_p[0].SetName("ratehist_position_eta%dto%d_npar%d_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), 4, frac, pt, pu))
	    histrate_h[0].SetName("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d_PU%d"%(int(etamin*10), int(etamax*10), 4, frac, pt, pu))
	    histrate_h_noGE21[0].SetName("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d_noGE21_PU%d"%(int(etamin*10), int(etamax*10), 4, frac, pt, pu))
	    teff_p_prompt[0].SetMarkerStyle(maker[0])
	    teff_p_prompt[0].SetMarkerColor(color[0])
	    teff_p_prompt[0].SetLineColor(color[0])
	    histrate_p[0].SetMarkerStyle(maker[0])
	    histrate_p[0].SetMarkerColor(color[0])
	    histrate_p[0].SetLineColor(color[0])
	    teff_h_noGE21_prompt[0].SetMarkerStyle(maker[3])
	    teff_h_noGE21_prompt[0].SetMarkerColor(color[3])
	    teff_h_noGE21_prompt[0].SetLineColor(color[3])
	    histrate_h_noGE21[0].SetMarkerStyle(maker[3])
	    histrate_h_noGE21[0].SetMarkerColor(color[3])
	    histrate_h_noGE21[0].SetLineColor(color[3])
	    teff_h_prompt[0].SetMarkerStyle(maker[2])
	    teff_h_prompt[0].SetMarkerColor(color[2])
	    teff_h_prompt[0].SetLineColor(color[2])
	    histrate_h[0].SetMarkerStyle(maker[2])
	    histrate_h[0].SetMarkerColor(color[2])
	    histrate_h[0].SetLineColor(color[2])

	    tex1 = TLatex(.4, .6,"p_{T}^{L1}>%d GeV, %.2f<|#eta|<%.2f"%(pt, etamin, etamax))
	    tex1.SetNDC()
	    c1 = TCanvas()
	    c1.SetGridx()
	    c1.SetGridy()
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
	    legend1.AddEntry(teff_p_prompt[0], legs[0], "p")
	    legend1.AddEntry(teff_h_noGE21_prompt[0], legs[1], "p")
	    legend1.AddEntry(teff_h_prompt[0], legs[2], "p")
	    b1.Draw()
	    teff_p_prompt[0].Draw("samep")
	    teff_h_noGE21_prompt[0].Draw("samep")
	    teff_h_prompt[0].Draw("samep")
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

	     

def plotalleta(pt, netas, fraction, outputrootfile, ratesample, signalsample, allLUTfile, SBPlots):
    #fraction_d = 99
    rate_y = "dphi_dir12_GE21"
    rate_x = "ddY123"
    xaxis = "(deltay123_test)"
    yaxis = "(dphi_dir_st1_st2_L1)"
    yaxis_noGE21 = "(dphi_dir_st1_st2_L1_csc)"
    rate_y_noGE21 = "dphi_dir12_noGE21"
    legs3_v2 = ["Position-based algorithm","Stub alignment algorithm","Hybrid algorithm"]
    legs3 = ["Position-based algorithm","Hybrid algorithm w/o GE21","Hybrid algorithm w GE21"]

    ratefile = TFile(ratesample)
    h_total = ratefile.Get("h_eventcount")

    rateEvents = h_total.GetEntries()
    L1MuTriggerRate = TChain("L1MuTriggerRate")
    addFilesToChain(L1MuTriggerRate, ratesample)
    GEMCSCTrackCh0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    #GEMCSCTrackCh1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    #addFilesToChain(GEMCSCTrackCh1, signalsample) 
    addFilesToChain(GEMCSCTrackCh0, signalsample) 

    Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
    Teffall = []
    Teffall2 = []
    Teffall = []
    hrateall = []
    hrateall2 = []
    for neta in range(len(netas)-1):
       if (netas[neta]<0 or netas[neta+1]<0):
	    continue
       ring = 1
       if (netas[neta]<1.6):
	    ring = 2
    #if (netas[0]==1.6):
       etamin = netas[neta]
       etamax = netas[neta+1]
       Teffallnpars = []
       Teffallnpars_veto2 = []
       hrateallnpars = []
       hrateallnpars_veto2 = []
       #Teffallnpars_p = []
       #Teffallnpars_d = []
       legs = ["#splitline{Displaced muon}{10<|d_{xy}|<50 cm}"]
       for npar in range(0, 4):
	    me11 = evenodds[npar].split(',')[0]
	    me21 = evenodds[npar].split(',')[1]
	    chambers = "ME1%d %s,ME2%d %s,ME3%d %s"%(ring, me11, ring, me21, ring, me21)
	    #st_title = ["Prompt muon, 2<p_{T}<%d"%pt1, "Displaced Muon, 10<|d_{xy}|<50, p_{T}>%d"%pt]
	    algos_lut = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "", allLUTfile)
	    algos_lut_noGE21 = getFinalLUTValue(pt, fraction, etamin, etamax, npar, "_noGE21", allLUTfile)
	    ddY_cut = algos_lut["Position"]
	    dphi_dir_cut = algos_lut["Direction"]
	    maxa = algos_lut["Hybrid"][0] 
	    maxb = algos_lut["Hybrid"][1] 
	    alpha= algos_lut["Hybrid"][2]
	    x0 =  algos_lut["Hybrid"][3]
	    y0 =  algos_lut["Hybrid"][4]
	    maxa1 = maxa; maxb1 = maxb; alpha1 = alpha; x01 = x0; y01= y0
	    if ring==1:
		maxa1 = algos_lut_noGE21["Hybrid_noGE21"][0] 
		maxb1 = algos_lut_noGE21["Hybrid_noGE21"][1] 
		alpha1= algos_lut_noGE21["Hybrid_noGE21"][2]
		x01 =  algos_lut_noGE21["Hybrid_noGE21"][3]
		y01 =  algos_lut_noGE21["Hybrid_noGE21"][4]
	    
	    ratecut = "maxPositionPt && L1Mu_quality>= 4 && abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && npar==%d"%(etamin, etamax, npar)
	    #etacuts ="&& meRing==%d"%ring+"&& fabs(trk_eff_CSC_ME2%d.eta_lct_%s)>%f && fabs(trk_eff_CSC_ME2%d.eta_lct_%s)<%f"%(ring,me21,etamin,ring,me21,etamax)
	    checkvalue = "&& fabs(deltay23_test)<50 && fabs(deltay12_test)<50 && fabs(%s)>0 && fabs(%s)>0 && meRing==%d"%(xaxis, yaxis,ring)
	    checkx = "&& fabs(%s)<60 && fabs(%s)>0 "%(xaxis, xaxis)
	    checky = "&& fabs(%s)<2.0 && fabs(%s)>0 "%(yaxis, yaxis)
	    checky_noGE21 = "&& fabs(%s)<2.0 && fabs(%s)>0 "%(yaxis_noGE21, yaxis_noGE21)
	    if ring==2:
		checky_noGE21 = checky
	    #cutsbase =  ["meRing==%d && "%ring+"hasSt1St2St3 && fabs(eta_st2_L1)>%f && fabs(eta_st2_L1)<%f && npar_L1==%d"%(etamin,etamax, npar), "meRing==%d && "%ring+"hasSt1St2St3 && fabs(eta_st2_L1)>%f && fabs(eta_st2_L1)<%f && fabs(genGdMu_dxy)>10 && fabs(genGdMu_dxy)<50 && fabs(genGdMu_dR)<0.1 && npar_L1==%d"%(etamin,etamax, npar)]
	    cutsbase = "L1Mu_quality>=4 && meRing==%d && "%ring+"hasSt1St2St3 && fabs(eta_st2_L1)>%f && fabs(eta_st2_L1)<%f && fabs(genGdMu_dxy)>10 && fabs(genGdMu_dxy)<50 && fabs(genGdMu_dR)<0.1 && npar_L1==%d"%(etamin,etamax, npar)
	    cuts_p =  [cutsbase+checkx]
	    cuts_d =  [cutsbase+checky]
	    #cuts_d =  ["meRing==%d && "%ring+"hasSt1St2St3 && fabs(deltay12_fit)<50 &&  fabs(deltay23_fit)<50 && fabs(eta_st2_sh)>%f && fabs(eta_st2_sh)<%f && npar==%d"%(etamin,etamax, npar)+checky, "meRing==%d && "%ring+" hasSt1St2St3 && fabs(deltay12_fit)<50 &&  fabs(deltay23_fit)<50 && fabs(eta_st2_sh)>%f && fabs(eta_st2_sh)<%f && fabs(genGdMu_dxy)>10 && fabs(genGdMu_dxy)<50 && fabs(genGdMu_dR)<0.1 && npar==%d"%(etamin,etamax, npar)+checky]

	    text = "#splitline{%s}{%.1f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(chambers, etamin,etamax,pt)
	    text_position = "#splitline{%s}{%.1f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(chambers,etamin,etamax,pt)
	    #ddY_cut = getcuts(GEMCSCTrackCh1, cuts_p[1], xaxis, pt, npar,etamin, etamax, fraction, "(4000,0,40.0)", xtitle,"",SBPlots+"GEMCSC_ctau0_positionOnly_getcuts_recopt_20170131_ptcut%d_st2eta%dto%d_npar%d%s"%(pt, int(etamin*10), int(etamax*10), npar,extrapic))
	    #dphi_dir_cut = getcuts(GEMCSCTrackCh1, cuts_d[1], yaxis, pt, npar,etamin, etamax, fraction, "(3000,0,1.0)", ytitle,"",SBPlots+"GEMCSC_ctau0_directionOnly_getcuts_recopt_20170131_ptcut%d_st2eta%dto%d_npar%d%s"%(pt, int(etamin*10), int(etamax*10), npar,extrapic))
	    #ddYDPhiCuts = [ddY_cut, dphi_dir_cut]
	    
	    #Teffs_ddY = makeEffplot_v2([GEMCSCTrackCh0], "pt", cuts_p, ["fabs(%s)<%f"%(xaxis, ddY_cut)], etamin, etamax,"true muon p_{T} GeV","Trigger efficiency",legs,"Position-based algo" ,text_position,SBPlots+"GEMCSC_dxy10_50_position_eff_20170131_pt%d_fraction%d_st2eta%dto%d_npar%d"%(pt, fraction, int(etamin*10),int(etamax*10), npar))
	    #Teffs_dphi_dir = makeEffplot_v2([GEMCSCTrackCh0], "pt", cuts_d, ["fabs(%s)<%f"%(yaxis, dphi_dir_cut)], etamin, etamax,"true muon p_{T} GeV","Trigger efficiency",legs,"Stub alignment algo",text,SBPlots+"GEMCSC_dxy10_50_direction_eff_20170131_pt%d_fraction%d_st2eta%dto%d_npar%d"%(pt, fraction, int(etamin*10),int(etamax*10), npar))
	    #(maxa, maxb, alpha, x0, y0) = loopEllipse(L1MuTriggerRate, GEMCSCTrackCh1, nEvent_list, ddYDPhiCuts, fraction, npar, astart, bstart, xaxislist, yaxislist,x_bins, y_bins,xtitle, ytitle,st_title, etamin, etamax, cut_list, text,outputdir1+"GEMCSC_ctau0andctau1000_hyrid_profile_20170131_pt%d_ptbg%d_fraction%d_st2eta%dto%d_npar%d%s"%(pt, pt1, fraction, int(etamin*10),int(etamax*10), npar, extrapic))
	    xaxis1_rate = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(rate_x, alpha, rate_y, alpha, x0)
	    yaxis1_rate = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(rate_x, alpha, rate_y, alpha, y0)
	    ellipsecut_rate = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1_rate, xaxis1_rate, maxa, maxa, yaxis1_rate, yaxis1_rate, maxb, maxb)
	    xaxis1_rate_noGE21 = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(rate_x, alpha1, rate_y_noGE21, alpha1, x01)
	    yaxis1_rate_noGE21 = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(rate_x, alpha1, rate_y_noGE21, alpha1, y01)
	    ellipsecut_rate_noGE21 = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1_rate_noGE21, xaxis1_rate_noGE21, maxa1, maxa1, yaxis1_rate_noGE21, yaxis1_rate_noGE21, maxb1, maxb1)
	    if ring ==2:
		ellipsecut_rate_noGE21 = ellipsecut_rate
	    #ratehist_d = getRateVsEta(L1MuTriggerRate, "ratehist_direction_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt)+extrapic, myetabin, ratecut + "&& abs(%s)<=%f"%(rate_y, dphi_dir_cut), 0)
	    ratehist_p_veto0 = getRateVsEta(L1MuTriggerRate, "ratehist_position_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt), myetabin, ratecut + "&& abs(%s)<=%f"%(rate_x, ddY_cut), 0)
	    ratehist_h_veto0 = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt), myetabin, ratecut + "&& "+ellipsecut_rate, 0)
	    ratehist_h_noGE21_veto0 = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_noGE21_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt), myetabin, ratecut + "&& "+ellipsecut_rate_noGE21, 0)
	    ratehist_p_veto2 = getRateVsEta(L1MuTriggerRate, "ratehist_position_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt), myetabin, ratecut + "&& abs(%s)<=%f"%(rate_x, ddY_cut), 2)
	    ratehist_h_veto2 = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt), myetabin, ratecut + "&& "+ellipsecut_rate, 2)
	    ratehist_h_noGE21_veto2 = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_noGE21_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt), myetabin, ratecut + "&& "+ellipsecut_rate_noGE21, 2)
	    hrateallnpars.append([ratehist_p_veto0, ratehist_h_noGE21_veto0, ratehist_h_veto0])
	    hrateallnpars_veto2.append([ratehist_p_veto2, ratehist_h_noGE21_veto2, ratehist_h_veto2])
	    ratehist_p_veto0.Write()
	    ratehist_h_noGE21_veto0.Write()
	    ratehist_h_veto0.Write()
	    ratehist_p_veto2.Write()
	    ratehist_h_noGE21_veto2.Write()
	    ratehist_h_veto2.Write()
	    #print "max_a ",maxa," maxb ",maxb," alpha ",alpha," x0 ",x0, " y0 ",y0
	    #xaxis1 = "(%s*TMath::Cos(%f)*charge+%s*TMath::Sin(%f)*charge-%f)"%(xaxis, alpha, yaxis, alpha, x0)
	    #yaxis1 = "(%s*TMath::Sin(%f)*charge-%s*TMath::Cos(%f)*charge-%f)"%(xaxis, alpha, yaxis, alpha, y0)
	    xaxis1 = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(xaxis, alpha, yaxis, alpha, x0)
	    yaxis1 = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(xaxis, alpha, yaxis, alpha, y0)
	    ellipse = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)
	    xaxis1_noGE21 = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(xaxis, alpha1, yaxis_noGE21, alpha1, x01)
	    yaxis1_noGE21 = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(xaxis, alpha1, yaxis_noGE21, alpha1, y01)
	    ellipse_noGE21 = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1_noGE21, xaxis1_noGE21, maxa1, maxa1, yaxis1_noGE21, yaxis1_noGE21, maxb1, maxb1)
	    if ring ==2 :
		ellipse_noGE21 = ellipse
	    Teffs = makeEffplot_v2([GEMCSCTrackCh0, GEMCSCTrackCh0, GEMCSCTrackCh0], "pt", [cutsbase+checkx, cutsbase+checkx+checky_noGE21, cutsbase+checkx+checky], ["fabs(%s)<%f"%(xaxis, ddY_cut), ellipse_noGE21, ellipse], etamin, etamax,"true muon p_{T} GeV","Trigger efficiency",legs3,"no tracker veto",text,SBPlots+"GEMCSC_dxy10_50_combined_eff_20170131_pt%d_fraction%d_st2eta%dto%d_npar%d"%(pt, fraction, int(etamin*10),int(etamax*10), npar))
	    Teffs_veto2 = makeEffplot_v2([GEMCSCTrackCh0, GEMCSCTrackCh0, GEMCSCTrackCh0], "pt", [cutsbase+checkx, cutsbase+checkx+checky_noGE21, cutsbase+checkx+checky], ["fabs(%s)<%f"%(xaxis, ddY_cut)+"&& !isL1MediumVeto", ellipse_noGE21+"&& !isL1MediumVeto", ellipse+"&& !isL1MediumVeto"], etamin, etamax,"true muon p_{T} GeV","Trigger efficiency",legs3,"medium tracker veto",text,SBPlots+"GEMCSC_dxy10_50_mediumveto_combined_eff_20170131_pt%d_fraction%d_st2eta%dto%d_npar%d"%(pt, fraction, int(etamin*10),int(etamax*10), npar))
	    #Teffs_veto2 = makeEffplot_v2([GEMCSCTrackCh0, GEMCSCTrackCh0, GEMCSCTrackCh0], "pt", [cutsbase+checkx, cutsbase+checkx+checky_noGE21, cutsbase+checkx+checky], ["fabs(%s)<%f"%(xaxis, ddY_cut)+"&& isSimMediumVeto", ellipse_noGE21+"&& isSimMediumVeto", ellipse+"&& isSimMediumVeto"], etamin, etamax,"true muon p_{T} GeV","Trigger efficiency",legs3,"medium tracker veto",text,SBPlots+"GEMCSC_dxy10_50_mediumveto_combined_eff_20170131_pt%d_fraction%d_st2eta%dto%d_npar%d"%(pt, fraction, int(etamin*10),int(etamax*10), npar))
	    #peff2, perr2 = getOverallEff(Teffs_ddY[1], pt)
	    peff, perr = getOverallEff(Teffs[0], pt)
	    heff, herr = getOverallEff(Teffs[2], pt)
	    heff_noGE21, herr_noGE21 = getOverallEff(Teffs[1], pt)
	    peff_v2, perr_v2 = getOverallEff(Teffs_veto2[0], pt)
	    heff_v2, herr_v2 = getOverallEff(Teffs_veto2[2], pt)
	    heff_noGE21_v2, herr_noGE21_v2 = getOverallEff(Teffs_veto2[1], pt)
	    print "pt ",pt," fraction ",fraction," etamin ",etamin, " etamax ",etamax," npar ",npar, "peff ",peff, " heff ",heff," heff_noGE21 ",heff_noGE21
	    #makeplots([Teffs_ddY[0], Teffs_dphi_dir[0], Teffs[0]], legs3, text,SBPlots+"GEMCSC_ctau0andctau1000_combined3_eff_20170131_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_npar%d_dirinterstation%s"%(pt, pt1, fraction, fraction_d, int(etamin*10),int(etamax*10), npar, extrapic)) 
	    Teffallnpars.append(Teffs)
	    Teffallnpars_veto2.append(Teffs_veto2)
	    #Teffallnpars_d.append(Teffs)
	    #Teffallnpars_d.append(Teffs_dphi_dir)
	    Teffs[0].SetName("positioneta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%d"%(pt)+"fraction%d"%fraction)
	    Teffs[2].SetName("hybrideta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%d"%(pt)+"fraction%d"%fraction)
	    Teffs[1].SetName("hybrid_noGE21eta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%d"%(pt)+"fraction%d"%fraction)
	    Teffs_veto2[0].SetName("positionmediumvetoeta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%d"%(pt)+"fraction%d"%fraction)
	    Teffs_veto2[2].SetName("hybridmediumvetoeta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%d"%(pt)+"fraction%d"%fraction)
	    Teffs_veto2[1].SetName("hybrid_noGE21mediumvetoeta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%d"%(pt)+"fraction%d"%fraction)
	    #Teffs_ddY[0].SetName("poistioneta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"promptmuonpt%dptbg%d"%(pt,pt1)+"fraction%d"%fraction+extrapic)
	    #Teffs_ddY[0].SetName("poistioneta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"promptmuonpt%dptbg%d"%(pt,pt1)+"fraction%d"%fraction+extrapic)
	    #Teffs_dphi_dir[0].SetName("directioneta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"promptmuonpt%dptbg%d"%(pt,pt1)+"fraction%d"%fraction+extrapic)
	    #Teffs[1].SetName("hybrideta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%dptbg%d"%(pt,pt1)+"fraction%d"%fraction+extrapic)
	    #Teffs_ddY[1].SetName("poistioneta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%dptbg%d"%(pt,pt1)+"fraction%d"%fraction+extrapic)
	    #Teffs_dphi_dir[1].SetName("directioneta%dto%dnpar%d"%(int(etamin*10),int(etamax*10), npar)+"displacedmuonpt%dptbg%d"%(pt,pt1)+"fraction%d"%fraction+extrapic)
	    Teffs[0].Write();Teffs[1].Write();Teffs[2].Write()
	    Teffs_veto2[0].Write();Teffs_veto2[1].Write();Teffs_veto2[2].Write()
	    #Teffs_ddY[0].Write()
	    #Teffs_dphi_dir[0].Write()
	    #Teffs_ddY[1].Write()
	    #Teffs_dphi_dir[1].Write()
       #print "Teffallnpars len ",len(Teffallnpars),Teffallnpars
       Teff0_p = Teffallnpars[0][0]; Teff0_h = Teffallnpars[0][2];Teff0_h_noGE21 = Teffallnpars[0][1]
       Teff2_p = Teffallnpars_veto2[0][0]; Teff2_h = Teffallnpars_veto2[0][2];Teff2_h_noGE21 = Teffallnpars_veto2[0][1]
       hrate0_p = hrateallnpars[0][0]; hrate0_h = hrateallnpars[0][2]; hrate0_h_noGE21 = hrateallnpars[0][1]
       hrate2_p = hrateallnpars_veto2[0][0]; hrate2_h = hrateallnpars_veto2[0][2]; hrate2_h_noGE21 = hrateallnpars_veto2[0][1]
       for xpar in range(len(Teffallnpars)-1):
	    Teff0_p.Add(Teffallnpars[xpar+1][0])		   
	    Teff0_h.Add(Teffallnpars[xpar+1][2])		   
	    Teff0_h_noGE21.Add(Teffallnpars[xpar+1][1])		   
	    Teff2_p.Add(Teffallnpars_veto2[xpar+1][0])		   
	    Teff2_h.Add(Teffallnpars_veto2[xpar+1][2])		   
	    Teff2_h_noGE21.Add(Teffallnpars_veto2[xpar+1][1])		   
	    hrate0_p.Add(hrateallnpars[xpar+1][0])
	    hrate0_h.Add(hrateallnpars[xpar+1][2])
	    hrate0_h_noGE21.Add(hrateallnpars[xpar+1][1])
	    hrate2_p.Add(hrateallnpars_veto2[xpar+1][0])
	    hrate2_h.Add(hrateallnpars_veto2[xpar+1][2])
	    hrate2_h_noGE21.Add(hrateallnpars_veto2[xpar+1][1])
       Teffall.append([Teff0_p, Teff0_h_noGE21, Teff0_h])
       Teffall2.append([Teff2_p, Teff2_h_noGE21, Teff2_h])
       hrateall.append([hrate0_p, hrate0_h_noGE21, hrate0_h])
       hrateall2.append([hrate2_p, hrate2_h_noGE21, hrate2_h])
       peff0, perr0 = getOverallEff(Teff0_p, pt)
       peff2, perr2 = getOverallEff(Teff2_p, pt)
       heff0_noGE21, herr0_noGE21 = getOverallEff(Teff0_h_noGE21, pt)
       heff2_noGE21, herr2_noGE21 = getOverallEff(Teff2_h_noGE21, pt)
       heff0, herr0 = getOverallEff(Teff0_h, pt)
       heff2, herr2 = getOverallEff(Teff2_h, pt)
       #print "pt ",pt," fraction ",fraction," etamin ",etamin, " etamax ",etamax," allnpar peff0 ",peff0, " heff0 ",heff0," heff0_noGE21 ",heff0_noGE21
       #print "Rate entreis p ",hrate0_p.GetEntries()," h_noGE21 ",hrate0_h_noGE21.GetEntries()," h ",hrate0_h.GetEntries()
       #print "all eff, medium veto p ",peff2," heff2_noGE21 ",heff2_noGE21," heff2 ",heff2
       #print "Rate, medium veto,  entreis p ",hrate2_p.GetEntries()," h_noGE21 ",hrate2_h_noGE21.GetEntries()," h ",hrate2_h.GetEntries()
       Teff0_p.SetName("positioneta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
       Teff0_h.SetName("hybrideta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
       Teff0_h_noGE21.SetName("hybrid_noGE21eta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
       Teff2_p.SetName("positionmediumvetoeta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
       Teff2_h.SetName("hybridmediumvetoeta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
       Teff2_h_noGE21.SetName("hybrid_noGE21mediumvetoeta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
       Teff0_p.Write(); Teff0_h.Write(); Teff0_h_noGE21.Write()
       Teff2_p.Write(); Teff2_h.Write(); Teff2_h_noGE21.Write()
       hrate0_p.SetName("ratehist_position_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
       hrate2_p.SetName("ratehist_position_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
       hrate0_h_noGE21.SetName("ratehist_hybrid_noGE21_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
       hrate2_h_noGE21.SetName("ratehist_hybrid_noGE21_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
       hrate0_h.SetName("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
       hrate2_h.SetName("ratehist_hybrid_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
       hrate0_p.Write(); hrate0_h_noGE21.Write(); hrate0_h.Write()
       hrate2_p.Write(); hrate2_h_noGE21.Write(); hrate2_h.Write()
       text_h = "#splitline{Hybrid algorithm w/ GE21}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(etamin,etamax, pt)
       text_p = "#splitline{Position-based algorithm}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(etamin,etamax, pt)
       text_h_noGE21 = "#splitline{Hybrid algorithm w/o GE21}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(etamin,etamax, pt)
       legsveto = ["no tracker veto","medium tracker veto"]
       #makeplots([Teff0_p, Teff2_p], legsveto, text_p,SBPlots+"GEMCSC_dxy10_50_position_vetos_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
       #makeplots([Teff0_h, Teff2_h], legsveto, text_h,SBPlots+"GEMCSC_dxy10_50_hybrid_vetos_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
       #makeplots([Teff0_h_noGE21, Teff2_h_noGE21], legsveto, text_h_noGE21,SBPlots+"GEMCSC_dxy10_50_hybrid_noGE21_vetos_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
       #plotshistograms([hrate0_p, hrate2_p], legsveto, text_p, SBPlots+"TriggerRate_position_vetos_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
       #plotshistograms([hrate0_h, hrate2_h], legsveto, text_h, SBPlots+"TriggerRate_hybrid_vetos_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
       #plotshistograms([hrate0_h_noGE21, hrate2_h_noGE21], legsveto, text_h_noGE21, SBPlots+"TriggerRate_hybrid_noGE21_vetos_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
       text_noveto =  "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV, no tracker veto"%(etamin,etamax, pt)
       text_mveto =  "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV, medium tracker veto"%(etamin,etamax, pt)
       #makeplots([Teff0_p, Teff0_h_noGE21, Teff0_h], legs3, text_noveto,SBPlots+"GEMCSC_dxy10_50_combined3_noveto_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
       #makeplots([Teff2_p, Teff2_h_noGE21, Teff2_h], legs3, text_mveto,SBPlots+"GEMCSC_dxy10_50_combined3_mediumveto_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
       #plotshistograms([hrate0_p, hrate0_h_noGE21, hrate0_h], legs3, text_noveto, SBPlots+"TriggerRate_combiend_noveto_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
       #plotshistograms([hrate2_p, hrate2_h_noGE21, hrate2_h], legs3, text_mveto, SBPlots+"TriggerRate_combiend_mediumveto_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
    etamin = netas[0]; etamax = netas[-1]
    Teffall0_p = Teffall[0][0]; Teffall0_h = Teffall[0][2];Teffall0_h_noGE21 = Teffall[0][1]
    Teffall2_p = Teffall2[0][0]; Teffall2_h = Teffall2[0][2];Teffall2_h_noGE21 = Teffall2[0][1]
    hrateall0_p = hrateall[0][0]; hrateall0_h = hrateall[0][2]; hrateall0_h_noGE21 = hrateall[0][1]
    hrateall2_p = hrateall2[0][0]; hrateall2_h = hrateall2[0][2]; hrateall2_h_noGE21 = hrateall2[0][1]
    for xeta in range(len(Teffall)-1):
	Teffall0_p.Add(Teffall[xeta+1][0])		   
	Teffall0_h_noGE21.Add(Teffall[xeta+1][1])		   
	Teffall0_h.Add(Teffall[xeta+1][2])		   
	Teffall2_p.Add(Teffall2[xeta+1][0])		   
	Teffall2_h_noGE21.Add(Teffall2[xeta+1][1])		   
	Teffall2_h.Add(Teffall2[xeta+1][2])		   
        hrateall0_p.Add(hrateall[xeta+1][0])
        hrateall0_h_noGE21.Add(hrateall[xeta+1][1])
        hrateall0_h.Add(hrateall[xeta+1][2])
        hrateall2_p.Add(hrateall2[xeta+1][0])
        hrateall2_h_noGE21.Add(hrateall2[xeta+1][1])
        hrateall2_h.Add(hrateall2[xeta+1][2])
    peff0, perr0 = getOverallEff(Teffall0_p, pt+5)
    peff2, perr2 = getOverallEff(Teffall2_p, pt+5)
    heff0_noGE21, herr0_noGE21 = getOverallEff(Teffall0_h_noGE21, pt+5)
    heff2_noGE21, herr2_noGE21 = getOverallEff(Teffall2_h_noGE21, pt+5)
    heff0, herr0 = getOverallEff(Teffall0_h, pt+5)
    heff2, herr2 = getOverallEff(Teffall2_h, pt+5)
     
    print "pt ",pt," fraction ",fraction," etamin ",etamin, " etamax ",etamax," allnpar peff0 ",peff0, " heff0 ",heff0," heff0_noGE21 ",heff0_noGE21
    print "Rate entreis p ",hrateall0_p.GetEntries()," h_noGE21 ",hrateall0_h_noGE21.GetEntries()," h ",hrateall0_h.GetEntries()
    print "all eff, medium veto p ",peff2," heff2_noGE21 ",heff2_noGE21," heff2 ",heff2
    print "Rate, medium veto,  entreis p ",hrateall2_p.GetEntries()," h_noGE21 ",hrateall2_h_noGE21.GetEntries()," h ",hrateall2_h.GetEntries()
    Teffall0_p.SetName("positioneta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
    Teffall0_h.SetName("hybrideta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
    Teffall0_h_noGE21.SetName("hybrid_noGE21eta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
    Teffall2_p.SetName("positionmediumvetoeta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
    Teffall2_h.SetName("hybridmediumvetoeta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
    Teffall2_h_noGE21.SetName("hybrid_noGE21mediumvetoeta%dto%d"%(int(etamin*10),int(etamax*10))+"displacedmuonpt%d"%(pt))
    Teffall0_p.Write(); Teffall0_h.Write(); Teffall0_h_noGE21.Write()
    Teffall2_p.Write(); Teffall2_h.Write(); Teffall2_h_noGE21.Write()
    hrateall0_p.SetName("ratehist_position_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
    hrateall2_p.SetName("ratehist_position_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
    hrateall0_h_noGE21.SetName("ratehist_hybrid_noGE21_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
    hrateall2_h_noGE21.SetName("ratehist_hybrid_noGE21_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
    hrateall0_h.SetName("ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
    hrateall2_h.SetName("ratehist_hybrid_mediumveto_eta%dto%d_npar%d_frac%d_pt%d"%(int(etamin*10),int(etamax*10), npar, fraction, pt))
    hrateall0_p.Write(); hrateall0_h_noGE21.Write(); hrateall0_h.Write()
    hrateall2_p.Write(); hrateall2_h_noGE21.Write(); hrateall2_h.Write()
    text_h = "#splitline{Hybrid algorithm w/ GE21}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(etamin,etamax, pt)
    text_p = "#splitline{Position-based algorithm}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(etamin,etamax, pt)
    text_h_noGE21 = "#splitline{Hybrid algorithm w/o GE21}{%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV}"%(etamin,etamax, pt)
    legsveto = ["no tracker veto","medium tracker veto"]
    makeplots([Teffall0_p, Teffall2_p], legsveto, text_p,SBPlots+"GEMCSC_dxy10_50_position_vetos_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
    makeplots([Teffall0_h, Teffall2_h], legsveto, text_h,SBPlots+"GEMCSC_dxy10_50_hybrid_vetos_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
    makeplots([Teffall0_h_noGE21, Teffall2_h_noGE21], legsveto, text_h_noGE21,SBPlots+"GEMCSC_dxy10_50_hybrid_noGE21_vetos_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
    plotshistograms([hrateall0_p, hrateall2_p], legsveto,"L1Mu with Q>=4", text_p, SBPlots+"TriggerRate_position_vetos_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
    plotshistograms([hrateall0_h, hrateall2_h], legsveto, "L1Mu with Q>=4", text_h, SBPlots+"TriggerRate_hybrid_vetos_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
    plotshistograms([hrateall0_h_noGE21, hrateall2_h_noGE21], legsveto, "L1Mu with Q>=4", text_h_noGE21, SBPlots+"TriggerRate_hybrid_noGE21_vetos_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
    text_noveto =  "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV, no tracker veto"%(etamin,etamax, pt)
    text_mveto =  "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV, medium tracker veto"%(etamin,etamax, pt)
    legheader = "L1Mu with no tracker veto, Q>=4"
    legheaderm = "L1Mu with medium tracker veto, Q>=4"
    makeplots([Teffall0_p, Teffall0_h_noGE21, Teffall0_h], legs3, text_noveto,SBPlots+"GEMCSC_dxy10_50_combined3_noveto_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
    makeplots([Teffall2_p, Teffall2_h_noGE21, Teffall2_h], legs3, text_mveto,SBPlots+"GEMCSC_dxy10_50_combined3_mediumveto_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10))) 
    plotshistograms([hrateall0_p, hrateall0_h_noGE21, hrateall0_h], legs3, legheader, text_noveto, SBPlots+"TriggerRate_combiend_noveto_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
    plotshistograms([hrateall2_p, hrateall2_h_noGE21, hrateall2_h], legs3, legheaderm, text_mveto, SBPlots+"TriggerRate_combiend_mediumveto_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar"%(pt, fraction, int(etamin*10),int(etamax*10)))
    return peff0, perr0, heff0_noGE21, herr0_noGE21, heff0, herr0, peff2, perr2, heff2_noGE21, herr2_noGE21,heff2,herr2, hrateall0_p.Integral(),hrateall0_h_noGE21.Integral(), hrateall0_h.Integral(), hrateall2_p.Integral(), hrateall2_h_noGE21.Integral(),hrateall2_h.Integral()
    Teff_out.Close()

def plotalletaallptallfractions(pts, netas, fractions, fraction_rate, outputrootfile, ratesample, signalsample, allLUTfile, SBPlots):
    hrate_template = ROOT.TH1F("hrate_ge11_fractionrate%d"%fraction_rate,"hrate_ge11",len(rateptbin)-1, myrateptbin)
    hrate_p = ROOT.TH1F("hrate_p_fractionrate%d"%fraction_rate,"hrate_p_fractionrate%d"%fraction_rate,len(rateptbin)-1, myrateptbin)
    hrate_h_noGE21 = ROOT.TH1F("hrate_h_noGE21_fractionrate%d"%fraction_rate,"hrate_h_noGE21_fractionrate%d"%fraction_rate,len(rateptbin)-1, myrateptbin)
    hrate_h = ROOT.TH1F("hrate_h_fractionrate%d"%fraction_rate,"hrate_h_fractionrate%d"%fraction_rate,len(rateptbin)-1, myrateptbin)
    hrate2_p = ROOT.TH1F("hrate2_p_fractionrate%d"%fraction_rate,"hrate2_p_fractionrate%d"%fraction_rate,len(rateptbin)-1, myrateptbin)
    hrate2_h_noGE21 = ROOT.TH1F("hrate2_h_noGE21_fractionrate%d"%fraction_rate,"hrate2_h_noGE21_fractionrate%d"%fraction_rate,len(rateptbin)-1, myrateptbin)
    hrate2_h = ROOT.TH1F("hrate2_h_fractionrate%d"%fraction_rate,"hrate2_h_fractionrate%d"%fraction_rate,len(rateptbin)-1, myrateptbin)
    etamin = netas[0]; etamax = netas[-1]
    legs3 = ["Position-based algorithm","Hybrid algorithm w/o GE21","Hybrid algorithm w GE21"]
    for pt in pts:
	
	ratelist_p = []
	rateErrlist_p = []
	ratelist_h_noGE21 = []
	rateErrlist_h_noGE21 = []
	ratelist_h = []
	rateErrlist_h = []
	ratelist2_p = [];rateErrlist2_p = [];ratelist2_h_noGE21 = [];rateErrlist2_h_noGE21 = [];ratelist2_h = [];rateErrlist2_h = []
	efflist_p = [];effErrlist_p = [];efflist_h_noGE21 = [];effErrlist_h_noGE21 = [];efflist_h = [];effErrlist_h = []
	efflist2_p = [];effErrlist2_p = [];efflist2_h_noGE21 = [];effErrlist2_h_noGE21 = [];efflist2_h = [];effErrlist2_h = []
	for fraction in fractions:
	    peff0, perr0, heff0_noGE21, herr0_noGE21, heff0, herr0, peff2, perr2, heff2_noGE21, herr2_noGE21, heff2, herr2, nrate0_p, nrate0_h_noGE21, nrate0_h ,nrate2_p, nrate2_h_noGE21, nrate2_h = plotalleta(pt, netas, fraction, outputrootfile, ratesample, signalsample, allLUTfile, SBPlots)
	    if fraction==fraction_rate:
		hrate_p.Fill(pt, nrate0_p)
		hrate_h_noGE21.Fill(pt, nrate0_h_noGE21)
		hrate_h.Fill(pt, nrate0_h)
		hrate2_p.Fill(pt, nrate2_p)
		hrate2_h_noGE21.Fill(pt, nrate2_h_noGE21)
		hrate2_h.Fill(pt, nrate2_h)
	    efflist_p.append(peff0); effErrlist_p.append(perr0)
	    efflist_h_noGE21.append(heff0_noGE21); effErrlist_h_noGE21.append(herr0_noGE21)
	    efflist_h.append(heff0); effErrlist_h.append(herr0)
	    efflist2_p.append(peff2); effErrlist2_p.append(perr2)
	    efflist2_h_noGE21.append(heff2_noGE21); effErrlist2_h_noGE21.append(herr2_noGE21)
	    efflist2_h.append(heff2); effErrlist2_h.append(herr2)
	    ratelist_p.append(nrate0_p); rateErrlist_p.append(sqrt(nrate0_p*SF))
	    ratelist_h.append(nrate0_h); rateErrlist_h.append(sqrt(nrate0_h*SF))
	    ratelist_h_noGE21.append(nrate0_h_noGE21); rateErrlist_h_noGE21.append(sqrt(nrate0_h_noGE21*SF))
	    ratelist2_p.append(nrate2_p); rateErrlist2_p.append(sqrt(nrate2_p*SF))
	    ratelist2_h.append(nrate2_h); rateErrlist2_h.append(sqrt(nrate2_h*SF))
	    ratelist2_h_noGE21.append(nrate2_h_noGE21); rateErrlist2_h_noGE21.append(sqrt(nrate2_h_noGE21*SF))
	Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
	graph_p = TGraphErrors(len(efflist_p), np.array(efflist_p), np.array(ratelist_p), np.array(effErrlist_p), np.array(rateErrlist_p))
	graph_h = TGraphErrors(len(efflist_h), np.array(efflist_h), np.array(ratelist_h), np.array(effErrlist_h), np.array(rateErrlist_h))
	graph_h_noGE21 = TGraphErrors(len(efflist_h_noGE21), np.array(efflist_h_noGE21), np.array(ratelist_h_noGE21), np.array(effErrlist_h_noGE21), np.array(rateErrlist_h_noGE21))
	graph2_p = TGraphErrors(len(efflist2_p), np.array(efflist2_p), np.array(ratelist2_p), np.array(effErrlist2_p), np.array(rateErrlist2_p))
	graph2_h = TGraphErrors(len(efflist2_h), np.array(efflist2_h), np.array(ratelist2_h), np.array(effErrlist2_h), np.array(rateErrlist2_h))
	graph2_h_noGE21 = TGraphErrors(len(efflist2_h_noGE21), np.array(efflist2_h_noGE21), np.array(ratelist2_h_noGE21), np.array(effErrlist2_h_noGE21), np.array(rateErrlist2_h_noGE21))
	legend = TLegend(0.45,0.75,0.90,0.90)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	tex = TLatex(0.2,.88, "%.2f<|#eta|<%.2f, L1Mu with p_{T}^{L1}>%d GeV, Q>=4"%(etamin, etamax, pt))
        graph_p.SetName("TriggerEffVsRate_position_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph_h.SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph_h_noGE21.SetName("TriggerEffVsRate_hybrid_noGE21_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph2_p.SetName("TriggerEffVsRate_position_mediumveto_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph2_h.SetName("TriggerEffVsRate_hybrid_mediumveto_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph2_h_noGE21.SetName("TriggerEffVsRate_hybrid_noGE21_mediumveto_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
	graph_p.Write();graph_h_noGE21.Write();graph_h.Write()
	graph2_p.Write();graph2_h_noGE21.Write();graph2_h.Write()
	text_noveto =  "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV"%(etamin,etamax,pt)
	text_mveto =  "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV"%(etamin,etamax,pt)
	legheader = "L1Mu with no tracker veto, Q>=4"
	legheaderm = "L1Mu with medium tracker veto, Q>=4"
	mgerr = plotsgraphs([graph_p, graph_h_noGE21, graph_h], legs3, legheader, text_noveto, SBPlots+"TriggerRateVsEff_combiend_noveto_20170131_pt%d_St2eta%dto%d_allnpar"%(pt, int(etamin*10),int(etamax*10)))
	mgerr2 = plotsgraphs([graph2_p, graph2_h_noGE21, graph2_h], legs3, legheaderm, text_mveto, SBPlots+"TriggerRateVsEff_combiend_mediumveto_20170131_pt%d_St2eta%dto%d_allnpar"%(pt, int(etamin*10),int(etamax*10)))
        mgerr.SetName("TriggerEffVsRate_combined_noveto_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        mgerr2.SetName("TriggerEffVsRate_combined_mediumveto_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
	mgerr.Write()
	mgerr2.Write()
	Teff_out.Close()
    Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
    #c2 = TCanvas()
    #c2.SetLogy()
    #c2.SetLogx()
    #c2.SetGridx()
    #c2.SetGridy()
    #legend2 = TLegend(0.4,0.7,0.90,0.85)
    #legend2.SetFillColor(ROOT.kWhite)
    #legend2.SetTextFont(42)
    hrate_p.Sumw2(False)
    hrate_h.Sumw2(False)
    hrate_h_noGE21.Sumw2(False)
    hrate2_p.Sumw2(False)
    hrate2_h.Sumw2(False)
    hrate2_h_noGE21.Sumw2(False)
    hrate_template.SetMinimum(.2)
    hrate_template.SetMaximum(2000)
    hrate_template.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 140 PU")
    hrate_template.GetXaxis().SetTitle("L1Mu p_{T} [GeV]")
    hrate_template.GetYaxis().SetTitle("Trigger rate [kHz]")
    hrate_template.Write()
    hrate_p.Write();hrate_h.Write();hrate_h_noGE21.Write()
    hrate2_p.Write();hrate2_h.Write();hrate2_h_noGE21.Write()
    text_noveto =  "%.2f<|#eta|<%.2f"%(etamin,etamax)
    text_mveto =  "%.2f<|#eta|<%.2f"%(etamin,etamax)
    legheader = "L1Mu with no tracker veto, Q>=4"
    legheaderm = "L1Mu with medium tracker veto, Q>=4"
    plotshistograms([hrate_p, hrate_h_noGE21, hrate_h], legs3,legheader, text_noveto, SBPlots+"TriggerRate_pt_combined_noveto_20170131_ratefraction%d_St2eta%dto%d_allnpar"%(fraction_rate, int(etamin*10),int(etamax*10)), True)
    plotshistograms([hrate2_p, hrate2_h_noGE21, hrate2_h], legs3,legheaderm, text_mveto, SBPlots+"TriggerRate_pt_combined_mediumveto_20170131_ratefraction%d_St2eta%dto%d_allnpar"%(fraction_rate, int(etamin*10),int(etamax*10)), True)


#DecompresZipFiles("./")
#SBPlots = "eta12to215SBPlots_20170306_combined_PU140_test_v1/"
SBPlots = "eta12to215SBPlots_20170316_combined_PU140_newRatesample_TriggerRateVsPlateauEff_v2/"
if len(sys.argv)>=2:
        SBPlots = sys.argv[1]
	if SBPlots[-1] != "/":
	    SBPlots = SBPlots+"/"
	print SBPlots
if not os.path.exists(SBPlots):
        os.makedirs(SBPlots)

filedir = "condor_20170303_rate_fraction90_95_99_eta16to215_noGE21/"
fractions = [x for x in range(76, 97)]
pts = [5, 7, 10,12, 15, 20]
netas = [1.6,1.8,2.0,2.15]
#netas = [1.2,1.4,1.6]
netas = [1.2,1.4,1.6,1.8,2.0,2.15]
useGE21 = False
condoroutroot = "Teffout_eta16to215_noGE21.root"
outputroot = "SB_eta16to215_test.root"
#getallPtEffAndRate(pts, fractions, netas, outputroot, filedir, condoroutroot, SBPlots, useGE21, True, True, True)
filename = "SB_eta12to215_20170306.root"
#CombinedGE21_SB(filename, pts, netas, SBPlots)
#netas = [1.2,1.4,1.6,1.8,2.0,2.15]
#CombinedGE21_effAndrate(filename, pts, netas, SBPlots)
allLUTfile = "finalLUT_20170312_all.log"
outputrootfile = "SB_eta12to215_20170315_test.root"
outputrootfile = SBPlots+outputrootfile
ratesample = "RateTree_veto2.root"
signalsample = "out_ana_displaced.root"
#plotalleta(10, netas, fraction, outputrootfile, ratesample, signalsample, allLUTfile, SBPlots)
#for frac in fractions:
#    plotalletaallptallfractions(pts, netas, fractions, frac, outputrootfile, ratesample, signalsample, allLUTfile, SBPlots)
frac = 96
#plotalletaallptallfractions(pts, netas, [frac], frac, outputrootfile, ratesample, signalsample, allLUTfile, SBPlots)
plotalletaallptallfractions([10], netas, fractions, frac, outputrootfile, ratesample, signalsample, allLUTfile, SBPlots)
