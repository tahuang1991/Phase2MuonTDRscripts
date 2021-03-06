void GEMCSC_dxy10_50_hybrid_vetos_effvsdxy_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:08:19 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(-8.139535,-0.1685185,56.45995,1.127778);
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
   
   TH1F *b1__79 = new TH1F("b1__79"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,50);
   b1__79->SetMinimum(0);
   b1__79->SetMaximum(1.05);
   b1__79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__79->SetLineColor(ci);
   b1__79->GetXaxis()->SetTitle("|dxy| [cm]");
   b1__79->GetXaxis()->SetLabelFont(42);
   b1__79->GetXaxis()->SetLabelSize(0.05);
   b1__79->GetXaxis()->SetTitleSize(0.05);
   b1__79->GetXaxis()->SetTitleFont(42);
   b1__79->GetYaxis()->SetTitle("Trigger efficiency");
   b1__79->GetYaxis()->SetNdivisions(520);
   b1__79->GetYaxis()->SetLabelFont(42);
   b1__79->GetYaxis()->SetLabelSize(0.05);
   b1__79->GetYaxis()->SetTitleSize(0.05);
   b1__79->GetYaxis()->SetTitleOffset(1.1);
   b1__79->GetYaxis()->SetTitleFont(42);
   b1__79->GetZaxis()->SetLabelFont(42);
   b1__79->GetZaxis()->SetLabelSize(0.035);
   b1__79->GetZaxis()->SetTitleSize(0.035);
   b1__79->GetZaxis()->SetTitleFont(42);
   b1__79->Draw("");
   
   TEfficiency * hybrideta16to21displacedmuonfrac96pt10vsdxy229 = new TEfficiency("hybrideta16to21displacedmuonfrac96pt10vsdxy","",50,0,50);
   
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetConfidenceLevel(0.6826895);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetBetaAlpha(1);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetBetaBeta(1);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetWeight(0.08333333);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetStatisticOption(0);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPosteriorMode(0);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetShortestInterval(0);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(0,0);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(0,0);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(1,722);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(1,700);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(2,749);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(2,730);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(3,669);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(3,644);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(4,712);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(4,691);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(5,728);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(5,712);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(6,724);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(6,702);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(7,707);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(7,680);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(8,728);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(8,706);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(9,734);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(9,709);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(10,717);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(10,687);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(11,710);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(11,681);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(12,714);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(12,691);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(13,731);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(13,714);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(14,782);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(14,739);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(15,704);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(15,669);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(16,769);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(16,736);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(17,744);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(17,697);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(18,687);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(18,646);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(19,700);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(19,650);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(20,673);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(20,639);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(21,713);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(21,670);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(22,701);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(22,653);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(23,742);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(23,692);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(24,670);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(24,597);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(25,683);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(25,615);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(26,645);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(26,577);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(27,678);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(27,612);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(28,626);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(28,553);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(29,675);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(29,600);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(30,636);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(30,576);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(31,634);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(31,548);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(32,694);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(32,602);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(33,639);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(33,544);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(34,662);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(34,568);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(35,659);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(35,569);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(36,626);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(36,531);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(37,574);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(37,493);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(38,613);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(38,534);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(39,642);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(39,543);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(40,703);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(40,608);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(41,633);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(41,522);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(42,601);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(42,496);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(43,612);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(43,506);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(44,559);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(44,452);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(45,632);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(45,499);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(46,586);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(46,467);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(47,616);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(47,504);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(48,591);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(48,464);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(49,604);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(49,485);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(50,572);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(50,456);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetTotalEvents(51,0);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetPassedEvents(51,0);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetLineColor(ci);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetMarkerColor(ci);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->SetMarkerStyle(25);
   hybrideta16to21displacedmuonfrac96pt10vsdxy229->Draw("samepz");
   
   TEfficiency * hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230 = new TEfficiency("hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy","",50,0,50);
   
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetConfidenceLevel(0.6826895);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetBetaAlpha(1);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetBetaBeta(1);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetWeight(0.08333333);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetStatisticOption(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPosteriorMode(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetShortestInterval(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(0,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(0,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(1,722);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(1,599);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(2,749);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(2,655);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(3,669);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(3,581);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(4,712);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(4,621);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(5,728);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(5,649);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(6,724);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(6,643);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(7,707);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(7,614);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(8,728);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(8,645);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(9,734);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(9,660);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(10,717);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(10,624);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(11,710);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(11,616);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(12,714);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(12,631);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(13,731);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(13,653);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(14,782);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(14,662);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(15,704);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(15,597);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(16,769);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(16,669);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(17,744);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(17,633);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(18,687);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(18,603);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(19,700);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(19,588);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(20,673);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(20,587);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(21,713);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(21,598);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(22,701);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(22,595);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(23,742);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(23,639);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(24,670);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(24,545);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(25,683);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(25,549);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(26,645);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(26,510);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(27,678);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(27,550);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(28,626);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(28,498);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(29,675);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(29,536);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(30,636);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(30,522);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(31,634);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(31,489);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(32,694);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(32,549);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(33,639);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(33,511);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(34,662);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(34,514);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(35,659);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(35,521);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(36,626);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(36,479);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(37,574);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(37,446);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(38,613);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(38,490);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(39,642);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(39,491);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(40,703);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(40,557);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(41,633);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(41,481);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(42,601);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(42,451);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(43,612);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(43,457);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(44,559);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(44,411);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(45,632);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(45,446);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(46,586);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(46,422);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(47,616);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(47,462);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(48,591);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(48,432);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(49,604);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(49,436);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(50,572);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(50,411);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetTotalEvents(51,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetPassedEvents(51,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetFillColor(19);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetLineWidth(2);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->SetMarkerStyle(21);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy230->Draw("samepz");
   
   TLegend *leg = new TLegend(0.45,0.2,0.9,0.38,NULL,"brNDC");
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
   entry=leg->AddEntry("hybrideta16to21displacedmuonfrac96pt10vsdxy","no track veto","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybridmediumvetoeta16to21displacedmuonfrac96pt10vsdxy","medium track veto","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.4,0.6,"#splitline{Hybrid algorithm w/ GE21}{1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
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
