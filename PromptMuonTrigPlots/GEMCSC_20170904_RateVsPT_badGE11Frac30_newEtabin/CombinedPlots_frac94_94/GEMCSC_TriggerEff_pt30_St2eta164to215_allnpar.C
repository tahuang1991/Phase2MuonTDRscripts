void GEMCSC_TriggerEff_pt30_St2eta164to215_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:02:05 2017) by ROOT version6.08/06
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
   Double_t xAxis72[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__62 = new TH1F("b1__62"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis72);
   b1__62->SetMinimum(0);
   b1__62->SetMaximum(1.05);
   b1__62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__62->SetLineColor(ci);
   b1__62->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__62->GetXaxis()->SetLabelFont(42);
   b1__62->GetXaxis()->SetLabelSize(0.05);
   b1__62->GetXaxis()->SetTitleSize(0.05);
   b1__62->GetXaxis()->SetTitleFont(42);
   b1__62->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__62->GetYaxis()->SetNdivisions(520);
   b1__62->GetYaxis()->SetLabelFont(42);
   b1__62->GetYaxis()->SetLabelSize(0.05);
   b1__62->GetYaxis()->SetTitleSize(0.05);
   b1__62->GetYaxis()->SetTitleOffset(1.1);
   b1__62->GetYaxis()->SetTitleFont(42);
   b1__62->GetZaxis()->SetLabelFont(42);
   b1__62->GetZaxis()->SetLabelSize(0.035);
   b1__62->GetZaxis()->SetTitleSize(0.035);
   b1__62->GetZaxis()->SetTitleFont(42);
   b1__62->Draw("");
   Double_t xAxis76[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone76 = new TEfficiency("hden0_clone","",50,xAxis76);
   
   hden0_clone76->SetConfidenceLevel(0.6826895);
   hden0_clone76->SetBetaAlpha(1);
   hden0_clone76->SetBetaBeta(1);
   hden0_clone76->SetWeight(1);
   hden0_clone76->SetStatisticOption(0);
   hden0_clone76->SetPosteriorMode(0);
   hden0_clone76->SetShortestInterval(0);
   hden0_clone76->SetTotalEvents(0,0);
   hden0_clone76->SetPassedEvents(0,0);
   hden0_clone76->SetTotalEvents(1,0);
   hden0_clone76->SetPassedEvents(1,0);
   hden0_clone76->SetTotalEvents(2,230);
   hden0_clone76->SetPassedEvents(2,0);
   hden0_clone76->SetTotalEvents(3,440);
   hden0_clone76->SetPassedEvents(3,1);
   hden0_clone76->SetTotalEvents(4,436);
   hden0_clone76->SetPassedEvents(4,0);
   hden0_clone76->SetTotalEvents(5,440);
   hden0_clone76->SetPassedEvents(5,0);
   hden0_clone76->SetTotalEvents(6,430);
   hden0_clone76->SetPassedEvents(6,3);
   hden0_clone76->SetTotalEvents(7,492);
   hden0_clone76->SetPassedEvents(7,5);
   hden0_clone76->SetTotalEvents(8,510);
   hden0_clone76->SetPassedEvents(8,1);
   hden0_clone76->SetTotalEvents(9,444);
   hden0_clone76->SetPassedEvents(9,6);
   hden0_clone76->SetTotalEvents(10,406);
   hden0_clone76->SetPassedEvents(10,6);
   hden0_clone76->SetTotalEvents(11,376);
   hden0_clone76->SetPassedEvents(11,7);
   hden0_clone76->SetTotalEvents(12,460);
   hden0_clone76->SetPassedEvents(12,9);
   hden0_clone76->SetTotalEvents(13,488);
   hden0_clone76->SetPassedEvents(13,13);
   hden0_clone76->SetTotalEvents(14,422);
   hden0_clone76->SetPassedEvents(14,16);
   hden0_clone76->SetTotalEvents(15,484);
   hden0_clone76->SetPassedEvents(15,23);
   hden0_clone76->SetTotalEvents(16,424);
   hden0_clone76->SetPassedEvents(16,35);
   hden0_clone76->SetTotalEvents(17,434);
   hden0_clone76->SetPassedEvents(17,37);
   hden0_clone76->SetTotalEvents(18,474);
   hden0_clone76->SetPassedEvents(18,73);
   hden0_clone76->SetTotalEvents(19,446);
   hden0_clone76->SetPassedEvents(19,106);
   hden0_clone76->SetTotalEvents(20,476);
   hden0_clone76->SetPassedEvents(20,129);
   hden0_clone76->SetTotalEvents(21,404);
   hden0_clone76->SetPassedEvents(21,135);
   hden0_clone76->SetTotalEvents(22,438);
   hden0_clone76->SetPassedEvents(22,186);
   hden0_clone76->SetTotalEvents(23,470);
   hden0_clone76->SetPassedEvents(23,197);
   hden0_clone76->SetTotalEvents(24,424);
   hden0_clone76->SetPassedEvents(24,239);
   hden0_clone76->SetTotalEvents(25,474);
   hden0_clone76->SetPassedEvents(25,272);
   hden0_clone76->SetTotalEvents(26,468);
   hden0_clone76->SetPassedEvents(26,301);
   hden0_clone76->SetTotalEvents(27,398);
   hden0_clone76->SetPassedEvents(27,283);
   hden0_clone76->SetTotalEvents(28,468);
   hden0_clone76->SetPassedEvents(28,316);
   hden0_clone76->SetTotalEvents(29,390);
   hden0_clone76->SetPassedEvents(29,296);
   hden0_clone76->SetTotalEvents(30,412);
   hden0_clone76->SetPassedEvents(30,311);
   hden0_clone76->SetTotalEvents(31,458);
   hden0_clone76->SetPassedEvents(31,350);
   hden0_clone76->SetTotalEvents(32,436);
   hden0_clone76->SetPassedEvents(32,328);
   hden0_clone76->SetTotalEvents(33,460);
   hden0_clone76->SetPassedEvents(33,370);
   hden0_clone76->SetTotalEvents(34,456);
   hden0_clone76->SetPassedEvents(34,368);
   hden0_clone76->SetTotalEvents(35,442);
   hden0_clone76->SetPassedEvents(35,370);
   hden0_clone76->SetTotalEvents(36,416);
   hden0_clone76->SetPassedEvents(36,339);
   hden0_clone76->SetTotalEvents(37,430);
   hden0_clone76->SetPassedEvents(37,344);
   hden0_clone76->SetTotalEvents(38,406);
   hden0_clone76->SetPassedEvents(38,338);
   hden0_clone76->SetTotalEvents(39,472);
   hden0_clone76->SetPassedEvents(39,390);
   hden0_clone76->SetTotalEvents(40,486);
   hden0_clone76->SetPassedEvents(40,397);
   hden0_clone76->SetTotalEvents(41,404);
   hden0_clone76->SetPassedEvents(41,322);
   hden0_clone76->SetTotalEvents(42,418);
   hden0_clone76->SetPassedEvents(42,351);
   hden0_clone76->SetTotalEvents(43,428);
   hden0_clone76->SetPassedEvents(43,366);
   hden0_clone76->SetTotalEvents(44,416);
   hden0_clone76->SetPassedEvents(44,333);
   hden0_clone76->SetTotalEvents(45,438);
   hden0_clone76->SetPassedEvents(45,360);
   hden0_clone76->SetTotalEvents(46,416);
   hden0_clone76->SetPassedEvents(46,342);
   hden0_clone76->SetTotalEvents(47,406);
   hden0_clone76->SetPassedEvents(47,336);
   hden0_clone76->SetTotalEvents(48,470);
   hden0_clone76->SetPassedEvents(48,382);
   hden0_clone76->SetTotalEvents(49,442);
   hden0_clone76->SetPassedEvents(49,374);
   hden0_clone76->SetTotalEvents(50,494);
   hden0_clone76->SetPassedEvents(50,411);
   hden0_clone76->SetTotalEvents(51,0);
   hden0_clone76->SetPassedEvents(51,0);
   hden0_clone76->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone76->SetLineColor(ci);
   hden0_clone76->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone76->SetMarkerColor(ci);
   hden0_clone76->SetMarkerStyle(26);
   hden0_clone76->Draw("samepz");
   Double_t xAxis77[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt30fraction9877 = new TEfficiency("GE11eta16to21pt30fraction98","",50,xAxis77);
   
   GE11eta16to21pt30fraction9877->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt30fraction9877->SetBetaAlpha(1);
   GE11eta16to21pt30fraction9877->SetBetaBeta(1);
   GE11eta16to21pt30fraction9877->SetWeight(1);
   GE11eta16to21pt30fraction9877->SetStatisticOption(0);
   GE11eta16to21pt30fraction9877->SetPosteriorMode(0);
   GE11eta16to21pt30fraction9877->SetShortestInterval(0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(0,0);
   GE11eta16to21pt30fraction9877->SetPassedEvents(0,0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(1,0);
   GE11eta16to21pt30fraction9877->SetPassedEvents(1,0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(2,1308);
   GE11eta16to21pt30fraction9877->SetPassedEvents(2,0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(3,2390);
   GE11eta16to21pt30fraction9877->SetPassedEvents(3,0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(4,2390);
   GE11eta16to21pt30fraction9877->SetPassedEvents(4,0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(5,2546);
   GE11eta16to21pt30fraction9877->SetPassedEvents(5,0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(6,2518);
   GE11eta16to21pt30fraction9877->SetPassedEvents(6,0);
   GE11eta16to21pt30fraction9877->SetTotalEvents(7,2458);
   GE11eta16to21pt30fraction9877->SetPassedEvents(7,1);
   GE11eta16to21pt30fraction9877->SetTotalEvents(8,2466);
   GE11eta16to21pt30fraction9877->SetPassedEvents(8,2);
   GE11eta16to21pt30fraction9877->SetTotalEvents(9,2452);
   GE11eta16to21pt30fraction9877->SetPassedEvents(9,2);
   GE11eta16to21pt30fraction9877->SetTotalEvents(10,2502);
   GE11eta16to21pt30fraction9877->SetPassedEvents(10,5);
   GE11eta16to21pt30fraction9877->SetTotalEvents(11,2564);
   GE11eta16to21pt30fraction9877->SetPassedEvents(11,6);
   GE11eta16to21pt30fraction9877->SetTotalEvents(12,2464);
   GE11eta16to21pt30fraction9877->SetPassedEvents(12,12);
   GE11eta16to21pt30fraction9877->SetTotalEvents(13,2492);
   GE11eta16to21pt30fraction9877->SetPassedEvents(13,34);
   GE11eta16to21pt30fraction9877->SetTotalEvents(14,2502);
   GE11eta16to21pt30fraction9877->SetPassedEvents(14,54);
   GE11eta16to21pt30fraction9877->SetTotalEvents(15,2452);
   GE11eta16to21pt30fraction9877->SetPassedEvents(15,84);
   GE11eta16to21pt30fraction9877->SetTotalEvents(16,2580);
   GE11eta16to21pt30fraction9877->SetPassedEvents(16,133);
   GE11eta16to21pt30fraction9877->SetTotalEvents(17,2426);
   GE11eta16to21pt30fraction9877->SetPassedEvents(17,187);
   GE11eta16to21pt30fraction9877->SetTotalEvents(18,2490);
   GE11eta16to21pt30fraction9877->SetPassedEvents(18,278);
   GE11eta16to21pt30fraction9877->SetTotalEvents(19,2510);
   GE11eta16to21pt30fraction9877->SetPassedEvents(19,395);
   GE11eta16to21pt30fraction9877->SetTotalEvents(20,2456);
   GE11eta16to21pt30fraction9877->SetPassedEvents(20,539);
   GE11eta16to21pt30fraction9877->SetTotalEvents(21,2470);
   GE11eta16to21pt30fraction9877->SetPassedEvents(21,745);
   GE11eta16to21pt30fraction9877->SetTotalEvents(22,2420);
   GE11eta16to21pt30fraction9877->SetPassedEvents(22,884);
   GE11eta16to21pt30fraction9877->SetTotalEvents(23,2420);
   GE11eta16to21pt30fraction9877->SetPassedEvents(23,1044);
   GE11eta16to21pt30fraction9877->SetTotalEvents(24,2564);
   GE11eta16to21pt30fraction9877->SetPassedEvents(24,1319);
   GE11eta16to21pt30fraction9877->SetTotalEvents(25,2544);
   GE11eta16to21pt30fraction9877->SetPassedEvents(25,1408);
   GE11eta16to21pt30fraction9877->SetTotalEvents(26,2398);
   GE11eta16to21pt30fraction9877->SetPassedEvents(26,1456);
   GE11eta16to21pt30fraction9877->SetTotalEvents(27,2598);
   GE11eta16to21pt30fraction9877->SetPassedEvents(27,1726);
   GE11eta16to21pt30fraction9877->SetTotalEvents(28,2528);
   GE11eta16to21pt30fraction9877->SetPassedEvents(28,1750);
   GE11eta16to21pt30fraction9877->SetTotalEvents(29,2510);
   GE11eta16to21pt30fraction9877->SetPassedEvents(29,1828);
   GE11eta16to21pt30fraction9877->SetTotalEvents(30,2464);
   GE11eta16to21pt30fraction9877->SetPassedEvents(30,1887);
   GE11eta16to21pt30fraction9877->SetTotalEvents(31,2524);
   GE11eta16to21pt30fraction9877->SetPassedEvents(31,1993);
   GE11eta16to21pt30fraction9877->SetTotalEvents(32,2464);
   GE11eta16to21pt30fraction9877->SetPassedEvents(32,1948);
   GE11eta16to21pt30fraction9877->SetTotalEvents(33,2614);
   GE11eta16to21pt30fraction9877->SetPassedEvents(33,2127);
   GE11eta16to21pt30fraction9877->SetTotalEvents(34,2466);
   GE11eta16to21pt30fraction9877->SetPassedEvents(34,2056);
   GE11eta16to21pt30fraction9877->SetTotalEvents(35,2424);
   GE11eta16to21pt30fraction9877->SetPassedEvents(35,2034);
   GE11eta16to21pt30fraction9877->SetTotalEvents(36,2528);
   GE11eta16to21pt30fraction9877->SetPassedEvents(36,2134);
   GE11eta16to21pt30fraction9877->SetTotalEvents(37,2700);
   GE11eta16to21pt30fraction9877->SetPassedEvents(37,2264);
   GE11eta16to21pt30fraction9877->SetTotalEvents(38,2532);
   GE11eta16to21pt30fraction9877->SetPassedEvents(38,2125);
   GE11eta16to21pt30fraction9877->SetTotalEvents(39,2566);
   GE11eta16to21pt30fraction9877->SetPassedEvents(39,2195);
   GE11eta16to21pt30fraction9877->SetTotalEvents(40,2484);
   GE11eta16to21pt30fraction9877->SetPassedEvents(40,2150);
   GE11eta16to21pt30fraction9877->SetTotalEvents(41,2624);
   GE11eta16to21pt30fraction9877->SetPassedEvents(41,2261);
   GE11eta16to21pt30fraction9877->SetTotalEvents(42,2560);
   GE11eta16to21pt30fraction9877->SetPassedEvents(42,2216);
   GE11eta16to21pt30fraction9877->SetTotalEvents(43,2558);
   GE11eta16to21pt30fraction9877->SetPassedEvents(43,2183);
   GE11eta16to21pt30fraction9877->SetTotalEvents(44,2560);
   GE11eta16to21pt30fraction9877->SetPassedEvents(44,2233);
   GE11eta16to21pt30fraction9877->SetTotalEvents(45,2404);
   GE11eta16to21pt30fraction9877->SetPassedEvents(45,2092);
   GE11eta16to21pt30fraction9877->SetTotalEvents(46,2502);
   GE11eta16to21pt30fraction9877->SetPassedEvents(46,2208);
   GE11eta16to21pt30fraction9877->SetTotalEvents(47,2510);
   GE11eta16to21pt30fraction9877->SetPassedEvents(47,2165);
   GE11eta16to21pt30fraction9877->SetTotalEvents(48,2526);
   GE11eta16to21pt30fraction9877->SetPassedEvents(48,2199);
   GE11eta16to21pt30fraction9877->SetTotalEvents(49,2604);
   GE11eta16to21pt30fraction9877->SetPassedEvents(49,2277);
   GE11eta16to21pt30fraction9877->SetTotalEvents(50,2550);
   GE11eta16to21pt30fraction9877->SetPassedEvents(50,2245);
   GE11eta16to21pt30fraction9877->SetTotalEvents(51,26);
   GE11eta16to21pt30fraction9877->SetPassedEvents(51,25);
   GE11eta16to21pt30fraction9877->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   GE11eta16to21pt30fraction9877->SetLineColor(ci);
   GE11eta16to21pt30fraction9877->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   GE11eta16to21pt30fraction9877->SetMarkerColor(ci);
   GE11eta16to21pt30fraction9877->SetMarkerStyle(25);
   GE11eta16to21pt30fraction9877->Draw("samepz");
   Double_t xAxis78[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt30fraction9478 = new TEfficiency("hybrideta16to21pt30fraction94","",50,xAxis78);
   
   hybrideta16to21pt30fraction9478->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt30fraction9478->SetBetaAlpha(1);
   hybrideta16to21pt30fraction9478->SetBetaBeta(1);
   hybrideta16to21pt30fraction9478->SetWeight(1);
   hybrideta16to21pt30fraction9478->SetStatisticOption(0);
   hybrideta16to21pt30fraction9478->SetPosteriorMode(0);
   hybrideta16to21pt30fraction9478->SetShortestInterval(0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(0,0);
   hybrideta16to21pt30fraction9478->SetPassedEvents(0,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(1,0);
   hybrideta16to21pt30fraction9478->SetPassedEvents(1,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(2,868);
   hybrideta16to21pt30fraction9478->SetPassedEvents(2,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(3,1576);
   hybrideta16to21pt30fraction9478->SetPassedEvents(3,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(4,1626);
   hybrideta16to21pt30fraction9478->SetPassedEvents(4,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(5,1728);
   hybrideta16to21pt30fraction9478->SetPassedEvents(5,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(6,1728);
   hybrideta16to21pt30fraction9478->SetPassedEvents(6,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(7,1742);
   hybrideta16to21pt30fraction9478->SetPassedEvents(7,0);
   hybrideta16to21pt30fraction9478->SetTotalEvents(8,1652);
   hybrideta16to21pt30fraction9478->SetPassedEvents(8,2);
   hybrideta16to21pt30fraction9478->SetTotalEvents(9,1684);
   hybrideta16to21pt30fraction9478->SetPassedEvents(9,2);
   hybrideta16to21pt30fraction9478->SetTotalEvents(10,1736);
   hybrideta16to21pt30fraction9478->SetPassedEvents(10,1);
   hybrideta16to21pt30fraction9478->SetTotalEvents(11,1712);
   hybrideta16to21pt30fraction9478->SetPassedEvents(11,7);
   hybrideta16to21pt30fraction9478->SetTotalEvents(12,1714);
   hybrideta16to21pt30fraction9478->SetPassedEvents(12,4);
   hybrideta16to21pt30fraction9478->SetTotalEvents(13,1694);
   hybrideta16to21pt30fraction9478->SetPassedEvents(13,19);
   hybrideta16to21pt30fraction9478->SetTotalEvents(14,1704);
   hybrideta16to21pt30fraction9478->SetPassedEvents(14,25);
   hybrideta16to21pt30fraction9478->SetTotalEvents(15,1614);
   hybrideta16to21pt30fraction9478->SetPassedEvents(15,63);
   hybrideta16to21pt30fraction9478->SetTotalEvents(16,1756);
   hybrideta16to21pt30fraction9478->SetPassedEvents(16,78);
   hybrideta16to21pt30fraction9478->SetTotalEvents(17,1656);
   hybrideta16to21pt30fraction9478->SetPassedEvents(17,108);
   hybrideta16to21pt30fraction9478->SetTotalEvents(18,1674);
   hybrideta16to21pt30fraction9478->SetPassedEvents(18,175);
   hybrideta16to21pt30fraction9478->SetTotalEvents(19,1706);
   hybrideta16to21pt30fraction9478->SetPassedEvents(19,231);
   hybrideta16to21pt30fraction9478->SetTotalEvents(20,1620);
   hybrideta16to21pt30fraction9478->SetPassedEvents(20,311);
   hybrideta16to21pt30fraction9478->SetTotalEvents(21,1692);
   hybrideta16to21pt30fraction9478->SetPassedEvents(21,470);
   hybrideta16to21pt30fraction9478->SetTotalEvents(22,1670);
   hybrideta16to21pt30fraction9478->SetPassedEvents(22,558);
   hybrideta16to21pt30fraction9478->SetTotalEvents(23,1602);
   hybrideta16to21pt30fraction9478->SetPassedEvents(23,651);
   hybrideta16to21pt30fraction9478->SetTotalEvents(24,1694);
   hybrideta16to21pt30fraction9478->SetPassedEvents(24,848);
   hybrideta16to21pt30fraction9478->SetTotalEvents(25,1760);
   hybrideta16to21pt30fraction9478->SetPassedEvents(25,916);
   hybrideta16to21pt30fraction9478->SetTotalEvents(26,1682);
   hybrideta16to21pt30fraction9478->SetPassedEvents(26,1018);
   hybrideta16to21pt30fraction9478->SetTotalEvents(27,1804);
   hybrideta16to21pt30fraction9478->SetPassedEvents(27,1133);
   hybrideta16to21pt30fraction9478->SetTotalEvents(28,1738);
   hybrideta16to21pt30fraction9478->SetPassedEvents(28,1241);
   hybrideta16to21pt30fraction9478->SetTotalEvents(29,1716);
   hybrideta16to21pt30fraction9478->SetPassedEvents(29,1256);
   hybrideta16to21pt30fraction9478->SetTotalEvents(30,1684);
   hybrideta16to21pt30fraction9478->SetPassedEvents(30,1307);
   hybrideta16to21pt30fraction9478->SetTotalEvents(31,1710);
   hybrideta16to21pt30fraction9478->SetPassedEvents(31,1389);
   hybrideta16to21pt30fraction9478->SetTotalEvents(32,1640);
   hybrideta16to21pt30fraction9478->SetPassedEvents(32,1321);
   hybrideta16to21pt30fraction9478->SetTotalEvents(33,1816);
   hybrideta16to21pt30fraction9478->SetPassedEvents(33,1512);
   hybrideta16to21pt30fraction9478->SetTotalEvents(34,1642);
   hybrideta16to21pt30fraction9478->SetPassedEvents(34,1384);
   hybrideta16to21pt30fraction9478->SetTotalEvents(35,1664);
   hybrideta16to21pt30fraction9478->SetPassedEvents(35,1450);
   hybrideta16to21pt30fraction9478->SetTotalEvents(36,1670);
   hybrideta16to21pt30fraction9478->SetPassedEvents(36,1472);
   hybrideta16to21pt30fraction9478->SetTotalEvents(37,1880);
   hybrideta16to21pt30fraction9478->SetPassedEvents(37,1627);
   hybrideta16to21pt30fraction9478->SetTotalEvents(38,1730);
   hybrideta16to21pt30fraction9478->SetPassedEvents(38,1529);
   hybrideta16to21pt30fraction9478->SetTotalEvents(39,1720);
   hybrideta16to21pt30fraction9478->SetPassedEvents(39,1508);
   hybrideta16to21pt30fraction9478->SetTotalEvents(40,1670);
   hybrideta16to21pt30fraction9478->SetPassedEvents(40,1482);
   hybrideta16to21pt30fraction9478->SetTotalEvents(41,1790);
   hybrideta16to21pt30fraction9478->SetPassedEvents(41,1610);
   hybrideta16to21pt30fraction9478->SetTotalEvents(42,1806);
   hybrideta16to21pt30fraction9478->SetPassedEvents(42,1635);
   hybrideta16to21pt30fraction9478->SetTotalEvents(43,1720);
   hybrideta16to21pt30fraction9478->SetPassedEvents(43,1537);
   hybrideta16to21pt30fraction9478->SetTotalEvents(44,1732);
   hybrideta16to21pt30fraction9478->SetPassedEvents(44,1556);
   hybrideta16to21pt30fraction9478->SetTotalEvents(45,1598);
   hybrideta16to21pt30fraction9478->SetPassedEvents(45,1459);
   hybrideta16to21pt30fraction9478->SetTotalEvents(46,1706);
   hybrideta16to21pt30fraction9478->SetPassedEvents(46,1540);
   hybrideta16to21pt30fraction9478->SetTotalEvents(47,1756);
   hybrideta16to21pt30fraction9478->SetPassedEvents(47,1593);
   hybrideta16to21pt30fraction9478->SetTotalEvents(48,1760);
   hybrideta16to21pt30fraction9478->SetPassedEvents(48,1608);
   hybrideta16to21pt30fraction9478->SetTotalEvents(49,1746);
   hybrideta16to21pt30fraction9478->SetPassedEvents(49,1587);
   hybrideta16to21pt30fraction9478->SetTotalEvents(50,1712);
   hybrideta16to21pt30fraction9478->SetPassedEvents(50,1544);
   hybrideta16to21pt30fraction9478->SetTotalEvents(51,18);
   hybrideta16to21pt30fraction9478->SetPassedEvents(51,18);
   hybrideta16to21pt30fraction9478->SetFillColor(19);
   hybrideta16to21pt30fraction9478->SetLineWidth(2);
   hybrideta16to21pt30fraction9478->SetMarkerStyle(21);
   hybrideta16to21pt30fraction9478->Draw("samepz");
   
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
   entry=leg->AddEntry("hden0_clone","Phase-1 detector (CSC): Run-2 Trigger Configuration","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt30fraction98","Phase-1+GE11(CSC+GE11)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt30fraction94","Phase-2(CSC+GE11+GE21+ME0)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.43,0.55,"p_{T}^{Trig} >30 GeV, 1.65<|#eta|<2.10");
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
