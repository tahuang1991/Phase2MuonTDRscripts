void TriggerEff_eta_pt11_simpt16_eta164_215_GE11GE21_GE11GE21_combined()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:32:59 2017) by ROOT version6.08/06
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
   Double_t xAxis332[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__318 = new TH1F("b1__318"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis332);
   b1__318->SetMinimum(0.6);
   b1__318->SetMaximum(1.05);
   b1__318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__318->SetLineColor(ci);
   b1__318->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__318->GetXaxis()->SetLabelFont(42);
   b1__318->GetXaxis()->SetLabelSize(0.05);
   b1__318->GetXaxis()->SetTitleSize(0.05);
   b1__318->GetXaxis()->SetTitleFont(42);
   b1__318->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__318->GetYaxis()->SetNdivisions(520);
   b1__318->GetYaxis()->SetLabelFont(42);
   b1__318->GetYaxis()->SetLabelSize(0.05);
   b1__318->GetYaxis()->SetTitleSize(0.05);
   b1__318->GetYaxis()->SetTitleOffset(1.1);
   b1__318->GetYaxis()->SetTitleFont(42);
   b1__318->GetZaxis()->SetLabelFont(42);
   b1__318->GetZaxis()->SetLabelSize(0.035);
   b1__318->GetZaxis()->SetTitleSize(0.035);
   b1__318->GetZaxis()->SetTitleFont(42);
   b1__318->Draw("");
   Double_t xAxis585[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt11fraction94vseta585 = new TEfficiency("GE11eta16to21pt11fraction94vseta","",23,xAxis585);
   
   GE11eta16to21pt11fraction94vseta585->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt11fraction94vseta585->SetBetaAlpha(1);
   GE11eta16to21pt11fraction94vseta585->SetBetaBeta(1);
   GE11eta16to21pt11fraction94vseta585->SetWeight(1);
   GE11eta16to21pt11fraction94vseta585->SetStatisticOption(0);
   GE11eta16to21pt11fraction94vseta585->SetPosteriorMode(0);
   GE11eta16to21pt11fraction94vseta585->SetShortestInterval(0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(0,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(0,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(1,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(1,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(2,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(2,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(3,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(3,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(4,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(4,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(5,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(5,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(6,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(6,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(7,9822);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(7,9190);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(8,9640);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(8,8747);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(9,9468);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(9,8715);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(10,9606);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(10,8859);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(11,9324);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(11,8691);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(12,9538);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(12,8777);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(13,9368);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(13,8566);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(14,9318);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(14,8552);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(15,9440);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(15,8430);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(16,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(16,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(17,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(17,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(18,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(18,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(19,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(19,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(20,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(20,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(21,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(21,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(22,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(22,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(23,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(23,0);
   GE11eta16to21pt11fraction94vseta585->SetTotalEvents(24,0);
   GE11eta16to21pt11fraction94vseta585->SetPassedEvents(24,0);
   GE11eta16to21pt11fraction94vseta585->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt11fraction94vseta585->SetLineColor(ci);
   GE11eta16to21pt11fraction94vseta585->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt11fraction94vseta585->SetMarkerColor(ci);
   GE11eta16to21pt11fraction94vseta585->SetMarkerStyle(26);
   GE11eta16to21pt11fraction94vseta585->Draw("samepz");
   Double_t xAxis586[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt11fraction94vseta586 = new TEfficiency("hybrideta16to21pt11fraction94vseta","",23,xAxis586);
   
   hybrideta16to21pt11fraction94vseta586->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt11fraction94vseta586->SetBetaAlpha(1);
   hybrideta16to21pt11fraction94vseta586->SetBetaBeta(1);
   hybrideta16to21pt11fraction94vseta586->SetWeight(1);
   hybrideta16to21pt11fraction94vseta586->SetStatisticOption(0);
   hybrideta16to21pt11fraction94vseta586->SetPosteriorMode(0);
   hybrideta16to21pt11fraction94vseta586->SetShortestInterval(0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(0,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(0,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(1,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(1,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(2,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(2,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(3,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(3,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(4,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(4,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(5,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(5,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(6,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(6,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(7,6740);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(7,6458);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(8,6424);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(8,6094);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(9,6562);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(9,6156);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(10,6532);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(10,6147);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(11,6240);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(11,5894);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(12,6500);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(12,6078);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(13,6384);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(13,5961);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(14,6362);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(14,5942);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(15,6440);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(15,5896);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(16,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(16,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(17,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(17,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(18,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(18,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(19,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(19,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(20,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(20,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(21,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(21,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(22,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(22,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(23,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(23,0);
   hybrideta16to21pt11fraction94vseta586->SetTotalEvents(24,0);
   hybrideta16to21pt11fraction94vseta586->SetPassedEvents(24,0);
   hybrideta16to21pt11fraction94vseta586->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21pt11fraction94vseta586->SetLineColor(ci);
   hybrideta16to21pt11fraction94vseta586->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21pt11fraction94vseta586->SetMarkerColor(ci);
   hybrideta16to21pt11fraction94vseta586->SetMarkerStyle(25);
   hybrideta16to21pt11fraction94vseta586->Draw("samepz");
   Double_t xAxis587[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt11fraction94badGE11frac30vseta587 = new TEfficiency("GE11eta16to21pt11fraction94badGE11frac30vseta","",23,xAxis587);
   
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetBetaAlpha(1);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetBetaBeta(1);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetWeight(1);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetStatisticOption(0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPosteriorMode(0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetShortestInterval(0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(0,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(0,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(1,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(1,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(2,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(2,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(3,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(3,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(4,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(4,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(5,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(5,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(6,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(6,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(7,9822);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(7,9199);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(8,9640);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(8,8752);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(9,9468);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(9,8719);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(10,9606);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(10,8868);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(11,9324);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(11,8693);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(12,9538);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(12,8781);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(13,9368);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(13,8571);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(14,9318);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(14,8553);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(15,9440);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(15,8440);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(16,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(16,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(17,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(17,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(18,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(18,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(19,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(19,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(20,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(20,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(21,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(21,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(22,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(22,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(23,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(23,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetTotalEvents(24,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetPassedEvents(24,0);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetFillColor(19);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetLineWidth(2);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->SetMarkerStyle(21);
   GE11eta16to21pt11fraction94badGE11frac30vseta587->Draw("samepz");
   Double_t xAxis588[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt11fraction94badGE11frac30vseta588 = new TEfficiency("hybrideta16to21pt11fraction94badGE11frac30vseta","",23,xAxis588);
   
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetBetaAlpha(1);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetBetaBeta(1);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetWeight(1);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetStatisticOption(0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPosteriorMode(0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetShortestInterval(0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(0,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(0,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(1,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(1,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(2,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(2,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(3,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(3,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(4,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(4,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(5,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(5,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(6,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(6,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(7,6740);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(7,6411);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(8,6424);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(8,6053);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(9,6562);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(9,6107);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(10,6532);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(10,6083);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(11,6240);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(11,5849);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(12,6500);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(12,6029);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(13,6384);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(13,5923);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(14,6362);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(14,5812);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(15,6440);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(15,5756);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(16,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(16,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(17,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(17,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(18,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(18,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(19,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(19,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(20,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(20,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(21,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(21,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(22,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(22,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(23,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(23,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetTotalEvents(24,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetPassedEvents(24,0);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetLineColor(ci);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetMarkerColor(ci);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->SetMarkerStyle(20);
   hybrideta16to21pt11fraction94badGE11frac30vseta588->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt11fraction94vseta","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt11fraction94vseta","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt11fraction94badGE11frac30vseta","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt11fraction94badGE11frac30vseta","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>16 GeV");
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
