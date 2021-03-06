void GEMCSC_dxy10_50_combined3_noveto_effvseta_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Jul 25 11:25:28 2017) by ROOT version6.08/06
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
   
   TH1F *b1__188 = new TH1F("b1__188"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 200 PU",16,1.6,2.5);
   b1__188->SetMinimum(0);
   b1__188->SetMaximum(1.05);
   b1__188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__188->SetLineColor(ci);
   b1__188->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   b1__188->GetXaxis()->SetLabelFont(42);
   b1__188->GetXaxis()->SetLabelSize(0.05);
   b1__188->GetXaxis()->SetTitleSize(0.05);
   b1__188->GetXaxis()->SetTitleFont(42);
   b1__188->GetYaxis()->SetTitle("Trigger efficiency");
   b1__188->GetYaxis()->SetNdivisions(520);
   b1__188->GetYaxis()->SetLabelFont(42);
   b1__188->GetYaxis()->SetLabelSize(0.05);
   b1__188->GetYaxis()->SetTitleSize(0.05);
   b1__188->GetYaxis()->SetTitleOffset(1.1);
   b1__188->GetYaxis()->SetTitleFont(42);
   b1__188->GetZaxis()->SetLabelFont(42);
   b1__188->GetZaxis()->SetLabelSize(0.035);
   b1__188->GetZaxis()->SetTitleSize(0.035);
   b1__188->GetZaxis()->SetTitleFont(42);
   b1__188->Draw("");
   
   TEfficiency * positioneta16to21displacedmuonfrac96pt10vseta467 = new TEfficiency("positioneta16to21displacedmuonfrac96pt10vseta","",50,0,2.5);
   
   positioneta16to21displacedmuonfrac96pt10vseta467->SetConfidenceLevel(0.6826895);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetBetaAlpha(1);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetBetaBeta(1);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetWeight(0.08333333);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPosteriorMode(0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetShortestInterval(0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(0,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(0,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(1,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(1,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(2,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(2,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(3,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(3,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(4,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(4,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(5,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(5,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(6,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(6,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(7,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(7,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(8,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(8,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(9,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(9,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(10,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(10,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(11,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(11,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(12,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(12,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(13,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(13,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(14,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(14,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(15,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(15,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(16,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(16,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(17,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(17,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(18,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(18,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(19,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(19,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(20,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(20,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(21,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(21,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(22,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(22,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(23,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(23,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(24,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(24,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(25,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(25,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(26,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(26,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(27,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(27,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(28,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(28,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(29,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(29,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(30,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(30,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(31,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(31,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(32,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(32,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(33,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(33,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(34,763);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(34,639);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(35,638);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(35,538);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(36,3237);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(36,2585);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(37,3399);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(37,2404);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(38,3277);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(38,2801);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(39,2383);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(39,2010);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(40,3360);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(40,2853);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(41,3189);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(41,2288);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(42,3345);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(42,2381);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(43,3056);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(43,2492);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(44,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(44,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(45,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(45,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(46,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(46,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(47,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(47,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(48,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(48,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(49,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(49,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(50,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(50,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetTotalEvents(51,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetPassedEvents(51,0);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   positioneta16to21displacedmuonfrac96pt10vseta467->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   positioneta16to21displacedmuonfrac96pt10vseta467->SetMarkerColor(ci);
   positioneta16to21displacedmuonfrac96pt10vseta467->SetMarkerStyle(24);
   positioneta16to21displacedmuonfrac96pt10vseta467->Draw("samep");
   
   TEfficiency * hybrideta16to21displacedmuonfrac96pt10vseta468 = new TEfficiency("hybrideta16to21displacedmuonfrac96pt10vseta","",50,0,2.5);
   
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetConfidenceLevel(0.6826895);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetBetaAlpha(1);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetBetaBeta(1);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetWeight(0.08333333);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPosteriorMode(0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetShortestInterval(0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(0,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(0,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(1,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(1,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(2,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(2,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(3,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(3,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(4,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(4,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(5,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(5,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(6,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(6,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(7,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(7,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(8,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(8,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(9,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(9,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(10,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(10,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(11,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(11,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(12,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(12,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(13,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(13,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(14,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(14,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(15,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(15,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(16,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(16,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(17,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(17,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(18,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(18,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(19,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(19,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(20,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(20,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(21,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(21,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(22,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(22,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(23,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(23,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(24,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(24,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(25,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(25,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(26,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(26,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(27,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(27,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(28,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(28,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(29,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(29,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(30,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(30,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(31,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(31,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(32,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(32,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(33,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(33,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(34,964);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(34,926);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(35,801);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(35,752);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(36,4063);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(36,3858);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(37,4436);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(37,4156);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(38,4212);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(38,4029);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(39,3044);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(39,2893);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(40,4237);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(40,4019);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(41,4060);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(41,3717);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(42,4181);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(42,3796);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(43,3882);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(43,3548);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(44,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(44,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(45,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(45,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(46,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(46,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(47,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(47,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(48,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(48,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(49,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(49,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(50,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(50,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetTotalEvents(51,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetPassedEvents(51,0);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetMarkerColor(ci);
   hybrideta16to21displacedmuonfrac96pt10vseta468->SetMarkerStyle(21);
   hybrideta16to21displacedmuonfrac96pt10vseta468->Draw("samep");
   
   TLegend *leg = new TLegend(0.4,0.2,0.88,0.38,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("positioneta16to21displacedmuonfrac96pt10vseta","CSC+GE11: Position based","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21displacedmuonfrac96pt10vseta","CSC+GE11+GE21: Hybrid algorithm","pl");

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
   TLatex *   tex = new TLatex(0.4,0.6,"p_{T}^{L1}>10 GeV, before track veto is applied");
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
   c1_n2->SaveAs("GEMCSC_dxy10_50_combined3_noveto_effvseta_20170131_pt10_fraction96_St2eta16to21_allnpar.png");
   c1_n2->SaveAs("GEMCSC_dxy10_50_combined3_noveto_effvseta_20170131_pt10_fraction96_St2eta16to21_allnpar.pdf");
   c1_n2->SaveAs("GEMCSC_dxy10_50_combined3_noveto_effvseta_20170131_pt10_fraction96_St2eta16to21_allnpar.eps");
}
