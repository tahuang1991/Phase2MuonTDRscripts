void TriggerRate_combiend_20170120_pt35_fraction98_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:38:58 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.388978,2.693798,0.6031608);
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
   Double_t xAxis879[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_37 = new TH1F("hs_stack_37"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis879);
   hs_stack_37->SetMinimum(0.01);
   hs_stack_37->SetMaximum(2.65236);
   hs_stack_37->SetDirectory(0);
   hs_stack_37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_37->SetLineColor(ci);
   hs_stack_37->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_37->GetXaxis()->SetLabelFont(42);
   hs_stack_37->GetXaxis()->SetLabelSize(0.035);
   hs_stack_37->GetXaxis()->SetTitleSize(0.05);
   hs_stack_37->GetXaxis()->SetTitleFont(42);
   hs_stack_37->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_37->GetYaxis()->SetLabelFont(42);
   hs_stack_37->GetYaxis()->SetLabelSize(0.035);
   hs_stack_37->GetYaxis()->SetTitleSize(0.05);
   hs_stack_37->GetYaxis()->SetTitleFont(42);
   hs_stack_37->GetZaxis()->SetLabelFont(42);
   hs_stack_37->GetZaxis()->SetLabelSize(0.035);
   hs_stack_37->GetZaxis()->SetTitleSize(0.035);
   hs_stack_37->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_37);
   
   Double_t xAxis880[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac98_pt35__843 = new TH1F("ratehist_GE11_eta16to21_frac98_pt35__843","ratehist_GE11_eta16to21_frac98_pt35",23, xAxis880);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinContent(8,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinContent(10,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinContent(12,0.3043831);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinContent(13,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinContent(14,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinError(8,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinError(10,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinError(12,0.2152314);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinError(13,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetBinError(14,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetEntries(7);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac98_pt35__843->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac98_pt35__843->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac98_pt35__843->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac98_pt35__843->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac98_pt35__843->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35__843->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac98_pt35,"");
   Double_t xAxis881[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac98_pt35__844 = new TH1F("ratehist_hybrid_eta16to21_frac98_pt35__844","ratehist_hybrid_eta16to21_frac98_pt35",23, xAxis881);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetBinContent(10,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetBinError(10,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetEntries(4);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac98_pt35__844->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35__844->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac98_pt35,"");
   Double_t xAxis882[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845 = new TH1F("ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845","ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30",23, xAxis882);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(7,0.6087663);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(8,0.4565747);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(9,0.7609578);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(10,0.9131494);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(11,0.4565747);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(12,1.065341);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(13,1.065341);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(14,1.369724);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinContent(15,0.7609578);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(7,0.3043831);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(8,0.2636035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(9,0.3403107);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(10,0.3727917);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(11,0.2636035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(12,0.402661);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(13,0.402661);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(14,0.4565747);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetBinError(15,0.3403107);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetEntries(49);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetStats(0);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30__845->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30,"");
   Double_t xAxis883[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846 = new TH1F("ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846","ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30",23, xAxis883);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(7,0.4565747);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(9,0.3043831);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(10,0.4565747);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(11,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinContent(15,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(7,0.2636035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(9,0.2152314);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(10,0.2636035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(11,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetBinError(15,0.1521916);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetEntries(14);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30__846->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac98_pt35","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac98_pt35","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac98_pt35_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac98_pt35_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>35 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
