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

ROOT.gROOT.SetBatch(1)
ROOT.gStyle.SetStatW(0.07)
ROOT.gStyle.SetStatH(0.06)

ROOT.gStyle.SetOptStat(111110)

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

## draw an ellipse that includes 95% of the entries

signalAcceptance = 0.90

def getEllipse(x,y,a,b, alpha=0, x0=0, y0=0):
  x1 = x*cos(alpha)+y*sin(alpha)-x0
  y1 = x*sin(alpha)-y*cos(alpha)-y0
  #print "x ",x," y ",y," a ",a," b ",b," alpha ",alpha*180/pi," x1 ",x1," y1 ",y1
  return x1*x1/(a*a) + y1*y1/(b*b)

def passEllipse(x,y,a,b,alpha, x0=0, y0=0):
    return getEllipse(x,y,a,b,alpha, x0, y0) <= 1.0

def failEllipse(x,y,a,b,alpha, x0=0, y0=0):
    return getEllipse(x,y,a,b,alpha,x0, y0) > 1.0

def getBackgroundRejectionEllipse(a_axis, b_axis, alpha, x0, y0, signalHist, backgroundHist):
    if signalHist.GetEntries()==0 or backgroundHist.GetEntries()==0:
    	print "warning!!! entries (S and B) ",signalHist.GetEntries(),backgroundHist.GetEntries()
    	return (1.0,0)
    #print "signal and bg, integral/entris ", signalHist.Integral() / signalHist.GetEntries(), backgroundHist.Integral() / backgroundHist.GetEntries()
    signalEntriesTotal = signalHist.GetEntries()*1.0
    backgroundEntriesTotal = backgroundHist.GetEntries()*1.0
    backgroundIntegral = backgroundHist.Integral()
    backgroundoverunderflow = backgroundEntriesTotal - backgroundIntegral

    entriesInEllipseSignal  = 0.0
    entriesOutEllipseBackground  = 0.0

    signalAcceptanceFactor = 0.0
    backgroundRejectionFactor = 0.0
    
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
            if failEllipse(background_x, background_y, a_axis, b_axis, alpha, x0, y0):
                entriesOutEllipseBackground += backgroundHist.GetBinContent(j,k)
		#print "background event in j ",j," k ",k," : ",backgroundHist.GetBinContent(j,k)," total outellipse ",entriesOutEllipseBackground," backgroundEntriesTotal  ",backgroundEntriesTotal

    ## current signal acceptance
    signalAcceptanceFactor = entriesInEllipseSignal / signalEntriesTotal

    ## current background rejection, overflow and underflow should be excluded
    backgroundRejectionFactor = (entriesOutEllipseBackground + backgroundoverunderflow) / backgroundEntriesTotal
    #print "Signal in Ellipse ",entriesInEllipseSignal," entries ",signalEntriesTotal," BG in Ellipse ",entriesOutEllipseBackground," entries ",backgroundEntriesTotal," backgroundoverunderflow ",backgroundoverunderflow
            #if backgroundRejectionFactor<0.50:
            #    break
            #print j,k,signalAcceptanceFactor,backgroundRejectionFactor

    return signalAcceptanceFactor, backgroundRejectionFactor
            



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


def drawEllipse(hist, hist2, nEvent_list, ddYDPhiCuts, a, b, alpha, x0, y0, eff1, eff2, xtitle, ytitle,st_title, text, picname):
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
    btest = TH2F("btest","btest",xBins/2,xmin/2.0,xmax/2.0,yBins/2,ymin/2.0,ymax/2.0)
    btest.GetXaxis().SetTitle(hist.GetXaxis().GetTitle())
    btest.GetYaxis().SetTitle(hist.GetYaxis().GetTitle())
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
    hist.Draw("samecolz")
    hist.SetTitle(st_title[1])

    el2.Draw("same")
    
    xline1 = TLine(-ddYDPhiCuts[0], ymin/2, -ddYDPhiCuts[0], ymax/4) 
    xline2 = TLine(ddYDPhiCuts[0], ymin/2, ddYDPhiCuts[0], ymax/4) 
    xline1.SetLineColor(kBlack)
    xline2.SetLineColor(kBlack)
    xline1.SetLineStyle(2)
    xline2.SetLineStyle(2)
    xline1.Draw("same")
    xline2.Draw("same")
    angle = "%.3f"%alpha
    print "in Drawellipse a ",a," b ",b," alpha ",alpha," angle ", alpha*180.0/pi, " x0 ",x0, " y0 ",y0," PCut ",ddYDPhiCuts[0]," DCut ",ddYDPhiCuts[1]
    acep_p = float(nEvent_list[5])/float(nEvent_list[4])
    acep_d = float(nEvent_list[6])/float(nEvent_list[4])
    tex1 = ROOT.TLatex(0.15,.3,"%s"%(text))
    tex1.SetNDC()
    tex10 = TLatex(0.2,.9,"Signal entries %d"%(nEvent_list[4]))
    tex10.SetNDC()
    tex3 = TLatex(0.15, 0.7, "Acceptance %.3f(P) %.3f(D) %.3f(H)"%(acep_p, acep_d, eff1))
    tex3.SetTextSize(0.05)
    tex3.SetNDC()
    tex4 = TLatex(0.15, 0.8, "#splitline{HCut: a=%.2f,b=%.3f,angle=%.2f,center(%.1f,%.3f)}{P-Cut: %.2f, D-Cut: %.3f}"%(a, b, alpha*180/pi, x0, y0, ddYDPhiCuts[0],ddYDPhiCuts[1]))
    tex4.SetTextSize(0.05)
    tex4.SetNDC()
    tex4.Draw("same")
    tex3.Draw("same")
    tex1.Draw("same")
    tex10.Draw("same")
    c.cd(2)
    rej_p = 1-float(nEvent_list[2])/float(nEvent_list[1])
    rej_d = 1-float(nEvent_list[3])/float(nEvent_list[1])
    btest2 = TH2F("btest2","btest2",xBins/2,xmin/2.0,xmax/2.0,yBins/2,ymin/2.0,ymax/2.0)
    btest2.GetXaxis().SetTitle(hist.GetXaxis().GetTitle())
    btest2.GetYaxis().SetTitle(hist.GetYaxis().GetTitle())
    btest2.SetTitle("Rate sample")
    btest2.Draw()
    hist2.Draw("samecolz")
    hist2.SetTitle(st_title[0])
    el2.Draw("same")
    xline1.Draw("same")
    xline2.Draw("same")
    print "Signal Acceptance: P ",acep_p, " D ",acep_d, " H ",eff1, " Rate nEvent ",nEvent_list[0]," this category ",nEvent_list[1]," Rejection: P ",rej_p," D ",rej_d," H ",eff2
    #tex2 = TLatex(0.15, 0.8, "a=%.1f, b=%.3f, alpha=%.4f, Rejection %.2f"%(a,b,alpha, eff2))
    tex2 = TLatex(0.15, 0.7, "Rejection %.3f(P), %.3f(D), %.3f(H)"%(rej_p, rej_d, eff2))
    tex2.SetTextSize(0.05)
    tex2.SetNDC()
    #tex5 = TLatex(0.15, 0.9, "ellipse center(%.1f, %.3f)"%(x0, y0))
    tex5 = TLatex(0.15, 0.9, "Rate nEvent %d, this category %d"%(nEvent_list[0], nEvent_list[1]))
    tex5.SetTextSize(0.05)
    tex5.SetNDC()
    #print "text.split ",text.split(',')," 2nd split  ",(text.split(',')[2]).split('{')
    text_1 =(text.split(',')[2]).split('{')[1]
    tex5.Draw("same")
    #tex11 = ROOT.TLatex(0.15,.7,text_1+","+(st_title[0]))
    tex11 = ROOT.TLatex(0.15,.7,text_1)
    tex11.SetNDC()
    tex2.Draw("same")
    #tex4.Draw("same")
    #tex11.Draw("same")
    c.cd()

    
    c.SaveAs(picname+ "_ellipse.png")

def loopEllipse(filedir, treename, b0, nEvent_list, ddYDPhiCuts, fraction, npar, astart, bstart, xaxis, yaxis,x_bins, y_bins,xtitle, ytitle,st_title, etamin, etamax, cuts,text,picname):

    gStyle.SetOptFit(0111)
    gStyle.SetOptStat(0)
    if (etamin<1.6):
    	ring = 2
    if (etamin>=1.6):
        ring = 1

    chain = TChain(treename)
    chain2 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME1%d"%ring)
    chain3 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME2%d"%ring)
    chain4 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME3%d"%ring)
    if os.path.isdir(filedir[0]):
    	  ls = os.listdir(filedir[0])
    	  for x in ls:
	      	if not(x.endswith(".root")):
			#print "x.endswith(.root) ", x.endswith(".root")
			continue
		x = filedir[0][:]+x
    		if os.path.isdir(x):
			continue
		chain.Add(x)
		chain2.Add(x)
		chain3.Add(x)
		chain4.Add(x)
    elif os.path.isfile(filedir[0]):
	  chain.Add(filedir[0])
	  chain2.Add(filedir[0])
	  chain3.Add(filedir[0])
	  chain4.Add(filedir[0])
    else:
	  print " it is not file or dir ", filedir[0]

    #chain.AddFriend(chain2)
    chain.AddFriend(chain3)
    #chain.AddFriend(chain4)
    
    chain1 = TChain(treename)
    chain12 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME1%d"%ring)
    chain13 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME2%d"%ring)
    chain14 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME3%d"%ring)
    if os.path.isdir(filedir[1]):
    	  ls = os.listdir(filedir[1])
    	  for x in ls:
	      	if not(x.endswith(".root")):
			#print "x.endswith(.root) ", x.endswith(".root")
			continue
		x = filedir[1][:]+x
    		if os.path.isdir(x):
			continue
		chain1.Add(x)
		chain12.Add(x)
		chain13.Add(x)
		chain14.Add(x)
    elif os.path.isfile(filedir[1]):
	  chain1.Add(filedir[1])
	  chain12.Add(filedir[1])
	  chain13.Add(filedir[1])
	  chain14.Add(filedir[1])
    else:
	  print " it is not file or dir ", filedir[1]

    #chain1.AddFriend(chain12)
    chain1.AddFriend(chain13)
    #chain1.AddFriend(chain14)

    doTest = False
    xBins = int(x_bins[1:-1].split(',')[0])
    xminBin = float(x_bins[1:-1].split(',')[1])
    xmaxBin = float(x_bins[1:-1].split(',')[2])
    yBins = int(y_bins[1:-1].split(',')[0])
    yminBin = float(y_bins[1:-1].split(',')[1])
    ymaxBin = float(y_bins[1:-1].split(',')[2])
    xbinwidth = (xmaxBin-xminBin)/xBins
    ybinwidth = (ymaxBin-yminBin)/yBins
    ddY_cut = ddYDPhiCuts[0]
    dphi_dir_cut =ddYDPhiCuts[1]
    binx1 = b0.GetXaxis().FindBin(-ddY_cut)
    binx2 = b0.GetXaxis().FindBin(ddY_cut)
    nbinsX = b0.GetXaxis().GetNbins()
    biny1 = b0.GetYaxis().FindBin(-dphi_dir_cut)
    biny2 = b0.GetYaxis().FindBin(dphi_dir_cut)
    nbinsY = b0.GetYaxis().GetNbins()
    nEvent_list.append(b0.Integral(binx1, binx2, 0, nbinsY+1))#rate, overflow and underflow are included
    nEvent_list.append(b0.Integral(0, nbinsX+1, biny1, biny2))
    b_step = ybinwidth/2.0
    	

    todrawb0 = "%s*charge"%yaxis+":"+"%s*charge>>b0"%xaxis
    todrawb01 = "(-1)*%s"%yaxis+":"+"(-1)*%s>>b01"%xaxis
    #todrawb1 = "%s*charge"%yaxis+":"+"%s*charge>>b1"%xaxis
    todrawb1 = "%s"%yaxis+":"+"%s>>b1"%xaxis
    todrawb11 = "(-1)*%s"%yaxis+":"+"(-1)*%s>>b11"%xaxis
    #b0 = TH2F("b0","b0",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b01 = TH2F("b01","b01",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b0.GetXaxis().SetTitle("%s"%xtitle)
    b0.GetYaxis().SetTitle("%s"%ytitle)
    #b0.SetTitle("%s Vs %s,%s"%(ytitle, xtitle, st_title)) 
    #b0.SetTitleSize(0.05)
    b0.SetStats(1)
    #chain.Draw(todrawb0,cuts[0],"colz")#background
    #chain.Draw(todrawb01,cuts[0]+"&& charge<0","colz")#background
    #b0.Add(b01)
    #print "background todraw ",todrawb0, " cuts ", cuts[0]," b0.Getentries ",b0.GetEntries()
    print " b0.Getentries ",b0.GetEntries()," b0.Integral() ",b0.Integral() 
    
    b1 = TH2F("b1","b1",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b11 = TH2F("b11","b11",xBins,xminBin,xmaxBin,yBins,yminBin,ymaxBin)
    b1.GetXaxis().SetTitle("%s"%xtitle)
    b1.GetYaxis().SetTitle("%s"%ytitle)
    #b1.SetTitle("%s Vs %s,%s"%(ytitle, xtitle, st_title)) 
    #b1.SetTitleFont(62)
    #b1.SetTitleSize(0.05)
    #b1.SetMaximum(30)
    b1.SetStats(1)
    chain1.Draw(todrawb1,cuts[1],"colz")#signal
    #chain1.Draw(todrawb11,cuts[1]+"&& charge<0","colz")#signal
    #b1.Add(b11)
    print "signal todraw ",todrawb1, " cuts ", cuts[1]," b1.Getentries ",b1.GetEntries()," b1.Integral() ",b1.Integral()
    nEvent_list.append(b1.GetEntries())
    nEvent_list.append(b1.Integral(binx1, binx2, 0, nbinsY+1))#overflow underflow included
    nEvent_list.append(b1.Integral(0, nbinsX+1, biny1, biny2))
    acep_p = float(nEvent_list[5])/float(nEvent_list[4])
    acep_d = float(nEvent_list[6])/float(nEvent_list[4])
    rej_p = 1-float(nEvent_list[2])/float(nEvent_list[1])
    rej_d = 1-float(nEvent_list[3])/float(nEvent_list[1])
    print "nEvent_list ",nEvent_list," ddYDphiCut ", ddYDPhiCuts
    
    meanx_s = b1.GetMean(1)
    meany_s = b1.GetMean(2)
    #print "signal meanx ",meanx_s," meany ",meany_s," bg meanx ",b0.GetMean(1)," meany ",b0.GetMean(2)

    #GetEntries() incldues underflow and overflow, Integral() does not include them by default
    if (b1.GetEntries()<1 or b0.GetEntries() <1 ):
    	print "signal entries ",b1.GetEntries(), " bg entries ",b0.GetEntries() 
    #print "signal integral/entris ", b1.Integral() / b1.GetEntries(),"   Bg ", b0.Integral() / b0.GetEntries()
    preselected_axes_signalAcc_backRej = []
    fraction = fraction/100.0
    maxRej = 0
    maxAccept = 0
    max_a = ddY_cut*2.5
    max_b = dphi_dir_cut*2.5
    max_alpha = 0.
    max_centerx = 0.0
    max_centery = 0.0
    centerx = 0
    centery = 0
    signalAcceptanceFactor = 0.0
    backgroundRejectionFactor = 0.0
    AcceptanceThresh = fraction
    RejectionThresh = rej_p
    #if (npar==0 or npar==2):# bad resolution	
	#AcceptanceThresh = fraction - 0.05
	#RejectionThresh = 0.5 + rej_p/2.0
    #else:
	#AcceptanceThresh = fraction - 0.02
	#RejectionThresh = 0.5 + rej_p/2.0

    for factor in [2.0, 2.5, 3, 4, 5]:
	max_a = ddY_cut*factor
	max_b = dphi_dir_cut*factor
	signalAcceptanceFactor, backgroundRejectionFactor = getBackgroundRejectionEllipse(max_a, max_b, 0, centerx, centery, b1, b0)
    	if signalAcceptanceFactor > fraction:
		break
    
    if max_a>0.5*xmaxBin:
    	max_a = 0.5*xmaxBin
    if max_b>1.0:
    	max_b = 1.0
    a_range = frange(ddY_cut/3.0, max_a, xbinwidth)
    b_range = frange(bstart, max_b, ybinwidth)
    max_b_lowedge = ybinwidth
    max_b_highedge = max_b
    lena = len(a_range)
    lenb = len(b_range)
    drawEllipse(b1, b0, nEvent_list, ddYDPhiCuts, max_a, max_b, 0, centerx, centery, signalAcceptanceFactor, backgroundRejectionFactor, xtitle, ytitle,st_title, text, picname+"_%d_initial"%(lena*lenb))
    #alpha_degrees = [0.0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
    #alpha_degrees = [0.0, 2, 4, 6, 8, 10, 180-2, 180-4, 180-6]
    alpha_degrees = [0.0]
    nalpha = 0
    alpha = 0.0
    print "arange ",a_range," max_a ",max_a, " brange ", b_range, " max_b ",max_b," alpha_degrees ",alpha_degrees
    if doTest:
	a_range = frange(.2, 5.2, 1)
        b_step = 0.025
	alpha_degrees = [0.0, 2, 4, 180-2, 180-6]
    for xratio in [0.0]:
      for nalpha  in range(0,len(alpha_degrees)):
      #for nalpha  in range(0, 3):
    #for xratio in [-0.3, -0.2, -0.1, -0.05, 0.0, 0.05,0.1,0.2,0.3]:
    #for xratio in [-0.06,-0.03,0.0,0.03,0.06]:
    #  for yratio in [-0.06,-0.03,0.0,0.03,0.06]:
       yratio = xratio
       centerx = meanx_s*xratio
       centery = meany_s*yratio
       alpha = pi*alpha_degrees[nalpha]/180.0
       max_b_highedge = b_range[-1]
       max_b_lowedge = b_range[0]
       m =0
       print "alpha_degree ", alpha_degrees[nalpha], " alpha ",alpha," high dege ",max_b_highedge," x0 ",centerx," y0 ",centery
       for a_axis in a_range:
       #for a_axis in reversed(a_range):
	    #alpha = 0.0
	    m = m+1
	    b_axis = max_b_highedge
	    signalAcceptanceFactor, backgroundRejectionFactor = getBackgroundRejectionEllipse(a_axis, b_axis, alpha, centerx, centery, b1, b0)
	    print "new(a,b) a ", a_axis, " b ", b_axis, " alpha ",alpha, " x0 ",centerx," y0 ",centery," bhigh ",max_b_highedge, " blow ", max_b_lowedge, " signal ", signalAcceptanceFactor, " bg ",backgroundRejectionFactor," fraction ",fraction
	    if (m== int(len(a_range)/2.0) or doTest):
	       drawEllipse(b1, b0, nEvent_list, ddYDPhiCuts, a_axis, b_axis, alpha, meanx_s, meany_s, signalAcceptanceFactor, backgroundRejectionFactor, xtitle, ytitle,st_title, text, picname+"_nalpha%d_m%d_testplot"%(nalpha, m))
	    if signalAcceptanceFactor < AcceptanceThresh: 
		continue
	    step = max_b_highedge - max_b_lowedge
	    n =0
	    while (step > b_step):
	    #for b_axis in b_range:
		b_axis = (max_b_highedge+max_b_lowedge)/2.0
		n = n+1
		signalAcceptanceFactor, backgroundRejectionFactor = getBackgroundRejectionEllipse(a_axis, b_axis, alpha, centerx, centery, b1, b0)
		print "m ",m," n ", n," bstep ",step, " a ", a_axis, " b ", b_axis," bhigh ",max_b_highedge, " blow ", max_b_lowedge, " signal ", signalAcceptanceFactor, " bg ",backgroundRejectionFactor
		#if signalAcceptanceFactor > fraction:
		#if (signalAcceptanceFactor > fraction or signalAcceptanceFactor > acep_p):

    		if (backgroundRejectionFactor > RejectionThresh):
		    #max_b_highedge = b_axis
		    max_b_lowedge = b_axis
		    #print " n ", n," bstep ",step, " a ", a_axis, " b ", b_axis, " alpha ",alpha," x0 ", centerx, " y0 ", centery," signal ", signalAcceptanceFactor, " bg ",backgroundRejectionFactor, " as reference acep_p ",acep_p
		    #if backgroundRejectionFactor > maxRej:
		    if signalAcceptanceFactor > maxAccept:
			maxRej = backgroundRejectionFactor
			maxAccept = signalAcceptanceFactor
			max_a = a_axis
			max_b = b_axis
			max_alpha = alpha
			max_centerx = centerx
			max_centery = centery
			drawEllipse(b1, b0, nEvent_list, ddYDPhiCuts, a_axis, b_axis, max_alpha, max_centerx, max_centery, signalAcceptanceFactor, backgroundRejectionFactor, xtitle, ytitle,st_title, text, picname+"_nalpha%d_m%d_n%d"%(nalpha, m,n))
		    #preselected_axes_signalAcc_backRej.append([a_axis, b_axis, signalAcceptanceFactor, backgroundRejectionFactor])
		else:
		    #max_b_lowedge = b_axis	     
		    max_b_highedge = b_axis
		step = max_b_highedge - max_b_lowedge	
	    if doTest:
	    	print "after trying to better a and b,  a ",a_axis," b ",b_axis," max_b_lowedge ",max_b_lowedge," max_b_highedge ",max_b_highedge," signal ", signalAcceptanceFactor, " bg ",backgroundRejectionFactor
	    max_b_highedge = b_axis +  2*b_step
	    max_b_lowedge = b_range[0]
	    	
    nEvent_list.append(nEvent_list[1]*maxRej)
    nEvent_list.append(nEvent_list[4]*maxAccept)
    print "max_a ",max_a," max_b ",max_b, " alpha ",max_alpha, " x0 ",max_centerx," y0 ",max_centery ," signalAcceptanceFactor ",maxAccept," backgroundRejectionFactor ",maxRej
    return (max_a, max_b, max_alpha, max_centerx, max_centery)
            

def gethist1D(chain,den, todraw="pt"):
	
    	h1 = ROOT.TH1F("h1","h1",len(ptbins)-1, ptbins)
    	chain.Draw("fabs(%s) >> h1"%todraw,den)
	#print "gethist1D, den ",den
	#h1.Print("ALL")
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
        chain.Draw("TMath::Abs(%s)>>hist"%(num),den+"&& npar_L1==%d && pt>%f && pt<%f"%(npar,pt-deltapt, pt+deltapt))
       	#hist.Print("ALL")
	upperlim = getUpperlimit(hist, fractionToKeep)
       	print "cuts ",den+"&& npar_L1==%d && pt>%f && pt<%f"%(npar,pt-1, pt+1)," upperlim ",upperlim
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
		
def makeEffplot_v2(filedirs,todraw, treename0, den, num, etamin, etamax, xtitle,ytitle,leg, legheader, txt,picname):
	
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
	b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 0 PU")
	
	
	Teffs = []
	hdens = []
	hnums = []
	npars = 4
	Upperlimits = [0 for x in range(npars)]
        color = [ROOT.kBlue, ROOT.kRed, ROOT.kMagenta+2, ROOT.kGreen+2,ROOT.kCyan+2]
        maker = [20,21,22,23,33]
	print "filedirs ",filedirs
	
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
	for n in range(len(filedirs)):
	    	print "n ",n
		hden = ROOT.TH1F("hden%d"%n,"hden%d"%n,len(ptbins)-1, ptbins)
		hnum = ROOT.TH1F("hnum%d"%n,"hnum%d"%n,len(ptbins)-1, ptbins)
		for i in range(len(ptbins)):
			hden.SetBinContent(i, 0)
			hnum.SetBinContent(i,.0)
		#Teffs.append(ROOT.TEfficiency(hnum, hden))
		hdens.append(hden)
		hnums.append(hnum)
		filedir = filedirs[n]
    		chain = ROOT.TChain(treename0)
#		treename2 = "HLTBendingAngle/trk_eff_csc_ME21" 
   		chain2 = ROOT.TChain("GEMCSCAnalyzer/trk_eff_CSC_ME1%d"%ring)
   		chain3 = ROOT.TChain("GEMCSCAnalyzer/trk_eff_CSC_ME2%d"%ring)
   		chain4 = ROOT.TChain("GEMCSCAnalyzer/trk_eff_CSC_ME3%d"%ring)
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
				chain2.Add(x)
				chain3.Add(x)
				chain4.Add(x)
    		elif os.path.isfile(filedir):
			chain.Add(filedir)
			chain2.Add(filedir)
			chain3.Add(filedir)
			chain4.Add(filedir)
    		else:
	  		print " it is not file or dir ", filedir
		#chain.AddFriend(chain2)
		chain.AddFriend(chain3)
		#chain.AddFriend(chain4)
		hdens[n].Add(gethist1D(chain, den[n],todraw))
		hnums[n].Add(gethist1D(chain, den[n]+" && %s"%(num[n]), todraw))
		print " den cut ",den[n]," num cut ", den[n]+" && %s"%(num[n])


	c1 = ROOT.TCanvas()
	c1.SetGridx()
	c1.SetGridy()
	c1.SetTickx()
	c1.SetTicky()

	b1.SetStats(0)
	b1.Draw()
	for n in range(len(filedirs)):
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
	b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 0 PU")
	
	
	c1 = ROOT.TCanvas()
	c1.SetGridx()
	c1.SetGridy()
	c1.SetTickx()
	c1.SetTicky()

        color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
        maker = [20,21,22,23,33]
	dy_leg = 0.1*len(Teffs)
	
	legend = ROOT.TLegend(0.45,0.2,0.9,0.2+dy_leg)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	legend.SetTextSize(.05)
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
	tex.SetTextSize(0.05)
	tex.SetTextFont(62)
	tex.SetNDC()
	tex.Draw("same")
	#c1.Update()
	c1.SaveAs("%s.png"%(picname))
	c1.SaveAs("%s.pdf"%(picname))
	c1.SaveAs("%s.C"%(picname))

##############################################################3


treename = "GEMCSCAnalyzer/trk_eff_CSC_ALL"
#filedir16 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt2_50_1M/GEMCSCAna_ctau0_Pt2_50_20170131/170201_015620/0000/combined/out_ana_prompt.root"
filedir16 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt2_50_1M/GEMCSCAna_ctau0_Pt2_50_20170131/170218_213142/0000/"
#filedir46 = "/eos/uscms/store/user/tahuang/DarkSUSY_MH-125_MGammaD-20000_ctau100_14TeV_madgraph-pythia6-tauola/GEMCSCAna_DarkSUSY_ctau100_20170131/170201_015408/0000/combined/out_ana_displaced.root"
#filedir46 = "/eos/uscms/store/user/tahuang/DispalcedMuonGun_1M_FlatPt1_50_FlatDxy0_50CM_GEN_SIM_CMSSW620SLHC_v3/GEMCSCAna_DisplacedMuonGun/170219_042523/0000/"
filedir46 = "/eos/uscms/store/user/tahuang/DispalcedMuonGun_1M_FlatPt1_50_FlatDxy0_50CM_GEN_SIM_CMSSW620SLHC_v3/GEMCSCAna_DisplacedMuonGun/170219_224752/0000/"

binLow = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,12.0,14.0,16.0,18.0,20.0,24.0,28.0,32.0,36.0,42.0,50.0]
ptbins = np.asarray(binLow)
evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
netas = [1.2,1.4,1.6,1.8,2.0,2.2]
netas = [1.6,1.8,2.0,2.2]
allnpar = [0,1,2,3]
Pts = [10]
Pts_1 = [5,7]
filedirs_v6 = [filedir16, filedir46]
Teff_out = ROOT.TFile("Teff_out.root","RECREATE")
if len(sys.argv)>=4:
    #take dir name from arguments, condor mode
    pt1 = int(sys.argv[1])
    outputdir1 = sys.argv[2]
    outputdir2 = sys.argv[3]
    #outputdir1 = "Profile_Ellipse_PT_0929_Pt%d_BGPt%d/"%(pt1,pt2)
    #outputdir2 = "Hybrid_Ellipse_PT_0929_Pt%d_BGPt%d/"%(pt1,pt2)
    filedirs_v6 = ["out_ana_prompt.root","out_ana_displaced.root"]
    #if outputdir1[-1] != "/":
    #	outputdir1 = outputdir1+"/"
    #if outputdir2[-1] != "/":
    #	outputdir2 = outputdir2+"/"
else:
    pt1 = 10
    fraction = 95
    outputdir1 = "Profile_Ellipse_PT_20170219_00_eta18to20_Effonly/"
    outputdir2 = "Hybrid_Ellipse_PT_20170219_00_eta18to20_Effonly/"
LUT = open("HybridLUT_Pt%d_20170131.log"%(pt1),"w+")
LUT_d = open("DirectionLUT_Pt%d_20170131.log"%(pt1),"w+")
LUT_p = open("PositionLUT_Pt%d_20170131.log"%(pt1),"w+")
#for npt in range(len(Pts)):	
def plotalleta(pt, pt1, netas, fraction1 = 90, fraction=95, fraction_d = 99, yaxis = "(csc_bending_angle12_xfactor_L1_2)",ME21CSConly=False):
    Teffs_0 = []
    Teffs_0_p = []
    Teffs_0_d = []
    Teffs_1 = []
    extrapic=""
    extratxt=""
    #fraction_d = 99
    GE21string= "withGE21"
    hybridpt = "hybrid_pt"
    directionpt = "direction_ge21_pt"
    positionpt = "position_pt"
    if ME21CSConly:
    	extrapic = "_ME21CSConly"
        extratxt = ", ME21 CSC only"
	GE21string = "NoGE21"
	hybridpt = "hybrid_noge21_pt"
	directionpt = "direction_noge21_pt"
    legs3 = ["Position-based algorithm","Stub alignment algorithm","Hybrid algorithm"]

    ratesample = "Ratehist.root"
    ratefile = TFile(ratesample)
    h_total = ratefile.Get("h_eventcount")
    rateEvents = h_total.GetEntries()

    for neta in range(len(netas)-1):
       if (netas[neta]<0 or netas[neta+1]<0):
	    continue
       Teffallnpars = []
       Teffallnpars_p = []
       Teffallnpars_d = []
       legs = ["Prompt muon", "#splitline{Displaced muon}{10<|d_{xy}|<50 cm}"]
       #pt = Pts[npt]
       #pt1 = Pts_1[npt]
       for npar in allnpar:
		if (netas[neta]<1.6):
    			ring = 2
		if (netas[neta]>=1.6):
    			ring = 1
		me11 = evenodds[npar].split(',')[0]
		me21 = evenodds[npar].split(',')[1]
		chambers = "ME1%d %s,ME2%d %s,ME3%d %s"%(ring, me11, ring, me21, ring, me21)
    		#deltay12 = "deltay12_fit"
    		#deltay23 = "deltay23_fit"
    		#checksign = " && (%s*%s>0 || (fabs(%s)<6 && fabs(%s)<3))"%(deltay12, deltay23, deltay12, deltay23)
		#deltay12 = ["deltay12_fit","deltay12_fit"]
		#deltay23 = ["deltay23_fit","deltay23_fit"]
		deltay12 = ["deltay12_test","deltay12_test"]
		deltay23 = ["deltay23_test","deltay23_test"]
		#st_title = ["Prompt muon, 2<p_{T}<%d"%pt1, "Displaced Muon, 10<|d_{xy}|<50, p_{T}>%d"%pt]
		st_title = ["Rate sample", "Displaced Muon, 10<|d_{xy}|<50, p_{T}>%d"%pt]
		etamin = netas[neta]
		etamax = netas[neta+1]
    		h_rate_string = "h_displacedMu_dPhi_ddY_%s_eta%dto%d_npar%d"%(GE21string, int(etamin*10), int(etamax*10),npar)
		h_rate = ratefile.Get(h_rate_string)
		xaxis = "(deltay123_test)"
		etacuts ="&& meRing==%d"%ring+"&& fabs(trk_eff_CSC_ME2%d.eta_lct_%s)>%f && fabs(trk_eff_CSC_ME2%d.eta_lct_%s)<%f"%(ring,me21,netas[neta],ring,me21,netas[neta+1])
		#yaxis = "(csc_bending_angle12_xfactor_L1_1)"#deltaphi
		#yaxis = "(csc_bending_angle12_xfactor_L1_2)"#deltaphi, only in high eta region, CSC only
    		#checkvalue = " && fabs(%s)<%f && fabs(%s)<%f && fabs(%s)>0 && fabs(%s)>0 && meRing==%d"%(xaxis, 30., yaxis, .8, xaxis, yaxis,ring)
    		checkvalue = "&& fabs(deltay23_test)<50 && fabs(deltay12_test)<50 && fabs(%s)>0 && fabs(%s)>0 && meRing==%d"%(xaxis, yaxis,ring)
    		#checkvalue = " &&fabs(phiM_st1_L1_1)>0 && fabs(phiM_st2_L1_1)>0 && fabs(deltay23_fit)>0 && fabs(deltay12_fit)>0 && fabs(%s)<%f && fabs(%s)<%f && fabs(%s)>0 && fabs(%s)>0"%(xaxis, 30., yaxis, .6, xaxis, yaxis)
		#checkx = "&& fabs(%s)<40 && fabs(%s)>0 && fabs(deltay23_fit)<50 && fabs(deltay12_fit)<50 &&  fabs(deltay23_fit)>0 && fabs(deltay12_fit)>0"%(xaxis, xaxis)
		checkx = "&& fabs(%s)<60 && fabs(%s)>0 "%(xaxis, xaxis)
		checky = "&& fabs(%s)<1.0 && fabs(%s)>0 "%(yaxis, yaxis)
		cutsbase =  ["has_tfTrack && meRing==%d && "%ring+"hasSt1St2St3 && fabs(eta_st2_L1)>%f && fabs(eta_st2_L1)<%f && npar_L1==%d"%(netas[neta],netas[neta+1], npar), "has_tfTrack && meRing==%d && "%ring+"hasSt1St2St3 && fabs(eta_st2_L1)>%f && fabs(eta_st2_L1)<%f && fabs(genGdMu_dxy)>10 && fabs(genGdMu_dxy)<50 && fabs(genGdMu_dR)<0.1 && npar_L1==%d"%(netas[neta],netas[neta+1], npar)]
		cuts = [cutsbase[0]+" && pt>=2 && pt<%f"%(pt1), cutsbase[1]+"&& pt>=%f"%(pt)]
		cuts_p =  [cutsbase[0]+checkx, cutsbase[1]+checkx]
		cuts_d =  [cutsbase[0]+checky, cutsbase[1]+checky]
		#cuts_d =  ["meRing==%d && "%ring+"hasSt1St2St3 && fabs(deltay12_fit)<50 &&  fabs(deltay23_fit)<50 && fabs(eta_st2_sh)>%f && fabs(eta_st2_sh)<%f && npar==%d"%(netas[neta],netas[neta+1], npar)+checky, "meRing==%d && "%ring+" hasSt1St2St3 && fabs(deltay12_fit)<50 &&  fabs(deltay23_fit)<50 && fabs(eta_st2_sh)>%f && fabs(eta_st2_sh)<%f && fabs(genGdMu_dxy)>10 && fabs(genGdMu_dxy)<50 && fabs(genGdMu_dR)<0.1 && npar==%d"%(netas[neta],netas[neta+1], npar)+checky]
		#x_bins = "(200, -30, 30.0)"
	#	y_bins = "(160, -.8,.8)"
		x_bins = "(400, -40, 40.0)"
		y_bins = "(200, -1., 1.0)"
		xtitle = "#Delta#Delta Y"
		ytitle = "#Delta#phi_{dir}"

	        text = "#splitline{%s}{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}"%(chambers, netas[neta],netas[neta+1],pt, extratxt)
		text_position = "#splitline{%s}{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV}"%(chambers,netas[neta],netas[neta+1],pt)
		extra_comma = ","
		if npar==3:
			extra_comma = ""

		nEvent_list = []
		#nEvent_list.append(rateEvents)
		#nEvent_list.append(h_rate.GetEntries())
    		
		Teffs_ddY = makeEffplot_v2(filedirs_v6, "pt", treename, cuts_p, [positionpt+">=%f"%pt, positionpt+">=%f"%pt], netas[neta], netas[neta+1],"true muon p_{T} GeV","Trigger efficiency",legs,"Position-based algo" ,text_position,outputdir2+"GEMCSC_ctau0andctau1000_position_eff_20170131_pt%d_fraction%d_st2eta%dto%d_npar%d%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar, extrapic))
		Teffs_dphi_dir = makeEffplot_v2(filedirs_v6, "pt", treename, cuts_d, [directionpt+">=%f"%pt, directionpt+">=%f"%pt], netas[neta], netas[neta+1],"true muon p_{T} GeV","Trigger efficiency",legs,"Stub alignment algo",text,outputdir2+"GEMCSC_ctau0andctau1000_direction_eff_20170131_pt%d_fraction%d_st2eta%dto%d_npar%d%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar, extrapic))
		Teffs = makeEffplot_v2(filedirs_v6, "pt", treename, [cutsbase[0]+checkx+checky,cutsbase[1]+checkx+checky], [hybridpt+">=%f"%pt, hybridpt+">=%f"%pt], netas[neta], netas[neta+1],"true muon p_{T} GeV","Trigger efficiency",legs,"Hybrid algo",text,outputdir2+"GEMCSC_ctau0andctau1000_hybrid_eff_20170131_pt%d_ptbg%d_fraction%d_st2eta%dto%d_npar%d%s"%(pt, pt1, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar, extrapic))
       		makeplots([Teffs_ddY[0], Teffs_dphi_dir[0], Teffs[0]], legs3, text,outputdir2+"GEMCSC_ctau0andctau1000_combined3_eff_20170131_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_npar%d_dirinterstation%s"%(pt, pt1, fraction, fraction_d, int(netas[neta]*10),int(netas[neta+1]*10), npar, extrapic)) 
		Teffallnpars.append(Teffs)
		Teffallnpars_p.append(Teffs_ddY)
		Teffallnpars_d.append(Teffs_dphi_dir)
       #print "Teffallnpars len ",len(Teffallnpars),Teffallnpars
       Teff0 = Teffallnpars[0][0]
       Teff1 = Teffallnpars[0][1]
       Teff0_d = Teffallnpars_d[0][0]
       Teff1_d = Teffallnpars_d[0][1]
       Teff0_p = Teffallnpars_p[0][0]
       Teff1_p = Teffallnpars_p[0][1]
       for xpar in range(len(Teffallnpars)-1):
   	Teff0.Add(Teffallnpars[xpar+1][0])		   
   	Teff1.Add(Teffallnpars[xpar+1][1])		   
   	Teff0_d.Add(Teffallnpars_d[xpar+1][0])		   
   	Teff1_d.Add(Teffallnpars_d[xpar+1][1])		   
   	Teff0_p.Add(Teffallnpars_p[xpar+1][0])		   
   	Teff1_p.Add(Teffallnpars_p[xpar+1][1])		   
       Teff0.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"promptmuonpt%dptbg%d"%(pt,pt1))
       Teff1.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"displacedmuonpt%dptbg%d"%(pt,pt1))
       Teff0_d.SetName("directioneta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"promptmuonpt%dptbg%d"%(pt,pt1))
       Teff1_d.SetName("directioneta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"displacedmuonpt%dptbg%d"%(pt,pt1))
       Teff0_p.SetName("positioneta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"promptmuonpt%dptbg%d"%(pt,pt1))
       Teff1_p.SetName("positioneta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"displacedmuonpt%dptbg%d"%(pt,pt1))
       text_h = "#splitline{Hybrid algorithm}{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}"%(netas[neta],netas[neta+1], pt, extratxt)
       text_p = "#splitline{Position-based algorithm}{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}"%(netas[neta],netas[neta+1], pt, extratxt)
       text_d = "#splitline{Stub alignment algorithm}{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}"%(netas[neta],netas[neta+1], pt, extratxt)
       makeplots([Teff0, Teff1], legs, text_h,outputdir2+"GEMCSC_ctau0andctau1000_hybrid_eff_20170131_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, pt1, fraction, fraction_d, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       makeplots([Teff0_d, Teff1_d], legs, text_d,outputdir2+"GEMCSC_ctau0andctau1000_direction_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       makeplots([Teff0_p, Teff1_p], legs, text_p,outputdir2+"GEMCSC_ctau0andctau1000_position_eff_20170131_pt%d_fraction%d_St2eta%dto%d_allnpar%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       text3 = "#splitline{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}{Prompt muon}"%(netas[neta],netas[neta+1], pt, extratxt)
       makeplots([Teff0_p, Teff0_d, Teff0], legs3, text3,outputdir2+"GEMCSC_ctau0andctau1000_combined3_eff_20170131_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, pt1, fraction, fraction_d, int(netas[neta]*10),int(netas[neta+1]*10), extrapic)) 
       """
       Teff_out.Reopen("Update")
       Teff0.Write(Teff_out)
       Teff1.Write(Teff_out)
       Teff_out.Close()
       """
       Teffs_0.append(Teff0)
       Teffs_0_p.append(Teff0_p)
       Teffs_0_d.append(Teff0_d)
       Teffs_1.append(Teff1)
    Teffs0_alleta = Teffs_0[0] 
    Teffs0_alleta_p = Teffs_0_p[0] 
    Teffs0_alleta_d = Teffs_0_d[0] 
    Teffs1_alleta = Teffs_1[0] 
    for xeta in range(len(Teffs_0)-1):
       Teffs0_alleta.Add(Teffs_0[xeta+1])	 
       Teffs0_alleta_p.Add(Teffs_0_p[xeta+1])	 
       Teffs0_alleta_d.Add(Teffs_0_d[xeta+1])	 
       Teffs1_alleta.Add(Teffs_1[xeta+1])	 
    Teffs0_alleta.SetName("hybrideta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"promptmuonpt%dptbg%d"%(pt,pt1))
    Teffs0_alleta_p.SetName("positioneta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"promptmuonpt%d"%(pt))
    Teffs0_alleta_d.SetName("directioneta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"promptmuonpt%d"%(pt))
    Teffs1_alleta.SetName("hybrideta%dto%d"%(int(netas[0]*10),int(netas[-1]*10))+"displacedmuonpt%dptbg%d"%(pt,pt1))
    text_alleta = "#splitline{Hybrid algorithm}{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}"%(netas[0],netas[-1], pt, extratxt)
    text_alleta_3 = "#splitline{%.1f<|#eta|<%.1f, p_{T}^{L1}>%d GeV%s}{Prompt muon}"%(netas[0],netas[-1], pt, extratxt)
    makeplots([Teffs0_alleta, Teffs1_alleta], legs, text_alleta,outputdir2+"GEMCSC_ctau0andctau1000_hybrid_eff_20170131_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, pt1, fraction,fraction_d, int(netas[0]*10),int(netas[-1]*10), extrapic)) 
    makeplots([Teffs0_alleta_p, Teffs0_alleta_d, Teffs0_alleta], legs3, text_alleta_3,outputdir2+"GEMCSC_ctau0andctau1000_combined3_eff_20170131_pt%d_ptbg%d_fraction%d_fractiond%d_St2eta%dto%d_allnpar_dirinterstation%s"%(pt, pt1, fraction,fraction_d, int(netas[0]*10),int(netas[-1]*10), extrapic)) 
    """
    Teff_out.Reopen("Update")
    Teffs0_alleta.Write(Teff_out)
    Teffs1_alleta.Write(Teff_out)
    Teff_out.Close()
    """
print "outputdir1 ",outputdir1," outputdir2 ",outputdir2
if not os.path.exists(outputdir1):
        os.makedirs(outputdir1)
if not os.path.exists(outputdir2):
        os.makedirs(outputdir2)
pt2 = 0
#plotalleta(pt1,pt2, [1.6,1.8,2.0,2.2,2.4],90, 95, 99, "(dphi_dir_st1_st2_L1_csc)",True)
#plotalleta(pt1,pt2, [1.6,1.8,2.0,2.2],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)
#plotalleta(pt1,pt2, [1.6, 1.8],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)
plotalleta(pt1,pt2, [1.8, 2.0, 2.15],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)
#plotalleta(pt1,pt2, [2.0,2.2],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)
#plotalleta(pt1,pt2, [1.6, 1.8, 2.0, 2.2],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)
#plotalleta(pt1,pt2, [1.6, 1.8],90, 95, 99, "(dphi_dir_st1_st2_L1_csc)", True)
#plotalleta(pt1,pt2, [1.8,2.0,2.15],90, 95, 99, "(dphi_dir_st1_st2_L1_csc)", True)
#plotalleta(pt1,pt2, [2.0,2.2],90, 95, 99, "(dphi_dir_st1_st2_L1_csc)", True)
#plotalleta(pt1,pt2, [1.6,1.8,2.0,2.2],90, 95, 99, "(dphi_dir_st1_st2_L1_csc)", True)

#plotalleta(pt1,pt2, [1.2,1.4,1.6,1.8,2.0,2.2],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)


#plotalleta(3,3, [1.2,1.4,1.6],95,"(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(3,3, [1.6,1.8,2.0,2.2],95,"(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(3,3, [1.6,1.8,2.0,2.2],95,"(csc_bending_angle12_xfactor_L1_1)",True)
