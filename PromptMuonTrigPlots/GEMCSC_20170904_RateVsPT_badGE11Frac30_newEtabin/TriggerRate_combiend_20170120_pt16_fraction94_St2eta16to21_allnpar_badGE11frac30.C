void TriggerRate_combiend_20170120_pt16_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:35:36 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.46423,2.693798,1.106771);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetLogy();
   c1_n2->SetGridx();
   c1_n2->SetGridy();
   c1_n2->SetTickx(1);
   c1_n2->SetTicky(1);
   c1_n2->SetLeftMargin(0.126);
   c1_n2->SetTopMargin(0.06);
   c1_n2->SetBottomMargin(0.13);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   hs->SetMinimum(0.01);
   Double_t xAxis567[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_24 = new TH1F("hs_stack_24"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis567);
   hs_stack_24->SetMinimum(0.01);
   hs_stack_24->SetMaximum(7.807483);
   hs_stack_24->SetDirectory(0);
   hs_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_24->SetLineColor(ci);
   hs_stack_24->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_24->GetXaxis()->SetLabelFont(42);
   hs_stack_24->GetXaxis()->SetLabelSize(0.035);
   hs_stack_24->GetXaxis()->SetTitleSize(0.05);
   hs_stack_24->GetXaxis()->SetTitleFont(42);
   hs_stack_24->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_24->GetYaxis()->SetLabelFont(42);
   hs_stack_24->GetYaxis()->SetLabelSize(0.035);
   hs_stack_24->GetYaxis()->SetTitleSize(0.05);
   hs_stack_24->GetYaxis()->SetTitleFont(42);
   hs_stack_24->GetZaxis()->SetLabelFont(42);
   hs_stack_24->GetZaxis()->SetLabelSize(0.035);
   hs_stack_24->GetZaxis()->SetTitleSize(0.035);
   hs_stack_24->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_24);
   
   Double_t xAxis568[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt16__544 = new TH1F("ratehist_GE11_eta16to21_frac94_pt16__544","ratehist_GE11_eta16to21_frac94_pt16",23, xAxis568);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(7,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(8,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(9,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(10,2.130682);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(11,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(12,0.9131494);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(13,1.521916);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinContent(14,1.065341);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(7,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(8,0.2636035);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(9,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(10,0.5694487);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(11,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(12,0.3727917);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(13,0.481272);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetBinError(14,0.402661);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetEntries(51);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt16__544->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt16__544->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt16__544->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt16__544->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt16__544->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16__544->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt16,"");
   Double_t xAxis569[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt16__545 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt16__545","ratehist_hybrid_eta16to21_frac94_pt16",23, xAxis569);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(7,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(9,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(10,1.674107);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(11,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(12,0.6087663);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(13,1.065341);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinContent(14,1.065341);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(7,0.3403107);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(9,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(10,0.5047623);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(11,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(13,0.402661);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetBinError(14,0.402661);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetEntries(39);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt16__545->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16__545->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt16,"");
   Double_t xAxis570[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546 = new TH1F("ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546","ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30",23, xAxis570);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(7,3.652597);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(8,2.587256);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(9,3.196023);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(10,4.261364);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(11,1.826299);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(12,3.652597);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(13,4.109172);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(14,4.261364);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinContent(15,2.739448);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(7,0.7455833);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(8,0.6275019);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(9,0.6974293);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(10,0.805322);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(11,0.527207);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(12,0.7455833);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(13,0.7908105);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(14,0.805322);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetBinError(15,0.6456941);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetEntries(199);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30__546->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30,"");
   Double_t xAxis571[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547","ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30",23, xAxis571);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(7,1.97849);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(8,0.6087663);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(9,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(10,2.282873);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(11,0.6087663);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(12,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(13,1.217533);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinContent(14,0.9131494);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(7,0.5487345);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(8,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(9,0.3403107);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(10,0.5894354);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(11,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(12,0.3403107);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(13,0.4304627);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetBinError(14,0.3727917);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetEntries(60);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30__547->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.2,0.15,0.75,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with hits in ME11","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt16","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt16","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt16_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt16_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>16 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
