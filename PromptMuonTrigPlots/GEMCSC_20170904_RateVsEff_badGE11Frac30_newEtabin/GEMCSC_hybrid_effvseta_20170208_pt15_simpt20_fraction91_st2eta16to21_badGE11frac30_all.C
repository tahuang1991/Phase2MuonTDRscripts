void GEMCSC_hybrid_effvseta_20170208_pt15_simpt20_fraction91_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:09:12 2017) by ROOT version6.08/06
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
   Double_t xAxis394[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__378 = new TH1F("b1__378"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis394);
   b1__378->SetMinimum(0);
   b1__378->SetMaximum(1.05);
   b1__378->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__378->SetLineColor(ci);
   b1__378->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__378->GetXaxis()->SetLabelFont(42);
   b1__378->GetXaxis()->SetLabelSize(0.05);
   b1__378->GetXaxis()->SetTitleSize(0.05);
   b1__378->GetXaxis()->SetTitleFont(42);
   b1__378->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__378->GetYaxis()->SetNdivisions(520);
   b1__378->GetYaxis()->SetLabelFont(42);
   b1__378->GetYaxis()->SetLabelSize(0.05);
   b1__378->GetYaxis()->SetTitleSize(0.05);
   b1__378->GetYaxis()->SetTitleOffset(1.1);
   b1__378->GetYaxis()->SetTitleFont(42);
   b1__378->GetZaxis()->SetLabelFont(42);
   b1__378->GetZaxis()->SetLabelSize(0.035);
   b1__378->GetZaxis()->SetTitleSize(0.035);
   b1__378->GetZaxis()->SetTitleFont(42);
   b1__378->Draw("");
   Double_t xAxis700[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone700 = new TEfficiency("hden0_clone","",23,xAxis700);
   
   hden0_clone700->SetConfidenceLevel(0.6826895);
   hden0_clone700->SetBetaAlpha(1);
   hden0_clone700->SetBetaBeta(1);
   hden0_clone700->SetWeight(1);
   hden0_clone700->SetStatisticOption(0);
   hden0_clone700->SetPosteriorMode(0);
   hden0_clone700->SetShortestInterval(0);
   hden0_clone700->SetTotalEvents(0,0);
   hden0_clone700->SetPassedEvents(0,0);
   hden0_clone700->SetTotalEvents(1,0);
   hden0_clone700->SetPassedEvents(1,0);
   hden0_clone700->SetTotalEvents(2,0);
   hden0_clone700->SetPassedEvents(2,0);
   hden0_clone700->SetTotalEvents(3,0);
   hden0_clone700->SetPassedEvents(3,0);
   hden0_clone700->SetTotalEvents(4,0);
   hden0_clone700->SetPassedEvents(4,0);
   hden0_clone700->SetTotalEvents(5,0);
   hden0_clone700->SetPassedEvents(5,0);
   hden0_clone700->SetTotalEvents(6,0);
   hden0_clone700->SetPassedEvents(6,0);
   hden0_clone700->SetTotalEvents(7,5956);
   hden0_clone700->SetPassedEvents(7,5526);
   hden0_clone700->SetTotalEvents(8,5618);
   hden0_clone700->SetPassedEvents(8,5133);
   hden0_clone700->SetTotalEvents(9,5822);
   hden0_clone700->SetPassedEvents(9,5230);
   hden0_clone700->SetTotalEvents(10,5806);
   hden0_clone700->SetPassedEvents(10,5245);
   hden0_clone700->SetTotalEvents(11,5480);
   hden0_clone700->SetPassedEvents(11,4996);
   hden0_clone700->SetTotalEvents(12,5760);
   hden0_clone700->SetPassedEvents(12,5207);
   hden0_clone700->SetTotalEvents(13,5706);
   hden0_clone700->SetPassedEvents(13,5137);
   hden0_clone700->SetTotalEvents(14,5658);
   hden0_clone700->SetPassedEvents(14,5011);
   hden0_clone700->SetTotalEvents(15,5722);
   hden0_clone700->SetPassedEvents(15,4955);
   hden0_clone700->SetTotalEvents(16,0);
   hden0_clone700->SetPassedEvents(16,0);
   hden0_clone700->SetTotalEvents(17,0);
   hden0_clone700->SetPassedEvents(17,0);
   hden0_clone700->SetTotalEvents(18,0);
   hden0_clone700->SetPassedEvents(18,0);
   hden0_clone700->SetTotalEvents(19,0);
   hden0_clone700->SetPassedEvents(19,0);
   hden0_clone700->SetTotalEvents(20,0);
   hden0_clone700->SetPassedEvents(20,0);
   hden0_clone700->SetTotalEvents(21,0);
   hden0_clone700->SetPassedEvents(21,0);
   hden0_clone700->SetTotalEvents(22,0);
   hden0_clone700->SetPassedEvents(22,0);
   hden0_clone700->SetTotalEvents(23,0);
   hden0_clone700->SetPassedEvents(23,0);
   hden0_clone700->SetTotalEvents(24,0);
   hden0_clone700->SetPassedEvents(24,0);
   hden0_clone700->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone700->SetLineColor(ci);
   hden0_clone700->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone700->SetMarkerColor(ci);
   hden0_clone700->SetMarkerStyle(26);
   hden0_clone700->Draw("samezp");
   Double_t xAxis701[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone701 = new TEfficiency("hden1_clone","",23,xAxis701);
   
   hden1_clone701->SetConfidenceLevel(0.6826895);
   hden1_clone701->SetBetaAlpha(1);
   hden1_clone701->SetBetaBeta(1);
   hden1_clone701->SetWeight(1);
   hden1_clone701->SetStatisticOption(0);
   hden1_clone701->SetPosteriorMode(0);
   hden1_clone701->SetShortestInterval(0);
   hden1_clone701->SetTotalEvents(0,0);
   hden1_clone701->SetPassedEvents(0,0);
   hden1_clone701->SetTotalEvents(1,0);
   hden1_clone701->SetPassedEvents(1,0);
   hden1_clone701->SetTotalEvents(2,0);
   hden1_clone701->SetPassedEvents(2,0);
   hden1_clone701->SetTotalEvents(3,0);
   hden1_clone701->SetPassedEvents(3,0);
   hden1_clone701->SetTotalEvents(4,0);
   hden1_clone701->SetPassedEvents(4,0);
   hden1_clone701->SetTotalEvents(5,0);
   hden1_clone701->SetPassedEvents(5,0);
   hden1_clone701->SetTotalEvents(6,0);
   hden1_clone701->SetPassedEvents(6,0);
   hden1_clone701->SetTotalEvents(7,4206);
   hden1_clone701->SetPassedEvents(7,3919);
   hden1_clone701->SetTotalEvents(8,3913);
   hden1_clone701->SetPassedEvents(8,3589);
   hden1_clone701->SetTotalEvents(9,4042);
   hden1_clone701->SetPassedEvents(9,3656);
   hden1_clone701->SetTotalEvents(10,4089);
   hden1_clone701->SetPassedEvents(10,3725);
   hden1_clone701->SetTotalEvents(11,3808);
   hden1_clone701->SetPassedEvents(11,3494);
   hden1_clone701->SetTotalEvents(12,3984);
   hden1_clone701->SetPassedEvents(12,3636);
   hden1_clone701->SetTotalEvents(13,3969);
   hden1_clone701->SetPassedEvents(13,3584);
   hden1_clone701->SetTotalEvents(14,3971);
   hden1_clone701->SetPassedEvents(14,3587);
   hden1_clone701->SetTotalEvents(15,4011);
   hden1_clone701->SetPassedEvents(15,3539);
   hden1_clone701->SetTotalEvents(16,0);
   hden1_clone701->SetPassedEvents(16,0);
   hden1_clone701->SetTotalEvents(17,0);
   hden1_clone701->SetPassedEvents(17,0);
   hden1_clone701->SetTotalEvents(18,0);
   hden1_clone701->SetPassedEvents(18,0);
   hden1_clone701->SetTotalEvents(19,0);
   hden1_clone701->SetPassedEvents(19,0);
   hden1_clone701->SetTotalEvents(20,0);
   hden1_clone701->SetPassedEvents(20,0);
   hden1_clone701->SetTotalEvents(21,0);
   hden1_clone701->SetPassedEvents(21,0);
   hden1_clone701->SetTotalEvents(22,0);
   hden1_clone701->SetPassedEvents(22,0);
   hden1_clone701->SetTotalEvents(23,0);
   hden1_clone701->SetPassedEvents(23,0);
   hden1_clone701->SetTotalEvents(24,0);
   hden1_clone701->SetPassedEvents(24,0);
   hden1_clone701->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden1_clone701->SetLineColor(ci);
   hden1_clone701->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden1_clone701->SetMarkerColor(ci);
   hden1_clone701->SetMarkerStyle(25);
   hden1_clone701->Draw("samezp");
   Double_t xAxis702[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden2_clone702 = new TEfficiency("hden2_clone","",23,xAxis702);
   
   hden2_clone702->SetConfidenceLevel(0.6826895);
   hden2_clone702->SetBetaAlpha(1);
   hden2_clone702->SetBetaBeta(1);
   hden2_clone702->SetWeight(1);
   hden2_clone702->SetStatisticOption(0);
   hden2_clone702->SetPosteriorMode(0);
   hden2_clone702->SetShortestInterval(0);
   hden2_clone702->SetTotalEvents(0,0);
   hden2_clone702->SetPassedEvents(0,0);
   hden2_clone702->SetTotalEvents(1,0);
   hden2_clone702->SetPassedEvents(1,0);
   hden2_clone702->SetTotalEvents(2,0);
   hden2_clone702->SetPassedEvents(2,0);
   hden2_clone702->SetTotalEvents(3,0);
   hden2_clone702->SetPassedEvents(3,0);
   hden2_clone702->SetTotalEvents(4,0);
   hden2_clone702->SetPassedEvents(4,0);
   hden2_clone702->SetTotalEvents(5,0);
   hden2_clone702->SetPassedEvents(5,0);
   hden2_clone702->SetTotalEvents(6,0);
   hden2_clone702->SetPassedEvents(6,0);
   hden2_clone702->SetTotalEvents(7,1750);
   hden2_clone702->SetPassedEvents(7,1604);
   hden2_clone702->SetTotalEvents(8,1705);
   hden2_clone702->SetPassedEvents(8,1541);
   hden2_clone702->SetTotalEvents(9,1780);
   hden2_clone702->SetPassedEvents(9,1571);
   hden2_clone702->SetTotalEvents(10,1717);
   hden2_clone702->SetPassedEvents(10,1518);
   hden2_clone702->SetTotalEvents(11,1672);
   hden2_clone702->SetPassedEvents(11,1499);
   hden2_clone702->SetTotalEvents(12,1776);
   hden2_clone702->SetPassedEvents(12,1567);
   hden2_clone702->SetTotalEvents(13,1737);
   hden2_clone702->SetPassedEvents(13,1548);
   hden2_clone702->SetTotalEvents(14,1687);
   hden2_clone702->SetPassedEvents(14,1419);
   hden2_clone702->SetTotalEvents(15,1711);
   hden2_clone702->SetPassedEvents(15,1414);
   hden2_clone702->SetTotalEvents(16,0);
   hden2_clone702->SetPassedEvents(16,0);
   hden2_clone702->SetTotalEvents(17,0);
   hden2_clone702->SetPassedEvents(17,0);
   hden2_clone702->SetTotalEvents(18,0);
   hden2_clone702->SetPassedEvents(18,0);
   hden2_clone702->SetTotalEvents(19,0);
   hden2_clone702->SetPassedEvents(19,0);
   hden2_clone702->SetTotalEvents(20,0);
   hden2_clone702->SetPassedEvents(20,0);
   hden2_clone702->SetTotalEvents(21,0);
   hden2_clone702->SetPassedEvents(21,0);
   hden2_clone702->SetTotalEvents(22,0);
   hden2_clone702->SetPassedEvents(22,0);
   hden2_clone702->SetTotalEvents(23,0);
   hden2_clone702->SetPassedEvents(23,0);
   hden2_clone702->SetTotalEvents(24,0);
   hden2_clone702->SetPassedEvents(24,0);
   hden2_clone702->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden2_clone702->SetLineColor(ci);
   hden2_clone702->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden2_clone702->SetMarkerColor(ci);
   hden2_clone702->SetMarkerStyle(21);
   hden2_clone702->Draw("samezp");
   
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
   entry=leg->AddEntry("hden0_clone","combined","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","good muons (0.70)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden2_clone","bad muons(0.30)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
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
