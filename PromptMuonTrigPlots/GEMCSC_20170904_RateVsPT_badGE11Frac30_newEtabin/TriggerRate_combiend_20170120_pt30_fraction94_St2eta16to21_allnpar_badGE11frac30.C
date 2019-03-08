void TriggerRate_combiend_20170120_pt30_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:38:41 2017) by ROOT version6.08/06
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
   Double_t xAxis855[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_36 = new TH1F("hs_stack_36"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis855);
   hs_stack_36->SetMinimum(0.01);
   hs_stack_36->SetMaximum(3.469875);
   hs_stack_36->SetDirectory(0);
   hs_stack_36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_36->SetLineColor(ci);
   hs_stack_36->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_36->GetXaxis()->SetLabelFont(42);
   hs_stack_36->GetXaxis()->SetLabelSize(0.035);
   hs_stack_36->GetXaxis()->SetTitleSize(0.05);
   hs_stack_36->GetXaxis()->SetTitleFont(42);
   hs_stack_36->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_36->GetYaxis()->SetLabelFont(42);
   hs_stack_36->GetYaxis()->SetLabelSize(0.035);
   hs_stack_36->GetYaxis()->SetTitleSize(0.05);
   hs_stack_36->GetYaxis()->SetTitleFont(42);
   hs_stack_36->GetZaxis()->SetLabelFont(42);
   hs_stack_36->GetZaxis()->SetLabelSize(0.035);
   hs_stack_36->GetZaxis()->SetTitleSize(0.035);
   hs_stack_36->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_36);
   
   Double_t xAxis856[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt30__820 = new TH1F("ratehist_GE11_eta16to21_frac94_pt30__820","ratehist_GE11_eta16to21_frac94_pt30",23, xAxis856);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinContent(9,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinContent(10,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinContent(12,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinContent(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinContent(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinError(9,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinError(10,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinError(12,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinError(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetBinError(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetEntries(7);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt30__820->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt30__820->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt30__820->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt30__820->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt30__820->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30__820->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt30,"");
   Double_t xAxis857[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt30__821 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt30__821","ratehist_hybrid_eta16to21_frac94_pt30",23, xAxis857);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetBinContent(10,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetBinError(10,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetEntries(4);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt30__821->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30__821->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt30,"");
   Double_t xAxis858[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822 = new TH1F("ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822","ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30",23, xAxis858);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(7,1.217533);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(8,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(9,1.217533);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(10,0.9131494);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(11,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(12,1.826299);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(13,1.217533);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(14,1.369724);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinContent(15,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(7,0.4304627);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(8,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(9,0.4304627);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(10,0.3727917);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(11,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(12,0.527207);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(13,0.4304627);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(14,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetBinError(15,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetEntries(65);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30__822->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30,"");
   Double_t xAxis859[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823","ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30",23, xAxis859);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinContent(7,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinContent(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinContent(10,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinContent(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinError(7,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinError(9,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinError(10,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinError(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetEntries(12);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30__823->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt30","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt30","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt30_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt30_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>30 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
