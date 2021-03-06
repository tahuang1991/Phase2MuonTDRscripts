void GEMCSC_L1Mu_etaeff_20170208_pt25_simpt30_fraction94_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:37:39 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-0.1685185,2.693798,1.127778);
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
   Double_t xAxis758[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__727 = new TH1F("b1__727"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis758);
   b1__727->SetMinimum(0);
   b1__727->SetMaximum(1.05);
   b1__727->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__727->SetLineColor(ci);
   b1__727->GetXaxis()->SetTitle("true muon p_{T} GeV");
   b1__727->GetXaxis()->SetLabelFont(42);
   b1__727->GetXaxis()->SetLabelSize(0.05);
   b1__727->GetXaxis()->SetTitleSize(0.05);
   b1__727->GetXaxis()->SetTitleFont(42);
   b1__727->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__727->GetYaxis()->SetNdivisions(520);
   b1__727->GetYaxis()->SetLabelFont(42);
   b1__727->GetYaxis()->SetLabelSize(0.05);
   b1__727->GetYaxis()->SetTitleSize(0.05);
   b1__727->GetYaxis()->SetTitleOffset(1.1);
   b1__727->GetYaxis()->SetTitleFont(42);
   b1__727->GetZaxis()->SetLabelFont(42);
   b1__727->GetZaxis()->SetLabelSize(0.035);
   b1__727->GetZaxis()->SetTitleSize(0.035);
   b1__727->GetZaxis()->SetTitleFont(42);
   b1__727->Draw("");
   Double_t xAxis1357[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone1357 = new TEfficiency("hden0_clone","",23,xAxis1357);
   
   hden0_clone1357->SetConfidenceLevel(0.6826895);
   hden0_clone1357->SetBetaAlpha(1);
   hden0_clone1357->SetBetaBeta(1);
   hden0_clone1357->SetWeight(1);
   hden0_clone1357->SetStatisticOption(0);
   hden0_clone1357->SetPosteriorMode(0);
   hden0_clone1357->SetShortestInterval(0);
   hden0_clone1357->SetTotalEvents(0,0);
   hden0_clone1357->SetPassedEvents(0,0);
   hden0_clone1357->SetTotalEvents(1,0);
   hden0_clone1357->SetPassedEvents(1,0);
   hden0_clone1357->SetTotalEvents(2,0);
   hden0_clone1357->SetPassedEvents(2,0);
   hden0_clone1357->SetTotalEvents(3,0);
   hden0_clone1357->SetPassedEvents(3,0);
   hden0_clone1357->SetTotalEvents(4,0);
   hden0_clone1357->SetPassedEvents(4,0);
   hden0_clone1357->SetTotalEvents(5,0);
   hden0_clone1357->SetPassedEvents(5,0);
   hden0_clone1357->SetTotalEvents(6,0);
   hden0_clone1357->SetPassedEvents(6,0);
   hden0_clone1357->SetTotalEvents(7,5768);
   hden0_clone1357->SetPassedEvents(7,5707);
   hden0_clone1357->SetTotalEvents(8,5724);
   hden0_clone1357->SetPassedEvents(8,5572);
   hden0_clone1357->SetTotalEvents(9,5696);
   hden0_clone1357->SetPassedEvents(9,5462);
   hden0_clone1357->SetTotalEvents(10,5760);
   hden0_clone1357->SetPassedEvents(10,5571);
   hden0_clone1357->SetTotalEvents(11,5444);
   hden0_clone1357->SetPassedEvents(11,5287);
   hden0_clone1357->SetTotalEvents(12,5610);
   hden0_clone1357->SetPassedEvents(12,5460);
   hden0_clone1357->SetTotalEvents(13,5542);
   hden0_clone1357->SetPassedEvents(13,5358);
   hden0_clone1357->SetTotalEvents(14,5590);
   hden0_clone1357->SetPassedEvents(14,5402);
   hden0_clone1357->SetTotalEvents(15,5592);
   hden0_clone1357->SetPassedEvents(15,5317);
   hden0_clone1357->SetTotalEvents(16,0);
   hden0_clone1357->SetPassedEvents(16,0);
   hden0_clone1357->SetTotalEvents(17,0);
   hden0_clone1357->SetPassedEvents(17,0);
   hden0_clone1357->SetTotalEvents(18,0);
   hden0_clone1357->SetPassedEvents(18,0);
   hden0_clone1357->SetTotalEvents(19,0);
   hden0_clone1357->SetPassedEvents(19,0);
   hden0_clone1357->SetTotalEvents(20,0);
   hden0_clone1357->SetPassedEvents(20,0);
   hden0_clone1357->SetTotalEvents(21,0);
   hden0_clone1357->SetPassedEvents(21,0);
   hden0_clone1357->SetTotalEvents(22,0);
   hden0_clone1357->SetPassedEvents(22,0);
   hden0_clone1357->SetTotalEvents(23,0);
   hden0_clone1357->SetPassedEvents(23,0);
   hden0_clone1357->SetTotalEvents(24,0);
   hden0_clone1357->SetPassedEvents(24,0);
   hden0_clone1357->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1357->SetLineColor(ci);
   hden0_clone1357->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1357->SetMarkerColor(ci);
   hden0_clone1357->SetMarkerStyle(26);
   hden0_clone1357->Draw("samezp");
   Double_t xAxis1358[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone1358 = new TEfficiency("hden1_clone","",23,xAxis1358);
   
   hden1_clone1358->SetConfidenceLevel(0.6826895);
   hden1_clone1358->SetBetaAlpha(1);
   hden1_clone1358->SetBetaBeta(1);
   hden1_clone1358->SetWeight(1);
   hden1_clone1358->SetStatisticOption(0);
   hden1_clone1358->SetPosteriorMode(0);
   hden1_clone1358->SetShortestInterval(0);
   hden1_clone1358->SetTotalEvents(0,0);
   hden1_clone1358->SetPassedEvents(0,0);
   hden1_clone1358->SetTotalEvents(1,0);
   hden1_clone1358->SetPassedEvents(1,0);
   hden1_clone1358->SetTotalEvents(2,0);
   hden1_clone1358->SetPassedEvents(2,0);
   hden1_clone1358->SetTotalEvents(3,0);
   hden1_clone1358->SetPassedEvents(3,0);
   hden1_clone1358->SetTotalEvents(4,0);
   hden1_clone1358->SetPassedEvents(4,0);
   hden1_clone1358->SetTotalEvents(5,0);
   hden1_clone1358->SetPassedEvents(5,0);
   hden1_clone1358->SetTotalEvents(6,0);
   hden1_clone1358->SetPassedEvents(6,0);
   hden1_clone1358->SetTotalEvents(7,3900);
   hden1_clone1358->SetPassedEvents(7,3871);
   hden1_clone1358->SetTotalEvents(8,3804);
   hden1_clone1358->SetPassedEvents(8,3756);
   hden1_clone1358->SetTotalEvents(9,3928);
   hden1_clone1358->SetPassedEvents(9,3835);
   hden1_clone1358->SetTotalEvents(10,3940);
   hden1_clone1358->SetPassedEvents(10,3868);
   hden1_clone1358->SetTotalEvents(11,3650);
   hden1_clone1358->SetPassedEvents(11,3586);
   hden1_clone1358->SetTotalEvents(12,3822);
   hden1_clone1358->SetPassedEvents(12,3764);
   hden1_clone1358->SetTotalEvents(13,3806);
   hden1_clone1358->SetPassedEvents(13,3736);
   hden1_clone1358->SetTotalEvents(14,3812);
   hden1_clone1358->SetPassedEvents(14,3757);
   hden1_clone1358->SetTotalEvents(15,3824);
   hden1_clone1358->SetPassedEvents(15,3739);
   hden1_clone1358->SetTotalEvents(16,0);
   hden1_clone1358->SetPassedEvents(16,0);
   hden1_clone1358->SetTotalEvents(17,0);
   hden1_clone1358->SetPassedEvents(17,0);
   hden1_clone1358->SetTotalEvents(18,0);
   hden1_clone1358->SetPassedEvents(18,0);
   hden1_clone1358->SetTotalEvents(19,0);
   hden1_clone1358->SetPassedEvents(19,0);
   hden1_clone1358->SetTotalEvents(20,0);
   hden1_clone1358->SetPassedEvents(20,0);
   hden1_clone1358->SetTotalEvents(21,0);
   hden1_clone1358->SetPassedEvents(21,0);
   hden1_clone1358->SetTotalEvents(22,0);
   hden1_clone1358->SetPassedEvents(22,0);
   hden1_clone1358->SetTotalEvents(23,0);
   hden1_clone1358->SetPassedEvents(23,0);
   hden1_clone1358->SetTotalEvents(24,0);
   hden1_clone1358->SetPassedEvents(24,0);
   hden1_clone1358->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden1_clone1358->SetLineColor(ci);
   hden1_clone1358->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden1_clone1358->SetMarkerColor(ci);
   hden1_clone1358->SetMarkerStyle(25);
   hden1_clone1358->Draw("samezp");
   
   TLegend *leg = new TLegend(0.45,0.2,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GE11-ME11 and GE21-ME21","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","GE11only","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","GE11GE21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>25 GeV");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
