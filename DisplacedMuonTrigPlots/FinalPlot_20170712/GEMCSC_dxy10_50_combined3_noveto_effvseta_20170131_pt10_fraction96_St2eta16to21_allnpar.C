void GEMCSC_dxy10_50_combined3_noveto_effvseta_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Thu Jul 13 13:21:00 2017) by ROOT version6.08/06
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
   
   TH1F *b1__58 = new TH1F("b1__58"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU",50,0,2.5);
   b1__58->SetMinimum(0);
   b1__58->SetMaximum(1.05);
   b1__58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__58->SetLineColor(ci);
   b1__58->GetXaxis()->SetTitle("|#eta|");
   b1__58->GetXaxis()->SetLabelFont(42);
   b1__58->GetXaxis()->SetLabelSize(0.05);
   b1__58->GetXaxis()->SetTitleSize(0.05);
   b1__58->GetXaxis()->SetTitleFont(42);
   b1__58->GetYaxis()->SetTitle("Trigger efficiency");
   b1__58->GetYaxis()->SetNdivisions(520);
   b1__58->GetYaxis()->SetLabelFont(42);
   b1__58->GetYaxis()->SetLabelSize(0.05);
   b1__58->GetYaxis()->SetTitleSize(0.05);
   b1__58->GetYaxis()->SetTitleOffset(1.1);
   b1__58->GetYaxis()->SetTitleFont(42);
   b1__58->GetZaxis()->SetLabelFont(42);
   b1__58->GetZaxis()->SetLabelSize(0.035);
   b1__58->GetZaxis()->SetTitleSize(0.035);
   b1__58->GetZaxis()->SetTitleFont(42);
   b1__58->Draw("");
   
   TEfficiency * positioneta16to21displacedmuonpt10eta151 = new TEfficiency("positioneta16to21displacedmuonpt10eta","",50,0,2.5);
   
   positioneta16to21displacedmuonpt10eta151->SetConfidenceLevel(0.6826895);
   positioneta16to21displacedmuonpt10eta151->SetBetaAlpha(1);
   positioneta16to21displacedmuonpt10eta151->SetBetaBeta(1);
   positioneta16to21displacedmuonpt10eta151->SetWeight(0.08333333);
   positioneta16to21displacedmuonpt10eta151->SetPosteriorMode(0);
   positioneta16to21displacedmuonpt10eta151->SetShortestInterval(0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(0,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(0,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(1,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(1,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(2,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(2,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(3,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(3,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(4,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(4,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(5,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(5,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(6,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(6,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(7,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(7,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(8,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(8,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(9,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(9,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(10,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(10,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(11,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(11,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(12,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(12,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(13,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(13,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(14,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(14,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(15,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(15,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(16,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(16,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(17,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(17,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(18,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(18,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(19,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(19,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(20,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(20,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(21,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(21,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(22,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(22,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(23,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(23,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(24,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(24,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(25,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(25,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(26,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(26,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(27,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(27,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(28,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(28,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(29,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(29,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(30,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(30,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(31,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(31,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(32,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(32,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(33,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(33,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(34,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(34,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(35,4588);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(35,4022);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(36,22121);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(36,17862);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(37,23188);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(37,16308);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(38,23196);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(38,20731);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(39,16919);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(39,14906);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(40,23012);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(40,20390);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(41,22783);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(41,17007);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(42,22170);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(42,16453);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(43,21785);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(43,18656);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(44,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(44,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(45,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(45,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(46,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(46,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(47,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(47,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(48,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(48,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(49,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(49,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(50,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(50,0);
   positioneta16to21displacedmuonpt10eta151->SetTotalEvents(51,0);
   positioneta16to21displacedmuonpt10eta151->SetPassedEvents(51,0);
   positioneta16to21displacedmuonpt10eta151->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   positioneta16to21displacedmuonpt10eta151->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   positioneta16to21displacedmuonpt10eta151->SetMarkerColor(ci);
   positioneta16to21displacedmuonpt10eta151->SetMarkerStyle(20);
   positioneta16to21displacedmuonpt10eta151->Draw("samep");
   
   TEfficiency * hybrid_noGE21eta16to21displacedmuonpt10eta152 = new TEfficiency("hybrid_noGE21eta16to21displacedmuonpt10eta","",50,0,2.5);
   
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetConfidenceLevel(0.6826895);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetBetaAlpha(1);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetBetaBeta(1);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetWeight(0.08333333);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPosteriorMode(0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetShortestInterval(0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(0,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(0,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(1,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(1,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(2,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(2,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(3,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(3,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(4,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(4,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(5,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(5,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(6,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(6,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(7,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(7,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(8,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(8,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(9,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(9,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(10,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(10,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(11,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(11,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(12,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(12,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(13,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(13,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(14,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(14,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(15,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(15,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(16,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(16,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(17,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(17,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(18,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(18,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(19,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(19,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(20,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(20,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(21,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(21,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(22,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(22,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(23,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(23,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(24,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(24,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(25,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(25,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(26,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(26,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(27,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(27,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(28,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(28,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(29,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(29,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(30,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(30,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(31,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(31,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(32,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(32,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(33,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(33,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(34,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(34,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(35,4588);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(35,4004);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(36,22121);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(36,17725);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(37,23188);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(37,16208);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(38,23196);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(38,20612);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(39,16919);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(39,14818);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(40,23012);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(40,20267);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(41,22783);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(41,16936);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(42,22170);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(42,16359);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(43,21785);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(43,18467);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(44,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(44,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(45,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(45,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(46,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(46,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(47,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(47,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(48,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(48,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(49,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(49,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(50,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(50,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetTotalEvents(51,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetPassedEvents(51,0);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetMarkerColor(ci);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->SetMarkerStyle(21);
   hybrid_noGE21eta16to21displacedmuonpt10eta152->Draw("samep");
   
   TEfficiency * hybrideta16to21displacedmuonpt10eta153 = new TEfficiency("hybrideta16to21displacedmuonpt10eta","",50,0,2.5);
   
   hybrideta16to21displacedmuonpt10eta153->SetConfidenceLevel(0.6826895);
   hybrideta16to21displacedmuonpt10eta153->SetBetaAlpha(1);
   hybrideta16to21displacedmuonpt10eta153->SetBetaBeta(1);
   hybrideta16to21displacedmuonpt10eta153->SetWeight(0.08333333);
   hybrideta16to21displacedmuonpt10eta153->SetPosteriorMode(0);
   hybrideta16to21displacedmuonpt10eta153->SetShortestInterval(0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(0,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(0,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(1,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(1,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(2,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(2,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(3,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(3,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(4,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(4,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(5,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(5,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(6,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(6,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(7,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(7,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(8,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(8,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(9,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(9,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(10,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(10,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(11,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(11,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(12,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(12,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(13,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(13,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(14,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(14,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(15,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(15,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(16,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(16,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(17,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(17,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(18,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(18,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(19,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(19,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(20,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(20,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(21,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(21,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(22,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(22,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(23,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(23,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(24,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(24,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(25,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(25,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(26,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(26,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(27,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(27,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(28,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(28,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(29,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(29,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(30,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(30,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(31,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(31,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(32,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(32,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(33,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(33,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(34,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(34,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(35,4741);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(35,4436);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(36,22898);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(36,21583);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(37,23994);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(37,21868);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(38,24031);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(38,22762);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(39,17467);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(39,16391);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(40,23851);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(40,22519);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(41,23579);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(41,20931);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(42,22943);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(42,20501);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(43,22532);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(43,20532);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(44,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(44,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(45,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(45,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(46,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(46,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(47,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(47,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(48,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(48,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(49,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(49,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(50,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(50,0);
   hybrideta16to21displacedmuonpt10eta153->SetTotalEvents(51,0);
   hybrideta16to21displacedmuonpt10eta153->SetPassedEvents(51,0);
   hybrideta16to21displacedmuonpt10eta153->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hybrideta16to21displacedmuonpt10eta153->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hybrideta16to21displacedmuonpt10eta153->SetMarkerColor(ci);
   hybrideta16to21displacedmuonpt10eta153->SetMarkerStyle(22);
   hybrideta16to21displacedmuonpt10eta153->Draw("samep");
   
   TLegend *leg = new TLegend(0.45,0.2,0.9,0.44,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("positioneta16to21displacedmuonpt10eta","CSC+GE11: Position-based algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrid_noGE21eta16to21displacedmuonpt10eta","Hybrid algorithm w/o GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21displacedmuonpt10eta","CSC+GE11+GE21: Hybrid algorithm","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.4,0.7,"#splitline{1.60<|#eta|<2.15,p_{T}^{sim}>15 GeV, p_{T}^{L1}>10 GeV}{ no track veto}");
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
   AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
