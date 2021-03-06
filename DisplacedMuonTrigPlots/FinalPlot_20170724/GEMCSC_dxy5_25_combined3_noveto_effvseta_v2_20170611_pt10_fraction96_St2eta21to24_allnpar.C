void GEMCSC_dxy5_25_combined3_noveto_effvseta_v2_20170611_pt10_fraction96_St2eta21to24_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Jul 25 12:16:33 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(-0.4069768,-0.1685185,2.822997,1.127778);
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
   
   TH1F *b1__107 = new TH1F("b1__107"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 200 PU",50,0,2.5);
   b1__107->SetMinimum(0);
   b1__107->SetMaximum(1.05);
   b1__107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__107->SetLineColor(ci);
   b1__107->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   b1__107->GetXaxis()->SetLabelFont(42);
   b1__107->GetXaxis()->SetLabelSize(0.05);
   b1__107->GetXaxis()->SetTitleSize(0.05);
   b1__107->GetXaxis()->SetTitleFont(42);
   b1__107->GetYaxis()->SetTitle("Trigger efficiency");
   b1__107->GetYaxis()->SetNdivisions(520);
   b1__107->GetYaxis()->SetLabelFont(42);
   b1__107->GetYaxis()->SetLabelSize(0.05);
   b1__107->GetYaxis()->SetTitleSize(0.05);
   b1__107->GetYaxis()->SetTitleOffset(1.1);
   b1__107->GetYaxis()->SetTitleFont(42);
   b1__107->GetZaxis()->SetLabelFont(42);
   b1__107->GetZaxis()->SetLabelSize(0.035);
   b1__107->GetZaxis()->SetTitleSize(0.035);
   b1__107->GetZaxis()->SetTitleFont(42);
   b1__107->Draw("");
   
   TEfficiency * positioneta21to24displacedmuonfrac96pt10vseta271 = new TEfficiency("positioneta21to24displacedmuonfrac96pt10vseta","",50,0,2.5);
   
   positioneta21to24displacedmuonfrac96pt10vseta271->SetConfidenceLevel(0.6826895);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetBetaAlpha(1);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetBetaBeta(1);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetWeight(0.125);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPosteriorMode(0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetShortestInterval(0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(0,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(0,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(1,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(1,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(2,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(2,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(3,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(3,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(4,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(4,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(5,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(5,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(6,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(6,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(7,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(7,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(8,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(8,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(9,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(9,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(10,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(10,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(11,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(11,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(12,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(12,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(13,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(13,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(14,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(14,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(15,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(15,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(16,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(16,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(17,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(17,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(18,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(18,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(19,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(19,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(20,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(20,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(21,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(21,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(22,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(22,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(23,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(23,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(24,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(24,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(25,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(25,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(26,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(26,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(27,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(27,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(28,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(28,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(29,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(29,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(30,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(30,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(31,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(31,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(32,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(32,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(33,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(33,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(34,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(34,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(35,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(35,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(36,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(36,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(37,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(37,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(38,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(38,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(39,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(39,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(40,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(40,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(41,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(41,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(42,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(42,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(43,2885);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(43,2492);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(44,2269);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(44,1907);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(45,3182);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(45,2678);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(46,3110);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(46,2607);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(47,3100);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(47,2563);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(48,2912);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(48,2367);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(49,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(49,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(50,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(50,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetTotalEvents(51,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetPassedEvents(51,0);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   positioneta21to24displacedmuonfrac96pt10vseta271->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   positioneta21to24displacedmuonfrac96pt10vseta271->SetMarkerColor(ci);
   positioneta21to24displacedmuonfrac96pt10vseta271->SetMarkerStyle(24);
   positioneta21to24displacedmuonfrac96pt10vseta271->Draw("samep");
   
   TEfficiency * hybrid3eta21to24displacedmuonfrac96pt10vseta272 = new TEfficiency("hybrid3eta21to24displacedmuonfrac96pt10vseta","",50,0,2.5);
   
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetConfidenceLevel(0.6826895);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetBetaAlpha(1);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetBetaBeta(1);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetWeight(0.125);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPosteriorMode(0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetShortestInterval(0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(0,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(0,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(1,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(1,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(2,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(2,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(3,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(3,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(4,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(4,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(5,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(5,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(6,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(6,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(7,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(7,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(8,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(8,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(9,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(9,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(10,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(10,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(11,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(11,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(12,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(12,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(13,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(13,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(14,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(14,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(15,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(15,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(16,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(16,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(17,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(17,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(18,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(18,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(19,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(19,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(20,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(20,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(21,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(21,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(22,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(22,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(23,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(23,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(24,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(24,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(25,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(25,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(26,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(26,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(27,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(27,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(28,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(28,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(29,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(29,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(30,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(30,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(31,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(31,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(32,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(32,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(33,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(33,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(34,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(34,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(35,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(35,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(36,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(36,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(37,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(37,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(38,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(38,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(39,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(39,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(40,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(40,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(41,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(41,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(42,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(42,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(43,3655);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(43,3531);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(44,2896);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(44,2801);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(45,4005);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(45,3852);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(46,3935);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(46,3789);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(47,3871);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(47,3719);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(48,3631);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(48,3443);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(49,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(49,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(50,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(50,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetTotalEvents(51,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetPassedEvents(51,0);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetMarkerColor(ci);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->SetMarkerStyle(21);
   hybrid3eta21to24displacedmuonfrac96pt10vseta272->Draw("samep");
   
   TLegend *leg = new TLegend(0.4,0.2,0.88,0.38,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=4, no track veto","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("positioneta21to24displacedmuonfrac96pt10vseta","CSC+GE11: position based","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrid3eta21to24displacedmuonfrac96pt10vseta","CSC+GE11+GE21+ME0: hybrid algorithm","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.4,0.65,"#splitline{2.10<|#eta|<2.40, p_{T}^{L1}>10 GeV}{ 5<|dxy|<25cm, Lxy<50cm}");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 200 PU");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
