void TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta12to16_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Jul 25 10:06:18 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-3.006734,2.693798,1.440253);
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
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU");
   Double_t xAxis31[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU",22, xAxis31);
   hs_stack_4->SetMinimum(0.003727125);
   hs_stack_4->SetMaximum(14.9085);
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
   
   Double_t xAxis32[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_eta12to16_frac96_pt10__46 = new TH1F("ratehist_position_eta12to16_frac96_pt10__46","ratehist_position_eta12to14_npar0_frac96_pt10",22, xAxis32);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinContent(2,4.252734);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinContent(3,6.530984);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinContent(4,6.834751);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinContent(5,8.201701);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinError(2,0.8036912);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinError(3,0.9959658);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinError(4,1.018865);
   ratehist_position_eta12to16_frac96_pt10__46->SetBinError(5,1.11611);
   ratehist_position_eta12to16_frac96_pt10__46->SetEntries(170);
   ratehist_position_eta12to16_frac96_pt10__46->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta12to16_frac96_pt10__46->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta12to16_frac96_pt10__46->SetMarkerColor(ci);
   ratehist_position_eta12to16_frac96_pt10__46->SetMarkerStyle(24);
   ratehist_position_eta12to16_frac96_pt10__46->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta12to16_frac96_pt10__46->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta12to16_frac96_pt10__46->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to16_frac96_pt10__46->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to16_frac96_pt10__46->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta12to16_frac96_pt10__46->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta12to16_frac96_pt10__46->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta12to16_frac96_pt10__46->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to16_frac96_pt10__46->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to16_frac96_pt10__46->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta12to16_frac96_pt10__46->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta12to16_frac96_pt10__46->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to16_frac96_pt10__46->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to16_frac96_pt10__46->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta12to16_frac96_pt10,"");
   Double_t xAxis33[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta12to16_frac96_pt10__47 = new TH1F("ratehist_hybrid_eta12to16_frac96_pt10__47","ratehist_hybrid_eta12to14_npar0_frac96_pt10",22, xAxis33);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinContent(2,4.404617);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinContent(3,6.682867);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinContent(4,6.379101);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinContent(5,8.201701);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinError(2,0.8179169);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinError(3,1.00748);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinError(4,0.9843166);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetBinError(5,1.11611);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetEntries(169);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetMarkerColor(ci);
   ratehist_hybrid_eta12to16_frac96_pt10__47->SetMarkerStyle(21);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to16_frac96_pt10__47->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta12to16_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.16,0.49,0.65,0.82,NULL,"brNDC");
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
   entry=leg->AddEntry("ratehist_position_eta12to16_frac96_pt10","CSC+GE11: Position based,event: 170","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta12to16_frac96_pt10","CSC+GE11+GE21: Hybrid algorithm,event: 169","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
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
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU");
   pt->Draw();
      tex = new TLatex(0.2,0.2,"1.20<|#eta|<1.60, p_{T}^{L1}>10 GeV, no track veto");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
