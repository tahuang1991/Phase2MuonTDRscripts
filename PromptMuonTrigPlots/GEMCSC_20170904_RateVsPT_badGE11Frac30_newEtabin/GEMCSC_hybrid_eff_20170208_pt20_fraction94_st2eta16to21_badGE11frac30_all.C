void GEMCSC_hybrid_eff_20170208_pt20_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:35 2017) by ROOT version6.08/06
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
   Double_t xAxis657[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__630 = new TH1F("b1__630"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis657);
   b1__630->SetMinimum(0);
   b1__630->SetMaximum(1.05);
   b1__630->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__630->SetLineColor(ci);
   b1__630->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__630->GetXaxis()->SetLabelFont(42);
   b1__630->GetXaxis()->SetLabelSize(0.05);
   b1__630->GetXaxis()->SetTitleSize(0.05);
   b1__630->GetXaxis()->SetTitleFont(42);
   b1__630->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__630->GetYaxis()->SetNdivisions(520);
   b1__630->GetYaxis()->SetLabelFont(42);
   b1__630->GetYaxis()->SetLabelSize(0.05);
   b1__630->GetYaxis()->SetTitleSize(0.05);
   b1__630->GetYaxis()->SetTitleOffset(1.1);
   b1__630->GetYaxis()->SetTitleFont(42);
   b1__630->GetZaxis()->SetLabelFont(42);
   b1__630->GetZaxis()->SetLabelSize(0.035);
   b1__630->GetZaxis()->SetTitleSize(0.035);
   b1__630->GetZaxis()->SetTitleFont(42);
   b1__630->Draw("");
   Double_t xAxis1170[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone1170 = new TEfficiency("hden0_clone","",50,xAxis1170);
   
   hden0_clone1170->SetConfidenceLevel(0.6826895);
   hden0_clone1170->SetBetaAlpha(1);
   hden0_clone1170->SetBetaBeta(1);
   hden0_clone1170->SetWeight(1);
   hden0_clone1170->SetStatisticOption(0);
   hden0_clone1170->SetPosteriorMode(0);
   hden0_clone1170->SetShortestInterval(0);
   hden0_clone1170->SetTotalEvents(0,0);
   hden0_clone1170->SetPassedEvents(0,0);
   hden0_clone1170->SetTotalEvents(1,0);
   hden0_clone1170->SetPassedEvents(1,0);
   hden0_clone1170->SetTotalEvents(2,868);
   hden0_clone1170->SetPassedEvents(2,0);
   hden0_clone1170->SetTotalEvents(3,1576);
   hden0_clone1170->SetPassedEvents(3,0);
   hden0_clone1170->SetTotalEvents(4,1626);
   hden0_clone1170->SetPassedEvents(4,1);
   hden0_clone1170->SetTotalEvents(5,1728);
   hden0_clone1170->SetPassedEvents(5,1);
   hden0_clone1170->SetTotalEvents(6,1728);
   hden0_clone1170->SetPassedEvents(6,5);
   hden0_clone1170->SetTotalEvents(7,1742);
   hden0_clone1170->SetPassedEvents(7,5);
   hden0_clone1170->SetTotalEvents(8,1652);
   hden0_clone1170->SetPassedEvents(8,11);
   hden0_clone1170->SetTotalEvents(9,1684);
   hden0_clone1170->SetPassedEvents(9,21);
   hden0_clone1170->SetTotalEvents(10,1736);
   hden0_clone1170->SetPassedEvents(10,40);
   hden0_clone1170->SetTotalEvents(11,1712);
   hden0_clone1170->SetPassedEvents(11,80);
   hden0_clone1170->SetTotalEvents(12,1714);
   hden0_clone1170->SetPassedEvents(12,150);
   hden0_clone1170->SetTotalEvents(13,1694);
   hden0_clone1170->SetPassedEvents(13,276);
   hden0_clone1170->SetTotalEvents(14,1704);
   hden0_clone1170->SetPassedEvents(14,419);
   hden0_clone1170->SetTotalEvents(15,1614);
   hden0_clone1170->SetPassedEvents(15,581);
   hden0_clone1170->SetTotalEvents(16,1756);
   hden0_clone1170->SetPassedEvents(16,776);
   hden0_clone1170->SetTotalEvents(17,1656);
   hden0_clone1170->SetPassedEvents(17,908);
   hden0_clone1170->SetTotalEvents(18,1674);
   hden0_clone1170->SetPassedEvents(18,1095);
   hden0_clone1170->SetTotalEvents(19,1706);
   hden0_clone1170->SetPassedEvents(19,1246);
   hden0_clone1170->SetTotalEvents(20,1620);
   hden0_clone1170->SetPassedEvents(20,1258);
   hden0_clone1170->SetTotalEvents(21,1692);
   hden0_clone1170->SetPassedEvents(21,1399);
   hden0_clone1170->SetTotalEvents(22,1670);
   hden0_clone1170->SetPassedEvents(22,1383);
   hden0_clone1170->SetTotalEvents(23,1602);
   hden0_clone1170->SetPassedEvents(23,1362);
   hden0_clone1170->SetTotalEvents(24,1694);
   hden0_clone1170->SetPassedEvents(24,1479);
   hden0_clone1170->SetTotalEvents(25,1760);
   hden0_clone1170->SetPassedEvents(25,1536);
   hden0_clone1170->SetTotalEvents(26,1682);
   hden0_clone1170->SetPassedEvents(26,1466);
   hden0_clone1170->SetTotalEvents(27,1804);
   hden0_clone1170->SetPassedEvents(27,1616);
   hden0_clone1170->SetTotalEvents(28,1738);
   hden0_clone1170->SetPassedEvents(28,1561);
   hden0_clone1170->SetTotalEvents(29,1716);
   hden0_clone1170->SetPassedEvents(29,1522);
   hden0_clone1170->SetTotalEvents(30,1684);
   hden0_clone1170->SetPassedEvents(30,1515);
   hden0_clone1170->SetTotalEvents(31,1710);
   hden0_clone1170->SetPassedEvents(31,1528);
   hden0_clone1170->SetTotalEvents(32,1640);
   hden0_clone1170->SetPassedEvents(32,1477);
   hden0_clone1170->SetTotalEvents(33,1816);
   hden0_clone1170->SetPassedEvents(33,1631);
   hden0_clone1170->SetTotalEvents(34,1642);
   hden0_clone1170->SetPassedEvents(34,1450);
   hden0_clone1170->SetTotalEvents(35,1664);
   hden0_clone1170->SetPassedEvents(35,1514);
   hden0_clone1170->SetTotalEvents(36,1670);
   hden0_clone1170->SetPassedEvents(36,1508);
   hden0_clone1170->SetTotalEvents(37,1880);
   hden0_clone1170->SetPassedEvents(37,1664);
   hden0_clone1170->SetTotalEvents(38,1730);
   hden0_clone1170->SetPassedEvents(38,1579);
   hden0_clone1170->SetTotalEvents(39,1720);
   hden0_clone1170->SetPassedEvents(39,1545);
   hden0_clone1170->SetTotalEvents(40,1670);
   hden0_clone1170->SetPassedEvents(40,1514);
   hden0_clone1170->SetTotalEvents(41,1790);
   hden0_clone1170->SetPassedEvents(41,1633);
   hden0_clone1170->SetTotalEvents(42,1806);
   hden0_clone1170->SetPassedEvents(42,1644);
   hden0_clone1170->SetTotalEvents(43,1720);
   hden0_clone1170->SetPassedEvents(43,1562);
   hden0_clone1170->SetTotalEvents(44,1732);
   hden0_clone1170->SetPassedEvents(44,1549);
   hden0_clone1170->SetTotalEvents(45,1598);
   hden0_clone1170->SetPassedEvents(45,1469);
   hden0_clone1170->SetTotalEvents(46,1706);
   hden0_clone1170->SetPassedEvents(46,1553);
   hden0_clone1170->SetTotalEvents(47,1756);
   hden0_clone1170->SetPassedEvents(47,1593);
   hden0_clone1170->SetTotalEvents(48,1760);
   hden0_clone1170->SetPassedEvents(48,1592);
   hden0_clone1170->SetTotalEvents(49,1746);
   hden0_clone1170->SetPassedEvents(49,1595);
   hden0_clone1170->SetTotalEvents(50,1712);
   hden0_clone1170->SetPassedEvents(50,1553);
   hden0_clone1170->SetTotalEvents(51,18);
   hden0_clone1170->SetPassedEvents(51,17);
   hden0_clone1170->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1170->SetLineColor(ci);
   hden0_clone1170->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1170->SetMarkerColor(ci);
   hden0_clone1170->SetMarkerStyle(26);
   hden0_clone1170->Draw("samezp");
   Double_t xAxis1171[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone1171 = new TEfficiency("hden1_clone","",50,xAxis1171);
   
   hden1_clone1171->SetConfidenceLevel(0.6826895);
   hden1_clone1171->SetBetaAlpha(1);
   hden1_clone1171->SetBetaBeta(1);
   hden1_clone1171->SetWeight(1);
   hden1_clone1171->SetStatisticOption(0);
   hden1_clone1171->SetPosteriorMode(0);
   hden1_clone1171->SetShortestInterval(0);
   hden1_clone1171->SetTotalEvents(0,0);
   hden1_clone1171->SetPassedEvents(0,0);
   hden1_clone1171->SetTotalEvents(1,0);
   hden1_clone1171->SetPassedEvents(1,0);
   hden1_clone1171->SetTotalEvents(2,597);
   hden1_clone1171->SetPassedEvents(2,0);
   hden1_clone1171->SetTotalEvents(3,1089);
   hden1_clone1171->SetPassedEvents(3,0);
   hden1_clone1171->SetTotalEvents(4,1136);
   hden1_clone1171->SetPassedEvents(4,0);
   hden1_clone1171->SetTotalEvents(5,1198);
   hden1_clone1171->SetPassedEvents(5,0);
   hden1_clone1171->SetTotalEvents(6,1209);
   hden1_clone1171->SetPassedEvents(6,0);
   hden1_clone1171->SetTotalEvents(7,1200);
   hden1_clone1171->SetPassedEvents(7,0);
   hden1_clone1171->SetTotalEvents(8,1154);
   hden1_clone1171->SetPassedEvents(8,3);
   hden1_clone1171->SetTotalEvents(9,1168);
   hden1_clone1171->SetPassedEvents(9,9);
   hden1_clone1171->SetTotalEvents(10,1193);
   hden1_clone1171->SetPassedEvents(10,17);
   hden1_clone1171->SetTotalEvents(11,1205);
   hden1_clone1171->SetPassedEvents(11,42);
   hden1_clone1171->SetTotalEvents(12,1205);
   hden1_clone1171->SetPassedEvents(12,93);
   hden1_clone1171->SetTotalEvents(13,1196);
   hden1_clone1171->SetPassedEvents(13,182);
   hden1_clone1171->SetTotalEvents(14,1160);
   hden1_clone1171->SetPassedEvents(14,272);
   hden1_clone1171->SetTotalEvents(15,1124);
   hden1_clone1171->SetPassedEvents(15,390);
   hden1_clone1171->SetTotalEvents(16,1206);
   hden1_clone1171->SetPassedEvents(16,515);
   hden1_clone1171->SetTotalEvents(17,1152);
   hden1_clone1171->SetPassedEvents(17,616);
   hden1_clone1171->SetTotalEvents(18,1139);
   hden1_clone1171->SetPassedEvents(18,751);
   hden1_clone1171->SetTotalEvents(19,1191);
   hden1_clone1171->SetPassedEvents(19,857);
   hden1_clone1171->SetTotalEvents(20,1140);
   hden1_clone1171->SetPassedEvents(20,893);
   hden1_clone1171->SetTotalEvents(21,1175);
   hden1_clone1171->SetPassedEvents(21,970);
   hden1_clone1171->SetTotalEvents(22,1157);
   hden1_clone1171->SetPassedEvents(22,962);
   hden1_clone1171->SetTotalEvents(23,1128);
   hden1_clone1171->SetPassedEvents(23,963);
   hden1_clone1171->SetTotalEvents(24,1185);
   hden1_clone1171->SetPassedEvents(24,1045);
   hden1_clone1171->SetTotalEvents(25,1250);
   hden1_clone1171->SetPassedEvents(25,1101);
   hden1_clone1171->SetTotalEvents(26,1175);
   hden1_clone1171->SetPassedEvents(26,1029);
   hden1_clone1171->SetTotalEvents(27,1258);
   hden1_clone1171->SetPassedEvents(27,1136);
   hden1_clone1171->SetTotalEvents(28,1221);
   hden1_clone1171->SetPassedEvents(28,1116);
   hden1_clone1171->SetTotalEvents(29,1167);
   hden1_clone1171->SetPassedEvents(29,1051);
   hden1_clone1171->SetTotalEvents(30,1179);
   hden1_clone1171->SetPassedEvents(30,1073);
   hden1_clone1171->SetTotalEvents(31,1199);
   hden1_clone1171->SetPassedEvents(31,1086);
   hden1_clone1171->SetTotalEvents(32,1125);
   hden1_clone1171->SetPassedEvents(32,1017);
   hden1_clone1171->SetTotalEvents(33,1234);
   hden1_clone1171->SetPassedEvents(33,1130);
   hden1_clone1171->SetTotalEvents(34,1130);
   hden1_clone1171->SetPassedEvents(34,1008);
   hden1_clone1171->SetTotalEvents(35,1168);
   hden1_clone1171->SetPassedEvents(35,1074);
   hden1_clone1171->SetTotalEvents(36,1194);
   hden1_clone1171->SetPassedEvents(36,1090);
   hden1_clone1171->SetTotalEvents(37,1327);
   hden1_clone1171->SetPassedEvents(37,1192);
   hden1_clone1171->SetTotalEvents(38,1199);
   hden1_clone1171->SetPassedEvents(38,1102);
   hden1_clone1171->SetTotalEvents(39,1201);
   hden1_clone1171->SetPassedEvents(39,1092);
   hden1_clone1171->SetTotalEvents(40,1174);
   hden1_clone1171->SetPassedEvents(40,1090);
   hden1_clone1171->SetTotalEvents(41,1245);
   hden1_clone1171->SetPassedEvents(41,1150);
   hden1_clone1171->SetTotalEvents(42,1258);
   hden1_clone1171->SetPassedEvents(42,1166);
   hden1_clone1171->SetTotalEvents(43,1211);
   hden1_clone1171->SetPassedEvents(43,1117);
   hden1_clone1171->SetTotalEvents(44,1190);
   hden1_clone1171->SetPassedEvents(44,1070);
   hden1_clone1171->SetTotalEvents(45,1125);
   hden1_clone1171->SetPassedEvents(45,1043);
   hden1_clone1171->SetTotalEvents(46,1201);
   hden1_clone1171->SetPassedEvents(46,1102);
   hden1_clone1171->SetTotalEvents(47,1244);
   hden1_clone1171->SetPassedEvents(47,1143);
   hden1_clone1171->SetTotalEvents(48,1235);
   hden1_clone1171->SetPassedEvents(48,1130);
   hden1_clone1171->SetTotalEvents(49,1211);
   hden1_clone1171->SetPassedEvents(49,1121);
   hden1_clone1171->SetTotalEvents(50,1214);
   hden1_clone1171->SetPassedEvents(50,1111);
   hden1_clone1171->SetTotalEvents(51,13);
   hden1_clone1171->SetPassedEvents(51,12);
   hden1_clone1171->SetFillColor(19);
   hden1_clone1171->SetLineWidth(2);
   hden1_clone1171->SetMarkerStyle(21);
   hden1_clone1171->Draw("samezp");
   Double_t xAxis1172[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden2_clone1172 = new TEfficiency("hden2_clone","",50,xAxis1172);
   
   hden2_clone1172->SetConfidenceLevel(0.6826895);
   hden2_clone1172->SetBetaAlpha(1);
   hden2_clone1172->SetBetaBeta(1);
   hden2_clone1172->SetWeight(1);
   hden2_clone1172->SetStatisticOption(0);
   hden2_clone1172->SetPosteriorMode(0);
   hden2_clone1172->SetShortestInterval(0);
   hden2_clone1172->SetTotalEvents(0,0);
   hden2_clone1172->SetPassedEvents(0,0);
   hden2_clone1172->SetTotalEvents(1,0);
   hden2_clone1172->SetPassedEvents(1,0);
   hden2_clone1172->SetTotalEvents(2,271);
   hden2_clone1172->SetPassedEvents(2,0);
   hden2_clone1172->SetTotalEvents(3,487);
   hden2_clone1172->SetPassedEvents(3,0);
   hden2_clone1172->SetTotalEvents(4,490);
   hden2_clone1172->SetPassedEvents(4,1);
   hden2_clone1172->SetTotalEvents(5,530);
   hden2_clone1172->SetPassedEvents(5,0);
   hden2_clone1172->SetTotalEvents(6,519);
   hden2_clone1172->SetPassedEvents(6,5);
   hden2_clone1172->SetTotalEvents(7,542);
   hden2_clone1172->SetPassedEvents(7,5);
   hden2_clone1172->SetTotalEvents(8,498);
   hden2_clone1172->SetPassedEvents(8,8);
   hden2_clone1172->SetTotalEvents(9,516);
   hden2_clone1172->SetPassedEvents(9,12);
   hden2_clone1172->SetTotalEvents(10,543);
   hden2_clone1172->SetPassedEvents(10,23);
   hden2_clone1172->SetTotalEvents(11,507);
   hden2_clone1172->SetPassedEvents(11,38);
   hden2_clone1172->SetTotalEvents(12,509);
   hden2_clone1172->SetPassedEvents(12,57);
   hden2_clone1172->SetTotalEvents(13,498);
   hden2_clone1172->SetPassedEvents(13,93);
   hden2_clone1172->SetTotalEvents(14,544);
   hden2_clone1172->SetPassedEvents(14,146);
   hden2_clone1172->SetTotalEvents(15,490);
   hden2_clone1172->SetPassedEvents(15,191);
   hden2_clone1172->SetTotalEvents(16,550);
   hden2_clone1172->SetPassedEvents(16,261);
   hden2_clone1172->SetTotalEvents(17,504);
   hden2_clone1172->SetPassedEvents(17,291);
   hden2_clone1172->SetTotalEvents(18,535);
   hden2_clone1172->SetPassedEvents(18,344);
   hden2_clone1172->SetTotalEvents(19,515);
   hden2_clone1172->SetPassedEvents(19,388);
   hden2_clone1172->SetTotalEvents(20,480);
   hden2_clone1172->SetPassedEvents(20,365);
   hden2_clone1172->SetTotalEvents(21,517);
   hden2_clone1172->SetPassedEvents(21,429);
   hden2_clone1172->SetTotalEvents(22,513);
   hden2_clone1172->SetPassedEvents(22,420);
   hden2_clone1172->SetTotalEvents(23,474);
   hden2_clone1172->SetPassedEvents(23,398);
   hden2_clone1172->SetTotalEvents(24,509);
   hden2_clone1172->SetPassedEvents(24,433);
   hden2_clone1172->SetTotalEvents(25,510);
   hden2_clone1172->SetPassedEvents(25,435);
   hden2_clone1172->SetTotalEvents(26,507);
   hden2_clone1172->SetPassedEvents(26,437);
   hden2_clone1172->SetTotalEvents(27,546);
   hden2_clone1172->SetPassedEvents(27,477);
   hden2_clone1172->SetTotalEvents(28,517);
   hden2_clone1172->SetPassedEvents(28,443);
   hden2_clone1172->SetTotalEvents(29,549);
   hden2_clone1172->SetPassedEvents(29,470);
   hden2_clone1172->SetTotalEvents(30,505);
   hden2_clone1172->SetPassedEvents(30,438);
   hden2_clone1172->SetTotalEvents(31,511);
   hden2_clone1172->SetPassedEvents(31,440);
   hden2_clone1172->SetTotalEvents(32,515);
   hden2_clone1172->SetPassedEvents(32,456);
   hden2_clone1172->SetTotalEvents(33,582);
   hden2_clone1172->SetPassedEvents(33,501);
   hden2_clone1172->SetTotalEvents(34,512);
   hden2_clone1172->SetPassedEvents(34,442);
   hden2_clone1172->SetTotalEvents(35,496);
   hden2_clone1172->SetPassedEvents(35,439);
   hden2_clone1172->SetTotalEvents(36,476);
   hden2_clone1172->SetPassedEvents(36,418);
   hden2_clone1172->SetTotalEvents(37,553);
   hden2_clone1172->SetPassedEvents(37,470);
   hden2_clone1172->SetTotalEvents(38,531);
   hden2_clone1172->SetPassedEvents(38,476);
   hden2_clone1172->SetTotalEvents(39,519);
   hden2_clone1172->SetPassedEvents(39,452);
   hden2_clone1172->SetTotalEvents(40,496);
   hden2_clone1172->SetPassedEvents(40,422);
   hden2_clone1172->SetTotalEvents(41,545);
   hden2_clone1172->SetPassedEvents(41,483);
   hden2_clone1172->SetTotalEvents(42,548);
   hden2_clone1172->SetPassedEvents(42,478);
   hden2_clone1172->SetTotalEvents(43,509);
   hden2_clone1172->SetPassedEvents(43,445);
   hden2_clone1172->SetTotalEvents(44,542);
   hden2_clone1172->SetPassedEvents(44,479);
   hden2_clone1172->SetTotalEvents(45,473);
   hden2_clone1172->SetPassedEvents(45,425);
   hden2_clone1172->SetTotalEvents(46,505);
   hden2_clone1172->SetPassedEvents(46,451);
   hden2_clone1172->SetTotalEvents(47,512);
   hden2_clone1172->SetPassedEvents(47,449);
   hden2_clone1172->SetTotalEvents(48,525);
   hden2_clone1172->SetPassedEvents(48,460);
   hden2_clone1172->SetTotalEvents(49,535);
   hden2_clone1172->SetPassedEvents(49,474);
   hden2_clone1172->SetTotalEvents(50,498);
   hden2_clone1172->SetPassedEvents(50,442);
   hden2_clone1172->SetTotalEvents(51,5);
   hden2_clone1172->SetPassedEvents(51,5);
   hden2_clone1172->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden2_clone1172->SetLineColor(ci);
   hden2_clone1172->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden2_clone1172->SetMarkerColor(ci);
   hden2_clone1172->SetMarkerStyle(25);
   hden2_clone1172->Draw("samezp");
   
   TLegend *leg = new TLegend(0.42,0.2,0.88,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GE11-ME11 and GE21-ME21","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","combined","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","good muons (0.70)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden2_clone","bad muons(0.30)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>20 GeV");
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
