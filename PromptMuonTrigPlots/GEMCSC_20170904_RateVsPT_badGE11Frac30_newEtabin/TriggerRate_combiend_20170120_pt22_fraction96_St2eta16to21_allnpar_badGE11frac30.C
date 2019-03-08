void TriggerRate_combiend_20170120_pt22_fraction96_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:54 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.43071,2.693798,0.8824424);
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
   Double_t xAxis687[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_29 = new TH1F("hs_stack_29"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis687);
   hs_stack_29->SetMinimum(0.01);
   hs_stack_29->SetMaximum(4.826733);
   hs_stack_29->SetDirectory(0);
   hs_stack_29->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_29->SetLineColor(ci);
   hs_stack_29->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_29->GetXaxis()->SetLabelFont(42);
   hs_stack_29->GetXaxis()->SetLabelSize(0.035);
   hs_stack_29->GetXaxis()->SetTitleSize(0.05);
   hs_stack_29->GetXaxis()->SetTitleFont(42);
   hs_stack_29->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_29->GetYaxis()->SetLabelFont(42);
   hs_stack_29->GetYaxis()->SetLabelSize(0.035);
   hs_stack_29->GetYaxis()->SetTitleSize(0.05);
   hs_stack_29->GetYaxis()->SetTitleFont(42);
   hs_stack_29->GetZaxis()->SetLabelFont(42);
   hs_stack_29->GetZaxis()->SetLabelSize(0.035);
   hs_stack_29->GetZaxis()->SetTitleSize(0.035);
   hs_stack_29->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_29);
   
   Double_t xAxis688[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac96_pt22__659 = new TH1F("ratehist_GE11_eta16to21_frac96_pt22__659","ratehist_GE11_eta16to21_frac96_pt22",23, xAxis688);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinContent(8,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinContent(9,0.4565747);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinContent(10,0.6087663);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinContent(12,0.6087663);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinContent(13,0.7609578);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinContent(14,0.4565747);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinError(8,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinError(9,0.2636035);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinError(10,0.3043831);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinError(12,0.3043831);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinError(13,0.3403107);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetBinError(14,0.2636035);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetEntries(21);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac96_pt22__659->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac96_pt22__659->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac96_pt22__659->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac96_pt22__659->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac96_pt22__659->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22__659->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac96_pt22,"");
   Double_t xAxis689[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac96_pt22__660 = new TH1F("ratehist_hybrid_eta16to21_frac96_pt22__660","ratehist_hybrid_eta16to21_frac96_pt22",23, xAxis689);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinContent(9,0.6087663);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinContent(10,0.4565747);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinContent(13,0.4565747);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinContent(14,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinError(9,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinError(10,0.2636035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinError(13,0.2636035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetBinError(14,0.2152314);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetEntries(14);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt22__660->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22__660->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac96_pt22,"");
   Double_t xAxis690[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661 = new TH1F("ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661","ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30",23, xAxis690);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(7,1.826299);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(8,1.521916);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(9,2.130682);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(10,2.282873);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(11,0.9131494);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(12,2.282873);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(13,2.435065);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(14,2.587256);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinContent(15,1.826299);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(7,0.527207);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(8,0.481272);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(9,0.5694487);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(10,0.5894354);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(11,0.3727917);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(12,0.5894354);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(13,0.6087662);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(14,0.6275019);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetBinError(15,0.527207);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetEntries(117);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetStats(0);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30__661->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30,"");
   Double_t xAxis691[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662 = new TH1F("ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662","ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30",23, xAxis691);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(7,0.6087663);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(9,0.6087663);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(10,0.7609578);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(11,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(12,0.6087663);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(13,0.6087663);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(7,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(9,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(10,0.3403107);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(11,0.2152314);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(12,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(13,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetEntries(25);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30__662->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac96_pt22","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac96_pt22","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac96_pt22_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac96_pt22_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>22 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
