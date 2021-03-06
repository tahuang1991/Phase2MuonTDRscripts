void GEMCSC_hybrid_eff_20170208_pt15_fraction79_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:06:11 2017) by ROOT version6.08/06
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
   Double_t xAxis105[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__101 = new TH1F("b1__101"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis105);
   b1__101->SetMinimum(0);
   b1__101->SetMaximum(1.05);
   b1__101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__101->SetLineColor(ci);
   b1__101->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__101->GetXaxis()->SetLabelFont(42);
   b1__101->GetXaxis()->SetLabelSize(0.05);
   b1__101->GetXaxis()->SetTitleSize(0.05);
   b1__101->GetXaxis()->SetTitleFont(42);
   b1__101->GetYaxis()->SetTitle("Trigger efficiency");
   b1__101->GetYaxis()->SetNdivisions(520);
   b1__101->GetYaxis()->SetLabelFont(42);
   b1__101->GetYaxis()->SetLabelSize(0.05);
   b1__101->GetYaxis()->SetTitleSize(0.05);
   b1__101->GetYaxis()->SetTitleOffset(1.1);
   b1__101->GetYaxis()->SetTitleFont(42);
   b1__101->GetZaxis()->SetLabelFont(42);
   b1__101->GetZaxis()->SetLabelSize(0.035);
   b1__101->GetZaxis()->SetTitleSize(0.035);
   b1__101->GetZaxis()->SetTitleFont(42);
   b1__101->Draw("");
   Double_t xAxis181[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone181 = new TEfficiency("hden0_clone","",50,xAxis181);
   
   hden0_clone181->SetConfidenceLevel(0.6826895);
   hden0_clone181->SetBetaAlpha(1);
   hden0_clone181->SetBetaBeta(1);
   hden0_clone181->SetWeight(1);
   hden0_clone181->SetStatisticOption(0);
   hden0_clone181->SetPosteriorMode(0);
   hden0_clone181->SetShortestInterval(0);
   hden0_clone181->SetTotalEvents(0,0);
   hden0_clone181->SetPassedEvents(0,0);
   hden0_clone181->SetTotalEvents(1,0);
   hden0_clone181->SetPassedEvents(1,0);
   hden0_clone181->SetTotalEvents(2,868);
   hden0_clone181->SetPassedEvents(2,0);
   hden0_clone181->SetTotalEvents(3,1576);
   hden0_clone181->SetPassedEvents(3,0);
   hden0_clone181->SetTotalEvents(4,1626);
   hden0_clone181->SetPassedEvents(4,2);
   hden0_clone181->SetTotalEvents(5,1728);
   hden0_clone181->SetPassedEvents(5,4);
   hden0_clone181->SetTotalEvents(6,1728);
   hden0_clone181->SetPassedEvents(6,7);
   hden0_clone181->SetTotalEvents(7,1742);
   hden0_clone181->SetPassedEvents(7,11);
   hden0_clone181->SetTotalEvents(8,1652);
   hden0_clone181->SetPassedEvents(8,28);
   hden0_clone181->SetTotalEvents(9,1684);
   hden0_clone181->SetPassedEvents(9,65);
   hden0_clone181->SetTotalEvents(10,1736);
   hden0_clone181->SetPassedEvents(10,167);
   hden0_clone181->SetTotalEvents(11,1712);
   hden0_clone181->SetPassedEvents(11,314);
   hden0_clone181->SetTotalEvents(12,1714);
   hden0_clone181->SetPassedEvents(12,525);
   hden0_clone181->SetTotalEvents(13,1694);
   hden0_clone181->SetPassedEvents(13,721);
   hden0_clone181->SetTotalEvents(14,1704);
   hden0_clone181->SetPassedEvents(14,929);
   hden0_clone181->SetTotalEvents(15,1614);
   hden0_clone181->SetPassedEvents(15,1041);
   hden0_clone181->SetTotalEvents(16,1756);
   hden0_clone181->SetPassedEvents(16,1209);
   hden0_clone181->SetTotalEvents(17,1656);
   hden0_clone181->SetPassedEvents(17,1234);
   hden0_clone181->SetTotalEvents(18,1674);
   hden0_clone181->SetPassedEvents(18,1309);
   hden0_clone181->SetTotalEvents(19,1706);
   hden0_clone181->SetPassedEvents(19,1383);
   hden0_clone181->SetTotalEvents(20,1620);
   hden0_clone181->SetPassedEvents(20,1327);
   hden0_clone181->SetTotalEvents(21,1692);
   hden0_clone181->SetPassedEvents(21,1436);
   hden0_clone181->SetTotalEvents(22,1670);
   hden0_clone181->SetPassedEvents(22,1403);
   hden0_clone181->SetTotalEvents(23,1602);
   hden0_clone181->SetPassedEvents(23,1367);
   hden0_clone181->SetTotalEvents(24,1694);
   hden0_clone181->SetPassedEvents(24,1474);
   hden0_clone181->SetTotalEvents(25,1760);
   hden0_clone181->SetPassedEvents(25,1520);
   hden0_clone181->SetTotalEvents(26,1682);
   hden0_clone181->SetPassedEvents(26,1431);
   hden0_clone181->SetTotalEvents(27,1804);
   hden0_clone181->SetPassedEvents(27,1600);
   hden0_clone181->SetTotalEvents(28,1738);
   hden0_clone181->SetPassedEvents(28,1534);
   hden0_clone181->SetTotalEvents(29,1716);
   hden0_clone181->SetPassedEvents(29,1511);
   hden0_clone181->SetTotalEvents(30,1684);
   hden0_clone181->SetPassedEvents(30,1474);
   hden0_clone181->SetTotalEvents(31,1710);
   hden0_clone181->SetPassedEvents(31,1484);
   hden0_clone181->SetTotalEvents(32,1640);
   hden0_clone181->SetPassedEvents(32,1436);
   hden0_clone181->SetTotalEvents(33,1816);
   hden0_clone181->SetPassedEvents(33,1612);
   hden0_clone181->SetTotalEvents(34,1642);
   hden0_clone181->SetPassedEvents(34,1426);
   hden0_clone181->SetTotalEvents(35,1664);
   hden0_clone181->SetPassedEvents(35,1483);
   hden0_clone181->SetTotalEvents(36,1670);
   hden0_clone181->SetPassedEvents(36,1480);
   hden0_clone181->SetTotalEvents(37,1880);
   hden0_clone181->SetPassedEvents(37,1628);
   hden0_clone181->SetTotalEvents(38,1730);
   hden0_clone181->SetPassedEvents(38,1537);
   hden0_clone181->SetTotalEvents(39,1720);
   hden0_clone181->SetPassedEvents(39,1504);
   hden0_clone181->SetTotalEvents(40,1670);
   hden0_clone181->SetPassedEvents(40,1464);
   hden0_clone181->SetTotalEvents(41,1790);
   hden0_clone181->SetPassedEvents(41,1594);
   hden0_clone181->SetTotalEvents(42,1806);
   hden0_clone181->SetPassedEvents(42,1607);
   hden0_clone181->SetTotalEvents(43,1720);
   hden0_clone181->SetPassedEvents(43,1517);
   hden0_clone181->SetTotalEvents(44,1732);
   hden0_clone181->SetPassedEvents(44,1517);
   hden0_clone181->SetTotalEvents(45,1598);
   hden0_clone181->SetPassedEvents(45,1436);
   hden0_clone181->SetTotalEvents(46,1706);
   hden0_clone181->SetPassedEvents(46,1526);
   hden0_clone181->SetTotalEvents(47,1756);
   hden0_clone181->SetPassedEvents(47,1563);
   hden0_clone181->SetTotalEvents(48,1760);
   hden0_clone181->SetPassedEvents(48,1565);
   hden0_clone181->SetTotalEvents(49,1746);
   hden0_clone181->SetPassedEvents(49,1563);
   hden0_clone181->SetTotalEvents(50,1712);
   hden0_clone181->SetPassedEvents(50,1520);
   hden0_clone181->SetTotalEvents(51,18);
   hden0_clone181->SetPassedEvents(51,16);
   hden0_clone181->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone181->SetLineColor(ci);
   hden0_clone181->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone181->SetMarkerColor(ci);
   hden0_clone181->SetMarkerStyle(26);
   hden0_clone181->Draw("samezp");
   Double_t xAxis182[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone182 = new TEfficiency("hden1_clone","",50,xAxis182);
   
   hden1_clone182->SetConfidenceLevel(0.6826895);
   hden1_clone182->SetBetaAlpha(1);
   hden1_clone182->SetBetaBeta(1);
   hden1_clone182->SetWeight(1);
   hden1_clone182->SetStatisticOption(0);
   hden1_clone182->SetPosteriorMode(0);
   hden1_clone182->SetShortestInterval(0);
   hden1_clone182->SetTotalEvents(0,0);
   hden1_clone182->SetPassedEvents(0,0);
   hden1_clone182->SetTotalEvents(1,0);
   hden1_clone182->SetPassedEvents(1,0);
   hden1_clone182->SetTotalEvents(2,597);
   hden1_clone182->SetPassedEvents(2,0);
   hden1_clone182->SetTotalEvents(3,1089);
   hden1_clone182->SetPassedEvents(3,0);
   hden1_clone182->SetTotalEvents(4,1136);
   hden1_clone182->SetPassedEvents(4,0);
   hden1_clone182->SetTotalEvents(5,1198);
   hden1_clone182->SetPassedEvents(5,1);
   hden1_clone182->SetTotalEvents(6,1209);
   hden1_clone182->SetPassedEvents(6,1);
   hden1_clone182->SetTotalEvents(7,1200);
   hden1_clone182->SetPassedEvents(7,6);
   hden1_clone182->SetTotalEvents(8,1154);
   hden1_clone182->SetPassedEvents(8,13);
   hden1_clone182->SetTotalEvents(9,1168);
   hden1_clone182->SetPassedEvents(9,34);
   hden1_clone182->SetTotalEvents(10,1193);
   hden1_clone182->SetPassedEvents(10,83);
   hden1_clone182->SetTotalEvents(11,1205);
   hden1_clone182->SetPassedEvents(11,185);
   hden1_clone182->SetTotalEvents(12,1205);
   hden1_clone182->SetPassedEvents(12,324);
   hden1_clone182->SetTotalEvents(13,1196);
   hden1_clone182->SetPassedEvents(13,492);
   hden1_clone182->SetTotalEvents(14,1160);
   hden1_clone182->SetPassedEvents(14,612);
   hden1_clone182->SetTotalEvents(15,1124);
   hden1_clone182->SetPassedEvents(15,715);
   hden1_clone182->SetTotalEvents(16,1206);
   hden1_clone182->SetPassedEvents(16,840);
   hden1_clone182->SetTotalEvents(17,1152);
   hden1_clone182->SetPassedEvents(17,879);
   hden1_clone182->SetTotalEvents(18,1139);
   hden1_clone182->SetPassedEvents(18,918);
   hden1_clone182->SetTotalEvents(19,1191);
   hden1_clone182->SetPassedEvents(19,984);
   hden1_clone182->SetTotalEvents(20,1140);
   hden1_clone182->SetPassedEvents(20,961);
   hden1_clone182->SetTotalEvents(21,1175);
   hden1_clone182->SetPassedEvents(21,1019);
   hden1_clone182->SetTotalEvents(22,1157);
   hden1_clone182->SetPassedEvents(22,990);
   hden1_clone182->SetTotalEvents(23,1128);
   hden1_clone182->SetPassedEvents(23,979);
   hden1_clone182->SetTotalEvents(24,1185);
   hden1_clone182->SetPassedEvents(24,1045);
   hden1_clone182->SetTotalEvents(25,1250);
   hden1_clone182->SetPassedEvents(25,1096);
   hden1_clone182->SetTotalEvents(26,1175);
   hden1_clone182->SetPassedEvents(26,1012);
   hden1_clone182->SetTotalEvents(27,1258);
   hden1_clone182->SetPassedEvents(27,1132);
   hden1_clone182->SetTotalEvents(28,1221);
   hden1_clone182->SetPassedEvents(28,1092);
   hden1_clone182->SetTotalEvents(29,1167);
   hden1_clone182->SetPassedEvents(29,1044);
   hden1_clone182->SetTotalEvents(30,1179);
   hden1_clone182->SetPassedEvents(30,1043);
   hden1_clone182->SetTotalEvents(31,1199);
   hden1_clone182->SetPassedEvents(31,1052);
   hden1_clone182->SetTotalEvents(32,1125);
   hden1_clone182->SetPassedEvents(32,995);
   hden1_clone182->SetTotalEvents(33,1234);
   hden1_clone182->SetPassedEvents(33,1120);
   hden1_clone182->SetTotalEvents(34,1130);
   hden1_clone182->SetPassedEvents(34,992);
   hden1_clone182->SetTotalEvents(35,1168);
   hden1_clone182->SetPassedEvents(35,1055);
   hden1_clone182->SetTotalEvents(36,1194);
   hden1_clone182->SetPassedEvents(36,1076);
   hden1_clone182->SetTotalEvents(37,1327);
   hden1_clone182->SetPassedEvents(37,1164);
   hden1_clone182->SetTotalEvents(38,1199);
   hden1_clone182->SetPassedEvents(38,1070);
   hden1_clone182->SetTotalEvents(39,1201);
   hden1_clone182->SetPassedEvents(39,1063);
   hden1_clone182->SetTotalEvents(40,1174);
   hden1_clone182->SetPassedEvents(40,1051);
   hden1_clone182->SetTotalEvents(41,1245);
   hden1_clone182->SetPassedEvents(41,1120);
   hden1_clone182->SetTotalEvents(42,1258);
   hden1_clone182->SetPassedEvents(42,1147);
   hden1_clone182->SetTotalEvents(43,1211);
   hden1_clone182->SetPassedEvents(43,1084);
   hden1_clone182->SetTotalEvents(44,1190);
   hden1_clone182->SetPassedEvents(44,1044);
   hden1_clone182->SetTotalEvents(45,1125);
   hden1_clone182->SetPassedEvents(45,1016);
   hden1_clone182->SetTotalEvents(46,1201);
   hden1_clone182->SetPassedEvents(46,1083);
   hden1_clone182->SetTotalEvents(47,1244);
   hden1_clone182->SetPassedEvents(47,1126);
   hden1_clone182->SetTotalEvents(48,1235);
   hden1_clone182->SetPassedEvents(48,1110);
   hden1_clone182->SetTotalEvents(49,1211);
   hden1_clone182->SetPassedEvents(49,1099);
   hden1_clone182->SetTotalEvents(50,1214);
   hden1_clone182->SetPassedEvents(50,1090);
   hden1_clone182->SetTotalEvents(51,13);
   hden1_clone182->SetPassedEvents(51,11);
   hden1_clone182->SetFillColor(19);
   hden1_clone182->SetLineWidth(2);
   hden1_clone182->SetMarkerStyle(21);
   hden1_clone182->Draw("samezp");
   Double_t xAxis183[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden2_clone183 = new TEfficiency("hden2_clone","",50,xAxis183);
   
   hden2_clone183->SetConfidenceLevel(0.6826895);
   hden2_clone183->SetBetaAlpha(1);
   hden2_clone183->SetBetaBeta(1);
   hden2_clone183->SetWeight(1);
   hden2_clone183->SetStatisticOption(0);
   hden2_clone183->SetPosteriorMode(0);
   hden2_clone183->SetShortestInterval(0);
   hden2_clone183->SetTotalEvents(0,0);
   hden2_clone183->SetPassedEvents(0,0);
   hden2_clone183->SetTotalEvents(1,0);
   hden2_clone183->SetPassedEvents(1,0);
   hden2_clone183->SetTotalEvents(2,271);
   hden2_clone183->SetPassedEvents(2,0);
   hden2_clone183->SetTotalEvents(3,487);
   hden2_clone183->SetPassedEvents(3,0);
   hden2_clone183->SetTotalEvents(4,490);
   hden2_clone183->SetPassedEvents(4,2);
   hden2_clone183->SetTotalEvents(5,530);
   hden2_clone183->SetPassedEvents(5,2);
   hden2_clone183->SetTotalEvents(6,519);
   hden2_clone183->SetPassedEvents(6,6);
   hden2_clone183->SetTotalEvents(7,542);
   hden2_clone183->SetPassedEvents(7,5);
   hden2_clone183->SetTotalEvents(8,498);
   hden2_clone183->SetPassedEvents(8,15);
   hden2_clone183->SetTotalEvents(9,516);
   hden2_clone183->SetPassedEvents(9,31);
   hden2_clone183->SetTotalEvents(10,543);
   hden2_clone183->SetPassedEvents(10,83);
   hden2_clone183->SetTotalEvents(11,507);
   hden2_clone183->SetPassedEvents(11,128);
   hden2_clone183->SetTotalEvents(12,509);
   hden2_clone183->SetPassedEvents(12,198);
   hden2_clone183->SetTotalEvents(13,498);
   hden2_clone183->SetPassedEvents(13,228);
   hden2_clone183->SetTotalEvents(14,544);
   hden2_clone183->SetPassedEvents(14,313);
   hden2_clone183->SetTotalEvents(15,490);
   hden2_clone183->SetPassedEvents(15,325);
   hden2_clone183->SetTotalEvents(16,550);
   hden2_clone183->SetPassedEvents(16,369);
   hden2_clone183->SetTotalEvents(17,504);
   hden2_clone183->SetPassedEvents(17,352);
   hden2_clone183->SetTotalEvents(18,535);
   hden2_clone183->SetPassedEvents(18,391);
   hden2_clone183->SetTotalEvents(19,515);
   hden2_clone183->SetPassedEvents(19,398);
   hden2_clone183->SetTotalEvents(20,480);
   hden2_clone183->SetPassedEvents(20,366);
   hden2_clone183->SetTotalEvents(21,517);
   hden2_clone183->SetPassedEvents(21,417);
   hden2_clone183->SetTotalEvents(22,513);
   hden2_clone183->SetPassedEvents(22,412);
   hden2_clone183->SetTotalEvents(23,474);
   hden2_clone183->SetPassedEvents(23,387);
   hden2_clone183->SetTotalEvents(24,509);
   hden2_clone183->SetPassedEvents(24,428);
   hden2_clone183->SetTotalEvents(25,510);
   hden2_clone183->SetPassedEvents(25,424);
   hden2_clone183->SetTotalEvents(26,507);
   hden2_clone183->SetPassedEvents(26,419);
   hden2_clone183->SetTotalEvents(27,546);
   hden2_clone183->SetPassedEvents(27,465);
   hden2_clone183->SetTotalEvents(28,517);
   hden2_clone183->SetPassedEvents(28,440);
   hden2_clone183->SetTotalEvents(29,549);
   hden2_clone183->SetPassedEvents(29,466);
   hden2_clone183->SetTotalEvents(30,505);
   hden2_clone183->SetPassedEvents(30,427);
   hden2_clone183->SetTotalEvents(31,511);
   hden2_clone183->SetPassedEvents(31,430);
   hden2_clone183->SetTotalEvents(32,515);
   hden2_clone183->SetPassedEvents(32,438);
   hden2_clone183->SetTotalEvents(33,582);
   hden2_clone183->SetPassedEvents(33,492);
   hden2_clone183->SetTotalEvents(34,512);
   hden2_clone183->SetPassedEvents(34,434);
   hden2_clone183->SetTotalEvents(35,496);
   hden2_clone183->SetPassedEvents(35,427);
   hden2_clone183->SetTotalEvents(36,476);
   hden2_clone183->SetPassedEvents(36,404);
   hden2_clone183->SetTotalEvents(37,553);
   hden2_clone183->SetPassedEvents(37,462);
   hden2_clone183->SetTotalEvents(38,531);
   hden2_clone183->SetPassedEvents(38,466);
   hden2_clone183->SetTotalEvents(39,519);
   hden2_clone183->SetPassedEvents(39,440);
   hden2_clone183->SetTotalEvents(40,496);
   hden2_clone183->SetPassedEvents(40,411);
   hden2_clone183->SetTotalEvents(41,545);
   hden2_clone183->SetPassedEvents(41,474);
   hden2_clone183->SetTotalEvents(42,548);
   hden2_clone183->SetPassedEvents(42,460);
   hden2_clone183->SetTotalEvents(43,509);
   hden2_clone183->SetPassedEvents(43,433);
   hden2_clone183->SetTotalEvents(44,542);
   hden2_clone183->SetPassedEvents(44,473);
   hden2_clone183->SetTotalEvents(45,473);
   hden2_clone183->SetPassedEvents(45,419);
   hden2_clone183->SetTotalEvents(46,505);
   hden2_clone183->SetPassedEvents(46,443);
   hden2_clone183->SetTotalEvents(47,512);
   hden2_clone183->SetPassedEvents(47,436);
   hden2_clone183->SetTotalEvents(48,525);
   hden2_clone183->SetPassedEvents(48,453);
   hden2_clone183->SetTotalEvents(49,535);
   hden2_clone183->SetPassedEvents(49,464);
   hden2_clone183->SetTotalEvents(50,498);
   hden2_clone183->SetPassedEvents(50,430);
   hden2_clone183->SetTotalEvents(51,5);
   hden2_clone183->SetPassedEvents(51,5);
   hden2_clone183->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden2_clone183->SetLineColor(ci);
   hden2_clone183->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden2_clone183->SetMarkerColor(ci);
   hden2_clone183->SetMarkerStyle(25);
   hden2_clone183->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>15 GeV");
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
