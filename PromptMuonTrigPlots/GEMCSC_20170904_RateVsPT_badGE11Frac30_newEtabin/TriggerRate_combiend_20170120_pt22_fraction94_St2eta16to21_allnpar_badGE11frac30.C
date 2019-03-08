void TriggerRate_combiend_20170120_pt22_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:37:09 2017) by ROOT version6.08/06
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
   Double_t xAxis711[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_30 = new TH1F("hs_stack_30"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis711);
   hs_stack_30->SetMinimum(0.01);
   hs_stack_30->SetMaximum(4.826733);
   hs_stack_30->SetDirectory(0);
   hs_stack_30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_30->SetLineColor(ci);
   hs_stack_30->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_30->GetXaxis()->SetLabelFont(42);
   hs_stack_30->GetXaxis()->SetLabelSize(0.035);
   hs_stack_30->GetXaxis()->SetTitleSize(0.05);
   hs_stack_30->GetXaxis()->SetTitleFont(42);
   hs_stack_30->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_30->GetYaxis()->SetLabelFont(42);
   hs_stack_30->GetYaxis()->SetLabelSize(0.035);
   hs_stack_30->GetYaxis()->SetTitleSize(0.05);
   hs_stack_30->GetYaxis()->SetTitleFont(42);
   hs_stack_30->GetZaxis()->SetLabelFont(42);
   hs_stack_30->GetZaxis()->SetLabelSize(0.035);
   hs_stack_30->GetZaxis()->SetTitleSize(0.035);
   hs_stack_30->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_30);
   
   Double_t xAxis712[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt22__682 = new TH1F("ratehist_GE11_eta16to21_frac94_pt22__682","ratehist_GE11_eta16to21_frac94_pt22",23, xAxis712);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinContent(8,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinContent(9,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinContent(10,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinContent(12,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinContent(13,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinContent(14,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinError(8,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinError(9,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinError(10,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinError(12,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinError(13,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetBinError(14,0.2636035);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetEntries(20);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt22__682->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt22__682->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt22__682->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt22__682->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt22__682->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22__682->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt22,"");
   Double_t xAxis713[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt22__683 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt22__683","ratehist_hybrid_eta16to21_frac94_pt22",23, xAxis713);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinContent(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinContent(10,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinContent(13,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinContent(14,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinError(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinError(10,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinError(13,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetBinError(14,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetEntries(11);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt22__683->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22__683->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt22,"");
   Double_t xAxis714[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684 = new TH1F("ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684","ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30",23, xAxis714);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(7,1.826299);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(8,1.521916);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(9,1.97849);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(10,2.282873);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(11,0.9131494);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(12,2.282873);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(13,2.435065);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(14,2.587256);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinContent(15,1.826299);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(7,0.527207);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(8,0.481272);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(9,0.5487345);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(10,0.5894354);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(11,0.3727917);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(12,0.5894354);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(13,0.6087662);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(14,0.6275019);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetBinError(15,0.527207);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetEntries(116);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30__684->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30,"");
   Double_t xAxis715[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685","ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30",23, xAxis715);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(7,0.6087663);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(9,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(10,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(11,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(13,0.6087663);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(7,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(9,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(10,0.3403107);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(11,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(13,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetEntries(21);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30__685->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt22","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt22","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt22_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt22_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
