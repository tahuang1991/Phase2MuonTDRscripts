void GEMCSC_TriggerEff_pt25_St2eta164to215_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:02:03 2017) by ROOT version6.08/06
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
   Double_t xAxis57[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__49 = new TH1F("b1__49"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis57);
   b1__49->SetMinimum(0);
   b1__49->SetMaximum(1.05);
   b1__49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__49->SetLineColor(ci);
   b1__49->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__49->GetXaxis()->SetLabelFont(42);
   b1__49->GetXaxis()->SetLabelSize(0.05);
   b1__49->GetXaxis()->SetTitleSize(0.05);
   b1__49->GetXaxis()->SetTitleFont(42);
   b1__49->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__49->GetYaxis()->SetNdivisions(520);
   b1__49->GetYaxis()->SetLabelFont(42);
   b1__49->GetYaxis()->SetLabelSize(0.05);
   b1__49->GetYaxis()->SetTitleSize(0.05);
   b1__49->GetYaxis()->SetTitleOffset(1.1);
   b1__49->GetYaxis()->SetTitleFont(42);
   b1__49->GetZaxis()->SetLabelFont(42);
   b1__49->GetZaxis()->SetLabelSize(0.035);
   b1__49->GetZaxis()->SetTitleSize(0.035);
   b1__49->GetZaxis()->SetTitleFont(42);
   b1__49->Draw("");
   Double_t xAxis58[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone58 = new TEfficiency("hden0_clone","",50,xAxis58);
   
   hden0_clone58->SetConfidenceLevel(0.6826895);
   hden0_clone58->SetBetaAlpha(1);
   hden0_clone58->SetBetaBeta(1);
   hden0_clone58->SetWeight(1);
   hden0_clone58->SetStatisticOption(0);
   hden0_clone58->SetPosteriorMode(0);
   hden0_clone58->SetShortestInterval(0);
   hden0_clone58->SetTotalEvents(0,0);
   hden0_clone58->SetPassedEvents(0,0);
   hden0_clone58->SetTotalEvents(1,0);
   hden0_clone58->SetPassedEvents(1,0);
   hden0_clone58->SetTotalEvents(2,230);
   hden0_clone58->SetPassedEvents(2,0);
   hden0_clone58->SetTotalEvents(3,440);
   hden0_clone58->SetPassedEvents(3,1);
   hden0_clone58->SetTotalEvents(4,436);
   hden0_clone58->SetPassedEvents(4,0);
   hden0_clone58->SetTotalEvents(5,440);
   hden0_clone58->SetPassedEvents(5,1);
   hden0_clone58->SetTotalEvents(6,430);
   hden0_clone58->SetPassedEvents(6,4);
   hden0_clone58->SetTotalEvents(7,492);
   hden0_clone58->SetPassedEvents(7,5);
   hden0_clone58->SetTotalEvents(8,510);
   hden0_clone58->SetPassedEvents(8,3);
   hden0_clone58->SetTotalEvents(9,444);
   hden0_clone58->SetPassedEvents(9,8);
   hden0_clone58->SetTotalEvents(10,406);
   hden0_clone58->SetPassedEvents(10,11);
   hden0_clone58->SetTotalEvents(11,376);
   hden0_clone58->SetPassedEvents(11,12);
   hden0_clone58->SetTotalEvents(12,460);
   hden0_clone58->SetPassedEvents(12,14);
   hden0_clone58->SetTotalEvents(13,488);
   hden0_clone58->SetPassedEvents(13,32);
   hden0_clone58->SetTotalEvents(14,422);
   hden0_clone58->SetPassedEvents(14,48);
   hden0_clone58->SetTotalEvents(15,484);
   hden0_clone58->SetPassedEvents(15,63);
   hden0_clone58->SetTotalEvents(16,424);
   hden0_clone58->SetPassedEvents(16,87);
   hden0_clone58->SetTotalEvents(17,434);
   hden0_clone58->SetPassedEvents(17,118);
   hden0_clone58->SetTotalEvents(18,474);
   hden0_clone58->SetPassedEvents(18,176);
   hden0_clone58->SetTotalEvents(19,446);
   hden0_clone58->SetPassedEvents(19,221);
   hden0_clone58->SetTotalEvents(20,476);
   hden0_clone58->SetPassedEvents(20,249);
   hden0_clone58->SetTotalEvents(21,404);
   hden0_clone58->SetPassedEvents(21,236);
   hden0_clone58->SetTotalEvents(22,438);
   hden0_clone58->SetPassedEvents(22,293);
   hden0_clone58->SetTotalEvents(23,470);
   hden0_clone58->SetPassedEvents(23,310);
   hden0_clone58->SetTotalEvents(24,424);
   hden0_clone58->SetPassedEvents(24,326);
   hden0_clone58->SetTotalEvents(25,474);
   hden0_clone58->SetPassedEvents(25,361);
   hden0_clone58->SetTotalEvents(26,468);
   hden0_clone58->SetPassedEvents(26,362);
   hden0_clone58->SetTotalEvents(27,398);
   hden0_clone58->SetPassedEvents(27,323);
   hden0_clone58->SetTotalEvents(28,468);
   hden0_clone58->SetPassedEvents(28,368);
   hden0_clone58->SetTotalEvents(29,390);
   hden0_clone58->SetPassedEvents(29,321);
   hden0_clone58->SetTotalEvents(30,412);
   hden0_clone58->SetPassedEvents(30,343);
   hden0_clone58->SetTotalEvents(31,458);
   hden0_clone58->SetPassedEvents(31,381);
   hden0_clone58->SetTotalEvents(32,436);
   hden0_clone58->SetPassedEvents(32,357);
   hden0_clone58->SetTotalEvents(33,460);
   hden0_clone58->SetPassedEvents(33,385);
   hden0_clone58->SetTotalEvents(34,456);
   hden0_clone58->SetPassedEvents(34,381);
   hden0_clone58->SetTotalEvents(35,442);
   hden0_clone58->SetPassedEvents(35,380);
   hden0_clone58->SetTotalEvents(36,416);
   hden0_clone58->SetPassedEvents(36,352);
   hden0_clone58->SetTotalEvents(37,430);
   hden0_clone58->SetPassedEvents(37,348);
   hden0_clone58->SetTotalEvents(38,406);
   hden0_clone58->SetPassedEvents(38,342);
   hden0_clone58->SetTotalEvents(39,472);
   hden0_clone58->SetPassedEvents(39,395);
   hden0_clone58->SetTotalEvents(40,486);
   hden0_clone58->SetPassedEvents(40,410);
   hden0_clone58->SetTotalEvents(41,404);
   hden0_clone58->SetPassedEvents(41,329);
   hden0_clone58->SetTotalEvents(42,418);
   hden0_clone58->SetPassedEvents(42,353);
   hden0_clone58->SetTotalEvents(43,428);
   hden0_clone58->SetPassedEvents(43,369);
   hden0_clone58->SetTotalEvents(44,416);
   hden0_clone58->SetPassedEvents(44,336);
   hden0_clone58->SetTotalEvents(45,438);
   hden0_clone58->SetPassedEvents(45,366);
   hden0_clone58->SetTotalEvents(46,416);
   hden0_clone58->SetPassedEvents(46,345);
   hden0_clone58->SetTotalEvents(47,406);
   hden0_clone58->SetPassedEvents(47,341);
   hden0_clone58->SetTotalEvents(48,470);
   hden0_clone58->SetPassedEvents(48,388);
   hden0_clone58->SetTotalEvents(49,442);
   hden0_clone58->SetPassedEvents(49,376);
   hden0_clone58->SetTotalEvents(50,494);
   hden0_clone58->SetPassedEvents(50,414);
   hden0_clone58->SetTotalEvents(51,0);
   hden0_clone58->SetPassedEvents(51,0);
   hden0_clone58->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone58->SetLineColor(ci);
   hden0_clone58->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone58->SetMarkerColor(ci);
   hden0_clone58->SetMarkerStyle(26);
   hden0_clone58->Draw("samepz");
   Double_t xAxis59[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * GE11eta16to21pt25fraction9659 = new TEfficiency("GE11eta16to21pt25fraction96","",50,xAxis59);
   
   GE11eta16to21pt25fraction9659->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt25fraction9659->SetBetaAlpha(1);
   GE11eta16to21pt25fraction9659->SetBetaBeta(1);
   GE11eta16to21pt25fraction9659->SetWeight(1);
   GE11eta16to21pt25fraction9659->SetStatisticOption(0);
   GE11eta16to21pt25fraction9659->SetPosteriorMode(0);
   GE11eta16to21pt25fraction9659->SetShortestInterval(0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(0,0);
   GE11eta16to21pt25fraction9659->SetPassedEvents(0,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(1,0);
   GE11eta16to21pt25fraction9659->SetPassedEvents(1,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(2,1308);
   GE11eta16to21pt25fraction9659->SetPassedEvents(2,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(3,2390);
   GE11eta16to21pt25fraction9659->SetPassedEvents(3,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(4,2390);
   GE11eta16to21pt25fraction9659->SetPassedEvents(4,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(5,2546);
   GE11eta16to21pt25fraction9659->SetPassedEvents(5,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(6,2518);
   GE11eta16to21pt25fraction9659->SetPassedEvents(6,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(7,2458);
   GE11eta16to21pt25fraction9659->SetPassedEvents(7,0);
   GE11eta16to21pt25fraction9659->SetTotalEvents(8,2466);
   GE11eta16to21pt25fraction9659->SetPassedEvents(8,1);
   GE11eta16to21pt25fraction9659->SetTotalEvents(9,2452);
   GE11eta16to21pt25fraction9659->SetPassedEvents(9,4);
   GE11eta16to21pt25fraction9659->SetTotalEvents(10,2502);
   GE11eta16to21pt25fraction9659->SetPassedEvents(10,11);
   GE11eta16to21pt25fraction9659->SetTotalEvents(11,2564);
   GE11eta16to21pt25fraction9659->SetPassedEvents(11,15);
   GE11eta16to21pt25fraction9659->SetTotalEvents(12,2464);
   GE11eta16to21pt25fraction9659->SetPassedEvents(12,23);
   GE11eta16to21pt25fraction9659->SetTotalEvents(13,2492);
   GE11eta16to21pt25fraction9659->SetPassedEvents(13,76);
   GE11eta16to21pt25fraction9659->SetTotalEvents(14,2502);
   GE11eta16to21pt25fraction9659->SetPassedEvents(14,121);
   GE11eta16to21pt25fraction9659->SetTotalEvents(15,2452);
   GE11eta16to21pt25fraction9659->SetPassedEvents(15,197);
   GE11eta16to21pt25fraction9659->SetTotalEvents(16,2580);
   GE11eta16to21pt25fraction9659->SetPassedEvents(16,339);
   GE11eta16to21pt25fraction9659->SetTotalEvents(17,2426);
   GE11eta16to21pt25fraction9659->SetPassedEvents(17,465);
   GE11eta16to21pt25fraction9659->SetTotalEvents(18,2490);
   GE11eta16to21pt25fraction9659->SetPassedEvents(18,673);
   GE11eta16to21pt25fraction9659->SetTotalEvents(19,2510);
   GE11eta16to21pt25fraction9659->SetPassedEvents(19,866);
   GE11eta16to21pt25fraction9659->SetTotalEvents(20,2456);
   GE11eta16to21pt25fraction9659->SetPassedEvents(20,1040);
   GE11eta16to21pt25fraction9659->SetTotalEvents(21,2470);
   GE11eta16to21pt25fraction9659->SetPassedEvents(21,1281);
   GE11eta16to21pt25fraction9659->SetTotalEvents(22,2420);
   GE11eta16to21pt25fraction9659->SetPassedEvents(22,1440);
   GE11eta16to21pt25fraction9659->SetTotalEvents(23,2420);
   GE11eta16to21pt25fraction9659->SetPassedEvents(23,1566);
   GE11eta16to21pt25fraction9659->SetTotalEvents(24,2564);
   GE11eta16to21pt25fraction9659->SetPassedEvents(24,1816);
   GE11eta16to21pt25fraction9659->SetTotalEvents(25,2544);
   GE11eta16to21pt25fraction9659->SetPassedEvents(25,1918);
   GE11eta16to21pt25fraction9659->SetTotalEvents(26,2398);
   GE11eta16to21pt25fraction9659->SetPassedEvents(26,1841);
   GE11eta16to21pt25fraction9659->SetTotalEvents(27,2598);
   GE11eta16to21pt25fraction9659->SetPassedEvents(27,2099);
   GE11eta16to21pt25fraction9659->SetTotalEvents(28,2528);
   GE11eta16to21pt25fraction9659->SetPassedEvents(28,2060);
   GE11eta16to21pt25fraction9659->SetTotalEvents(29,2510);
   GE11eta16to21pt25fraction9659->SetPassedEvents(29,2073);
   GE11eta16to21pt25fraction9659->SetTotalEvents(30,2464);
   GE11eta16to21pt25fraction9659->SetPassedEvents(30,2071);
   GE11eta16to21pt25fraction9659->SetTotalEvents(31,2524);
   GE11eta16to21pt25fraction9659->SetPassedEvents(31,2162);
   GE11eta16to21pt25fraction9659->SetTotalEvents(32,2464);
   GE11eta16to21pt25fraction9659->SetPassedEvents(32,2108);
   GE11eta16to21pt25fraction9659->SetTotalEvents(33,2614);
   GE11eta16to21pt25fraction9659->SetPassedEvents(33,2257);
   GE11eta16to21pt25fraction9659->SetTotalEvents(34,2466);
   GE11eta16to21pt25fraction9659->SetPassedEvents(34,2143);
   GE11eta16to21pt25fraction9659->SetTotalEvents(35,2424);
   GE11eta16to21pt25fraction9659->SetPassedEvents(35,2108);
   GE11eta16to21pt25fraction9659->SetTotalEvents(36,2528);
   GE11eta16to21pt25fraction9659->SetPassedEvents(36,2185);
   GE11eta16to21pt25fraction9659->SetTotalEvents(37,2700);
   GE11eta16to21pt25fraction9659->SetPassedEvents(37,2324);
   GE11eta16to21pt25fraction9659->SetTotalEvents(38,2532);
   GE11eta16to21pt25fraction9659->SetPassedEvents(38,2187);
   GE11eta16to21pt25fraction9659->SetTotalEvents(39,2566);
   GE11eta16to21pt25fraction9659->SetPassedEvents(39,2240);
   GE11eta16to21pt25fraction9659->SetTotalEvents(40,2484);
   GE11eta16to21pt25fraction9659->SetPassedEvents(40,2184);
   GE11eta16to21pt25fraction9659->SetTotalEvents(41,2624);
   GE11eta16to21pt25fraction9659->SetPassedEvents(41,2306);
   GE11eta16to21pt25fraction9659->SetTotalEvents(42,2560);
   GE11eta16to21pt25fraction9659->SetPassedEvents(42,2260);
   GE11eta16to21pt25fraction9659->SetTotalEvents(43,2558);
   GE11eta16to21pt25fraction9659->SetPassedEvents(43,2223);
   GE11eta16to21pt25fraction9659->SetTotalEvents(44,2560);
   GE11eta16to21pt25fraction9659->SetPassedEvents(44,2252);
   GE11eta16to21pt25fraction9659->SetTotalEvents(45,2404);
   GE11eta16to21pt25fraction9659->SetPassedEvents(45,2124);
   GE11eta16to21pt25fraction9659->SetTotalEvents(46,2502);
   GE11eta16to21pt25fraction9659->SetPassedEvents(46,2239);
   GE11eta16to21pt25fraction9659->SetTotalEvents(47,2510);
   GE11eta16to21pt25fraction9659->SetPassedEvents(47,2194);
   GE11eta16to21pt25fraction9659->SetTotalEvents(48,2526);
   GE11eta16to21pt25fraction9659->SetPassedEvents(48,2220);
   GE11eta16to21pt25fraction9659->SetTotalEvents(49,2604);
   GE11eta16to21pt25fraction9659->SetPassedEvents(49,2294);
   GE11eta16to21pt25fraction9659->SetTotalEvents(50,2550);
   GE11eta16to21pt25fraction9659->SetPassedEvents(50,2271);
   GE11eta16to21pt25fraction9659->SetTotalEvents(51,26);
   GE11eta16to21pt25fraction9659->SetPassedEvents(51,25);
   GE11eta16to21pt25fraction9659->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   GE11eta16to21pt25fraction9659->SetLineColor(ci);
   GE11eta16to21pt25fraction9659->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   GE11eta16to21pt25fraction9659->SetMarkerColor(ci);
   GE11eta16to21pt25fraction9659->SetMarkerStyle(25);
   GE11eta16to21pt25fraction9659->Draw("samepz");
   Double_t xAxis60[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hybrideta16to21pt25fraction9460 = new TEfficiency("hybrideta16to21pt25fraction94","",50,xAxis60);
   
   hybrideta16to21pt25fraction9460->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt25fraction9460->SetBetaAlpha(1);
   hybrideta16to21pt25fraction9460->SetBetaBeta(1);
   hybrideta16to21pt25fraction9460->SetWeight(1);
   hybrideta16to21pt25fraction9460->SetStatisticOption(0);
   hybrideta16to21pt25fraction9460->SetPosteriorMode(0);
   hybrideta16to21pt25fraction9460->SetShortestInterval(0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(0,0);
   hybrideta16to21pt25fraction9460->SetPassedEvents(0,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(1,0);
   hybrideta16to21pt25fraction9460->SetPassedEvents(1,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(2,868);
   hybrideta16to21pt25fraction9460->SetPassedEvents(2,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(3,1576);
   hybrideta16to21pt25fraction9460->SetPassedEvents(3,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(4,1626);
   hybrideta16to21pt25fraction9460->SetPassedEvents(4,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(5,1728);
   hybrideta16to21pt25fraction9460->SetPassedEvents(5,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(6,1728);
   hybrideta16to21pt25fraction9460->SetPassedEvents(6,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(7,1742);
   hybrideta16to21pt25fraction9460->SetPassedEvents(7,0);
   hybrideta16to21pt25fraction9460->SetTotalEvents(8,1652);
   hybrideta16to21pt25fraction9460->SetPassedEvents(8,2);
   hybrideta16to21pt25fraction9460->SetTotalEvents(9,1684);
   hybrideta16to21pt25fraction9460->SetPassedEvents(9,7);
   hybrideta16to21pt25fraction9460->SetTotalEvents(10,1736);
   hybrideta16to21pt25fraction9460->SetPassedEvents(10,7);
   hybrideta16to21pt25fraction9460->SetTotalEvents(11,1712);
   hybrideta16to21pt25fraction9460->SetPassedEvents(11,12);
   hybrideta16to21pt25fraction9460->SetTotalEvents(12,1714);
   hybrideta16to21pt25fraction9460->SetPassedEvents(12,27);
   hybrideta16to21pt25fraction9460->SetTotalEvents(13,1694);
   hybrideta16to21pt25fraction9460->SetPassedEvents(13,69);
   hybrideta16to21pt25fraction9460->SetTotalEvents(14,1704);
   hybrideta16to21pt25fraction9460->SetPassedEvents(14,103);
   hybrideta16to21pt25fraction9460->SetTotalEvents(15,1614);
   hybrideta16to21pt25fraction9460->SetPassedEvents(15,182);
   hybrideta16to21pt25fraction9460->SetTotalEvents(16,1756);
   hybrideta16to21pt25fraction9460->SetPassedEvents(16,276);
   hybrideta16to21pt25fraction9460->SetTotalEvents(17,1656);
   hybrideta16to21pt25fraction9460->SetPassedEvents(17,353);
   hybrideta16to21pt25fraction9460->SetTotalEvents(18,1674);
   hybrideta16to21pt25fraction9460->SetPassedEvents(18,546);
   hybrideta16to21pt25fraction9460->SetTotalEvents(19,1706);
   hybrideta16to21pt25fraction9460->SetPassedEvents(19,647);
   hybrideta16to21pt25fraction9460->SetTotalEvents(20,1620);
   hybrideta16to21pt25fraction9460->SetPassedEvents(20,798);
   hybrideta16to21pt25fraction9460->SetTotalEvents(21,1692);
   hybrideta16to21pt25fraction9460->SetPassedEvents(21,1017);
   hybrideta16to21pt25fraction9460->SetTotalEvents(22,1670);
   hybrideta16to21pt25fraction9460->SetPassedEvents(22,1086);
   hybrideta16to21pt25fraction9460->SetTotalEvents(23,1602);
   hybrideta16to21pt25fraction9460->SetPassedEvents(23,1140);
   hybrideta16to21pt25fraction9460->SetTotalEvents(24,1694);
   hybrideta16to21pt25fraction9460->SetPassedEvents(24,1289);
   hybrideta16to21pt25fraction9460->SetTotalEvents(25,1760);
   hybrideta16to21pt25fraction9460->SetPassedEvents(25,1372);
   hybrideta16to21pt25fraction9460->SetTotalEvents(26,1682);
   hybrideta16to21pt25fraction9460->SetPassedEvents(26,1366);
   hybrideta16to21pt25fraction9460->SetTotalEvents(27,1804);
   hybrideta16to21pt25fraction9460->SetPassedEvents(27,1514);
   hybrideta16to21pt25fraction9460->SetTotalEvents(28,1738);
   hybrideta16to21pt25fraction9460->SetPassedEvents(28,1490);
   hybrideta16to21pt25fraction9460->SetTotalEvents(29,1716);
   hybrideta16to21pt25fraction9460->SetPassedEvents(29,1473);
   hybrideta16to21pt25fraction9460->SetTotalEvents(30,1684);
   hybrideta16to21pt25fraction9460->SetPassedEvents(30,1477);
   hybrideta16to21pt25fraction9460->SetTotalEvents(31,1710);
   hybrideta16to21pt25fraction9460->SetPassedEvents(31,1511);
   hybrideta16to21pt25fraction9460->SetTotalEvents(32,1640);
   hybrideta16to21pt25fraction9460->SetPassedEvents(32,1456);
   hybrideta16to21pt25fraction9460->SetTotalEvents(33,1816);
   hybrideta16to21pt25fraction9460->SetPassedEvents(33,1620);
   hybrideta16to21pt25fraction9460->SetTotalEvents(34,1642);
   hybrideta16to21pt25fraction9460->SetPassedEvents(34,1444);
   hybrideta16to21pt25fraction9460->SetTotalEvents(35,1664);
   hybrideta16to21pt25fraction9460->SetPassedEvents(35,1513);
   hybrideta16to21pt25fraction9460->SetTotalEvents(36,1670);
   hybrideta16to21pt25fraction9460->SetPassedEvents(36,1503);
   hybrideta16to21pt25fraction9460->SetTotalEvents(37,1880);
   hybrideta16to21pt25fraction9460->SetPassedEvents(37,1677);
   hybrideta16to21pt25fraction9460->SetTotalEvents(38,1730);
   hybrideta16to21pt25fraction9460->SetPassedEvents(38,1565);
   hybrideta16to21pt25fraction9460->SetTotalEvents(39,1720);
   hybrideta16to21pt25fraction9460->SetPassedEvents(39,1543);
   hybrideta16to21pt25fraction9460->SetTotalEvents(40,1670);
   hybrideta16to21pt25fraction9460->SetPassedEvents(40,1512);
   hybrideta16to21pt25fraction9460->SetTotalEvents(41,1790);
   hybrideta16to21pt25fraction9460->SetPassedEvents(41,1629);
   hybrideta16to21pt25fraction9460->SetTotalEvents(42,1806);
   hybrideta16to21pt25fraction9460->SetPassedEvents(42,1660);
   hybrideta16to21pt25fraction9460->SetTotalEvents(43,1720);
   hybrideta16to21pt25fraction9460->SetPassedEvents(43,1563);
   hybrideta16to21pt25fraction9460->SetTotalEvents(44,1732);
   hybrideta16to21pt25fraction9460->SetPassedEvents(44,1569);
   hybrideta16to21pt25fraction9460->SetTotalEvents(45,1598);
   hybrideta16to21pt25fraction9460->SetPassedEvents(45,1468);
   hybrideta16to21pt25fraction9460->SetTotalEvents(46,1706);
   hybrideta16to21pt25fraction9460->SetPassedEvents(46,1566);
   hybrideta16to21pt25fraction9460->SetTotalEvents(47,1756);
   hybrideta16to21pt25fraction9460->SetPassedEvents(47,1603);
   hybrideta16to21pt25fraction9460->SetTotalEvents(48,1760);
   hybrideta16to21pt25fraction9460->SetPassedEvents(48,1612);
   hybrideta16to21pt25fraction9460->SetTotalEvents(49,1746);
   hybrideta16to21pt25fraction9460->SetPassedEvents(49,1600);
   hybrideta16to21pt25fraction9460->SetTotalEvents(50,1712);
   hybrideta16to21pt25fraction9460->SetPassedEvents(50,1559);
   hybrideta16to21pt25fraction9460->SetTotalEvents(51,18);
   hybrideta16to21pt25fraction9460->SetPassedEvents(51,17);
   hybrideta16to21pt25fraction9460->SetFillColor(19);
   hybrideta16to21pt25fraction9460->SetLineWidth(2);
   hybrideta16to21pt25fraction9460->SetMarkerStyle(21);
   hybrideta16to21pt25fraction9460->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt25fraction96","Phase-1+GE11(CSC+GE11)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt25fraction94","Phase-2(CSC+GE11+GE21+ME0)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.43,0.55,"p_{T}^{Trig} >25 GeV, 1.65<|#eta|<2.10");
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
