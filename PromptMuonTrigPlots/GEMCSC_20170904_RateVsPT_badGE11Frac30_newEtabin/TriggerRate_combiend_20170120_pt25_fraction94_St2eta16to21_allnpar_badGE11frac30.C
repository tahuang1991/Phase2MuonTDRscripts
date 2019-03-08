void TriggerRate_combiend_20170120_pt25_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:37:39 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.417843,2.693798,0.7963352);
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
   Double_t xAxis759[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_32 = new TH1F("hs_stack_32"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis759);
   hs_stack_32->SetMinimum(0.01);
   hs_stack_32->SetMaximum(4.013142);
   hs_stack_32->SetDirectory(0);
   hs_stack_32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_32->SetLineColor(ci);
   hs_stack_32->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_32->GetXaxis()->SetLabelFont(42);
   hs_stack_32->GetXaxis()->SetLabelSize(0.035);
   hs_stack_32->GetXaxis()->SetTitleSize(0.05);
   hs_stack_32->GetXaxis()->SetTitleFont(42);
   hs_stack_32->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_32->GetYaxis()->SetLabelFont(42);
   hs_stack_32->GetYaxis()->SetLabelSize(0.035);
   hs_stack_32->GetYaxis()->SetTitleSize(0.05);
   hs_stack_32->GetYaxis()->SetTitleFont(42);
   hs_stack_32->GetZaxis()->SetLabelFont(42);
   hs_stack_32->GetZaxis()->SetLabelSize(0.035);
   hs_stack_32->GetZaxis()->SetTitleSize(0.035);
   hs_stack_32->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_32);
   
   Double_t xAxis760[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt25__728 = new TH1F("ratehist_GE11_eta16to21_frac94_pt25__728","ratehist_GE11_eta16to21_frac94_pt25",23, xAxis760);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinContent(8,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinContent(9,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinContent(10,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinContent(12,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinContent(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinContent(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinError(8,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinError(9,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinError(10,0.2636035);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinError(12,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinError(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetBinError(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetEntries(11);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt25__728->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt25__728->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt25__728->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt25__728->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt25__728->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25__728->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt25,"");
   Double_t xAxis761[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt25__729 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt25__729","ratehist_hybrid_eta16to21_frac94_pt25",23, xAxis761);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetBinContent(10,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetBinError(10,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetEntries(6);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt25__729->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25__729->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt25,"");
   Double_t xAxis762[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730 = new TH1F("ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730","ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30",23, xAxis762);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(7,1.369724);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(8,1.521916);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(9,1.674107);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(10,1.521916);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(11,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(12,1.826299);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(13,1.826299);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(14,2.130682);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinContent(15,1.217533);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(7,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(8,0.481272);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(9,0.5047623);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(10,0.481272);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(11,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(12,0.527207);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(13,0.527207);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(14,0.5694487);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetBinError(15,0.4304627);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetEntries(91);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30__730->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30,"");
   Double_t xAxis763[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731","ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30",23, xAxis763);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(7,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(10,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(11,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(13,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(7,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(10,0.3403107);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(11,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(13,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetEntries(16);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30__731->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt25","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt25","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt25_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt25_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>25 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
