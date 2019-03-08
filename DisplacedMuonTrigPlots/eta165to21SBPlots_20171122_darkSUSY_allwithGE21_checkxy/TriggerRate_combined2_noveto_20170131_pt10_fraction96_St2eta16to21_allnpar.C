void TriggerRate_combined2_noveto_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:15:08 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.635667,2.693798,1.81132);
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
   Double_t xAxis39[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",22, xAxis39);
   hs_stack_4->SetMinimum(0.008758726);
   hs_stack_4->SetMaximum(35.0349);
   hs_stack_4->SetDirectory(0);
   hs_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_4->SetLineColor(ci);
   hs_stack_4->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   hs_stack_4->GetXaxis()->SetLabelFont(42);
   hs_stack_4->GetXaxis()->SetLabelSize(0.035);
   hs_stack_4->GetXaxis()->SetTitleSize(0.035);
   hs_stack_4->GetXaxis()->SetTitleFont(42);
   hs_stack_4->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_4->GetYaxis()->SetLabelFont(42);
   hs_stack_4->GetYaxis()->SetLabelSize(0.035);
   hs_stack_4->GetYaxis()->SetTitleSize(0.035);
   hs_stack_4->GetYaxis()->SetTitleFont(42);
   hs_stack_4->GetZaxis()->SetLabelFont(42);
   hs_stack_4->GetZaxis()->SetLabelSize(0.035);
   hs_stack_4->GetZaxis()->SetTitleSize(0.035);
   hs_stack_4->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_4);
   
   Double_t xAxis40[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_eta16to21_frac96_pt10__92 = new TH1F("ratehist_position_eta16to21_frac96_pt10__92","ratehist_position_eta16to18_npar0_frac96_pt10",22, xAxis40);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(6,0.8886451);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(7,2.336807);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(8,7.043335);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(9,8.096544);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(10,11.322);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(11,11.98025);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(12,21.06418);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(13,18.99068);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinContent(14,20.47175);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(6,0.1710198);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(7,0.277328);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(8,0.4814725);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(9,0.5162168);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(10,0.6104412);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(11,0.6279358);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(12,0.8326348);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(13,0.7905921);
   ratehist_position_eta16to21_frac96_pt10__92->SetBinError(14,0.8208424);
   ratehist_position_eta16to21_frac96_pt10__92->SetEntries(3105);
   ratehist_position_eta16to21_frac96_pt10__92->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta16to21_frac96_pt10__92->SetLineColor(ci);
   ratehist_position_eta16to21_frac96_pt10__92->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta16to21_frac96_pt10__92->SetMarkerColor(ci);
   ratehist_position_eta16to21_frac96_pt10__92->SetMarkerStyle(25);
   ratehist_position_eta16to21_frac96_pt10__92->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta16to21_frac96_pt10__92->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__92->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__92->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__92->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta16to21_frac96_pt10__92->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta16to21_frac96_pt10__92->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__92->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__92->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__92->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta16to21_frac96_pt10__92->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__92->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__92->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__92->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta16to21_frac96_pt10,"");
   Double_t xAxis41[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac96_pt10__93 = new TH1F("ratehist_hybrid_eta16to21_frac96_pt10__93","ratehist_hybrid_eta16to18_npar0_frac96_pt10",22, xAxis41);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(6,0.5266045);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(7,0.9873834);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(8,4.871092);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(9,4.706528);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(10,7.471201);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(11,7.899067);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(12,14.81075);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(13,14.61327);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinContent(14,13.32968);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(6,0.1316511);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(7,0.1802707);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(8,0.4004013);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(9,0.3935796);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(10,0.495881);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(11,0.5098826);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(12,0.6981855);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(13,0.6935153);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetBinError(14,0.6623569);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetEntries(2103);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetStats(0);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetLineWidth(2);
   ratehist_hybrid_eta16to21_frac96_pt10__93->SetMarkerStyle(21);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__93->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.46,0.45,0.88,0.57,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=4, no track veto","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_eta16to21_frac96_pt10","CSC+GE11: Position based","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac96_pt10","CSC+GE11+GE21: Hybrid algorithm","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
      tex = new TLatex(0.2,0.2,"1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV, no track veto");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
