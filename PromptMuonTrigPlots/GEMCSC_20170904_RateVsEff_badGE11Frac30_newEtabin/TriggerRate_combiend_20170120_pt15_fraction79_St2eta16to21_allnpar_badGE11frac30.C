void TriggerRate_combiend_20170120_pt15_fraction79_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:06:21 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.47114,2.693798,1.153017);
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
   Double_t xAxis111[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis111);
   hs_stack_5->SetMinimum(0.01);
   hs_stack_5->SetMaximum(8.621202);
   hs_stack_5->SetDirectory(0);
   hs_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_5->SetLineColor(ci);
   hs_stack_5->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_5->GetXaxis()->SetLabelFont(42);
   hs_stack_5->GetXaxis()->SetLabelSize(0.035);
   hs_stack_5->GetXaxis()->SetTitleSize(0.05);
   hs_stack_5->GetXaxis()->SetTitleFont(42);
   hs_stack_5->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_5->GetYaxis()->SetLabelFont(42);
   hs_stack_5->GetYaxis()->SetLabelSize(0.035);
   hs_stack_5->GetYaxis()->SetTitleSize(0.05);
   hs_stack_5->GetYaxis()->SetTitleFont(42);
   hs_stack_5->GetZaxis()->SetLabelFont(42);
   hs_stack_5->GetZaxis()->SetLabelSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_5);
   
   Double_t xAxis112[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac79_pt15__107 = new TH1F("ratehist_GE11_eta16to21_frac79_pt15__107","ratehist_GE11_eta16to21_frac79_pt15",23, xAxis112);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(7,0.4565747);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(8,0.3043831);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(9,0.6087663);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(10,1.97849);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(11,0.3043831);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(12,1.065341);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(13,1.369724);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(14,0.9131494);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinContent(15,0.7609578);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(7,0.2636035);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(8,0.2152314);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(9,0.3043831);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(10,0.5487345);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(11,0.2152314);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(12,0.402661);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(13,0.4565747);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(14,0.3727917);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetBinError(15,0.3403107);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetEntries(51);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac79_pt15__107->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac79_pt15__107->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac79_pt15__107->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac79_pt15__107->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac79_pt15__107->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15__107->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac79_pt15,"");
   Double_t xAxis113[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac79_pt15__108 = new TH1F("ratehist_hybrid_eta16to21_frac79_pt15__108","ratehist_hybrid_eta16to21_frac79_pt15",23, xAxis113);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(7,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(8,0.1521916);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(9,0.7609578);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(10,1.217533);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(12,0.6087663);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(13,0.6087663);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(14,0.7609578);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinContent(15,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(7,0.2152314);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(8,0.1521916);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(9,0.3403107);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(10,0.4304627);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(12,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(13,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(14,0.3403107);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetBinError(15,0.2152314);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetEntries(31);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac79_pt15__108->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15__108->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac79_pt15,"");
   Double_t xAxis114[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109 = new TH1F("ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109","ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30",23, xAxis114);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(7,3.500406);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(8,2.739448);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(9,3.652597);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(10,4.717938);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(11,2.282873);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(12,3.95698);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(13,4.261364);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(14,4.261364);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinContent(15,3.652597);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(7,0.7298851);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(8,0.6456941);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(9,0.7455833);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(10,0.8473667);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(11,0.5894354);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(12,0.7760277);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(13,0.805322);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(14,0.805322);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetBinError(15,0.7455833);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetEntries(217);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetStats(0);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30__109->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30,"");
   Double_t xAxis115[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110 = new TH1F("ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110","ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30",23, xAxis115);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(7,1.065341);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(8,0.6087663);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(9,0.9131494);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(10,1.521916);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(11,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(12,0.6087663);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(13,0.9131494);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(14,0.7609578);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinContent(15,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(7,0.402661);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(8,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(9,0.3727917);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(10,0.481272);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(11,0.2152314);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(12,0.3043831);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(13,0.3727917);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(14,0.3403107);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetBinError(15,0.2152314);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetEntries(46);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30__110->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac79_pt15","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac79_pt15","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac79_pt15_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac79_pt15_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
