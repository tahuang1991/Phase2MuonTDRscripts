void GEMCSC_GE11ME11_GE21ME21_combined3_eff_20170120_pt22_fraction94_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:37:07 2017) by ROOT version6.08/06
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
   Double_t xAxis707[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__678 = new TH1F("b1__678"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis707);
   b1__678->SetMinimum(0);
   b1__678->SetMaximum(1.05);
   b1__678->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__678->SetLineColor(ci);
   b1__678->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__678->GetXaxis()->SetLabelFont(42);
   b1__678->GetXaxis()->SetLabelSize(0.05);
   b1__678->GetXaxis()->SetTitleSize(0.05);
   b1__678->GetXaxis()->SetTitleFont(42);
   b1__678->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__678->GetYaxis()->SetNdivisions(520);
   b1__678->GetYaxis()->SetLabelFont(42);
   b1__678->GetYaxis()->SetLabelSize(0.05);
   b1__678->GetYaxis()->SetTitleSize(0.05);
   b1__678->GetYaxis()->SetTitleOffset(1.1);
   b1__678->GetYaxis()->SetTitleFont(42);
   b1__678->GetZaxis()->SetLabelFont(42);
   b1__678->GetZaxis()->SetLabelSize(0.035);
   b1__678->GetZaxis()->SetTitleSize(0.035);
   b1__678->GetZaxis()->SetTitleFont(42);
   b1__678->Draw("");
   Double_t xAxis1262[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt22fraction941262 = new TEfficiency("GE11eta16to21pt22fraction94","",50,xAxis1262);
   
   GE11eta16to21pt22fraction941262->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt22fraction941262->SetBetaAlpha(1);
   GE11eta16to21pt22fraction941262->SetBetaBeta(1);
   GE11eta16to21pt22fraction941262->SetWeight(1);
   GE11eta16to21pt22fraction941262->SetStatisticOption(0);
   GE11eta16to21pt22fraction941262->SetPosteriorMode(0);
   GE11eta16to21pt22fraction941262->SetShortestInterval(0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(0,0);
   GE11eta16to21pt22fraction941262->SetPassedEvents(0,0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(1,0);
   GE11eta16to21pt22fraction941262->SetPassedEvents(1,0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(2,1308);
   GE11eta16to21pt22fraction941262->SetPassedEvents(2,0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(3,2390);
   GE11eta16to21pt22fraction941262->SetPassedEvents(3,0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(4,2390);
   GE11eta16to21pt22fraction941262->SetPassedEvents(4,0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(5,2546);
   GE11eta16to21pt22fraction941262->SetPassedEvents(5,0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(6,2518);
   GE11eta16to21pt22fraction941262->SetPassedEvents(6,0);
   GE11eta16to21pt22fraction941262->SetTotalEvents(7,2458);
   GE11eta16to21pt22fraction941262->SetPassedEvents(7,1);
   GE11eta16to21pt22fraction941262->SetTotalEvents(8,2466);
   GE11eta16to21pt22fraction941262->SetPassedEvents(8,3);
   GE11eta16to21pt22fraction941262->SetTotalEvents(9,2452);
   GE11eta16to21pt22fraction941262->SetPassedEvents(9,7);
   GE11eta16to21pt22fraction941262->SetTotalEvents(10,2502);
   GE11eta16to21pt22fraction941262->SetPassedEvents(10,13);
   GE11eta16to21pt22fraction941262->SetTotalEvents(11,2564);
   GE11eta16to21pt22fraction941262->SetPassedEvents(11,28);
   GE11eta16to21pt22fraction941262->SetTotalEvents(12,2464);
   GE11eta16to21pt22fraction941262->SetPassedEvents(12,57);
   GE11eta16to21pt22fraction941262->SetTotalEvents(13,2492);
   GE11eta16to21pt22fraction941262->SetPassedEvents(13,143);
   GE11eta16to21pt22fraction941262->SetTotalEvents(14,2502);
   GE11eta16to21pt22fraction941262->SetPassedEvents(14,229);
   GE11eta16to21pt22fraction941262->SetTotalEvents(15,2452);
   GE11eta16to21pt22fraction941262->SetPassedEvents(15,368);
   GE11eta16to21pt22fraction941262->SetTotalEvents(16,2580);
   GE11eta16to21pt22fraction941262->SetPassedEvents(16,596);
   GE11eta16to21pt22fraction941262->SetTotalEvents(17,2426);
   GE11eta16to21pt22fraction941262->SetPassedEvents(17,763);
   GE11eta16to21pt22fraction941262->SetTotalEvents(18,2490);
   GE11eta16to21pt22fraction941262->SetPassedEvents(18,1042);
   GE11eta16to21pt22fraction941262->SetTotalEvents(19,2510);
   GE11eta16to21pt22fraction941262->SetPassedEvents(19,1276);
   GE11eta16to21pt22fraction941262->SetTotalEvents(20,2456);
   GE11eta16to21pt22fraction941262->SetPassedEvents(20,1438);
   GE11eta16to21pt22fraction941262->SetTotalEvents(21,2470);
   GE11eta16to21pt22fraction941262->SetPassedEvents(21,1648);
   GE11eta16to21pt22fraction941262->SetTotalEvents(22,2420);
   GE11eta16to21pt22fraction941262->SetPassedEvents(22,1756);
   GE11eta16to21pt22fraction941262->SetTotalEvents(23,2420);
   GE11eta16to21pt22fraction941262->SetPassedEvents(23,1827);
   GE11eta16to21pt22fraction941262->SetTotalEvents(24,2564);
   GE11eta16to21pt22fraction941262->SetPassedEvents(24,2046);
   GE11eta16to21pt22fraction941262->SetTotalEvents(25,2544);
   GE11eta16to21pt22fraction941262->SetPassedEvents(25,2076);
   GE11eta16to21pt22fraction941262->SetTotalEvents(26,2398);
   GE11eta16to21pt22fraction941262->SetPassedEvents(26,1968);
   GE11eta16to21pt22fraction941262->SetTotalEvents(27,2598);
   GE11eta16to21pt22fraction941262->SetPassedEvents(27,2226);
   GE11eta16to21pt22fraction941262->SetTotalEvents(28,2528);
   GE11eta16to21pt22fraction941262->SetPassedEvents(28,2151);
   GE11eta16to21pt22fraction941262->SetTotalEvents(29,2510);
   GE11eta16to21pt22fraction941262->SetPassedEvents(29,2149);
   GE11eta16to21pt22fraction941262->SetTotalEvents(30,2464);
   GE11eta16to21pt22fraction941262->SetPassedEvents(30,2126);
   GE11eta16to21pt22fraction941262->SetTotalEvents(31,2524);
   GE11eta16to21pt22fraction941262->SetPassedEvents(31,2207);
   GE11eta16to21pt22fraction941262->SetTotalEvents(32,2464);
   GE11eta16to21pt22fraction941262->SetPassedEvents(32,2156);
   GE11eta16to21pt22fraction941262->SetTotalEvents(33,2614);
   GE11eta16to21pt22fraction941262->SetPassedEvents(33,2302);
   GE11eta16to21pt22fraction941262->SetTotalEvents(34,2466);
   GE11eta16to21pt22fraction941262->SetPassedEvents(34,2175);
   GE11eta16to21pt22fraction941262->SetTotalEvents(35,2424);
   GE11eta16to21pt22fraction941262->SetPassedEvents(35,2132);
   GE11eta16to21pt22fraction941262->SetTotalEvents(36,2528);
   GE11eta16to21pt22fraction941262->SetPassedEvents(36,2208);
   GE11eta16to21pt22fraction941262->SetTotalEvents(37,2700);
   GE11eta16to21pt22fraction941262->SetPassedEvents(37,2360);
   GE11eta16to21pt22fraction941262->SetTotalEvents(38,2532);
   GE11eta16to21pt22fraction941262->SetPassedEvents(38,2225);
   GE11eta16to21pt22fraction941262->SetTotalEvents(39,2566);
   GE11eta16to21pt22fraction941262->SetPassedEvents(39,2263);
   GE11eta16to21pt22fraction941262->SetTotalEvents(40,2484);
   GE11eta16to21pt22fraction941262->SetPassedEvents(40,2210);
   GE11eta16to21pt22fraction941262->SetTotalEvents(41,2624);
   GE11eta16to21pt22fraction941262->SetPassedEvents(41,2328);
   GE11eta16to21pt22fraction941262->SetTotalEvents(42,2560);
   GE11eta16to21pt22fraction941262->SetPassedEvents(42,2283);
   GE11eta16to21pt22fraction941262->SetTotalEvents(43,2558);
   GE11eta16to21pt22fraction941262->SetPassedEvents(43,2259);
   GE11eta16to21pt22fraction941262->SetTotalEvents(44,2560);
   GE11eta16to21pt22fraction941262->SetPassedEvents(44,2275);
   GE11eta16to21pt22fraction941262->SetTotalEvents(45,2404);
   GE11eta16to21pt22fraction941262->SetPassedEvents(45,2144);
   GE11eta16to21pt22fraction941262->SetTotalEvents(46,2502);
   GE11eta16to21pt22fraction941262->SetPassedEvents(46,2255);
   GE11eta16to21pt22fraction941262->SetTotalEvents(47,2510);
   GE11eta16to21pt22fraction941262->SetPassedEvents(47,2222);
   GE11eta16to21pt22fraction941262->SetTotalEvents(48,2526);
   GE11eta16to21pt22fraction941262->SetPassedEvents(48,2242);
   GE11eta16to21pt22fraction941262->SetTotalEvents(49,2604);
   GE11eta16to21pt22fraction941262->SetPassedEvents(49,2319);
   GE11eta16to21pt22fraction941262->SetTotalEvents(50,2550);
   GE11eta16to21pt22fraction941262->SetPassedEvents(50,2290);
   GE11eta16to21pt22fraction941262->SetTotalEvents(51,26);
   GE11eta16to21pt22fraction941262->SetPassedEvents(51,25);
   GE11eta16to21pt22fraction941262->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt22fraction941262->SetLineColor(ci);
   GE11eta16to21pt22fraction941262->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt22fraction941262->SetMarkerColor(ci);
   GE11eta16to21pt22fraction941262->SetMarkerStyle(26);
   GE11eta16to21pt22fraction941262->Draw("samepz");
   Double_t xAxis1263[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE21eta16to21pt22fraction941263 = new TEfficiency("GE21eta16to21pt22fraction94","",50,xAxis1263);
   
   GE21eta16to21pt22fraction941263->SetConfidenceLevel(0.6826895);
   GE21eta16to21pt22fraction941263->SetBetaAlpha(1);
   GE21eta16to21pt22fraction941263->SetBetaBeta(1);
   GE21eta16to21pt22fraction941263->SetWeight(1);
   GE21eta16to21pt22fraction941263->SetStatisticOption(0);
   GE21eta16to21pt22fraction941263->SetPosteriorMode(0);
   GE21eta16to21pt22fraction941263->SetShortestInterval(0);
   GE21eta16to21pt22fraction941263->SetTotalEvents(0,0);
   GE21eta16to21pt22fraction941263->SetPassedEvents(0,0);
   GE21eta16to21pt22fraction941263->SetTotalEvents(1,0);
   GE21eta16to21pt22fraction941263->SetPassedEvents(1,0);
   GE21eta16to21pt22fraction941263->SetTotalEvents(2,868);
   GE21eta16to21pt22fraction941263->SetPassedEvents(2,0);
   GE21eta16to21pt22fraction941263->SetTotalEvents(3,1576);
   GE21eta16to21pt22fraction941263->SetPassedEvents(3,1);
   GE21eta16to21pt22fraction941263->SetTotalEvents(4,1626);
   GE21eta16to21pt22fraction941263->SetPassedEvents(4,4);
   GE21eta16to21pt22fraction941263->SetTotalEvents(5,1728);
   GE21eta16to21pt22fraction941263->SetPassedEvents(5,6);
   GE21eta16to21pt22fraction941263->SetTotalEvents(6,1728);
   GE21eta16to21pt22fraction941263->SetPassedEvents(6,13);
   GE21eta16to21pt22fraction941263->SetTotalEvents(7,1742);
   GE21eta16to21pt22fraction941263->SetPassedEvents(7,15);
   GE21eta16to21pt22fraction941263->SetTotalEvents(8,1652);
   GE21eta16to21pt22fraction941263->SetPassedEvents(8,20);
   GE21eta16to21pt22fraction941263->SetTotalEvents(9,1684);
   GE21eta16to21pt22fraction941263->SetPassedEvents(9,29);
   GE21eta16to21pt22fraction941263->SetTotalEvents(10,1736);
   GE21eta16to21pt22fraction941263->SetPassedEvents(10,48);
   GE21eta16to21pt22fraction941263->SetTotalEvents(11,1712);
   GE21eta16to21pt22fraction941263->SetPassedEvents(11,74);
   GE21eta16to21pt22fraction941263->SetTotalEvents(12,1714);
   GE21eta16to21pt22fraction941263->SetPassedEvents(12,123);
   GE21eta16to21pt22fraction941263->SetTotalEvents(13,1694);
   GE21eta16to21pt22fraction941263->SetPassedEvents(13,189);
   GE21eta16to21pt22fraction941263->SetTotalEvents(14,1704);
   GE21eta16to21pt22fraction941263->SetPassedEvents(14,297);
   GE21eta16to21pt22fraction941263->SetTotalEvents(15,1614);
   GE21eta16to21pt22fraction941263->SetPassedEvents(15,417);
   GE21eta16to21pt22fraction941263->SetTotalEvents(16,1756);
   GE21eta16to21pt22fraction941263->SetPassedEvents(16,595);
   GE21eta16to21pt22fraction941263->SetTotalEvents(17,1656);
   GE21eta16to21pt22fraction941263->SetPassedEvents(17,710);
   GE21eta16to21pt22fraction941263->SetTotalEvents(18,1674);
   GE21eta16to21pt22fraction941263->SetPassedEvents(18,903);
   GE21eta16to21pt22fraction941263->SetTotalEvents(19,1706);
   GE21eta16to21pt22fraction941263->SetPassedEvents(19,1025);
   GE21eta16to21pt22fraction941263->SetTotalEvents(20,1620);
   GE21eta16to21pt22fraction941263->SetPassedEvents(20,1096);
   GE21eta16to21pt22fraction941263->SetTotalEvents(21,1692);
   GE21eta16to21pt22fraction941263->SetPassedEvents(21,1283);
   GE21eta16to21pt22fraction941263->SetTotalEvents(22,1670);
   GE21eta16to21pt22fraction941263->SetPassedEvents(22,1300);
   GE21eta16to21pt22fraction941263->SetTotalEvents(23,1602);
   GE21eta16to21pt22fraction941263->SetPassedEvents(23,1280);
   GE21eta16to21pt22fraction941263->SetTotalEvents(24,1694);
   GE21eta16to21pt22fraction941263->SetPassedEvents(24,1395);
   GE21eta16to21pt22fraction941263->SetTotalEvents(25,1760);
   GE21eta16to21pt22fraction941263->SetPassedEvents(25,1475);
   GE21eta16to21pt22fraction941263->SetTotalEvents(26,1682);
   GE21eta16to21pt22fraction941263->SetPassedEvents(26,1434);
   GE21eta16to21pt22fraction941263->SetTotalEvents(27,1804);
   GE21eta16to21pt22fraction941263->SetPassedEvents(27,1557);
   GE21eta16to21pt22fraction941263->SetTotalEvents(28,1738);
   GE21eta16to21pt22fraction941263->SetPassedEvents(28,1519);
   GE21eta16to21pt22fraction941263->SetTotalEvents(29,1716);
   GE21eta16to21pt22fraction941263->SetPassedEvents(29,1474);
   GE21eta16to21pt22fraction941263->SetTotalEvents(30,1684);
   GE21eta16to21pt22fraction941263->SetPassedEvents(30,1478);
   GE21eta16to21pt22fraction941263->SetTotalEvents(31,1710);
   GE21eta16to21pt22fraction941263->SetPassedEvents(31,1485);
   GE21eta16to21pt22fraction941263->SetTotalEvents(32,1640);
   GE21eta16to21pt22fraction941263->SetPassedEvents(32,1437);
   GE21eta16to21pt22fraction941263->SetTotalEvents(33,1816);
   GE21eta16to21pt22fraction941263->SetPassedEvents(33,1590);
   GE21eta16to21pt22fraction941263->SetTotalEvents(34,1642);
   GE21eta16to21pt22fraction941263->SetPassedEvents(34,1423);
   GE21eta16to21pt22fraction941263->SetTotalEvents(35,1664);
   GE21eta16to21pt22fraction941263->SetPassedEvents(35,1478);
   GE21eta16to21pt22fraction941263->SetTotalEvents(36,1670);
   GE21eta16to21pt22fraction941263->SetPassedEvents(36,1494);
   GE21eta16to21pt22fraction941263->SetTotalEvents(37,1880);
   GE21eta16to21pt22fraction941263->SetPassedEvents(37,1639);
   GE21eta16to21pt22fraction941263->SetTotalEvents(38,1730);
   GE21eta16to21pt22fraction941263->SetPassedEvents(38,1544);
   GE21eta16to21pt22fraction941263->SetTotalEvents(39,1720);
   GE21eta16to21pt22fraction941263->SetPassedEvents(39,1495);
   GE21eta16to21pt22fraction941263->SetTotalEvents(40,1670);
   GE21eta16to21pt22fraction941263->SetPassedEvents(40,1460);
   GE21eta16to21pt22fraction941263->SetTotalEvents(41,1790);
   GE21eta16to21pt22fraction941263->SetPassedEvents(41,1587);
   GE21eta16to21pt22fraction941263->SetTotalEvents(42,1806);
   GE21eta16to21pt22fraction941263->SetPassedEvents(42,1598);
   GE21eta16to21pt22fraction941263->SetTotalEvents(43,1720);
   GE21eta16to21pt22fraction941263->SetPassedEvents(43,1527);
   GE21eta16to21pt22fraction941263->SetTotalEvents(44,1732);
   GE21eta16to21pt22fraction941263->SetPassedEvents(44,1509);
   GE21eta16to21pt22fraction941263->SetTotalEvents(45,1598);
   GE21eta16to21pt22fraction941263->SetPassedEvents(45,1428);
   GE21eta16to21pt22fraction941263->SetTotalEvents(46,1706);
   GE21eta16to21pt22fraction941263->SetPassedEvents(46,1510);
   GE21eta16to21pt22fraction941263->SetTotalEvents(47,1756);
   GE21eta16to21pt22fraction941263->SetPassedEvents(47,1548);
   GE21eta16to21pt22fraction941263->SetTotalEvents(48,1760);
   GE21eta16to21pt22fraction941263->SetPassedEvents(48,1563);
   GE21eta16to21pt22fraction941263->SetTotalEvents(49,1746);
   GE21eta16to21pt22fraction941263->SetPassedEvents(49,1547);
   GE21eta16to21pt22fraction941263->SetTotalEvents(50,1712);
   GE21eta16to21pt22fraction941263->SetPassedEvents(50,1506);
   GE21eta16to21pt22fraction941263->SetTotalEvents(51,18);
   GE21eta16to21pt22fraction941263->SetPassedEvents(51,15);
   GE21eta16to21pt22fraction941263->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt22fraction941263->SetLineColor(ci);
   GE21eta16to21pt22fraction941263->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   GE21eta16to21pt22fraction941263->SetMarkerColor(ci);
   GE21eta16to21pt22fraction941263->SetMarkerStyle(25);
   GE21eta16to21pt22fraction941263->Draw("samepz");
   Double_t xAxis1264[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt22fraction941264 = new TEfficiency("hybrideta16to21pt22fraction94","",50,xAxis1264);
   
   hybrideta16to21pt22fraction941264->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt22fraction941264->SetBetaAlpha(1);
   hybrideta16to21pt22fraction941264->SetBetaBeta(1);
   hybrideta16to21pt22fraction941264->SetWeight(1);
   hybrideta16to21pt22fraction941264->SetStatisticOption(0);
   hybrideta16to21pt22fraction941264->SetPosteriorMode(0);
   hybrideta16to21pt22fraction941264->SetShortestInterval(0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(0,0);
   hybrideta16to21pt22fraction941264->SetPassedEvents(0,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(1,0);
   hybrideta16to21pt22fraction941264->SetPassedEvents(1,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(2,868);
   hybrideta16to21pt22fraction941264->SetPassedEvents(2,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(3,1576);
   hybrideta16to21pt22fraction941264->SetPassedEvents(3,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(4,1626);
   hybrideta16to21pt22fraction941264->SetPassedEvents(4,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(5,1728);
   hybrideta16to21pt22fraction941264->SetPassedEvents(5,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(6,1728);
   hybrideta16to21pt22fraction941264->SetPassedEvents(6,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(7,1742);
   hybrideta16to21pt22fraction941264->SetPassedEvents(7,0);
   hybrideta16to21pt22fraction941264->SetTotalEvents(8,1652);
   hybrideta16to21pt22fraction941264->SetPassedEvents(8,3);
   hybrideta16to21pt22fraction941264->SetTotalEvents(9,1684);
   hybrideta16to21pt22fraction941264->SetPassedEvents(9,9);
   hybrideta16to21pt22fraction941264->SetTotalEvents(10,1736);
   hybrideta16to21pt22fraction941264->SetPassedEvents(10,13);
   hybrideta16to21pt22fraction941264->SetTotalEvents(11,1712);
   hybrideta16to21pt22fraction941264->SetPassedEvents(11,35);
   hybrideta16to21pt22fraction941264->SetTotalEvents(12,1714);
   hybrideta16to21pt22fraction941264->SetPassedEvents(12,73);
   hybrideta16to21pt22fraction941264->SetTotalEvents(13,1694);
   hybrideta16to21pt22fraction941264->SetPassedEvents(13,143);
   hybrideta16to21pt22fraction941264->SetTotalEvents(14,1704);
   hybrideta16to21pt22fraction941264->SetPassedEvents(14,225);
   hybrideta16to21pt22fraction941264->SetTotalEvents(15,1614);
   hybrideta16to21pt22fraction941264->SetPassedEvents(15,340);
   hybrideta16to21pt22fraction941264->SetTotalEvents(16,1756);
   hybrideta16to21pt22fraction941264->SetPassedEvents(16,498);
   hybrideta16to21pt22fraction941264->SetTotalEvents(17,1656);
   hybrideta16to21pt22fraction941264->SetPassedEvents(17,635);
   hybrideta16to21pt22fraction941264->SetTotalEvents(18,1674);
   hybrideta16to21pt22fraction941264->SetPassedEvents(18,832);
   hybrideta16to21pt22fraction941264->SetTotalEvents(19,1706);
   hybrideta16to21pt22fraction941264->SetPassedEvents(19,968);
   hybrideta16to21pt22fraction941264->SetTotalEvents(20,1620);
   hybrideta16to21pt22fraction941264->SetPassedEvents(20,1072);
   hybrideta16to21pt22fraction941264->SetTotalEvents(21,1692);
   hybrideta16to21pt22fraction941264->SetPassedEvents(21,1263);
   hybrideta16to21pt22fraction941264->SetTotalEvents(22,1670);
   hybrideta16to21pt22fraction941264->SetPassedEvents(22,1298);
   hybrideta16to21pt22fraction941264->SetTotalEvents(23,1602);
   hybrideta16to21pt22fraction941264->SetPassedEvents(23,1303);
   hybrideta16to21pt22fraction941264->SetTotalEvents(24,1694);
   hybrideta16to21pt22fraction941264->SetPassedEvents(24,1432);
   hybrideta16to21pt22fraction941264->SetTotalEvents(25,1760);
   hybrideta16to21pt22fraction941264->SetPassedEvents(25,1492);
   hybrideta16to21pt22fraction941264->SetTotalEvents(26,1682);
   hybrideta16to21pt22fraction941264->SetPassedEvents(26,1456);
   hybrideta16to21pt22fraction941264->SetTotalEvents(27,1804);
   hybrideta16to21pt22fraction941264->SetPassedEvents(27,1593);
   hybrideta16to21pt22fraction941264->SetTotalEvents(28,1738);
   hybrideta16to21pt22fraction941264->SetPassedEvents(28,1545);
   hybrideta16to21pt22fraction941264->SetTotalEvents(29,1716);
   hybrideta16to21pt22fraction941264->SetPassedEvents(29,1524);
   hybrideta16to21pt22fraction941264->SetTotalEvents(30,1684);
   hybrideta16to21pt22fraction941264->SetPassedEvents(30,1523);
   hybrideta16to21pt22fraction941264->SetTotalEvents(31,1710);
   hybrideta16to21pt22fraction941264->SetPassedEvents(31,1543);
   hybrideta16to21pt22fraction941264->SetTotalEvents(32,1640);
   hybrideta16to21pt22fraction941264->SetPassedEvents(32,1488);
   hybrideta16to21pt22fraction941264->SetTotalEvents(33,1816);
   hybrideta16to21pt22fraction941264->SetPassedEvents(33,1656);
   hybrideta16to21pt22fraction941264->SetTotalEvents(34,1642);
   hybrideta16to21pt22fraction941264->SetPassedEvents(34,1461);
   hybrideta16to21pt22fraction941264->SetTotalEvents(35,1664);
   hybrideta16to21pt22fraction941264->SetPassedEvents(35,1534);
   hybrideta16to21pt22fraction941264->SetTotalEvents(36,1670);
   hybrideta16to21pt22fraction941264->SetPassedEvents(36,1519);
   hybrideta16to21pt22fraction941264->SetTotalEvents(37,1880);
   hybrideta16to21pt22fraction941264->SetPassedEvents(37,1694);
   hybrideta16to21pt22fraction941264->SetTotalEvents(38,1730);
   hybrideta16to21pt22fraction941264->SetPassedEvents(38,1584);
   hybrideta16to21pt22fraction941264->SetTotalEvents(39,1720);
   hybrideta16to21pt22fraction941264->SetPassedEvents(39,1561);
   hybrideta16to21pt22fraction941264->SetTotalEvents(40,1670);
   hybrideta16to21pt22fraction941264->SetPassedEvents(40,1532);
   hybrideta16to21pt22fraction941264->SetTotalEvents(41,1790);
   hybrideta16to21pt22fraction941264->SetPassedEvents(41,1646);
   hybrideta16to21pt22fraction941264->SetTotalEvents(42,1806);
   hybrideta16to21pt22fraction941264->SetPassedEvents(42,1670);
   hybrideta16to21pt22fraction941264->SetTotalEvents(43,1720);
   hybrideta16to21pt22fraction941264->SetPassedEvents(43,1580);
   hybrideta16to21pt22fraction941264->SetTotalEvents(44,1732);
   hybrideta16to21pt22fraction941264->SetPassedEvents(44,1574);
   hybrideta16to21pt22fraction941264->SetTotalEvents(45,1598);
   hybrideta16to21pt22fraction941264->SetPassedEvents(45,1482);
   hybrideta16to21pt22fraction941264->SetTotalEvents(46,1706);
   hybrideta16to21pt22fraction941264->SetPassedEvents(46,1574);
   hybrideta16to21pt22fraction941264->SetTotalEvents(47,1756);
   hybrideta16to21pt22fraction941264->SetPassedEvents(47,1618);
   hybrideta16to21pt22fraction941264->SetTotalEvents(48,1760);
   hybrideta16to21pt22fraction941264->SetPassedEvents(48,1621);
   hybrideta16to21pt22fraction941264->SetTotalEvents(49,1746);
   hybrideta16to21pt22fraction941264->SetPassedEvents(49,1613);
   hybrideta16to21pt22fraction941264->SetTotalEvents(50,1712);
   hybrideta16to21pt22fraction941264->SetPassedEvents(50,1570);
   hybrideta16to21pt22fraction941264->SetTotalEvents(51,18);
   hybrideta16to21pt22fraction941264->SetPassedEvents(51,17);
   hybrideta16to21pt22fraction941264->SetFillColor(19);
   hybrideta16to21pt22fraction941264->SetLineWidth(2);
   hybrideta16to21pt22fraction941264->SetMarkerStyle(21);
   hybrideta16to21pt22fraction941264->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt22fraction94","GE11-ME11","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE21eta16to21pt22fraction94","GE21-ME21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt22fraction94","GE11-ME11+GE21-ME21","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.43,0.55,"1.65<|#eta|<2.10, p_{T}^{L1}>22 GeV");
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
