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

#color = [ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta+2,ROOT.kCyan+2]
color = [ROOT.kBlue, ROOT.kRed, ROOT.kMagenta+2, ROOT.kGreen+2,ROOT.kCyan+2]
maker = [20,21,22,23,33]
SF = 30.000/284.900
pu=140
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
	    if line.startswith("%seta%dto%dpt%dfraction%d"%(algo, int(etamin*10), int(etamax*10),pt, fraction)):
		startread[ialgo] = True
		continue
	    if startread[ialgo] and line=="}\n":
		endread[ialgo] = True
		continue
	    if line=="{\n":
		continue
	    #evenodds = ["odd,even","odd,odd","even,even","even,odd","all pairs"]
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
		    for ipara in range(0,5):
			algos_lut[algo].append(float(allnums[ipara]))
		    endread[ialgo] = True
		elif algo=="Hybrid":
		    inpar += 1
	  
    #print "all lut for pt ",pt," fraction ",fraction, " etamin ", etamin, " etamax ",etamax, " npar ",npar
    #for key in algos_lut:
	#	print "algo ",key, " value ",algos_lut[key]
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
    return xcut

def getTefficiency(ch, todraw, dencut, numcut, nbins, xmin, xmax):
    hden = TH1F("hden","hden",nbins, xmin, xmax)
    hnum = TH1F("hnum","hnum",nbins, xmin, xmax)
    ch.Draw(todraw+">>hden", dencut)
    ch.Draw(todraw+">>hnum", numcut)
    Teff = TEfficiency(hnum, hden)
    SetOwnership(Teff, False)
    return Teff

def getOverallEff(Teff, xinit):
    hden = Teff.GetCopyTotalHisto()
    hnum = Teff.GetCopyPassedHisto()
    nbins = hden.GetXaxis().GetNbins()
    xbin = hden.FindBin(xinit)
    den = hden.Integral(xbin, nbins)
    num = hnum.Integral(xbin, nbins)
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

    
    #c.SaveAs(picname+ "_ellipse.pdf")
    c.SaveAs(picname+ "_ellipse.png")

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
	
    b1 = ROOT.TH1F("b1","b1",len(ptbins)-1, ptbins)
    b1.GetYaxis().SetRangeUser(0.00,1.05)
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
    #muons = ["Prompt Muons","Displaced Muons, 5<|d_{xy}|<50cm"]
    muons = ["Prompt Muons","Prompt Muons"]
    for n in range(len(chainlist)):
	#if n>=1:
	#    continue
	print "n ",n
	chain = chainlist[n]
	hden = ROOT.TH1F("hden%d"%n,"hden%d"%n,len(ptbins)-1, ptbins)
	hnum = ROOT.TH1F("hnum%d"%n,"hnum%d"%n,len(ptbins)-1, ptbins)
	for i in range(len(ptbins)):
		hden.SetBinContent(i, 0)
		hnum.SetBinContent(i,.0)
	#Teffs.append(ROOT.TEfficiency(hnum, hden))
	hdens.append(hden)
	hnums.append(hnum)
	hdens[n].Add(gethist1D(chain, den[n],todraw))
	hnums[n].Add(gethist1D(chain, den[n]+" && %s"%(num[n]), todraw))
	print " den cut ",den[n]," entries ", hdens[n].GetEntries()," num cut ", den[n]+" && %s"%(num[n])," entries ",hnums[n].GetEntries()


    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()

    b1.SetStats(0)
    b1.Draw()
    for n in range(len(chainlist)):
	#if n>=1:
	#    continue
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
    b1.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 140 PU")
    
    
    c1 = ROOT.TCanvas()
    c1.SetGridx()
    c1.SetGridy()
    c1.SetTickx()
    c1.SetTicky()

    dy_leg = 0.06*len(Teffs)
    
    legend = ROOT.TLegend(0.4,0.2,0.9,0.2+dy_leg)
    legend.SetFillColor(ROOT.kWhite)
    legend.SetTextFont(42)
    #legend.SetTextSize(.04)
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

    tex = ROOT.TLatex(0.4,0.6,"%s"%text)
    tex.SetTextSize(0.05)
    tex.SetTextFont(62)
    tex.SetNDC()
    tex.Draw("same")
    #c1.Update()
    c1.SaveAs("%s.png"%(picname))
    c1.SaveAs("%s.pdf"%(picname))
    c1.SaveAs("%s.C"%(picname))

def getRateVsEta(L1MuTriggerRate, histname, myetabin, cut):
    hist = TH1F(histname, histname, len(myetabin)-1, myetabin)
    L1MuTriggerRate.Draw("abs(L1Mu_eta)>>"+histname, cut)
    hist.GetXaxis().SetTitle("L1Mu |#eta|")
    hist.GetYaxis().SetTitle("Trigger Rate [kHz]")
    SetOwnership(hist, False)
    return hist

##############################################################3


treename = "GEMCSCAnalyzer/trk_eff_CSC_ALL"
filedir16 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt2_50_1M/GEMCSC_Ana_ctau0_Pt2_50_PU140_20170314/170315_023223/0000/combined/out_ana_prompt.root"
#filedir46 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt10_100k/GEMCSC_Ana_ctau0_Pt10_PU0_20170222/170222_173137/0000/combined/out_ana_fixedpt.root"
#filedir16 = "out_ana_prompt_pu140_1M_20170314.root"
filedir46 = "/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt7_100k/GEMCSC_Ana_ctau0_Pt7_PU0_20170303/170303_233949/0000/combined/out_ana_fixedpt.root"

#binLow = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,12.0,14.0,16.0,18.0,20.0,24.0,28.0,32.0,36.0,42.0,50.0]
binLow = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,12.0,14.0,16.0,18.0,20.0,24.0,28.0,32.0,36.0,42.0,50.0]
binLow = [x*1.0 for x in range(0,51)]
ptbins = np.asarray(binLow)
etabin = [1.0, 1.2, 1.3,  1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95,
      2.0, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5]
myetabin = np.asarray(etabin)
ptbin = [
	#1, 2.0,   2.5,  
      3.0, 3.5,   4.0,   4.5,   5.0,   6.0,   7.0,   8.0,
      10.0,  12.0,  14.0,  16.0,  18.0,  20.0,  25.0,  30.0,  35.0,  40.0,
      45.0,  50.0]#  60.0,  70.0,  80.0,  90.0, 100.0, 120.0, 140.0]
rateptbin = [5.0, 6.0, 7.0,8.0, 10.0, 12.0, 14.0, 16.0, 20.0, 25.0, 30.0, 35.0]
myptbin = np.asarray(ptbin)
myrateptbin = np.asarray(rateptbin)
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
	outputdir1 = "Profile_Ellipse_GEMCSC_20170315_00_local_badGE11/"
	outputdir2 = "Hybrid_Ellipse_GEMCSC_20170315_00_local_badGE11/"

#pt1 = 10
#pt2 = 7
#allLUTfile = "finalLUT_20170312.log"
allLUTfile = "finalLUT_20170314_all.log"
#LUT = open("GEMCSCBendinghybridLUT_Pt%d_fraction%d.log"%(pt, fraction),"w+")
#LUT_nEvent = open("EventNum_Pt%d_fraction%d.log"%(pt, fraction),"w+")
LUT_st1 = open("GEMCSCBendingGE11LUT_alltest.log","w+")
LUT_st2 = open("GEMCSCBendingGE21LUT_alltest.log","w+")
#for npt in range(len(Pts)):	
def plotalleta(pt, pt1, netas, fraction, outputrootfile, badGE11bending=0):
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
    
    ratesample = "RateTree.root"
    ratefile = TFile(ratesample)
    h_total = ratefile.Get("h_eventcount")
    rateEvents = h_total.GetEntries()
    L1MuTriggerRate = TChain("L1MuTriggerRate")
    addFilesToChain(L1MuTriggerRate, ratesample)

    GEMCSCTrackCh0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    GEMCSCME11Ch0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME11")
    GEMCSCME21Ch0 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME21")
    GEMCSCTrackCh1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ALL")
    GEMCSCME11Ch1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME11")
    GEMCSCME21Ch1 = TChain("GEMCSCAnalyzer/trk_eff_CSC_ME21")
    addFilesToChain(GEMCSCTrackCh0, filedirs_v6[0]) 
    addFilesToChain(GEMCSCME11Ch0, filedirs_v6[0]) 
    addFilesToChain(GEMCSCME21Ch0, filedirs_v6[0]) 
    #addFilesToChain(GEMCSCTrackCh1, filedirs_v6[1]) 
    #addFilesToChain(GEMCSCME11Ch1, filedirs_v6[1]) 
    #addFilesToChain(GEMCSCME21Ch1, filedirs_v6[1]) 
    GEMCSCTrackCh0.AddFriend(GEMCSCME11Ch0)
    GEMCSCTrackCh0.AddFriend(GEMCSCME21Ch0)
    GEMCSCTrackCh1.AddFriend(GEMCSCME11Ch1)
    GEMCSCTrackCh1.AddFriend(GEMCSCME21Ch1)

    Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
    GE11Cuts = []
    GE21Cuts = []
    rate_x = "gemdphi_st1"
    rate_y = "gemdphi_st2"
    legs = ["prompt muon","prompt muon with fixed pt"]
    efflist = []
    ratelist = []
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
       etacuts = "fabs(L1Mu_eta)>%f && fabs(L1Mu_eta)<%f"%(netas[neta], netas[neta+1])
       ring = 1
       #LUT.write("{\n")
       #LUT_nEvent.write("{\n")
       LUT_st1.write("{\n")
       LUT_st2.write("{\n")
       basesignalcut = etacuts + "&& has_tfTrack>0 && has_gmtCand>0 && L1Mu_quality>=4 && nstubs>=2 && meRing==%d "%(ring)
       
       nevenodd = 1
       for evenodd in ["odd","even"]:
	    if fraction==100:
		xcut = 100
		ycut = 100
	    else:
		algos_lut = getFinalLUTValue(pt, fraction, etamin, etamax, nevenodd, allLUTfile)
		xcut = algos_lut["GE11"]
		ycut = algos_lut["GE21"]
		#xaxis = "trk_eff_CSC_ME11.dphi_2strippad_fit_%s"%(evenodd)
		#yaxis = "trk_eff_CSC_ME21.dphi_2strippad_fit_%s"%(evenodd)
		#xcut = getCut(GEMCSCTrackCh0, xaxis, basesignalcut+"&& fabs(%s)<1"%(xaxis)+" && L1Mu_pt>=%f && pt>=%f"%(pt, pt), 0.0, 0.05, 0.0001, fraction)
		#ycut = getCut(GEMCSCTrackCh0, yaxis, basesignalcut+"&& fabs(%s)<1"%(yaxis)+" && L1Mu_pt>=%f && pt>=%f"%(pt, pt), 0.0, 0.05, 0.0001, fraction)
	    print " xcut ",xcut, " ycut ",ycut
	    nevenodd += 1
	    LUT_st1.write("%f"%xcut)
	    LUT_st2.write("%f"%ycut)
	    if evenodd == "odd":
		LUT_st1.write(",")
		LUT_st2.write(",")
	    GE11Cuts[neta].append(xcut)
	    GE21Cuts[neta].append(ycut)
		    
       LUT_st1.write("\n},\n")
       LUT_st2.write("\n},\n")
       text1 = "%.2f<|#eta|<%.2f, p_{T}^{L1}>%d GeV"%(netas[neta],netas[neta+1], pt)
       baseratecut = "maxPromptPt && abs(L1Mu_eta)>%f && abs(L1Mu_eta)<%f && L1Mu_quality>=4 && L1Mu_pt>=%f"%(etamin, etamax, pt)
       GE11bendingCut = "L1Mu_pt>=%f && (abs(trk_eff_CSC_ME11.dphi_2strippad_fit_odd)<%f || abs(trk_eff_CSC_ME11.dphi_2strippad_fit_even)<%f)"%(pt, GE11Cuts[neta][0], GE11Cuts[neta][1])
       GE11bendingCut_bad = "L1Mu_pt>=%f && (((abs(trk_eff_CSC_ME11.dphi_2strippad_fit_odd)<%f || abs(trk_eff_CSC_ME11.dphi_2strippad_fit_even)<%f)"%(pt, GE11Cuts[neta][0], GE11Cuts[neta][1])+"&& rand01_v1>%f) || (rand01_v1<%f && trk_eff_CSC_ME11.has_gem_pad>0))"%(badeff, badeff)
       GE21bendingCut = "L1Mu_pt>=%f && (abs(trk_eff_CSC_ME21.dphi_2strippad_fit_odd)<%f || abs(trk_eff_CSC_ME21.dphi_2strippad_fit_even)<%f)"%(pt, GE11Cuts[neta][0], GE11Cuts[neta][1])

       GE11bendingRateCut = "hasME1 && ((CSCTF_ch1%%2==1 && abs(%s)<%f) || (CSCTF_ch1%%2==0 && abs(%s)<%f))"%(rate_x, GE11Cuts[neta][0], rate_x, GE11Cuts[neta][1])
       GE11bendingRateCut_bad = "((hasME1 && ((CSCTF_ch1%%2==1 && abs(%s)<%f) || (CSCTF_ch1%%2==0 && abs(%s)<%f))"%(rate_x, GE11Cuts[neta][0], rate_x, GE11Cuts[neta][1])+"&& RandFloat01>%f) || (RandFloat01<%f))"%(badeff, badeff)
       GE21bendingRateCut = "hasME2 && ((CSCTF_ch2%%2==1 && abs(%s)<%f) || (CSCTF_ch2%%2==0 && abs(%s)<%f))"%(rate_y, GE21Cuts[neta][0], rate_y, GE21Cuts[neta][1])
       Teffs_cutx = makeEffplot_v2([GEMCSCTrackCh0], "pt",[basesignalcut+"&& trk_eff_CSC_ME11.has_csc_sh>0 && trk_eff_CSC_ME11.has_gem_sh>0"],[GE11bendingCut], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11" ,text1,outputdir2+"GEMCSC_St1_GE11cut_eff_20170208_pt%d_fraction%d_st2eta%dto%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       Teffs_cutx_badeff = makeEffplot_v2([GEMCSCTrackCh0], "pt",[basesignalcut+"&& trk_eff_CSC_ME11.has_csc_sh>0 && trk_eff_CSC_ME11.has_gem_sh>0"],[GE11bendingCut_bad], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11" ,text1,outputdir2+"GEMCSC_St1_GE11cut_eff_20170208_pt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       Teffs_cuty = makeEffplot_v2([GEMCSCTrackCh0], "pt",[basesignalcut+"&& trk_eff_CSC_ME21.has_csc_sh>0 && trk_eff_CSC_ME21.has_gem_sh>0"], [GE21bendingCut], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE21-ME21" ,text1,outputdir2+"GEMCSC_St2_GE21cut_eff_20170208_pt%d_fraction%d_st2eta%dto%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       ratehist_st1 = getRateVsEta(L1MuTriggerRate, "ratehist_GE11_eta%dto%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt), myetabin, baseratecut + "&&" +GE11bendingRateCut)
       ratehist_st1_bad = getRateVsEta(L1MuTriggerRate, "ratehist_GE11_eta%dto%d_frac%d_pt%d_badGE11frac%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt, badGE11bending), myetabin, baseratecut + "&&" +GE11bendingRateCut_bad)
       ratehist_st2 = getRateVsEta(L1MuTriggerRate, "ratehist_GE21_eta%dto%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt), myetabin, baseratecut + "&& "+GE21bendingRateCut)
       print "ratehist_st1_bad : ",baseratecut + "&&" +GE11bendingRateCut_bad," bad entries ",ratehist_st1_bad.GetEntries()," normal entries ", ratehist_st1.GetEntries()
       #Teffs_cutx[0].SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%d"%(pt)+"fraction%d"%fraction)
       #Teffs_cuty[0].SetName("GE21eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%d"%(pt)+"fraction%d"%fraction)
       #Teffs_cutx[0].Write()
       #Teffs_cuty[0].Write()
       Teffallnpars_ME11.append(Teffs_cutx)
       Teffallnpars_ME21.append(Teffs_cuty)
       GE11Ratecut_h = "("+GE11bendingRateCut+"&& abs(%s)>1"%(rate_y)+ " && npar_bending<0)"
       GE11Ratecut_h_bad = "("+GE11bendingRateCut_bad+"&& abs(%s)>1"%(rate_y)+ "&& npar_bending<0)"
       GE21Ratecut_h = "("+GE21bendingRateCut+"&& abs(%s)>1"%(rate_x)+" && npar_bending<0)"
       GE21Ratecut_h_bad = "("+GE21bendingRateCut+"&& ((abs(%s)>1 && npar_bending<0) || RandFloat01<%f)"%(rate_x,badeff)+")"
       GE11SignalCut_h = "("+GE11bendingCut+"&& trk_eff_CSC_ME21.has_lct==0"+")"
       GE21SignalCut_h = "("+GE21bendingCut+"&& trk_eff_CSC_ME11.has_lct==0"+")"
       GE11SignalCut_h_bad = "("+GE11bendingCut+"&& trk_eff_CSC_ME21.has_lct==0 && rand01_v1>%f"%badeff+")"
       GE21SignalCut_h_bad = "("+GE21bendingCut+"&& (trk_eff_CSC_ME11.has_lct==0 || rand01_v1<%f)"%badeff+")"
       finalSignalCut_h = "("+GE11SignalCut_h+" || "+GE21SignalCut_h
       finalSignalCut_h_bad = "("+GE11SignalCut_h_bad+" || "+GE21SignalCut_h_bad
       ratehist_h_all = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt), myetabin, baseratecut + "&& npar_bending<0 && ("+GE11Ratecut_h+" || "+GE21Ratecut_h+")" )
       ratehist_h_all_bad = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_frac%d_pt%d_badGE11frac%d"%(int(netas[neta]*10),int(netas[neta+1]*10), fraction, pt, badGE11bending), myetabin, baseratecut + "&& ("+GE11Ratecut_h_bad+" || "+GE21Ratecut_h_bad+")" )
       print "badGE11 cut ", baseratecut + "&& ("+GE11Ratecut_h_bad+" || "+GE21Ratecut_h_bad+")"," bad entries ",ratehist_h_all_bad.GetEntries()," normal cut ", baseratecut + "&& ("+GE11Ratecut_h+" || "+GE21Ratecut_h+")"," normal entries ",ratehist_h_all.GetEntries()
       for npar in allnpar:
		me11 = evenodds[npar].split(',')[0]
		me21 = evenodds[npar].split(',')[1]
	        xaxis = "trk_eff_CSC_ME11.dphi_2strippad_fit_%s"%(me11)
	        yaxis = "trk_eff_CSC_ME21.dphi_2strippad_fit_%s"%(me21)
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
		ratecut = baseratecut+"&& npar_bending==%d"%npar
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
		ellipse = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)
		ellipse_bad = "((%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis1, xaxis1, maxa, maxa, yaxis1, yaxis1, maxb, maxb)+" && rand01_v1>%f)"%badeff
		combinedCut = "L1Mu_pt>=%f"%pt+" && ("+ellipse+" || "+"(abs(%s)<%f && abs(%s)>1)"%(xaxis,xcut,yaxis)+" || "+"(abs(%s)<%f && abs(%s)>1)"%(yaxis,ycut,xaxis)+")"
		finalSignalCut_h  = finalSignalCut_h+"|| "+ellipse
		finalSignalCut_h_bad  = finalSignalCut_h_bad+"|| "+ellipse_bad
		#Teffs = makeEffplot_v2([GEMCSCTrackCh0], "pt", [cutsbase[0], cutsbase[1]], [combinedCut, combinedCut], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 + GE21-ME21",text,outputdir2+"GEMCSC_St1St2_hybrid_eff_20170208_pt%d_ptbg%d_fraction%d_st2eta%dto%d_npar%d"%(pt, pt1, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar))
		legs3 = ["GE11-ME11","GE21-ME21","GE11-ME11+GE21-ME21"]
		#makeplots([Teffs_cutx[0], Teffs_cuty[0], Teffs[0]], legs3, text,outputdir2+"GEMCSC_St1St2_combined3_eff_20170208_pt%d_ptbg%d_fraction%d_St2eta%dto%d_npar%d"%(pt, pt1, fraction, int(netas[neta]*10),int(netas[neta+1]*10), npar)) 
		#LUT.write("eta%dto%dnpar%dfraction%d:(%f,%f,%f,%f,%f)\n"%(int(netas[neta]*10), int(netas[neta+1]*10), npar,fraction,maxa,maxb,alpha, x0, y0))		
		xaxis_rate = "(%s*TMath::Cos(%f)+%s*TMath::Sin(%f)-%f)"%(rate_x, alpha, rate_y, alpha, x0)
		yaxis_rate = "(%s*TMath::Sin(%f)-%s*TMath::Cos(%f)-%f)"%(rate_x, alpha, rate_y, alpha, y0)
		ellipse_rate = "(%s*%s/(%f*%f)+%s*%s/(%f*%f))<=1.0"%(xaxis_rate, xaxis_rate, maxa, maxa, yaxis_rate, yaxis_rate, maxb, maxb)
		#ratecut_ellipse = ratecut+"&& ("+ellipse_rate+" || (abs(%s)<=%f && abs(%s)>1) "%(rate_x, xcut, rate_y)+"|| (abs(%s)<=%f && abs(%s)>1))"%(rate_y, ycut, rate_x)
		ratecut_ellipse = "npar_bending==%d"%npar +"&& "+ellipse_rate
		ratecut_ellipse_bad = "npar_bending==%d"%npar +"&& "+ellipse_rate+" && RandFloat01>%f"%badeff
		ratehist_h = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d"%(int(netas[neta]*10),int(netas[neta+1]*10), npar, fraction, pt), myetabin, baseratecut+ "&& "+ ratecut_ellipse)
		ratehist_h_bad = getRateVsEta(L1MuTriggerRate, "ratehist_hybrid_eta%dto%d_npar%d_frac%d_pt%d_badGE11frac%d"%(int(netas[neta]*10),int(netas[neta+1]*10), npar, fraction, pt, badGE11bending), myetabin, baseratecut+ "&& "+ ratecut_ellipse_bad)
		#print "rate ge11 ",ratehist_st1.GetEntries()," ge21 ",ratehist_st2.GetEntries()," hybrid ",ratehist_h.GetEntries()
		#if npar==0:
		    #    ratehist_h_all = ratehist_h.Clone()
		#else:
		ratehist_h_all.Add(ratehist_h)
		ratehist_h_all_bad.Add(ratehist_h_bad)
		print "npar ",npar, " ratehist_h_bad cut ", baseratecut+ "&& "+ ratecut_ellipse_bad," entries now ",ratehist_h_all_bad.GetEntries()," normal entries ", ratehist_h_all.GetEntries()
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
       finalSignalCut_h = finalSignalCut_h+")"
       finalSignalCut_h_bad = finalSignalCut_h_bad+")"
       Teff0_v2 = makeEffplot_v2([GEMCSCTrackCh0], "pt",[basesignalcut+"&& trk_eff_CSC_ME11.has_csc_sh>0 && trk_eff_CSC_ME21.has_csc_sh>0 && trk_eff_CSC_ME11.has_gem_sh>0 && trk_eff_CSC_ME21.has_gem_sh>0"],[finalSignalCut_h], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_eff_20170208_pt%d_fraction%d_st2eta%dto%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10)))
       Teff0_bad = makeEffplot_v2([GEMCSCTrackCh0], "pt",[basesignalcut+"&& trk_eff_CSC_ME11.has_csc_sh>0 && trk_eff_CSC_ME21.has_csc_sh>0 && trk_eff_CSC_ME11.has_gem_sh>0 && trk_eff_CSC_ME21.has_gem_sh>0"],[finalSignalCut_h_bad], netas[neta], netas[neta+1],"true muon p_{T} GeV","bending angle cut efficiency",legs,"GE11-ME11 and GE21-ME21" ,text1,outputdir2+"GEMCSC_hybrid_eff_20170208_pt%d_fraction%d_st2eta%dto%d_badGE11frac%d_all"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending))
       #Teff0 = Teffallnpars[0][0]
       Teff0_h = Teff0_v2[0]
       Teff0_h_bad = Teff0_bad[0]
       #Teff1 = Teffallnpars[0][1]
       Teff0_st1 = Teffallnpars_ME11[0][0]
       Teff0_st1_bad = Teffs_cutx_badeff[0]
       #Teff1_st1 = Teffallnpars_ME11[0][1]
       Teff0_st2 = Teffallnpars_ME21[0][0]
       #Teff1_st2 = Teffallnpars_ME21[0][1]
       #for xpar in range(len(Teffallnpars)-1):
	   #Teff0.Add(Teffallnpars[xpar+1][0])		   
   	#Teff1.Add(Teffallnpars[xpar+1][1])		   
	#Teff0_st1.Add(Teffallnpars_ME11[xpar+1][0])		   
   	#Teff1_st1.Add(Teffallnpars_ME11[xpar+1][1])		   
	#Teff0_st2.Add(Teffallnpars_ME21[xpar+1][0])		   
   	#Teff1_st2.Add(Teffallnpars_ME21[xpar+1][1])		   
       efflist.append(getOverallEff(Teff0_st1, pt))
       efflist.append(getOverallEff(Teff0_h, pt))
       efflist.append(getOverallEff(Teff0_st1_bad, pt))
       efflist.append(getOverallEff(Teff0_h_bad, pt))
       ratelist.append(ratehist_st1.GetEntries())
       ratelist.append(ratehist_h_all.GetEntries())
       ratelist.append(ratehist_st1_bad.GetEntries())
       ratelist.append(ratehist_h_all_bad.GetEntries())
       print "efflist ",efflist, " ratelist ",ratelist
       #print "eff ge11 ",getOverallEff(Teff0_st1, pt), " ge21 ",getOverallEff(Teff0_st2, pt), " hybrid ",getOverallEff(Teff0_v2[0], pt)," badGE11 ",badGE11bending," eff ge11 ",getOverallEff(Teff0_st1_bad, pt)," hybrid ",getOverallEff(Teff0_bad[0], pt)
       #print "rate ge11 ",ratehist_st1.GetEntries()," ge21 ",ratehist_st2.GetEntries()," hybrid ",ratehist_h_all.GetEntries()," badGE11 case, ge11 rate ",ratehist_st1_bad.GetEntries(), " hybrid ",ratehist_h_all_bad.GetEntries()
       #GE11eta16to21npar2pt5fraction95;1
       Teff0_h.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%d"%(pt,fraction))
       Teff0_h_bad.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dbadGE11frac%d"%(pt,fraction, badGE11bending))
       #Teff1.SetName("hybrideta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"Singalpt%dptbg%d"%(pt,pt1))
       Teff0_st1.SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%d"%(pt,fraction))
       Teff0_st1_bad.SetName("GE11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%dbadGE11frac%d"%(pt,fraction, badGE11bending))
       #Teff1_st1.SetName("ME11eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"Singalpt%dptbg%d"%(pt,pt1))
       Teff0_st2.SetName("GE21eta%dto%d"%(int(netas[neta]*10),int(netas[neta+1]*10))+"pt%dfraction%d"%(pt,fraction))
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
       legs4 = ["YE11 bending angle cut","combination cut with YE11 and YE21 bending", "YE11 bending angle cut+20% CSC aging", "combination cut with YE11 and YE21 bending+20% CSC aging"]
       makeplots([Teff0_st1, Teff0_h, Teff0_st1_bad, Teff0_h_bad], legs4, text3,outputdir2+"GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt%d_fraction%d_St2eta%dto%d_allnpar_badGE11frac%d%s"%(pt, fraction, int(netas[neta]*10),int(netas[neta+1]*10), badGE11bending, extrapic)) 
       #Teffs_0.append(Teff0)
       #Teffs_0_ME21.append(Teff0_st2)
       #Teffs_0_ME11.append(Teff0_st1)
       Teff0_h.Write();Teff0_st1.Write();Teff0_st2.Write()
       Teff0_h_bad.Write();Teff0_st1_bad.Write()
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
def plotall(pts, fractions, netas,outputrootfile, badGE11=0):
    pt1 = 0
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
	efflist_ge11 = []
	effErrlist_ge11 = []
	efflist_ge11_bad = []
	effErrlist_ge11_bad = []
	efflist_h = []
	effErrlist_h = []
	efflist_h_bad = []
	effErrlist_h_bad = []
	for frac in fractions:
	    efflist, ratelist = plotalleta(pt, pt1, netas, frac, outputrootfile, badGE11)
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
	    efflist_ge11.append(efflist[0][0])
	    effErrlist_ge11.append(efflist[0][1])
	    efflist_h.append(efflist[1][0])
	    effErrlist_h.append(efflist[1][1])
	    efflist_ge11_bad.append(efflist[2][0])
	    effErrlist_ge11_bad.append(efflist[2][1])
	    efflist_h_bad.append(efflist[3][0])
	    effErrlist_h_bad.append(efflist[3][1])
	Teff_out = ROOT.TFile(outputrootfile,"UPDATE")
	graph_ge11 = TGraphErrors(len(efflist_ge11), np.array(efflist_ge11), np.array(ratelist_ge11), np.array(effErrlist_ge11), np.array(rateErrlist_ge11))
	graph_h = TGraphErrors(len(efflist_h), np.array(efflist_h), np.array(ratelist_h), np.array(effErrlist_h), np.array(rateErrlist_h))
	graph_ge11_bad = TGraphErrors(len(efflist_ge11_bad), np.array(efflist_ge11_bad), np.array(ratelist_ge11_bad), np.array(effErrlist_ge11_bad), np.array(rateErrlist_ge11_bad))
	graph_h_bad = TGraphErrors(len(efflist_h_bad), np.array(efflist_h_bad), np.array(ratelist_h_bad), np.array(effErrlist_h_bad), np.array(rateErrlist_h_bad))
	legend = TLegend(0.45,0.75,0.90,0.90)
	legend.SetFillColor(ROOT.kWhite)
	legend.SetTextFont(42)
	tex = TLatex(0.2,.88, "%.2f<|#eta|<%.2f, L1Mu with p_{T}^{L1}>%d GeV, Q>=4"%(etamin, etamax, pt))
	tex.SetNDC()
	#legend.SetTextSize(.05)
	c1 = TCanvas()
	mgerr =TMultiGraph()
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
	mgerr.Add(graph_ge11)
	mgerr.Add(graph_h)
	mgerr.Add(graph_ge11_bad)
	mgerr.Add(graph_h_bad)
        graph_ge11.SetName("TriggerEffVsRate_GE11Cut_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph_h.SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
        graph_ge11_bad.SetName("TriggerEffVsRate_GE11Cut_pt%d_eta%dto%d_badGE11"%(pt,int(etamin*10), int(etamax*10)))
        graph_h_bad.SetName("TriggerEffVsRate_hybrid_pt%d_eta%dto%d_badGE11"%(pt,int(etamin*10), int(etamax*10)))
	graph_ge11.Write()
	graph_h.Write()
	graph_ge11_bad.Write()
	graph_h_bad.Write()
	legend.AddEntry(graph_ge11,"GE11 bending angle cut", "p")
	legend.AddEntry(graph_h,"combined bending angle cut", "p")
	legend.AddEntry(graph_ge11_bad,"GE11 bending angle cut+20% CSC aging", "p")
	legend.AddEntry(graph_h_bad,"combined bending angle cut+20% CSC aging", "p")
	
	mgerr.Draw("AP")
	legend.Draw("same")
	tex.Draw("same")
	mgerr.SetMinimum(0.)
	mgerr.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 140 PU")
	mgerr.GetXaxis().SetTitle("Trigger Efficiency")
	mgerr.GetYaxis().SetTitle("Trigger Rate [kHz]")
        mgerr.SetName("TriggerEffVsRate_all_pt%d_eta%dto%d"%(pt,int(etamin*10), int(etamax*10)))
	mgerr.Write()
	c1.SaveAs(outputdir2+"TriggerEffVsRate_GEMCSCBending_pt%d_eta%dto%d_PU%d.png"%(pt,int(etamin*10), int(etamax*10), pu))
	c1.SaveAs(outputdir2+"TriggerEffVsRate_GEMCSCBending_pt%d_eta%dto%d_PU%d.pdf"%(pt,int(etamin*10), int(etamax*10), pu))
	c1.SaveAs(outputdir2+"TriggerEffVsRate_GEMCSCBending_pt%d_eta%dto%d_PU%d.C"%(pt,int(etamin*10), int(etamax*10), pu))
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
    hrate_template.SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}"+"  "*10+" 14 TeV, 140 PU")
    hrate_template.GetXaxis().SetTitle("L1Mu p_{T} [GeV]")
    hrate_template.GetYaxis().SetTitle("Trigger rate [kHz]")
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
    legend2.AddEntry(hrate_ge11,"GE11 bending angle cut", "p")
    legend2.AddEntry(hrate_h,"combined bending angle cut", "p")
    legend2.AddEntry(hrate_ge11_bad,"GE11 bending angle cut+20% CSC aging", "p")
    legend2.AddEntry(hrate_h_bad,"combined bending angle cut+20% CSC aging", "p")
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

    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d.png"%(int(etamin*10), int(etamax*10), pu, fraction_rate))
    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d.pdf"%(int(etamin*10), int(etamax*10), pu, fraction_rate))
    c2.SaveAs(outputdir2+"TriggerRate_q4_eta%dto%d_PU%d_Eff%d.C"%(int(etamin*10), int(etamax*10), pu, fraction_rate))
    Teff_out.Close()



    
print "outputdir1 ",outputdir1," outputdir2 ",outputdir2
if not os.path.exists(outputdir1):
        os.makedirs(outputdir1)
if not os.path.exists(outputdir2):
        os.makedirs(outputdir2)
pt1 = 0
#plotalleta(10,5, [2.0,2.2],90, 95,"(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(10,5, [2.0,2.2],90, 95,"(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(pt1,pt2, [2.0,2.2],90,95,"(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(pt1,pt2, [1.2,1.4,1.6],90, 95, 99, "(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(pt1,pt2, [1.6,1.8,2.0,2.2],90, 95, 99, "(csc_bending_angle12_xfactor_L1_1)",True)
#plotalleta(pt1,pt2, [1.6,1.8,2.0,2.2],90, 95, 99, "(dphi_dir_st1_st2_L1_csc)",True)
#plotalleta(pt1,pt2, [1.2,1.4,1.6],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)
pts = [5, 7, 10, 12, 16, 20]
#pts = [10]
fractions = [90+x for x in range(0, 10)]
#fractions = [96,98]
badGE11 = 20


outputrootfile = "Teff_all.root"
plotall(pts, fractions, [1.66, 2.15], outputrootfile, badGE11)

#plotalleta(pt1,pt2, [1.2,1.4,1.6,1.8,2.0,2.2],90, 95, 99, "(dphi_dir_st1_st2_L1)",False)


#plotalleta(3,3, [1.2,1.4,1.6],95,"(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(3,3, [1.6,1.8,2.0,2.2],95,"(csc_bending_angle12_xfactor_L1_2)",False)
#plotalleta(3,3, [1.6,1.8,2.0,2.2],95,"(csc_bending_angle12_xfactor_L1_1)",True)
