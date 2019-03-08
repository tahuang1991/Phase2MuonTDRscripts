void TriggerRateME0_combiend_20170131_pt40_St2eta21to24_withME0_q4_allnpar_dR02_me0dphi005_Andq12_PU140()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 13:50:08 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-0.07862128,2.693798,4.368366);
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
   Double_t xAxis76[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_11 = new TH1F("hs_stack_11"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis76);
   hs_stack_11->SetMinimum(3.158545);
   hs_stack_11->SetMaximum(12634.18);
   hs_stack_11->SetDirectory(0);
   hs_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_11->SetLineColor(ci);
   hs_stack_11->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_11->GetXaxis()->SetLabelFont(42);
   hs_stack_11->GetXaxis()->SetLabelSize(0.035);
   hs_stack_11->GetXaxis()->SetTitleSize(0.05);
   hs_stack_11->GetXaxis()->SetTitleFont(42);
   hs_stack_11->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_11->GetYaxis()->SetLabelFont(42);
   hs_stack_11->GetYaxis()->SetLabelSize(0.035);
   hs_stack_11->GetYaxis()->SetTitleSize(0.05);
   hs_stack_11->GetYaxis()->SetTitleFont(42);
   hs_stack_11->GetZaxis()->SetLabelFont(42);
   hs_stack_11->GetZaxis()->SetLabelSize(0.035);
   hs_stack_11->GetZaxis()->SetTitleSize(0.035);
   hs_stack_11->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_11);
   
   Double_t xAxis77[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step0__66 = new TH1F("ratehist_ME0_step0__66","ratehist_ME0_step0",23, xAxis77);
   ratehist_ME0_step0__66->SetBinContent(16,3681);
   ratehist_ME0_step0__66->SetBinContent(17,5691);
   ratehist_ME0_step0__66->SetBinContent(18,5613);
   ratehist_ME0_step0__66->SetBinContent(19,5767);
   ratehist_ME0_step0__66->SetBinContent(20,7808);
   ratehist_ME0_step0__66->SetBinContent(21,7456);
   ratehist_ME0_step0__66->SetEntries(36016);
   ratehist_ME0_step0__66->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__66->SetLineColor(ci);
   ratehist_ME0_step0__66->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__66->SetMarkerColor(ci);
   ratehist_ME0_step0__66->SetMarkerStyle(26);
   ratehist_ME0_step0__66->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step0__66->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step0__66->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__66->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__66->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step0__66->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step0__66->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step0__66->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__66->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__66->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step0__66->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step0__66->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__66->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__66->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step0,"");
   Double_t xAxis78[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step1__67 = new TH1F("ratehist_ME0_step1__67","ratehist_ME0_step1",23, xAxis78);
   ratehist_ME0_step1__67->SetBinContent(16,24);
   ratehist_ME0_step1__67->SetBinContent(17,53);
   ratehist_ME0_step1__67->SetBinContent(18,51);
   ratehist_ME0_step1__67->SetBinContent(19,41);
   ratehist_ME0_step1__67->SetBinContent(20,68);
   ratehist_ME0_step1__67->SetBinContent(21,62);
   ratehist_ME0_step1__67->SetEntries(299);
   ratehist_ME0_step1__67->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__67->SetLineColor(ci);
   ratehist_ME0_step1__67->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__67->SetMarkerColor(ci);
   ratehist_ME0_step1__67->SetMarkerStyle(25);
   ratehist_ME0_step1__67->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step1__67->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step1__67->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__67->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__67->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step1__67->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step1__67->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step1__67->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__67->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__67->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step1__67->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step1__67->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__67->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__67->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step1,"");
   Double_t xAxis79[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step2__68 = new TH1F("ratehist_ME0_step2__68","ratehist_ME0_step2",23, xAxis79);
   ratehist_ME0_step2__68->SetBinContent(16,10);
   ratehist_ME0_step2__68->SetBinContent(17,16);
   ratehist_ME0_step2__68->SetBinContent(18,13);
   ratehist_ME0_step2__68->SetBinContent(19,13);
   ratehist_ME0_step2__68->SetBinContent(20,28);
   ratehist_ME0_step2__68->SetBinContent(21,28);
   ratehist_ME0_step2__68->SetEntries(108);
   ratehist_ME0_step2__68->SetStats(0);
   ratehist_ME0_step2__68->SetLineWidth(2);
   ratehist_ME0_step2__68->SetMarkerStyle(21);
   ratehist_ME0_step2__68->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step2__68->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step2__68->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__68->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__68->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step2__68->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step2__68->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step2__68->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__68->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__68->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step2__68->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step2__68->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__68->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__68->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step2,"");
   Double_t xAxis80[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0__69 = new TH1F("ratehist_ME0__69","ratehist_ME0",23, xAxis80);
   ratehist_ME0__69->SetBinContent(18,2);
   ratehist_ME0__69->SetBinContent(20,1);
   ratehist_ME0__69->SetBinContent(21,4);
   ratehist_ME0__69->SetEntries(7);
   ratehist_ME0__69->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__69->SetLineColor(ci);
   ratehist_ME0__69->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__69->SetMarkerColor(ci);
   ratehist_ME0__69->SetMarkerStyle(24);
   ratehist_ME0__69->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0__69->GetXaxis()->SetLabelFont(42);
   ratehist_ME0__69->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0__69->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0__69->GetXaxis()->SetTitleFont(42);
   ratehist_ME0__69->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0__69->GetYaxis()->SetLabelFont(42);
   ratehist_ME0__69->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0__69->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0__69->GetYaxis()->SetTitleFont(42);
   ratehist_ME0__69->GetZaxis()->SetLabelFont(42);
   ratehist_ME0__69->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0__69->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0__69->GetZaxis()->SetTitleFont(42);
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
