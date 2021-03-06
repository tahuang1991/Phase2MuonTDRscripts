void GEMCSC_dxy10_50_combined2_mediumveto_effvseta_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:08:20 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(1.453488,-0.1685185,2.616279,1.127778);
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
   
   TH1F *b1__87 = new TH1F("b1__87"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",18,1.6,2.5);
   b1__87->SetMinimum(0);
   b1__87->SetMaximum(1.05);
   b1__87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__87->SetLineColor(ci);
   b1__87->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   b1__87->GetXaxis()->SetLabelFont(42);
   b1__87->GetXaxis()->SetLabelSize(0.05);
   b1__87->GetXaxis()->SetTitleSize(0.05);
   b1__87->GetXaxis()->SetTitleFont(42);
   b1__87->GetYaxis()->SetTitle("Trigger efficiency");
   b1__87->GetYaxis()->SetNdivisions(520);
   b1__87->GetYaxis()->SetLabelFont(42);
   b1__87->GetYaxis()->SetLabelSize(0.05);
   b1__87->GetYaxis()->SetTitleSize(0.05);
   b1__87->GetYaxis()->SetTitleOffset(1.1);
   b1__87->GetYaxis()->SetTitleFont(42);
   b1__87->GetZaxis()->SetLabelFont(42);
   b1__87->GetZaxis()->SetLabelSize(0.035);
   b1__87->GetZaxis()->SetTitleSize(0.035);
   b1__87->GetZaxis()->SetTitleFont(42);
   b1__87->Draw("");
   
   TEfficiency * positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233 = new TEfficiency("positionmediumvetoeta16to21displacedmuonfrac96pt10vseta","",50,0,2.5);
   
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetConfidenceLevel(0.6826895);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetBetaAlpha(1);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetBetaBeta(1);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetWeight(0.08333333);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetStatisticOption(0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPosteriorMode(0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetShortestInterval(0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(0,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(0,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(1,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(1,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(2,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(2,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(3,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(3,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(4,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(4,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(5,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(5,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(6,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(6,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(7,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(7,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(8,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(8,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(9,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(9,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(10,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(10,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(11,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(11,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(12,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(12,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(13,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(13,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(14,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(14,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(15,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(15,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(16,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(16,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(17,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(17,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(18,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(18,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(19,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(19,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(20,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(20,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(21,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(21,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(22,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(22,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(23,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(23,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(24,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(24,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(25,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(25,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(26,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(26,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(27,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(27,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(28,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(28,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(29,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(29,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(30,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(30,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(31,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(31,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(32,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(32,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(33,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(33,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(34,722);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(34,633);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(35,2214);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(35,1919);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(36,4691);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(36,4107);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(37,4529);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(37,3813);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(38,3801);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(38,3295);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(39,3001);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(39,2636);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(40,2964);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(40,2652);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(41,2444);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(41,2115);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(42,2069);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(42,1783);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(43,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(43,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(44,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(44,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(45,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(45,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(46,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(46,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(47,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(47,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(48,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(48,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(49,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(49,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(50,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(50,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetTotalEvents(51,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetPassedEvents(51,0);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetLineColor(ci);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetMarkerColor(ci);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->SetMarkerStyle(25);
   positionmediumvetoeta16to21displacedmuonfrac96pt10vseta233->Draw("samepz");
   
   TEfficiency * hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234 = new TEfficiency("hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta","",50,0,2.5);
   
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetConfidenceLevel(0.6826895);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetBetaAlpha(1);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetBetaBeta(1);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetWeight(0.08333333);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetStatisticOption(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPosteriorMode(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetShortestInterval(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(0,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(0,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(1,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(1,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(2,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(2,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(3,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(3,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(4,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(4,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(5,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(5,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(6,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(6,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(7,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(7,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(8,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(8,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(9,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(9,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(10,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(10,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(11,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(11,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(12,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(12,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(13,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(13,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(14,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(14,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(15,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(15,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(16,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(16,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(17,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(17,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(18,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(18,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(19,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(19,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(20,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(20,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(21,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(21,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(22,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(22,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(23,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(23,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(24,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(24,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(25,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(25,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(26,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(26,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(27,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(27,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(28,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(28,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(29,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(29,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(30,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(30,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(31,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(31,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(32,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(32,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(33,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(33,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(34,722);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(34,598);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(35,2214);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(35,1751);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(36,4691);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(36,3843);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(37,4529);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(37,3569);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(38,3801);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(38,3034);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(39,3001);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(39,2427);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(40,2964);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(40,2428);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(41,2444);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(41,1931);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(42,2069);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(42,1656);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(43,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(43,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(44,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(44,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(45,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(45,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(46,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(46,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(47,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(47,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(48,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(48,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(49,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(49,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(50,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(50,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetTotalEvents(51,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetPassedEvents(51,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetFillColor(19);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetLineWidth(2);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->SetMarkerStyle(21);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta234->Draw("samepz");
   
   TLegend *leg = new TLegend(0.4,0.2,0.88,0.38,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=4, medium track veto","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("positionmediumvetoeta16to21displacedmuonfrac96pt10vseta","CSC+GE11: Position based","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybridmediumvetoeta16to21displacedmuonfrac96pt10vseta","CSC+GE11+GE21: Hybrid algorithm","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.4,0.65,"1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV, medium track veto");
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
   AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
