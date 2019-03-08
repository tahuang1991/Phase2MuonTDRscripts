void GEMCSC_St1_GE11cut_effvseta_20170208_pt30_simpt35_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:38:29 2017) by ROOT version6.08/06
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
   Double_t xAxis844[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__809 = new TH1F("b1__809"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis844);
   b1__809->SetMinimum(0);
   b1__809->SetMaximum(1.05);
   b1__809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__809->SetLineColor(ci);
   b1__809->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__809->GetXaxis()->SetLabelFont(42);
   b1__809->GetXaxis()->SetLabelSize(0.05);
   b1__809->GetXaxis()->SetTitleSize(0.05);
   b1__809->GetXaxis()->SetTitleFont(42);
   b1__809->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__809->GetYaxis()->SetNdivisions(520);
   b1__809->GetYaxis()->SetLabelFont(42);
   b1__809->GetYaxis()->SetLabelSize(0.05);
   b1__809->GetYaxis()->SetTitleSize(0.05);
   b1__809->GetYaxis()->SetTitleOffset(1.1);
   b1__809->GetYaxis()->SetTitleFont(42);
   b1__809->GetZaxis()->SetLabelFont(42);
   b1__809->GetZaxis()->SetLabelSize(0.035);
   b1__809->GetZaxis()->SetTitleSize(0.035);
   b1__809->GetZaxis()->SetTitleFont(42);
   b1__809->Draw("");
   Double_t xAxis1509[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone1509 = new TEfficiency("hden0_clone","",23,xAxis1509);
   
   hden0_clone1509->SetConfidenceLevel(0.6826895);
   hden0_clone1509->SetBetaAlpha(1);
   hden0_clone1509->SetBetaBeta(1);
   hden0_clone1509->SetWeight(1);
   hden0_clone1509->SetStatisticOption(0);
   hden0_clone1509->SetPosteriorMode(0);
   hden0_clone1509->SetShortestInterval(0);
   hden0_clone1509->SetTotalEvents(0,0);
   hden0_clone1509->SetPassedEvents(0,0);
   hden0_clone1509->SetTotalEvents(1,0);
   hden0_clone1509->SetPassedEvents(1,0);
   hden0_clone1509->SetTotalEvents(2,0);
   hden0_clone1509->SetPassedEvents(2,0);
   hden0_clone1509->SetTotalEvents(3,0);
   hden0_clone1509->SetPassedEvents(3,0);
   hden0_clone1509->SetTotalEvents(4,0);
   hden0_clone1509->SetPassedEvents(4,0);
   hden0_clone1509->SetTotalEvents(5,0);
   hden0_clone1509->SetPassedEvents(5,0);
   hden0_clone1509->SetTotalEvents(6,0);
   hden0_clone1509->SetPassedEvents(6,0);
   hden0_clone1509->SetTotalEvents(7,4384);
   hden0_clone1509->SetPassedEvents(7,3855);
   hden0_clone1509->SetTotalEvents(8,4336);
   hden0_clone1509->SetPassedEvents(8,3591);
   hden0_clone1509->SetTotalEvents(9,4332);
   hden0_clone1509->SetPassedEvents(9,3721);
   hden0_clone1509->SetTotalEvents(10,4364);
   hden0_clone1509->SetPassedEvents(10,3756);
   hden0_clone1509->SetTotalEvents(11,4070);
   hden0_clone1509->SetPassedEvents(11,3601);
   hden0_clone1509->SetTotalEvents(12,4212);
   hden0_clone1509->SetPassedEvents(12,3626);
   hden0_clone1509->SetTotalEvents(13,4158);
   hden0_clone1509->SetPassedEvents(13,3584);
   hden0_clone1509->SetTotalEvents(14,4242);
   hden0_clone1509->SetPassedEvents(14,3640);
   hden0_clone1509->SetTotalEvents(15,4136);
   hden0_clone1509->SetPassedEvents(15,3429);
   hden0_clone1509->SetTotalEvents(16,0);
   hden0_clone1509->SetPassedEvents(16,0);
   hden0_clone1509->SetTotalEvents(17,0);
   hden0_clone1509->SetPassedEvents(17,0);
   hden0_clone1509->SetTotalEvents(18,0);
   hden0_clone1509->SetPassedEvents(18,0);
   hden0_clone1509->SetTotalEvents(19,0);
   hden0_clone1509->SetPassedEvents(19,0);
   hden0_clone1509->SetTotalEvents(20,0);
   hden0_clone1509->SetPassedEvents(20,0);
   hden0_clone1509->SetTotalEvents(21,0);
   hden0_clone1509->SetPassedEvents(21,0);
   hden0_clone1509->SetTotalEvents(22,0);
   hden0_clone1509->SetPassedEvents(22,0);
   hden0_clone1509->SetTotalEvents(23,0);
   hden0_clone1509->SetPassedEvents(23,0);
   hden0_clone1509->SetTotalEvents(24,0);
   hden0_clone1509->SetPassedEvents(24,0);
   hden0_clone1509->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1509->SetLineColor(ci);
   hden0_clone1509->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1509->SetMarkerColor(ci);
   hden0_clone1509->SetMarkerStyle(26);
   hden0_clone1509->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>30 GeV");
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
