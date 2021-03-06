void GEMCSC_TriggerEff_pt15_fraction76_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:05:27 2017) by ROOT version6.08/06
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
   Double_t xAxis47[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__45 = new TH1F("b1__45"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis47);
   b1__45->SetMinimum(0);
   b1__45->SetMaximum(1.05);
   b1__45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__45->SetLineColor(ci);
   b1__45->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__45->GetXaxis()->SetLabelFont(42);
   b1__45->GetXaxis()->SetLabelSize(0.05);
   b1__45->GetXaxis()->SetTitleSize(0.05);
   b1__45->GetXaxis()->SetTitleFont(42);
   b1__45->GetYaxis()->SetTitle("Trigger efficiency");
   b1__45->GetYaxis()->SetNdivisions(520);
   b1__45->GetYaxis()->SetLabelFont(42);
   b1__45->GetYaxis()->SetLabelSize(0.05);
   b1__45->GetYaxis()->SetTitleSize(0.05);
   b1__45->GetYaxis()->SetTitleOffset(1.1);
   b1__45->GetYaxis()->SetTitleFont(42);
   b1__45->GetZaxis()->SetLabelFont(42);
   b1__45->GetZaxis()->SetLabelSize(0.035);
   b1__45->GetZaxis()->SetTitleSize(0.035);
   b1__45->GetZaxis()->SetTitleFont(42);
   b1__45->Draw("");
   Double_t xAxis78[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone78 = new TEfficiency("hden1_clone","",50,xAxis78);
   
   hden1_clone78->SetConfidenceLevel(0.6826895);
   hden1_clone78->SetBetaAlpha(1);
   hden1_clone78->SetBetaBeta(1);
   hden1_clone78->SetWeight(1);
   hden1_clone78->SetStatisticOption(0);
   hden1_clone78->SetPosteriorMode(0);
   hden1_clone78->SetShortestInterval(0);
   hden1_clone78->SetTotalEvents(0,0);
   hden1_clone78->SetPassedEvents(0,0);
   hden1_clone78->SetTotalEvents(1,0);
   hden1_clone78->SetPassedEvents(1,0);
   hden1_clone78->SetTotalEvents(2,868);
   hden1_clone78->SetPassedEvents(2,212);
   hden1_clone78->SetTotalEvents(3,1576);
   hden1_clone78->SetPassedEvents(3,1204);
   hden1_clone78->SetTotalEvents(4,1626);
   hden1_clone78->SetPassedEvents(4,1553);
   hden1_clone78->SetTotalEvents(5,1728);
   hden1_clone78->SetPassedEvents(5,1685);
   hden1_clone78->SetTotalEvents(6,1728);
   hden1_clone78->SetPassedEvents(6,1688);
   hden1_clone78->SetTotalEvents(7,1742);
   hden1_clone78->SetPassedEvents(7,1710);
   hden1_clone78->SetTotalEvents(8,1652);
   hden1_clone78->SetPassedEvents(8,1625);
   hden1_clone78->SetTotalEvents(9,1684);
   hden1_clone78->SetPassedEvents(9,1642);
   hden1_clone78->SetTotalEvents(10,1736);
   hden1_clone78->SetPassedEvents(10,1708);
   hden1_clone78->SetTotalEvents(11,1712);
   hden1_clone78->SetPassedEvents(11,1676);
   hden1_clone78->SetTotalEvents(12,1714);
   hden1_clone78->SetPassedEvents(12,1687);
   hden1_clone78->SetTotalEvents(13,1694);
   hden1_clone78->SetPassedEvents(13,1657);
   hden1_clone78->SetTotalEvents(14,1704);
   hden1_clone78->SetPassedEvents(14,1680);
   hden1_clone78->SetTotalEvents(15,1614);
   hden1_clone78->SetPassedEvents(15,1582);
   hden1_clone78->SetTotalEvents(16,1756);
   hden1_clone78->SetPassedEvents(16,1729);
   hden1_clone78->SetTotalEvents(17,1656);
   hden1_clone78->SetPassedEvents(17,1629);
   hden1_clone78->SetTotalEvents(18,1674);
   hden1_clone78->SetPassedEvents(18,1643);
   hden1_clone78->SetTotalEvents(19,1706);
   hden1_clone78->SetPassedEvents(19,1681);
   hden1_clone78->SetTotalEvents(20,1620);
   hden1_clone78->SetPassedEvents(20,1589);
   hden1_clone78->SetTotalEvents(21,1692);
   hden1_clone78->SetPassedEvents(21,1662);
   hden1_clone78->SetTotalEvents(22,1670);
   hden1_clone78->SetPassedEvents(22,1642);
   hden1_clone78->SetTotalEvents(23,1602);
   hden1_clone78->SetPassedEvents(23,1577);
   hden1_clone78->SetTotalEvents(24,1694);
   hden1_clone78->SetPassedEvents(24,1669);
   hden1_clone78->SetTotalEvents(25,1760);
   hden1_clone78->SetPassedEvents(25,1726);
   hden1_clone78->SetTotalEvents(26,1682);
   hden1_clone78->SetPassedEvents(26,1654);
   hden1_clone78->SetTotalEvents(27,1804);
   hden1_clone78->SetPassedEvents(27,1777);
   hden1_clone78->SetTotalEvents(28,1738);
   hden1_clone78->SetPassedEvents(28,1721);
   hden1_clone78->SetTotalEvents(29,1716);
   hden1_clone78->SetPassedEvents(29,1688);
   hden1_clone78->SetTotalEvents(30,1684);
   hden1_clone78->SetPassedEvents(30,1659);
   hden1_clone78->SetTotalEvents(31,1710);
   hden1_clone78->SetPassedEvents(31,1681);
   hden1_clone78->SetTotalEvents(32,1640);
   hden1_clone78->SetPassedEvents(32,1616);
   hden1_clone78->SetTotalEvents(33,1816);
   hden1_clone78->SetPassedEvents(33,1792);
   hden1_clone78->SetTotalEvents(34,1642);
   hden1_clone78->SetPassedEvents(34,1597);
   hden1_clone78->SetTotalEvents(35,1664);
   hden1_clone78->SetPassedEvents(35,1641);
   hden1_clone78->SetTotalEvents(36,1670);
   hden1_clone78->SetPassedEvents(36,1642);
   hden1_clone78->SetTotalEvents(37,1880);
   hden1_clone78->SetPassedEvents(37,1840);
   hden1_clone78->SetTotalEvents(38,1730);
   hden1_clone78->SetPassedEvents(38,1705);
   hden1_clone78->SetTotalEvents(39,1720);
   hden1_clone78->SetPassedEvents(39,1699);
   hden1_clone78->SetTotalEvents(40,1670);
   hden1_clone78->SetPassedEvents(40,1650);
   hden1_clone78->SetTotalEvents(41,1790);
   hden1_clone78->SetPassedEvents(41,1759);
   hden1_clone78->SetTotalEvents(42,1806);
   hden1_clone78->SetPassedEvents(42,1779);
   hden1_clone78->SetTotalEvents(43,1720);
   hden1_clone78->SetPassedEvents(43,1696);
   hden1_clone78->SetTotalEvents(44,1732);
   hden1_clone78->SetPassedEvents(44,1702);
   hden1_clone78->SetTotalEvents(45,1598);
   hden1_clone78->SetPassedEvents(45,1575);
   hden1_clone78->SetTotalEvents(46,1706);
   hden1_clone78->SetPassedEvents(46,1671);
   hden1_clone78->SetTotalEvents(47,1756);
   hden1_clone78->SetPassedEvents(47,1723);
   hden1_clone78->SetTotalEvents(48,1760);
   hden1_clone78->SetPassedEvents(48,1728);
   hden1_clone78->SetTotalEvents(49,1746);
   hden1_clone78->SetPassedEvents(49,1716);
   hden1_clone78->SetTotalEvents(50,1712);
   hden1_clone78->SetPassedEvents(50,1682);
   hden1_clone78->SetTotalEvents(51,18);
   hden1_clone78->SetPassedEvents(51,18);
   hden1_clone78->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone78->SetLineColor(ci);
   hden1_clone78->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone78->SetMarkerColor(ci);
   hden1_clone78->SetMarkerStyle(26);
   hden1_clone78->Draw("samepz");
   Double_t xAxis79[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone79 = new TEfficiency("hden0_clone","",50,xAxis79);
   
   hden0_clone79->SetConfidenceLevel(0.6826895);
   hden0_clone79->SetBetaAlpha(1);
   hden0_clone79->SetBetaBeta(1);
   hden0_clone79->SetWeight(1);
   hden0_clone79->SetStatisticOption(0);
   hden0_clone79->SetPosteriorMode(0);
   hden0_clone79->SetShortestInterval(0);
   hden0_clone79->SetTotalEvents(0,0);
   hden0_clone79->SetPassedEvents(0,0);
   hden0_clone79->SetTotalEvents(1,0);
   hden0_clone79->SetPassedEvents(1,0);
   hden0_clone79->SetTotalEvents(2,1308);
   hden0_clone79->SetPassedEvents(2,278);
   hden0_clone79->SetTotalEvents(3,2390);
   hden0_clone79->SetPassedEvents(3,1729);
   hden0_clone79->SetTotalEvents(4,2390);
   hden0_clone79->SetPassedEvents(4,2253);
   hden0_clone79->SetTotalEvents(5,2546);
   hden0_clone79->SetPassedEvents(5,2436);
   hden0_clone79->SetTotalEvents(6,2518);
   hden0_clone79->SetPassedEvents(6,2431);
   hden0_clone79->SetTotalEvents(7,2458);
   hden0_clone79->SetPassedEvents(7,2372);
   hden0_clone79->SetTotalEvents(8,2466);
   hden0_clone79->SetPassedEvents(8,2375);
   hden0_clone79->SetTotalEvents(9,2452);
   hden0_clone79->SetPassedEvents(9,2363);
   hden0_clone79->SetTotalEvents(10,2502);
   hden0_clone79->SetPassedEvents(10,2410);
   hden0_clone79->SetTotalEvents(11,2564);
   hden0_clone79->SetPassedEvents(11,2470);
   hden0_clone79->SetTotalEvents(12,2464);
   hden0_clone79->SetPassedEvents(12,2387);
   hden0_clone79->SetTotalEvents(13,2492);
   hden0_clone79->SetPassedEvents(13,2403);
   hden0_clone79->SetTotalEvents(14,2502);
   hden0_clone79->SetPassedEvents(14,2437);
   hden0_clone79->SetTotalEvents(15,2452);
   hden0_clone79->SetPassedEvents(15,2366);
   hden0_clone79->SetTotalEvents(16,2580);
   hden0_clone79->SetPassedEvents(16,2502);
   hden0_clone79->SetTotalEvents(17,2426);
   hden0_clone79->SetPassedEvents(17,2350);
   hden0_clone79->SetTotalEvents(18,2490);
   hden0_clone79->SetPassedEvents(18,2412);
   hden0_clone79->SetTotalEvents(19,2510);
   hden0_clone79->SetPassedEvents(19,2427);
   hden0_clone79->SetTotalEvents(20,2456);
   hden0_clone79->SetPassedEvents(20,2360);
   hden0_clone79->SetTotalEvents(21,2470);
   hden0_clone79->SetPassedEvents(21,2396);
   hden0_clone79->SetTotalEvents(22,2420);
   hden0_clone79->SetPassedEvents(22,2347);
   hden0_clone79->SetTotalEvents(23,2420);
   hden0_clone79->SetPassedEvents(23,2348);
   hden0_clone79->SetTotalEvents(24,2564);
   hden0_clone79->SetPassedEvents(24,2486);
   hden0_clone79->SetTotalEvents(25,2544);
   hden0_clone79->SetPassedEvents(25,2456);
   hden0_clone79->SetTotalEvents(26,2398);
   hden0_clone79->SetPassedEvents(26,2324);
   hden0_clone79->SetTotalEvents(27,2598);
   hden0_clone79->SetPassedEvents(27,2535);
   hden0_clone79->SetTotalEvents(28,2528);
   hden0_clone79->SetPassedEvents(28,2452);
   hden0_clone79->SetTotalEvents(29,2510);
   hden0_clone79->SetPassedEvents(29,2433);
   hden0_clone79->SetTotalEvents(30,2464);
   hden0_clone79->SetPassedEvents(30,2381);
   hden0_clone79->SetTotalEvents(31,2524);
   hden0_clone79->SetPassedEvents(31,2466);
   hden0_clone79->SetTotalEvents(32,2464);
   hden0_clone79->SetPassedEvents(32,2387);
   hden0_clone79->SetTotalEvents(33,2614);
   hden0_clone79->SetPassedEvents(33,2540);
   hden0_clone79->SetTotalEvents(34,2466);
   hden0_clone79->SetPassedEvents(34,2396);
   hden0_clone79->SetTotalEvents(35,2424);
   hden0_clone79->SetPassedEvents(35,2357);
   hden0_clone79->SetTotalEvents(36,2528);
   hden0_clone79->SetPassedEvents(36,2446);
   hden0_clone79->SetTotalEvents(37,2700);
   hden0_clone79->SetPassedEvents(37,2610);
   hden0_clone79->SetTotalEvents(38,2532);
   hden0_clone79->SetPassedEvents(38,2453);
   hden0_clone79->SetTotalEvents(39,2566);
   hden0_clone79->SetPassedEvents(39,2487);
   hden0_clone79->SetTotalEvents(40,2484);
   hden0_clone79->SetPassedEvents(40,2421);
   hden0_clone79->SetTotalEvents(41,2624);
   hden0_clone79->SetPassedEvents(41,2543);
   hden0_clone79->SetTotalEvents(42,2560);
   hden0_clone79->SetPassedEvents(42,2480);
   hden0_clone79->SetTotalEvents(43,2558);
   hden0_clone79->SetPassedEvents(43,2477);
   hden0_clone79->SetTotalEvents(44,2560);
   hden0_clone79->SetPassedEvents(44,2477);
   hden0_clone79->SetTotalEvents(45,2404);
   hden0_clone79->SetPassedEvents(45,2320);
   hden0_clone79->SetTotalEvents(46,2502);
   hden0_clone79->SetPassedEvents(46,2419);
   hden0_clone79->SetTotalEvents(47,2510);
   hden0_clone79->SetPassedEvents(47,2413);
   hden0_clone79->SetTotalEvents(48,2526);
   hden0_clone79->SetPassedEvents(48,2431);
   hden0_clone79->SetTotalEvents(49,2604);
   hden0_clone79->SetPassedEvents(49,2517);
   hden0_clone79->SetTotalEvents(50,2550);
   hden0_clone79->SetPassedEvents(50,2471);
   hden0_clone79->SetTotalEvents(51,26);
   hden0_clone79->SetPassedEvents(51,25);
   hden0_clone79->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone79->SetLineColor(ci);
   hden0_clone79->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone79->SetMarkerColor(ci);
   hden0_clone79->SetMarkerStyle(25);
   hden0_clone79->Draw("samepz");
   Double_t xAxis80[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt15fraction7680 = new TEfficiency("hybrideta16to21pt15fraction76","",50,xAxis80);
   
   hybrideta16to21pt15fraction7680->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt15fraction7680->SetBetaAlpha(1);
   hybrideta16to21pt15fraction7680->SetBetaBeta(1);
   hybrideta16to21pt15fraction7680->SetWeight(1);
   hybrideta16to21pt15fraction7680->SetStatisticOption(0);
   hybrideta16to21pt15fraction7680->SetPosteriorMode(0);
   hybrideta16to21pt15fraction7680->SetShortestInterval(0);
   hybrideta16to21pt15fraction7680->SetTotalEvents(0,0);
   hybrideta16to21pt15fraction7680->SetPassedEvents(0,0);
   hybrideta16to21pt15fraction7680->SetTotalEvents(1,0);
   hybrideta16to21pt15fraction7680->SetPassedEvents(1,0);
   hybrideta16to21pt15fraction7680->SetTotalEvents(2,868);
   hybrideta16to21pt15fraction7680->SetPassedEvents(2,0);
   hybrideta16to21pt15fraction7680->SetTotalEvents(3,1576);
   hybrideta16to21pt15fraction7680->SetPassedEvents(3,0);
   hybrideta16to21pt15fraction7680->SetTotalEvents(4,1626);
   hybrideta16to21pt15fraction7680->SetPassedEvents(4,0);
   hybrideta16to21pt15fraction7680->SetTotalEvents(5,1728);
   hybrideta16to21pt15fraction7680->SetPassedEvents(5,0);
   hybrideta16to21pt15fraction7680->SetTotalEvents(6,1728);
   hybrideta16to21pt15fraction7680->SetPassedEvents(6,2);
   hybrideta16to21pt15fraction7680->SetTotalEvents(7,1742);
   hybrideta16to21pt15fraction7680->SetPassedEvents(7,9);
   hybrideta16to21pt15fraction7680->SetTotalEvents(8,1652);
   hybrideta16to21pt15fraction7680->SetPassedEvents(8,15);
   hybrideta16to21pt15fraction7680->SetTotalEvents(9,1684);
   hybrideta16to21pt15fraction7680->SetPassedEvents(9,57);
   hybrideta16to21pt15fraction7680->SetTotalEvents(10,1736);
   hybrideta16to21pt15fraction7680->SetPassedEvents(10,108);
   hybrideta16to21pt15fraction7680->SetTotalEvents(11,1712);
   hybrideta16to21pt15fraction7680->SetPassedEvents(11,244);
   hybrideta16to21pt15fraction7680->SetTotalEvents(12,1714);
   hybrideta16to21pt15fraction7680->SetPassedEvents(12,435);
   hybrideta16to21pt15fraction7680->SetTotalEvents(13,1694);
   hybrideta16to21pt15fraction7680->SetPassedEvents(13,660);
   hybrideta16to21pt15fraction7680->SetTotalEvents(14,1704);
   hybrideta16to21pt15fraction7680->SetPassedEvents(14,859);
   hybrideta16to21pt15fraction7680->SetTotalEvents(15,1614);
   hybrideta16to21pt15fraction7680->SetPassedEvents(15,984);
   hybrideta16to21pt15fraction7680->SetTotalEvents(16,1756);
   hybrideta16to21pt15fraction7680->SetPassedEvents(16,1184);
   hybrideta16to21pt15fraction7680->SetTotalEvents(17,1656);
   hybrideta16to21pt15fraction7680->SetPassedEvents(17,1216);
   hybrideta16to21pt15fraction7680->SetTotalEvents(18,1674);
   hybrideta16to21pt15fraction7680->SetPassedEvents(18,1296);
   hybrideta16to21pt15fraction7680->SetTotalEvents(19,1706);
   hybrideta16to21pt15fraction7680->SetPassedEvents(19,1390);
   hybrideta16to21pt15fraction7680->SetTotalEvents(20,1620);
   hybrideta16to21pt15fraction7680->SetPassedEvents(20,1339);
   hybrideta16to21pt15fraction7680->SetTotalEvents(21,1692);
   hybrideta16to21pt15fraction7680->SetPassedEvents(21,1472);
   hybrideta16to21pt15fraction7680->SetTotalEvents(22,1670);
   hybrideta16to21pt15fraction7680->SetPassedEvents(22,1413);
   hybrideta16to21pt15fraction7680->SetTotalEvents(23,1602);
   hybrideta16to21pt15fraction7680->SetPassedEvents(23,1378);
   hybrideta16to21pt15fraction7680->SetTotalEvents(24,1694);
   hybrideta16to21pt15fraction7680->SetPassedEvents(24,1496);
   hybrideta16to21pt15fraction7680->SetTotalEvents(25,1760);
   hybrideta16to21pt15fraction7680->SetPassedEvents(25,1523);
   hybrideta16to21pt15fraction7680->SetTotalEvents(26,1682);
   hybrideta16to21pt15fraction7680->SetPassedEvents(26,1453);
   hybrideta16to21pt15fraction7680->SetTotalEvents(27,1804);
   hybrideta16to21pt15fraction7680->SetPassedEvents(27,1596);
   hybrideta16to21pt15fraction7680->SetTotalEvents(28,1738);
   hybrideta16to21pt15fraction7680->SetPassedEvents(28,1542);
   hybrideta16to21pt15fraction7680->SetTotalEvents(29,1716);
   hybrideta16to21pt15fraction7680->SetPassedEvents(29,1525);
   hybrideta16to21pt15fraction7680->SetTotalEvents(30,1684);
   hybrideta16to21pt15fraction7680->SetPassedEvents(30,1492);
   hybrideta16to21pt15fraction7680->SetTotalEvents(31,1710);
   hybrideta16to21pt15fraction7680->SetPassedEvents(31,1509);
   hybrideta16to21pt15fraction7680->SetTotalEvents(32,1640);
   hybrideta16to21pt15fraction7680->SetPassedEvents(32,1451);
   hybrideta16to21pt15fraction7680->SetTotalEvents(33,1816);
   hybrideta16to21pt15fraction7680->SetPassedEvents(33,1642);
   hybrideta16to21pt15fraction7680->SetTotalEvents(34,1642);
   hybrideta16to21pt15fraction7680->SetPassedEvents(34,1434);
   hybrideta16to21pt15fraction7680->SetTotalEvents(35,1664);
   hybrideta16to21pt15fraction7680->SetPassedEvents(35,1507);
   hybrideta16to21pt15fraction7680->SetTotalEvents(36,1670);
   hybrideta16to21pt15fraction7680->SetPassedEvents(36,1488);
   hybrideta16to21pt15fraction7680->SetTotalEvents(37,1880);
   hybrideta16to21pt15fraction7680->SetPassedEvents(37,1646);
   hybrideta16to21pt15fraction7680->SetTotalEvents(38,1730);
   hybrideta16to21pt15fraction7680->SetPassedEvents(38,1543);
   hybrideta16to21pt15fraction7680->SetTotalEvents(39,1720);
   hybrideta16to21pt15fraction7680->SetPassedEvents(39,1521);
   hybrideta16to21pt15fraction7680->SetTotalEvents(40,1670);
   hybrideta16to21pt15fraction7680->SetPassedEvents(40,1492);
   hybrideta16to21pt15fraction7680->SetTotalEvents(41,1790);
   hybrideta16to21pt15fraction7680->SetPassedEvents(41,1613);
   hybrideta16to21pt15fraction7680->SetTotalEvents(42,1806);
   hybrideta16to21pt15fraction7680->SetPassedEvents(42,1627);
   hybrideta16to21pt15fraction7680->SetTotalEvents(43,1720);
   hybrideta16to21pt15fraction7680->SetPassedEvents(43,1539);
   hybrideta16to21pt15fraction7680->SetTotalEvents(44,1732);
   hybrideta16to21pt15fraction7680->SetPassedEvents(44,1534);
   hybrideta16to21pt15fraction7680->SetTotalEvents(45,1598);
   hybrideta16to21pt15fraction7680->SetPassedEvents(45,1445);
   hybrideta16to21pt15fraction7680->SetTotalEvents(46,1706);
   hybrideta16to21pt15fraction7680->SetPassedEvents(46,1543);
   hybrideta16to21pt15fraction7680->SetTotalEvents(47,1756);
   hybrideta16to21pt15fraction7680->SetPassedEvents(47,1583);
   hybrideta16to21pt15fraction7680->SetTotalEvents(48,1760);
   hybrideta16to21pt15fraction7680->SetPassedEvents(48,1578);
   hybrideta16to21pt15fraction7680->SetTotalEvents(49,1746);
   hybrideta16to21pt15fraction7680->SetPassedEvents(49,1581);
   hybrideta16to21pt15fraction7680->SetTotalEvents(50,1712);
   hybrideta16to21pt15fraction7680->SetPassedEvents(50,1527);
   hybrideta16to21pt15fraction7680->SetTotalEvents(51,18);
   hybrideta16to21pt15fraction7680->SetPassedEvents(51,16);
   hybrideta16to21pt15fraction7680->SetFillColor(19);
   hybrideta16to21pt15fraction7680->SetLineWidth(2);
   hybrideta16to21pt15fraction7680->SetMarkerStyle(21);
   hybrideta16to21pt15fraction7680->Draw("samepz");
   Double_t xAxis81[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt15fraction7681 = new TEfficiency("GE11eta16to21pt15fraction76","",50,xAxis81);
   
   GE11eta16to21pt15fraction7681->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt15fraction7681->SetBetaAlpha(1);
   GE11eta16to21pt15fraction7681->SetBetaBeta(1);
   GE11eta16to21pt15fraction7681->SetWeight(1);
   GE11eta16to21pt15fraction7681->SetStatisticOption(0);
   GE11eta16to21pt15fraction7681->SetPosteriorMode(0);
   GE11eta16to21pt15fraction7681->SetShortestInterval(0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(0,0);
   GE11eta16to21pt15fraction7681->SetPassedEvents(0,0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(1,0);
   GE11eta16to21pt15fraction7681->SetPassedEvents(1,0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(2,1308);
   GE11eta16to21pt15fraction7681->SetPassedEvents(2,0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(3,2390);
   GE11eta16to21pt15fraction7681->SetPassedEvents(3,0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(4,2390);
   GE11eta16to21pt15fraction7681->SetPassedEvents(4,0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(5,2546);
   GE11eta16to21pt15fraction7681->SetPassedEvents(5,0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(6,2518);
   GE11eta16to21pt15fraction7681->SetPassedEvents(6,0);
   GE11eta16to21pt15fraction7681->SetTotalEvents(7,2458);
   GE11eta16to21pt15fraction7681->SetPassedEvents(7,6);
   GE11eta16to21pt15fraction7681->SetTotalEvents(8,2466);
   GE11eta16to21pt15fraction7681->SetPassedEvents(8,15);
   GE11eta16to21pt15fraction7681->SetTotalEvents(9,2452);
   GE11eta16to21pt15fraction7681->SetPassedEvents(9,44);
   GE11eta16to21pt15fraction7681->SetTotalEvents(10,2502);
   GE11eta16to21pt15fraction7681->SetPassedEvents(10,118);
   GE11eta16to21pt15fraction7681->SetTotalEvents(11,2564);
   GE11eta16to21pt15fraction7681->SetPassedEvents(11,271);
   GE11eta16to21pt15fraction7681->SetTotalEvents(12,2464);
   GE11eta16to21pt15fraction7681->SetPassedEvents(12,492);
   GE11eta16to21pt15fraction7681->SetTotalEvents(13,2492);
   GE11eta16to21pt15fraction7681->SetPassedEvents(13,811);
   GE11eta16to21pt15fraction7681->SetTotalEvents(14,2502);
   GE11eta16to21pt15fraction7681->SetPassedEvents(14,1131);
   GE11eta16to21pt15fraction7681->SetTotalEvents(15,2452);
   GE11eta16to21pt15fraction7681->SetPassedEvents(15,1347);
   GE11eta16to21pt15fraction7681->SetTotalEvents(16,2580);
   GE11eta16to21pt15fraction7681->SetPassedEvents(16,1688);
   GE11eta16to21pt15fraction7681->SetTotalEvents(17,2426);
   GE11eta16to21pt15fraction7681->SetPassedEvents(17,1763);
   GE11eta16to21pt15fraction7681->SetTotalEvents(18,2490);
   GE11eta16to21pt15fraction7681->SetPassedEvents(18,1939);
   GE11eta16to21pt15fraction7681->SetTotalEvents(19,2510);
   GE11eta16to21pt15fraction7681->SetPassedEvents(19,2094);
   GE11eta16to21pt15fraction7681->SetTotalEvents(20,2456);
   GE11eta16to21pt15fraction7681->SetPassedEvents(20,2068);
   GE11eta16to21pt15fraction7681->SetTotalEvents(21,2470);
   GE11eta16to21pt15fraction7681->SetPassedEvents(21,2118);
   GE11eta16to21pt15fraction7681->SetTotalEvents(22,2420);
   GE11eta16to21pt15fraction7681->SetPassedEvents(22,2108);
   GE11eta16to21pt15fraction7681->SetTotalEvents(23,2420);
   GE11eta16to21pt15fraction7681->SetPassedEvents(23,2118);
   GE11eta16to21pt15fraction7681->SetTotalEvents(24,2564);
   GE11eta16to21pt15fraction7681->SetPassedEvents(24,2293);
   GE11eta16to21pt15fraction7681->SetTotalEvents(25,2544);
   GE11eta16to21pt15fraction7681->SetPassedEvents(25,2244);
   GE11eta16to21pt15fraction7681->SetTotalEvents(26,2398);
   GE11eta16to21pt15fraction7681->SetPassedEvents(26,2134);
   GE11eta16to21pt15fraction7681->SetTotalEvents(27,2598);
   GE11eta16to21pt15fraction7681->SetPassedEvents(27,2373);
   GE11eta16to21pt15fraction7681->SetTotalEvents(28,2528);
   GE11eta16to21pt15fraction7681->SetPassedEvents(28,2254);
   GE11eta16to21pt15fraction7681->SetTotalEvents(29,2510);
   GE11eta16to21pt15fraction7681->SetPassedEvents(29,2255);
   GE11eta16to21pt15fraction7681->SetTotalEvents(30,2464);
   GE11eta16to21pt15fraction7681->SetPassedEvents(30,2207);
   GE11eta16to21pt15fraction7681->SetTotalEvents(31,2524);
   GE11eta16to21pt15fraction7681->SetPassedEvents(31,2296);
   GE11eta16to21pt15fraction7681->SetTotalEvents(32,2464);
   GE11eta16to21pt15fraction7681->SetPassedEvents(32,2222);
   GE11eta16to21pt15fraction7681->SetTotalEvents(33,2614);
   GE11eta16to21pt15fraction7681->SetPassedEvents(33,2375);
   GE11eta16to21pt15fraction7681->SetTotalEvents(34,2466);
   GE11eta16to21pt15fraction7681->SetPassedEvents(34,2248);
   GE11eta16to21pt15fraction7681->SetTotalEvents(35,2424);
   GE11eta16to21pt15fraction7681->SetPassedEvents(35,2194);
   GE11eta16to21pt15fraction7681->SetTotalEvents(36,2528);
   GE11eta16to21pt15fraction7681->SetPassedEvents(36,2274);
   GE11eta16to21pt15fraction7681->SetTotalEvents(37,2700);
   GE11eta16to21pt15fraction7681->SetPassedEvents(37,2428);
   GE11eta16to21pt15fraction7681->SetTotalEvents(38,2532);
   GE11eta16to21pt15fraction7681->SetPassedEvents(38,2291);
   GE11eta16to21pt15fraction7681->SetTotalEvents(39,2566);
   GE11eta16to21pt15fraction7681->SetPassedEvents(39,2325);
   GE11eta16to21pt15fraction7681->SetTotalEvents(40,2484);
   GE11eta16to21pt15fraction7681->SetPassedEvents(40,2274);
   GE11eta16to21pt15fraction7681->SetTotalEvents(41,2624);
   GE11eta16to21pt15fraction7681->SetPassedEvents(41,2382);
   GE11eta16to21pt15fraction7681->SetTotalEvents(42,2560);
   GE11eta16to21pt15fraction7681->SetPassedEvents(42,2333);
   GE11eta16to21pt15fraction7681->SetTotalEvents(43,2558);
   GE11eta16to21pt15fraction7681->SetPassedEvents(43,2306);
   GE11eta16to21pt15fraction7681->SetTotalEvents(44,2560);
   GE11eta16to21pt15fraction7681->SetPassedEvents(44,2319);
   GE11eta16to21pt15fraction7681->SetTotalEvents(45,2404);
   GE11eta16to21pt15fraction7681->SetPassedEvents(45,2187);
   GE11eta16to21pt15fraction7681->SetTotalEvents(46,2502);
   GE11eta16to21pt15fraction7681->SetPassedEvents(46,2288);
   GE11eta16to21pt15fraction7681->SetTotalEvents(47,2510);
   GE11eta16to21pt15fraction7681->SetPassedEvents(47,2264);
   GE11eta16to21pt15fraction7681->SetTotalEvents(48,2526);
   GE11eta16to21pt15fraction7681->SetPassedEvents(48,2277);
   GE11eta16to21pt15fraction7681->SetTotalEvents(49,2604);
   GE11eta16to21pt15fraction7681->SetPassedEvents(49,2369);
   GE11eta16to21pt15fraction7681->SetTotalEvents(50,2550);
   GE11eta16to21pt15fraction7681->SetPassedEvents(50,2321);
   GE11eta16to21pt15fraction7681->SetTotalEvents(51,26);
   GE11eta16to21pt15fraction7681->SetPassedEvents(51,25);
   GE11eta16to21pt15fraction7681->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction7681->SetLineColor(ci);
   GE11eta16to21pt15fraction7681->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction7681->SetMarkerColor(ci);
   GE11eta16to21pt15fraction7681->SetMarkerStyle(20);
   GE11eta16to21pt15fraction7681->Draw("samepz");
   Double_t xAxis82[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone82 = new TEfficiency("hden0_clone","",50,xAxis82);
   
   hden0_clone82->SetConfidenceLevel(0.6826895);
   hden0_clone82->SetBetaAlpha(1);
   hden0_clone82->SetBetaBeta(1);
   hden0_clone82->SetWeight(1);
   hden0_clone82->SetStatisticOption(0);
   hden0_clone82->SetPosteriorMode(0);
   hden0_clone82->SetShortestInterval(0);
   hden0_clone82->SetTotalEvents(0,0);
   hden0_clone82->SetPassedEvents(0,0);
   hden0_clone82->SetTotalEvents(1,0);
   hden0_clone82->SetPassedEvents(1,0);
   hden0_clone82->SetTotalEvents(2,230);
   hden0_clone82->SetPassedEvents(2,0);
   hden0_clone82->SetTotalEvents(3,440);
   hden0_clone82->SetPassedEvents(3,1);
   hden0_clone82->SetTotalEvents(4,436);
   hden0_clone82->SetPassedEvents(4,0);
   hden0_clone82->SetTotalEvents(5,440);
   hden0_clone82->SetPassedEvents(5,3);
   hden0_clone82->SetTotalEvents(6,430);
   hden0_clone82->SetPassedEvents(6,7);
   hden0_clone82->SetTotalEvents(7,492);
   hden0_clone82->SetPassedEvents(7,14);
   hden0_clone82->SetTotalEvents(8,510);
   hden0_clone82->SetPassedEvents(8,21);
   hden0_clone82->SetTotalEvents(9,444);
   hden0_clone82->SetPassedEvents(9,39);
   hden0_clone82->SetTotalEvents(10,406);
   hden0_clone82->SetPassedEvents(10,80);
   hden0_clone82->SetTotalEvents(11,376);
   hden0_clone82->SetPassedEvents(11,134);
   hden0_clone82->SetTotalEvents(12,460);
   hden0_clone82->SetPassedEvents(12,217);
   hden0_clone82->SetTotalEvents(13,488);
   hden0_clone82->SetPassedEvents(13,275);
   hden0_clone82->SetTotalEvents(14,422);
   hden0_clone82->SetPassedEvents(14,296);
   hden0_clone82->SetTotalEvents(15,484);
   hden0_clone82->SetPassedEvents(15,367);
   hden0_clone82->SetTotalEvents(16,424);
   hden0_clone82->SetPassedEvents(16,337);
   hden0_clone82->SetTotalEvents(17,434);
   hden0_clone82->SetPassedEvents(17,347);
   hden0_clone82->SetTotalEvents(18,474);
   hden0_clone82->SetPassedEvents(18,407);
   hden0_clone82->SetTotalEvents(19,446);
   hden0_clone82->SetPassedEvents(19,371);
   hden0_clone82->SetTotalEvents(20,476);
   hden0_clone82->SetPassedEvents(20,391);
   hden0_clone82->SetTotalEvents(21,404);
   hden0_clone82->SetPassedEvents(21,339);
   hden0_clone82->SetTotalEvents(22,438);
   hden0_clone82->SetPassedEvents(22,366);
   hden0_clone82->SetTotalEvents(23,470);
   hden0_clone82->SetPassedEvents(23,379);
   hden0_clone82->SetTotalEvents(24,424);
   hden0_clone82->SetPassedEvents(24,362);
   hden0_clone82->SetTotalEvents(25,474);
   hden0_clone82->SetPassedEvents(25,396);
   hden0_clone82->SetTotalEvents(26,468);
   hden0_clone82->SetPassedEvents(26,377);
   hden0_clone82->SetTotalEvents(27,398);
   hden0_clone82->SetPassedEvents(27,346);
   hden0_clone82->SetTotalEvents(28,468);
   hden0_clone82->SetPassedEvents(28,391);
   hden0_clone82->SetTotalEvents(29,390);
   hden0_clone82->SetPassedEvents(29,331);
   hden0_clone82->SetTotalEvents(30,412);
   hden0_clone82->SetPassedEvents(30,353);
   hden0_clone82->SetTotalEvents(31,458);
   hden0_clone82->SetPassedEvents(31,396);
   hden0_clone82->SetTotalEvents(32,436);
   hden0_clone82->SetPassedEvents(32,367);
   hden0_clone82->SetTotalEvents(33,460);
   hden0_clone82->SetPassedEvents(33,396);
   hden0_clone82->SetTotalEvents(34,456);
   hden0_clone82->SetPassedEvents(34,391);
   hden0_clone82->SetTotalEvents(35,442);
   hden0_clone82->SetPassedEvents(35,385);
   hden0_clone82->SetTotalEvents(36,416);
   hden0_clone82->SetPassedEvents(36,358);
   hden0_clone82->SetTotalEvents(37,430);
   hden0_clone82->SetPassedEvents(37,351);
   hden0_clone82->SetTotalEvents(38,406);
   hden0_clone82->SetPassedEvents(38,347);
   hden0_clone82->SetTotalEvents(39,472);
   hden0_clone82->SetPassedEvents(39,404);
   hden0_clone82->SetTotalEvents(40,486);
   hden0_clone82->SetPassedEvents(40,417);
   hden0_clone82->SetTotalEvents(41,404);
   hden0_clone82->SetPassedEvents(41,334);
   hden0_clone82->SetTotalEvents(42,418);
   hden0_clone82->SetPassedEvents(42,356);
   hden0_clone82->SetTotalEvents(43,428);
   hden0_clone82->SetPassedEvents(43,374);
   hden0_clone82->SetTotalEvents(44,416);
   hden0_clone82->SetPassedEvents(44,342);
   hden0_clone82->SetTotalEvents(45,438);
   hden0_clone82->SetPassedEvents(45,370);
   hden0_clone82->SetTotalEvents(46,416);
   hden0_clone82->SetPassedEvents(46,347);
   hden0_clone82->SetTotalEvents(47,406);
   hden0_clone82->SetPassedEvents(47,343);
   hden0_clone82->SetTotalEvents(48,470);
   hden0_clone82->SetPassedEvents(48,393);
   hden0_clone82->SetTotalEvents(49,442);
   hden0_clone82->SetPassedEvents(49,382);
   hden0_clone82->SetTotalEvents(50,494);
   hden0_clone82->SetPassedEvents(50,422);
   hden0_clone82->SetTotalEvents(51,0);
   hden0_clone82->SetPassedEvents(51,0);
   hden0_clone82->SetFillColor(19);
   hden0_clone82->SetLineWidth(2);
   hden0_clone82->SetMarkerStyle(24);
   hden0_clone82->Draw("samepz");
   
   TLegend *leg = new TLegend(0.4,0.2,0.9,0.55,NULL,"brNDC");
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
   entry=leg->AddEntry("hden1_clone","L1Mu w/ GE21 (inputs to L1Trk+L1Mu)","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","L1Mu w/o GE21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt15fraction76","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt15fraction76","CSC+GE11: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","CSC only: EMTFQ>=12","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
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
