void TriggerRate_combiend_20170120_pt40_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:39:46 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.381388,2.693798,0.5523652);
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
   Double_t xAxis951[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_40 = new TH1F("hs_stack_40"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis951);
   hs_stack_40->SetMinimum(0.01);
   hs_stack_40->SetMaximum(2.378702);
   hs_stack_40->SetDirectory(0);
   hs_stack_40->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_40->SetLineColor(ci);
   hs_stack_40->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_40->GetXaxis()->SetLabelFont(42);
   hs_stack_40->GetXaxis()->SetLabelSize(0.035);
   hs_stack_40->GetXaxis()->SetTitleSize(0.05);
   hs_stack_40->GetXaxis()->SetTitleFont(42);
   hs_stack_40->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_40->GetYaxis()->SetLabelFont(42);
   hs_stack_40->GetYaxis()->SetLabelSize(0.035);
   hs_stack_40->GetYaxis()->SetTitleSize(0.05);
   hs_stack_40->GetYaxis()->SetTitleFont(42);
   hs_stack_40->GetZaxis()->SetLabelFont(42);
   hs_stack_40->GetZaxis()->SetLabelSize(0.035);
   hs_stack_40->GetZaxis()->SetTitleSize(0.035);
   hs_stack_40->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_40);
   
   Double_t xAxis952[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt40__912 = new TH1F("ratehist_GE11_eta16to21_frac94_pt40__912","ratehist_GE11_eta16to21_frac94_pt40",23, xAxis952);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinContent(12,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinContent(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinContent(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinError(12,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinError(13,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetBinError(14,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetEntries(5);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt40__912->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt40__912->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt40__912->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt40__912->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt40__912->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40__912->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt40,"");
   Double_t xAxis953[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt40__913 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt40__913","ratehist_hybrid_eta16to21_frac94_pt40",23, xAxis953);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetEntries(3);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt40__913->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40__913->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt40,"");
   Double_t xAxis954[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914 = new TH1F("ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914","ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30",23, xAxis954);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(7,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(8,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(9,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(10,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(11,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(12,1.065341);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(13,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(14,1.217533);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinContent(15,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(7,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(8,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(9,0.2636035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(10,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(11,0.2636035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(12,0.402661);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(13,0.3403107);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(14,0.4304627);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetBinError(15,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetEntries(40);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30__914->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30,"");
   Double_t xAxis955[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915","ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30",23, xAxis955);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinContent(7,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinContent(10,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinContent(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinContent(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinContent(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinError(7,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinError(10,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinError(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinError(12,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetBinError(14,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetEntries(8);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30__915->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt40","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt40","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt40_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt40_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>40 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
