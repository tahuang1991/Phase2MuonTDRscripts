void GEMCSC_L1Mu_etaeff_20170208_pt7_simpt12_fraction94_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:30:47 2017) by ROOT version6.08/06
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
   Double_t xAxis134[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__129 = new TH1F("b1__129"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis134);
   b1__129->SetMinimum(0);
   b1__129->SetMaximum(1.05);
   b1__129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__129->SetLineColor(ci);
   b1__129->GetXaxis()->SetTitle("true muon p_{T} GeV");
   b1__129->GetXaxis()->SetLabelFont(42);
   b1__129->GetXaxis()->SetLabelSize(0.05);
   b1__129->GetXaxis()->SetTitleSize(0.05);
   b1__129->GetXaxis()->SetTitleFont(42);
   b1__129->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__129->GetYaxis()->SetNdivisions(520);
   b1__129->GetYaxis()->SetLabelFont(42);
   b1__129->GetYaxis()->SetLabelSize(0.05);
   b1__129->GetYaxis()->SetTitleSize(0.05);
   b1__129->GetYaxis()->SetTitleOffset(1.1);
   b1__129->GetYaxis()->SetTitleFont(42);
   b1__129->GetZaxis()->SetLabelFont(42);
   b1__129->GetZaxis()->SetLabelSize(0.035);
   b1__129->GetZaxis()->SetTitleSize(0.035);
   b1__129->GetZaxis()->SetTitleFont(42);
   b1__129->Draw("");
   Double_t xAxis239[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone239 = new TEfficiency("hden0_clone","",23,xAxis239);
   
   hden0_clone239->SetConfidenceLevel(0.6826895);
   hden0_clone239->SetBetaAlpha(1);
   hden0_clone239->SetBetaBeta(1);
   hden0_clone239->SetWeight(1);
   hden0_clone239->SetStatisticOption(0);
   hden0_clone239->SetPosteriorMode(0);
   hden0_clone239->SetShortestInterval(0);
   hden0_clone239->SetTotalEvents(0,0);
   hden0_clone239->SetPassedEvents(0,0);
   hden0_clone239->SetTotalEvents(1,0);
   hden0_clone239->SetPassedEvents(1,0);
   hden0_clone239->SetTotalEvents(2,0);
   hden0_clone239->SetPassedEvents(2,0);
   hden0_clone239->SetTotalEvents(3,0);
   hden0_clone239->SetPassedEvents(3,0);
   hden0_clone239->SetTotalEvents(4,0);
   hden0_clone239->SetPassedEvents(4,0);
   hden0_clone239->SetTotalEvents(5,0);
   hden0_clone239->SetPassedEvents(5,0);
   hden0_clone239->SetTotalEvents(6,0);
   hden0_clone239->SetPassedEvents(6,0);
   hden0_clone239->SetTotalEvents(7,10936);
   hden0_clone239->SetPassedEvents(7,10800);
   hden0_clone239->SetTotalEvents(8,10694);
   hden0_clone239->SetPassedEvents(8,10404);
   hden0_clone239->SetTotalEvents(9,10578);
   hden0_clone239->SetPassedEvents(9,10137);
   hden0_clone239->SetTotalEvents(10,10698);
   hden0_clone239->SetPassedEvents(10,10342);
   hden0_clone239->SetTotalEvents(11,10486);
   hden0_clone239->SetPassedEvents(11,10179);
   hden0_clone239->SetTotalEvents(12,10618);
   hden0_clone239->SetPassedEvents(12,10336);
   hden0_clone239->SetTotalEvents(13,10488);
   hden0_clone239->SetPassedEvents(13,10149);
   hden0_clone239->SetTotalEvents(14,10476);
   hden0_clone239->SetPassedEvents(14,10140);
   hden0_clone239->SetTotalEvents(15,10576);
   hden0_clone239->SetPassedEvents(15,10064);
   hden0_clone239->SetTotalEvents(16,0);
   hden0_clone239->SetPassedEvents(16,0);
   hden0_clone239->SetTotalEvents(17,0);
   hden0_clone239->SetPassedEvents(17,0);
   hden0_clone239->SetTotalEvents(18,0);
   hden0_clone239->SetPassedEvents(18,0);
   hden0_clone239->SetTotalEvents(19,0);
   hden0_clone239->SetPassedEvents(19,0);
   hden0_clone239->SetTotalEvents(20,0);
   hden0_clone239->SetPassedEvents(20,0);
   hden0_clone239->SetTotalEvents(21,0);
   hden0_clone239->SetPassedEvents(21,0);
   hden0_clone239->SetTotalEvents(22,0);
   hden0_clone239->SetPassedEvents(22,0);
   hden0_clone239->SetTotalEvents(23,0);
   hden0_clone239->SetPassedEvents(23,0);
   hden0_clone239->SetTotalEvents(24,0);
   hden0_clone239->SetPassedEvents(24,0);
   hden0_clone239->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone239->SetLineColor(ci);
   hden0_clone239->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone239->SetMarkerColor(ci);
   hden0_clone239->SetMarkerStyle(26);
   hden0_clone239->Draw("samezp");
   Double_t xAxis240[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone240 = new TEfficiency("hden1_clone","",23,xAxis240);
   
   hden1_clone240->SetConfidenceLevel(0.6826895);
   hden1_clone240->SetBetaAlpha(1);
   hden1_clone240->SetBetaBeta(1);
   hden1_clone240->SetWeight(1);
   hden1_clone240->SetStatisticOption(0);
   hden1_clone240->SetPosteriorMode(0);
   hden1_clone240->SetShortestInterval(0);
   hden1_clone240->SetTotalEvents(0,0);
   hden1_clone240->SetPassedEvents(0,0);
   hden1_clone240->SetTotalEvents(1,0);
   hden1_clone240->SetPassedEvents(1,0);
   hden1_clone240->SetTotalEvents(2,0);
   hden1_clone240->SetPassedEvents(2,0);
   hden1_clone240->SetTotalEvents(3,0);
   hden1_clone240->SetPassedEvents(3,0);
   hden1_clone240->SetTotalEvents(4,0);
   hden1_clone240->SetPassedEvents(4,0);
   hden1_clone240->SetTotalEvents(5,0);
   hden1_clone240->SetPassedEvents(5,0);
   hden1_clone240->SetTotalEvents(6,0);
   hden1_clone240->SetPassedEvents(6,0);
   hden1_clone240->SetTotalEvents(7,7498);
   hden1_clone240->SetPassedEvents(7,7440);
   hden1_clone240->SetTotalEvents(8,7142);
   hden1_clone240->SetPassedEvents(8,7046);
   hden1_clone240->SetTotalEvents(9,7286);
   hden1_clone240->SetPassedEvents(9,7111);
   hden1_clone240->SetTotalEvents(10,7282);
   hden1_clone240->SetPassedEvents(10,7140);
   hden1_clone240->SetTotalEvents(11,7006);
   hden1_clone240->SetPassedEvents(11,6896);
   hden1_clone240->SetTotalEvents(12,7210);
   hden1_clone240->SetPassedEvents(12,7085);
   hden1_clone240->SetTotalEvents(13,7158);
   hden1_clone240->SetPassedEvents(13,7032);
   hden1_clone240->SetTotalEvents(14,7152);
   hden1_clone240->SetPassedEvents(14,7043);
   hden1_clone240->SetTotalEvents(15,7218);
   hden1_clone240->SetPassedEvents(15,7084);
   hden1_clone240->SetTotalEvents(16,0);
   hden1_clone240->SetPassedEvents(16,0);
   hden1_clone240->SetTotalEvents(17,0);
   hden1_clone240->SetPassedEvents(17,0);
   hden1_clone240->SetTotalEvents(18,0);
   hden1_clone240->SetPassedEvents(18,0);
   hden1_clone240->SetTotalEvents(19,0);
   hden1_clone240->SetPassedEvents(19,0);
   hden1_clone240->SetTotalEvents(20,0);
   hden1_clone240->SetPassedEvents(20,0);
   hden1_clone240->SetTotalEvents(21,0);
   hden1_clone240->SetPassedEvents(21,0);
   hden1_clone240->SetTotalEvents(22,0);
   hden1_clone240->SetPassedEvents(22,0);
   hden1_clone240->SetTotalEvents(23,0);
   hden1_clone240->SetPassedEvents(23,0);
   hden1_clone240->SetTotalEvents(24,0);
   hden1_clone240->SetPassedEvents(24,0);
   hden1_clone240->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden1_clone240->SetLineColor(ci);
   hden1_clone240->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden1_clone240->SetMarkerColor(ci);
   hden1_clone240->SetMarkerStyle(25);
   hden1_clone240->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>7 GeV");
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
