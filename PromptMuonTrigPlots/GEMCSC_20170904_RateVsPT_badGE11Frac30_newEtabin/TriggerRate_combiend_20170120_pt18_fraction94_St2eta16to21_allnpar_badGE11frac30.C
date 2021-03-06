void TriggerRate_combiend_20170120_pt18_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:09 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.450942,2.693798,1.017845);
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
   Double_t xAxis615[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_26 = new TH1F("hs_stack_26"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis615);
   hs_stack_26->SetMinimum(0.01);
   hs_stack_26->SetMaximum(6.452353);
   hs_stack_26->SetDirectory(0);
   hs_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_26->SetLineColor(ci);
   hs_stack_26->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_26->GetXaxis()->SetLabelFont(42);
   hs_stack_26->GetXaxis()->SetLabelSize(0.035);
   hs_stack_26->GetXaxis()->SetTitleSize(0.05);
   hs_stack_26->GetXaxis()->SetTitleFont(42);
   hs_stack_26->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_26->GetYaxis()->SetLabelFont(42);
   hs_stack_26->GetYaxis()->SetLabelSize(0.035);
   hs_stack_26->GetYaxis()->SetTitleSize(0.05);
   hs_stack_26->GetYaxis()->SetTitleFont(42);
   hs_stack_26->GetZaxis()->SetLabelFont(42);
   hs_stack_26->GetZaxis()->SetLabelSize(0.035);
   hs_stack_26->GetZaxis()->SetTitleSize(0.035);
   hs_stack_26->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_26);
   
   Double_t xAxis616[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt18__590 = new TH1F("ratehist_GE11_eta16to21_frac94_pt18__590","ratehist_GE11_eta16to21_frac94_pt18",23, xAxis616);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(7,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(8,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(9,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(10,1.217533);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(12,0.9131494);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(13,1.369724);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinContent(14,0.6087663);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(7,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(8,0.2152314);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(9,0.2636035);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(10,0.4304627);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(12,0.3727917);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(13,0.4565747);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetBinError(14,0.3043831);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetEntries(35);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt18__590->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt18__590->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt18__590->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt18__590->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt18__590->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18__590->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt18,"");
   Double_t xAxis617[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt18__591 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt18__591","ratehist_hybrid_eta16to21_frac94_pt18",23, xAxis617);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(7,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(9,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(10,0.9131494);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(12,0.6087663);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(13,0.9131494);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinContent(14,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(7,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(9,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(10,0.3727917);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(11,0.1521916);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(12,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(13,0.3727917);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetBinError(14,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetEntries(27);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt18__591->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18__591->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt18,"");
   Double_t xAxis618[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592 = new TH1F("ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592","ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30",23, xAxis618);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(7,2.739448);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(8,2.282873);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(9,2.435065);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(10,3.043831);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(11,1.217533);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(12,3.196023);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(13,3.500406);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(14,2.89164);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinContent(15,2.282873);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(7,0.6456941);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(8,0.5894354);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(9,0.6087662);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(10,0.6806213);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(11,0.4304627);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(12,0.6974293);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(13,0.7298851);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(14,0.6633876);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetBinError(15,0.5894354);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetEntries(155);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30__592->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30,"");
   Double_t xAxis619[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593","ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30",23, xAxis619);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(7,1.521916);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(8,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(9,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(10,1.217533);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(11,0.4565747);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(12,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(13,1.065341);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinContent(14,0.3043831);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(7,0.481272);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(8,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(9,0.3403107);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(10,0.4304627);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(11,0.2636035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(12,0.3403107);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(13,0.402661);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetBinError(14,0.2152314);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetEntries(43);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30__593->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt18","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt18","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt18_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt18_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>18 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
