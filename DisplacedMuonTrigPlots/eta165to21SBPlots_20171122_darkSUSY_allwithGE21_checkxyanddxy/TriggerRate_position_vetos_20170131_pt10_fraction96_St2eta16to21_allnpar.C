void TriggerRate_position_vetos_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:43:01 2017) by ROOT version6.08/06
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
   Double_t xAxis28[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",22, xAxis28);
   hs_stack_1->SetMinimum(0.008758726);
   hs_stack_1->SetMaximum(35.0349);
   hs_stack_1->SetDirectory(0);
   hs_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_1->SetLineColor(ci);
   hs_stack_1->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   hs_stack_1->GetXaxis()->SetLabelFont(42);
   hs_stack_1->GetXaxis()->SetLabelSize(0.035);
   hs_stack_1->GetXaxis()->SetTitleSize(0.035);
   hs_stack_1->GetXaxis()->SetTitleFont(42);
   hs_stack_1->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_1->GetYaxis()->SetLabelFont(42);
   hs_stack_1->GetYaxis()->SetLabelSize(0.035);
   hs_stack_1->GetYaxis()->SetTitleSize(0.035);
   hs_stack_1->GetYaxis()->SetTitleFont(42);
   hs_stack_1->GetZaxis()->SetLabelFont(42);
   hs_stack_1->GetZaxis()->SetLabelSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_1);
   
   Double_t xAxis29[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_eta16to21_frac96_pt10__80 = new TH1F("ratehist_position_eta16to21_frac96_pt10__80","ratehist_position_eta16to18_npar0_frac96_pt10",22, xAxis29);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(6,0.8886451);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(7,2.336807);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(8,7.043335);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(9,8.096544);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(10,11.322);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(11,11.98025);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(12,21.06418);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(13,18.99068);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinContent(14,20.47175);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(6,0.1710198);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(7,0.277328);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(8,0.4814725);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(9,0.5162168);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(10,0.6104412);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(11,0.6279358);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(12,0.8326348);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(13,0.7905921);
   ratehist_position_eta16to21_frac96_pt10__80->SetBinError(14,0.8208424);
   ratehist_position_eta16to21_frac96_pt10__80->SetEntries(3105);
   ratehist_position_eta16to21_frac96_pt10__80->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta16to21_frac96_pt10__80->SetLineColor(ci);
   ratehist_position_eta16to21_frac96_pt10__80->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta16to21_frac96_pt10__80->SetMarkerColor(ci);
   ratehist_position_eta16to21_frac96_pt10__80->SetMarkerStyle(25);
   ratehist_position_eta16to21_frac96_pt10__80->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta16to21_frac96_pt10__80->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__80->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__80->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__80->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta16to21_frac96_pt10__80->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta16to21_frac96_pt10__80->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__80->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__80->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__80->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta16to21_frac96_pt10__80->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta16to21_frac96_pt10__80->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__80->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta16to21_frac96_pt10__80->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta16to21_frac96_pt10,"");
   Double_t xAxis30[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_mediumveto_eta16to21_frac96_pt10__81 = new TH1F("ratehist_position_mediumveto_eta16to21_frac96_pt10__81","ratehist_position_mediumveto_eta16to18_npar0_frac96_pt10",22, xAxis30);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(6,0.756994);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(7,2.073505);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(8,6.352167);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(9,6.845859);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(10,9.972573);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(11,10.79539);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(12,19.28689);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(13,17.47669);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinContent(14,18.72737);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(6,0.1578442);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(7,0.2612371);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(8,0.457239);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(9,0.4746749);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(10,0.5729093);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(11,0.5960758);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(12,0.7967341);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(13,0.7584236);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetBinError(14,0.7850923);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetEntries(2804);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetStats(0);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetLineWidth(2);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->SetMarkerStyle(21);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetXaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetXaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetYaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetYaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetZaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta16to21_frac96_pt10__81->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_mediumveto_eta16to21_frac96_pt10,"");
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
   entry=leg->AddEntry("ratehist_position_eta16to21_frac96_pt10","no track veto","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_mediumveto_eta16to21_frac96_pt10","medium track veto","pl");
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
      tex = new TLatex(0.2,0.2,"#splitline{Position-based algorithm}{1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
