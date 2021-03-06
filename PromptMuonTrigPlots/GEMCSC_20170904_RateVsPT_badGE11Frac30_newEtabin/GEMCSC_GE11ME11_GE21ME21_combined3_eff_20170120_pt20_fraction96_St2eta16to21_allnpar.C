void GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt20_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:22 2017) by ROOT version6.08/06
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
   Double_t xAxis635[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__609 = new TH1F("b1__609"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis635);
   b1__609->SetMinimum(0);
   b1__609->SetMaximum(1.05);
   b1__609->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__609->SetLineColor(ci);
   b1__609->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__609->GetXaxis()->SetLabelFont(42);
   b1__609->GetXaxis()->SetLabelSize(0.05);
   b1__609->GetXaxis()->SetTitleSize(0.05);
   b1__609->GetXaxis()->SetTitleFont(42);
   b1__609->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__609->GetYaxis()->SetNdivisions(520);
   b1__609->GetYaxis()->SetLabelFont(42);
   b1__609->GetYaxis()->SetLabelSize(0.05);
   b1__609->GetYaxis()->SetTitleSize(0.05);
   b1__609->GetYaxis()->SetTitleOffset(1.1);
   b1__609->GetYaxis()->SetTitleFont(42);
   b1__609->GetZaxis()->SetLabelFont(42);
   b1__609->GetZaxis()->SetLabelSize(0.035);
   b1__609->GetZaxis()->SetTitleSize(0.035);
   b1__609->GetZaxis()->SetTitleFont(42);
   b1__609->Draw("");
   Double_t xAxis1133[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt20fraction961133 = new TEfficiency("GE11eta16to21pt20fraction96","",50,xAxis1133);
   
   GE11eta16to21pt20fraction961133->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt20fraction961133->SetBetaAlpha(1);
   GE11eta16to21pt20fraction961133->SetBetaBeta(1);
   GE11eta16to21pt20fraction961133->SetWeight(1);
   GE11eta16to21pt20fraction961133->SetStatisticOption(0);
   GE11eta16to21pt20fraction961133->SetPosteriorMode(0);
   GE11eta16to21pt20fraction961133->SetShortestInterval(0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(0,0);
   GE11eta16to21pt20fraction961133->SetPassedEvents(0,0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(1,0);
   GE11eta16to21pt20fraction961133->SetPassedEvents(1,0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(2,1308);
   GE11eta16to21pt20fraction961133->SetPassedEvents(2,0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(3,2390);
   GE11eta16to21pt20fraction961133->SetPassedEvents(3,0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(4,2390);
   GE11eta16to21pt20fraction961133->SetPassedEvents(4,0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(5,2546);
   GE11eta16to21pt20fraction961133->SetPassedEvents(5,0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(6,2518);
   GE11eta16to21pt20fraction961133->SetPassedEvents(6,0);
   GE11eta16to21pt20fraction961133->SetTotalEvents(7,2458);
   GE11eta16to21pt20fraction961133->SetPassedEvents(7,1);
   GE11eta16to21pt20fraction961133->SetTotalEvents(8,2466);
   GE11eta16to21pt20fraction961133->SetPassedEvents(8,3);
   GE11eta16to21pt20fraction961133->SetTotalEvents(9,2452);
   GE11eta16to21pt20fraction961133->SetPassedEvents(9,13);
   GE11eta16to21pt20fraction961133->SetTotalEvents(10,2502);
   GE11eta16to21pt20fraction961133->SetPassedEvents(10,29);
   GE11eta16to21pt20fraction961133->SetTotalEvents(11,2564);
   GE11eta16to21pt20fraction961133->SetPassedEvents(11,69);
   GE11eta16to21pt20fraction961133->SetTotalEvents(12,2464);
   GE11eta16to21pt20fraction961133->SetPassedEvents(12,138);
   GE11eta16to21pt20fraction961133->SetTotalEvents(13,2492);
   GE11eta16to21pt20fraction961133->SetPassedEvents(13,290);
   GE11eta16to21pt20fraction961133->SetTotalEvents(14,2502);
   GE11eta16to21pt20fraction961133->SetPassedEvents(14,481);
   GE11eta16to21pt20fraction961133->SetTotalEvents(15,2452);
   GE11eta16to21pt20fraction961133->SetPassedEvents(15,748);
   GE11eta16to21pt20fraction961133->SetTotalEvents(16,2580);
   GE11eta16to21pt20fraction961133->SetPassedEvents(16,1004);
   GE11eta16to21pt20fraction961133->SetTotalEvents(17,2426);
   GE11eta16to21pt20fraction961133->SetPassedEvents(17,1222);
   GE11eta16to21pt20fraction961133->SetTotalEvents(18,2490);
   GE11eta16to21pt20fraction961133->SetPassedEvents(18,1512);
   GE11eta16to21pt20fraction961133->SetTotalEvents(19,2510);
   GE11eta16to21pt20fraction961133->SetPassedEvents(19,1767);
   GE11eta16to21pt20fraction961133->SetTotalEvents(20,2456);
   GE11eta16to21pt20fraction961133->SetPassedEvents(20,1824);
   GE11eta16to21pt20fraction961133->SetTotalEvents(21,2470);
   GE11eta16to21pt20fraction961133->SetPassedEvents(21,1935);
   GE11eta16to21pt20fraction961133->SetTotalEvents(22,2420);
   GE11eta16to21pt20fraction961133->SetPassedEvents(22,1986);
   GE11eta16to21pt20fraction961133->SetTotalEvents(23,2420);
   GE11eta16to21pt20fraction961133->SetPassedEvents(23,2001);
   GE11eta16to21pt20fraction961133->SetTotalEvents(24,2564);
   GE11eta16to21pt20fraction961133->SetPassedEvents(24,2187);
   GE11eta16to21pt20fraction961133->SetTotalEvents(25,2544);
   GE11eta16to21pt20fraction961133->SetPassedEvents(25,2175);
   GE11eta16to21pt20fraction961133->SetTotalEvents(26,2398);
   GE11eta16to21pt20fraction961133->SetPassedEvents(26,2053);
   GE11eta16to21pt20fraction961133->SetTotalEvents(27,2598);
   GE11eta16to21pt20fraction961133->SetPassedEvents(27,2303);
   GE11eta16to21pt20fraction961133->SetTotalEvents(28,2528);
   GE11eta16to21pt20fraction961133->SetPassedEvents(28,2192);
   GE11eta16to21pt20fraction961133->SetTotalEvents(29,2510);
   GE11eta16to21pt20fraction961133->SetPassedEvents(29,2201);
   GE11eta16to21pt20fraction961133->SetTotalEvents(30,2464);
   GE11eta16to21pt20fraction961133->SetPassedEvents(30,2165);
   GE11eta16to21pt20fraction961133->SetTotalEvents(31,2524);
   GE11eta16to21pt20fraction961133->SetPassedEvents(31,2247);
   GE11eta16to21pt20fraction961133->SetTotalEvents(32,2464);
   GE11eta16to21pt20fraction961133->SetPassedEvents(32,2192);
   GE11eta16to21pt20fraction961133->SetTotalEvents(33,2614);
   GE11eta16to21pt20fraction961133->SetPassedEvents(33,2339);
   GE11eta16to21pt20fraction961133->SetTotalEvents(34,2466);
   GE11eta16to21pt20fraction961133->SetPassedEvents(34,2210);
   GE11eta16to21pt20fraction961133->SetTotalEvents(35,2424);
   GE11eta16to21pt20fraction961133->SetPassedEvents(35,2165);
   GE11eta16to21pt20fraction961133->SetTotalEvents(36,2528);
   GE11eta16to21pt20fraction961133->SetPassedEvents(36,2240);
   GE11eta16to21pt20fraction961133->SetTotalEvents(37,2700);
   GE11eta16to21pt20fraction961133->SetPassedEvents(37,2397);
   GE11eta16to21pt20fraction961133->SetTotalEvents(38,2532);
   GE11eta16to21pt20fraction961133->SetPassedEvents(38,2253);
   GE11eta16to21pt20fraction961133->SetTotalEvents(39,2566);
   GE11eta16to21pt20fraction961133->SetPassedEvents(39,2299);
   GE11eta16to21pt20fraction961133->SetTotalEvents(40,2484);
   GE11eta16to21pt20fraction961133->SetPassedEvents(40,2242);
   GE11eta16to21pt20fraction961133->SetTotalEvents(41,2624);
   GE11eta16to21pt20fraction961133->SetPassedEvents(41,2353);
   GE11eta16to21pt20fraction961133->SetTotalEvents(42,2560);
   GE11eta16to21pt20fraction961133->SetPassedEvents(42,2305);
   GE11eta16to21pt20fraction961133->SetTotalEvents(43,2558);
   GE11eta16to21pt20fraction961133->SetPassedEvents(43,2283);
   GE11eta16to21pt20fraction961133->SetTotalEvents(44,2560);
   GE11eta16to21pt20fraction961133->SetPassedEvents(44,2306);
   GE11eta16to21pt20fraction961133->SetTotalEvents(45,2404);
   GE11eta16to21pt20fraction961133->SetPassedEvents(45,2171);
   GE11eta16to21pt20fraction961133->SetTotalEvents(46,2502);
   GE11eta16to21pt20fraction961133->SetPassedEvents(46,2271);
   GE11eta16to21pt20fraction961133->SetTotalEvents(47,2510);
   GE11eta16to21pt20fraction961133->SetPassedEvents(47,2242);
   GE11eta16to21pt20fraction961133->SetTotalEvents(48,2526);
   GE11eta16to21pt20fraction961133->SetPassedEvents(48,2261);
   GE11eta16to21pt20fraction961133->SetTotalEvents(49,2604);
   GE11eta16to21pt20fraction961133->SetPassedEvents(49,2347);
   GE11eta16to21pt20fraction961133->SetTotalEvents(50,2550);
   GE11eta16to21pt20fraction961133->SetPassedEvents(50,2309);
   GE11eta16to21pt20fraction961133->SetTotalEvents(51,26);
   GE11eta16to21pt20fraction961133->SetPassedEvents(51,25);
   GE11eta16to21pt20fraction961133->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt20fraction961133->SetLineColor(ci);
   GE11eta16to21pt20fraction961133->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt20fraction961133->SetMarkerColor(ci);
   GE11eta16to21pt20fraction961133->SetMarkerStyle(26);
   GE11eta16to21pt20fraction961133->Draw("samepz");
   Double_t xAxis1134[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE21eta16to21pt20fraction961134 = new TEfficiency("GE21eta16to21pt20fraction96","",50,xAxis1134);
   
   GE21eta16to21pt20fraction961134->SetConfidenceLevel(0.6826895);
   GE21eta16to21pt20fraction961134->SetBetaAlpha(1);
   GE21eta16to21pt20fraction961134->SetBetaBeta(1);
   GE21eta16to21pt20fraction961134->SetWeight(1);
   GE21eta16to21pt20fraction961134->SetStatisticOption(0);
   GE21eta16to21pt20fraction961134->SetPosteriorMode(0);
   GE21eta16to21pt20fraction961134->SetShortestInterval(0);
   GE21eta16to21pt20fraction961134->SetTotalEvents(0,0);
   GE21eta16to21pt20fraction961134->SetPassedEvents(0,0);
   GE21eta16to21pt20fraction961134->SetTotalEvents(1,0);
   GE21eta16to21pt20fraction961134->SetPassedEvents(1,0);
   GE21eta16to21pt20fraction961134->SetTotalEvents(2,868);
   GE21eta16to21pt20fraction961134->SetPassedEvents(2,0);
   GE21eta16to21pt20fraction961134->SetTotalEvents(3,1576);
   GE21eta16to21pt20fraction961134->SetPassedEvents(3,2);
   GE21eta16to21pt20fraction961134->SetTotalEvents(4,1626);
   GE21eta16to21pt20fraction961134->SetPassedEvents(4,5);
   GE21eta16to21pt20fraction961134->SetTotalEvents(5,1728);
   GE21eta16to21pt20fraction961134->SetPassedEvents(5,7);
   GE21eta16to21pt20fraction961134->SetTotalEvents(6,1728);
   GE21eta16to21pt20fraction961134->SetPassedEvents(6,16);
   GE21eta16to21pt20fraction961134->SetTotalEvents(7,1742);
   GE21eta16to21pt20fraction961134->SetPassedEvents(7,19);
   GE21eta16to21pt20fraction961134->SetTotalEvents(8,1652);
   GE21eta16to21pt20fraction961134->SetPassedEvents(8,24);
   GE21eta16to21pt20fraction961134->SetTotalEvents(9,1684);
   GE21eta16to21pt20fraction961134->SetPassedEvents(9,42);
   GE21eta16to21pt20fraction961134->SetTotalEvents(10,1736);
   GE21eta16to21pt20fraction961134->SetPassedEvents(10,66);
   GE21eta16to21pt20fraction961134->SetTotalEvents(11,1712);
   GE21eta16to21pt20fraction961134->SetPassedEvents(11,115);
   GE21eta16to21pt20fraction961134->SetTotalEvents(12,1714);
   GE21eta16to21pt20fraction961134->SetPassedEvents(12,191);
   GE21eta16to21pt20fraction961134->SetTotalEvents(13,1694);
   GE21eta16to21pt20fraction961134->SetPassedEvents(13,328);
   GE21eta16to21pt20fraction961134->SetTotalEvents(14,1704);
   GE21eta16to21pt20fraction961134->SetPassedEvents(14,495);
   GE21eta16to21pt20fraction961134->SetTotalEvents(15,1614);
   GE21eta16to21pt20fraction961134->SetPassedEvents(15,652);
   GE21eta16to21pt20fraction961134->SetTotalEvents(16,1756);
   GE21eta16to21pt20fraction961134->SetPassedEvents(16,865);
   GE21eta16to21pt20fraction961134->SetTotalEvents(17,1656);
   GE21eta16to21pt20fraction961134->SetPassedEvents(17,974);
   GE21eta16to21pt20fraction961134->SetTotalEvents(18,1674);
   GE21eta16to21pt20fraction961134->SetPassedEvents(18,1142);
   GE21eta16to21pt20fraction961134->SetTotalEvents(19,1706);
   GE21eta16to21pt20fraction961134->SetPassedEvents(19,1262);
   GE21eta16to21pt20fraction961134->SetTotalEvents(20,1620);
   GE21eta16to21pt20fraction961134->SetPassedEvents(20,1269);
   GE21eta16to21pt20fraction961134->SetTotalEvents(21,1692);
   GE21eta16to21pt20fraction961134->SetPassedEvents(21,1428);
   GE21eta16to21pt20fraction961134->SetTotalEvents(22,1670);
   GE21eta16to21pt20fraction961134->SetPassedEvents(22,1398);
   GE21eta16to21pt20fraction961134->SetTotalEvents(23,1602);
   GE21eta16to21pt20fraction961134->SetPassedEvents(23,1357);
   GE21eta16to21pt20fraction961134->SetTotalEvents(24,1694);
   GE21eta16to21pt20fraction961134->SetPassedEvents(24,1470);
   GE21eta16to21pt20fraction961134->SetTotalEvents(25,1760);
   GE21eta16to21pt20fraction961134->SetPassedEvents(25,1546);
   GE21eta16to21pt20fraction961134->SetTotalEvents(26,1682);
   GE21eta16to21pt20fraction961134->SetPassedEvents(26,1476);
   GE21eta16to21pt20fraction961134->SetTotalEvents(27,1804);
   GE21eta16to21pt20fraction961134->SetPassedEvents(27,1607);
   GE21eta16to21pt20fraction961134->SetTotalEvents(28,1738);
   GE21eta16to21pt20fraction961134->SetPassedEvents(28,1559);
   GE21eta16to21pt20fraction961134->SetTotalEvents(29,1716);
   GE21eta16to21pt20fraction961134->SetPassedEvents(29,1504);
   GE21eta16to21pt20fraction961134->SetTotalEvents(30,1684);
   GE21eta16to21pt20fraction961134->SetPassedEvents(30,1514);
   GE21eta16to21pt20fraction961134->SetTotalEvents(31,1710);
   GE21eta16to21pt20fraction961134->SetPassedEvents(31,1507);
   GE21eta16to21pt20fraction961134->SetTotalEvents(32,1640);
   GE21eta16to21pt20fraction961134->SetPassedEvents(32,1459);
   GE21eta16to21pt20fraction961134->SetTotalEvents(33,1816);
   GE21eta16to21pt20fraction961134->SetPassedEvents(33,1621);
   GE21eta16to21pt20fraction961134->SetTotalEvents(34,1642);
   GE21eta16to21pt20fraction961134->SetPassedEvents(34,1445);
   GE21eta16to21pt20fraction961134->SetTotalEvents(35,1664);
   GE21eta16to21pt20fraction961134->SetPassedEvents(35,1506);
   GE21eta16to21pt20fraction961134->SetTotalEvents(36,1670);
   GE21eta16to21pt20fraction961134->SetPassedEvents(36,1513);
   GE21eta16to21pt20fraction961134->SetTotalEvents(37,1880);
   GE21eta16to21pt20fraction961134->SetPassedEvents(37,1654);
   GE21eta16to21pt20fraction961134->SetTotalEvents(38,1730);
   GE21eta16to21pt20fraction961134->SetPassedEvents(38,1565);
   GE21eta16to21pt20fraction961134->SetTotalEvents(39,1720);
   GE21eta16to21pt20fraction961134->SetPassedEvents(39,1531);
   GE21eta16to21pt20fraction961134->SetTotalEvents(40,1670);
   GE21eta16to21pt20fraction961134->SetPassedEvents(40,1482);
   GE21eta16to21pt20fraction961134->SetTotalEvents(41,1790);
   GE21eta16to21pt20fraction961134->SetPassedEvents(41,1613);
   GE21eta16to21pt20fraction961134->SetTotalEvents(42,1806);
   GE21eta16to21pt20fraction961134->SetPassedEvents(42,1620);
   GE21eta16to21pt20fraction961134->SetTotalEvents(43,1720);
   GE21eta16to21pt20fraction961134->SetPassedEvents(43,1547);
   GE21eta16to21pt20fraction961134->SetTotalEvents(44,1732);
   GE21eta16to21pt20fraction961134->SetPassedEvents(44,1527);
   GE21eta16to21pt20fraction961134->SetTotalEvents(45,1598);
   GE21eta16to21pt20fraction961134->SetPassedEvents(45,1444);
   GE21eta16to21pt20fraction961134->SetTotalEvents(46,1706);
   GE21eta16to21pt20fraction961134->SetPassedEvents(46,1523);
   GE21eta16to21pt20fraction961134->SetTotalEvents(47,1756);
   GE21eta16to21pt20fraction961134->SetPassedEvents(47,1569);
   GE21eta16to21pt20fraction961134->SetTotalEvents(48,1760);
   GE21eta16to21pt20fraction961134->SetPassedEvents(48,1580);
   GE21eta16to21pt20fraction961134->SetTotalEvents(49,1746);
   GE21eta16to21pt20fraction961134->SetPassedEvents(49,1566);
   GE21eta16to21pt20fraction961134->SetTotalEvents(50,1712);
   GE21eta16to21pt20fraction961134->SetPassedEvents(50,1532);
   GE21eta16to21pt20fraction961134->SetTotalEvents(51,18);
   GE21eta16to21pt20fraction961134->SetPassedEvents(51,15);
   GE21eta16to21pt20fraction961134->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt20fraction961134->SetLineColor(ci);
   GE21eta16to21pt20fraction961134->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt20fraction961134->SetMarkerColor(ci);
   GE21eta16to21pt20fraction961134->SetMarkerStyle(25);
   GE21eta16to21pt20fraction961134->Draw("samepz");
   Double_t xAxis1135[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt20fraction961135 = new TEfficiency("hybrideta16to21pt20fraction96","",50,xAxis1135);
   
   hybrideta16to21pt20fraction961135->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt20fraction961135->SetBetaAlpha(1);
   hybrideta16to21pt20fraction961135->SetBetaBeta(1);
   hybrideta16to21pt20fraction961135->SetWeight(1);
   hybrideta16to21pt20fraction961135->SetStatisticOption(0);
   hybrideta16to21pt20fraction961135->SetPosteriorMode(0);
   hybrideta16to21pt20fraction961135->SetShortestInterval(0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(0,0);
   hybrideta16to21pt20fraction961135->SetPassedEvents(0,0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(1,0);
   hybrideta16to21pt20fraction961135->SetPassedEvents(1,0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(2,868);
   hybrideta16to21pt20fraction961135->SetPassedEvents(2,0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(3,1576);
   hybrideta16to21pt20fraction961135->SetPassedEvents(3,0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(4,1626);
   hybrideta16to21pt20fraction961135->SetPassedEvents(4,0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(5,1728);
   hybrideta16to21pt20fraction961135->SetPassedEvents(5,0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(6,1728);
   hybrideta16to21pt20fraction961135->SetPassedEvents(6,0);
   hybrideta16to21pt20fraction961135->SetTotalEvents(7,1742);
   hybrideta16to21pt20fraction961135->SetPassedEvents(7,1);
   hybrideta16to21pt20fraction961135->SetTotalEvents(8,1652);
   hybrideta16to21pt20fraction961135->SetPassedEvents(8,5);
   hybrideta16to21pt20fraction961135->SetTotalEvents(9,1684);
   hybrideta16to21pt20fraction961135->SetPassedEvents(9,18);
   hybrideta16to21pt20fraction961135->SetTotalEvents(10,1736);
   hybrideta16to21pt20fraction961135->SetPassedEvents(10,31);
   hybrideta16to21pt20fraction961135->SetTotalEvents(11,1712);
   hybrideta16to21pt20fraction961135->SetPassedEvents(11,75);
   hybrideta16to21pt20fraction961135->SetTotalEvents(12,1714);
   hybrideta16to21pt20fraction961135->SetPassedEvents(12,144);
   hybrideta16to21pt20fraction961135->SetTotalEvents(13,1694);
   hybrideta16to21pt20fraction961135->SetPassedEvents(13,260);
   hybrideta16to21pt20fraction961135->SetTotalEvents(14,1704);
   hybrideta16to21pt20fraction961135->SetPassedEvents(14,408);
   hybrideta16to21pt20fraction961135->SetTotalEvents(15,1614);
   hybrideta16to21pt20fraction961135->SetPassedEvents(15,578);
   hybrideta16to21pt20fraction961135->SetTotalEvents(16,1756);
   hybrideta16to21pt20fraction961135->SetPassedEvents(16,790);
   hybrideta16to21pt20fraction961135->SetTotalEvents(17,1656);
   hybrideta16to21pt20fraction961135->SetPassedEvents(17,940);
   hybrideta16to21pt20fraction961135->SetTotalEvents(18,1674);
   hybrideta16to21pt20fraction961135->SetPassedEvents(18,1124);
   hybrideta16to21pt20fraction961135->SetTotalEvents(19,1706);
   hybrideta16to21pt20fraction961135->SetPassedEvents(19,1270);
   hybrideta16to21pt20fraction961135->SetTotalEvents(20,1620);
   hybrideta16to21pt20fraction961135->SetPassedEvents(20,1290);
   hybrideta16to21pt20fraction961135->SetTotalEvents(21,1692);
   hybrideta16to21pt20fraction961135->SetPassedEvents(21,1442);
   hybrideta16to21pt20fraction961135->SetTotalEvents(22,1670);
   hybrideta16to21pt20fraction961135->SetPassedEvents(22,1413);
   hybrideta16to21pt20fraction961135->SetTotalEvents(23,1602);
   hybrideta16to21pt20fraction961135->SetPassedEvents(23,1394);
   hybrideta16to21pt20fraction961135->SetTotalEvents(24,1694);
   hybrideta16to21pt20fraction961135->SetPassedEvents(24,1505);
   hybrideta16to21pt20fraction961135->SetTotalEvents(25,1760);
   hybrideta16to21pt20fraction961135->SetPassedEvents(25,1565);
   hybrideta16to21pt20fraction961135->SetTotalEvents(26,1682);
   hybrideta16to21pt20fraction961135->SetPassedEvents(26,1501);
   hybrideta16to21pt20fraction961135->SetTotalEvents(27,1804);
   hybrideta16to21pt20fraction961135->SetPassedEvents(27,1640);
   hybrideta16to21pt20fraction961135->SetTotalEvents(28,1738);
   hybrideta16to21pt20fraction961135->SetPassedEvents(28,1580);
   hybrideta16to21pt20fraction961135->SetTotalEvents(29,1716);
   hybrideta16to21pt20fraction961135->SetPassedEvents(29,1556);
   hybrideta16to21pt20fraction961135->SetTotalEvents(30,1684);
   hybrideta16to21pt20fraction961135->SetPassedEvents(30,1540);
   hybrideta16to21pt20fraction961135->SetTotalEvents(31,1710);
   hybrideta16to21pt20fraction961135->SetPassedEvents(31,1563);
   hybrideta16to21pt20fraction961135->SetTotalEvents(32,1640);
   hybrideta16to21pt20fraction961135->SetPassedEvents(32,1500);
   hybrideta16to21pt20fraction961135->SetTotalEvents(33,1816);
   hybrideta16to21pt20fraction961135->SetPassedEvents(33,1676);
   hybrideta16to21pt20fraction961135->SetTotalEvents(34,1642);
   hybrideta16to21pt20fraction961135->SetPassedEvents(34,1472);
   hybrideta16to21pt20fraction961135->SetTotalEvents(35,1664);
   hybrideta16to21pt20fraction961135->SetPassedEvents(35,1541);
   hybrideta16to21pt20fraction961135->SetTotalEvents(36,1670);
   hybrideta16to21pt20fraction961135->SetPassedEvents(36,1539);
   hybrideta16to21pt20fraction961135->SetTotalEvents(37,1880);
   hybrideta16to21pt20fraction961135->SetPassedEvents(37,1707);
   hybrideta16to21pt20fraction961135->SetTotalEvents(38,1730);
   hybrideta16to21pt20fraction961135->SetPassedEvents(38,1602);
   hybrideta16to21pt20fraction961135->SetTotalEvents(39,1720);
   hybrideta16to21pt20fraction961135->SetPassedEvents(39,1577);
   hybrideta16to21pt20fraction961135->SetTotalEvents(40,1670);
   hybrideta16to21pt20fraction961135->SetPassedEvents(40,1546);
   hybrideta16to21pt20fraction961135->SetTotalEvents(41,1790);
   hybrideta16to21pt20fraction961135->SetPassedEvents(41,1663);
   hybrideta16to21pt20fraction961135->SetTotalEvents(42,1806);
   hybrideta16to21pt20fraction961135->SetPassedEvents(42,1682);
   hybrideta16to21pt20fraction961135->SetTotalEvents(43,1720);
   hybrideta16to21pt20fraction961135->SetPassedEvents(43,1592);
   hybrideta16to21pt20fraction961135->SetTotalEvents(44,1732);
   hybrideta16to21pt20fraction961135->SetPassedEvents(44,1583);
   hybrideta16to21pt20fraction961135->SetTotalEvents(45,1598);
   hybrideta16to21pt20fraction961135->SetPassedEvents(45,1489);
   hybrideta16to21pt20fraction961135->SetTotalEvents(46,1706);
   hybrideta16to21pt20fraction961135->SetPassedEvents(46,1587);
   hybrideta16to21pt20fraction961135->SetTotalEvents(47,1756);
   hybrideta16to21pt20fraction961135->SetPassedEvents(47,1636);
   hybrideta16to21pt20fraction961135->SetTotalEvents(48,1760);
   hybrideta16to21pt20fraction961135->SetPassedEvents(48,1633);
   hybrideta16to21pt20fraction961135->SetTotalEvents(49,1746);
   hybrideta16to21pt20fraction961135->SetPassedEvents(49,1628);
   hybrideta16to21pt20fraction961135->SetTotalEvents(50,1712);
   hybrideta16to21pt20fraction961135->SetPassedEvents(50,1580);
   hybrideta16to21pt20fraction961135->SetTotalEvents(51,18);
   hybrideta16to21pt20fraction961135->SetPassedEvents(51,18);
   hybrideta16to21pt20fraction961135->SetFillColor(19);
   hybrideta16to21pt20fraction961135->SetLineWidth(2);
   hybrideta16to21pt20fraction961135->SetMarkerStyle(21);
   hybrideta16to21pt20fraction961135->Draw("samepz");
   
   TLegend *leg = new TLegend(0.4,0.2,0.9,0.43,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu(standalone) Performance","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt20fraction96","GE11-ME11","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE21eta16to21pt20fraction96","GE21-ME21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt20fraction96","GE11-ME11+GE21-ME21","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.43,0.55,"1.65<|#eta|<2.10, p_{T}^{L1}>20 GeV");
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
