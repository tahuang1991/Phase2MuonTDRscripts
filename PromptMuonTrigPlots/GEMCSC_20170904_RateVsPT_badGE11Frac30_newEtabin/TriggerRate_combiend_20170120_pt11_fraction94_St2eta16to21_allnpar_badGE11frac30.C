void TriggerRate_combiend_20170120_pt11_fraction94_St2eta16to21_allnpar_badGE11frac30()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:32:59 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.516487,2.693798,1.456493);
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
   Double_t xAxis327[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_14 = new TH1F("hs_stack_14"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis327);
   hs_stack_14->SetMinimum(0.01);
   hs_stack_14->SetMaximum(16.52395);
   hs_stack_14->SetDirectory(0);
   hs_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_14->SetLineColor(ci);
   hs_stack_14->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_14->GetXaxis()->SetLabelFont(42);
   hs_stack_14->GetXaxis()->SetLabelSize(0.035);
   hs_stack_14->GetXaxis()->SetTitleSize(0.05);
   hs_stack_14->GetXaxis()->SetTitleFont(42);
   hs_stack_14->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_14->GetYaxis()->SetLabelFont(42);
   hs_stack_14->GetYaxis()->SetLabelSize(0.035);
   hs_stack_14->GetYaxis()->SetTitleSize(0.05);
   hs_stack_14->GetYaxis()->SetTitleFont(42);
   hs_stack_14->GetZaxis()->SetLabelFont(42);
   hs_stack_14->GetZaxis()->SetLabelSize(0.035);
   hs_stack_14->GetZaxis()->SetTitleSize(0.035);
   hs_stack_14->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_14);
   
   Double_t xAxis328[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt11__314 = new TH1F("ratehist_GE11_eta16to21_frac94_pt11__314","ratehist_GE11_eta16to21_frac94_pt11",23, xAxis328);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(7,3.804789);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(8,1.674107);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(9,3.348214);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(10,5.478896);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(11,3.043831);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(12,3.043831);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(13,3.500406);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(14,3.043831);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinContent(15,2.130682);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(7,0.7609578);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(8,0.5047623);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(9,0.7138417);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(10,0.9131494);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(11,0.6806213);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(12,0.6806213);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(13,0.7298851);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(14,0.6806213);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetBinError(15,0.5694487);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetEntries(191);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt11__314->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_GE11_eta16to21_frac94_pt11__314->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac94_pt11__314->SetMarkerStyle(26);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt11__314->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt11__314->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11__314->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt11,"");
   Double_t xAxis329[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt11__315 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt11__315","ratehist_hybrid_eta16to21_frac94_pt11",23, xAxis329);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(7,3.500406);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(8,0.9131494);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(9,3.043831);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(10,4.565747);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(11,2.739448);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(12,3.196023);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(13,3.043831);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(14,2.282873);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinContent(15,1.674107);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(7,0.7298851);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(8,0.3727917);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(9,0.6806213);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(10,0.8335875);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(11,0.6456941);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(12,0.6974293);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(13,0.6806213);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(14,0.5894354);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetBinError(15,0.5047623);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetEntries(164);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt11__315->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11__315->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt11,"");
   Double_t xAxis330[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316 = new TH1F("ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316","ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30",23, xAxis330);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(7,8.218344);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(8,5.631088);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(9,7.457386);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(10,9.131494);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(11,6.84862);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(12,7.457386);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(13,7.457386);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(14,7.153003);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinContent(15,6.087662);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(7,1.118375);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(8,0.9257451);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(9,1.065341);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(10,1.178871);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(11,1.020932);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(12,1.065341);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(13,1.065341);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(14,1.043373);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetBinError(15,0.9625439);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetEntries(430);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetStats(0);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetLineWidth(2);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->SetMarkerStyle(21);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30__316->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30,"");
   Double_t xAxis331[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317 = new TH1F("ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317","ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30",23, xAxis331);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(7,4.87013);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(8,1.97849);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(9,4.261364);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(10,5.174513);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(11,3.348214);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(12,3.804789);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(13,3.348214);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(14,2.282873);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinContent(15,1.97849);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(7,0.8609255);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(8,0.5487345);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(9,0.805322);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(10,0.8874217);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(11,0.7138417);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(12,0.7609578);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(13,0.7138417);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(14,0.5894354);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetBinError(15,0.5487345);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetEntries(204);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->SetMarkerStyle(24);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30__317->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30,"");
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
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt11","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt11","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac94_pt11_badGE11frac30","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac94_pt11_badGE11frac30","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
      tex = new TLatex(0.2,0.5,"1.65<|#eta|<2.10, p_{T}^{L1}>11 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
