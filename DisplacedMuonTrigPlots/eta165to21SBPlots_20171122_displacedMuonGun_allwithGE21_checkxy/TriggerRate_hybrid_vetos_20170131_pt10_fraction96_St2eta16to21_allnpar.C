void TriggerRate_hybrid_vetos_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:08:19 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.785466,2.693798,1.661521);
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
   Double_t xAxis31[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_2 = new TH1F("hs_stack_2"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",22, xAxis31);
   hs_stack_2->SetMinimum(0.006203575);
   hs_stack_2->SetMaximum(24.8143);
   hs_stack_2->SetDirectory(0);
   hs_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_2->SetLineColor(ci);
   hs_stack_2->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   hs_stack_2->GetXaxis()->SetLabelFont(42);
   hs_stack_2->GetXaxis()->SetLabelSize(0.035);
   hs_stack_2->GetXaxis()->SetTitleSize(0.035);
   hs_stack_2->GetXaxis()->SetTitleFont(42);
   hs_stack_2->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_2->GetYaxis()->SetLabelFont(42);
   hs_stack_2->GetYaxis()->SetLabelSize(0.035);
   hs_stack_2->GetYaxis()->SetTitleSize(0.035);
   hs_stack_2->GetYaxis()->SetTitleFont(42);
   hs_stack_2->GetZaxis()->SetLabelFont(42);
   hs_stack_2->GetZaxis()->SetLabelSize(0.035);
   hs_stack_2->GetZaxis()->SetTitleSize(0.035);
   hs_stack_2->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_2);
   
   Double_t xAxis32[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta16to21_frac96_pt10__82 = new TH1F("ratehist_hybrid_eta16to21_frac96_pt10__82","ratehist_hybrid_eta16to18_npar0_frac96_pt10",22, xAxis32);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(6,0.5266045);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(7,0.9873834);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(8,4.871092);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(9,4.706528);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(10,7.471201);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(11,7.899067);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(12,14.81075);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(13,14.61327);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinContent(14,13.32968);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(6,0.1316511);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(7,0.1802707);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(8,0.4004013);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(9,0.3935796);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(10,0.495881);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(11,0.5098826);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(12,0.6981855);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(13,0.6935153);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetBinError(14,0.6623569);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetEntries(2103);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetLineColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetMarkerColor(ci);
   ratehist_hybrid_eta16to21_frac96_pt10__82->SetMarkerStyle(25);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta16to21_frac96_pt10__82->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta16to21_frac96_pt10,"");
   Double_t xAxis33[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83 = new TH1F("ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83","ratehist_hybrid_mediumveto_eta16to18_npar0_frac96_pt10",22, xAxis33);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(6,0.4936917);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(7,0.8228195);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(8,4.311574);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(9,4.015359);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(10,6.51673);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(11,6.97751);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(12,13.46133);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(13,13.36259);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinContent(14,12.14482);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(6,0.1274707);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(7,0.1645639);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(8,0.376704);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(9,0.3635335);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(10,0.4631239);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(11,0.4792173);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(12,0.6656198);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(13,0.6631742);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetBinError(14,0.6322339);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetEntries(1887);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetStats(0);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetLineWidth(2);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->SetMarkerStyle(21);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta16to21_frac96_pt10__83->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_mediumveto_eta16to21_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.46,0.45,0.88,0.57,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta16to21_frac96_pt10","no track veto","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_mediumveto_eta16to21_frac96_pt10","medium track veto","pl");
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
      tex = new TLatex(0.2,0.2,"#splitline{Hybrid algorithm w/ GE21}{1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
