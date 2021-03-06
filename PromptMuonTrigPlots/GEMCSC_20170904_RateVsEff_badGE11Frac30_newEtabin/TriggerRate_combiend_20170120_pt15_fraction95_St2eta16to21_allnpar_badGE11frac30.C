void TriggerRate_combiend_20170120_pt15_fraction95_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:10:04 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.477432,2.693798,1.19512);
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
   Double_t xAxis495[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_21 = new TH1F("hs_stack_21"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis495);
   hs_stack_21->SetMinimum(0.01);
   hs_stack_21->SetMaximum(9.435536);
   hs_stack_21->SetDirectory(0);
   hs_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_21->SetLineColor(ci);
   hs_stack_21->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_21->GetXaxis()->SetLabelFont(42);
   hs_stack_21->GetXaxis()->SetLabelSize(0.035);
   hs_stack_21->GetXaxis()->SetTitleSize(0.05);
   hs_stack_21->GetXaxis()->SetTitleFont(42);
   hs_stack_21->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_21->GetYaxis()->SetLabelFont(42);
   hs_stack_21->GetYaxis()->SetLabelSize(0.035);
   hs_stack_21->GetYaxis()->SetTitleSize(0.05);
   hs_stack_21->GetYaxis()->SetTitleFont(42);
   hs_stack_21->GetZaxis()->SetLabelFont(42);
   hs_stack_21->GetZaxis()->SetLabelSize(0.035);
   hs_stack_21->GetZaxis()->SetTitleSize(0.035);
   hs_stack_21->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_21);
   
   Double_t xAxis496[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac95_pt15__475 = new TH1F("ratehist_GE11_eta16to21_frac95_pt15__475","ratehist_GE11_eta16to21_frac95_pt15",23, xAxis496);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(7,1.674107);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(8,0.4565747);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(9,1.217533);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(10,2.739448);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(11,0.7609578);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(12,1.065341);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(13,1.521916);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(14,1.521916);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinContent(15,0.7609578);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(7,0.5047623);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(8,0.2636035);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(9,0.4304627);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(10,0.6456941);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(11,0.3403107);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(12,0.402661);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(13,0.481272);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(14,0.481272);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetBinError(15,0.3403107);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetEntries(77);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac95_pt15__475->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac95_pt15__475->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac95_pt15__475->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac95_pt15__475->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac95_pt15__475->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15__475->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac95_pt15,"");
   Double_t xAxis497[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac95_pt15__476 = new TH1F("ratehist_hybrid_eta16to21_frac95_pt15__476","ratehist_hybrid_eta16to21_frac95_pt15",23, xAxis497);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(7,1.217533);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(8,0.3043831);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(9,0.9131494);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(10,2.130682);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(11,0.4565747);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(12,0.7609578);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(13,1.065341);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(14,1.217533);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinContent(15,0.4565747);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(7,0.4304627);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(8,0.2152314);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(9,0.3727917);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(10,0.5694487);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(11,0.2636035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(12,0.3403107);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(13,0.402661);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(14,0.4304627);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetBinError(15,0.2636035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetEntries(56);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac95_pt15__476->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15__476->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac95_pt15,"");
   Double_t xAxis498[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477 = new TH1F("ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477","ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30",23, xAxis498);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(7,4.261364);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(8,2.739448);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(9,4.109172);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(10,5.174513);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(11,2.587256);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(12,3.95698);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(13,4.413555);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(14,4.717938);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinContent(15,3.652597);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(7,0.805322);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(8,0.6456941);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(9,0.7908105);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(10,0.8874217);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(11,0.6275019);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(12,0.7760277);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(13,0.8195766);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(14,0.8473667);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetBinError(15,0.7455833);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetEntries(234);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetStats(0);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30__477->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30,"");
   Double_t xAxis499[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478 = new TH1F("ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478","ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30",23, xAxis499);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(7,2.282873);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(8,0.6087663);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(9,1.369724);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(10,2.739448);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(11,0.7609578);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(12,1.217533);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(13,1.217533);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(14,1.369724);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinContent(15,0.4565747);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(7,0.5894354);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(8,0.3043831);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(9,0.4565747);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(10,0.6456941);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(11,0.3403107);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(12,0.4304627);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(13,0.4304627);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(14,0.4565747);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetBinError(15,0.2636035);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetEntries(79);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30__478->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac95_pt15","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac95_pt15","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac95_pt15_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac95_pt15_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>15 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
