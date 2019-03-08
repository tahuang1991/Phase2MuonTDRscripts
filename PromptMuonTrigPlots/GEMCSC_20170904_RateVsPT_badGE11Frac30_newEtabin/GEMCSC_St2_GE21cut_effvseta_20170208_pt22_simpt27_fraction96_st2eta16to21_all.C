void GEMCSC_St2_GE21cut_effvseta_20170208_pt22_simpt27_fraction96_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:43 2017) by ROOT version6.08/06
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
   Double_t xAxis678[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__650 = new TH1F("b1__650"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis678);
   b1__650->SetMinimum(0);
   b1__650->SetMaximum(1.05);
   b1__650->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__650->SetLineColor(ci);
   b1__650->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__650->GetXaxis()->SetLabelFont(42);
   b1__650->GetXaxis()->SetLabelSize(0.05);
   b1__650->GetXaxis()->SetTitleSize(0.05);
   b1__650->GetXaxis()->SetTitleFont(42);
   b1__650->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__650->GetYaxis()->SetNdivisions(520);
   b1__650->GetYaxis()->SetLabelFont(42);
   b1__650->GetYaxis()->SetLabelSize(0.05);
   b1__650->GetYaxis()->SetTitleSize(0.05);
   b1__650->GetYaxis()->SetTitleOffset(1.1);
   b1__650->GetYaxis()->SetTitleFont(42);
   b1__650->GetZaxis()->SetLabelFont(42);
   b1__650->GetZaxis()->SetLabelSize(0.035);
   b1__650->GetZaxis()->SetTitleSize(0.035);
   b1__650->GetZaxis()->SetTitleFont(42);
   b1__650->Draw("");
   Double_t xAxis1210[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone1210 = new TEfficiency("hden0_clone","",23,xAxis1210);
   
   hden0_clone1210->SetConfidenceLevel(0.6826895);
   hden0_clone1210->SetBetaAlpha(1);
   hden0_clone1210->SetBetaBeta(1);
   hden0_clone1210->SetWeight(1);
   hden0_clone1210->SetStatisticOption(0);
   hden0_clone1210->SetPosteriorMode(0);
   hden0_clone1210->SetShortestInterval(0);
   hden0_clone1210->SetTotalEvents(0,0);
   hden0_clone1210->SetPassedEvents(0,0);
   hden0_clone1210->SetTotalEvents(1,0);
   hden0_clone1210->SetPassedEvents(1,0);
   hden0_clone1210->SetTotalEvents(2,0);
   hden0_clone1210->SetPassedEvents(2,0);
   hden0_clone1210->SetTotalEvents(3,0);
   hden0_clone1210->SetPassedEvents(3,0);
   hden0_clone1210->SetTotalEvents(4,0);
   hden0_clone1210->SetPassedEvents(4,0);
   hden0_clone1210->SetTotalEvents(5,0);
   hden0_clone1210->SetPassedEvents(5,0);
   hden0_clone1210->SetTotalEvents(6,0);
   hden0_clone1210->SetPassedEvents(6,0);
   hden0_clone1210->SetTotalEvents(7,4548);
   hden0_clone1210->SetPassedEvents(7,4180);
   hden0_clone1210->SetTotalEvents(8,4366);
   hden0_clone1210->SetPassedEvents(8,3932);
   hden0_clone1210->SetTotalEvents(9,4474);
   hden0_clone1210->SetPassedEvents(9,3940);
   hden0_clone1210->SetTotalEvents(10,4494);
   hden0_clone1210->SetPassedEvents(10,3999);
   hden0_clone1210->SetTotalEvents(11,4198);
   hden0_clone1210->SetPassedEvents(11,3808);
   hden0_clone1210->SetTotalEvents(12,4432);
   hden0_clone1210->SetPassedEvents(12,4012);
   hden0_clone1210->SetTotalEvents(13,4340);
   hden0_clone1210->SetPassedEvents(13,3906);
   hden0_clone1210->SetTotalEvents(14,4394);
   hden0_clone1210->SetPassedEvents(14,3758);
   hden0_clone1210->SetTotalEvents(15,4378);
   hden0_clone1210->SetPassedEvents(15,3711);
   hden0_clone1210->SetTotalEvents(16,0);
   hden0_clone1210->SetPassedEvents(16,0);
   hden0_clone1210->SetTotalEvents(17,0);
   hden0_clone1210->SetPassedEvents(17,0);
   hden0_clone1210->SetTotalEvents(18,0);
   hden0_clone1210->SetPassedEvents(18,0);
   hden0_clone1210->SetTotalEvents(19,0);
   hden0_clone1210->SetPassedEvents(19,0);
   hden0_clone1210->SetTotalEvents(20,0);
   hden0_clone1210->SetPassedEvents(20,0);
   hden0_clone1210->SetTotalEvents(21,0);
   hden0_clone1210->SetPassedEvents(21,0);
   hden0_clone1210->SetTotalEvents(22,0);
   hden0_clone1210->SetPassedEvents(22,0);
   hden0_clone1210->SetTotalEvents(23,0);
   hden0_clone1210->SetPassedEvents(23,0);
   hden0_clone1210->SetTotalEvents(24,0);
   hden0_clone1210->SetPassedEvents(24,0);
   hden0_clone1210->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1210->SetLineColor(ci);
   hden0_clone1210->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1210->SetMarkerColor(ci);
   hden0_clone1210->SetMarkerStyle(26);
   hden0_clone1210->Draw("samezp");
   
   TLegend *leg = new TLegend(0.45,0.2,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GE21-ME21","h");
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
