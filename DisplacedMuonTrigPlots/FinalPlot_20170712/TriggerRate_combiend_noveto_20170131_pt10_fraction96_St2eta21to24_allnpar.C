void TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta21to24_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Thu Jul 13 14:17:01 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-18.93698,2.693798,126.7321);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
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
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU");
   Double_t xAxis31[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU",22, xAxis31);
   hs_stack_4->SetMinimum(0);
   hs_stack_4->SetMaximum(117.9919);
   hs_stack_4->SetDirectory(0);
   hs_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_4->SetLineColor(ci);
   hs_stack_4->GetXaxis()->SetTitle("L1Mu |#eta|");
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
   
   TH1F *ratehist_position_eta21to24_npar3_frac96_pt10__46 = new TH1F("ratehist_position_eta21to24_npar3_frac96_pt10__46","ratehist_position_eta21to22_npar0_frac96_pt10",22, xAxis32);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinContent(16,35.38083);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinContent(17,58.02036);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinContent(18,87.08318);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinContent(19,108.9856);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinContent(20,84.55598);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinError(16,1.930183);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinError(17,2.47175);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinError(18,3.028179);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinError(19,3.387653);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetBinError(20,2.983916);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetEntries(3552);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetMarkerColor(ci);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->SetMarkerStyle(20);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta21to24_npar3_frac96_pt10__46->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta21to24_npar3_frac96_pt10,"");
   Double_t xAxis33[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47 = new TH1F("ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47","ratehist_hybrid_noGE21_eta21to22_npar0_frac96_pt10",22, xAxis33);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->SetBinContent(16,30.22113);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->SetBinError(16,1.783897);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->SetEntries(287);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->SetMarkerColor(ci);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->SetMarkerStyle(21);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10__47->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10,"");
   Double_t xAxis34[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta21to24_npar3_frac96_pt10__48 = new TH1F("ratehist_hybrid_eta21to24_npar3_frac96_pt10__48","ratehist_hybrid_eta21to22_npar0_frac96_pt10",22, xAxis34);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->SetBinContent(16,23.16602);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->SetBinError(16,1.561853);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->SetEntries(220);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->SetMarkerColor(ci);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->SetMarkerStyle(22);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta21to24_npar3_frac96_pt10__48->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta21to24_npar3_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.35,0.7,0.85,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with no track veto, Q>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_eta21to24_npar3_frac96_pt10","Position-based algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_noGE21_eta21to24_npar3_frac96_pt10","Hybrid algorithm w/o GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta21to24_npar3_frac96_pt10","Hybrid algorithm w GE21","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU");
   pt->Draw();
      tex = new TLatex(0.2,0.6,"2.15<|#eta|<2.40, p_{T}^{L1}>10 GeV, no track veto");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
