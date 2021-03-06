void GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt15_fraction88_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:08:32 2017) by ROOT version6.08/06
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
   b1__310->GetYaxis()->SetTitle("Trigger efficiency");
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
   
   TEfficiency * GE11eta16to21pt15fraction88574 = new TEfficiency("GE11eta16to21pt15fraction88","",50,xAxis574);
   
   GE11eta16to21pt15fraction88574->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt15fraction88574->SetBetaAlpha(1);
   GE11eta16to21pt15fraction88574->SetBetaBeta(1);
   GE11eta16to21pt15fraction88574->SetWeight(1);
   GE11eta16to21pt15fraction88574->SetStatisticOption(0);
   GE11eta16to21pt15fraction88574->SetPosteriorMode(0);
   GE11eta16to21pt15fraction88574->SetShortestInterval(0);
   GE11eta16to21pt15fraction88574->SetTotalEvents(0,0);
   GE11eta16to21pt15fraction88574->SetPassedEvents(0,0);
   GE11eta16to21pt15fraction88574->SetTotalEvents(1,0);
   GE11eta16to21pt15fraction88574->SetPassedEvents(1,0);
   GE11eta16to21pt15fraction88574->SetTotalEvents(2,1308);
   GE11eta16to21pt15fraction88574->SetPassedEvents(2,0);
   GE11eta16to21pt15fraction88574->SetTotalEvents(3,2390);
   GE11eta16to21pt15fraction88574->SetPassedEvents(3,0);
   GE11eta16to21pt15fraction88574->SetTotalEvents(4,2390);
   GE11eta16to21pt15fraction88574->SetPassedEvents(4,0);
   GE11eta16to21pt15fraction88574->SetTotalEvents(5,2546);
   GE11eta16to21pt15fraction88574->SetPassedEvents(5,0);
   GE11eta16to21pt15fraction88574->SetTotalEvents(6,2518);
   GE11eta16to21pt15fraction88574->SetPassedEvents(6,1);
   GE11eta16to21pt15fraction88574->SetTotalEvents(7,2458);
   GE11eta16to21pt15fraction88574->SetPassedEvents(7,8);
   GE11eta16to21pt15fraction88574->SetTotalEvents(8,2466);
   GE11eta16to21pt15fraction88574->SetPassedEvents(8,25);
   GE11eta16to21pt15fraction88574->SetTotalEvents(9,2452);
   GE11eta16to21pt15fraction88574->SetPassedEvents(9,71);
   GE11eta16to21pt15fraction88574->SetTotalEvents(10,2502);
   GE11eta16to21pt15fraction88574->SetPassedEvents(10,188);
   GE11eta16to21pt15fraction88574->SetTotalEvents(11,2564);
   GE11eta16to21pt15fraction88574->SetPassedEvents(11,403);
   GE11eta16to21pt15fraction88574->SetTotalEvents(12,2464);
   GE11eta16to21pt15fraction88574->SetPassedEvents(12,694);
   GE11eta16to21pt15fraction88574->SetTotalEvents(13,2492);
   GE11eta16to21pt15fraction88574->SetPassedEvents(13,1092);
   GE11eta16to21pt15fraction88574->SetTotalEvents(14,2502);
   GE11eta16to21pt15fraction88574->SetPassedEvents(14,1394);
   GE11eta16to21pt15fraction88574->SetTotalEvents(15,2452);
   GE11eta16to21pt15fraction88574->SetPassedEvents(15,1622);
   GE11eta16to21pt15fraction88574->SetTotalEvents(16,2580);
   GE11eta16to21pt15fraction88574->SetPassedEvents(16,1928);
   GE11eta16to21pt15fraction88574->SetTotalEvents(17,2426);
   GE11eta16to21pt15fraction88574->SetPassedEvents(17,1941);
   GE11eta16to21pt15fraction88574->SetTotalEvents(18,2490);
   GE11eta16to21pt15fraction88574->SetPassedEvents(18,2058);
   GE11eta16to21pt15fraction88574->SetTotalEvents(19,2510);
   GE11eta16to21pt15fraction88574->SetPassedEvents(19,2168);
   GE11eta16to21pt15fraction88574->SetTotalEvents(20,2456);
   GE11eta16to21pt15fraction88574->SetPassedEvents(20,2122);
   GE11eta16to21pt15fraction88574->SetTotalEvents(21,2470);
   GE11eta16to21pt15fraction88574->SetPassedEvents(21,2156);
   GE11eta16to21pt15fraction88574->SetTotalEvents(22,2420);
   GE11eta16to21pt15fraction88574->SetPassedEvents(22,2128);
   GE11eta16to21pt15fraction88574->SetTotalEvents(23,2420);
   GE11eta16to21pt15fraction88574->SetPassedEvents(23,2137);
   GE11eta16to21pt15fraction88574->SetTotalEvents(24,2564);
   GE11eta16to21pt15fraction88574->SetPassedEvents(24,2303);
   GE11eta16to21pt15fraction88574->SetTotalEvents(25,2544);
   GE11eta16to21pt15fraction88574->SetPassedEvents(25,2263);
   GE11eta16to21pt15fraction88574->SetTotalEvents(26,2398);
   GE11eta16to21pt15fraction88574->SetPassedEvents(26,2142);
   GE11eta16to21pt15fraction88574->SetTotalEvents(27,2598);
   GE11eta16to21pt15fraction88574->SetPassedEvents(27,2382);
   GE11eta16to21pt15fraction88574->SetTotalEvents(28,2528);
   GE11eta16to21pt15fraction88574->SetPassedEvents(28,2261);
   GE11eta16to21pt15fraction88574->SetTotalEvents(29,2510);
   GE11eta16to21pt15fraction88574->SetPassedEvents(29,2267);
   GE11eta16to21pt15fraction88574->SetTotalEvents(30,2464);
   GE11eta16to21pt15fraction88574->SetPassedEvents(30,2216);
   GE11eta16to21pt15fraction88574->SetTotalEvents(31,2524);
   GE11eta16to21pt15fraction88574->SetPassedEvents(31,2304);
   GE11eta16to21pt15fraction88574->SetTotalEvents(32,2464);
   GE11eta16to21pt15fraction88574->SetPassedEvents(32,2230);
   GE11eta16to21pt15fraction88574->SetTotalEvents(33,2614);
   GE11eta16to21pt15fraction88574->SetPassedEvents(33,2382);
   GE11eta16to21pt15fraction88574->SetTotalEvents(34,2466);
   GE11eta16to21pt15fraction88574->SetPassedEvents(34,2255);
   GE11eta16to21pt15fraction88574->SetTotalEvents(35,2424);
   GE11eta16to21pt15fraction88574->SetPassedEvents(35,2202);
   GE11eta16to21pt15fraction88574->SetTotalEvents(36,2528);
   GE11eta16to21pt15fraction88574->SetPassedEvents(36,2280);
   GE11eta16to21pt15fraction88574->SetTotalEvents(37,2700);
   GE11eta16to21pt15fraction88574->SetPassedEvents(37,2429);
   GE11eta16to21pt15fraction88574->SetTotalEvents(38,2532);
   GE11eta16to21pt15fraction88574->SetPassedEvents(38,2298);
   GE11eta16to21pt15fraction88574->SetTotalEvents(39,2566);
   GE11eta16to21pt15fraction88574->SetPassedEvents(39,2331);
   GE11eta16to21pt15fraction88574->SetTotalEvents(40,2484);
   GE11eta16to21pt15fraction88574->SetPassedEvents(40,2279);
   GE11eta16to21pt15fraction88574->SetTotalEvents(41,2624);
   GE11eta16to21pt15fraction88574->SetPassedEvents(41,2388);
   GE11eta16to21pt15fraction88574->SetTotalEvents(42,2560);
   GE11eta16to21pt15fraction88574->SetPassedEvents(42,2340);
   GE11eta16to21pt15fraction88574->SetTotalEvents(43,2558);
   GE11eta16to21pt15fraction88574->SetPassedEvents(43,2311);
   GE11eta16to21pt15fraction88574->SetTotalEvents(44,2560);
   GE11eta16to21pt15fraction88574->SetPassedEvents(44,2326);
   GE11eta16to21pt15fraction88574->SetTotalEvents(45,2404);
   GE11eta16to21pt15fraction88574->SetPassedEvents(45,2191);
   GE11eta16to21pt15fraction88574->SetTotalEvents(46,2502);
   GE11eta16to21pt15fraction88574->SetPassedEvents(46,2292);
   GE11eta16to21pt15fraction88574->SetTotalEvents(47,2510);
   GE11eta16to21pt15fraction88574->SetPassedEvents(47,2269);
   GE11eta16to21pt15fraction88574->SetTotalEvents(48,2526);
   GE11eta16to21pt15fraction88574->SetPassedEvents(48,2282);
   GE11eta16to21pt15fraction88574->SetTotalEvents(49,2604);
   GE11eta16to21pt15fraction88574->SetPassedEvents(49,2374);
   GE11eta16to21pt15fraction88574->SetTotalEvents(50,2550);
   GE11eta16to21pt15fraction88574->SetPassedEvents(50,2329);
   GE11eta16to21pt15fraction88574->SetTotalEvents(51,26);
   GE11eta16to21pt15fraction88574->SetPassedEvents(51,25);
   GE11eta16to21pt15fraction88574->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt15fraction88574->SetLineColor(ci);
   GE11eta16to21pt15fraction88574->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt15fraction88574->SetMarkerColor(ci);
   GE11eta16to21pt15fraction88574->SetMarkerStyle(26);
   GE11eta16to21pt15fraction88574->Draw("samepz");
   Double_t xAxis575[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE21eta16to21pt15fraction88575 = new TEfficiency("GE21eta16to21pt15fraction88","",50,xAxis575);
   
   GE21eta16to21pt15fraction88575->SetConfidenceLevel(0.6826895);
   GE21eta16to21pt15fraction88575->SetBetaAlpha(1);
   GE21eta16to21pt15fraction88575->SetBetaBeta(1);
   GE21eta16to21pt15fraction88575->SetWeight(1);
   GE21eta16to21pt15fraction88575->SetStatisticOption(0);
   GE21eta16to21pt15fraction88575->SetPosteriorMode(0);
   GE21eta16to21pt15fraction88575->SetShortestInterval(0);
   GE21eta16to21pt15fraction88575->SetTotalEvents(0,0);
   GE21eta16to21pt15fraction88575->SetPassedEvents(0,0);
   GE21eta16to21pt15fraction88575->SetTotalEvents(1,0);
   GE21eta16to21pt15fraction88575->SetPassedEvents(1,0);
   GE21eta16to21pt15fraction88575->SetTotalEvents(2,868);
   GE21eta16to21pt15fraction88575->SetPassedEvents(2,0);
   GE21eta16to21pt15fraction88575->SetTotalEvents(3,1576);
   GE21eta16to21pt15fraction88575->SetPassedEvents(3,1);
   GE21eta16to21pt15fraction88575->SetTotalEvents(4,1626);
   GE21eta16to21pt15fraction88575->SetPassedEvents(4,5);
   GE21eta16to21pt15fraction88575->SetTotalEvents(5,1728);
   GE21eta16to21pt15fraction88575->SetPassedEvents(5,9);
   GE21eta16to21pt15fraction88575->SetTotalEvents(6,1728);
   GE21eta16to21pt15fraction88575->SetPassedEvents(6,20);
   GE21eta16to21pt15fraction88575->SetTotalEvents(7,1742);
   GE21eta16to21pt15fraction88575->SetPassedEvents(7,22);
   GE21eta16to21pt15fraction88575->SetTotalEvents(8,1652);
   GE21eta16to21pt15fraction88575->SetPassedEvents(8,50);
   GE21eta16to21pt15fraction88575->SetTotalEvents(9,1684);
   GE21eta16to21pt15fraction88575->SetPassedEvents(9,118);
   GE21eta16to21pt15fraction88575->SetTotalEvents(10,1736);
   GE21eta16to21pt15fraction88575->SetPassedEvents(10,267);
   GE21eta16to21pt15fraction88575->SetTotalEvents(11,1712);
   GE21eta16to21pt15fraction88575->SetPassedEvents(11,471);
   GE21eta16to21pt15fraction88575->SetTotalEvents(12,1714);
   GE21eta16to21pt15fraction88575->SetPassedEvents(12,727);
   GE21eta16to21pt15fraction88575->SetTotalEvents(13,1694);
   GE21eta16to21pt15fraction88575->SetPassedEvents(13,929);
   GE21eta16to21pt15fraction88575->SetTotalEvents(14,1704);
   GE21eta16to21pt15fraction88575->SetPassedEvents(14,1100);
   GE21eta16to21pt15fraction88575->SetTotalEvents(15,1614);
   GE21eta16to21pt15fraction88575->SetPassedEvents(15,1159);
   GE21eta16to21pt15fraction88575->SetTotalEvents(16,1756);
   GE21eta16to21pt15fraction88575->SetPassedEvents(16,1345);
   GE21eta16to21pt15fraction88575->SetTotalEvents(17,1656);
   GE21eta16to21pt15fraction88575->SetPassedEvents(17,1289);
   GE21eta16to21pt15fraction88575->SetTotalEvents(18,1674);
   GE21eta16to21pt15fraction88575->SetPassedEvents(18,1346);
   GE21eta16to21pt15fraction88575->SetTotalEvents(19,1706);
   GE21eta16to21pt15fraction88575->SetPassedEvents(19,1420);
   GE21eta16to21pt15fraction88575->SetTotalEvents(20,1620);
   GE21eta16to21pt15fraction88575->SetPassedEvents(20,1366);
   GE21eta16to21pt15fraction88575->SetTotalEvents(21,1692);
   GE21eta16to21pt15fraction88575->SetPassedEvents(21,1468);
   GE21eta16to21pt15fraction88575->SetTotalEvents(22,1670);
   GE21eta16to21pt15fraction88575->SetPassedEvents(22,1426);
   GE21eta16to21pt15fraction88575->SetTotalEvents(23,1602);
   GE21eta16to21pt15fraction88575->SetPassedEvents(23,1363);
   GE21eta16to21pt15fraction88575->SetTotalEvents(24,1694);
   GE21eta16to21pt15fraction88575->SetPassedEvents(24,1482);
   GE21eta16to21pt15fraction88575->SetTotalEvents(25,1760);
   GE21eta16to21pt15fraction88575->SetPassedEvents(25,1548);
   GE21eta16to21pt15fraction88575->SetTotalEvents(26,1682);
   GE21eta16to21pt15fraction88575->SetPassedEvents(26,1474);
   GE21eta16to21pt15fraction88575->SetTotalEvents(27,1804);
   GE21eta16to21pt15fraction88575->SetPassedEvents(27,1601);
   GE21eta16to21pt15fraction88575->SetTotalEvents(28,1738);
   GE21eta16to21pt15fraction88575->SetPassedEvents(28,1558);
   GE21eta16to21pt15fraction88575->SetTotalEvents(29,1716);
   GE21eta16to21pt15fraction88575->SetPassedEvents(29,1504);
   GE21eta16to21pt15fraction88575->SetTotalEvents(30,1684);
   GE21eta16to21pt15fraction88575->SetPassedEvents(30,1497);
   GE21eta16to21pt15fraction88575->SetTotalEvents(31,1710);
   GE21eta16to21pt15fraction88575->SetPassedEvents(31,1496);
   GE21eta16to21pt15fraction88575->SetTotalEvents(32,1640);
   GE21eta16to21pt15fraction88575->SetPassedEvents(32,1435);
   GE21eta16to21pt15fraction88575->SetTotalEvents(33,1816);
   GE21eta16to21pt15fraction88575->SetPassedEvents(33,1606);
   GE21eta16to21pt15fraction88575->SetTotalEvents(34,1642);
   GE21eta16to21pt15fraction88575->SetPassedEvents(34,1443);
   GE21eta16to21pt15fraction88575->SetTotalEvents(35,1664);
   GE21eta16to21pt15fraction88575->SetPassedEvents(35,1492);
   GE21eta16to21pt15fraction88575->SetTotalEvents(36,1670);
   GE21eta16to21pt15fraction88575->SetPassedEvents(36,1498);
   GE21eta16to21pt15fraction88575->SetTotalEvents(37,1880);
   GE21eta16to21pt15fraction88575->SetPassedEvents(37,1648);
   GE21eta16to21pt15fraction88575->SetTotalEvents(38,1730);
   GE21eta16to21pt15fraction88575->SetPassedEvents(38,1553);
   GE21eta16to21pt15fraction88575->SetTotalEvents(39,1720);
   GE21eta16to21pt15fraction88575->SetPassedEvents(39,1517);
   GE21eta16to21pt15fraction88575->SetTotalEvents(40,1670);
   GE21eta16to21pt15fraction88575->SetPassedEvents(40,1466);
   GE21eta16to21pt15fraction88575->SetTotalEvents(41,1790);
   GE21eta16to21pt15fraction88575->SetPassedEvents(41,1598);
   GE21eta16to21pt15fraction88575->SetTotalEvents(42,1806);
   GE21eta16to21pt15fraction88575->SetPassedEvents(42,1608);
   GE21eta16to21pt15fraction88575->SetTotalEvents(43,1720);
   GE21eta16to21pt15fraction88575->SetPassedEvents(43,1533);
   GE21eta16to21pt15fraction88575->SetTotalEvents(44,1732);
   GE21eta16to21pt15fraction88575->SetPassedEvents(44,1516);
   GE21eta16to21pt15fraction88575->SetTotalEvents(45,1598);
   GE21eta16to21pt15fraction88575->SetPassedEvents(45,1442);
   GE21eta16to21pt15fraction88575->SetTotalEvents(46,1706);
   GE21eta16to21pt15fraction88575->SetPassedEvents(46,1513);
   GE21eta16to21pt15fraction88575->SetTotalEvents(47,1756);
   GE21eta16to21pt15fraction88575->SetPassedEvents(47,1565);
   GE21eta16to21pt15fraction88575->SetTotalEvents(48,1760);
   GE21eta16to21pt15fraction88575->SetPassedEvents(48,1564);
   GE21eta16to21pt15fraction88575->SetTotalEvents(49,1746);
   GE21eta16to21pt15fraction88575->SetPassedEvents(49,1549);
   GE21eta16to21pt15fraction88575->SetTotalEvents(50,1712);
   GE21eta16to21pt15fraction88575->SetPassedEvents(50,1511);
   GE21eta16to21pt15fraction88575->SetTotalEvents(51,18);
   GE21eta16to21pt15fraction88575->SetPassedEvents(51,15);
   GE21eta16to21pt15fraction88575->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt15fraction88575->SetLineColor(ci);
   GE21eta16to21pt15fraction88575->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt15fraction88575->SetMarkerColor(ci);
   GE21eta16to21pt15fraction88575->SetMarkerStyle(25);
   GE21eta16to21pt15fraction88575->Draw("samepz");
   Double_t xAxis576[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt15fraction88576 = new TEfficiency("hybrideta16to21pt15fraction88","",50,xAxis576);
   
   hybrideta16to21pt15fraction88576->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt15fraction88576->SetBetaAlpha(1);
   hybrideta16to21pt15fraction88576->SetBetaBeta(1);
   hybrideta16to21pt15fraction88576->SetWeight(1);
   hybrideta16to21pt15fraction88576->SetStatisticOption(0);
   hybrideta16to21pt15fraction88576->SetPosteriorMode(0);
   hybrideta16to21pt15fraction88576->SetShortestInterval(0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(0,0);
   hybrideta16to21pt15fraction88576->SetPassedEvents(0,0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(1,0);
   hybrideta16to21pt15fraction88576->SetPassedEvents(1,0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(2,868);
   hybrideta16to21pt15fraction88576->SetPassedEvents(2,0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(3,1576);
   hybrideta16to21pt15fraction88576->SetPassedEvents(3,0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(4,1626);
   hybrideta16to21pt15fraction88576->SetPassedEvents(4,0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(5,1728);
   hybrideta16to21pt15fraction88576->SetPassedEvents(5,0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(6,1728);
   hybrideta16to21pt15fraction88576->SetPassedEvents(6,0);
   hybrideta16to21pt15fraction88576->SetTotalEvents(7,1742);
   hybrideta16to21pt15fraction88576->SetPassedEvents(7,6);
   hybrideta16to21pt15fraction88576->SetTotalEvents(8,1652);
   hybrideta16to21pt15fraction88576->SetPassedEvents(8,18);
   hybrideta16to21pt15fraction88576->SetTotalEvents(9,1684);
   hybrideta16to21pt15fraction88576->SetPassedEvents(9,67);
   hybrideta16to21pt15fraction88576->SetTotalEvents(10,1736);
   hybrideta16to21pt15fraction88576->SetPassedEvents(10,163);
   hybrideta16to21pt15fraction88576->SetTotalEvents(11,1712);
   hybrideta16to21pt15fraction88576->SetPassedEvents(11,326);
   hybrideta16to21pt15fraction88576->SetTotalEvents(12,1714);
   hybrideta16to21pt15fraction88576->SetPassedEvents(12,584);
   hybrideta16to21pt15fraction88576->SetTotalEvents(13,1694);
   hybrideta16to21pt15fraction88576->SetPassedEvents(13,844);
   hybrideta16to21pt15fraction88576->SetTotalEvents(14,1704);
   hybrideta16to21pt15fraction88576->SetPassedEvents(14,1052);
   hybrideta16to21pt15fraction88576->SetTotalEvents(15,1614);
   hybrideta16to21pt15fraction88576->SetPassedEvents(15,1154);
   hybrideta16to21pt15fraction88576->SetTotalEvents(16,1756);
   hybrideta16to21pt15fraction88576->SetPassedEvents(16,1350);
   hybrideta16to21pt15fraction88576->SetTotalEvents(17,1656);
   hybrideta16to21pt15fraction88576->SetPassedEvents(17,1351);
   hybrideta16to21pt15fraction88576->SetTotalEvents(18,1674);
   hybrideta16to21pt15fraction88576->SetPassedEvents(18,1421);
   hybrideta16to21pt15fraction88576->SetTotalEvents(19,1706);
   hybrideta16to21pt15fraction88576->SetPassedEvents(19,1481);
   hybrideta16to21pt15fraction88576->SetTotalEvents(20,1620);
   hybrideta16to21pt15fraction88576->SetPassedEvents(20,1430);
   hybrideta16to21pt15fraction88576->SetTotalEvents(21,1692);
   hybrideta16to21pt15fraction88576->SetPassedEvents(21,1526);
   hybrideta16to21pt15fraction88576->SetTotalEvents(22,1670);
   hybrideta16to21pt15fraction88576->SetPassedEvents(22,1473);
   hybrideta16to21pt15fraction88576->SetTotalEvents(23,1602);
   hybrideta16to21pt15fraction88576->SetPassedEvents(23,1431);
   hybrideta16to21pt15fraction88576->SetTotalEvents(24,1694);
   hybrideta16to21pt15fraction88576->SetPassedEvents(24,1533);
   hybrideta16to21pt15fraction88576->SetTotalEvents(25,1760);
   hybrideta16to21pt15fraction88576->SetPassedEvents(25,1575);
   hybrideta16to21pt15fraction88576->SetTotalEvents(26,1682);
   hybrideta16to21pt15fraction88576->SetPassedEvents(26,1492);
   hybrideta16to21pt15fraction88576->SetTotalEvents(27,1804);
   hybrideta16to21pt15fraction88576->SetPassedEvents(27,1649);
   hybrideta16to21pt15fraction88576->SetTotalEvents(28,1738);
   hybrideta16to21pt15fraction88576->SetPassedEvents(28,1585);
   hybrideta16to21pt15fraction88576->SetTotalEvents(29,1716);
   hybrideta16to21pt15fraction88576->SetPassedEvents(29,1564);
   hybrideta16to21pt15fraction88576->SetTotalEvents(30,1684);
   hybrideta16to21pt15fraction88576->SetPassedEvents(30,1534);
   hybrideta16to21pt15fraction88576->SetTotalEvents(31,1710);
   hybrideta16to21pt15fraction88576->SetPassedEvents(31,1543);
   hybrideta16to21pt15fraction88576->SetTotalEvents(32,1640);
   hybrideta16to21pt15fraction88576->SetPassedEvents(32,1488);
   hybrideta16to21pt15fraction88576->SetTotalEvents(33,1816);
   hybrideta16to21pt15fraction88576->SetPassedEvents(33,1662);
   hybrideta16to21pt15fraction88576->SetTotalEvents(34,1642);
   hybrideta16to21pt15fraction88576->SetPassedEvents(34,1462);
   hybrideta16to21pt15fraction88576->SetTotalEvents(35,1664);
   hybrideta16to21pt15fraction88576->SetPassedEvents(35,1534);
   hybrideta16to21pt15fraction88576->SetTotalEvents(36,1670);
   hybrideta16to21pt15fraction88576->SetPassedEvents(36,1521);
   hybrideta16to21pt15fraction88576->SetTotalEvents(37,1880);
   hybrideta16to21pt15fraction88576->SetPassedEvents(37,1689);
   hybrideta16to21pt15fraction88576->SetTotalEvents(38,1730);
   hybrideta16to21pt15fraction88576->SetPassedEvents(38,1577);
   hybrideta16to21pt15fraction88576->SetTotalEvents(39,1720);
   hybrideta16to21pt15fraction88576->SetPassedEvents(39,1559);
   hybrideta16to21pt15fraction88576->SetTotalEvents(40,1670);
   hybrideta16to21pt15fraction88576->SetPassedEvents(40,1528);
   hybrideta16to21pt15fraction88576->SetTotalEvents(41,1790);
   hybrideta16to21pt15fraction88576->SetPassedEvents(41,1640);
   hybrideta16to21pt15fraction88576->SetTotalEvents(42,1806);
   hybrideta16to21pt15fraction88576->SetPassedEvents(42,1660);
   hybrideta16to21pt15fraction88576->SetTotalEvents(43,1720);
   hybrideta16to21pt15fraction88576->SetPassedEvents(43,1571);
   hybrideta16to21pt15fraction88576->SetTotalEvents(44,1732);
   hybrideta16to21pt15fraction88576->SetPassedEvents(44,1570);
   hybrideta16to21pt15fraction88576->SetTotalEvents(45,1598);
   hybrideta16to21pt15fraction88576->SetPassedEvents(45,1480);
   hybrideta16to21pt15fraction88576->SetTotalEvents(46,1706);
   hybrideta16to21pt15fraction88576->SetPassedEvents(46,1572);
   hybrideta16to21pt15fraction88576->SetTotalEvents(47,1756);
   hybrideta16to21pt15fraction88576->SetPassedEvents(47,1609);
   hybrideta16to21pt15fraction88576->SetTotalEvents(48,1760);
   hybrideta16to21pt15fraction88576->SetPassedEvents(48,1601);
   hybrideta16to21pt15fraction88576->SetTotalEvents(49,1746);
   hybrideta16to21pt15fraction88576->SetPassedEvents(49,1601);
   hybrideta16to21pt15fraction88576->SetTotalEvents(50,1712);
   hybrideta16to21pt15fraction88576->SetPassedEvents(50,1562);
   hybrideta16to21pt15fraction88576->SetTotalEvents(51,18);
   hybrideta16to21pt15fraction88576->SetPassedEvents(51,17);
   hybrideta16to21pt15fraction88576->SetFillColor(19);
   hybrideta16to21pt15fraction88576->SetLineWidth(2);
   hybrideta16to21pt15fraction88576->SetMarkerStyle(21);
   hybrideta16to21pt15fraction88576->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt15fraction88","GE11-ME11","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE21eta16to21pt15fraction88","GE21-ME21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt15fraction88","GE11-ME11+GE21-ME21","pl");
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
