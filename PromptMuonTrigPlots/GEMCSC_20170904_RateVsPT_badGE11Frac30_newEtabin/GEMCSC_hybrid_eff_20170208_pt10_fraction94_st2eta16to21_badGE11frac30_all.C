void GEMCSC_hybrid_eff_20170208_pt10_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:32:19 2017) by ROOT version6.08/06
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
   Double_t xAxis273[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__262 = new TH1F("b1__262"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis273);
   b1__262->SetMinimum(0);
   b1__262->SetMaximum(1.05);
   b1__262->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__262->SetLineColor(ci);
   b1__262->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__262->GetXaxis()->SetLabelFont(42);
   b1__262->GetXaxis()->SetLabelSize(0.05);
   b1__262->GetXaxis()->SetTitleSize(0.05);
   b1__262->GetXaxis()->SetTitleFont(42);
   b1__262->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__262->GetYaxis()->SetNdivisions(520);
   b1__262->GetYaxis()->SetLabelFont(42);
   b1__262->GetYaxis()->SetLabelSize(0.05);
   b1__262->GetYaxis()->SetTitleSize(0.05);
   b1__262->GetYaxis()->SetTitleOffset(1.1);
   b1__262->GetYaxis()->SetTitleFont(42);
   b1__262->GetZaxis()->SetLabelFont(42);
   b1__262->GetZaxis()->SetLabelSize(0.035);
   b1__262->GetZaxis()->SetTitleSize(0.035);
   b1__262->GetZaxis()->SetTitleFont(42);
   b1__262->Draw("");
   Double_t xAxis482[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone482 = new TEfficiency("hden0_clone","",50,xAxis482);
   
   hden0_clone482->SetConfidenceLevel(0.6826895);
   hden0_clone482->SetBetaAlpha(1);
   hden0_clone482->SetBetaBeta(1);
   hden0_clone482->SetWeight(1);
   hden0_clone482->SetStatisticOption(0);
   hden0_clone482->SetPosteriorMode(0);
   hden0_clone482->SetShortestInterval(0);
   hden0_clone482->SetTotalEvents(0,0);
   hden0_clone482->SetPassedEvents(0,0);
   hden0_clone482->SetTotalEvents(1,0);
   hden0_clone482->SetPassedEvents(1,0);
   hden0_clone482->SetTotalEvents(2,868);
   hden0_clone482->SetPassedEvents(2,0);
   hden0_clone482->SetTotalEvents(3,1576);
   hden0_clone482->SetPassedEvents(3,2);
   hden0_clone482->SetTotalEvents(4,1626);
   hden0_clone482->SetPassedEvents(4,6);
   hden0_clone482->SetTotalEvents(5,1728);
   hden0_clone482->SetPassedEvents(5,14);
   hden0_clone482->SetTotalEvents(6,1728);
   hden0_clone482->SetPassedEvents(6,53);
   hden0_clone482->SetTotalEvents(7,1742);
   hden0_clone482->SetPassedEvents(7,244);
   hden0_clone482->SetTotalEvents(8,1652);
   hden0_clone482->SetPassedEvents(8,548);
   hden0_clone482->SetTotalEvents(9,1684);
   hden0_clone482->SetPassedEvents(9,972);
   hden0_clone482->SetTotalEvents(10,1736);
   hden0_clone482->SetPassedEvents(10,1325);
   hden0_clone482->SetTotalEvents(11,1712);
   hden0_clone482->SetPassedEvents(11,1414);
   hden0_clone482->SetTotalEvents(12,1714);
   hden0_clone482->SetPassedEvents(12,1528);
   hden0_clone482->SetTotalEvents(13,1694);
   hden0_clone482->SetPassedEvents(13,1519);
   hden0_clone482->SetTotalEvents(14,1704);
   hden0_clone482->SetPassedEvents(14,1544);
   hden0_clone482->SetTotalEvents(15,1614);
   hden0_clone482->SetPassedEvents(15,1469);
   hden0_clone482->SetTotalEvents(16,1756);
   hden0_clone482->SetPassedEvents(16,1605);
   hden0_clone482->SetTotalEvents(17,1656);
   hden0_clone482->SetPassedEvents(17,1516);
   hden0_clone482->SetTotalEvents(18,1674);
   hden0_clone482->SetPassedEvents(18,1531);
   hden0_clone482->SetTotalEvents(19,1706);
   hden0_clone482->SetPassedEvents(19,1569);
   hden0_clone482->SetTotalEvents(20,1620);
   hden0_clone482->SetPassedEvents(20,1496);
   hden0_clone482->SetTotalEvents(21,1692);
   hden0_clone482->SetPassedEvents(21,1571);
   hden0_clone482->SetTotalEvents(22,1670);
   hden0_clone482->SetPassedEvents(22,1533);
   hden0_clone482->SetTotalEvents(23,1602);
   hden0_clone482->SetPassedEvents(23,1485);
   hden0_clone482->SetTotalEvents(24,1694);
   hden0_clone482->SetPassedEvents(24,1592);
   hden0_clone482->SetTotalEvents(25,1760);
   hden0_clone482->SetPassedEvents(25,1640);
   hden0_clone482->SetTotalEvents(26,1682);
   hden0_clone482->SetPassedEvents(26,1558);
   hden0_clone482->SetTotalEvents(27,1804);
   hden0_clone482->SetPassedEvents(27,1686);
   hden0_clone482->SetTotalEvents(28,1738);
   hden0_clone482->SetPassedEvents(28,1632);
   hden0_clone482->SetTotalEvents(29,1716);
   hden0_clone482->SetPassedEvents(29,1595);
   hden0_clone482->SetTotalEvents(30,1684);
   hden0_clone482->SetPassedEvents(30,1578);
   hden0_clone482->SetTotalEvents(31,1710);
   hden0_clone482->SetPassedEvents(31,1597);
   hden0_clone482->SetTotalEvents(32,1640);
   hden0_clone482->SetPassedEvents(32,1536);
   hden0_clone482->SetTotalEvents(33,1816);
   hden0_clone482->SetPassedEvents(33,1703);
   hden0_clone482->SetTotalEvents(34,1642);
   hden0_clone482->SetPassedEvents(34,1504);
   hden0_clone482->SetTotalEvents(35,1664);
   hden0_clone482->SetPassedEvents(35,1566);
   hden0_clone482->SetTotalEvents(36,1670);
   hden0_clone482->SetPassedEvents(36,1567);
   hden0_clone482->SetTotalEvents(37,1880);
   hden0_clone482->SetPassedEvents(37,1731);
   hden0_clone482->SetTotalEvents(38,1730);
   hden0_clone482->SetPassedEvents(38,1625);
   hden0_clone482->SetTotalEvents(39,1720);
   hden0_clone482->SetPassedEvents(39,1599);
   hden0_clone482->SetTotalEvents(40,1670);
   hden0_clone482->SetPassedEvents(40,1559);
   hden0_clone482->SetTotalEvents(41,1790);
   hden0_clone482->SetPassedEvents(41,1677);
   hden0_clone482->SetTotalEvents(42,1806);
   hden0_clone482->SetPassedEvents(42,1693);
   hden0_clone482->SetTotalEvents(43,1720);
   hden0_clone482->SetPassedEvents(43,1615);
   hden0_clone482->SetTotalEvents(44,1732);
   hden0_clone482->SetPassedEvents(44,1608);
   hden0_clone482->SetTotalEvents(45,1598);
   hden0_clone482->SetPassedEvents(45,1522);
   hden0_clone482->SetTotalEvents(46,1706);
   hden0_clone482->SetPassedEvents(46,1595);
   hden0_clone482->SetTotalEvents(47,1756);
   hden0_clone482->SetPassedEvents(47,1650);
   hden0_clone482->SetTotalEvents(48,1760);
   hden0_clone482->SetPassedEvents(48,1649);
   hden0_clone482->SetTotalEvents(49,1746);
   hden0_clone482->SetPassedEvents(49,1638);
   hden0_clone482->SetTotalEvents(50,1712);
   hden0_clone482->SetPassedEvents(50,1595);
   hden0_clone482->SetTotalEvents(51,18);
   hden0_clone482->SetPassedEvents(51,18);
   hden0_clone482->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone482->SetLineColor(ci);
   hden0_clone482->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone482->SetMarkerColor(ci);
   hden0_clone482->SetMarkerStyle(26);
   hden0_clone482->Draw("samezp");
   Double_t xAxis483[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone483 = new TEfficiency("hden1_clone","",50,xAxis483);
   
   hden1_clone483->SetConfidenceLevel(0.6826895);
   hden1_clone483->SetBetaAlpha(1);
   hden1_clone483->SetBetaBeta(1);
   hden1_clone483->SetWeight(1);
   hden1_clone483->SetStatisticOption(0);
   hden1_clone483->SetPosteriorMode(0);
   hden1_clone483->SetShortestInterval(0);
   hden1_clone483->SetTotalEvents(0,0);
   hden1_clone483->SetPassedEvents(0,0);
   hden1_clone483->SetTotalEvents(1,0);
   hden1_clone483->SetPassedEvents(1,0);
   hden1_clone483->SetTotalEvents(2,597);
   hden1_clone483->SetPassedEvents(2,0);
   hden1_clone483->SetTotalEvents(3,1089);
   hden1_clone483->SetPassedEvents(3,0);
   hden1_clone483->SetTotalEvents(4,1136);
   hden1_clone483->SetPassedEvents(4,0);
   hden1_clone483->SetTotalEvents(5,1198);
   hden1_clone483->SetPassedEvents(5,5);
   hden1_clone483->SetTotalEvents(6,1209);
   hden1_clone483->SetPassedEvents(6,24);
   hden1_clone483->SetTotalEvents(7,1200);
   hden1_clone483->SetPassedEvents(7,144);
   hden1_clone483->SetTotalEvents(8,1154);
   hden1_clone483->SetPassedEvents(8,354);
   hden1_clone483->SetTotalEvents(9,1168);
   hden1_clone483->SetPassedEvents(9,655);
   hden1_clone483->SetTotalEvents(10,1193);
   hden1_clone483->SetPassedEvents(10,910);
   hden1_clone483->SetTotalEvents(11,1205);
   hden1_clone483->SetPassedEvents(11,997);
   hden1_clone483->SetTotalEvents(12,1205);
   hden1_clone483->SetPassedEvents(12,1063);
   hden1_clone483->SetTotalEvents(13,1196);
   hden1_clone483->SetPassedEvents(13,1080);
   hden1_clone483->SetTotalEvents(14,1160);
   hden1_clone483->SetPassedEvents(14,1064);
   hden1_clone483->SetTotalEvents(15,1124);
   hden1_clone483->SetPassedEvents(15,1030);
   hden1_clone483->SetTotalEvents(16,1206);
   hden1_clone483->SetPassedEvents(16,1112);
   hden1_clone483->SetTotalEvents(17,1152);
   hden1_clone483->SetPassedEvents(17,1060);
   hden1_clone483->SetTotalEvents(18,1139);
   hden1_clone483->SetPassedEvents(18,1052);
   hden1_clone483->SetTotalEvents(19,1191);
   hden1_clone483->SetPassedEvents(19,1113);
   hden1_clone483->SetTotalEvents(20,1140);
   hden1_clone483->SetPassedEvents(20,1070);
   hden1_clone483->SetTotalEvents(21,1175);
   hden1_clone483->SetPassedEvents(21,1097);
   hden1_clone483->SetTotalEvents(22,1157);
   hden1_clone483->SetPassedEvents(22,1072);
   hden1_clone483->SetTotalEvents(23,1128);
   hden1_clone483->SetPassedEvents(23,1053);
   hden1_clone483->SetTotalEvents(24,1185);
   hden1_clone483->SetPassedEvents(24,1124);
   hden1_clone483->SetTotalEvents(25,1250);
   hden1_clone483->SetPassedEvents(25,1172);
   hden1_clone483->SetTotalEvents(26,1175);
   hden1_clone483->SetPassedEvents(26,1097);
   hden1_clone483->SetTotalEvents(27,1258);
   hden1_clone483->SetPassedEvents(27,1190);
   hden1_clone483->SetTotalEvents(28,1221);
   hden1_clone483->SetPassedEvents(28,1159);
   hden1_clone483->SetTotalEvents(29,1167);
   hden1_clone483->SetPassedEvents(29,1093);
   hden1_clone483->SetTotalEvents(30,1179);
   hden1_clone483->SetPassedEvents(30,1108);
   hden1_clone483->SetTotalEvents(31,1199);
   hden1_clone483->SetPassedEvents(31,1130);
   hden1_clone483->SetTotalEvents(32,1125);
   hden1_clone483->SetPassedEvents(32,1060);
   hden1_clone483->SetTotalEvents(33,1234);
   hden1_clone483->SetPassedEvents(33,1173);
   hden1_clone483->SetTotalEvents(34,1130);
   hden1_clone483->SetPassedEvents(34,1043);
   hden1_clone483->SetTotalEvents(35,1168);
   hden1_clone483->SetPassedEvents(35,1109);
   hden1_clone483->SetTotalEvents(36,1194);
   hden1_clone483->SetPassedEvents(36,1138);
   hden1_clone483->SetTotalEvents(37,1327);
   hden1_clone483->SetPassedEvents(37,1234);
   hden1_clone483->SetTotalEvents(38,1199);
   hden1_clone483->SetPassedEvents(38,1140);
   hden1_clone483->SetTotalEvents(39,1201);
   hden1_clone483->SetPassedEvents(39,1130);
   hden1_clone483->SetTotalEvents(40,1174);
   hden1_clone483->SetPassedEvents(40,1111);
   hden1_clone483->SetTotalEvents(41,1245);
   hden1_clone483->SetPassedEvents(41,1176);
   hden1_clone483->SetTotalEvents(42,1258);
   hden1_clone483->SetPassedEvents(42,1203);
   hden1_clone483->SetTotalEvents(43,1211);
   hden1_clone483->SetPassedEvents(43,1146);
   hden1_clone483->SetTotalEvents(44,1190);
   hden1_clone483->SetPassedEvents(44,1113);
   hden1_clone483->SetTotalEvents(45,1125);
   hden1_clone483->SetPassedEvents(45,1077);
   hden1_clone483->SetTotalEvents(46,1201);
   hden1_clone483->SetPassedEvents(46,1133);
   hden1_clone483->SetTotalEvents(47,1244);
   hden1_clone483->SetPassedEvents(47,1182);
   hden1_clone483->SetTotalEvents(48,1235);
   hden1_clone483->SetPassedEvents(48,1165);
   hden1_clone483->SetTotalEvents(49,1211);
   hden1_clone483->SetPassedEvents(49,1151);
   hden1_clone483->SetTotalEvents(50,1214);
   hden1_clone483->SetPassedEvents(50,1136);
   hden1_clone483->SetTotalEvents(51,13);
   hden1_clone483->SetPassedEvents(51,13);
   hden1_clone483->SetFillColor(19);
   hden1_clone483->SetLineWidth(2);
   hden1_clone483->SetMarkerStyle(21);
   hden1_clone483->Draw("samezp");
   Double_t xAxis484[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden2_clone484 = new TEfficiency("hden2_clone","",50,xAxis484);
   
   hden2_clone484->SetConfidenceLevel(0.6826895);
   hden2_clone484->SetBetaAlpha(1);
   hden2_clone484->SetBetaBeta(1);
   hden2_clone484->SetWeight(1);
   hden2_clone484->SetStatisticOption(0);
   hden2_clone484->SetPosteriorMode(0);
   hden2_clone484->SetShortestInterval(0);
   hden2_clone484->SetTotalEvents(0,0);
   hden2_clone484->SetPassedEvents(0,0);
   hden2_clone484->SetTotalEvents(1,0);
   hden2_clone484->SetPassedEvents(1,0);
   hden2_clone484->SetTotalEvents(2,271);
   hden2_clone484->SetPassedEvents(2,0);
   hden2_clone484->SetTotalEvents(3,487);
   hden2_clone484->SetPassedEvents(3,1);
   hden2_clone484->SetTotalEvents(4,490);
   hden2_clone484->SetPassedEvents(4,6);
   hden2_clone484->SetTotalEvents(5,530);
   hden2_clone484->SetPassedEvents(5,8);
   hden2_clone484->SetTotalEvents(6,519);
   hden2_clone484->SetPassedEvents(6,29);
   hden2_clone484->SetTotalEvents(7,542);
   hden2_clone484->SetPassedEvents(7,98);
   hden2_clone484->SetTotalEvents(8,498);
   hden2_clone484->SetPassedEvents(8,189);
   hden2_clone484->SetTotalEvents(9,516);
   hden2_clone484->SetPassedEvents(9,308);
   hden2_clone484->SetTotalEvents(10,543);
   hden2_clone484->SetPassedEvents(10,409);
   hden2_clone484->SetTotalEvents(11,507);
   hden2_clone484->SetPassedEvents(11,403);
   hden2_clone484->SetTotalEvents(12,509);
   hden2_clone484->SetPassedEvents(12,456);
   hden2_clone484->SetTotalEvents(13,498);
   hden2_clone484->SetPassedEvents(13,431);
   hden2_clone484->SetTotalEvents(14,544);
   hden2_clone484->SetPassedEvents(14,475);
   hden2_clone484->SetTotalEvents(15,490);
   hden2_clone484->SetPassedEvents(15,436);
   hden2_clone484->SetTotalEvents(16,550);
   hden2_clone484->SetPassedEvents(16,490);
   hden2_clone484->SetTotalEvents(17,504);
   hden2_clone484->SetPassedEvents(17,451);
   hden2_clone484->SetTotalEvents(18,535);
   hden2_clone484->SetPassedEvents(18,479);
   hden2_clone484->SetTotalEvents(19,515);
   hden2_clone484->SetPassedEvents(19,455);
   hden2_clone484->SetTotalEvents(20,480);
   hden2_clone484->SetPassedEvents(20,426);
   hden2_clone484->SetTotalEvents(21,517);
   hden2_clone484->SetPassedEvents(21,474);
   hden2_clone484->SetTotalEvents(22,513);
   hden2_clone484->SetPassedEvents(22,460);
   hden2_clone484->SetTotalEvents(23,474);
   hden2_clone484->SetPassedEvents(23,430);
   hden2_clone484->SetTotalEvents(24,509);
   hden2_clone484->SetPassedEvents(24,467);
   hden2_clone484->SetTotalEvents(25,510);
   hden2_clone484->SetPassedEvents(25,468);
   hden2_clone484->SetTotalEvents(26,507);
   hden2_clone484->SetPassedEvents(26,461);
   hden2_clone484->SetTotalEvents(27,546);
   hden2_clone484->SetPassedEvents(27,493);
   hden2_clone484->SetTotalEvents(28,517);
   hden2_clone484->SetPassedEvents(28,471);
   hden2_clone484->SetTotalEvents(29,549);
   hden2_clone484->SetPassedEvents(29,501);
   hden2_clone484->SetTotalEvents(30,505);
   hden2_clone484->SetPassedEvents(30,466);
   hden2_clone484->SetTotalEvents(31,511);
   hden2_clone484->SetPassedEvents(31,465);
   hden2_clone484->SetTotalEvents(32,515);
   hden2_clone484->SetPassedEvents(32,472);
   hden2_clone484->SetTotalEvents(33,582);
   hden2_clone484->SetPassedEvents(33,530);
   hden2_clone484->SetTotalEvents(34,512);
   hden2_clone484->SetPassedEvents(34,461);
   hden2_clone484->SetTotalEvents(35,496);
   hden2_clone484->SetPassedEvents(35,456);
   hden2_clone484->SetTotalEvents(36,476);
   hden2_clone484->SetPassedEvents(36,429);
   hden2_clone484->SetTotalEvents(37,553);
   hden2_clone484->SetPassedEvents(37,495);
   hden2_clone484->SetTotalEvents(38,531);
   hden2_clone484->SetPassedEvents(38,484);
   hden2_clone484->SetTotalEvents(39,519);
   hden2_clone484->SetPassedEvents(39,468);
   hden2_clone484->SetTotalEvents(40,496);
   hden2_clone484->SetPassedEvents(40,446);
   hden2_clone484->SetTotalEvents(41,545);
   hden2_clone484->SetPassedEvents(41,501);
   hden2_clone484->SetTotalEvents(42,548);
   hden2_clone484->SetPassedEvents(42,490);
   hden2_clone484->SetTotalEvents(43,509);
   hden2_clone484->SetPassedEvents(43,469);
   hden2_clone484->SetTotalEvents(44,542);
   hden2_clone484->SetPassedEvents(44,495);
   hden2_clone484->SetTotalEvents(45,473);
   hden2_clone484->SetPassedEvents(45,444);
   hden2_clone484->SetTotalEvents(46,505);
   hden2_clone484->SetPassedEvents(46,462);
   hden2_clone484->SetTotalEvents(47,512);
   hden2_clone484->SetPassedEvents(47,467);
   hden2_clone484->SetTotalEvents(48,525);
   hden2_clone484->SetPassedEvents(48,482);
   hden2_clone484->SetTotalEvents(49,535);
   hden2_clone484->SetPassedEvents(49,487);
   hden2_clone484->SetTotalEvents(50,498);
   hden2_clone484->SetPassedEvents(50,459);
   hden2_clone484->SetTotalEvents(51,5);
   hden2_clone484->SetPassedEvents(51,5);
   hden2_clone484->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden2_clone484->SetLineColor(ci);
   hden2_clone484->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden2_clone484->SetMarkerColor(ci);
   hden2_clone484->SetMarkerStyle(25);
   hden2_clone484->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV");
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
