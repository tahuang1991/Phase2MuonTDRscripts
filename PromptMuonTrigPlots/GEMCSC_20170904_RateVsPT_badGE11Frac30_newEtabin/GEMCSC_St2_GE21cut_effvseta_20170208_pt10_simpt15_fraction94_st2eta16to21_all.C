void GEMCSC_St2_GE21cut_effvseta_20170208_pt10_simpt15_fraction94_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:32:13 2017) by ROOT version6.08/06
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
   Double_t xAxis270[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__259 = new TH1F("b1__259"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis270);
   b1__259->SetMinimum(0);
   b1__259->SetMaximum(1.05);
   b1__259->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__259->SetLineColor(ci);
   b1__259->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__259->GetXaxis()->SetLabelFont(42);
   b1__259->GetXaxis()->SetLabelSize(0.05);
   b1__259->GetXaxis()->SetTitleSize(0.05);
   b1__259->GetXaxis()->SetTitleFont(42);
   b1__259->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__259->GetYaxis()->SetNdivisions(520);
   b1__259->GetYaxis()->SetLabelFont(42);
   b1__259->GetYaxis()->SetLabelSize(0.05);
   b1__259->GetYaxis()->SetTitleSize(0.05);
   b1__259->GetYaxis()->SetTitleOffset(1.1);
   b1__259->GetYaxis()->SetTitleFont(42);
   b1__259->GetZaxis()->SetLabelFont(42);
   b1__259->GetZaxis()->SetLabelSize(0.035);
   b1__259->GetZaxis()->SetTitleSize(0.035);
   b1__259->GetZaxis()->SetTitleFont(42);
   b1__259->Draw("");
   Double_t xAxis479[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone479 = new TEfficiency("hden0_clone","",23,xAxis479);
   
   hden0_clone479->SetConfidenceLevel(0.6826895);
   hden0_clone479->SetBetaAlpha(1);
   hden0_clone479->SetBetaBeta(1);
   hden0_clone479->SetWeight(1);
   hden0_clone479->SetStatisticOption(0);
   hden0_clone479->SetPosteriorMode(0);
   hden0_clone479->SetShortestInterval(0);
   hden0_clone479->SetTotalEvents(0,0);
   hden0_clone479->SetPassedEvents(0,0);
   hden0_clone479->SetTotalEvents(1,0);
   hden0_clone479->SetPassedEvents(1,0);
   hden0_clone479->SetTotalEvents(2,0);
   hden0_clone479->SetPassedEvents(2,0);
   hden0_clone479->SetTotalEvents(3,0);
   hden0_clone479->SetPassedEvents(3,0);
   hden0_clone479->SetTotalEvents(4,0);
   hden0_clone479->SetPassedEvents(4,0);
   hden0_clone479->SetTotalEvents(5,0);
   hden0_clone479->SetPassedEvents(5,0);
   hden0_clone479->SetTotalEvents(6,0);
   hden0_clone479->SetPassedEvents(6,0);
   hden0_clone479->SetTotalEvents(7,6932);
   hden0_clone479->SetPassedEvents(7,6541);
   hden0_clone479->SetTotalEvents(8,6618);
   hden0_clone479->SetPassedEvents(8,6218);
   hden0_clone479->SetTotalEvents(9,6760);
   hden0_clone479->SetPassedEvents(9,6233);
   hden0_clone479->SetTotalEvents(10,6726);
   hden0_clone479->SetPassedEvents(10,6219);
   hden0_clone479->SetTotalEvents(11,6426);
   hden0_clone479->SetPassedEvents(11,6043);
   hden0_clone479->SetTotalEvents(12,6676);
   hden0_clone479->SetPassedEvents(12,6203);
   hden0_clone479->SetTotalEvents(13,6578);
   hden0_clone479->SetPassedEvents(13,6146);
   hden0_clone479->SetTotalEvents(14,6574);
   hden0_clone479->SetPassedEvents(14,5842);
   hden0_clone479->SetTotalEvents(15,6650);
   hden0_clone479->SetPassedEvents(15,5811);
   hden0_clone479->SetTotalEvents(16,0);
   hden0_clone479->SetPassedEvents(16,0);
   hden0_clone479->SetTotalEvents(17,0);
   hden0_clone479->SetPassedEvents(17,0);
   hden0_clone479->SetTotalEvents(18,0);
   hden0_clone479->SetPassedEvents(18,0);
   hden0_clone479->SetTotalEvents(19,0);
   hden0_clone479->SetPassedEvents(19,0);
   hden0_clone479->SetTotalEvents(20,0);
   hden0_clone479->SetPassedEvents(20,0);
   hden0_clone479->SetTotalEvents(21,0);
   hden0_clone479->SetPassedEvents(21,0);
   hden0_clone479->SetTotalEvents(22,0);
   hden0_clone479->SetPassedEvents(22,0);
   hden0_clone479->SetTotalEvents(23,0);
   hden0_clone479->SetPassedEvents(23,0);
   hden0_clone479->SetTotalEvents(24,0);
   hden0_clone479->SetPassedEvents(24,0);
   hden0_clone479->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone479->SetLineColor(ci);
   hden0_clone479->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone479->SetMarkerColor(ci);
   hden0_clone479->SetMarkerStyle(26);
   hden0_clone479->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV");
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
