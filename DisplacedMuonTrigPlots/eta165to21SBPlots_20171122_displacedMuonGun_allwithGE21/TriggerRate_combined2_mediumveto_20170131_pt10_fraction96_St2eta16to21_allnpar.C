void TriggerRate_combined2_mediumveto_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Nov 26 19:38:48 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.673206,2.693798,1.773781);
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
   Double_t xAxis42[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",22, xAxis42);
   hs_stack_5->SetMinimum(0.00803345);
   hs_stack_5->SetMaximum(32.1338);
   hs_stack_5->SetDirectory(0);
   hs_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_5->SetLineColor(ci);
   hs_stack_5->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
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
   
   Double_t xAxis43[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_mediumveto_eta16to21_frac96_pt10__64 = new TH1F("ratehist_position_mediumveto_eta16to21_frac96_pt10__64","ratehist_position_mediumveto_eta16to18_npar0_frac96_pt10",22, xAxis43);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(6,0.756994);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(7,2.073505);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(8,6.352167);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(9,6.845859);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(10,9.972573);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(11,10.79539);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(12,19.28689);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(13,17.47669);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinContent(14,18.72737);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(6,0.1578442);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(7,0.2612371);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(8,0.457239);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(9,0.4746749);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(10,0.5729093);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(11,0.5960758);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(12,0.7967341);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(13,0.7584236);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetBinError(14,0.7850923);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetEntries(2804);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetLineColor(ci);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetMarkerColor(ci);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->SetMarkerStyle(25);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetXaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetXaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetYaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetYaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetZaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__64->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_mediumveto_eta16to21_frac96_pt10,"");
   Double_t xAxis44[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65 = new TH1F("ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65","ratehist_hybrid_mediumveto_eta16to18_npar0_frac96_pt10",22, xAxis44);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(6,0.4936917);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(7,0.8228195);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(8,4.311574);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(9,4.015359);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(10,6.51673);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(11,6.97751);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(12,13.46133);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(13,13.36259);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinContent(14,12.14482);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(6,0.1274707);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(7,0.1645639);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(8,0.376704);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(9,0.3635335);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(10,0.4631239);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(11,0.4792173);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(12,0.6656198);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(13,0.6631742);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetBinError(14,0.6322339);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetEntries(1887);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetStats(0);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetLineWidth(2);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->SetMarkerStyle(21);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__65->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_mediumveto_eta16to21_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.46,0.45,0.88,0.57,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=4, medium track veto","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_mediumveto_eta16to21_frac96_pt10","CSC+GE11: Position based","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_mediumveto_eta16to21_frac96_pt10","CSC+GE11+GE21: Hybrid algorithm","pl");
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
      tex = new TLatex(0.2,0.2,"1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV, medium track veto");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
