# Run quiet mode
import sys
sys.argv.append( '-b' )
import ROOT 
ROOT.gROOT.SetBatch(1)
ROOT.gErrorIgnoreLevel=1001
from ROOT import * 
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

color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
maker = [20,21,22,23,33]
def getDPhiFromLUT(st, pt, fraction, evenodd):
    ststring = "ME11"
    if st==2:
	ststring = "ME21"
    fracstring = "Eff%d"%fraction
    ptstring = "Pt%d"%pt
    pt_string = ("%s"%(ptstring)).ljust(4)
    #dphi_lct_pad["ME11"]["Eff95"]["Pt10"]["even"]
    return dphi_lct_pad[ststring][fracstring][pt_string][evenodd]

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

def getEvents(ch, cut):
    hist = TH2F("hist","hist", 1,-1, 1, 1,-1, 1)
    ch.Draw("1:1>>hist",cut)
    return hist.GetEntries()
def getCut(ch, todraw, basecut, dphimin, dphimax, step, fraction):
    frac = 1.0
    total = getEvents(ch, basecut)
    naccept = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, dphimax))
    frac = float(naccept)/float(total)
    naccept2 = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, dphimin))
    frac2 = float(naccept2)/float(total)
    if frac<fraction:
	print "error! , with init range max ",dphimax," efficiency is ",frac," required eff: ",fraction
	return dphimax
    elif frac2>fraction:
	print "error! , with init range min ",dphimin," efficiency is ",frac2," required eff: ",fraction
	return dphimin
    xcut = (dphimin+dphimax)/2.0
    naccept = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, xcut))
    frac = float(naccept)/float(total)
    #print "naccept ",naccept," frac ",frac, " xcut ",xcut," dphimin ",dphimin, " dphimax ",dphimax," required eff: ",fraction
    while(dphimax-dphimin > step):
	if frac>fraction:
	    dphimax = xcut
	if frac<fraction:
	    dphimin = xcut
	xcut = (dphimin+dphimax)/2.0
	naccept = getEvents(ch, basecut+"&& abs(%s)<%f"%(todraw, xcut))
	frac = float(naccept)/float(total)
	#print "naccept ",naccept, " frac ",frac, " xcut ",xcut," dphimin ",dphimin, " dphimax ",dphimax," required eff: ",fraction
    return xcut
	
def getTefficiency(ch, todraw, dencut, numcut, nbins, xmin, xmax):
    hden = TH1F("hden","hden",nbins, xmin, xmax)
    hnum = TH1F("hnum","hnum",nbins, xmin, xmax)
    ch.Draw(todraw+">>hden", dencut)
    ch.Draw(todraw+">>hnum", numcut)
    Teff = TEfficiency(hnum, hden)
    SetOwnership(Teff, False)
    return Teff
    
    
evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
def dphiOfSignalAndRate(ch0, ch1, pt, pairs, etamin, etamax, wfilename, SBPlots):
    npairs = len(pairs)
    for case in range(len(pairs)):
	evenodd = pairs[case]
	npar1 = 2
	if evenodd == "odd":
	    npar1 = 1
	hist_s = TH1F("hist_s","Signal",100,-0.04, 0.04)
	hist_b = TH1F("hist_b","Rate",100,-0.04, 0.04)
	ratecut = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && hasME2 && CSCTF_ch2%%2==%d && L1Mu_pt>=%f"%(etamin, etamax, npar1%2, pt) 
	signalcut = "abs(tracketa)>%f && abs(tracketa)<%f && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<1 && pt>=%f && trackpt>=%f"%(etamin, etamax, evenodd, pt, pt)
	ch0.Draw("gemdphi_st2>>hist_b",ratecut)
	ch1.Draw("trk_eff_CSC_ME21.dphi_2strippad_fit_%s>>hist_s"%evenodd, signalcut)
	c1 = TCanvas()
	gStyle.SetOptStat(0)
	hist_s.Scale(1.0/hist_s.GetEntries())
	hist_b.Scale(1.0/hist_b.GetEntries())
	hist_s.SetLineColor(color[0])
	hist_b.SetLineColor(color[1])
	hist_s.SetTitle("#Delta#Phi_{GEM,CSC} in Station2 distribution")
	hist_s.Draw()
	hist_b.Draw("same")
	hist_s.GetXaxis().SetTitle("#Delta#Phi_{GEM,CSC} in Station 2")
	hist_s.GetYaxis().SetTitle("Normalized to unity")
	legend = ROOT.TLegend(0.15,0.75,0.5,0.9)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	legend.SetTextSize(.05)
	legend.AddEntry(hist_s, "Signal, p_{T}^{sim}>%d"%pt, "l")
	legend.AddEntry(hist_b, "Rate", "l")
	legend.Draw("same")
	tex = ROOT.TLatex(0.2,0.4, "#splitline{p_{T}^{L1}>%d, %.2f<|#eta|<%.2f}{%s pairs}"%(pt, etamin, etamax, evenodd))
	tex.SetNDC()
	tex.Draw("same")
	#c1.SaveAs(SBPlots+"GEMCSC_St2_gemdphi_SignalRate_pt%d_eta%dto%d_case%d.png"%(pt, int(etamin*10), int(etamax*10), case))
	c1.SaveAs(SBPlots+"GEMCSC_St2_gemdphi_SignalRate_pt%d_eta%dto%d_case%d.pdf"%(pt, int(etamin*10), int(etamax*10), case))
	



def getEffAndRate(ch0, ch1, pt, fractions, pairs, etamin, etamax, wfilename, SBPlots):
    #odd: 0, even: 1
    nsignaldphilist = []
    efflist = []
    ratelist = []
    effErrlist = []
    rateErrlist = []
    bendingEfflist = []
    dphicutlist = []
    for frac in fractions:
	bendingEfflist.append(float(frac)/100.0)
    npairs = len(pairs)
    for case in range(len(pairs)+1):
	nsignaldphilist.append([])
	efflist.append([])
	ratelist.append([])
	effErrlist.append([])
	rateErrlist.append([])
	dphicutlist.append([])
    chambercase = -1
    SF = 30000.0/285000.0*(200.0/140.0)
    rate_original = []
    #rate_original_ME21 = []
    for evenodd in pairs:
	chambercase += 1
	npar1 = 2
	ratecut = "maxPromptPt && abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && hasME2 && hasME1 && CSCTF_ch2%%2==0 && L1Mu_pt>=%f"%(etamin, etamax, pt) 
	if evenodd == "odd":
	    npar1 = 1
	    ratecut = "maxPromptPt && abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && hasME2 && hasME1 && CSCTF_ch2%%2==1 && L1Mu_pt>=%f"%(etamin, etamax, pt) 
	
	rate_original.append(SF*getEvents(ch0, ratecut))
	signalcut = "abs(tracketa)>=%f && abs(tracketa)<%f && trk_eff_CSC_ME11.has_csc_sh>0 &&(trk_eff_CSC_ME21.has_csc_sh&%d)>0 && (trk_eff_CSC_ME21.has_gem_sh&%d)>0 && pt>=%f"%(etamin, etamax, npar1, npar1, pt)
	basecut = "abs(tracketa)>%f && abs(tracketa)<%f && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<1 && pt>=%f && trackpt>=%f"%(etamin, etamax, evenodd, pt, pt)
	nsignal = getEvents(ch1, signalcut)
	nfrac = -1
	dphicut = getDPhiFromLUT(2, pt, 98, evenodd)
	dphistep = 0.0001
	for frac in fractions:
	    nfrac += 1
	    #dphicut = getDPhiFromLUT(2, pt, frac, evenodd)
	    dphicut = getCut(ch1, "abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)"%evenodd, basecut, dphicut*.4, dphicut*1.4, dphistep, frac*1.0/100.0)
	    nrate_dphi = getEvents(ch0, ratecut+" && abs(gemdphi_st2)<%f"%(dphicut))
	    nsignal_dphi = getEvents(ch1, signalcut+" && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<%f && trk_eff_CSC_ME11.has_lct>0 && trackpt>=%f"%(evenodd, dphicut, pt))
	    #print "rate cut ",ratecut+" && abs(gemdphi_st2)<%f"%(dphicut), " signal cut ",signalcut+" && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<%f && hasME2 && trackpt>=%f"%(evenodd, dphicut, pt)
	    eff_dphi = float(nsignal_dphi)/float(nsignal)
	    rate_err = sqrt(nrate_dphi)
	    eff_err = sqrt(eff_dphi*(1.0-eff_dphi)/nsignal)
	    print evenodd, " pt ",pt, " frac ",frac, " dphicut ",dphicut," totsignal ",nsignal," nsignal ",nsignal_dphi," eff_dphi ",eff_dphi," eff_err ",eff_err," nrate ",nrate_dphi
	    dphicutlist[chambercase].append(dphicut)
	    nsignaldphilist[chambercase].append(nsignal_dphi)
	    efflist[chambercase].append(eff_dphi)
	    effErrlist[chambercase].append(eff_err)
	    ratelist[chambercase].append(nrate_dphi*SF)
	    rateErrlist[chambercase].append(rate_err*SF)
	#print "Entreis Signal ", nsignaldphilist[chambercase], " Rate " ,ratelist[chambercase]
    cuts_tot = "abs(tracketa)>%f && abs(tracketa)<%f && pt>=%f"%(etamin, etamax, pt)
    totsignal = getEvents(ch1, cuts_tot+" && trk_eff_CSC_ME11.has_csc_sh>0 && (trk_eff_CSC_ME21.has_csc_sh)>0 && trk_eff_CSC_ME21.has_gem_sh>0")
    #totsignal = getEvents(ch1, cuts_tot+" && trk_eff_CSC_ME11.has_lct>0 && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"%(1,1))
    #totsignal = getEvents(ch1, "abs(tracketa)>%f && abs(tracketa)<%f && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<1 || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<1) && pt>=%f"%(etamin, etamax, pt))
    totsignal_nodphi = getEvents(ch1, cuts_tot+" && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"%(1,1)+" && trk_eff_CSC_ME11.has_lct>0 && trackpt>=%f"%pt)
    eff_nodphi = float(totsignal_nodphi)/float(totsignal)
    nfrac = -1
    b1 = ROOT.TH1F("b1","b1",50,0,50)
    b1.GetYaxis().SetRangeUser(0.0,1.02)
    b1.GetYaxis().SetTitleOffset(1.1)
    b1.GetYaxis().SetNdivisions(520)
    b1.GetYaxis().SetTitle("Trigger efficiency")
    b1.GetXaxis().SetTitle("True muon p_{T} [GeV]")
    b1.GetXaxis().SetTitleSize(0.05)
    b1.GetXaxis().SetLabelSize(0.05)
    b1.GetYaxis().SetTitleSize(0.05)
    b1.GetYaxis().SetLabelSize(0.05)
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 140 PU")
    legend2 = ROOT.TLegend(0.43,0.20,0.88,0.5)
    legend2.SetFillColor(ROOT.kWhite)
    legend2.SetTextFont(42)
    legend2.SetTextSize(.05)
    legend2.SetHeader("Track with stubs in ME11 and ME21")
    Teffs = []
    for frac in fractions:
	nfrac += 1
	nsignal_dphi = getEvents(ch1, cuts_tot+" && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"%(dphicutlist[1][nfrac], dphicutlist[0][nfrac])+" && trk_eff_CSC_ME11.has_lct>0 && trackpt>=%f"%pt)
	nrate_dphi = 0.0
	for case in range(npairs):
	    nrate_dphi += ratelist[case][nfrac]
	nsignaldphilist[npairs].append(nsignal_dphi)
	eff_dphi = nsignal_dphi/float(totsignal)
	efflist[npairs].append(nsignal_dphi/float(totsignal))
	effErrlist[npairs].append(sqrt(eff_dphi*(1.0-eff_dphi)/totsignal))
	ratelist[npairs].append(nrate_dphi)
	rateErrlist[npairs].append(sqrt(nrate_dphi*SF))
	if nfrac%3==0:
	    dencut = "abs(tracketa)>%f && abs(tracketa)<%f "%(etamin, etamax)+" && trk_eff_CSC_ME11.has_csc_sh>0 && (trk_eff_CSC_ME21.has_csc_sh)>0 && trk_eff_CSC_ME21.has_gem_sh>0" 
	    numcut = dencut+" && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"    %(dphicutlist[1][nfrac], dphicutlist[0][nfrac])+" && trk_eff_CSC_ME11.has_lct>0 && trackpt>=%f"%pt
	    Teffs.append( getTefficiency(ch1, "pt", dencut, numcut, 50, 0, 50))
	    n = nfrac/3
	    Teffs[n].SetLineColor(color[n])
	    Teffs[n].SetMarkerColor(color[n])
	    Teffs[n].SetMarkerStyle(maker[n])
	    legend2.AddEntry(Teffs[n], "%d %% bending angle cut"%frac,"pl")
    
    tex1 = ROOT.TLatex(0.45,0.6, "p_{T}^{L1}>%d, %.2f<|#eta|<%.2f"%(pt, etamin, etamax))
    tex1.SetNDC()
    tex1.SetTextSize(.04)
    c0 = TCanvas()
    b1.Draw()
    for n in range(len(fractions)/3):
	Teffs[n].Draw("same")
    legend2.Draw("same")
    tex1.Draw("same")
    c0.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_turnon_pt%d_eta%dto%d.pdf"%(pt, int(etamin*10), int(etamax*10)))

    print "total signal (even+odd): ",totsignal," each frac ",nsignaldphilist
    wfile = TFile(wfilename, "UPDATE") 
    graphlist = []
    graphlist_v2 = []
    legend = ROOT.TLegend(0.15,0.80,0.4,0.95)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    legend.SetTextSize(.05)
    mgerr =TMultiGraph()
    mgerr_v2 =TMultiGraph()
    tex = ROOT.TLatex(0.4,0.3, "p_{T}^{L1}>%d, %.2f<|#eta|<%.2f"%(pt, etamin, etamax))
    tex.SetNDC()
    tex.SetTextSize(.04)
    tex2 = ROOT.TLatex(0.4,0.2, "#splitline{With stub in ME11,ME21 and no bending angle cut}{eff: %.1f%%, Rate[kHz]: %.1f+%.1f}"%(eff_nodphi*100.0, rate_original[0], rate_original[1]))
    tex2.SetNDC()
    tex2.SetTextSize(.035)
    legs = ["odd pairs","even pairs","all"]
    for case in range(npairs+1):
	#print "size ", len(efflist_p[npar]), " ",efflist_p[npar]
	graphlist.append(TGraphErrors(len(efflist[case]), np.array(efflist[case]), np.array(ratelist[case]), np.array(effErrlist[case]), np.array(rateErrlist[case])))
	graphlist_v2.append(TGraphErrors(len(efflist[case]), np.array(bendingEfflist), np.array(ratelist[case]), np.array(effErrlist[case]), np.array(rateErrlist[case])))
	graphlist[case].SetMarkerStyle(maker[case]) 
	graphlist[case].SetMarkerColor(color[case]) 
	graphlist[case].SetLineColor(color[case]) 
	graphlist[case].SetMinimum(0)
	#graphlist[case].Draw("AP")
	graphlist[case].GetXaxis().SetTitle("Trigger Eff")
	graphlist[case].GetYaxis().SetTitle("Trigger rate [kHz]")
	graphlist[case].SetName("TriggerEffVsRate_all_pt%d_eta%dto%d_case%d"%(pt, int(etamin*10), int(etamax*10), case))
	graphlist[case].Write()
	legend.AddEntry(graphlist[case],legs[case], "pl")
	mgerr.Add(graphlist[case])

	graphlist_v2[case].SetMarkerStyle(maker[case]) 
	graphlist_v2[case].SetMarkerColor(color[case]) 
	graphlist_v2[case].SetLineColor(color[case]) 
	graphlist_v2[case].SetMinimum(0)
	#graphlist_v2[case].Draw("AP")
	#tex.Draw("same")
	graphlist_v2[case].GetXaxis().SetTitle("bending angle cut Eff")
	graphlist_v2[case].GetYaxis().SetTitle("Trigger rate [kHz]")
	graphlist_v2[case].SetName("TriggerEffVsRate_threshold_pt%d_eta%dto%d_case%d"%(pt, int(etamin*10), int(etamax*10), case))
	graphlist_v2[case].Write()
	mgerr_v2.Add(graphlist_v2[case])

    c1 = TCanvas()
    mgerr.Draw("AP")
    mgerr.SetMinimum(0)
    mgerr.SetTitle("bending angle cut in YE2/1, PU200")
    mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d"%(pt, int(etamin*10), int(etamax*10)))
    mgerr.GetXaxis().SetTitle("Trigger Eff")
    mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")
    mgerr.GetXaxis().SetRangeUser(0.7, 1.0)
    mgerr.Draw("AP")
    c1.Update()
    tex.Draw("same")
    tex2.Draw("same")
    legend.Draw("same")
    c1.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d_case%d.png"%(pt, int(etamin*10), int(etamax*10), case))
    c1.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d_case%d.pdf"%(pt, int(etamin*10), int(etamax*10), case))
    c2 = TCanvas()
    c2.Clear()
    mgerr_v2.Draw("AP")
    mgerr_v2.SetTitle("bending angle cut in YE2/1, PU200")
    mgerr_v2.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d"%(pt, int(etamin*10), int(etamax*10)))
    mgerr_v2.GetXaxis().SetTitle("bending angle cut Eff")
    mgerr_v2.GetYaxis().SetTitle("Trigger rate [kHz]")
    mgerr_v2.SetMinimum(0)
    mgerr_v2.GetXaxis().SetRangeUser(0.7, 1.0)
    mgerr_v2.Draw("AP")
    c2.Update()
    tex.Draw("same")
    tex2.Draw("same")
    legend.Draw("same")
    c2.SaveAs(SBPlots+"GEMCSC_St2_TriggerEffThre_Rate_pt%d_eta%dto%d_case%d.png"%(pt, int(etamin*10), int(etamax*10), case))
    c2.SaveAs(SBPlots+"GEMCSC_St2_TriggerEffThre_Rate_pt%d_eta%dto%d_case%d.pdf"%(pt, int(etamin*10), int(etamax*10), case))
    wfile.Close()

def getAllEffAndRate(ch0, ch1, pts, fractions, pairs = ["odd","even"], etamin = 2.15, etamax = 2.4, wfilename = "GEMCSC_graphs.root"):
    SBPlots = "GEMCSC_bending_SBPlots_hasME2hasME1/"
#SBPlots = "eta18to215SBPlots_20170223_noGE21_fixErrorBar/"
    if not os.path.exists(SBPlots):
	    os.makedirs(SBPlots)
    for pt in pts:
	getEffAndRate(ch0, ch1, pt, fractions, pairs, etamin, etamax, wfilename, SBPlots)
	#dphiOfSignalAndRate(ch0, ch1, pt, pairs, etamin, etamax, wfilename, SBPlots)
file0 = "RateTree.root"	
file1 = "out_ana_prompt_pu140_1M.root"
ch0 = TChain("L1MuTriggerRate")
ch1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
ch2 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME21")
ch3 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME11")
addFilesToChain(ch0, file0)
addFilesToChain(ch1, file1)
addFilesToChain(ch2, file1)
addFilesToChain(ch3, file1)
ch1.AddFriend(ch2)
ch1.AddFriend(ch3)

fractions = [100-x for x in range(2, 11)]
pts = [5, 7, 10, 15, 20]
#pts = [5, 10, 20]
getAllEffAndRate(ch0, ch1, pts, fractions)




    
	    


