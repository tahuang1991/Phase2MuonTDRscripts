void GEMCSC_hybrid_eff_20170208_pt5_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:29:48 2017) by ROOT version6.08/06
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
   Double_t xAxis33[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__32 = new TH1F("b1__32"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis33);
   b1__32->SetMinimum(0);
   b1__32->SetMaximum(1.05);
   b1__32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__32->SetLineColor(ci);
   b1__32->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__32->GetXaxis()->SetLabelFont(42);
   b1__32->GetXaxis()->SetLabelSize(0.05);
   b1__32->GetXaxis()->SetTitleSize(0.05);
   b1__32->GetXaxis()->SetTitleFont(42);
   b1__32->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__32->GetYaxis()->SetNdivisions(520);
   b1__32->GetYaxis()->SetLabelFont(42);
   b1__32->GetYaxis()->SetLabelSize(0.05);
   b1__32->GetYaxis()->SetTitleSize(0.05);
   b1__32->GetYaxis()->SetTitleOffset(1.1);
   b1__32->GetYaxis()->SetTitleFont(42);
   b1__32->GetZaxis()->SetLabelFont(42);
   b1__32->GetZaxis()->SetLabelSize(0.035);
   b1__32->GetZaxis()->SetTitleSize(0.035);
   b1__32->GetZaxis()->SetTitleFont(42);
   b1__32->Draw("");
   Double_t xAxis52[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone52 = new TEfficiency("hden0_clone","",50,xAxis52);
   
   hden0_clone52->SetConfidenceLevel(0.6826895);
   hden0_clone52->SetBetaAlpha(1);
   hden0_clone52->SetBetaBeta(1);
   hden0_clone52->SetWeight(1);
   hden0_clone52->SetStatisticOption(0);
   hden0_clone52->SetPosteriorMode(0);
   hden0_clone52->SetShortestInterval(0);
   hden0_clone52->SetTotalEvents(0,0);
   hden0_clone52->SetPassedEvents(0,0);
   hden0_clone52->SetTotalEvents(1,0);
   hden0_clone52->SetPassedEvents(1,0);
   hden0_clone52->SetTotalEvents(2,868);
   hden0_clone52->SetPassedEvents(2,1);
   hden0_clone52->SetTotalEvents(3,1576);
   hden0_clone52->SetPassedEvents(3,21);
   hden0_clone52->SetTotalEvents(4,1626);
   hden0_clone52->SetPassedEvents(4,348);
   hden0_clone52->SetTotalEvents(5,1728);
   hden0_clone52->SetPassedEvents(5,1187);
   hden0_clone52->SetTotalEvents(6,1728);
   hden0_clone52->SetPassedEvents(6,1512);
   hden0_clone52->SetTotalEvents(7,1742);
   hden0_clone52->SetPassedEvents(7,1606);
   hden0_clone52->SetTotalEvents(8,1652);
   hden0_clone52->SetPassedEvents(8,1540);
   hden0_clone52->SetTotalEvents(9,1684);
   hden0_clone52->SetPassedEvents(9,1569);
   hden0_clone52->SetTotalEvents(10,1736);
   hden0_clone52->SetPassedEvents(10,1629);
   hden0_clone52->SetTotalEvents(11,1712);
   hden0_clone52->SetPassedEvents(11,1608);
   hden0_clone52->SetTotalEvents(12,1714);
   hden0_clone52->SetPassedEvents(12,1627);
   hden0_clone52->SetTotalEvents(13,1694);
   hden0_clone52->SetPassedEvents(13,1598);
   hden0_clone52->SetTotalEvents(14,1704);
   hden0_clone52->SetPassedEvents(14,1617);
   hden0_clone52->SetTotalEvents(15,1614);
   hden0_clone52->SetPassedEvents(15,1533);
   hden0_clone52->SetTotalEvents(16,1756);
   hden0_clone52->SetPassedEvents(16,1673);
   hden0_clone52->SetTotalEvents(17,1656);
   hden0_clone52->SetPassedEvents(17,1573);
   hden0_clone52->SetTotalEvents(18,1674);
   hden0_clone52->SetPassedEvents(18,1594);
   hden0_clone52->SetTotalEvents(19,1706);
   hden0_clone52->SetPassedEvents(19,1619);
   hden0_clone52->SetTotalEvents(20,1620);
   hden0_clone52->SetPassedEvents(20,1536);
   hden0_clone52->SetTotalEvents(21,1692);
   hden0_clone52->SetPassedEvents(21,1611);
   hden0_clone52->SetTotalEvents(22,1670);
   hden0_clone52->SetPassedEvents(22,1586);
   hden0_clone52->SetTotalEvents(23,1602);
   hden0_clone52->SetPassedEvents(23,1530);
   hden0_clone52->SetTotalEvents(24,1694);
   hden0_clone52->SetPassedEvents(24,1634);
   hden0_clone52->SetTotalEvents(25,1760);
   hden0_clone52->SetPassedEvents(25,1679);
   hden0_clone52->SetTotalEvents(26,1682);
   hden0_clone52->SetPassedEvents(26,1602);
   hden0_clone52->SetTotalEvents(27,1804);
   hden0_clone52->SetPassedEvents(27,1721);
   hden0_clone52->SetTotalEvents(28,1738);
   hden0_clone52->SetPassedEvents(28,1664);
   hden0_clone52->SetTotalEvents(29,1716);
   hden0_clone52->SetPassedEvents(29,1636);
   hden0_clone52->SetTotalEvents(30,1684);
   hden0_clone52->SetPassedEvents(30,1609);
   hden0_clone52->SetTotalEvents(31,1710);
   hden0_clone52->SetPassedEvents(31,1630);
   hden0_clone52->SetTotalEvents(32,1640);
   hden0_clone52->SetPassedEvents(32,1569);
   hden0_clone52->SetTotalEvents(33,1816);
   hden0_clone52->SetPassedEvents(33,1730);
   hden0_clone52->SetTotalEvents(34,1642);
   hden0_clone52->SetPassedEvents(34,1544);
   hden0_clone52->SetTotalEvents(35,1664);
   hden0_clone52->SetPassedEvents(35,1593);
   hden0_clone52->SetTotalEvents(36,1670);
   hden0_clone52->SetPassedEvents(36,1590);
   hden0_clone52->SetTotalEvents(37,1880);
   hden0_clone52->SetPassedEvents(37,1770);
   hden0_clone52->SetTotalEvents(38,1730);
   hden0_clone52->SetPassedEvents(38,1648);
   hden0_clone52->SetTotalEvents(39,1720);
   hden0_clone52->SetPassedEvents(39,1640);
   hden0_clone52->SetTotalEvents(40,1670);
   hden0_clone52->SetPassedEvents(40,1590);
   hden0_clone52->SetTotalEvents(41,1790);
   hden0_clone52->SetPassedEvents(41,1701);
   hden0_clone52->SetTotalEvents(42,1806);
   hden0_clone52->SetPassedEvents(42,1716);
   hden0_clone52->SetTotalEvents(43,1720);
   hden0_clone52->SetPassedEvents(43,1643);
   hden0_clone52->SetTotalEvents(44,1732);
   hden0_clone52->SetPassedEvents(44,1643);
   hden0_clone52->SetTotalEvents(45,1598);
   hden0_clone52->SetPassedEvents(45,1538);
   hden0_clone52->SetTotalEvents(46,1706);
   hden0_clone52->SetPassedEvents(46,1624);
   hden0_clone52->SetTotalEvents(47,1756);
   hden0_clone52->SetPassedEvents(47,1672);
   hden0_clone52->SetTotalEvents(48,1760);
   hden0_clone52->SetPassedEvents(48,1676);
   hden0_clone52->SetTotalEvents(49,1746);
   hden0_clone52->SetPassedEvents(49,1663);
   hden0_clone52->SetTotalEvents(50,1712);
   hden0_clone52->SetPassedEvents(50,1619);
   hden0_clone52->SetTotalEvents(51,18);
   hden0_clone52->SetPassedEvents(51,18);
   hden0_clone52->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone52->SetLineColor(ci);
   hden0_clone52->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone52->SetMarkerColor(ci);
   hden0_clone52->SetMarkerStyle(26);
   hden0_clone52->Draw("samezp");
   Double_t xAxis53[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone53 = new TEfficiency("hden1_clone","",50,xAxis53);
   
   hden1_clone53->SetConfidenceLevel(0.6826895);
   hden1_clone53->SetBetaAlpha(1);
   hden1_clone53->SetBetaBeta(1);
   hden1_clone53->SetWeight(1);
   hden1_clone53->SetStatisticOption(0);
   hden1_clone53->SetPosteriorMode(0);
   hden1_clone53->SetShortestInterval(0);
   hden1_clone53->SetTotalEvents(0,0);
   hden1_clone53->SetPassedEvents(0,0);
   hden1_clone53->SetTotalEvents(1,0);
   hden1_clone53->SetPassedEvents(1,0);
   hden1_clone53->SetTotalEvents(2,597);
   hden1_clone53->SetPassedEvents(2,0);
   hden1_clone53->SetTotalEvents(3,1089);
   hden1_clone53->SetPassedEvents(3,7);
   hden1_clone53->SetTotalEvents(4,1136);
   hden1_clone53->SetPassedEvents(4,224);
   hden1_clone53->SetTotalEvents(5,1198);
   hden1_clone53->SetPassedEvents(5,822);
   hden1_clone53->SetTotalEvents(6,1209);
   hden1_clone53->SetPassedEvents(6,1063);
   hden1_clone53->SetTotalEvents(7,1200);
   hden1_clone53->SetPassedEvents(7,1097);
   hden1_clone53->SetTotalEvents(8,1154);
   hden1_clone53->SetPassedEvents(8,1069);
   hden1_clone53->SetTotalEvents(9,1168);
   hden1_clone53->SetPassedEvents(9,1073);
   hden1_clone53->SetTotalEvents(10,1193);
   hden1_clone53->SetPassedEvents(10,1117);
   hden1_clone53->SetTotalEvents(11,1205);
   hden1_clone53->SetPassedEvents(11,1126);
   hden1_clone53->SetTotalEvents(12,1205);
   hden1_clone53->SetPassedEvents(12,1129);
   hden1_clone53->SetTotalEvents(13,1196);
   hden1_clone53->SetPassedEvents(13,1129);
   hden1_clone53->SetTotalEvents(14,1160);
   hden1_clone53->SetPassedEvents(14,1112);
   hden1_clone53->SetTotalEvents(15,1124);
   hden1_clone53->SetPassedEvents(15,1069);
   hden1_clone53->SetTotalEvents(16,1206);
   hden1_clone53->SetPassedEvents(16,1151);
   hden1_clone53->SetTotalEvents(17,1152);
   hden1_clone53->SetPassedEvents(17,1097);
   hden1_clone53->SetTotalEvents(18,1139);
   hden1_clone53->SetPassedEvents(18,1090);
   hden1_clone53->SetTotalEvents(19,1191);
   hden1_clone53->SetPassedEvents(19,1145);
   hden1_clone53->SetTotalEvents(20,1140);
   hden1_clone53->SetPassedEvents(20,1093);
   hden1_clone53->SetTotalEvents(21,1175);
   hden1_clone53->SetPassedEvents(21,1125);
   hden1_clone53->SetTotalEvents(22,1157);
   hden1_clone53->SetPassedEvents(22,1105);
   hden1_clone53->SetTotalEvents(23,1128);
   hden1_clone53->SetPassedEvents(23,1085);
   hden1_clone53->SetTotalEvents(24,1185);
   hden1_clone53->SetPassedEvents(24,1148);
   hden1_clone53->SetTotalEvents(25,1250);
   hden1_clone53->SetPassedEvents(25,1197);
   hden1_clone53->SetTotalEvents(26,1175);
   hden1_clone53->SetPassedEvents(26,1127);
   hden1_clone53->SetTotalEvents(27,1258);
   hden1_clone53->SetPassedEvents(27,1206);
   hden1_clone53->SetTotalEvents(28,1221);
   hden1_clone53->SetPassedEvents(28,1175);
   hden1_clone53->SetTotalEvents(29,1167);
   hden1_clone53->SetPassedEvents(29,1114);
   hden1_clone53->SetTotalEvents(30,1179);
   hden1_clone53->SetPassedEvents(30,1124);
   hden1_clone53->SetTotalEvents(31,1199);
   hden1_clone53->SetPassedEvents(31,1149);
   hden1_clone53->SetTotalEvents(32,1125);
   hden1_clone53->SetPassedEvents(32,1077);
   hden1_clone53->SetTotalEvents(33,1234);
   hden1_clone53->SetPassedEvents(33,1186);
   hden1_clone53->SetTotalEvents(34,1130);
   hden1_clone53->SetPassedEvents(34,1070);
   hden1_clone53->SetTotalEvents(35,1168);
   hden1_clone53->SetPassedEvents(35,1122);
   hden1_clone53->SetTotalEvents(36,1194);
   hden1_clone53->SetPassedEvents(36,1149);
   hden1_clone53->SetTotalEvents(37,1327);
   hden1_clone53->SetPassedEvents(37,1256);
   hden1_clone53->SetTotalEvents(38,1199);
   hden1_clone53->SetPassedEvents(38,1150);
   hden1_clone53->SetTotalEvents(39,1201);
   hden1_clone53->SetPassedEvents(39,1153);
   hden1_clone53->SetTotalEvents(40,1174);
   hden1_clone53->SetPassedEvents(40,1126);
   hden1_clone53->SetTotalEvents(41,1245);
   hden1_clone53->SetPassedEvents(41,1193);
   hden1_clone53->SetTotalEvents(42,1258);
   hden1_clone53->SetPassedEvents(42,1214);
   hden1_clone53->SetTotalEvents(43,1211);
   hden1_clone53->SetPassedEvents(43,1164);
   hden1_clone53->SetTotalEvents(44,1190);
   hden1_clone53->SetPassedEvents(44,1137);
   hden1_clone53->SetTotalEvents(45,1125);
   hden1_clone53->SetPassedEvents(45,1087);
   hden1_clone53->SetTotalEvents(46,1201);
   hden1_clone53->SetPassedEvents(46,1154);
   hden1_clone53->SetTotalEvents(47,1244);
   hden1_clone53->SetPassedEvents(47,1189);
   hden1_clone53->SetTotalEvents(48,1235);
   hden1_clone53->SetPassedEvents(48,1179);
   hden1_clone53->SetTotalEvents(49,1211);
   hden1_clone53->SetPassedEvents(49,1165);
   hden1_clone53->SetTotalEvents(50,1214);
   hden1_clone53->SetPassedEvents(50,1154);
   hden1_clone53->SetTotalEvents(51,13);
   hden1_clone53->SetPassedEvents(51,13);
   hden1_clone53->SetFillColor(19);
   hden1_clone53->SetLineWidth(2);
   hden1_clone53->SetMarkerStyle(21);
   hden1_clone53->Draw("samezp");
   Double_t xAxis54[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden2_clone54 = new TEfficiency("hden2_clone","",50,xAxis54);
   
   hden2_clone54->SetConfidenceLevel(0.6826895);
   hden2_clone54->SetBetaAlpha(1);
   hden2_clone54->SetBetaBeta(1);
   hden2_clone54->SetWeight(1);
   hden2_clone54->SetStatisticOption(0);
   hden2_clone54->SetPosteriorMode(0);
   hden2_clone54->SetShortestInterval(0);
   hden2_clone54->SetTotalEvents(0,0);
   hden2_clone54->SetPassedEvents(0,0);
   hden2_clone54->SetTotalEvents(1,0);
   hden2_clone54->SetPassedEvents(1,0);
   hden2_clone54->SetTotalEvents(2,271);
   hden2_clone54->SetPassedEvents(2,0);
   hden2_clone54->SetTotalEvents(3,487);
   hden2_clone54->SetPassedEvents(3,11);
   hden2_clone54->SetTotalEvents(4,490);
   hden2_clone54->SetPassedEvents(4,119);
   hden2_clone54->SetTotalEvents(5,530);
   hden2_clone54->SetPassedEvents(5,347);
   hden2_clone54->SetTotalEvents(6,519);
   hden2_clone54->SetPassedEvents(6,435);
   hden2_clone54->SetTotalEvents(7,542);
   hden2_clone54->SetPassedEvents(7,492);
   hden2_clone54->SetTotalEvents(8,498);
   hden2_clone54->SetPassedEvents(8,454);
   hden2_clone54->SetTotalEvents(9,516);
   hden2_clone54->SetPassedEvents(9,481);
   hden2_clone54->SetTotalEvents(10,543);
   hden2_clone54->SetPassedEvents(10,503);
   hden2_clone54->SetTotalEvents(11,507);
   hden2_clone54->SetPassedEvents(11,465);
   hden2_clone54->SetTotalEvents(12,509);
   hden2_clone54->SetPassedEvents(12,489);
   hden2_clone54->SetTotalEvents(13,498);
   hden2_clone54->SetPassedEvents(13,460);
   hden2_clone54->SetTotalEvents(14,544);
   hden2_clone54->SetPassedEvents(14,500);
   hden2_clone54->SetTotalEvents(15,490);
   hden2_clone54->SetPassedEvents(15,461);
   hden2_clone54->SetTotalEvents(16,550);
   hden2_clone54->SetPassedEvents(16,519);
   hden2_clone54->SetTotalEvents(17,504);
   hden2_clone54->SetPassedEvents(17,471);
   hden2_clone54->SetTotalEvents(18,535);
   hden2_clone54->SetPassedEvents(18,504);
   hden2_clone54->SetTotalEvents(19,515);
   hden2_clone54->SetPassedEvents(19,473);
   hden2_clone54->SetTotalEvents(20,480);
   hden2_clone54->SetPassedEvents(20,443);
   hden2_clone54->SetTotalEvents(21,517);
   hden2_clone54->SetPassedEvents(21,486);
   hden2_clone54->SetTotalEvents(22,513);
   hden2_clone54->SetPassedEvents(22,480);
   hden2_clone54->SetTotalEvents(23,474);
   hden2_clone54->SetPassedEvents(23,443);
   hden2_clone54->SetTotalEvents(24,509);
   hden2_clone54->SetPassedEvents(24,485);
   hden2_clone54->SetTotalEvents(25,510);
   hden2_clone54->SetPassedEvents(25,482);
   hden2_clone54->SetTotalEvents(26,507);
   hden2_clone54->SetPassedEvents(26,475);
   hden2_clone54->SetTotalEvents(27,546);
   hden2_clone54->SetPassedEvents(27,512);
   hden2_clone54->SetTotalEvents(28,517);
   hden2_clone54->SetPassedEvents(28,487);
   hden2_clone54->SetTotalEvents(29,549);
   hden2_clone54->SetPassedEvents(29,521);
   hden2_clone54->SetTotalEvents(30,505);
   hden2_clone54->SetPassedEvents(30,481);
   hden2_clone54->SetTotalEvents(31,511);
   hden2_clone54->SetPassedEvents(31,479);
   hden2_clone54->SetTotalEvents(32,515);
   hden2_clone54->SetPassedEvents(32,488);
   hden2_clone54->SetTotalEvents(33,582);
   hden2_clone54->SetPassedEvents(33,544);
   hden2_clone54->SetTotalEvents(34,512);
   hden2_clone54->SetPassedEvents(34,474);
   hden2_clone54->SetTotalEvents(35,496);
   hden2_clone54->SetPassedEvents(35,470);
   hden2_clone54->SetTotalEvents(36,476);
   hden2_clone54->SetPassedEvents(36,441);
   hden2_clone54->SetTotalEvents(37,553);
   hden2_clone54->SetPassedEvents(37,512);
   hden2_clone54->SetTotalEvents(38,531);
   hden2_clone54->SetPassedEvents(38,497);
   hden2_clone54->SetTotalEvents(39,519);
   hden2_clone54->SetPassedEvents(39,486);
   hden2_clone54->SetTotalEvents(40,496);
   hden2_clone54->SetPassedEvents(40,462);
   hden2_clone54->SetTotalEvents(41,545);
   hden2_clone54->SetPassedEvents(41,508);
   hden2_clone54->SetTotalEvents(42,548);
   hden2_clone54->SetPassedEvents(42,502);
   hden2_clone54->SetTotalEvents(43,509);
   hden2_clone54->SetPassedEvents(43,479);
   hden2_clone54->SetTotalEvents(44,542);
   hden2_clone54->SetPassedEvents(44,506);
   hden2_clone54->SetTotalEvents(45,473);
   hden2_clone54->SetPassedEvents(45,450);
   hden2_clone54->SetTotalEvents(46,505);
   hden2_clone54->SetPassedEvents(46,470);
   hden2_clone54->SetTotalEvents(47,512);
   hden2_clone54->SetPassedEvents(47,482);
   hden2_clone54->SetTotalEvents(48,525);
   hden2_clone54->SetPassedEvents(48,494);
   hden2_clone54->SetTotalEvents(49,535);
   hden2_clone54->SetPassedEvents(49,498);
   hden2_clone54->SetTotalEvents(50,498);
   hden2_clone54->SetPassedEvents(50,465);
   hden2_clone54->SetTotalEvents(51,5);
   hden2_clone54->SetPassedEvents(51,5);
   hden2_clone54->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden2_clone54->SetLineColor(ci);
   hden2_clone54->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden2_clone54->SetMarkerColor(ci);
   hden2_clone54->SetMarkerStyle(25);
   hden2_clone54->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>5 GeV");
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
