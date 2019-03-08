void TriggerRate_hybrid_noGE21_vetos_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Nov 26 19:44:02 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.687986,2.693798,1.759002);
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
   Double_t xAxis34[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_3 = new TH1F("hs_stack_3"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",22, xAxis34);
   hs_stack_3->SetMinimum(0.007764661);
   hs_stack_3->SetMaximum(31.05865);
   hs_stack_3->SetDirectory(0);
   hs_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_3->SetLineColor(ci);
   hs_stack_3->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   hs_stack_3->GetXaxis()->SetLabelFont(42);
   hs_stack_3->GetXaxis()->SetLabelSize(0.035);
   hs_stack_3->GetXaxis()->SetTitleSize(0.035);
   hs_stack_3->GetXaxis()->SetTitleFont(42);
   hs_stack_3->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_3->GetYaxis()->SetLabelFont(42);
   hs_stack_3->GetYaxis()->SetLabelSize(0.035);
   hs_stack_3->GetYaxis()->SetTitleSize(0.035);
   hs_stack_3->GetYaxis()->SetTitleFont(42);
   hs_stack_3->GetZaxis()->SetLabelFont(42);
   hs_stack_3->GetZaxis()->SetLabelSize(0.035);
   hs_stack_3->GetZaxis()->SetTitleSize(0.035);
   hs_stack_3->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_3);
   
   Double_t xAxis35[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56 = new TH1F("ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56","ratehist_hybrid_noGE21_eta16to18_npar0_frac96_pt10",22, xAxis35);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(6,0.6582556);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(7,1.579813);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(8,6.352167);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(9,7.306637);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(10,9.610532);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(11,10.13714);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(12,18.62863);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(13,18.06912);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinContent(14,17.37795);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(6,0.1471904);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(7,0.2280264);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(8,0.457239);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(9,0.4903894);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(10,0.5624139);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(11,0.577617);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(12,0.7830199);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(13,0.7711711);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetBinError(14,0.7562781);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetEntries(2726);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetLineColor(ci);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetMarkerColor(ci);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->SetMarkerStyle(25);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta16to21_frac96_pt10__56->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_noGE21_eta16to21_frac96_pt10,"");
   Double_t xAxis36[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57 = new TH1F("ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57","ratehist_hybrid_noGE21_mediumveto_eta16to18_npar0_frac96_pt10",22, xAxis36);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(6,0.5924301);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(7,1.382337);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(8,5.595173);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(9,6.220515);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(10,8.52441);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(11,9.182667);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(12,16.85135);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(13,16.4893);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinContent(14,15.6994);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(6,0.1396371);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(7,0.2132992);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(8,0.4291302);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(9,0.4524759);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(10,0.5296811);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(11,0.5497518);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(12,0.7447312);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(13,0.7366877);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetBinError(14,0.718826);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetEntries(2447);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetStats(0);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetLineWidth(2);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->SetMarkerStyle(21);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10__57->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10,"");
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
   entry=leg->AddEntry("ratehist_hybrid_noGE21_eta16to21_frac96_pt10","no track veto","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_noGE21_mediumveto_eta16to21_frac96_pt10","medium track veto","pl");
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
      tex = new TLatex(0.2,0.2,"#splitline{Hybrid algorithm w/o GE21}{1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
