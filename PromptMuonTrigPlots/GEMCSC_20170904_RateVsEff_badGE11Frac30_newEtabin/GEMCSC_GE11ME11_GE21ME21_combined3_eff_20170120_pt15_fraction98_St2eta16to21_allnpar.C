void GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt15_fraction98_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:10:41 2017) by ROOT version6.08/06
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
   Double_t xAxis563[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__540 = new TH1F("b1__540"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis563);
   b1__540->SetMinimum(0);
   b1__540->SetMaximum(1.05);
   b1__540->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__540->SetLineColor(ci);
   b1__540->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__540->GetXaxis()->SetLabelFont(42);
   b1__540->GetXaxis()->SetLabelSize(0.05);
   b1__540->GetXaxis()->SetTitleSize(0.05);
   b1__540->GetXaxis()->SetTitleFont(42);
   b1__540->GetYaxis()->SetTitle("Trigger efficiency");
   b1__540->GetYaxis()->SetNdivisions(520);
   b1__540->GetYaxis()->SetLabelFont(42);
   b1__540->GetYaxis()->SetLabelSize(0.05);
   b1__540->GetYaxis()->SetTitleSize(0.05);
   b1__540->GetYaxis()->SetTitleOffset(1.1);
   b1__540->GetYaxis()->SetTitleFont(42);
   b1__540->GetZaxis()->SetLabelFont(42);
   b1__540->GetZaxis()->SetLabelSize(0.035);
   b1__540->GetZaxis()->SetTitleSize(0.035);
   b1__540->GetZaxis()->SetTitleFont(42);
   b1__540->Draw("");
   Double_t xAxis1004[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt15fraction981004 = new TEfficiency("GE11eta16to21pt15fraction98","",50,xAxis1004);
   
   GE11eta16to21pt15fraction981004->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt15fraction981004->SetBetaAlpha(1);
   GE11eta16to21pt15fraction981004->SetBetaBeta(1);
   GE11eta16to21pt15fraction981004->SetWeight(1);
   GE11eta16to21pt15fraction981004->SetStatisticOption(0);
   GE11eta16to21pt15fraction981004->SetPosteriorMode(0);
   GE11eta16to21pt15fraction981004->SetShortestInterval(0);
   GE11eta16to21pt15fraction981004->SetTotalEvents(0,0);
   GE11eta16to21pt15fraction981004->SetPassedEvents(0,0);
   GE11eta16to21pt15fraction981004->SetTotalEvents(1,0);
   GE11eta16to21pt15fraction981004->SetPassedEvents(1,0);
   GE11eta16to21pt15fraction981004->SetTotalEvents(2,1308);
   GE11eta16to21pt15fraction981004->SetPassedEvents(2,0);
   GE11eta16to21pt15fraction981004->SetTotalEvents(3,2390);
   GE11eta16to21pt15fraction981004->SetPassedEvents(3,0);
   GE11eta16to21pt15fraction981004->SetTotalEvents(4,2390);
   GE11eta16to21pt15fraction981004->SetPassedEvents(4,0);
   GE11eta16to21pt15fraction981004->SetTotalEvents(5,2546);
   GE11eta16to21pt15fraction981004->SetPassedEvents(5,1);
   GE11eta16to21pt15fraction981004->SetTotalEvents(6,2518);
   GE11eta16to21pt15fraction981004->SetPassedEvents(6,1);
   GE11eta16to21pt15fraction981004->SetTotalEvents(7,2458);
   GE11eta16to21pt15fraction981004->SetPassedEvents(7,16);
   GE11eta16to21pt15fraction981004->SetTotalEvents(8,2466);
   GE11eta16to21pt15fraction981004->SetPassedEvents(8,49);
   GE11eta16to21pt15fraction981004->SetTotalEvents(9,2452);
   GE11eta16to21pt15fraction981004->SetPassedEvents(9,128);
   GE11eta16to21pt15fraction981004->SetTotalEvents(10,2502);
   GE11eta16to21pt15fraction981004->SetPassedEvents(10,307);
   GE11eta16to21pt15fraction981004->SetTotalEvents(11,2564);
   GE11eta16to21pt15fraction981004->SetPassedEvents(11,614);
   GE11eta16to21pt15fraction981004->SetTotalEvents(12,2464);
   GE11eta16to21pt15fraction981004->SetPassedEvents(12,1000);
   GE11eta16to21pt15fraction981004->SetTotalEvents(13,2492);
   GE11eta16to21pt15fraction981004->SetPassedEvents(13,1436);
   GE11eta16to21pt15fraction981004->SetTotalEvents(14,2502);
   GE11eta16to21pt15fraction981004->SetPassedEvents(14,1707);
   GE11eta16to21pt15fraction981004->SetTotalEvents(15,2452);
   GE11eta16to21pt15fraction981004->SetPassedEvents(15,1873);
   GE11eta16to21pt15fraction981004->SetTotalEvents(16,2580);
   GE11eta16to21pt15fraction981004->SetPassedEvents(16,2106);
   GE11eta16to21pt15fraction981004->SetTotalEvents(17,2426);
   GE11eta16to21pt15fraction981004->SetPassedEvents(17,2041);
   GE11eta16to21pt15fraction981004->SetTotalEvents(18,2490);
   GE11eta16to21pt15fraction981004->SetPassedEvents(18,2124);
   GE11eta16to21pt15fraction981004->SetTotalEvents(19,2510);
   GE11eta16to21pt15fraction981004->SetPassedEvents(19,2216);
   GE11eta16to21pt15fraction981004->SetTotalEvents(20,2456);
   GE11eta16to21pt15fraction981004->SetPassedEvents(20,2146);
   GE11eta16to21pt15fraction981004->SetTotalEvents(21,2470);
   GE11eta16to21pt15fraction981004->SetPassedEvents(21,2187);
   GE11eta16to21pt15fraction981004->SetTotalEvents(22,2420);
   GE11eta16to21pt15fraction981004->SetPassedEvents(22,2145);
   GE11eta16to21pt15fraction981004->SetTotalEvents(23,2420);
   GE11eta16to21pt15fraction981004->SetPassedEvents(23,2161);
   GE11eta16to21pt15fraction981004->SetTotalEvents(24,2564);
   GE11eta16to21pt15fraction981004->SetPassedEvents(24,2320);
   GE11eta16to21pt15fraction981004->SetTotalEvents(25,2544);
   GE11eta16to21pt15fraction981004->SetPassedEvents(25,2275);
   GE11eta16to21pt15fraction981004->SetTotalEvents(26,2398);
   GE11eta16to21pt15fraction981004->SetPassedEvents(26,2153);
   GE11eta16to21pt15fraction981004->SetTotalEvents(27,2598);
   GE11eta16to21pt15fraction981004->SetPassedEvents(27,2394);
   GE11eta16to21pt15fraction981004->SetTotalEvents(28,2528);
   GE11eta16to21pt15fraction981004->SetPassedEvents(28,2279);
   GE11eta16to21pt15fraction981004->SetTotalEvents(29,2510);
   GE11eta16to21pt15fraction981004->SetPassedEvents(29,2283);
   GE11eta16to21pt15fraction981004->SetTotalEvents(30,2464);
   GE11eta16to21pt15fraction981004->SetPassedEvents(30,2226);
   GE11eta16to21pt15fraction981004->SetTotalEvents(31,2524);
   GE11eta16to21pt15fraction981004->SetPassedEvents(31,2311);
   GE11eta16to21pt15fraction981004->SetTotalEvents(32,2464);
   GE11eta16to21pt15fraction981004->SetPassedEvents(32,2235);
   GE11eta16to21pt15fraction981004->SetTotalEvents(33,2614);
   GE11eta16to21pt15fraction981004->SetPassedEvents(33,2387);
   GE11eta16to21pt15fraction981004->SetTotalEvents(34,2466);
   GE11eta16to21pt15fraction981004->SetPassedEvents(34,2260);
   GE11eta16to21pt15fraction981004->SetTotalEvents(35,2424);
   GE11eta16to21pt15fraction981004->SetPassedEvents(35,2212);
   GE11eta16to21pt15fraction981004->SetTotalEvents(36,2528);
   GE11eta16to21pt15fraction981004->SetPassedEvents(36,2291);
   GE11eta16to21pt15fraction981004->SetTotalEvents(37,2700);
   GE11eta16to21pt15fraction981004->SetPassedEvents(37,2440);
   GE11eta16to21pt15fraction981004->SetTotalEvents(38,2532);
   GE11eta16to21pt15fraction981004->SetPassedEvents(38,2307);
   GE11eta16to21pt15fraction981004->SetTotalEvents(39,2566);
   GE11eta16to21pt15fraction981004->SetPassedEvents(39,2339);
   GE11eta16to21pt15fraction981004->SetTotalEvents(40,2484);
   GE11eta16to21pt15fraction981004->SetPassedEvents(40,2287);
   GE11eta16to21pt15fraction981004->SetTotalEvents(41,2624);
   GE11eta16to21pt15fraction981004->SetPassedEvents(41,2397);
   GE11eta16to21pt15fraction981004->SetTotalEvents(42,2560);
   GE11eta16to21pt15fraction981004->SetPassedEvents(42,2348);
   GE11eta16to21pt15fraction981004->SetTotalEvents(43,2558);
   GE11eta16to21pt15fraction981004->SetPassedEvents(43,2321);
   GE11eta16to21pt15fraction981004->SetTotalEvents(44,2560);
   GE11eta16to21pt15fraction981004->SetPassedEvents(44,2328);
   GE11eta16to21pt15fraction981004->SetTotalEvents(45,2404);
   GE11eta16to21pt15fraction981004->SetPassedEvents(45,2198);
   GE11eta16to21pt15fraction981004->SetTotalEvents(46,2502);
   GE11eta16to21pt15fraction981004->SetPassedEvents(46,2295);
   GE11eta16to21pt15fraction981004->SetTotalEvents(47,2510);
   GE11eta16to21pt15fraction981004->SetPassedEvents(47,2278);
   GE11eta16to21pt15fraction981004->SetTotalEvents(48,2526);
   GE11eta16to21pt15fraction981004->SetPassedEvents(48,2289);
   GE11eta16to21pt15fraction981004->SetTotalEvents(49,2604);
   GE11eta16to21pt15fraction981004->SetPassedEvents(49,2387);
   GE11eta16to21pt15fraction981004->SetTotalEvents(50,2550);
   GE11eta16to21pt15fraction981004->SetPassedEvents(50,2339);
   GE11eta16to21pt15fraction981004->SetTotalEvents(51,26);
   GE11eta16to21pt15fraction981004->SetPassedEvents(51,25);
   GE11eta16to21pt15fraction981004->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt15fraction981004->SetLineColor(ci);
   GE11eta16to21pt15fraction981004->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt15fraction981004->SetMarkerColor(ci);
   GE11eta16to21pt15fraction981004->SetMarkerStyle(26);
   GE11eta16to21pt15fraction981004->Draw("samepz");
   Double_t xAxis1005[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE21eta16to21pt15fraction981005 = new TEfficiency("GE21eta16to21pt15fraction98","",50,xAxis1005);
   
   GE21eta16to21pt15fraction981005->SetConfidenceLevel(0.6826895);
   GE21eta16to21pt15fraction981005->SetBetaAlpha(1);
   GE21eta16to21pt15fraction981005->SetBetaBeta(1);
   GE21eta16to21pt15fraction981005->SetWeight(1);
   GE21eta16to21pt15fraction981005->SetStatisticOption(0);
   GE21eta16to21pt15fraction981005->SetPosteriorMode(0);
   GE21eta16to21pt15fraction981005->SetShortestInterval(0);
   GE21eta16to21pt15fraction981005->SetTotalEvents(0,0);
   GE21eta16to21pt15fraction981005->SetPassedEvents(0,0);
   GE21eta16to21pt15fraction981005->SetTotalEvents(1,0);
   GE21eta16to21pt15fraction981005->SetPassedEvents(1,0);
   GE21eta16to21pt15fraction981005->SetTotalEvents(2,868);
   GE21eta16to21pt15fraction981005->SetPassedEvents(2,0);
   GE21eta16to21pt15fraction981005->SetTotalEvents(3,1576);
   GE21eta16to21pt15fraction981005->SetPassedEvents(3,3);
   GE21eta16to21pt15fraction981005->SetTotalEvents(4,1626);
   GE21eta16to21pt15fraction981005->SetPassedEvents(4,9);
   GE21eta16to21pt15fraction981005->SetTotalEvents(5,1728);
   GE21eta16to21pt15fraction981005->SetPassedEvents(5,18);
   GE21eta16to21pt15fraction981005->SetTotalEvents(6,1728);
   GE21eta16to21pt15fraction981005->SetPassedEvents(6,30);
   GE21eta16to21pt15fraction981005->SetTotalEvents(7,1742);
   GE21eta16to21pt15fraction981005->SetPassedEvents(7,36);
   GE21eta16to21pt15fraction981005->SetTotalEvents(8,1652);
   GE21eta16to21pt15fraction981005->SetPassedEvents(8,75);
   GE21eta16to21pt15fraction981005->SetTotalEvents(9,1684);
   GE21eta16to21pt15fraction981005->SetPassedEvents(9,153);
   GE21eta16to21pt15fraction981005->SetTotalEvents(10,1736);
   GE21eta16to21pt15fraction981005->SetPassedEvents(10,305);
   GE21eta16to21pt15fraction981005->SetTotalEvents(11,1712);
   GE21eta16to21pt15fraction981005->SetPassedEvents(11,550);
   GE21eta16to21pt15fraction981005->SetTotalEvents(12,1714);
   GE21eta16to21pt15fraction981005->SetPassedEvents(12,850);
   GE21eta16to21pt15fraction981005->SetTotalEvents(13,1694);
   GE21eta16to21pt15fraction981005->SetPassedEvents(13,1058);
   GE21eta16to21pt15fraction981005->SetTotalEvents(14,1704);
   GE21eta16to21pt15fraction981005->SetPassedEvents(14,1272);
   GE21eta16to21pt15fraction981005->SetTotalEvents(15,1614);
   GE21eta16to21pt15fraction981005->SetPassedEvents(15,1297);
   GE21eta16to21pt15fraction981005->SetTotalEvents(16,1756);
   GE21eta16to21pt15fraction981005->SetPassedEvents(16,1482);
   GE21eta16to21pt15fraction981005->SetTotalEvents(17,1656);
   GE21eta16to21pt15fraction981005->SetPassedEvents(17,1419);
   GE21eta16to21pt15fraction981005->SetTotalEvents(18,1674);
   GE21eta16to21pt15fraction981005->SetPassedEvents(18,1467);
   GE21eta16to21pt15fraction981005->SetTotalEvents(19,1706);
   GE21eta16to21pt15fraction981005->SetPassedEvents(19,1525);
   GE21eta16to21pt15fraction981005->SetTotalEvents(20,1620);
   GE21eta16to21pt15fraction981005->SetPassedEvents(20,1455);
   GE21eta16to21pt15fraction981005->SetTotalEvents(21,1692);
   GE21eta16to21pt15fraction981005->SetPassedEvents(21,1540);
   GE21eta16to21pt15fraction981005->SetTotalEvents(22,1670);
   GE21eta16to21pt15fraction981005->SetPassedEvents(22,1502);
   GE21eta16to21pt15fraction981005->SetTotalEvents(23,1602);
   GE21eta16to21pt15fraction981005->SetPassedEvents(23,1442);
   GE21eta16to21pt15fraction981005->SetTotalEvents(24,1694);
   GE21eta16to21pt15fraction981005->SetPassedEvents(24,1544);
   GE21eta16to21pt15fraction981005->SetTotalEvents(25,1760);
   GE21eta16to21pt15fraction981005->SetPassedEvents(25,1613);
   GE21eta16to21pt15fraction981005->SetTotalEvents(26,1682);
   GE21eta16to21pt15fraction981005->SetPassedEvents(26,1536);
   GE21eta16to21pt15fraction981005->SetTotalEvents(27,1804);
   GE21eta16to21pt15fraction981005->SetPassedEvents(27,1658);
   GE21eta16to21pt15fraction981005->SetTotalEvents(28,1738);
   GE21eta16to21pt15fraction981005->SetPassedEvents(28,1617);
   GE21eta16to21pt15fraction981005->SetTotalEvents(29,1716);
   GE21eta16to21pt15fraction981005->SetPassedEvents(29,1574);
   GE21eta16to21pt15fraction981005->SetTotalEvents(30,1684);
   GE21eta16to21pt15fraction981005->SetPassedEvents(30,1556);
   GE21eta16to21pt15fraction981005->SetTotalEvents(31,1710);
   GE21eta16to21pt15fraction981005->SetPassedEvents(31,1561);
   GE21eta16to21pt15fraction981005->SetTotalEvents(32,1640);
   GE21eta16to21pt15fraction981005->SetPassedEvents(32,1507);
   GE21eta16to21pt15fraction981005->SetTotalEvents(33,1816);
   GE21eta16to21pt15fraction981005->SetPassedEvents(33,1671);
   GE21eta16to21pt15fraction981005->SetTotalEvents(34,1642);
   GE21eta16to21pt15fraction981005->SetPassedEvents(34,1495);
   GE21eta16to21pt15fraction981005->SetTotalEvents(35,1664);
   GE21eta16to21pt15fraction981005->SetPassedEvents(35,1544);
   GE21eta16to21pt15fraction981005->SetTotalEvents(36,1670);
   GE21eta16to21pt15fraction981005->SetPassedEvents(36,1553);
   GE21eta16to21pt15fraction981005->SetTotalEvents(37,1880);
   GE21eta16to21pt15fraction981005->SetPassedEvents(37,1710);
   GE21eta16to21pt15fraction981005->SetTotalEvents(38,1730);
   GE21eta16to21pt15fraction981005->SetPassedEvents(38,1609);
   GE21eta16to21pt15fraction981005->SetTotalEvents(39,1720);
   GE21eta16to21pt15fraction981005->SetPassedEvents(39,1575);
   GE21eta16to21pt15fraction981005->SetTotalEvents(40,1670);
   GE21eta16to21pt15fraction981005->SetPassedEvents(40,1536);
   GE21eta16to21pt15fraction981005->SetTotalEvents(41,1790);
   GE21eta16to21pt15fraction981005->SetPassedEvents(41,1653);
   GE21eta16to21pt15fraction981005->SetTotalEvents(42,1806);
   GE21eta16to21pt15fraction981005->SetPassedEvents(42,1659);
   GE21eta16to21pt15fraction981005->SetTotalEvents(43,1720);
   GE21eta16to21pt15fraction981005->SetPassedEvents(43,1586);
   GE21eta16to21pt15fraction981005->SetTotalEvents(44,1732);
   GE21eta16to21pt15fraction981005->SetPassedEvents(44,1576);
   GE21eta16to21pt15fraction981005->SetTotalEvents(45,1598);
   GE21eta16to21pt15fraction981005->SetPassedEvents(45,1485);
   GE21eta16to21pt15fraction981005->SetTotalEvents(46,1706);
   GE21eta16to21pt15fraction981005->SetPassedEvents(46,1575);
   GE21eta16to21pt15fraction981005->SetTotalEvents(47,1756);
   GE21eta16to21pt15fraction981005->SetPassedEvents(47,1635);
   GE21eta16to21pt15fraction981005->SetTotalEvents(48,1760);
   GE21eta16to21pt15fraction981005->SetPassedEvents(48,1628);
   GE21eta16to21pt15fraction981005->SetTotalEvents(49,1746);
   GE21eta16to21pt15fraction981005->SetPassedEvents(49,1609);
   GE21eta16to21pt15fraction981005->SetTotalEvents(50,1712);
   GE21eta16to21pt15fraction981005->SetPassedEvents(50,1573);
   GE21eta16to21pt15fraction981005->SetTotalEvents(51,18);
   GE21eta16to21pt15fraction981005->SetPassedEvents(51,16);
   GE21eta16to21pt15fraction981005->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt15fraction981005->SetLineColor(ci);
   GE21eta16to21pt15fraction981005->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt15fraction981005->SetMarkerColor(ci);
   GE21eta16to21pt15fraction981005->SetMarkerStyle(25);
   GE21eta16to21pt15fraction981005->Draw("samepz");
   Double_t xAxis1006[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt15fraction981006 = new TEfficiency("hybrideta16to21pt15fraction98","",50,xAxis1006);
   
   hybrideta16to21pt15fraction981006->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt15fraction981006->SetBetaAlpha(1);
   hybrideta16to21pt15fraction981006->SetBetaBeta(1);
   hybrideta16to21pt15fraction981006->SetWeight(1);
   hybrideta16to21pt15fraction981006->SetStatisticOption(0);
   hybrideta16to21pt15fraction981006->SetPosteriorMode(0);
   hybrideta16to21pt15fraction981006->SetShortestInterval(0);
   hybrideta16to21pt15fraction981006->SetTotalEvents(0,0);
   hybrideta16to21pt15fraction981006->SetPassedEvents(0,0);
   hybrideta16to21pt15fraction981006->SetTotalEvents(1,0);
   hybrideta16to21pt15fraction981006->SetPassedEvents(1,0);
   hybrideta16to21pt15fraction981006->SetTotalEvents(2,868);
   hybrideta16to21pt15fraction981006->SetPassedEvents(2,0);
   hybrideta16to21pt15fraction981006->SetTotalEvents(3,1576);
   hybrideta16to21pt15fraction981006->SetPassedEvents(3,0);
   hybrideta16to21pt15fraction981006->SetTotalEvents(4,1626);
   hybrideta16to21pt15fraction981006->SetPassedEvents(4,0);
   hybrideta16to21pt15fraction981006->SetTotalEvents(5,1728);
   hybrideta16to21pt15fraction981006->SetPassedEvents(5,3);
   hybrideta16to21pt15fraction981006->SetTotalEvents(6,1728);
   hybrideta16to21pt15fraction981006->SetPassedEvents(6,2);
   hybrideta16to21pt15fraction981006->SetTotalEvents(7,1742);
   hybrideta16to21pt15fraction981006->SetPassedEvents(7,13);
   hybrideta16to21pt15fraction981006->SetTotalEvents(8,1652);
   hybrideta16to21pt15fraction981006->SetPassedEvents(8,40);
   hybrideta16to21pt15fraction981006->SetTotalEvents(9,1684);
   hybrideta16to21pt15fraction981006->SetPassedEvents(9,111);
   hybrideta16to21pt15fraction981006->SetTotalEvents(10,1736);
   hybrideta16to21pt15fraction981006->SetPassedEvents(10,248);
   hybrideta16to21pt15fraction981006->SetTotalEvents(11,1712);
   hybrideta16to21pt15fraction981006->SetPassedEvents(11,488);
   hybrideta16to21pt15fraction981006->SetTotalEvents(12,1714);
   hybrideta16to21pt15fraction981006->SetPassedEvents(12,795);
   hybrideta16to21pt15fraction981006->SetTotalEvents(13,1694);
   hybrideta16to21pt15fraction981006->SetPassedEvents(13,1035);
   hybrideta16to21pt15fraction981006->SetTotalEvents(14,1704);
   hybrideta16to21pt15fraction981006->SetPassedEvents(14,1263);
   hybrideta16to21pt15fraction981006->SetTotalEvents(15,1614);
   hybrideta16to21pt15fraction981006->SetPassedEvents(15,1312);
   hybrideta16to21pt15fraction981006->SetTotalEvents(16,1756);
   hybrideta16to21pt15fraction981006->SetPassedEvents(16,1497);
   hybrideta16to21pt15fraction981006->SetTotalEvents(17,1656);
   hybrideta16to21pt15fraction981006->SetPassedEvents(17,1451);
   hybrideta16to21pt15fraction981006->SetTotalEvents(18,1674);
   hybrideta16to21pt15fraction981006->SetPassedEvents(18,1495);
   hybrideta16to21pt15fraction981006->SetTotalEvents(19,1706);
   hybrideta16to21pt15fraction981006->SetPassedEvents(19,1552);
   hybrideta16to21pt15fraction981006->SetTotalEvents(20,1620);
   hybrideta16to21pt15fraction981006->SetPassedEvents(20,1478);
   hybrideta16to21pt15fraction981006->SetTotalEvents(21,1692);
   hybrideta16to21pt15fraction981006->SetPassedEvents(21,1562);
   hybrideta16to21pt15fraction981006->SetTotalEvents(22,1670);
   hybrideta16to21pt15fraction981006->SetPassedEvents(22,1526);
   hybrideta16to21pt15fraction981006->SetTotalEvents(23,1602);
   hybrideta16to21pt15fraction981006->SetPassedEvents(23,1465);
   hybrideta16to21pt15fraction981006->SetTotalEvents(24,1694);
   hybrideta16to21pt15fraction981006->SetPassedEvents(24,1578);
   hybrideta16to21pt15fraction981006->SetTotalEvents(25,1760);
   hybrideta16to21pt15fraction981006->SetPassedEvents(25,1629);
   hybrideta16to21pt15fraction981006->SetTotalEvents(26,1682);
   hybrideta16to21pt15fraction981006->SetPassedEvents(26,1548);
   hybrideta16to21pt15fraction981006->SetTotalEvents(27,1804);
   hybrideta16to21pt15fraction981006->SetPassedEvents(27,1684);
   hybrideta16to21pt15fraction981006->SetTotalEvents(28,1738);
   hybrideta16to21pt15fraction981006->SetPassedEvents(28,1622);
   hybrideta16to21pt15fraction981006->SetTotalEvents(29,1716);
   hybrideta16to21pt15fraction981006->SetPassedEvents(29,1603);
   hybrideta16to21pt15fraction981006->SetTotalEvents(30,1684);
   hybrideta16to21pt15fraction981006->SetPassedEvents(30,1567);
   hybrideta16to21pt15fraction981006->SetTotalEvents(31,1710);
   hybrideta16to21pt15fraction981006->SetPassedEvents(31,1601);
   hybrideta16to21pt15fraction981006->SetTotalEvents(32,1640);
   hybrideta16to21pt15fraction981006->SetPassedEvents(32,1523);
   hybrideta16to21pt15fraction981006->SetTotalEvents(33,1816);
   hybrideta16to21pt15fraction981006->SetPassedEvents(33,1710);
   hybrideta16to21pt15fraction981006->SetTotalEvents(34,1642);
   hybrideta16to21pt15fraction981006->SetPassedEvents(34,1508);
   hybrideta16to21pt15fraction981006->SetTotalEvents(35,1664);
   hybrideta16to21pt15fraction981006->SetPassedEvents(35,1567);
   hybrideta16to21pt15fraction981006->SetTotalEvents(36,1670);
   hybrideta16to21pt15fraction981006->SetPassedEvents(36,1559);
   hybrideta16to21pt15fraction981006->SetTotalEvents(37,1880);
   hybrideta16to21pt15fraction981006->SetPassedEvents(37,1732);
   hybrideta16to21pt15fraction981006->SetTotalEvents(38,1730);
   hybrideta16to21pt15fraction981006->SetPassedEvents(38,1619);
   hybrideta16to21pt15fraction981006->SetTotalEvents(39,1720);
   hybrideta16to21pt15fraction981006->SetPassedEvents(39,1601);
   hybrideta16to21pt15fraction981006->SetTotalEvents(40,1670);
   hybrideta16to21pt15fraction981006->SetPassedEvents(40,1562);
   hybrideta16to21pt15fraction981006->SetTotalEvents(41,1790);
   hybrideta16to21pt15fraction981006->SetPassedEvents(41,1680);
   hybrideta16to21pt15fraction981006->SetTotalEvents(42,1806);
   hybrideta16to21pt15fraction981006->SetPassedEvents(42,1705);
   hybrideta16to21pt15fraction981006->SetTotalEvents(43,1720);
   hybrideta16to21pt15fraction981006->SetPassedEvents(43,1610);
   hybrideta16to21pt15fraction981006->SetTotalEvents(44,1732);
   hybrideta16to21pt15fraction981006->SetPassedEvents(44,1608);
   hybrideta16to21pt15fraction981006->SetTotalEvents(45,1598);
   hybrideta16to21pt15fraction981006->SetPassedEvents(45,1513);
   hybrideta16to21pt15fraction981006->SetTotalEvents(46,1706);
   hybrideta16to21pt15fraction981006->SetPassedEvents(46,1601);
   hybrideta16to21pt15fraction981006->SetTotalEvents(47,1756);
   hybrideta16to21pt15fraction981006->SetPassedEvents(47,1664);
   hybrideta16to21pt15fraction981006->SetTotalEvents(48,1760);
   hybrideta16to21pt15fraction981006->SetPassedEvents(48,1652);
   hybrideta16to21pt15fraction981006->SetTotalEvents(49,1746);
   hybrideta16to21pt15fraction981006->SetPassedEvents(49,1641);
   hybrideta16to21pt15fraction981006->SetTotalEvents(50,1712);
   hybrideta16to21pt15fraction981006->SetPassedEvents(50,1596);
   hybrideta16to21pt15fraction981006->SetTotalEvents(51,18);
   hybrideta16to21pt15fraction981006->SetPassedEvents(51,18);
   hybrideta16to21pt15fraction981006->SetFillColor(19);
   hybrideta16to21pt15fraction981006->SetLineWidth(2);
   hybrideta16to21pt15fraction981006->SetMarkerStyle(21);
   hybrideta16to21pt15fraction981006->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt15fraction98","GE11-ME11","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE21eta16to21pt15fraction98","GE21-ME21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt15fraction98","GE11-ME11+GE21-ME21","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.43,0.55,"1.65<|#eta|<2.10, p_{T}^{L1}>15 GeV");
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
