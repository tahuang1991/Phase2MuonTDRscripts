void TriggerRateME0_combiend_20170131_pt25_St2eta21to24_withME0_q4_allnpar_dR02_me0dphi005_Andq12_PU140()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 13:50:04 2017) by ROOT version6.08/06
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
   Double_t xAxis46[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_7 = new TH1F("hs_stack_7"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis46);
   hs_stack_7->SetMinimum(3.158545);
   hs_stack_7->SetMaximum(12634.18);
   hs_stack_7->SetDirectory(0);
   hs_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_7->SetLineColor(ci);
   hs_stack_7->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_7->GetXaxis()->SetLabelFont(42);
   hs_stack_7->GetXaxis()->SetLabelSize(0.035);
   hs_stack_7->GetXaxis()->SetTitleSize(0.05);
   hs_stack_7->GetXaxis()->SetTitleFont(42);
   hs_stack_7->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_7->GetYaxis()->SetLabelFont(42);
   hs_stack_7->GetYaxis()->SetLabelSize(0.035);
   hs_stack_7->GetYaxis()->SetTitleSize(0.05);
   hs_stack_7->GetYaxis()->SetTitleFont(42);
   hs_stack_7->GetZaxis()->SetLabelFont(42);
   hs_stack_7->GetZaxis()->SetLabelSize(0.035);
   hs_stack_7->GetZaxis()->SetTitleSize(0.035);
   hs_stack_7->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_7);
   
   Double_t xAxis47[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step0__40 = new TH1F("ratehist_ME0_step0__40","ratehist_ME0_step0",23, xAxis47);
   ratehist_ME0_step0__40->SetBinContent(16,3681);
   ratehist_ME0_step0__40->SetBinContent(17,5691);
   ratehist_ME0_step0__40->SetBinContent(18,5613);
   ratehist_ME0_step0__40->SetBinContent(19,5767);
   ratehist_ME0_step0__40->SetBinContent(20,7808);
   ratehist_ME0_step0__40->SetBinContent(21,7456);
   ratehist_ME0_step0__40->SetEntries(36016);
   ratehist_ME0_step0__40->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__40->SetLineColor(ci);
   ratehist_ME0_step0__40->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__40->SetMarkerColor(ci);
   ratehist_ME0_step0__40->SetMarkerStyle(26);
   ratehist_ME0_step0__40->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step0__40->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step0__40->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__40->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__40->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step0__40->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step0__40->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step0__40->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__40->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__40->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step0__40->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step0__40->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__40->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__40->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step0,"");
   Double_t xAxis48[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step1__41 = new TH1F("ratehist_ME0_step1__41","ratehist_ME0_step1",23, xAxis48);
   ratehist_ME0_step1__41->SetBinContent(16,41);
   ratehist_ME0_step1__41->SetBinContent(17,87);
   ratehist_ME0_step1__41->SetBinContent(18,81);
   ratehist_ME0_step1__41->SetBinContent(19,87);
   ratehist_ME0_step1__41->SetBinContent(20,120);
   ratehist_ME0_step1__41->SetBinContent(21,109);
   ratehist_ME0_step1__41->SetEntries(525);
   ratehist_ME0_step1__41->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__41->SetLineColor(ci);
   ratehist_ME0_step1__41->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__41->SetMarkerColor(ci);
   ratehist_ME0_step1__41->SetMarkerStyle(25);
   ratehist_ME0_step1__41->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step1__41->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step1__41->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__41->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__41->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step1__41->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step1__41->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step1__41->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__41->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__41->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step1__41->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step1__41->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__41->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__41->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step1,"");
   Double_t xAxis49[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step2__42 = new TH1F("ratehist_ME0_step2__42","ratehist_ME0_step2",23, xAxis49);
   ratehist_ME0_step2__42->SetBinContent(16,17);
   ratehist_ME0_step2__42->SetBinContent(17,28);
   ratehist_ME0_step2__42->SetBinContent(18,21);
   ratehist_ME0_step2__42->SetBinContent(19,27);
   ratehist_ME0_step2__42->SetBinContent(20,48);
   ratehist_ME0_step2__42->SetBinContent(21,45);
   ratehist_ME0_step2__42->SetEntries(186);
   ratehist_ME0_step2__42->SetStats(0);
   ratehist_ME0_step2__42->SetLineWidth(2);
   ratehist_ME0_step2__42->SetMarkerStyle(21);
   ratehist_ME0_step2__42->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step2__42->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step2__42->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__42->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__42->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step2__42->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step2__42->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step2__42->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__42->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__42->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step2__42->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step2__42->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__42->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__42->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step2,"");
   Double_t xAxis50[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0__43 = new TH1F("ratehist_ME0__43","ratehist_ME0",23, xAxis50);
   ratehist_ME0__43->SetBinContent(18,3);
   ratehist_ME0__43->SetBinContent(19,1);
   ratehist_ME0__43->SetBinContent(20,2);
   ratehist_ME0__43->SetBinContent(21,6);
   ratehist_ME0__43->SetEntries(12);
   ratehist_ME0__43->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__43->SetLineColor(ci);
   ratehist_ME0__43->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__43->SetMarkerColor(ci);
   ratehist_ME0__43->SetMarkerStyle(24);
   ratehist_ME0__43->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0__43->GetXaxis()->SetLabelFont(42);
   ratehist_ME0__43->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0__43->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0__43->GetXaxis()->SetTitleFont(42);
   ratehist_ME0__43->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0__43->GetYaxis()->SetLabelFont(42);
   ratehist_ME0__43->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0__43->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0__43->GetYaxis()->SetTitleFont(42);
   ratehist_ME0__43->GetZaxis()->SetLabelFont(42);
   ratehist_ME0__43->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0__43->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0__43->GetZaxis()->SetTitleFont(42);
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
