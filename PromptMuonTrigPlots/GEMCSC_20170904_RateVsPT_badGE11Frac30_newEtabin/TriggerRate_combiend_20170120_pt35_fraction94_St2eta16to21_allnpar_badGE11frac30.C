void TriggerRate_combiend_20170120_pt35_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:39:13 2017) by ROOT version6.08/06
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
   Double_t xAxis903[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_38 = new TH1F("hs_stack_38"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis903);
   hs_stack_38->SetMinimum(0.01);
   hs_stack_38->SetMaximum(2.65236);
   hs_stack_38->SetDirectory(0);
   hs_stack_38->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_38->SetLineColor(ci);
   hs_stack_38->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_38->GetXaxis()->SetLabelFont(42);
   hs_stack_38->GetXaxis()->SetLabelSize(0.035);
   hs_stack_38->GetXaxis()->SetTitleSize(0.05);
   hs_stack_38->GetXaxis()->SetTitleFont(42);
   hs_stack_38->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_38->GetYaxis()->SetLabelFont(42);
   hs_stack_38->GetYaxis()->SetLabelSize(0.035);
   hs_stack_38->GetYaxis()->SetTitleSize(0.05);
   hs_stack_38->GetYaxis()->SetTitleFont(42);
   hs_stack_38->GetZaxis()->SetLabelFont(42);
   hs_stack_38->GetZaxis()->SetLabelSize(0.035);
   hs_stack_38->GetZaxis()->SetTitleSize(0.035);
   hs_stack_38->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_38);
   
   Double_t xAxis904[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt35__866 = new TH1F("ratehist_GE11_eta16to21_frac94_pt35__866","ratehist_GE11_eta16to21_frac94_pt35",23, xAxis904);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinContent(10,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinContent(12,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinContent(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinContent(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinError(10,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinError(12,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinError(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetBinError(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetEntries(6);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt35__866->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt35__866->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt35__866->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt35__866->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt35__866->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35__866->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt35,"");
   Double_t xAxis905[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt35__867 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt35__867","ratehist_hybrid_eta16to21_frac94_pt35",23, xAxis905);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetBinContent(10,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetBinError(10,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetEntries(4);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt35__867->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35__867->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt35,"");
   Double_t xAxis906[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868 = new TH1F("ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868","ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30",23, xAxis906);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(7,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(8,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(9,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(10,0.9131494);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(11,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(12,1.065341);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(13,1.065341);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(14,1.369724);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinContent(15,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(7,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(8,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(9,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(10,0.3727917);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(11,0.2636035);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(12,0.402661);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(13,0.402661);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(14,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetBinError(15,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetEntries(48);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30__868->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30,"");
   Double_t xAxis907[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869","ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30",23, xAxis907);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinContent(7,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinContent(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinContent(10,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinContent(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinError(7,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinError(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinError(10,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinError(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetEntries(10);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30__869->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt35","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt35","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt35_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt35_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
