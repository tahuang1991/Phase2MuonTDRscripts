void GEMCSC_St1_GE11cut_effvseta_20170208_pt22_simpt27_fraction96_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:41 2017) by ROOT version6.08/06
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
   Double_t xAxis674[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__646 = new TH1F("b1__646"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis674);
   b1__646->SetMinimum(0);
   b1__646->SetMaximum(1.05);
   b1__646->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__646->SetLineColor(ci);
   b1__646->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__646->GetXaxis()->SetLabelFont(42);
   b1__646->GetXaxis()->SetLabelSize(0.05);
   b1__646->GetXaxis()->SetTitleSize(0.05);
   b1__646->GetXaxis()->SetTitleFont(42);
   b1__646->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__646->GetYaxis()->SetNdivisions(520);
   b1__646->GetYaxis()->SetLabelFont(42);
   b1__646->GetYaxis()->SetLabelSize(0.05);
   b1__646->GetYaxis()->SetTitleSize(0.05);
   b1__646->GetYaxis()->SetTitleOffset(1.1);
   b1__646->GetYaxis()->SetTitleFont(42);
   b1__646->GetZaxis()->SetLabelFont(42);
   b1__646->GetZaxis()->SetLabelSize(0.035);
   b1__646->GetZaxis()->SetTitleSize(0.035);
   b1__646->GetZaxis()->SetTitleFont(42);
   b1__646->Draw("");
   Double_t xAxis1206[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone1206 = new TEfficiency("hden0_clone","",23,xAxis1206);
   
   hden0_clone1206->SetConfidenceLevel(0.6826895);
   hden0_clone1206->SetBetaAlpha(1);
   hden0_clone1206->SetBetaBeta(1);
   hden0_clone1206->SetWeight(1);
   hden0_clone1206->SetStatisticOption(0);
   hden0_clone1206->SetPosteriorMode(0);
   hden0_clone1206->SetShortestInterval(0);
   hden0_clone1206->SetTotalEvents(0,0);
   hden0_clone1206->SetPassedEvents(0,0);
   hden0_clone1206->SetTotalEvents(1,0);
   hden0_clone1206->SetPassedEvents(1,0);
   hden0_clone1206->SetTotalEvents(2,0);
   hden0_clone1206->SetPassedEvents(2,0);
   hden0_clone1206->SetTotalEvents(3,0);
   hden0_clone1206->SetPassedEvents(3,0);
   hden0_clone1206->SetTotalEvents(4,0);
   hden0_clone1206->SetPassedEvents(4,0);
   hden0_clone1206->SetTotalEvents(5,0);
   hden0_clone1206->SetPassedEvents(5,0);
   hden0_clone1206->SetTotalEvents(6,0);
   hden0_clone1206->SetPassedEvents(6,0);
   hden0_clone1206->SetTotalEvents(7,6710);
   hden0_clone1206->SetPassedEvents(7,6053);
   hden0_clone1206->SetTotalEvents(8,6562);
   hden0_clone1206->SetPassedEvents(8,5596);
   hden0_clone1206->SetTotalEvents(9,6498);
   hden0_clone1206->SetPassedEvents(9,5711);
   hden0_clone1206->SetTotalEvents(10,6568);
   hden0_clone1206->SetPassedEvents(10,5832);
   hden0_clone1206->SetTotalEvents(11,6242);
   hden0_clone1206->SetPassedEvents(11,5644);
   hden0_clone1206->SetTotalEvents(12,6466);
   hden0_clone1206->SetPassedEvents(12,5753);
   hden0_clone1206->SetTotalEvents(13,6310);
   hden0_clone1206->SetPassedEvents(13,5600);
   hden0_clone1206->SetTotalEvents(14,6438);
   hden0_clone1206->SetPassedEvents(14,5705);
   hden0_clone1206->SetTotalEvents(15,6434);
   hden0_clone1206->SetPassedEvents(15,5543);
   hden0_clone1206->SetTotalEvents(16,0);
   hden0_clone1206->SetPassedEvents(16,0);
   hden0_clone1206->SetTotalEvents(17,0);
   hden0_clone1206->SetPassedEvents(17,0);
   hden0_clone1206->SetTotalEvents(18,0);
   hden0_clone1206->SetPassedEvents(18,0);
   hden0_clone1206->SetTotalEvents(19,0);
   hden0_clone1206->SetPassedEvents(19,0);
   hden0_clone1206->SetTotalEvents(20,0);
   hden0_clone1206->SetPassedEvents(20,0);
   hden0_clone1206->SetTotalEvents(21,0);
   hden0_clone1206->SetPassedEvents(21,0);
   hden0_clone1206->SetTotalEvents(22,0);
   hden0_clone1206->SetPassedEvents(22,0);
   hden0_clone1206->SetTotalEvents(23,0);
   hden0_clone1206->SetPassedEvents(23,0);
   hden0_clone1206->SetTotalEvents(24,0);
   hden0_clone1206->SetPassedEvents(24,0);
   hden0_clone1206->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1206->SetLineColor(ci);
   hden0_clone1206->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1206->SetMarkerColor(ci);
   hden0_clone1206->SetMarkerStyle(26);
   hden0_clone1206->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>22 GeV");
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
