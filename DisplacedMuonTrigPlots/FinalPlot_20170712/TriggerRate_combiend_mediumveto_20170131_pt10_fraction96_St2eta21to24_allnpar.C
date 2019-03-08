void TriggerRate_combiend_mediumveto_20170131_pt10_fraction96_St2eta21to24_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Thu Jul 13 14:17:01 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-11.31704,2.693798,75.73713);
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
   Double_t xAxis35[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU",22, xAxis35);
   hs_stack_5->SetMinimum(0);
   hs_stack_5->SetMaximum(70.51388);
   hs_stack_5->SetDirectory(0);
   hs_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_5->SetLineColor(ci);
   hs_stack_5->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_5->GetXaxis()->SetLabelFont(42);
   hs_stack_5->GetXaxis()->SetLabelSize(0.035);
   hs_stack_5->GetXaxis()->SetTitleSize(0.035);
   hs_stack_5->GetXaxis()->SetTitleFont(42);
   hs_stack_5->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_5->GetYaxis()->SetLabelFont(42);
   hs_stack_5->GetYaxis()->SetLabelSize(0.035);
   hs_stack_5->GetYaxis()->SetTitleSize(0.035);
   hs_stack_5->GetYaxis()->SetTitleFont(42);
   hs_stack_5->GetZaxis()->SetLabelFont(42);
   hs_stack_5->GetZaxis()->SetLabelSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleSize(0.035);
   hs_stack_5->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_5);
   
   Double_t xAxis36[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49 = new TH1F("ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49","ratehist_position_mediumveto_eta21to22_npar0_frac96_pt10",22, xAxis36);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinContent(16,13.89961);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinContent(17,29.16813);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinContent(18,50.43875);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinContent(19,64.54897);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinContent(20,50.33345);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinError(16,1.209806);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinError(17,1.752543);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinError(18,2.304605);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinError(19,2.607108);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetBinError(20,2.302198);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetEntries(1979);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetMarkerColor(ci);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->SetMarkerStyle(20);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetXaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetXaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetYaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetYaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetZaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10__49->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10,"");
   Double_t xAxis37[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50 = new TH1F("ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50","ratehist_hybrid_noGE21_mediumveto_eta21to22_npar0_frac96_pt10",22, xAxis37);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->SetBinContent(16,11.05651);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->SetBinError(16,1.079005);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->SetEntries(105);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->SetMarkerColor(ci);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->SetMarkerStyle(21);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10__50->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10,"");
   Double_t xAxis38[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51 = new TH1F("ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51","ratehist_hybrid_mediumveto_eta21to22_npar0_frac96_pt10",22, xAxis38);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->SetBinContent(16,7.160407);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->SetBinError(16,0.8683269);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->SetEntries(68);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->SetMarkerColor(ci);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->SetMarkerStyle(22);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10__51->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.35,0.7,0.85,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with medium track veto, Q>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_mediumveto_eta21to24_npar3_frac96_pt10","Position-based algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_noGE21_mediumveto_eta21to24_npar3_frac96_pt10","Hybrid algorithm w/o GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_mediumveto_eta21to24_npar3_frac96_pt10","Hybrid algorithm w GE21","pl");

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
      tex = new TLatex(0.2,0.6,"2.15<|#eta|<2.40, p_{T}^{L1}>10 GeV, medium track veto");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
