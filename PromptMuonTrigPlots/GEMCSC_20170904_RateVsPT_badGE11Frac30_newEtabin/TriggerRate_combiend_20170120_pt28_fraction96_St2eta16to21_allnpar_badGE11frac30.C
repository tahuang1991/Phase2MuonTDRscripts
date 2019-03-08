void TriggerRate_combiend_20170120_pt28_fraction96_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:37:54 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.407705,2.693798,0.7284852);
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
   Double_t xAxis783[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_33 = new TH1F("hs_stack_33"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis783);
   hs_stack_33->SetMinimum(0.01);
   hs_stack_33->SetMaximum(3.469875);
   hs_stack_33->SetDirectory(0);
   hs_stack_33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_33->SetLineColor(ci);
   hs_stack_33->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_33->GetXaxis()->SetLabelFont(42);
   hs_stack_33->GetXaxis()->SetLabelSize(0.035);
   hs_stack_33->GetXaxis()->SetTitleSize(0.05);
   hs_stack_33->GetXaxis()->SetTitleFont(42);
   hs_stack_33->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_33->GetYaxis()->SetLabelFont(42);
   hs_stack_33->GetYaxis()->SetLabelSize(0.035);
   hs_stack_33->GetYaxis()->SetTitleSize(0.05);
   hs_stack_33->GetYaxis()->SetTitleFont(42);
   hs_stack_33->GetZaxis()->SetLabelFont(42);
   hs_stack_33->GetZaxis()->SetLabelSize(0.035);
   hs_stack_33->GetZaxis()->SetTitleSize(0.035);
   hs_stack_33->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_33);
   
   Double_t xAxis784[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac96_pt28__751 = new TH1F("ratehist_GE11_eta16to21_frac96_pt28__751","ratehist_GE11_eta16to21_frac96_pt28",23, xAxis784);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinContent(8,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinContent(9,0.3043831);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinContent(10,0.3043831);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinContent(12,0.3043831);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinContent(13,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinContent(14,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinError(8,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinError(9,0.2152314);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinError(10,0.2152314);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinError(12,0.2152314);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinError(13,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetBinError(14,0.1521916);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetEntries(10);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac96_pt28__751->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac96_pt28__751->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac96_pt28__751->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac96_pt28__751->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac96_pt28__751->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28__751->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac96_pt28,"");
   Double_t xAxis785[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac96_pt28__752 = new TH1F("ratehist_hybrid_eta16to21_frac96_pt28__752","ratehist_hybrid_eta16to21_frac96_pt28",23, xAxis785);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetBinContent(10,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetBinError(10,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetEntries(4);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt28__752->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28__752->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac96_pt28,"");
   Double_t xAxis786[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753 = new TH1F("ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753","ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30",23, xAxis786);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(7,1.217533);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(8,0.9131494);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(9,1.521916);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(10,1.369724);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(11,0.6087663);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(12,1.826299);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(13,1.674107);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(14,1.674107);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinContent(15,0.7609578);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(7,0.4304627);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(8,0.3727917);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(9,0.481272);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(10,0.4565747);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(11,0.3043831);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(12,0.527207);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(13,0.5047623);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(14,0.5047623);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetBinError(15,0.3403107);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetEntries(76);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetStats(0);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30__753->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30,"");
   Double_t xAxis787[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754 = new TH1F("ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754","ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30",23, xAxis787);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinContent(7,0.4565747);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinContent(9,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinContent(10,0.4565747);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinContent(11,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinContent(12,0.4565747);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinError(7,0.2636035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinError(9,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinError(10,0.2636035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinError(11,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinError(12,0.2636035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetEntries(13);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30__754->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac96_pt28","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac96_pt28","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac96_pt28_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac96_pt28_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>28 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
