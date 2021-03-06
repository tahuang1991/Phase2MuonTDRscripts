void GEMCSC_TriggerEff_pt15_fraction89_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:08:47 2017) by ROOT version6.08/06
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
   Double_t xAxis359[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__344 = new TH1F("b1__344"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis359);
   b1__344->SetMinimum(0);
   b1__344->SetMaximum(1.05);
   b1__344->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__344->SetLineColor(ci);
   b1__344->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__344->GetXaxis()->SetLabelFont(42);
   b1__344->GetXaxis()->SetLabelSize(0.05);
   b1__344->GetXaxis()->SetTitleSize(0.05);
   b1__344->GetXaxis()->SetTitleFont(42);
   b1__344->GetYaxis()->SetTitle("Trigger efficiency");
   b1__344->GetYaxis()->SetNdivisions(520);
   b1__344->GetYaxis()->SetLabelFont(42);
   b1__344->GetYaxis()->SetLabelSize(0.05);
   b1__344->GetYaxis()->SetTitleSize(0.05);
   b1__344->GetYaxis()->SetTitleOffset(1.1);
   b1__344->GetYaxis()->SetTitleFont(42);
   b1__344->GetZaxis()->SetLabelFont(42);
   b1__344->GetZaxis()->SetLabelSize(0.035);
   b1__344->GetZaxis()->SetTitleSize(0.035);
   b1__344->GetZaxis()->SetTitleFont(42);
   b1__344->Draw("");
   Double_t xAxis637[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone637 = new TEfficiency("hden1_clone","",50,xAxis637);
   
   hden1_clone637->SetConfidenceLevel(0.6826895);
   hden1_clone637->SetBetaAlpha(1);
   hden1_clone637->SetBetaBeta(1);
   hden1_clone637->SetWeight(1);
   hden1_clone637->SetStatisticOption(0);
   hden1_clone637->SetPosteriorMode(0);
   hden1_clone637->SetShortestInterval(0);
   hden1_clone637->SetTotalEvents(0,0);
   hden1_clone637->SetPassedEvents(0,0);
   hden1_clone637->SetTotalEvents(1,0);
   hden1_clone637->SetPassedEvents(1,0);
   hden1_clone637->SetTotalEvents(2,868);
   hden1_clone637->SetPassedEvents(2,212);
   hden1_clone637->SetTotalEvents(3,1576);
   hden1_clone637->SetPassedEvents(3,1204);
   hden1_clone637->SetTotalEvents(4,1626);
   hden1_clone637->SetPassedEvents(4,1553);
   hden1_clone637->SetTotalEvents(5,1728);
   hden1_clone637->SetPassedEvents(5,1685);
   hden1_clone637->SetTotalEvents(6,1728);
   hden1_clone637->SetPassedEvents(6,1688);
   hden1_clone637->SetTotalEvents(7,1742);
   hden1_clone637->SetPassedEvents(7,1710);
   hden1_clone637->SetTotalEvents(8,1652);
   hden1_clone637->SetPassedEvents(8,1625);
   hden1_clone637->SetTotalEvents(9,1684);
   hden1_clone637->SetPassedEvents(9,1642);
   hden1_clone637->SetTotalEvents(10,1736);
   hden1_clone637->SetPassedEvents(10,1708);
   hden1_clone637->SetTotalEvents(11,1712);
   hden1_clone637->SetPassedEvents(11,1676);
   hden1_clone637->SetTotalEvents(12,1714);
   hden1_clone637->SetPassedEvents(12,1687);
   hden1_clone637->SetTotalEvents(13,1694);
   hden1_clone637->SetPassedEvents(13,1657);
   hden1_clone637->SetTotalEvents(14,1704);
   hden1_clone637->SetPassedEvents(14,1680);
   hden1_clone637->SetTotalEvents(15,1614);
   hden1_clone637->SetPassedEvents(15,1582);
   hden1_clone637->SetTotalEvents(16,1756);
   hden1_clone637->SetPassedEvents(16,1729);
   hden1_clone637->SetTotalEvents(17,1656);
   hden1_clone637->SetPassedEvents(17,1629);
   hden1_clone637->SetTotalEvents(18,1674);
   hden1_clone637->SetPassedEvents(18,1643);
   hden1_clone637->SetTotalEvents(19,1706);
   hden1_clone637->SetPassedEvents(19,1681);
   hden1_clone637->SetTotalEvents(20,1620);
   hden1_clone637->SetPassedEvents(20,1589);
   hden1_clone637->SetTotalEvents(21,1692);
   hden1_clone637->SetPassedEvents(21,1662);
   hden1_clone637->SetTotalEvents(22,1670);
   hden1_clone637->SetPassedEvents(22,1642);
   hden1_clone637->SetTotalEvents(23,1602);
   hden1_clone637->SetPassedEvents(23,1577);
   hden1_clone637->SetTotalEvents(24,1694);
   hden1_clone637->SetPassedEvents(24,1669);
   hden1_clone637->SetTotalEvents(25,1760);
   hden1_clone637->SetPassedEvents(25,1726);
   hden1_clone637->SetTotalEvents(26,1682);
   hden1_clone637->SetPassedEvents(26,1654);
   hden1_clone637->SetTotalEvents(27,1804);
   hden1_clone637->SetPassedEvents(27,1777);
   hden1_clone637->SetTotalEvents(28,1738);
   hden1_clone637->SetPassedEvents(28,1721);
   hden1_clone637->SetTotalEvents(29,1716);
   hden1_clone637->SetPassedEvents(29,1688);
   hden1_clone637->SetTotalEvents(30,1684);
   hden1_clone637->SetPassedEvents(30,1659);
   hden1_clone637->SetTotalEvents(31,1710);
   hden1_clone637->SetPassedEvents(31,1681);
   hden1_clone637->SetTotalEvents(32,1640);
   hden1_clone637->SetPassedEvents(32,1616);
   hden1_clone637->SetTotalEvents(33,1816);
   hden1_clone637->SetPassedEvents(33,1792);
   hden1_clone637->SetTotalEvents(34,1642);
   hden1_clone637->SetPassedEvents(34,1597);
   hden1_clone637->SetTotalEvents(35,1664);
   hden1_clone637->SetPassedEvents(35,1641);
   hden1_clone637->SetTotalEvents(36,1670);
   hden1_clone637->SetPassedEvents(36,1642);
   hden1_clone637->SetTotalEvents(37,1880);
   hden1_clone637->SetPassedEvents(37,1840);
   hden1_clone637->SetTotalEvents(38,1730);
   hden1_clone637->SetPassedEvents(38,1705);
   hden1_clone637->SetTotalEvents(39,1720);
   hden1_clone637->SetPassedEvents(39,1699);
   hden1_clone637->SetTotalEvents(40,1670);
   hden1_clone637->SetPassedEvents(40,1650);
   hden1_clone637->SetTotalEvents(41,1790);
   hden1_clone637->SetPassedEvents(41,1759);
   hden1_clone637->SetTotalEvents(42,1806);
   hden1_clone637->SetPassedEvents(42,1779);
   hden1_clone637->SetTotalEvents(43,1720);
   hden1_clone637->SetPassedEvents(43,1696);
   hden1_clone637->SetTotalEvents(44,1732);
   hden1_clone637->SetPassedEvents(44,1702);
   hden1_clone637->SetTotalEvents(45,1598);
   hden1_clone637->SetPassedEvents(45,1575);
   hden1_clone637->SetTotalEvents(46,1706);
   hden1_clone637->SetPassedEvents(46,1671);
   hden1_clone637->SetTotalEvents(47,1756);
   hden1_clone637->SetPassedEvents(47,1723);
   hden1_clone637->SetTotalEvents(48,1760);
   hden1_clone637->SetPassedEvents(48,1728);
   hden1_clone637->SetTotalEvents(49,1746);
   hden1_clone637->SetPassedEvents(49,1716);
   hden1_clone637->SetTotalEvents(50,1712);
   hden1_clone637->SetPassedEvents(50,1682);
   hden1_clone637->SetTotalEvents(51,18);
   hden1_clone637->SetPassedEvents(51,18);
   hden1_clone637->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone637->SetLineColor(ci);
   hden1_clone637->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone637->SetMarkerColor(ci);
   hden1_clone637->SetMarkerStyle(26);
   hden1_clone637->Draw("samepz");
   Double_t xAxis638[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone638 = new TEfficiency("hden0_clone","",50,xAxis638);
   
   hden0_clone638->SetConfidenceLevel(0.6826895);
   hden0_clone638->SetBetaAlpha(1);
   hden0_clone638->SetBetaBeta(1);
   hden0_clone638->SetWeight(1);
   hden0_clone638->SetStatisticOption(0);
   hden0_clone638->SetPosteriorMode(0);
   hden0_clone638->SetShortestInterval(0);
   hden0_clone638->SetTotalEvents(0,0);
   hden0_clone638->SetPassedEvents(0,0);
   hden0_clone638->SetTotalEvents(1,0);
   hden0_clone638->SetPassedEvents(1,0);
   hden0_clone638->SetTotalEvents(2,1308);
   hden0_clone638->SetPassedEvents(2,278);
   hden0_clone638->SetTotalEvents(3,2390);
   hden0_clone638->SetPassedEvents(3,1729);
   hden0_clone638->SetTotalEvents(4,2390);
   hden0_clone638->SetPassedEvents(4,2253);
   hden0_clone638->SetTotalEvents(5,2546);
   hden0_clone638->SetPassedEvents(5,2436);
   hden0_clone638->SetTotalEvents(6,2518);
   hden0_clone638->SetPassedEvents(6,2431);
   hden0_clone638->SetTotalEvents(7,2458);
   hden0_clone638->SetPassedEvents(7,2372);
   hden0_clone638->SetTotalEvents(8,2466);
   hden0_clone638->SetPassedEvents(8,2375);
   hden0_clone638->SetTotalEvents(9,2452);
   hden0_clone638->SetPassedEvents(9,2363);
   hden0_clone638->SetTotalEvents(10,2502);
   hden0_clone638->SetPassedEvents(10,2410);
   hden0_clone638->SetTotalEvents(11,2564);
   hden0_clone638->SetPassedEvents(11,2470);
   hden0_clone638->SetTotalEvents(12,2464);
   hden0_clone638->SetPassedEvents(12,2387);
   hden0_clone638->SetTotalEvents(13,2492);
   hden0_clone638->SetPassedEvents(13,2403);
   hden0_clone638->SetTotalEvents(14,2502);
   hden0_clone638->SetPassedEvents(14,2437);
   hden0_clone638->SetTotalEvents(15,2452);
   hden0_clone638->SetPassedEvents(15,2366);
   hden0_clone638->SetTotalEvents(16,2580);
   hden0_clone638->SetPassedEvents(16,2502);
   hden0_clone638->SetTotalEvents(17,2426);
   hden0_clone638->SetPassedEvents(17,2350);
   hden0_clone638->SetTotalEvents(18,2490);
   hden0_clone638->SetPassedEvents(18,2412);
   hden0_clone638->SetTotalEvents(19,2510);
   hden0_clone638->SetPassedEvents(19,2427);
   hden0_clone638->SetTotalEvents(20,2456);
   hden0_clone638->SetPassedEvents(20,2360);
   hden0_clone638->SetTotalEvents(21,2470);
   hden0_clone638->SetPassedEvents(21,2396);
   hden0_clone638->SetTotalEvents(22,2420);
   hden0_clone638->SetPassedEvents(22,2347);
   hden0_clone638->SetTotalEvents(23,2420);
   hden0_clone638->SetPassedEvents(23,2348);
   hden0_clone638->SetTotalEvents(24,2564);
   hden0_clone638->SetPassedEvents(24,2486);
   hden0_clone638->SetTotalEvents(25,2544);
   hden0_clone638->SetPassedEvents(25,2456);
   hden0_clone638->SetTotalEvents(26,2398);
   hden0_clone638->SetPassedEvents(26,2324);
   hden0_clone638->SetTotalEvents(27,2598);
   hden0_clone638->SetPassedEvents(27,2535);
   hden0_clone638->SetTotalEvents(28,2528);
   hden0_clone638->SetPassedEvents(28,2452);
   hden0_clone638->SetTotalEvents(29,2510);
   hden0_clone638->SetPassedEvents(29,2433);
   hden0_clone638->SetTotalEvents(30,2464);
   hden0_clone638->SetPassedEvents(30,2381);
   hden0_clone638->SetTotalEvents(31,2524);
   hden0_clone638->SetPassedEvents(31,2466);
   hden0_clone638->SetTotalEvents(32,2464);
   hden0_clone638->SetPassedEvents(32,2387);
   hden0_clone638->SetTotalEvents(33,2614);
   hden0_clone638->SetPassedEvents(33,2540);
   hden0_clone638->SetTotalEvents(34,2466);
   hden0_clone638->SetPassedEvents(34,2396);
   hden0_clone638->SetTotalEvents(35,2424);
   hden0_clone638->SetPassedEvents(35,2357);
   hden0_clone638->SetTotalEvents(36,2528);
   hden0_clone638->SetPassedEvents(36,2446);
   hden0_clone638->SetTotalEvents(37,2700);
   hden0_clone638->SetPassedEvents(37,2610);
   hden0_clone638->SetTotalEvents(38,2532);
   hden0_clone638->SetPassedEvents(38,2453);
   hden0_clone638->SetTotalEvents(39,2566);
   hden0_clone638->SetPassedEvents(39,2487);
   hden0_clone638->SetTotalEvents(40,2484);
   hden0_clone638->SetPassedEvents(40,2421);
   hden0_clone638->SetTotalEvents(41,2624);
   hden0_clone638->SetPassedEvents(41,2543);
   hden0_clone638->SetTotalEvents(42,2560);
   hden0_clone638->SetPassedEvents(42,2480);
   hden0_clone638->SetTotalEvents(43,2558);
   hden0_clone638->SetPassedEvents(43,2477);
   hden0_clone638->SetTotalEvents(44,2560);
   hden0_clone638->SetPassedEvents(44,2477);
   hden0_clone638->SetTotalEvents(45,2404);
   hden0_clone638->SetPassedEvents(45,2320);
   hden0_clone638->SetTotalEvents(46,2502);
   hden0_clone638->SetPassedEvents(46,2419);
   hden0_clone638->SetTotalEvents(47,2510);
   hden0_clone638->SetPassedEvents(47,2413);
   hden0_clone638->SetTotalEvents(48,2526);
   hden0_clone638->SetPassedEvents(48,2431);
   hden0_clone638->SetTotalEvents(49,2604);
   hden0_clone638->SetPassedEvents(49,2517);
   hden0_clone638->SetTotalEvents(50,2550);
   hden0_clone638->SetPassedEvents(50,2471);
   hden0_clone638->SetTotalEvents(51,26);
   hden0_clone638->SetPassedEvents(51,25);
   hden0_clone638->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone638->SetLineColor(ci);
   hden0_clone638->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone638->SetMarkerColor(ci);
   hden0_clone638->SetMarkerStyle(25);
   hden0_clone638->Draw("samepz");
   Double_t xAxis639[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt15fraction89639 = new TEfficiency("hybrideta16to21pt15fraction89","",50,xAxis639);
   
   hybrideta16to21pt15fraction89639->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt15fraction89639->SetBetaAlpha(1);
   hybrideta16to21pt15fraction89639->SetBetaBeta(1);
   hybrideta16to21pt15fraction89639->SetWeight(1);
   hybrideta16to21pt15fraction89639->SetStatisticOption(0);
   hybrideta16to21pt15fraction89639->SetPosteriorMode(0);
   hybrideta16to21pt15fraction89639->SetShortestInterval(0);
   hybrideta16to21pt15fraction89639->SetTotalEvents(0,0);
   hybrideta16to21pt15fraction89639->SetPassedEvents(0,0);
   hybrideta16to21pt15fraction89639->SetTotalEvents(1,0);
   hybrideta16to21pt15fraction89639->SetPassedEvents(1,0);
   hybrideta16to21pt15fraction89639->SetTotalEvents(2,868);
   hybrideta16to21pt15fraction89639->SetPassedEvents(2,0);
   hybrideta16to21pt15fraction89639->SetTotalEvents(3,1576);
   hybrideta16to21pt15fraction89639->SetPassedEvents(3,0);
   hybrideta16to21pt15fraction89639->SetTotalEvents(4,1626);
   hybrideta16to21pt15fraction89639->SetPassedEvents(4,0);
   hybrideta16to21pt15fraction89639->SetTotalEvents(5,1728);
   hybrideta16to21pt15fraction89639->SetPassedEvents(5,0);
   hybrideta16to21pt15fraction89639->SetTotalEvents(6,1728);
   hybrideta16to21pt15fraction89639->SetPassedEvents(6,2);
   hybrideta16to21pt15fraction89639->SetTotalEvents(7,1742);
   hybrideta16to21pt15fraction89639->SetPassedEvents(7,7);
   hybrideta16to21pt15fraction89639->SetTotalEvents(8,1652);
   hybrideta16to21pt15fraction89639->SetPassedEvents(8,20);
   hybrideta16to21pt15fraction89639->SetTotalEvents(9,1684);
   hybrideta16to21pt15fraction89639->SetPassedEvents(9,76);
   hybrideta16to21pt15fraction89639->SetTotalEvents(10,1736);
   hybrideta16to21pt15fraction89639->SetPassedEvents(10,177);
   hybrideta16to21pt15fraction89639->SetTotalEvents(11,1712);
   hybrideta16to21pt15fraction89639->SetPassedEvents(11,350);
   hybrideta16to21pt15fraction89639->SetTotalEvents(12,1714);
   hybrideta16to21pt15fraction89639->SetPassedEvents(12,614);
   hybrideta16to21pt15fraction89639->SetTotalEvents(13,1694);
   hybrideta16to21pt15fraction89639->SetPassedEvents(13,874);
   hybrideta16to21pt15fraction89639->SetTotalEvents(14,1704);
   hybrideta16to21pt15fraction89639->SetPassedEvents(14,1080);
   hybrideta16to21pt15fraction89639->SetTotalEvents(15,1614);
   hybrideta16to21pt15fraction89639->SetPassedEvents(15,1172);
   hybrideta16to21pt15fraction89639->SetTotalEvents(16,1756);
   hybrideta16to21pt15fraction89639->SetPassedEvents(16,1373);
   hybrideta16to21pt15fraction89639->SetTotalEvents(17,1656);
   hybrideta16to21pt15fraction89639->SetPassedEvents(17,1363);
   hybrideta16to21pt15fraction89639->SetTotalEvents(18,1674);
   hybrideta16to21pt15fraction89639->SetPassedEvents(18,1417);
   hybrideta16to21pt15fraction89639->SetTotalEvents(19,1706);
   hybrideta16to21pt15fraction89639->SetPassedEvents(19,1488);
   hybrideta16to21pt15fraction89639->SetTotalEvents(20,1620);
   hybrideta16to21pt15fraction89639->SetPassedEvents(20,1430);
   hybrideta16to21pt15fraction89639->SetTotalEvents(21,1692);
   hybrideta16to21pt15fraction89639->SetPassedEvents(21,1523);
   hybrideta16to21pt15fraction89639->SetTotalEvents(22,1670);
   hybrideta16to21pt15fraction89639->SetPassedEvents(22,1476);
   hybrideta16to21pt15fraction89639->SetTotalEvents(23,1602);
   hybrideta16to21pt15fraction89639->SetPassedEvents(23,1430);
   hybrideta16to21pt15fraction89639->SetTotalEvents(24,1694);
   hybrideta16to21pt15fraction89639->SetPassedEvents(24,1539);
   hybrideta16to21pt15fraction89639->SetTotalEvents(25,1760);
   hybrideta16to21pt15fraction89639->SetPassedEvents(25,1581);
   hybrideta16to21pt15fraction89639->SetTotalEvents(26,1682);
   hybrideta16to21pt15fraction89639->SetPassedEvents(26,1500);
   hybrideta16to21pt15fraction89639->SetTotalEvents(27,1804);
   hybrideta16to21pt15fraction89639->SetPassedEvents(27,1646);
   hybrideta16to21pt15fraction89639->SetTotalEvents(28,1738);
   hybrideta16to21pt15fraction89639->SetPassedEvents(28,1587);
   hybrideta16to21pt15fraction89639->SetTotalEvents(29,1716);
   hybrideta16to21pt15fraction89639->SetPassedEvents(29,1560);
   hybrideta16to21pt15fraction89639->SetTotalEvents(30,1684);
   hybrideta16to21pt15fraction89639->SetPassedEvents(30,1537);
   hybrideta16to21pt15fraction89639->SetTotalEvents(31,1710);
   hybrideta16to21pt15fraction89639->SetPassedEvents(31,1547);
   hybrideta16to21pt15fraction89639->SetTotalEvents(32,1640);
   hybrideta16to21pt15fraction89639->SetPassedEvents(32,1485);
   hybrideta16to21pt15fraction89639->SetTotalEvents(33,1816);
   hybrideta16to21pt15fraction89639->SetPassedEvents(33,1660);
   hybrideta16to21pt15fraction89639->SetTotalEvents(34,1642);
   hybrideta16to21pt15fraction89639->SetPassedEvents(34,1467);
   hybrideta16to21pt15fraction89639->SetTotalEvents(35,1664);
   hybrideta16to21pt15fraction89639->SetPassedEvents(35,1534);
   hybrideta16to21pt15fraction89639->SetTotalEvents(36,1670);
   hybrideta16to21pt15fraction89639->SetPassedEvents(36,1523);
   hybrideta16to21pt15fraction89639->SetTotalEvents(37,1880);
   hybrideta16to21pt15fraction89639->SetPassedEvents(37,1693);
   hybrideta16to21pt15fraction89639->SetTotalEvents(38,1730);
   hybrideta16to21pt15fraction89639->SetPassedEvents(38,1582);
   hybrideta16to21pt15fraction89639->SetTotalEvents(39,1720);
   hybrideta16to21pt15fraction89639->SetPassedEvents(39,1563);
   hybrideta16to21pt15fraction89639->SetTotalEvents(40,1670);
   hybrideta16to21pt15fraction89639->SetPassedEvents(40,1524);
   hybrideta16to21pt15fraction89639->SetTotalEvents(41,1790);
   hybrideta16to21pt15fraction89639->SetPassedEvents(41,1650);
   hybrideta16to21pt15fraction89639->SetTotalEvents(42,1806);
   hybrideta16to21pt15fraction89639->SetPassedEvents(42,1665);
   hybrideta16to21pt15fraction89639->SetTotalEvents(43,1720);
   hybrideta16to21pt15fraction89639->SetPassedEvents(43,1581);
   hybrideta16to21pt15fraction89639->SetTotalEvents(44,1732);
   hybrideta16to21pt15fraction89639->SetPassedEvents(44,1566);
   hybrideta16to21pt15fraction89639->SetTotalEvents(45,1598);
   hybrideta16to21pt15fraction89639->SetPassedEvents(45,1481);
   hybrideta16to21pt15fraction89639->SetTotalEvents(46,1706);
   hybrideta16to21pt15fraction89639->SetPassedEvents(46,1567);
   hybrideta16to21pt15fraction89639->SetTotalEvents(47,1756);
   hybrideta16to21pt15fraction89639->SetPassedEvents(47,1612);
   hybrideta16to21pt15fraction89639->SetTotalEvents(48,1760);
   hybrideta16to21pt15fraction89639->SetPassedEvents(48,1603);
   hybrideta16to21pt15fraction89639->SetTotalEvents(49,1746);
   hybrideta16to21pt15fraction89639->SetPassedEvents(49,1606);
   hybrideta16to21pt15fraction89639->SetTotalEvents(50,1712);
   hybrideta16to21pt15fraction89639->SetPassedEvents(50,1564);
   hybrideta16to21pt15fraction89639->SetTotalEvents(51,18);
   hybrideta16to21pt15fraction89639->SetPassedEvents(51,17);
   hybrideta16to21pt15fraction89639->SetFillColor(19);
   hybrideta16to21pt15fraction89639->SetLineWidth(2);
   hybrideta16to21pt15fraction89639->SetMarkerStyle(21);
   hybrideta16to21pt15fraction89639->Draw("samepz");
   Double_t xAxis640[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt15fraction89640 = new TEfficiency("GE11eta16to21pt15fraction89","",50,xAxis640);
   
   GE11eta16to21pt15fraction89640->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt15fraction89640->SetBetaAlpha(1);
   GE11eta16to21pt15fraction89640->SetBetaBeta(1);
   GE11eta16to21pt15fraction89640->SetWeight(1);
   GE11eta16to21pt15fraction89640->SetStatisticOption(0);
   GE11eta16to21pt15fraction89640->SetPosteriorMode(0);
   GE11eta16to21pt15fraction89640->SetShortestInterval(0);
   GE11eta16to21pt15fraction89640->SetTotalEvents(0,0);
   GE11eta16to21pt15fraction89640->SetPassedEvents(0,0);
   GE11eta16to21pt15fraction89640->SetTotalEvents(1,0);
   GE11eta16to21pt15fraction89640->SetPassedEvents(1,0);
   GE11eta16to21pt15fraction89640->SetTotalEvents(2,1308);
   GE11eta16to21pt15fraction89640->SetPassedEvents(2,0);
   GE11eta16to21pt15fraction89640->SetTotalEvents(3,2390);
   GE11eta16to21pt15fraction89640->SetPassedEvents(3,0);
   GE11eta16to21pt15fraction89640->SetTotalEvents(4,2390);
   GE11eta16to21pt15fraction89640->SetPassedEvents(4,0);
   GE11eta16to21pt15fraction89640->SetTotalEvents(5,2546);
   GE11eta16to21pt15fraction89640->SetPassedEvents(5,0);
   GE11eta16to21pt15fraction89640->SetTotalEvents(6,2518);
   GE11eta16to21pt15fraction89640->SetPassedEvents(6,1);
   GE11eta16to21pt15fraction89640->SetTotalEvents(7,2458);
   GE11eta16to21pt15fraction89640->SetPassedEvents(7,8);
   GE11eta16to21pt15fraction89640->SetTotalEvents(8,2466);
   GE11eta16to21pt15fraction89640->SetPassedEvents(8,25);
   GE11eta16to21pt15fraction89640->SetTotalEvents(9,2452);
   GE11eta16to21pt15fraction89640->SetPassedEvents(9,71);
   GE11eta16to21pt15fraction89640->SetTotalEvents(10,2502);
   GE11eta16to21pt15fraction89640->SetPassedEvents(10,188);
   GE11eta16to21pt15fraction89640->SetTotalEvents(11,2564);
   GE11eta16to21pt15fraction89640->SetPassedEvents(11,403);
   GE11eta16to21pt15fraction89640->SetTotalEvents(12,2464);
   GE11eta16to21pt15fraction89640->SetPassedEvents(12,694);
   GE11eta16to21pt15fraction89640->SetTotalEvents(13,2492);
   GE11eta16to21pt15fraction89640->SetPassedEvents(13,1092);
   GE11eta16to21pt15fraction89640->SetTotalEvents(14,2502);
   GE11eta16to21pt15fraction89640->SetPassedEvents(14,1394);
   GE11eta16to21pt15fraction89640->SetTotalEvents(15,2452);
   GE11eta16to21pt15fraction89640->SetPassedEvents(15,1622);
   GE11eta16to21pt15fraction89640->SetTotalEvents(16,2580);
   GE11eta16to21pt15fraction89640->SetPassedEvents(16,1928);
   GE11eta16to21pt15fraction89640->SetTotalEvents(17,2426);
   GE11eta16to21pt15fraction89640->SetPassedEvents(17,1941);
   GE11eta16to21pt15fraction89640->SetTotalEvents(18,2490);
   GE11eta16to21pt15fraction89640->SetPassedEvents(18,2058);
   GE11eta16to21pt15fraction89640->SetTotalEvents(19,2510);
   GE11eta16to21pt15fraction89640->SetPassedEvents(19,2168);
   GE11eta16to21pt15fraction89640->SetTotalEvents(20,2456);
   GE11eta16to21pt15fraction89640->SetPassedEvents(20,2122);
   GE11eta16to21pt15fraction89640->SetTotalEvents(21,2470);
   GE11eta16to21pt15fraction89640->SetPassedEvents(21,2156);
   GE11eta16to21pt15fraction89640->SetTotalEvents(22,2420);
   GE11eta16to21pt15fraction89640->SetPassedEvents(22,2128);
   GE11eta16to21pt15fraction89640->SetTotalEvents(23,2420);
   GE11eta16to21pt15fraction89640->SetPassedEvents(23,2137);
   GE11eta16to21pt15fraction89640->SetTotalEvents(24,2564);
   GE11eta16to21pt15fraction89640->SetPassedEvents(24,2303);
   GE11eta16to21pt15fraction89640->SetTotalEvents(25,2544);
   GE11eta16to21pt15fraction89640->SetPassedEvents(25,2263);
   GE11eta16to21pt15fraction89640->SetTotalEvents(26,2398);
   GE11eta16to21pt15fraction89640->SetPassedEvents(26,2142);
   GE11eta16to21pt15fraction89640->SetTotalEvents(27,2598);
   GE11eta16to21pt15fraction89640->SetPassedEvents(27,2382);
   GE11eta16to21pt15fraction89640->SetTotalEvents(28,2528);
   GE11eta16to21pt15fraction89640->SetPassedEvents(28,2261);
   GE11eta16to21pt15fraction89640->SetTotalEvents(29,2510);
   GE11eta16to21pt15fraction89640->SetPassedEvents(29,2267);
   GE11eta16to21pt15fraction89640->SetTotalEvents(30,2464);
   GE11eta16to21pt15fraction89640->SetPassedEvents(30,2216);
   GE11eta16to21pt15fraction89640->SetTotalEvents(31,2524);
   GE11eta16to21pt15fraction89640->SetPassedEvents(31,2304);
   GE11eta16to21pt15fraction89640->SetTotalEvents(32,2464);
   GE11eta16to21pt15fraction89640->SetPassedEvents(32,2230);
   GE11eta16to21pt15fraction89640->SetTotalEvents(33,2614);
   GE11eta16to21pt15fraction89640->SetPassedEvents(33,2382);
   GE11eta16to21pt15fraction89640->SetTotalEvents(34,2466);
   GE11eta16to21pt15fraction89640->SetPassedEvents(34,2255);
   GE11eta16to21pt15fraction89640->SetTotalEvents(35,2424);
   GE11eta16to21pt15fraction89640->SetPassedEvents(35,2202);
   GE11eta16to21pt15fraction89640->SetTotalEvents(36,2528);
   GE11eta16to21pt15fraction89640->SetPassedEvents(36,2280);
   GE11eta16to21pt15fraction89640->SetTotalEvents(37,2700);
   GE11eta16to21pt15fraction89640->SetPassedEvents(37,2429);
   GE11eta16to21pt15fraction89640->SetTotalEvents(38,2532);
   GE11eta16to21pt15fraction89640->SetPassedEvents(38,2298);
   GE11eta16to21pt15fraction89640->SetTotalEvents(39,2566);
   GE11eta16to21pt15fraction89640->SetPassedEvents(39,2331);
   GE11eta16to21pt15fraction89640->SetTotalEvents(40,2484);
   GE11eta16to21pt15fraction89640->SetPassedEvents(40,2279);
   GE11eta16to21pt15fraction89640->SetTotalEvents(41,2624);
   GE11eta16to21pt15fraction89640->SetPassedEvents(41,2388);
   GE11eta16to21pt15fraction89640->SetTotalEvents(42,2560);
   GE11eta16to21pt15fraction89640->SetPassedEvents(42,2340);
   GE11eta16to21pt15fraction89640->SetTotalEvents(43,2558);
   GE11eta16to21pt15fraction89640->SetPassedEvents(43,2311);
   GE11eta16to21pt15fraction89640->SetTotalEvents(44,2560);
   GE11eta16to21pt15fraction89640->SetPassedEvents(44,2326);
   GE11eta16to21pt15fraction89640->SetTotalEvents(45,2404);
   GE11eta16to21pt15fraction89640->SetPassedEvents(45,2191);
   GE11eta16to21pt15fraction89640->SetTotalEvents(46,2502);
   GE11eta16to21pt15fraction89640->SetPassedEvents(46,2292);
   GE11eta16to21pt15fraction89640->SetTotalEvents(47,2510);
   GE11eta16to21pt15fraction89640->SetPassedEvents(47,2269);
   GE11eta16to21pt15fraction89640->SetTotalEvents(48,2526);
   GE11eta16to21pt15fraction89640->SetPassedEvents(48,2282);
   GE11eta16to21pt15fraction89640->SetTotalEvents(49,2604);
   GE11eta16to21pt15fraction89640->SetPassedEvents(49,2374);
   GE11eta16to21pt15fraction89640->SetTotalEvents(50,2550);
   GE11eta16to21pt15fraction89640->SetPassedEvents(50,2329);
   GE11eta16to21pt15fraction89640->SetTotalEvents(51,26);
   GE11eta16to21pt15fraction89640->SetPassedEvents(51,25);
   GE11eta16to21pt15fraction89640->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction89640->SetLineColor(ci);
   GE11eta16to21pt15fraction89640->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction89640->SetMarkerColor(ci);
   GE11eta16to21pt15fraction89640->SetMarkerStyle(20);
   GE11eta16to21pt15fraction89640->Draw("samepz");
   Double_t xAxis641[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone641 = new TEfficiency("hden0_clone","",50,xAxis641);
   
   hden0_clone641->SetConfidenceLevel(0.6826895);
   hden0_clone641->SetBetaAlpha(1);
   hden0_clone641->SetBetaBeta(1);
   hden0_clone641->SetWeight(1);
   hden0_clone641->SetStatisticOption(0);
   hden0_clone641->SetPosteriorMode(0);
   hden0_clone641->SetShortestInterval(0);
   hden0_clone641->SetTotalEvents(0,0);
   hden0_clone641->SetPassedEvents(0,0);
   hden0_clone641->SetTotalEvents(1,0);
   hden0_clone641->SetPassedEvents(1,0);
   hden0_clone641->SetTotalEvents(2,230);
   hden0_clone641->SetPassedEvents(2,0);
   hden0_clone641->SetTotalEvents(3,440);
   hden0_clone641->SetPassedEvents(3,1);
   hden0_clone641->SetTotalEvents(4,436);
   hden0_clone641->SetPassedEvents(4,0);
   hden0_clone641->SetTotalEvents(5,440);
   hden0_clone641->SetPassedEvents(5,3);
   hden0_clone641->SetTotalEvents(6,430);
   hden0_clone641->SetPassedEvents(6,7);
   hden0_clone641->SetTotalEvents(7,492);
   hden0_clone641->SetPassedEvents(7,14);
   hden0_clone641->SetTotalEvents(8,510);
   hden0_clone641->SetPassedEvents(8,21);
   hden0_clone641->SetTotalEvents(9,444);
   hden0_clone641->SetPassedEvents(9,39);
   hden0_clone641->SetTotalEvents(10,406);
   hden0_clone641->SetPassedEvents(10,80);
   hden0_clone641->SetTotalEvents(11,376);
   hden0_clone641->SetPassedEvents(11,134);
   hden0_clone641->SetTotalEvents(12,460);
   hden0_clone641->SetPassedEvents(12,217);
   hden0_clone641->SetTotalEvents(13,488);
   hden0_clone641->SetPassedEvents(13,275);
   hden0_clone641->SetTotalEvents(14,422);
   hden0_clone641->SetPassedEvents(14,296);
   hden0_clone641->SetTotalEvents(15,484);
   hden0_clone641->SetPassedEvents(15,367);
   hden0_clone641->SetTotalEvents(16,424);
   hden0_clone641->SetPassedEvents(16,337);
   hden0_clone641->SetTotalEvents(17,434);
   hden0_clone641->SetPassedEvents(17,347);
   hden0_clone641->SetTotalEvents(18,474);
   hden0_clone641->SetPassedEvents(18,407);
   hden0_clone641->SetTotalEvents(19,446);
   hden0_clone641->SetPassedEvents(19,371);
   hden0_clone641->SetTotalEvents(20,476);
   hden0_clone641->SetPassedEvents(20,391);
   hden0_clone641->SetTotalEvents(21,404);
   hden0_clone641->SetPassedEvents(21,339);
   hden0_clone641->SetTotalEvents(22,438);
   hden0_clone641->SetPassedEvents(22,366);
   hden0_clone641->SetTotalEvents(23,470);
   hden0_clone641->SetPassedEvents(23,379);
   hden0_clone641->SetTotalEvents(24,424);
   hden0_clone641->SetPassedEvents(24,362);
   hden0_clone641->SetTotalEvents(25,474);
   hden0_clone641->SetPassedEvents(25,396);
   hden0_clone641->SetTotalEvents(26,468);
   hden0_clone641->SetPassedEvents(26,377);
   hden0_clone641->SetTotalEvents(27,398);
   hden0_clone641->SetPassedEvents(27,346);
   hden0_clone641->SetTotalEvents(28,468);
   hden0_clone641->SetPassedEvents(28,391);
   hden0_clone641->SetTotalEvents(29,390);
   hden0_clone641->SetPassedEvents(29,331);
   hden0_clone641->SetTotalEvents(30,412);
   hden0_clone641->SetPassedEvents(30,353);
   hden0_clone641->SetTotalEvents(31,458);
   hden0_clone641->SetPassedEvents(31,396);
   hden0_clone641->SetTotalEvents(32,436);
   hden0_clone641->SetPassedEvents(32,367);
   hden0_clone641->SetTotalEvents(33,460);
   hden0_clone641->SetPassedEvents(33,396);
   hden0_clone641->SetTotalEvents(34,456);
   hden0_clone641->SetPassedEvents(34,391);
   hden0_clone641->SetTotalEvents(35,442);
   hden0_clone641->SetPassedEvents(35,385);
   hden0_clone641->SetTotalEvents(36,416);
   hden0_clone641->SetPassedEvents(36,358);
   hden0_clone641->SetTotalEvents(37,430);
   hden0_clone641->SetPassedEvents(37,351);
   hden0_clone641->SetTotalEvents(38,406);
   hden0_clone641->SetPassedEvents(38,347);
   hden0_clone641->SetTotalEvents(39,472);
   hden0_clone641->SetPassedEvents(39,404);
   hden0_clone641->SetTotalEvents(40,486);
   hden0_clone641->SetPassedEvents(40,417);
   hden0_clone641->SetTotalEvents(41,404);
   hden0_clone641->SetPassedEvents(41,334);
   hden0_clone641->SetTotalEvents(42,418);
   hden0_clone641->SetPassedEvents(42,356);
   hden0_clone641->SetTotalEvents(43,428);
   hden0_clone641->SetPassedEvents(43,374);
   hden0_clone641->SetTotalEvents(44,416);
   hden0_clone641->SetPassedEvents(44,342);
   hden0_clone641->SetTotalEvents(45,438);
   hden0_clone641->SetPassedEvents(45,370);
   hden0_clone641->SetTotalEvents(46,416);
   hden0_clone641->SetPassedEvents(46,347);
   hden0_clone641->SetTotalEvents(47,406);
   hden0_clone641->SetPassedEvents(47,343);
   hden0_clone641->SetTotalEvents(48,470);
   hden0_clone641->SetPassedEvents(48,393);
   hden0_clone641->SetTotalEvents(49,442);
   hden0_clone641->SetPassedEvents(49,382);
   hden0_clone641->SetTotalEvents(50,494);
   hden0_clone641->SetPassedEvents(50,422);
   hden0_clone641->SetTotalEvents(51,0);
   hden0_clone641->SetPassedEvents(51,0);
   hden0_clone641->SetFillColor(19);
   hden0_clone641->SetLineWidth(2);
   hden0_clone641->SetMarkerStyle(24);
   hden0_clone641->Draw("samepz");
   
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
   entry=leg->AddEntry("hybrideta16to21pt15fraction89","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt15fraction89","CSC+GE11: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");

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
