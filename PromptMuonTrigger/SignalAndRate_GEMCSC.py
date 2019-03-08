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

etabin = [1.0, 1.2, 1.3,  1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95,
	      2.0, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5]
myetabin = np.asarray(etabin)
binLow = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,12.0,14.0,16.0,18.0,20.0,24.0,28.0,32.0,36.0,42.0,50.0]
ptbins = np.asarray(binLow)

ptbin = [
	#1, 2.0,   2.5,  
      3.0, 3.5,   4.0,   4.5,   5.0,   6.0,   7.0,   8.0,
      10.0,  12.0,  14.0,  16.0,  18.0,  20.0,  25.0,  30.0,  35.0,  40.0,
      45.0,  50.0]#  60.0,  70.0,  80.0,  90.0, 100.0, 120.0, 140.0]
rateptbin = [5.0, 6.0, 7.0,8.0, 10.0, 12.0, 14.0, 16.0, 20.0, 25.0, 30.0, 35.0]
myptbin = np.asarray(ptbin)
myrateptbin = np.asarray(rateptbin)
total = 284900.000000
SF = 30.0*1000/total#khz
SF200 = 30.0*1000/total*(200.0/140.0)#khz
pu =200
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
	elif frac<fraction:
	    dphimin = xcut
	else:
	    break
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
def dphiOfSignalAndRate(ch0, ch1, pt, pairs, etamin, etamax, wfilename, SBPlots, doPlots):
    npairs = len(pairs)
    for case in range(len(pairs)):
	evenodd = pairs[case]
	npar1 = 2
	if evenodd == "odd":
	    npar1 = 1
	hist_s = TH1F("hist_s","Signal",100,-0.04, 0.04)
	hist_b = TH1F("hist_b","Rate",100,-0.04, 0.04)
	ratecut = "maxPromptPt && abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && hasME2 && CSCTF_ch2%%2==%d && L1Mu_pt>=%f"%(etamin, etamax, npar1%2, pt) 
	signalcut = "abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && has_tfTrack>0 && has_gmtCand>0 && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<1 && pt>=%f && L1Mu_pt>=%f && nstubs>=2"%(etamin, etamax, evenodd, pt, pt)
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
	



def getEffAndRate(ch0, ch1, pt, fractions, pairs, etamin, etamax, wfilename, SBPlots, doPlots=True):
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
    totrate = []
    rate_original = []
    #rate_original_ME21 = []
    for evenodd in pairs:
	chambercase += 1
	npar1 = 2
	ratecut = "maxPromptPt &&abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f &&L1Mu_quality>=4 && hasME2 && hasME1 && CSCTF_ch2%%2==0 && L1Mu_pt>=%f"%(etamin, etamax, pt) 
	if evenodd == "odd":
	    npar1 = 1
	    ratecut = "maxPromptPt && abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && L1Mu_quality>=4 && hasME2 && hasME1 && CSCTF_ch2%%2==1 && L1Mu_pt>=%f"%(etamin, etamax, pt) 
	
	signalcut = "abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && has_gmtCand>0 && has_tfTrack>0 && nstubs>=2 && trk_eff_CSC_ME11.has_csc_sh>0 &&(trk_eff_CSC_ME21.has_csc_sh&%d)>0 && (trk_eff_CSC_ME21.has_gem_sh&%d)>0 && pt>=%f"%(etamin, etamax, npar1, npar1, pt)
	basecut = "abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && has_gmtCand>0 && has_tfTrack>0 && nstubs>=2 && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<1 && pt>=%f && L1Mu_pt>=%f"%(etamin, etamax, evenodd, pt, pt)
	#rate_original.append(SF*getEvents(ch0, ratecut))
	nsignal = getEvents(ch1, signalcut)
	nfrac = -1
	#dphicut = getDPhiFromLUT(2, pt, 98, evenodd)
	dphistep = 0.00002
	for frac in fractions:
	    nfrac += 1
	    #dphicut = getDPhiFromLUT(2, pt, frac, evenodd)
	    if frac < 100:
		dphicut = getCut(ch1, "abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)"%evenodd, basecut, 0.0, 0.01, dphistep, frac*1.0/100.0)
	    elif frac==100:
		dphicut = 100
	    nrate_dphi = getEvents(ch0, ratecut+" && abs(gemdphi_st2)<%f"%(dphicut))
	    nsignal_dphi = getEvents(ch1, signalcut+" && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<%f && trk_eff_CSC_ME11.has_lct>0 && L1Mu_pt>=%f"%(evenodd, dphicut, pt)+"&& pt>%f"%(pt+5))
		
	    #print "rate cut ",ratecut+" && abs(gemdphi_st2)<%f"%(dphicut), " signal cut ",signalcut+" && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<%f && hasME2 && L1Mu_pt>=%f"%(evenodd, dphicut, pt)
	    eff_dphi = float(nsignal_dphi)/float(nsignal)
	    rate_err = sqrt(nrate_dphi)
	    eff_err = sqrt(eff_dphi*(1.0-eff_dphi)/nsignal)
	    #print "signal cut ",signalcut+" && abs(trk_eff_CSC_ME21.dphi_2strippad_fit_%s)<%f && trk_eff_CSC_ME11.has_lct>0 && L1Mu_pt>=%f"%(evenodd, dphicut, pt)
	    print evenodd, " pt ",pt, " frac ",frac, " dphicut ",dphicut," totsignal ",nsignal," nsignal ",nsignal_dphi," eff_dphi ",eff_dphi," eff_err ",eff_err," nrate ",nrate_dphi
	    dphicutlist[chambercase].append(dphicut)
	    nsignaldphilist[chambercase].append(nsignal_dphi)
	    efflist[chambercase].append(eff_dphi)
	    effErrlist[chambercase].append(eff_err)
	    ratelist[chambercase].append(nrate_dphi*SF)
	    rateErrlist[chambercase].append(rate_err*SF)
	#print "Entreis Signal ", nsignaldphilist[chambercase], " Rate " ,ratelist[chambercase]
    ratecut_q4 = "maxPromptPt &&abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && hasME2 && hasME1 && L1Mu_quality>=4 && L1Mu_pt>=%f"%(etamin, etamax, pt) 
    nrate_q4 = getEvents(ch0, ratecut_q4)*SF
    #nrate_q4_v2 = getEvents(ch0, ratecut_q4)
    cuts_tot = "abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && has_gmtCand>0 && has_tfTrack>0 && nstubs>=2 && pt>=%f"%(etamin, etamax, pt)
    totsignal = getEvents(ch1, cuts_tot+" && trk_eff_CSC_ME11.has_csc_sh>0 && (trk_eff_CSC_ME21.has_csc_sh)>0 && trk_eff_CSC_ME21.has_gem_sh>0")
    #totsignal = getEvents(ch1, cuts_tot+" && trk_eff_CSC_ME11.has_lct>0 && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"%(1,1))
    #totsignal = getEvents(ch1, "abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<1 || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<1) && pt>=%f"%(etamin, etamax, pt))
    totsignal_nodphi = getEvents(ch1, cuts_tot+" && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"%(1,1)+" && trk_eff_CSC_ME11.has_lct>0 && L1Mu_pt>=%f"%pt)
    eff_nodphi = float(totsignal_nodphi)/float(totsignal)
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
    legend2 = ROOT.TLegend(0.4,0.20,0.88,0.5)
    legend2.SetFillColor(ROOT.kWhite)
    legend2.SetTextFont(42)
    legend2.SetTextSize(.04)
    legend2.SetHeader("Track with stubs in ME11 and ME21")
    dencut = "abs(L1Mu_eta)>=%f && abs(L1Mu_eta)<%f && has_gmtCand>0 && has_tfTrack>0 && nstubs>=2 "%(etamin, etamax)+" && trk_eff_CSC_ME11.has_csc_sh>0 && (trk_eff_CSC_ME21.has_csc_sh)>0 && trk_eff_CSC_ME21.has_gem_sh>0" 
    Teff_q4 = getTefficiency(ch1, "pt", dencut, dencut+"&& trk_eff_CSC_ME11.has_lct>0 &&  trk_eff_CSC_ME21.has_lct>0 && L1Mu_quality>=4 && L1Mu_pt>=%f"%pt, 50, 0, 50)
    Teffs = []
    nfrac = -1
    n = -1
    for frac in fractions:
	nfrac += 1
	nsignal_dphi = getEvents(ch1, cuts_tot+" && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"%(dphicutlist[1][nfrac], dphicutlist[0][nfrac])+" && trk_eff_CSC_ME11.has_lct>0 && L1Mu_pt>=%f"%pt)
	nrate_dphi = 0.0
	for case in range(npairs):
	    nrate_dphi += ratelist[case][nfrac]
	nsignaldphilist[npairs].append(nsignal_dphi)
	eff_dphi = nsignal_dphi/float(totsignal)
	efflist[npairs].append(nsignal_dphi/float(totsignal))
	effErrlist[npairs].append(sqrt(eff_dphi*(1.0-eff_dphi)/totsignal))
	ratelist[npairs].append(nrate_dphi)
	rateErrlist[npairs].append(sqrt(nrate_dphi*SF))
	#if nfrac%3==0:
	if frac==100 or frac==98 or frac==96:
	    numcut = dencut+" && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f)"%(dphicutlist[1][nfrac], dphicutlist[0][nfrac])+" && trk_eff_CSC_ME11.has_lct>0 && L1Mu_pt>=%f"%pt
	    Teffs.append( getTefficiency(ch1, "pt", dencut, numcut, 50, 0, 50))
	    n +=1
	    Teffs[n].SetLineColor(color[n])
	    Teffs[n].SetFillColor(color[n])
	    Teffs[n].SetMarkerColor(color[n])
	    Teffs[n].SetMarkerStyle(maker[n])
	    if frac==100:
		legend2.AddEntry(Teffs[n], "NO bending angle cut+Q>=4","pl")
	    else:
		legend2.AddEntry(Teffs[n], "%d %% bending angle cut"%frac,"pl")
		#legend2.AddEntry(Teffs[n], "bending angle cut+Q>=4","f")

    
    tex1 = ROOT.TLatex(0.45,0.6, "p_{T}^{L1}>%d, %.2f<|#eta|<%.2f"%(pt, etamin, etamax))
    tex1.SetNDC()
    tex1.SetTextSize(.04)
    c0 = TCanvas()
    c0.SetGridx()
    c0.SetGridy()
    b1.Draw()
    #Teff_q4.Draw("same")
    #Teff_q4.SetLineColor(color[n+1])
    #Teff_q4.SetMarkerColor(color[n+1])
    #Teff_q4.SetMarkerStyle(maker[n+1])
    #legend2.AddEntry(Teff_q4, "NO bending angle cut+Q>=4","pl")
    for i in range(n+1):
	Teffs[i].Draw("same")
    legend2.Draw("same")
    tex1.Draw("same")
    c0.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_turnon_pt%d_eta%dto%d.pdf"%(pt, int(etamin*10), int(etamax*10)))
    c0.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_turnon_pt%d_eta%dto%d.png"%(pt, int(etamin*10), int(etamax*10)))
    c0.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_turnon_pt%d_eta%dto%d.C"%(pt, int(etamin*10), int(etamax*10)))
    if not(doPlots):
	print "ratelist ",ratelist," nrate_q4 ",nrate_q4
	return ratelist, nrate_q4
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
    tex2 = ROOT.TLatex(0.4,0.2, "#splitline{With stub in ME11,ME21 and no bending angle cut}{eff: %.1f%%, Rate[kHz]: %.1f+%.1f}"%(eff_nodphi*100.0, ratelist[0][-1], ratelist[1][-1]))
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

    c0 = TCanvas()
    graphlist[2].Draw("AP")
    graphlist[2].SetMinimum(0)
    graphlist[2].SetTitle("bending angle cut in YE2/1, PU140")
    graphlist[2].GetXaxis().SetTitle("Trigger Eff")
    graphlist[2].GetYaxis().SetTitle("Trigger rate [kHz]")
    graphlist[2].GetXaxis().SetRangeUser(0.7, 1.0)
    c0.Update()
    tex.Draw("same")
    tex2.Draw("same")
    c0.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d_all.png"%(pt, int(etamin*10), int(etamax*10)))
    c0.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d_all.pdf"%(pt, int(etamin*10), int(etamax*10)))
    c0.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d_all.C"%(pt, int(etamin*10), int(etamax*10)))
    c1 = TCanvas()
    mgerr.Draw("AP")
    mgerr.SetMinimum(0)
    mgerr.SetTitle("bending angle cut in YE2/1, PU140")
    mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d"%(pt, int(etamin*10), int(etamax*10)))
    mgerr.GetXaxis().SetTitle("Trigger Eff")
    mgerr.GetYaxis().SetTitle("Trigger rate [kHz]")
    mgerr.GetXaxis().SetRangeUser(0.7, 1.0)
    mgerr.Draw("AP")
    c1.Update()
    tex.Draw("same")
    tex2.Draw("same")
    legend.Draw("same")
    c1.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d.png"%(pt, int(etamin*10), int(etamax*10)))
    c1.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d.pdf"%(pt, int(etamin*10), int(etamax*10)))
    c1.SaveAs(SBPlots+"GEMCSC_St2_TriggerEff_Rate_pt%d_eta%dto%d.C"%(pt, int(etamin*10), int(etamax*10)))
    c2 = TCanvas()
    c2.Clear()
    mgerr_v2.Draw("AP")
    mgerr_v2.SetTitle("bending angle cut in YE2/1, PU140")
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
    print "ratelist ",ratelist
    return ratelist, nrate_q4

def getAllEffAndRate(ch0, ch1, pts, fractions, fraction_rate, pairs = ["odd","even"], etamin = 2.15, etamax = 2.4, wfilename = "GEMCSC_graphs.root"):
    nrates_noGE21 = []
    nrates_GE21 = []
    hrate_noGE21 = ROOT.TH1F("hrate_noGE21","hrate_noGE21",len(ptbin)-1, myptbin)
    hrate_q4 = ROOT.TH1F("hrate_q4","hrate_q4",len(ptbin)-1, myptbin)
    hrate_GE21 = ROOT.TH1F("hrate_GE21","hrate_GE21",len(ptbin)-1, myptbin)
    for pt in pts:
	nrates, nrate_q4 = getEffAndRate(ch0, ch1, pt, fractions, pairs, etamin, etamax, wfilename, SBPlots)
	nfrac = -1
	#hrate_q4.Fill(pt, nrate_q4)
	for frac in fractions:
	    nfrac += 1
	    if frac==100:
		hrate_noGE21.Fill(pt, nrates[2][nfrac])
	    elif frac==fraction_rate:
		hrate_GE21.Fill(pt, nrates[2][nfrac])
	
    
    legend = ROOT.TLegend(0.45,0.7,0.90,0.85)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    legend.SetTextSize(.035)
    c1 = TCanvas()
    #tex = ROOT.TLatex(0.4,0.88, "%.2f<|#eta|<%.2f, L1Mu quality>=4"%(etamin, etamax))
    tex = ROOT.TLatex(0.4,0.88, "%.2f<|#eta|<%.2f"%(etamin, etamax))
    tex.SetNDC()

    hrate_noGE21.SetMarkerStyle(maker[0])
    hrate_noGE21.SetMarkerColor(color[0])
    hrate_noGE21.SetLineColor(color[0])
    hrate_noGE21.SetFillColor(color[0])
    hrate_GE21.SetMarkerStyle(maker[1])
    hrate_GE21.SetMarkerColor(color[1])
    hrate_GE21.SetLineColor(color[1])
    hrate_GE21.SetFillColor(color[1])
    #hrate_q4.SetMarkerStyle(maker[0])
    #hrate_q4.SetMarkerColor(color[0])
    #hrate_q4.SetLineColor(color[0])
    #hrate_q4.SetFillColor(color[0])

    hrate_noGE21.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 140 PU")
    legend.AddEntry(hrate_noGE21,"L1Mu with stub in ME11 and ME21+Q>=4","p")
    #legend.AddEntry(hrate_q4,"L1Mu with stub in ME11 and ME21+Q>=4","p")
    legend.AddEntry(hrate_GE21,"#splitline{L1Mu with stub in ME11}{and bending angle cut in YE21+Q>=4}","p")
    hrate_noGE21.Sumw2(False)
    hrate_GE21.Sumw2(False)
    #hrate_q4.Sumw2(False)
    hrate_noGE21.Draw("e3")
    hrate_noGE21.SetMinimum(1)
    hrate_noGE21.SetMaximum(10000)
    hrate_GE21.Draw("samee3")
    #hrate_q4.Draw("samee")
    c1.SetLogy()
    c1.SetLogx()
    c1.SetGridx()
    c1.SetGridy()
    legend.Draw("same")
    tex.Draw("same")

    hrate_noGE21.GetXaxis().SetTitle("L1Mu p_{T} [GeV]")
    hrate_noGE21.GetYaxis().SetTitle("Trigger rate [kHz]")
    c1.SaveAs(SBPlots+"TriggerRate_q4_eta%dto%d_Eff%d.png"%(int(etamin*10), int(etamax*10), fraction_rate))
    c1.SaveAs(SBPlots+"TriggerRate_q4_eta%dto%d_Eff%d.pdf"%(int(etamin*10), int(etamax*10), fraction_rate))
    c1.SaveAs(SBPlots+"TriggerRate_q4_eta%dto%d_Eff%d.C"%(int(etamin*10), int(etamax*10), fraction_rate))
	    
	#dphiOfSignalAndRate(ch0, ch1, pt, pairs, etamin, etamax, wfilename, SBPlots)
SBPlots = "GEMCSC_bending_SBPlots_hasME2hasME1_L1Mu_RateVsPt_20170317/"
#SBPlots = "eta18to215SBPlots_20170223_noGE21_fixErrorBar/"
if not os.path.exists(SBPlots):
    os.makedirs(SBPlots)
file0 = "RateTree.root"	
file1 = "out_ana_prompt_pu140_1M_20170313_v2.root"
file1 = "out_ana_prompt_pu140_1M_20170314.root"
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

fractions = [100-x for x in range(0, 11)]
fractions = [100, 96]
#pts = [5, 7, 10, 12, 16, 20]
rateptbin = [5.0, 6.0, 7.0,8.0, 10.0, 12.0, 14.0, 16.0, 20.0, 25.0, 30.0, 35.0]
#pts = [5, 10, 20]
#pts = [20]
getAllEffAndRate(ch0, ch1, rateptbin[:-1], fractions, 96)
#getAllEffAndRate(ch0, ch1, [10], fractions, 96)




    
	    


