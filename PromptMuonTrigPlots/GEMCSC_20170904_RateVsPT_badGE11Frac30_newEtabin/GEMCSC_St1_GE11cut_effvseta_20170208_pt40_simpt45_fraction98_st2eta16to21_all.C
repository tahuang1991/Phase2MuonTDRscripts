void GEMCSC_St1_GE11cut_effvseta_20170208_pt40_simpt45_fraction98_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:39:16 2017) by ROOT version6.08/06
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
   Double_t xAxis914[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__876 = new TH1F("b1__876"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis914);
   b1__876->SetMinimum(0);
   b1__876->SetMaximum(1.05);
   b1__876->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__876->SetLineColor(ci);
   b1__876->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__876->GetXaxis()->SetLabelFont(42);
   b1__876->GetXaxis()->SetLabelSize(0.05);
   b1__876->GetXaxis()->SetTitleSize(0.05);
   b1__876->GetXaxis()->SetTitleFont(42);
   b1__876->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__876->GetYaxis()->SetNdivisions(520);
   b1__876->GetYaxis()->SetLabelFont(42);
   b1__876->GetYaxis()->SetLabelSize(0.05);
   b1__876->GetYaxis()->SetTitleSize(0.05);
   b1__876->GetYaxis()->SetTitleOffset(1.1);
   b1__876->GetYaxis()->SetTitleFont(42);
   b1__876->GetZaxis()->SetLabelFont(42);
   b1__876->GetZaxis()->SetLabelSize(0.035);
   b1__876->GetZaxis()->SetTitleSize(0.035);
   b1__876->GetZaxis()->SetTitleFont(42);
   b1__876->Draw("");
   Double_t xAxis1636[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone1636 = new TEfficiency("hden0_clone","",23,xAxis1636);
   
   hden0_clone1636->SetConfidenceLevel(0.6826895);
   hden0_clone1636->SetBetaAlpha(1);
   hden0_clone1636->SetBetaBeta(1);
   hden0_clone1636->SetWeight(1);
   hden0_clone1636->SetStatisticOption(0);
   hden0_clone1636->SetPosteriorMode(0);
   hden0_clone1636->SetShortestInterval(0);
   hden0_clone1636->SetTotalEvents(0,0);
   hden0_clone1636->SetPassedEvents(0,0);
   hden0_clone1636->SetTotalEvents(1,0);
   hden0_clone1636->SetPassedEvents(1,0);
   hden0_clone1636->SetTotalEvents(2,0);
   hden0_clone1636->SetPassedEvents(2,0);
   hden0_clone1636->SetTotalEvents(3,0);
   hden0_clone1636->SetPassedEvents(3,0);
   hden0_clone1636->SetTotalEvents(4,0);
   hden0_clone1636->SetPassedEvents(4,0);
   hden0_clone1636->SetTotalEvents(5,0);
   hden0_clone1636->SetPassedEvents(5,0);
   hden0_clone1636->SetTotalEvents(6,0);
   hden0_clone1636->SetPassedEvents(6,0);
   hden0_clone1636->SetTotalEvents(7,1504);
   hden0_clone1636->SetPassedEvents(7,1285);
   hden0_clone1636->SetTotalEvents(8,1478);
   hden0_clone1636->SetPassedEvents(8,1202);
   hden0_clone1636->SetTotalEvents(9,1478);
   hden0_clone1636->SetPassedEvents(9,1240);
   hden0_clone1636->SetTotalEvents(10,1400);
   hden0_clone1636->SetPassedEvents(10,1128);
   hden0_clone1636->SetTotalEvents(11,1326);
   hden0_clone1636->SetPassedEvents(11,1151);
   hden0_clone1636->SetTotalEvents(12,1366);
   hden0_clone1636->SetPassedEvents(12,1148);
   hden0_clone1636->SetTotalEvents(13,1356);
   hden0_clone1636->SetPassedEvents(13,1149);
   hden0_clone1636->SetTotalEvents(14,1434);
   hden0_clone1636->SetPassedEvents(14,1163);
   hden0_clone1636->SetTotalEvents(15,1376);
   hden0_clone1636->SetPassedEvents(15,1054);
   hden0_clone1636->SetTotalEvents(16,0);
   hden0_clone1636->SetPassedEvents(16,0);
   hden0_clone1636->SetTotalEvents(17,0);
   hden0_clone1636->SetPassedEvents(17,0);
   hden0_clone1636->SetTotalEvents(18,0);
   hden0_clone1636->SetPassedEvents(18,0);
   hden0_clone1636->SetTotalEvents(19,0);
   hden0_clone1636->SetPassedEvents(19,0);
   hden0_clone1636->SetTotalEvents(20,0);
   hden0_clone1636->SetPassedEvents(20,0);
   hden0_clone1636->SetTotalEvents(21,0);
   hden0_clone1636->SetPassedEvents(21,0);
   hden0_clone1636->SetTotalEvents(22,0);
   hden0_clone1636->SetPassedEvents(22,0);
   hden0_clone1636->SetTotalEvents(23,0);
   hden0_clone1636->SetPassedEvents(23,0);
   hden0_clone1636->SetTotalEvents(24,0);
   hden0_clone1636->SetPassedEvents(24,0);
   hden0_clone1636->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1636->SetLineColor(ci);
   hden0_clone1636->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1636->SetMarkerColor(ci);
   hden0_clone1636->SetMarkerStyle(26);
   hden0_clone1636->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>40 GeV");
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
