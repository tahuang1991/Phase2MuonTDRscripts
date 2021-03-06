void TriggerRateME0_combiend_20170131_pt30_St2eta21to24_withME0_q4_allnpar_dR02_me0dphi005_Andq12_PU140()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:02:05 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-0.8962307,2.693798,3.550757);
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
   Double_t xAxis61[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_9 = new TH1F("hs_stack_9"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis61);
   hs_stack_9->SetMinimum(0.4807039);
   hs_stack_9->SetMaximum(1922.816);
   hs_stack_9->SetDirectory(0);
   hs_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_9->SetLineColor(ci);
   hs_stack_9->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_9->GetXaxis()->SetLabelFont(42);
   hs_stack_9->GetXaxis()->SetLabelSize(0.035);
   hs_stack_9->GetXaxis()->SetTitleSize(0.05);
   hs_stack_9->GetXaxis()->SetTitleFont(42);
   hs_stack_9->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_9->GetYaxis()->SetLabelFont(42);
   hs_stack_9->GetYaxis()->SetLabelSize(0.035);
   hs_stack_9->GetYaxis()->SetTitleSize(0.05);
   hs_stack_9->GetYaxis()->SetTitleFont(42);
   hs_stack_9->GetZaxis()->SetLabelFont(42);
   hs_stack_9->GetZaxis()->SetLabelSize(0.035);
   hs_stack_9->GetZaxis()->SetTitleSize(0.035);
   hs_stack_9->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_9);
   
   Double_t xAxis62[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step0__53 = new TH1F("ratehist_ME0_step0__53","ratehist_ME0_step0",23, xAxis62);
   ratehist_ME0_step0__53->SetBinContent(16,560.2171);
   ratehist_ME0_step0__53->SetBinContent(17,866.1221);
   ratehist_ME0_step0__53->SetBinContent(18,854.2512);
   ratehist_ME0_step0__53->SetBinContent(19,877.6887);
   ratehist_ME0_step0__53->SetBinContent(20,1188.312);
   ratehist_ME0_step0__53->SetBinContent(21,1134.74);
   ratehist_ME0_step0__53->SetBinError(16,9.233651);
   ratehist_ME0_step0__53->SetBinError(17,11.48114);
   ratehist_ME0_step0__53->SetBinError(18,11.40219);
   ratehist_ME0_step0__53->SetBinError(19,11.55754);
   ratehist_ME0_step0__53->SetBinError(20,13.44809);
   ratehist_ME0_step0__53->SetBinError(21,13.14146);
   ratehist_ME0_step0__53->SetEntries(36016);
   ratehist_ME0_step0__53->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__53->SetLineColor(ci);
   ratehist_ME0_step0__53->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__53->SetMarkerColor(ci);
   ratehist_ME0_step0__53->SetMarkerStyle(26);
   ratehist_ME0_step0__53->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step0__53->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step0__53->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__53->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__53->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step0__53->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step0__53->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step0__53->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__53->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__53->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step0__53->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step0__53->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__53->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__53->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step0,"");
   Double_t xAxis63[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step1__54 = new TH1F("ratehist_ME0_step1__54","ratehist_ME0_step1",23, xAxis63);
   ratehist_ME0_step1__54->SetBinContent(16,4.87013);
   ratehist_ME0_step1__54->SetBinContent(17,10.65341);
   ratehist_ME0_step1__54->SetBinContent(18,10.34903);
   ratehist_ME0_step1__54->SetBinContent(19,10.95779);
   ratehist_ME0_step1__54->SetBinContent(20,14.61039);
   ratehist_ME0_step1__54->SetBinContent(21,12.6319);
   ratehist_ME0_step1__54->SetBinError(16,0.8609255);
   ratehist_ME0_step1__54->SetBinError(17,1.273326);
   ratehist_ME0_step1__54->SetBinError(18,1.255004);
   ratehist_ME0_step1__54->SetBinError(19,1.291388);
   ratehist_ME0_step1__54->SetBinError(20,1.491167);
   ratehist_ME0_step1__54->SetBinError(21,1.386531);
   ratehist_ME0_step1__54->SetEntries(421);
   ratehist_ME0_step1__54->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__54->SetLineColor(ci);
   ratehist_ME0_step1__54->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__54->SetMarkerColor(ci);
   ratehist_ME0_step1__54->SetMarkerStyle(25);
   ratehist_ME0_step1__54->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step1__54->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step1__54->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__54->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__54->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step1__54->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step1__54->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step1__54->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__54->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__54->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step1__54->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step1__54->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__54->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__54->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step1,"");
   Double_t xAxis64[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step2__55 = new TH1F("ratehist_ME0_step2__55","ratehist_ME0_step2",23, xAxis64);
   ratehist_ME0_step2__55->SetBinContent(16,2.130682);
   ratehist_ME0_step2__55->SetBinContent(17,3.348214);
   ratehist_ME0_step2__55->SetBinContent(18,2.739448);
   ratehist_ME0_step2__55->SetBinContent(19,3.348214);
   ratehist_ME0_step2__55->SetBinContent(20,6.544237);
   ratehist_ME0_step2__55->SetBinContent(21,5.478896);
   ratehist_ME0_step2__55->SetBinError(16,0.5694487);
   ratehist_ME0_step2__55->SetBinError(17,0.7138417);
   ratehist_ME0_step2__55->SetBinError(18,0.6456941);
   ratehist_ME0_step2__55->SetBinError(19,0.7138417);
   ratehist_ME0_step2__55->SetBinError(20,0.9979868);
   ratehist_ME0_step2__55->SetBinError(21,0.9131494);
   ratehist_ME0_step2__55->SetEntries(155);
   ratehist_ME0_step2__55->SetStats(0);
   ratehist_ME0_step2__55->SetLineWidth(2);
   ratehist_ME0_step2__55->SetMarkerStyle(21);
   ratehist_ME0_step2__55->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step2__55->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step2__55->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__55->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__55->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step2__55->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step2__55->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step2__55->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__55->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__55->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step2__55->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step2__55->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__55->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__55->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step2,"");
   Double_t xAxis65[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0__56 = new TH1F("ratehist_ME0__56","ratehist_ME0",23, xAxis65);
   ratehist_ME0__56->SetBinContent(18,0.3043831);
   ratehist_ME0__56->SetBinContent(20,0.3043831);
   ratehist_ME0__56->SetBinContent(21,0.9131494);
   ratehist_ME0__56->SetBinError(18,0.2152314);
   ratehist_ME0__56->SetBinError(20,0.2152314);
   ratehist_ME0__56->SetBinError(21,0.3727917);
   ratehist_ME0__56->SetEntries(10);
   ratehist_ME0__56->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__56->SetLineColor(ci);
   ratehist_ME0__56->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__56->SetMarkerColor(ci);
   ratehist_ME0__56->SetMarkerStyle(24);
   ratehist_ME0__56->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0__56->GetXaxis()->SetLabelFont(42);
   ratehist_ME0__56->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0__56->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0__56->GetXaxis()->SetTitleFont(42);
   ratehist_ME0__56->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0__56->GetYaxis()->SetLabelFont(42);
   ratehist_ME0__56->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0__56->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0__56->GetYaxis()->SetTitleFont(42);
   ratehist_ME0__56->GetZaxis()->SetLabelFont(42);
   ratehist_ME0__56->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0__56->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0__56->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.2,0.15,0.75,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1 Muon with EMTFQ>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0_step0","No pt cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0_step1","p_{T}^{L1}>10 GeV","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0_step2","p_{T}^{L1}>10 GeV + L1Mu with ME0","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0","p_{T}^{L1}>10 GeV + L1Mu with ME0+ME0 bending cut","pl");

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
      tex = new TLatex(0.2,0.88,"Prompt muon trigger ");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
