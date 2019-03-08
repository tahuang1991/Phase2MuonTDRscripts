void TriggerRateME0_combiend_20170131_pt20_St2eta21to24_withME0_q4_allnpar_dR02_me0dphi005_Andq12_PU140()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 13:50:02 2017) by ROOT version6.08/06
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
   Double_t xAxis31[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis31);
   hs_stack_5->SetMinimum(3.158545);
   hs_stack_5->SetMaximum(12634.18);
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
   
   Double_t xAxis32[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step0__27 = new TH1F("ratehist_ME0_step0__27","ratehist_ME0_step0",23, xAxis32);
   ratehist_ME0_step0__27->SetBinContent(16,3681);
   ratehist_ME0_step0__27->SetBinContent(17,5691);
   ratehist_ME0_step0__27->SetBinContent(18,5613);
   ratehist_ME0_step0__27->SetBinContent(19,5767);
   ratehist_ME0_step0__27->SetBinContent(20,7808);
   ratehist_ME0_step0__27->SetBinContent(21,7456);
   ratehist_ME0_step0__27->SetEntries(36016);
   ratehist_ME0_step0__27->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__27->SetLineColor(ci);
   ratehist_ME0_step0__27->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__27->SetMarkerColor(ci);
   ratehist_ME0_step0__27->SetMarkerStyle(26);
   ratehist_ME0_step0__27->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step0__27->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step0__27->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__27->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__27->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step0__27->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step0__27->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step0__27->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__27->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__27->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step0__27->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step0__27->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__27->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__27->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step0,"");
   Double_t xAxis33[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step1__28 = new TH1F("ratehist_ME0_step1__28","ratehist_ME0_step1",23, xAxis33);
   ratehist_ME0_step1__28->SetBinContent(16,50);
   ratehist_ME0_step1__28->SetBinContent(17,125);
   ratehist_ME0_step1__28->SetBinContent(18,112);
   ratehist_ME0_step1__28->SetBinContent(19,114);
   ratehist_ME0_step1__28->SetBinContent(20,158);
   ratehist_ME0_step1__28->SetBinContent(21,138);
   ratehist_ME0_step1__28->SetEntries(697);
   ratehist_ME0_step1__28->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__28->SetLineColor(ci);
   ratehist_ME0_step1__28->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__28->SetMarkerColor(ci);
   ratehist_ME0_step1__28->SetMarkerStyle(25);
   ratehist_ME0_step1__28->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step1__28->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step1__28->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__28->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__28->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step1__28->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step1__28->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step1__28->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__28->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__28->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step1__28->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step1__28->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__28->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__28->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step1,"");
   Double_t xAxis34[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step2__29 = new TH1F("ratehist_ME0_step2__29","ratehist_ME0_step2",23, xAxis34);
   ratehist_ME0_step2__29->SetBinContent(16,21);
   ratehist_ME0_step2__29->SetBinContent(17,38);
   ratehist_ME0_step2__29->SetBinContent(18,35);
   ratehist_ME0_step2__29->SetBinContent(19,36);
   ratehist_ME0_step2__29->SetBinContent(20,58);
   ratehist_ME0_step2__29->SetBinContent(21,54);
   ratehist_ME0_step2__29->SetEntries(242);
   ratehist_ME0_step2__29->SetStats(0);
   ratehist_ME0_step2__29->SetLineWidth(2);
   ratehist_ME0_step2__29->SetMarkerStyle(21);
   ratehist_ME0_step2__29->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step2__29->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step2__29->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__29->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__29->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step2__29->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step2__29->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step2__29->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__29->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__29->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step2__29->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step2__29->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__29->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__29->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step2,"");
   Double_t xAxis35[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0__30 = new TH1F("ratehist_ME0__30","ratehist_ME0",23, xAxis35);
   ratehist_ME0__30->SetBinContent(17,1);
   ratehist_ME0__30->SetBinContent(18,3);
   ratehist_ME0__30->SetBinContent(19,4);
   ratehist_ME0__30->SetBinContent(20,4);
   ratehist_ME0__30->SetBinContent(21,6);
   ratehist_ME0__30->SetEntries(18);
   ratehist_ME0__30->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__30->SetLineColor(ci);
   ratehist_ME0__30->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__30->SetMarkerColor(ci);
   ratehist_ME0__30->SetMarkerStyle(24);
   ratehist_ME0__30->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0__30->GetXaxis()->SetLabelFont(42);
   ratehist_ME0__30->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0__30->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0__30->GetXaxis()->SetTitleFont(42);
   ratehist_ME0__30->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0__30->GetYaxis()->SetLabelFont(42);
   ratehist_ME0__30->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0__30->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0__30->GetYaxis()->SetTitleFont(42);
   ratehist_ME0__30->GetZaxis()->SetLabelFont(42);
   ratehist_ME0__30->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0__30->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0__30->GetZaxis()->SetTitleFont(42);
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
