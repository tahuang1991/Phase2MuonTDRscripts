void GEMCSC_L1Mu_etaeff_20170208_pt15_simpt20_fraction86_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:08:04 2017) by ROOT version6.08/06
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
   Double_t xAxis278[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__267 = new TH1F("b1__267"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis278);
   b1__267->SetMinimum(0);
   b1__267->SetMaximum(1.05);
   b1__267->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__267->SetLineColor(ci);
   b1__267->GetXaxis()->SetTitle("true muon p_{T} GeV");
   b1__267->GetXaxis()->SetLabelFont(42);
   b1__267->GetXaxis()->SetLabelSize(0.05);
   b1__267->GetXaxis()->SetTitleSize(0.05);
   b1__267->GetXaxis()->SetTitleFont(42);
   b1__267->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__267->GetYaxis()->SetNdivisions(520);
   b1__267->GetYaxis()->SetLabelFont(42);
   b1__267->GetYaxis()->SetLabelSize(0.05);
   b1__267->GetYaxis()->SetTitleSize(0.05);
   b1__267->GetYaxis()->SetTitleOffset(1.1);
   b1__267->GetYaxis()->SetTitleFont(42);
   b1__267->GetZaxis()->SetLabelFont(42);
   b1__267->GetZaxis()->SetLabelSize(0.035);
   b1__267->GetZaxis()->SetTitleSize(0.035);
   b1__267->GetZaxis()->SetTitleFont(42);
   b1__267->Draw("");
   Double_t xAxis497[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone497 = new TEfficiency("hden0_clone","",23,xAxis497);
   
   hden0_clone497->SetConfidenceLevel(0.6826895);
   hden0_clone497->SetBetaAlpha(1);
   hden0_clone497->SetBetaBeta(1);
   hden0_clone497->SetWeight(1);
   hden0_clone497->SetStatisticOption(0);
   hden0_clone497->SetPosteriorMode(0);
   hden0_clone497->SetShortestInterval(0);
   hden0_clone497->SetTotalEvents(0,0);
   hden0_clone497->SetPassedEvents(0,0);
   hden0_clone497->SetTotalEvents(1,0);
   hden0_clone497->SetPassedEvents(1,0);
   hden0_clone497->SetTotalEvents(2,0);
   hden0_clone497->SetPassedEvents(2,0);
   hden0_clone497->SetTotalEvents(3,0);
   hden0_clone497->SetPassedEvents(3,0);
   hden0_clone497->SetTotalEvents(4,0);
   hden0_clone497->SetPassedEvents(4,0);
   hden0_clone497->SetTotalEvents(5,0);
   hden0_clone497->SetPassedEvents(5,0);
   hden0_clone497->SetTotalEvents(6,0);
   hden0_clone497->SetPassedEvents(6,0);
   hden0_clone497->SetTotalEvents(7,8694);
   hden0_clone497->SetPassedEvents(7,8591);
   hden0_clone497->SetTotalEvents(8,8460);
   hden0_clone497->SetPassedEvents(8,8244);
   hden0_clone497->SetTotalEvents(9,8390);
   hden0_clone497->SetPassedEvents(9,8057);
   hden0_clone497->SetTotalEvents(10,8546);
   hden0_clone497->SetPassedEvents(10,8266);
   hden0_clone497->SetTotalEvents(11,8168);
   hden0_clone497->SetPassedEvents(11,7933);
   hden0_clone497->SetTotalEvents(12,8424);
   hden0_clone497->SetPassedEvents(12,8201);
   hden0_clone497->SetTotalEvents(13,8314);
   hden0_clone497->SetPassedEvents(13,8043);
   hden0_clone497->SetTotalEvents(14,8306);
   hden0_clone497->SetPassedEvents(14,8039);
   hden0_clone497->SetTotalEvents(15,8340);
   hden0_clone497->SetPassedEvents(15,7920);
   hden0_clone497->SetTotalEvents(16,0);
   hden0_clone497->SetPassedEvents(16,0);
   hden0_clone497->SetTotalEvents(17,0);
   hden0_clone497->SetPassedEvents(17,0);
   hden0_clone497->SetTotalEvents(18,0);
   hden0_clone497->SetPassedEvents(18,0);
   hden0_clone497->SetTotalEvents(19,0);
   hden0_clone497->SetPassedEvents(19,0);
   hden0_clone497->SetTotalEvents(20,0);
   hden0_clone497->SetPassedEvents(20,0);
   hden0_clone497->SetTotalEvents(21,0);
   hden0_clone497->SetPassedEvents(21,0);
   hden0_clone497->SetTotalEvents(22,0);
   hden0_clone497->SetPassedEvents(22,0);
   hden0_clone497->SetTotalEvents(23,0);
   hden0_clone497->SetPassedEvents(23,0);
   hden0_clone497->SetTotalEvents(24,0);
   hden0_clone497->SetPassedEvents(24,0);
   hden0_clone497->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone497->SetLineColor(ci);
   hden0_clone497->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone497->SetMarkerColor(ci);
   hden0_clone497->SetMarkerStyle(26);
   hden0_clone497->Draw("samezp");
   Double_t xAxis498[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone498 = new TEfficiency("hden1_clone","",23,xAxis498);
   
   hden1_clone498->SetConfidenceLevel(0.6826895);
   hden1_clone498->SetBetaAlpha(1);
   hden1_clone498->SetBetaBeta(1);
   hden1_clone498->SetWeight(1);
   hden1_clone498->SetStatisticOption(0);
   hden1_clone498->SetPosteriorMode(0);
   hden1_clone498->SetShortestInterval(0);
   hden1_clone498->SetTotalEvents(0,0);
   hden1_clone498->SetPassedEvents(0,0);
   hden1_clone498->SetTotalEvents(1,0);
   hden1_clone498->SetPassedEvents(1,0);
   hden1_clone498->SetTotalEvents(2,0);
   hden1_clone498->SetPassedEvents(2,0);
   hden1_clone498->SetTotalEvents(3,0);
   hden1_clone498->SetPassedEvents(3,0);
   hden1_clone498->SetTotalEvents(4,0);
   hden1_clone498->SetPassedEvents(4,0);
   hden1_clone498->SetTotalEvents(5,0);
   hden1_clone498->SetPassedEvents(5,0);
   hden1_clone498->SetTotalEvents(6,0);
   hden1_clone498->SetPassedEvents(6,0);
   hden1_clone498->SetTotalEvents(7,5956);
   hden1_clone498->SetPassedEvents(7,5911);
   hden1_clone498->SetTotalEvents(8,5618);
   hden1_clone498->SetPassedEvents(8,5543);
   hden1_clone498->SetTotalEvents(9,5822);
   hden1_clone498->SetPassedEvents(9,5681);
   hden1_clone498->SetTotalEvents(10,5806);
   hden1_clone498->SetPassedEvents(10,5698);
   hden1_clone498->SetTotalEvents(11,5480);
   hden1_clone498->SetPassedEvents(11,5395);
   hden1_clone498->SetTotalEvents(12,5760);
   hden1_clone498->SetPassedEvents(12,5671);
   hden1_clone498->SetTotalEvents(13,5706);
   hden1_clone498->SetPassedEvents(13,5606);
   hden1_clone498->SetTotalEvents(14,5658);
   hden1_clone498->SetPassedEvents(14,5573);
   hden1_clone498->SetTotalEvents(15,5722);
   hden1_clone498->SetPassedEvents(15,5609);
   hden1_clone498->SetTotalEvents(16,0);
   hden1_clone498->SetPassedEvents(16,0);
   hden1_clone498->SetTotalEvents(17,0);
   hden1_clone498->SetPassedEvents(17,0);
   hden1_clone498->SetTotalEvents(18,0);
   hden1_clone498->SetPassedEvents(18,0);
   hden1_clone498->SetTotalEvents(19,0);
   hden1_clone498->SetPassedEvents(19,0);
   hden1_clone498->SetTotalEvents(20,0);
   hden1_clone498->SetPassedEvents(20,0);
   hden1_clone498->SetTotalEvents(21,0);
   hden1_clone498->SetPassedEvents(21,0);
   hden1_clone498->SetTotalEvents(22,0);
   hden1_clone498->SetPassedEvents(22,0);
   hden1_clone498->SetTotalEvents(23,0);
   hden1_clone498->SetPassedEvents(23,0);
   hden1_clone498->SetTotalEvents(24,0);
   hden1_clone498->SetPassedEvents(24,0);
   hden1_clone498->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden1_clone498->SetLineColor(ci);
   hden1_clone498->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden1_clone498->SetMarkerColor(ci);
   hden1_clone498->SetMarkerStyle(25);
   hden1_clone498->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>15 GeV");
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
