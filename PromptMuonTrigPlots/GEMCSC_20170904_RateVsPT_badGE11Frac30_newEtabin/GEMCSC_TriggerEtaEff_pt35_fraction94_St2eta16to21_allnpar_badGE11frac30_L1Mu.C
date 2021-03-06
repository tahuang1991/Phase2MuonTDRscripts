void GEMCSC_TriggerEtaEff_pt35_fraction94_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:39:14 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(1.387209,0.5277778,2.679199,1.083333);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetGridx();
   c1_n2->SetGridy();
   c1_n2->SetTickx(1);
   c1_n2->SetTicky(1);
   c1_n2->SetLeftMargin(0.126);
   c1_n2->SetTopMargin(0.06);
   c1_n2->SetBottomMargin(0.13);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   Double_t xAxis912[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__874 = new TH1F("b1__874"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis912);
   b1__874->SetMinimum(0.6);
   b1__874->SetMaximum(1.05);
   b1__874->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__874->SetLineColor(ci);
   b1__874->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__874->GetXaxis()->SetLabelFont(42);
   b1__874->GetXaxis()->SetLabelSize(0.05);
   b1__874->GetXaxis()->SetTitleSize(0.05);
   b1__874->GetXaxis()->SetTitleFont(42);
   b1__874->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__874->GetYaxis()->SetNdivisions(520);
   b1__874->GetYaxis()->SetLabelFont(42);
   b1__874->GetYaxis()->SetLabelSize(0.05);
   b1__874->GetYaxis()->SetTitleSize(0.05);
   b1__874->GetYaxis()->SetTitleOffset(1.1);
   b1__874->GetYaxis()->SetTitleFont(42);
   b1__874->GetZaxis()->SetLabelFont(42);
   b1__874->GetZaxis()->SetLabelSize(0.035);
   b1__874->GetZaxis()->SetTitleSize(0.035);
   b1__874->GetZaxis()->SetTitleFont(42);
   b1__874->Draw("");
   Double_t xAxis1631[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone1631 = new TEfficiency("hden1_clone","",23,xAxis1631);
   
   hden1_clone1631->SetConfidenceLevel(0.6826895);
   hden1_clone1631->SetBetaAlpha(1);
   hden1_clone1631->SetBetaBeta(1);
   hden1_clone1631->SetWeight(1);
   hden1_clone1631->SetStatisticOption(0);
   hden1_clone1631->SetPosteriorMode(0);
   hden1_clone1631->SetShortestInterval(0);
   hden1_clone1631->SetTotalEvents(0,0);
   hden1_clone1631->SetPassedEvents(0,0);
   hden1_clone1631->SetTotalEvents(1,0);
   hden1_clone1631->SetPassedEvents(1,0);
   hden1_clone1631->SetTotalEvents(2,0);
   hden1_clone1631->SetPassedEvents(2,0);
   hden1_clone1631->SetTotalEvents(3,0);
   hden1_clone1631->SetPassedEvents(3,0);
   hden1_clone1631->SetTotalEvents(4,0);
   hden1_clone1631->SetPassedEvents(4,0);
   hden1_clone1631->SetTotalEvents(5,0);
   hden1_clone1631->SetPassedEvents(5,0);
   hden1_clone1631->SetTotalEvents(6,0);
   hden1_clone1631->SetPassedEvents(6,0);
   hden1_clone1631->SetTotalEvents(7,2026);
   hden1_clone1631->SetPassedEvents(7,2009);
   hden1_clone1631->SetTotalEvents(8,1916);
   hden1_clone1631->SetPassedEvents(8,1892);
   hden1_clone1631->SetTotalEvents(9,2030);
   hden1_clone1631->SetPassedEvents(9,1975);
   hden1_clone1631->SetTotalEvents(10,1974);
   hden1_clone1631->SetPassedEvents(10,1944);
   hden1_clone1631->SetTotalEvents(11,1850);
   hden1_clone1631->SetPassedEvents(11,1818);
   hden1_clone1631->SetTotalEvents(12,1892);
   hden1_clone1631->SetPassedEvents(12,1863);
   hden1_clone1631->SetTotalEvents(13,1894);
   hden1_clone1631->SetPassedEvents(13,1862);
   hden1_clone1631->SetTotalEvents(14,1900);
   hden1_clone1631->SetPassedEvents(14,1870);
   hden1_clone1631->SetTotalEvents(15,1862);
   hden1_clone1631->SetPassedEvents(15,1816);
   hden1_clone1631->SetTotalEvents(16,0);
   hden1_clone1631->SetPassedEvents(16,0);
   hden1_clone1631->SetTotalEvents(17,0);
   hden1_clone1631->SetPassedEvents(17,0);
   hden1_clone1631->SetTotalEvents(18,0);
   hden1_clone1631->SetPassedEvents(18,0);
   hden1_clone1631->SetTotalEvents(19,0);
   hden1_clone1631->SetPassedEvents(19,0);
   hden1_clone1631->SetTotalEvents(20,0);
   hden1_clone1631->SetPassedEvents(20,0);
   hden1_clone1631->SetTotalEvents(21,0);
   hden1_clone1631->SetPassedEvents(21,0);
   hden1_clone1631->SetTotalEvents(22,0);
   hden1_clone1631->SetPassedEvents(22,0);
   hden1_clone1631->SetTotalEvents(23,0);
   hden1_clone1631->SetPassedEvents(23,0);
   hden1_clone1631->SetTotalEvents(24,0);
   hden1_clone1631->SetPassedEvents(24,0);
   hden1_clone1631->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone1631->SetLineColor(ci);
   hden1_clone1631->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone1631->SetMarkerColor(ci);
   hden1_clone1631->SetMarkerStyle(26);
   hden1_clone1631->Draw("samepz");
   Double_t xAxis1632[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone1632 = new TEfficiency("hden0_clone","",23,xAxis1632);
   
   hden0_clone1632->SetConfidenceLevel(0.6826895);
   hden0_clone1632->SetBetaAlpha(1);
   hden0_clone1632->SetBetaBeta(1);
   hden0_clone1632->SetWeight(1);
   hden0_clone1632->SetStatisticOption(0);
   hden0_clone1632->SetPosteriorMode(0);
   hden0_clone1632->SetShortestInterval(0);
   hden0_clone1632->SetTotalEvents(0,0);
   hden0_clone1632->SetPassedEvents(0,0);
   hden0_clone1632->SetTotalEvents(1,0);
   hden0_clone1632->SetPassedEvents(1,0);
   hden0_clone1632->SetTotalEvents(2,0);
   hden0_clone1632->SetPassedEvents(2,0);
   hden0_clone1632->SetTotalEvents(3,0);
   hden0_clone1632->SetPassedEvents(3,0);
   hden0_clone1632->SetTotalEvents(4,0);
   hden0_clone1632->SetPassedEvents(4,0);
   hden0_clone1632->SetTotalEvents(5,0);
   hden0_clone1632->SetPassedEvents(5,0);
   hden0_clone1632->SetTotalEvents(6,0);
   hden0_clone1632->SetPassedEvents(6,0);
   hden0_clone1632->SetTotalEvents(7,2980);
   hden0_clone1632->SetPassedEvents(7,2942);
   hden0_clone1632->SetTotalEvents(8,2902);
   hden0_clone1632->SetPassedEvents(8,2826);
   hden0_clone1632->SetTotalEvents(9,2942);
   hden0_clone1632->SetPassedEvents(9,2814);
   hden0_clone1632->SetTotalEvents(10,2886);
   hden0_clone1632->SetPassedEvents(10,2789);
   hden0_clone1632->SetTotalEvents(11,2682);
   hden0_clone1632->SetPassedEvents(11,2594);
   hden0_clone1632->SetTotalEvents(12,2784);
   hden0_clone1632->SetPassedEvents(12,2703);
   hden0_clone1632->SetTotalEvents(13,2724);
   hden0_clone1632->SetPassedEvents(13,2638);
   hden0_clone1632->SetTotalEvents(14,2778);
   hden0_clone1632->SetPassedEvents(14,2665);
   hden0_clone1632->SetTotalEvents(15,2746);
   hden0_clone1632->SetPassedEvents(15,2602);
   hden0_clone1632->SetTotalEvents(16,0);
   hden0_clone1632->SetPassedEvents(16,0);
   hden0_clone1632->SetTotalEvents(17,0);
   hden0_clone1632->SetPassedEvents(17,0);
   hden0_clone1632->SetTotalEvents(18,0);
   hden0_clone1632->SetPassedEvents(18,0);
   hden0_clone1632->SetTotalEvents(19,0);
   hden0_clone1632->SetPassedEvents(19,0);
   hden0_clone1632->SetTotalEvents(20,0);
   hden0_clone1632->SetPassedEvents(20,0);
   hden0_clone1632->SetTotalEvents(21,0);
   hden0_clone1632->SetPassedEvents(21,0);
   hden0_clone1632->SetTotalEvents(22,0);
   hden0_clone1632->SetPassedEvents(22,0);
   hden0_clone1632->SetTotalEvents(23,0);
   hden0_clone1632->SetPassedEvents(23,0);
   hden0_clone1632->SetTotalEvents(24,0);
   hden0_clone1632->SetPassedEvents(24,0);
   hden0_clone1632->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone1632->SetLineColor(ci);
   hden0_clone1632->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone1632->SetMarkerColor(ci);
   hden0_clone1632->SetMarkerStyle(25);
   hden0_clone1632->Draw("samepz");
   Double_t xAxis1633[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt35fraction94vseta1633 = new TEfficiency("hybrideta16to21pt35fraction94vseta","",23,xAxis1633);
   
   hybrideta16to21pt35fraction94vseta1633->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt35fraction94vseta1633->SetBetaAlpha(1);
   hybrideta16to21pt35fraction94vseta1633->SetBetaBeta(1);
   hybrideta16to21pt35fraction94vseta1633->SetWeight(1);
   hybrideta16to21pt35fraction94vseta1633->SetStatisticOption(0);
   hybrideta16to21pt35fraction94vseta1633->SetPosteriorMode(0);
   hybrideta16to21pt35fraction94vseta1633->SetShortestInterval(0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(0,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(0,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(1,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(1,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(2,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(2,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(3,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(3,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(4,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(4,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(5,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(5,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(6,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(6,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(7,2026);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(7,1829);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(8,1916);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(8,1706);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(9,2030);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(9,1752);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(10,1974);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(10,1745);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(11,1850);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(11,1653);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(12,1892);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(12,1672);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(13,1894);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(13,1654);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(14,1900);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(14,1664);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(15,1862);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(15,1603);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(16,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(16,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(17,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(17,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(18,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(18,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(19,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(19,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(20,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(20,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(21,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(21,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(22,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(22,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(23,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(23,0);
   hybrideta16to21pt35fraction94vseta1633->SetTotalEvents(24,0);
   hybrideta16to21pt35fraction94vseta1633->SetPassedEvents(24,0);
   hybrideta16to21pt35fraction94vseta1633->SetFillColor(19);
   hybrideta16to21pt35fraction94vseta1633->SetLineWidth(2);
   hybrideta16to21pt35fraction94vseta1633->SetMarkerStyle(21);
   hybrideta16to21pt35fraction94vseta1633->Draw("samepz");
   Double_t xAxis1634[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt35fraction94vseta1634 = new TEfficiency("GE11eta16to21pt35fraction94vseta","",23,xAxis1634);
   
   GE11eta16to21pt35fraction94vseta1634->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt35fraction94vseta1634->SetBetaAlpha(1);
   GE11eta16to21pt35fraction94vseta1634->SetBetaBeta(1);
   GE11eta16to21pt35fraction94vseta1634->SetWeight(1);
   GE11eta16to21pt35fraction94vseta1634->SetStatisticOption(0);
   GE11eta16to21pt35fraction94vseta1634->SetPosteriorMode(0);
   GE11eta16to21pt35fraction94vseta1634->SetShortestInterval(0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(0,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(0,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(1,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(1,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(2,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(2,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(3,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(3,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(4,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(4,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(5,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(5,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(6,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(6,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(7,2980);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(7,2511);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(8,2902);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(8,2360);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(9,2942);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(9,2469);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(10,2886);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(10,2384);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(11,2682);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(11,2309);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(12,2784);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(12,2336);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(13,2724);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(13,2292);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(14,2778);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(14,2293);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(15,2746);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(15,2184);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(16,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(16,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(17,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(17,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(18,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(18,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(19,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(19,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(20,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(20,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(21,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(21,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(22,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(22,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(23,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(23,0);
   GE11eta16to21pt35fraction94vseta1634->SetTotalEvents(24,0);
   GE11eta16to21pt35fraction94vseta1634->SetPassedEvents(24,0);
   GE11eta16to21pt35fraction94vseta1634->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt35fraction94vseta1634->SetLineColor(ci);
   GE11eta16to21pt35fraction94vseta1634->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt35fraction94vseta1634->SetMarkerColor(ci);
   GE11eta16to21pt35fraction94vseta1634->SetMarkerStyle(20);
   GE11eta16to21pt35fraction94vseta1634->Draw("samepz");
   
   TLegend *leg = new TLegend(0.2,0.15,0.85,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL"," ","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","L1Mu w/ GE21 (inputs to L1Trk+L1Mu)","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","L1Mu w/o GE21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt35fraction94vseta","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=35 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt35fraction94vseta","CSC+GE11: hits in ME11, p_{T}^{L1}>=35 GeV (Standalone L1Mu)","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>40 GeV");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
