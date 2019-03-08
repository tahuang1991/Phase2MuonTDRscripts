void GEMCSC_St1_GE11cut_effvseta_20170208_pt12_simpt17_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:33:24 2017) by ROOT version6.08/06
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
   Double_t xAxis364[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__349 = new TH1F("b1__349"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis364);
   b1__349->SetMinimum(0);
   b1__349->SetMaximum(1.05);
   b1__349->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__349->SetLineColor(ci);
   b1__349->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__349->GetXaxis()->SetLabelFont(42);
   b1__349->GetXaxis()->SetLabelSize(0.05);
   b1__349->GetXaxis()->SetTitleSize(0.05);
   b1__349->GetXaxis()->SetTitleFont(42);
   b1__349->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__349->GetYaxis()->SetNdivisions(520);
   b1__349->GetYaxis()->SetLabelFont(42);
   b1__349->GetYaxis()->SetLabelSize(0.05);
   b1__349->GetYaxis()->SetTitleSize(0.05);
   b1__349->GetYaxis()->SetTitleOffset(1.1);
   b1__349->GetYaxis()->SetTitleFont(42);
   b1__349->GetZaxis()->SetLabelFont(42);
   b1__349->GetZaxis()->SetLabelSize(0.035);
   b1__349->GetZaxis()->SetTitleSize(0.035);
   b1__349->GetZaxis()->SetTitleFont(42);
   b1__349->Draw("");
   Double_t xAxis649[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone649 = new TEfficiency("hden0_clone","",23,xAxis649);
   
   hden0_clone649->SetConfidenceLevel(0.6826895);
   hden0_clone649->SetBetaAlpha(1);
   hden0_clone649->SetBetaBeta(1);
   hden0_clone649->SetWeight(1);
   hden0_clone649->SetStatisticOption(0);
   hden0_clone649->SetPosteriorMode(0);
   hden0_clone649->SetShortestInterval(0);
   hden0_clone649->SetTotalEvents(0,0);
   hden0_clone649->SetPassedEvents(0,0);
   hden0_clone649->SetTotalEvents(1,0);
   hden0_clone649->SetPassedEvents(1,0);
   hden0_clone649->SetTotalEvents(2,0);
   hden0_clone649->SetPassedEvents(2,0);
   hden0_clone649->SetTotalEvents(3,0);
   hden0_clone649->SetPassedEvents(3,0);
   hden0_clone649->SetTotalEvents(4,0);
   hden0_clone649->SetPassedEvents(4,0);
   hden0_clone649->SetTotalEvents(5,0);
   hden0_clone649->SetPassedEvents(5,0);
   hden0_clone649->SetTotalEvents(6,0);
   hden0_clone649->SetPassedEvents(6,0);
   hden0_clone649->SetTotalEvents(7,9542);
   hden0_clone649->SetPassedEvents(7,8895);
   hden0_clone649->SetTotalEvents(8,9376);
   hden0_clone649->SetPassedEvents(8,8465);
   hden0_clone649->SetTotalEvents(9,9184);
   hden0_clone649->SetPassedEvents(9,8415);
   hden0_clone649->SetTotalEvents(10,9344);
   hden0_clone649->SetPassedEvents(10,8610);
   hden0_clone649->SetTotalEvents(11,9052);
   hden0_clone649->SetPassedEvents(11,8410);
   hden0_clone649->SetTotalEvents(12,9274);
   hden0_clone649->SetPassedEvents(12,8512);
   hden0_clone649->SetTotalEvents(13,9076);
   hden0_clone649->SetPassedEvents(13,8264);
   hden0_clone649->SetTotalEvents(14,9084);
   hden0_clone649->SetPassedEvents(14,8316);
   hden0_clone649->SetTotalEvents(15,9166);
   hden0_clone649->SetPassedEvents(15,8159);
   hden0_clone649->SetTotalEvents(16,0);
   hden0_clone649->SetPassedEvents(16,0);
   hden0_clone649->SetTotalEvents(17,0);
   hden0_clone649->SetPassedEvents(17,0);
   hden0_clone649->SetTotalEvents(18,0);
   hden0_clone649->SetPassedEvents(18,0);
   hden0_clone649->SetTotalEvents(19,0);
   hden0_clone649->SetPassedEvents(19,0);
   hden0_clone649->SetTotalEvents(20,0);
   hden0_clone649->SetPassedEvents(20,0);
   hden0_clone649->SetTotalEvents(21,0);
   hden0_clone649->SetPassedEvents(21,0);
   hden0_clone649->SetTotalEvents(22,0);
   hden0_clone649->SetPassedEvents(22,0);
   hden0_clone649->SetTotalEvents(23,0);
   hden0_clone649->SetPassedEvents(23,0);
   hden0_clone649->SetTotalEvents(24,0);
   hden0_clone649->SetPassedEvents(24,0);
   hden0_clone649->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone649->SetLineColor(ci);
   hden0_clone649->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone649->SetMarkerColor(ci);
   hden0_clone649->SetMarkerStyle(26);
   hden0_clone649->Draw("samezp");
   
   TLegend *leg = new TLegend(0.45,0.2,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GE11-ME11","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","prompt muon","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>12 GeV");
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
