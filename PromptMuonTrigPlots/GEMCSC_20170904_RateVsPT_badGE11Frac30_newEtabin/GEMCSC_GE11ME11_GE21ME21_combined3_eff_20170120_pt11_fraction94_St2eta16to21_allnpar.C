void GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt11_fraction94_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:32:56 2017) by ROOT version6.08/06
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
   Double_t xAxis323[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__310 = new TH1F("b1__310"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis323);
   b1__310->SetMinimum(0);
   b1__310->SetMaximum(1.05);
   b1__310->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__310->SetLineColor(ci);
   b1__310->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__310->GetXaxis()->SetLabelFont(42);
   b1__310->GetXaxis()->SetLabelSize(0.05);
   b1__310->GetXaxis()->SetTitleSize(0.05);
   b1__310->GetXaxis()->SetTitleFont(42);
   b1__310->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__310->GetYaxis()->SetNdivisions(520);
   b1__310->GetYaxis()->SetLabelFont(42);
   b1__310->GetYaxis()->SetLabelSize(0.05);
   b1__310->GetYaxis()->SetTitleSize(0.05);
   b1__310->GetYaxis()->SetTitleOffset(1.1);
   b1__310->GetYaxis()->SetTitleFont(42);
   b1__310->GetZaxis()->SetLabelFont(42);
   b1__310->GetZaxis()->SetLabelSize(0.035);
   b1__310->GetZaxis()->SetTitleSize(0.035);
   b1__310->GetZaxis()->SetTitleFont(42);
   b1__310->Draw("");
   Double_t xAxis574[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt11fraction94574 = new TEfficiency("GE11eta16to21pt11fraction94","",50,xAxis574);
   
   GE11eta16to21pt11fraction94574->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt11fraction94574->SetBetaAlpha(1);
   GE11eta16to21pt11fraction94574->SetBetaBeta(1);
   GE11eta16to21pt11fraction94574->SetWeight(1);
   GE11eta16to21pt11fraction94574->SetStatisticOption(0);
   GE11eta16to21pt11fraction94574->SetPosteriorMode(0);
   GE11eta16to21pt11fraction94574->SetShortestInterval(0);
   GE11eta16to21pt11fraction94574->SetTotalEvents(0,0);
   GE11eta16to21pt11fraction94574->SetPassedEvents(0,0);
   GE11eta16to21pt11fraction94574->SetTotalEvents(1,0);
   GE11eta16to21pt11fraction94574->SetPassedEvents(1,0);
   GE11eta16to21pt11fraction94574->SetTotalEvents(2,1308);
   GE11eta16to21pt11fraction94574->SetPassedEvents(2,0);
   GE11eta16to21pt11fraction94574->SetTotalEvents(3,2390);
   GE11eta16to21pt11fraction94574->SetPassedEvents(3,0);
   GE11eta16to21pt11fraction94574->SetTotalEvents(4,2390);
   GE11eta16to21pt11fraction94574->SetPassedEvents(4,0);
   GE11eta16to21pt11fraction94574->SetTotalEvents(5,2546);
   GE11eta16to21pt11fraction94574->SetPassedEvents(5,3);
   GE11eta16to21pt11fraction94574->SetTotalEvents(6,2518);
   GE11eta16to21pt11fraction94574->SetPassedEvents(6,18);
   GE11eta16to21pt11fraction94574->SetTotalEvents(7,2458);
   GE11eta16to21pt11fraction94574->SetPassedEvents(7,124);
   GE11eta16to21pt11fraction94574->SetTotalEvents(8,2466);
   GE11eta16to21pt11fraction94574->SetPassedEvents(8,393);
   GE11eta16to21pt11fraction94574->SetTotalEvents(9,2452);
   GE11eta16to21pt11fraction94574->SetPassedEvents(9,808);
   GE11eta16to21pt11fraction94574->SetTotalEvents(10,2502);
   GE11eta16to21pt11fraction94574->SetPassedEvents(10,1361);
   GE11eta16to21pt11fraction94574->SetTotalEvents(11,2564);
   GE11eta16to21pt11fraction94574->SetPassedEvents(11,1813);
   GE11eta16to21pt11fraction94574->SetTotalEvents(12,2464);
   GE11eta16to21pt11fraction94574->SetPassedEvents(12,1976);
   GE11eta16to21pt11fraction94574->SetTotalEvents(13,2492);
   GE11eta16to21pt11fraction94574->SetPassedEvents(13,2155);
   GE11eta16to21pt11fraction94574->SetTotalEvents(14,2502);
   GE11eta16to21pt11fraction94574->SetPassedEvents(14,2200);
   GE11eta16to21pt11fraction94574->SetTotalEvents(15,2452);
   GE11eta16to21pt11fraction94574->SetPassedEvents(15,2158);
   GE11eta16to21pt11fraction94574->SetTotalEvents(16,2580);
   GE11eta16to21pt11fraction94574->SetPassedEvents(16,2313);
   GE11eta16to21pt11fraction94574->SetTotalEvents(17,2426);
   GE11eta16to21pt11fraction94574->SetPassedEvents(17,2179);
   GE11eta16to21pt11fraction94574->SetTotalEvents(18,2490);
   GE11eta16to21pt11fraction94574->SetPassedEvents(18,2243);
   GE11eta16to21pt11fraction94574->SetTotalEvents(19,2510);
   GE11eta16to21pt11fraction94574->SetPassedEvents(19,2285);
   GE11eta16to21pt11fraction94574->SetTotalEvents(20,2456);
   GE11eta16to21pt11fraction94574->SetPassedEvents(20,2222);
   GE11eta16to21pt11fraction94574->SetTotalEvents(21,2470);
   GE11eta16to21pt11fraction94574->SetPassedEvents(21,2258);
   GE11eta16to21pt11fraction94574->SetTotalEvents(22,2420);
   GE11eta16to21pt11fraction94574->SetPassedEvents(22,2195);
   GE11eta16to21pt11fraction94574->SetTotalEvents(23,2420);
   GE11eta16to21pt11fraction94574->SetPassedEvents(23,2212);
   GE11eta16to21pt11fraction94574->SetTotalEvents(24,2564);
   GE11eta16to21pt11fraction94574->SetPassedEvents(24,2371);
   GE11eta16to21pt11fraction94574->SetTotalEvents(25,2544);
   GE11eta16to21pt11fraction94574->SetPassedEvents(25,2322);
   GE11eta16to21pt11fraction94574->SetTotalEvents(26,2398);
   GE11eta16to21pt11fraction94574->SetPassedEvents(26,2182);
   GE11eta16to21pt11fraction94574->SetTotalEvents(27,2598);
   GE11eta16to21pt11fraction94574->SetPassedEvents(27,2423);
   GE11eta16to21pt11fraction94574->SetTotalEvents(28,2528);
   GE11eta16to21pt11fraction94574->SetPassedEvents(28,2320);
   GE11eta16to21pt11fraction94574->SetTotalEvents(29,2510);
   GE11eta16to21pt11fraction94574->SetPassedEvents(29,2315);
   GE11eta16to21pt11fraction94574->SetTotalEvents(30,2464);
   GE11eta16to21pt11fraction94574->SetPassedEvents(30,2254);
   GE11eta16to21pt11fraction94574->SetTotalEvents(31,2524);
   GE11eta16to21pt11fraction94574->SetPassedEvents(31,2336);
   GE11eta16to21pt11fraction94574->SetTotalEvents(32,2464);
   GE11eta16to21pt11fraction94574->SetPassedEvents(32,2272);
   GE11eta16to21pt11fraction94574->SetTotalEvents(33,2614);
   GE11eta16to21pt11fraction94574->SetPassedEvents(33,2410);
   GE11eta16to21pt11fraction94574->SetTotalEvents(34,2466);
   GE11eta16to21pt11fraction94574->SetPassedEvents(34,2282);
   GE11eta16to21pt11fraction94574->SetTotalEvents(35,2424);
   GE11eta16to21pt11fraction94574->SetPassedEvents(35,2231);
   GE11eta16to21pt11fraction94574->SetTotalEvents(36,2528);
   GE11eta16to21pt11fraction94574->SetPassedEvents(36,2320);
   GE11eta16to21pt11fraction94574->SetTotalEvents(37,2700);
   GE11eta16to21pt11fraction94574->SetPassedEvents(37,2467);
   GE11eta16to21pt11fraction94574->SetTotalEvents(38,2532);
   GE11eta16to21pt11fraction94574->SetPassedEvents(38,2332);
   GE11eta16to21pt11fraction94574->SetTotalEvents(39,2566);
   GE11eta16to21pt11fraction94574->SetPassedEvents(39,2367);
   GE11eta16to21pt11fraction94574->SetTotalEvents(40,2484);
   GE11eta16to21pt11fraction94574->SetPassedEvents(40,2309);
   GE11eta16to21pt11fraction94574->SetTotalEvents(41,2624);
   GE11eta16to21pt11fraction94574->SetPassedEvents(41,2422);
   GE11eta16to21pt11fraction94574->SetTotalEvents(42,2560);
   GE11eta16to21pt11fraction94574->SetPassedEvents(42,2365);
   GE11eta16to21pt11fraction94574->SetTotalEvents(43,2558);
   GE11eta16to21pt11fraction94574->SetPassedEvents(43,2348);
   GE11eta16to21pt11fraction94574->SetTotalEvents(44,2560);
   GE11eta16to21pt11fraction94574->SetPassedEvents(44,2349);
   GE11eta16to21pt11fraction94574->SetTotalEvents(45,2404);
   GE11eta16to21pt11fraction94574->SetPassedEvents(45,2227);
   GE11eta16to21pt11fraction94574->SetTotalEvents(46,2502);
   GE11eta16to21pt11fraction94574->SetPassedEvents(46,2314);
   GE11eta16to21pt11fraction94574->SetTotalEvents(47,2510);
   GE11eta16to21pt11fraction94574->SetPassedEvents(47,2298);
   GE11eta16to21pt11fraction94574->SetTotalEvents(48,2526);
   GE11eta16to21pt11fraction94574->SetPassedEvents(48,2308);
   GE11eta16to21pt11fraction94574->SetTotalEvents(49,2604);
   GE11eta16to21pt11fraction94574->SetPassedEvents(49,2405);
   GE11eta16to21pt11fraction94574->SetTotalEvents(50,2550);
   GE11eta16to21pt11fraction94574->SetPassedEvents(50,2359);
   GE11eta16to21pt11fraction94574->SetTotalEvents(51,26);
   GE11eta16to21pt11fraction94574->SetPassedEvents(51,25);
   GE11eta16to21pt11fraction94574->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt11fraction94574->SetLineColor(ci);
   GE11eta16to21pt11fraction94574->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt11fraction94574->SetMarkerColor(ci);
   GE11eta16to21pt11fraction94574->SetMarkerStyle(26);
   GE11eta16to21pt11fraction94574->Draw("samepz");
   Double_t xAxis575[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE21eta16to21pt11fraction94575 = new TEfficiency("GE21eta16to21pt11fraction94","",50,xAxis575);
   
   GE21eta16to21pt11fraction94575->SetConfidenceLevel(0.6826895);
   GE21eta16to21pt11fraction94575->SetBetaAlpha(1);
   GE21eta16to21pt11fraction94575->SetBetaBeta(1);
   GE21eta16to21pt11fraction94575->SetWeight(1);
   GE21eta16to21pt11fraction94575->SetStatisticOption(0);
   GE21eta16to21pt11fraction94575->SetPosteriorMode(0);
   GE21eta16to21pt11fraction94575->SetShortestInterval(0);
   GE21eta16to21pt11fraction94575->SetTotalEvents(0,0);
   GE21eta16to21pt11fraction94575->SetPassedEvents(0,0);
   GE21eta16to21pt11fraction94575->SetTotalEvents(1,0);
   GE21eta16to21pt11fraction94575->SetPassedEvents(1,0);
   GE21eta16to21pt11fraction94575->SetTotalEvents(2,868);
   GE21eta16to21pt11fraction94575->SetPassedEvents(2,1);
   GE21eta16to21pt11fraction94575->SetTotalEvents(3,1576);
   GE21eta16to21pt11fraction94575->SetPassedEvents(3,3);
   GE21eta16to21pt11fraction94575->SetTotalEvents(4,1626);
   GE21eta16to21pt11fraction94575->SetPassedEvents(4,10);
   GE21eta16to21pt11fraction94575->SetTotalEvents(5,1728);
   GE21eta16to21pt11fraction94575->SetPassedEvents(5,26);
   GE21eta16to21pt11fraction94575->SetTotalEvents(6,1728);
   GE21eta16to21pt11fraction94575->SetPassedEvents(6,51);
   GE21eta16to21pt11fraction94575->SetTotalEvents(7,1742);
   GE21eta16to21pt11fraction94575->SetPassedEvents(7,167);
   GE21eta16to21pt11fraction94575->SetTotalEvents(8,1652);
   GE21eta16to21pt11fraction94575->SetPassedEvents(8,412);
   GE21eta16to21pt11fraction94575->SetTotalEvents(9,1684);
   GE21eta16to21pt11fraction94575->SetPassedEvents(9,779);
   GE21eta16to21pt11fraction94575->SetTotalEvents(10,1736);
   GE21eta16to21pt11fraction94575->SetPassedEvents(10,1113);
   GE21eta16to21pt11fraction94575->SetTotalEvents(11,1712);
   GE21eta16to21pt11fraction94575->SetPassedEvents(11,1278);
   GE21eta16to21pt11fraction94575->SetTotalEvents(12,1714);
   GE21eta16to21pt11fraction94575->SetPassedEvents(12,1420);
   GE21eta16to21pt11fraction94575->SetTotalEvents(13,1694);
   GE21eta16to21pt11fraction94575->SetPassedEvents(13,1460);
   GE21eta16to21pt11fraction94575->SetTotalEvents(14,1704);
   GE21eta16to21pt11fraction94575->SetPassedEvents(14,1511);
   GE21eta16to21pt11fraction94575->SetTotalEvents(15,1614);
   GE21eta16to21pt11fraction94575->SetPassedEvents(15,1433);
   GE21eta16to21pt11fraction94575->SetTotalEvents(16,1756);
   GE21eta16to21pt11fraction94575->SetPassedEvents(16,1567);
   GE21eta16to21pt11fraction94575->SetTotalEvents(17,1656);
   GE21eta16to21pt11fraction94575->SetPassedEvents(17,1466);
   GE21eta16to21pt11fraction94575->SetTotalEvents(18,1674);
   GE21eta16to21pt11fraction94575->SetPassedEvents(18,1502);
   GE21eta16to21pt11fraction94575->SetTotalEvents(19,1706);
   GE21eta16to21pt11fraction94575->SetPassedEvents(19,1546);
   GE21eta16to21pt11fraction94575->SetTotalEvents(20,1620);
   GE21eta16to21pt11fraction94575->SetPassedEvents(20,1465);
   GE21eta16to21pt11fraction94575->SetTotalEvents(21,1692);
   GE21eta16to21pt11fraction94575->SetPassedEvents(21,1550);
   GE21eta16to21pt11fraction94575->SetTotalEvents(22,1670);
   GE21eta16to21pt11fraction94575->SetPassedEvents(22,1524);
   GE21eta16to21pt11fraction94575->SetTotalEvents(23,1602);
   GE21eta16to21pt11fraction94575->SetPassedEvents(23,1452);
   GE21eta16to21pt11fraction94575->SetTotalEvents(24,1694);
   GE21eta16to21pt11fraction94575->SetPassedEvents(24,1551);
   GE21eta16to21pt11fraction94575->SetTotalEvents(25,1760);
   GE21eta16to21pt11fraction94575->SetPassedEvents(25,1616);
   GE21eta16to21pt11fraction94575->SetTotalEvents(26,1682);
   GE21eta16to21pt11fraction94575->SetPassedEvents(26,1542);
   GE21eta16to21pt11fraction94575->SetTotalEvents(27,1804);
   GE21eta16to21pt11fraction94575->SetPassedEvents(27,1663);
   GE21eta16to21pt11fraction94575->SetTotalEvents(28,1738);
   GE21eta16to21pt11fraction94575->SetPassedEvents(28,1624);
   GE21eta16to21pt11fraction94575->SetTotalEvents(29,1716);
   GE21eta16to21pt11fraction94575->SetPassedEvents(29,1567);
   GE21eta16to21pt11fraction94575->SetTotalEvents(30,1684);
   GE21eta16to21pt11fraction94575->SetPassedEvents(30,1568);
   GE21eta16to21pt11fraction94575->SetTotalEvents(31,1710);
   GE21eta16to21pt11fraction94575->SetPassedEvents(31,1564);
   GE21eta16to21pt11fraction94575->SetTotalEvents(32,1640);
   GE21eta16to21pt11fraction94575->SetPassedEvents(32,1506);
   GE21eta16to21pt11fraction94575->SetTotalEvents(33,1816);
   GE21eta16to21pt11fraction94575->SetPassedEvents(33,1670);
   GE21eta16to21pt11fraction94575->SetTotalEvents(34,1642);
   GE21eta16to21pt11fraction94575->SetPassedEvents(34,1499);
   GE21eta16to21pt11fraction94575->SetTotalEvents(35,1664);
   GE21eta16to21pt11fraction94575->SetPassedEvents(35,1551);
   GE21eta16to21pt11fraction94575->SetTotalEvents(36,1670);
   GE21eta16to21pt11fraction94575->SetPassedEvents(36,1554);
   GE21eta16to21pt11fraction94575->SetTotalEvents(37,1880);
   GE21eta16to21pt11fraction94575->SetPassedEvents(37,1714);
   GE21eta16to21pt11fraction94575->SetTotalEvents(38,1730);
   GE21eta16to21pt11fraction94575->SetPassedEvents(38,1599);
   GE21eta16to21pt11fraction94575->SetTotalEvents(39,1720);
   GE21eta16to21pt11fraction94575->SetPassedEvents(39,1573);
   GE21eta16to21pt11fraction94575->SetTotalEvents(40,1670);
   GE21eta16to21pt11fraction94575->SetPassedEvents(40,1532);
   GE21eta16to21pt11fraction94575->SetTotalEvents(41,1790);
   GE21eta16to21pt11fraction94575->SetPassedEvents(41,1655);
   GE21eta16to21pt11fraction94575->SetTotalEvents(42,1806);
   GE21eta16to21pt11fraction94575->SetPassedEvents(42,1658);
   GE21eta16to21pt11fraction94575->SetTotalEvents(43,1720);
   GE21eta16to21pt11fraction94575->SetPassedEvents(43,1592);
   GE21eta16to21pt11fraction94575->SetTotalEvents(44,1732);
   GE21eta16to21pt11fraction94575->SetPassedEvents(44,1572);
   GE21eta16to21pt11fraction94575->SetTotalEvents(45,1598);
   GE21eta16to21pt11fraction94575->SetPassedEvents(45,1487);
   GE21eta16to21pt11fraction94575->SetTotalEvents(46,1706);
   GE21eta16to21pt11fraction94575->SetPassedEvents(46,1564);
   GE21eta16to21pt11fraction94575->SetTotalEvents(47,1756);
   GE21eta16to21pt11fraction94575->SetPassedEvents(47,1618);
   GE21eta16to21pt11fraction94575->SetTotalEvents(48,1760);
   GE21eta16to21pt11fraction94575->SetPassedEvents(48,1627);
   GE21eta16to21pt11fraction94575->SetTotalEvents(49,1746);
   GE21eta16to21pt11fraction94575->SetPassedEvents(49,1602);
   GE21eta16to21pt11fraction94575->SetTotalEvents(50,1712);
   GE21eta16to21pt11fraction94575->SetPassedEvents(50,1575);
   GE21eta16to21pt11fraction94575->SetTotalEvents(51,18);
   GE21eta16to21pt11fraction94575->SetPassedEvents(51,15);
   GE21eta16to21pt11fraction94575->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt11fraction94575->SetLineColor(ci);
   GE21eta16to21pt11fraction94575->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt11fraction94575->SetMarkerColor(ci);
   GE21eta16to21pt11fraction94575->SetMarkerStyle(25);
   GE21eta16to21pt11fraction94575->Draw("samepz");
   Double_t xAxis576[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt11fraction94576 = new TEfficiency("hybrideta16to21pt11fraction94","",50,xAxis576);
   
   hybrideta16to21pt11fraction94576->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt11fraction94576->SetBetaAlpha(1);
   hybrideta16to21pt11fraction94576->SetBetaBeta(1);
   hybrideta16to21pt11fraction94576->SetWeight(1);
   hybrideta16to21pt11fraction94576->SetStatisticOption(0);
   hybrideta16to21pt11fraction94576->SetPosteriorMode(0);
   hybrideta16to21pt11fraction94576->SetShortestInterval(0);
   hybrideta16to21pt11fraction94576->SetTotalEvents(0,0);
   hybrideta16to21pt11fraction94576->SetPassedEvents(0,0);
   hybrideta16to21pt11fraction94576->SetTotalEvents(1,0);
   hybrideta16to21pt11fraction94576->SetPassedEvents(1,0);
   hybrideta16to21pt11fraction94576->SetTotalEvents(2,868);
   hybrideta16to21pt11fraction94576->SetPassedEvents(2,0);
   hybrideta16to21pt11fraction94576->SetTotalEvents(3,1576);
   hybrideta16to21pt11fraction94576->SetPassedEvents(3,0);
   hybrideta16to21pt11fraction94576->SetTotalEvents(4,1626);
   hybrideta16to21pt11fraction94576->SetPassedEvents(4,1);
   hybrideta16to21pt11fraction94576->SetTotalEvents(5,1728);
   hybrideta16to21pt11fraction94576->SetPassedEvents(5,6);
   hybrideta16to21pt11fraction94576->SetTotalEvents(6,1728);
   hybrideta16to21pt11fraction94576->SetPassedEvents(6,16);
   hybrideta16to21pt11fraction94576->SetTotalEvents(7,1742);
   hybrideta16to21pt11fraction94576->SetPassedEvents(7,99);
   hybrideta16to21pt11fraction94576->SetTotalEvents(8,1652);
   hybrideta16to21pt11fraction94576->SetPassedEvents(8,290);
   hybrideta16to21pt11fraction94576->SetTotalEvents(9,1684);
   hybrideta16to21pt11fraction94576->SetPassedEvents(9,640);
   hybrideta16to21pt11fraction94576->SetTotalEvents(10,1736);
   hybrideta16to21pt11fraction94576->SetPassedEvents(10,1056);
   hybrideta16to21pt11fraction94576->SetTotalEvents(11,1712);
   hybrideta16to21pt11fraction94576->SetPassedEvents(11,1281);
   hybrideta16to21pt11fraction94576->SetTotalEvents(12,1714);
   hybrideta16to21pt11fraction94576->SetPassedEvents(12,1439);
   hybrideta16to21pt11fraction94576->SetTotalEvents(13,1694);
   hybrideta16to21pt11fraction94576->SetPassedEvents(13,1493);
   hybrideta16to21pt11fraction94576->SetTotalEvents(14,1704);
   hybrideta16to21pt11fraction94576->SetPassedEvents(14,1533);
   hybrideta16to21pt11fraction94576->SetTotalEvents(15,1614);
   hybrideta16to21pt11fraction94576->SetPassedEvents(15,1479);
   hybrideta16to21pt11fraction94576->SetTotalEvents(16,1756);
   hybrideta16to21pt11fraction94576->SetPassedEvents(16,1603);
   hybrideta16to21pt11fraction94576->SetTotalEvents(17,1656);
   hybrideta16to21pt11fraction94576->SetPassedEvents(17,1513);
   hybrideta16to21pt11fraction94576->SetTotalEvents(18,1674);
   hybrideta16to21pt11fraction94576->SetPassedEvents(18,1539);
   hybrideta16to21pt11fraction94576->SetTotalEvents(19,1706);
   hybrideta16to21pt11fraction94576->SetPassedEvents(19,1581);
   hybrideta16to21pt11fraction94576->SetTotalEvents(20,1620);
   hybrideta16to21pt11fraction94576->SetPassedEvents(20,1505);
   hybrideta16to21pt11fraction94576->SetTotalEvents(21,1692);
   hybrideta16to21pt11fraction94576->SetPassedEvents(21,1584);
   hybrideta16to21pt11fraction94576->SetTotalEvents(22,1670);
   hybrideta16to21pt11fraction94576->SetPassedEvents(22,1547);
   hybrideta16to21pt11fraction94576->SetTotalEvents(23,1602);
   hybrideta16to21pt11fraction94576->SetPassedEvents(23,1488);
   hybrideta16to21pt11fraction94576->SetTotalEvents(24,1694);
   hybrideta16to21pt11fraction94576->SetPassedEvents(24,1601);
   hybrideta16to21pt11fraction94576->SetTotalEvents(25,1760);
   hybrideta16to21pt11fraction94576->SetPassedEvents(25,1642);
   hybrideta16to21pt11fraction94576->SetTotalEvents(26,1682);
   hybrideta16to21pt11fraction94576->SetPassedEvents(26,1566);
   hybrideta16to21pt11fraction94576->SetTotalEvents(27,1804);
   hybrideta16to21pt11fraction94576->SetPassedEvents(27,1700);
   hybrideta16to21pt11fraction94576->SetTotalEvents(28,1738);
   hybrideta16to21pt11fraction94576->SetPassedEvents(28,1645);
   hybrideta16to21pt11fraction94576->SetTotalEvents(29,1716);
   hybrideta16to21pt11fraction94576->SetPassedEvents(29,1612);
   hybrideta16to21pt11fraction94576->SetTotalEvents(30,1684);
   hybrideta16to21pt11fraction94576->SetPassedEvents(30,1582);
   hybrideta16to21pt11fraction94576->SetTotalEvents(31,1710);
   hybrideta16to21pt11fraction94576->SetPassedEvents(31,1610);
   hybrideta16to21pt11fraction94576->SetTotalEvents(32,1640);
   hybrideta16to21pt11fraction94576->SetPassedEvents(32,1538);
   hybrideta16to21pt11fraction94576->SetTotalEvents(33,1816);
   hybrideta16to21pt11fraction94576->SetPassedEvents(33,1722);
   hybrideta16to21pt11fraction94576->SetTotalEvents(34,1642);
   hybrideta16to21pt11fraction94576->SetPassedEvents(34,1519);
   hybrideta16to21pt11fraction94576->SetTotalEvents(35,1664);
   hybrideta16to21pt11fraction94576->SetPassedEvents(35,1580);
   hybrideta16to21pt11fraction94576->SetTotalEvents(36,1670);
   hybrideta16to21pt11fraction94576->SetPassedEvents(36,1579);
   hybrideta16to21pt11fraction94576->SetTotalEvents(37,1880);
   hybrideta16to21pt11fraction94576->SetPassedEvents(37,1748);
   hybrideta16to21pt11fraction94576->SetTotalEvents(38,1730);
   hybrideta16to21pt11fraction94576->SetPassedEvents(38,1632);
   hybrideta16to21pt11fraction94576->SetTotalEvents(39,1720);
   hybrideta16to21pt11fraction94576->SetPassedEvents(39,1616);
   hybrideta16to21pt11fraction94576->SetTotalEvents(40,1670);
   hybrideta16to21pt11fraction94576->SetPassedEvents(40,1572);
   hybrideta16to21pt11fraction94576->SetTotalEvents(41,1790);
   hybrideta16to21pt11fraction94576->SetPassedEvents(41,1696);
   hybrideta16to21pt11fraction94576->SetTotalEvents(42,1806);
   hybrideta16to21pt11fraction94576->SetPassedEvents(42,1716);
   hybrideta16to21pt11fraction94576->SetTotalEvents(43,1720);
   hybrideta16to21pt11fraction94576->SetPassedEvents(43,1631);
   hybrideta16to21pt11fraction94576->SetTotalEvents(44,1732);
   hybrideta16to21pt11fraction94576->SetPassedEvents(44,1615);
   hybrideta16to21pt11fraction94576->SetTotalEvents(45,1598);
   hybrideta16to21pt11fraction94576->SetPassedEvents(45,1522);
   hybrideta16to21pt11fraction94576->SetTotalEvents(46,1706);
   hybrideta16to21pt11fraction94576->SetPassedEvents(46,1614);
   hybrideta16to21pt11fraction94576->SetTotalEvents(47,1756);
   hybrideta16to21pt11fraction94576->SetPassedEvents(47,1671);
   hybrideta16to21pt11fraction94576->SetTotalEvents(48,1760);
   hybrideta16to21pt11fraction94576->SetPassedEvents(48,1661);
   hybrideta16to21pt11fraction94576->SetTotalEvents(49,1746);
   hybrideta16to21pt11fraction94576->SetPassedEvents(49,1653);
   hybrideta16to21pt11fraction94576->SetTotalEvents(50,1712);
   hybrideta16to21pt11fraction94576->SetPassedEvents(50,1608);
   hybrideta16to21pt11fraction94576->SetTotalEvents(51,18);
   hybrideta16to21pt11fraction94576->SetPassedEvents(51,18);
   hybrideta16to21pt11fraction94576->SetFillColor(19);
   hybrideta16to21pt11fraction94576->SetLineWidth(2);
   hybrideta16to21pt11fraction94576->SetMarkerStyle(21);
   hybrideta16to21pt11fraction94576->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt11fraction94","GE11-ME11","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE21eta16to21pt11fraction94","GE21-ME21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt11fraction94","GE11-ME11+GE21-ME21","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.43,0.55,"1.65<|#eta|<2.10, p_{T}^{L1}>11 GeV");
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
