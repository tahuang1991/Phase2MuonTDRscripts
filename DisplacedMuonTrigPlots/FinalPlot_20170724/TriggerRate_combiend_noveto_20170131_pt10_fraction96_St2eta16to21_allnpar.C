void TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Jul 25 07:57:15 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.436687,2.693798,2.010301);
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
   Double_t xAxis39[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU",22, xAxis39);
   hs_stack_4->SetMinimum(0.01384909);
   hs_stack_4->SetMaximum(55.39637);
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
   
   TH1F *ratehist_position_eta16to21_frac96_pt10__62 = new TH1F("ratehist_position_eta16to21_frac96_pt10__62","ratehist_position_eta16to18_npar0_frac96_pt10",22, xAxis40);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(6,2.295918);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(7,5.165816);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(8,11.09694);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(9,8.418367);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(10,10.14031);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(11,17.21939);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(12,32.14286);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(13,22.95918);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinContent(14,25.82908);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(6,0.6627745);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(7,0.9941618);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(8,1.457099);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(9,1.269117);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(10,1.392878);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(11,1.815083);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(12,2.479875);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(13,2.095877);
   ratehist_position_eta16to21_frac96_pt10__62->SetBinError(14,2.223013);
   ratehist_position_eta16to21_frac96_pt10__62->SetEntries(707);
   ratehist_position_eta16to21_frac96_pt10__62->SetStats(0);
   ratehist_position_eta16to21_frac96_pt10__62->SetMarkerStyle(25);
   ratehist_position_eta16to21_frac96_pt10__62->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta16to21_frac96_pt10__62->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__62->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__62->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__62->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta16to21_frac96_pt10__62->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta16to21_frac96_pt10__62->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__62->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__62->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__62->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta16to21_frac96_pt10__62->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__62->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__62->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__62->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta16to21_frac96_pt10__62,"");
   Double_t xAxis41[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac96_pt10__63 = new TH1F("ratehist_hybrid_eta16to21_frac96_pt10__63","ratehist_hybrid_eta16to18_npar0_frac96_pt10",22, xAxis41);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(6,0.7653061);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(7,1.147959);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(8,3.635204);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(9,3.443878);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(10,4.209184);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(11,7.079082);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(12,7.653061);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(13,8.992347);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinContent(14,7.270408);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(6,0.3826531);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(7,0.4686524);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(8,0.833973);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(9,0.8117297);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(10,0.897401);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(11,1.163794);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(12,1.210055);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(13,1.311669);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetBinError(14,1.179416);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetEntries(231);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt10__63->SetMarkerStyle(22);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__63->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac96_pt10__63,"");

   Double_t xAxis85[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid3_eta21to24_frac96_pt10__110 = new TH1F("ratehist_hybrid3_eta21to24_frac96_pt10__110","ratehist_hybrid1_eta21to22_npar0_frac96_pt10",22, xAxis85);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinContent(15,0.45565);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinContent(17,1.215067);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinContent(18,0.7594168);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinContent(19,1.36695);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinContent(20,1.8226);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinError(15,0.2630697);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinError(17,0.429591);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinError(18,0.3396215);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinError(19,0.4556501);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetBinError(20,0.5261394);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetEntries(37);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetStats(0);

   ci = kBlack;
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetLineColor(ci);

   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetMarkerColor(ci);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->SetMarkerStyle(21);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__110->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid3_eta21to24_frac96_pt10__110,"");
   hs->Draw("nostacke");
   



   
   TLegend *leg = new TLegend(0.14,0.72,0.47,0.91,NULL,"brNDC");
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
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac96_pt10","CSC+GE11+GE21: Hybrid algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid3_eta21to24_frac96_pt10__110","CSC+GE11+GE21+ME0: Hybrid algorithm","pl");
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU");
   pt->Draw();
      tex = new TLatex(0.2,0.2,"1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV, no track veto");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
   c1_n2->SaveAs("TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta16to21_allnpar.png");
   c1_n2->SaveAs("TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta16to21_allnpar.pdf");
   c1_n2->SaveAs("TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta16to21_allnpar.eps");
}
