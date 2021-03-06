void GEMCSC_hybrid_eff_20170208_pt40_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:39:41 2017) by ROOT version6.08/06
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
   Double_t xAxis945[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__906 = new TH1F("b1__906"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis945);
   b1__906->SetMinimum(0);
   b1__906->SetMaximum(1.05);
   b1__906->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__906->SetLineColor(ci);
   b1__906->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__906->GetXaxis()->SetLabelFont(42);
   b1__906->GetXaxis()->SetLabelSize(0.05);
   b1__906->GetXaxis()->SetTitleSize(0.05);
   b1__906->GetXaxis()->SetTitleFont(42);
   b1__906->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__906->GetYaxis()->SetNdivisions(520);
   b1__906->GetYaxis()->SetLabelFont(42);
   b1__906->GetYaxis()->SetLabelSize(0.05);
   b1__906->GetYaxis()->SetTitleSize(0.05);
   b1__906->GetYaxis()->SetTitleOffset(1.1);
   b1__906->GetYaxis()->SetTitleFont(42);
   b1__906->GetZaxis()->SetLabelFont(42);
   b1__906->GetZaxis()->SetLabelSize(0.035);
   b1__906->GetZaxis()->SetTitleSize(0.035);
   b1__906->GetZaxis()->SetTitleFont(42);
   b1__906->Draw("");
   Double_t xAxis1686[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone1686 = new TEfficiency("hden0_clone","",50,xAxis1686);
   
   hden0_clone1686->SetConfidenceLevel(0.6826895);
   hden0_clone1686->SetBetaAlpha(1);
   hden0_clone1686->SetBetaBeta(1);
   hden0_clone1686->SetWeight(1);
   hden0_clone1686->SetStatisticOption(0);
   hden0_clone1686->SetPosteriorMode(0);
   hden0_clone1686->SetShortestInterval(0);
   hden0_clone1686->SetTotalEvents(0,0);
   hden0_clone1686->SetPassedEvents(0,0);
   hden0_clone1686->SetTotalEvents(1,0);
   hden0_clone1686->SetPassedEvents(1,0);
   hden0_clone1686->SetTotalEvents(2,868);
   hden0_clone1686->SetPassedEvents(2,0);
   hden0_clone1686->SetTotalEvents(3,1576);
   hden0_clone1686->SetPassedEvents(3,0);
   hden0_clone1686->SetTotalEvents(4,1626);
   hden0_clone1686->SetPassedEvents(4,0);
   hden0_clone1686->SetTotalEvents(5,1728);
   hden0_clone1686->SetPassedEvents(5,1);
   hden0_clone1686->SetTotalEvents(6,1728);
   hden0_clone1686->SetPassedEvents(6,0);
   hden0_clone1686->SetTotalEvents(7,1742);
   hden0_clone1686->SetPassedEvents(7,4);
   hden0_clone1686->SetTotalEvents(8,1652);
   hden0_clone1686->SetPassedEvents(8,0);
   hden0_clone1686->SetTotalEvents(9,1684);
   hden0_clone1686->SetPassedEvents(9,2);
   hden0_clone1686->SetTotalEvents(10,1736);
   hden0_clone1686->SetPassedEvents(10,2);
   hden0_clone1686->SetTotalEvents(11,1712);
   hden0_clone1686->SetPassedEvents(11,11);
   hden0_clone1686->SetTotalEvents(12,1714);
   hden0_clone1686->SetPassedEvents(12,12);
   hden0_clone1686->SetTotalEvents(13,1694);
   hden0_clone1686->SetPassedEvents(13,8);
   hden0_clone1686->SetTotalEvents(14,1704);
   hden0_clone1686->SetPassedEvents(14,15);
   hden0_clone1686->SetTotalEvents(15,1614);
   hden0_clone1686->SetPassedEvents(15,26);
   hden0_clone1686->SetTotalEvents(16,1756);
   hden0_clone1686->SetPassedEvents(16,30);
   hden0_clone1686->SetTotalEvents(17,1656);
   hden0_clone1686->SetPassedEvents(17,37);
   hden0_clone1686->SetTotalEvents(18,1674);
   hden0_clone1686->SetPassedEvents(18,56);
   hden0_clone1686->SetTotalEvents(19,1706);
   hden0_clone1686->SetPassedEvents(19,48);
   hden0_clone1686->SetTotalEvents(20,1620);
   hden0_clone1686->SetPassedEvents(20,75);
   hden0_clone1686->SetTotalEvents(21,1692);
   hden0_clone1686->SetPassedEvents(21,118);
   hden0_clone1686->SetTotalEvents(22,1670);
   hden0_clone1686->SetPassedEvents(22,166);
   hden0_clone1686->SetTotalEvents(23,1602);
   hden0_clone1686->SetPassedEvents(23,207);
   hden0_clone1686->SetTotalEvents(24,1694);
   hden0_clone1686->SetPassedEvents(24,288);
   hden0_clone1686->SetTotalEvents(25,1760);
   hden0_clone1686->SetPassedEvents(25,336);
   hden0_clone1686->SetTotalEvents(26,1682);
   hden0_clone1686->SetPassedEvents(26,369);
   hden0_clone1686->SetTotalEvents(27,1804);
   hden0_clone1686->SetPassedEvents(27,502);
   hden0_clone1686->SetTotalEvents(28,1738);
   hden0_clone1686->SetPassedEvents(28,553);
   hden0_clone1686->SetTotalEvents(29,1716);
   hden0_clone1686->SetPassedEvents(29,635);
   hden0_clone1686->SetTotalEvents(30,1684);
   hden0_clone1686->SetPassedEvents(30,704);
   hden0_clone1686->SetTotalEvents(31,1710);
   hden0_clone1686->SetPassedEvents(31,806);
   hden0_clone1686->SetTotalEvents(32,1640);
   hden0_clone1686->SetPassedEvents(32,805);
   hden0_clone1686->SetTotalEvents(33,1816);
   hden0_clone1686->SetPassedEvents(33,1027);
   hden0_clone1686->SetTotalEvents(34,1642);
   hden0_clone1686->SetPassedEvents(34,957);
   hden0_clone1686->SetTotalEvents(35,1664);
   hden0_clone1686->SetPassedEvents(35,1072);
   hden0_clone1686->SetTotalEvents(36,1670);
   hden0_clone1686->SetPassedEvents(36,1125);
   hden0_clone1686->SetTotalEvents(37,1880);
   hden0_clone1686->SetPassedEvents(37,1304);
   hden0_clone1686->SetTotalEvents(38,1730);
   hden0_clone1686->SetPassedEvents(38,1263);
   hden0_clone1686->SetTotalEvents(39,1720);
   hden0_clone1686->SetPassedEvents(39,1297);
   hden0_clone1686->SetTotalEvents(40,1670);
   hden0_clone1686->SetPassedEvents(40,1267);
   hden0_clone1686->SetTotalEvents(41,1790);
   hden0_clone1686->SetPassedEvents(41,1423);
   hden0_clone1686->SetTotalEvents(42,1806);
   hden0_clone1686->SetPassedEvents(42,1480);
   hden0_clone1686->SetTotalEvents(43,1720);
   hden0_clone1686->SetPassedEvents(43,1388);
   hden0_clone1686->SetTotalEvents(44,1732);
   hden0_clone1686->SetPassedEvents(44,1425);
   hden0_clone1686->SetTotalEvents(45,1598);
   hden0_clone1686->SetPassedEvents(45,1358);
   hden0_clone1686->SetTotalEvents(46,1706);
   hden0_clone1686->SetPassedEvents(46,1424);
   hden0_clone1686->SetTotalEvents(47,1756);
   hden0_clone1686->SetPassedEvents(47,1478);
   hden0_clone1686->SetTotalEvents(48,1760);
   hden0_clone1686->SetPassedEvents(48,1516);
   hden0_clone1686->SetTotalEvents(49,1746);
   hden0_clone1686->SetPassedEvents(49,1484);
   hden0_clone1686->SetTotalEvents(50,1712);
   hden0_clone1686->SetPassedEvents(50,1456);
   hden0_clone1686->SetTotalEvents(51,18);
   hden0_clone1686->SetPassedEvents(51,17);
   hden0_clone1686->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1686->SetLineColor(ci);
   hden0_clone1686->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1686->SetMarkerColor(ci);
   hden0_clone1686->SetMarkerStyle(26);
   hden0_clone1686->Draw("samezp");
   Double_t xAxis1687[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone1687 = new TEfficiency("hden1_clone","",50,xAxis1687);
   
   hden1_clone1687->SetConfidenceLevel(0.6826895);
   hden1_clone1687->SetBetaAlpha(1);
   hden1_clone1687->SetBetaBeta(1);
   hden1_clone1687->SetWeight(1);
   hden1_clone1687->SetStatisticOption(0);
   hden1_clone1687->SetPosteriorMode(0);
   hden1_clone1687->SetShortestInterval(0);
   hden1_clone1687->SetTotalEvents(0,0);
   hden1_clone1687->SetPassedEvents(0,0);
   hden1_clone1687->SetTotalEvents(1,0);
   hden1_clone1687->SetPassedEvents(1,0);
   hden1_clone1687->SetTotalEvents(2,597);
   hden1_clone1687->SetPassedEvents(2,0);
   hden1_clone1687->SetTotalEvents(3,1089);
   hden1_clone1687->SetPassedEvents(3,0);
   hden1_clone1687->SetTotalEvents(4,1136);
   hden1_clone1687->SetPassedEvents(4,0);
   hden1_clone1687->SetTotalEvents(5,1198);
   hden1_clone1687->SetPassedEvents(5,0);
   hden1_clone1687->SetTotalEvents(6,1209);
   hden1_clone1687->SetPassedEvents(6,0);
   hden1_clone1687->SetTotalEvents(7,1200);
   hden1_clone1687->SetPassedEvents(7,0);
   hden1_clone1687->SetTotalEvents(8,1154);
   hden1_clone1687->SetPassedEvents(8,0);
   hden1_clone1687->SetTotalEvents(9,1168);
   hden1_clone1687->SetPassedEvents(9,0);
   hden1_clone1687->SetTotalEvents(10,1193);
   hden1_clone1687->SetPassedEvents(10,0);
   hden1_clone1687->SetTotalEvents(11,1205);
   hden1_clone1687->SetPassedEvents(11,1);
   hden1_clone1687->SetTotalEvents(12,1205);
   hden1_clone1687->SetPassedEvents(12,2);
   hden1_clone1687->SetTotalEvents(13,1196);
   hden1_clone1687->SetPassedEvents(13,4);
   hden1_clone1687->SetTotalEvents(14,1160);
   hden1_clone1687->SetPassedEvents(14,4);
   hden1_clone1687->SetTotalEvents(15,1124);
   hden1_clone1687->SetPassedEvents(15,12);
   hden1_clone1687->SetTotalEvents(16,1206);
   hden1_clone1687->SetPassedEvents(16,14);
   hden1_clone1687->SetTotalEvents(17,1152);
   hden1_clone1687->SetPassedEvents(17,16);
   hden1_clone1687->SetTotalEvents(18,1139);
   hden1_clone1687->SetPassedEvents(18,31);
   hden1_clone1687->SetTotalEvents(19,1191);
   hden1_clone1687->SetPassedEvents(19,28);
   hden1_clone1687->SetTotalEvents(20,1140);
   hden1_clone1687->SetPassedEvents(20,43);
   hden1_clone1687->SetTotalEvents(21,1175);
   hden1_clone1687->SetPassedEvents(21,69);
   hden1_clone1687->SetTotalEvents(22,1157);
   hden1_clone1687->SetPassedEvents(22,86);
   hden1_clone1687->SetTotalEvents(23,1128);
   hden1_clone1687->SetPassedEvents(23,125);
   hden1_clone1687->SetTotalEvents(24,1185);
   hden1_clone1687->SetPassedEvents(24,181);
   hden1_clone1687->SetTotalEvents(25,1250);
   hden1_clone1687->SetPassedEvents(25,221);
   hden1_clone1687->SetTotalEvents(26,1175);
   hden1_clone1687->SetPassedEvents(26,235);
   hden1_clone1687->SetTotalEvents(27,1258);
   hden1_clone1687->SetPassedEvents(27,325);
   hden1_clone1687->SetTotalEvents(28,1221);
   hden1_clone1687->SetPassedEvents(28,370);
   hden1_clone1687->SetTotalEvents(29,1167);
   hden1_clone1687->SetPassedEvents(29,429);
   hden1_clone1687->SetTotalEvents(30,1179);
   hden1_clone1687->SetPassedEvents(30,489);
   hden1_clone1687->SetTotalEvents(31,1199);
   hden1_clone1687->SetPassedEvents(31,555);
   hden1_clone1687->SetTotalEvents(32,1125);
   hden1_clone1687->SetPassedEvents(32,526);
   hden1_clone1687->SetTotalEvents(33,1234);
   hden1_clone1687->SetPassedEvents(33,692);
   hden1_clone1687->SetTotalEvents(34,1130);
   hden1_clone1687->SetPassedEvents(34,641);
   hden1_clone1687->SetTotalEvents(35,1168);
   hden1_clone1687->SetPassedEvents(35,760);
   hden1_clone1687->SetTotalEvents(36,1194);
   hden1_clone1687->SetPassedEvents(36,796);
   hden1_clone1687->SetTotalEvents(37,1327);
   hden1_clone1687->SetPassedEvents(37,924);
   hden1_clone1687->SetTotalEvents(38,1199);
   hden1_clone1687->SetPassedEvents(38,873);
   hden1_clone1687->SetTotalEvents(39,1201);
   hden1_clone1687->SetPassedEvents(39,917);
   hden1_clone1687->SetTotalEvents(40,1174);
   hden1_clone1687->SetPassedEvents(40,904);
   hden1_clone1687->SetTotalEvents(41,1245);
   hden1_clone1687->SetPassedEvents(41,988);
   hden1_clone1687->SetTotalEvents(42,1258);
   hden1_clone1687->SetPassedEvents(42,1046);
   hden1_clone1687->SetTotalEvents(43,1211);
   hden1_clone1687->SetPassedEvents(43,982);
   hden1_clone1687->SetTotalEvents(44,1190);
   hden1_clone1687->SetPassedEvents(44,979);
   hden1_clone1687->SetTotalEvents(45,1125);
   hden1_clone1687->SetPassedEvents(45,960);
   hden1_clone1687->SetTotalEvents(46,1201);
   hden1_clone1687->SetPassedEvents(46,1009);
   hden1_clone1687->SetTotalEvents(47,1244);
   hden1_clone1687->SetPassedEvents(47,1061);
   hden1_clone1687->SetTotalEvents(48,1235);
   hden1_clone1687->SetPassedEvents(48,1075);
   hden1_clone1687->SetTotalEvents(49,1211);
   hden1_clone1687->SetPassedEvents(49,1031);
   hden1_clone1687->SetTotalEvents(50,1214);
   hden1_clone1687->SetPassedEvents(50,1040);
   hden1_clone1687->SetTotalEvents(51,13);
   hden1_clone1687->SetPassedEvents(51,12);
   hden1_clone1687->SetFillColor(19);
   hden1_clone1687->SetLineWidth(2);
   hden1_clone1687->SetMarkerStyle(21);
   hden1_clone1687->Draw("samezp");
   Double_t xAxis1688[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden2_clone1688 = new TEfficiency("hden2_clone","",50,xAxis1688);
   
   hden2_clone1688->SetConfidenceLevel(0.6826895);
   hden2_clone1688->SetBetaAlpha(1);
   hden2_clone1688->SetBetaBeta(1);
   hden2_clone1688->SetWeight(1);
   hden2_clone1688->SetStatisticOption(0);
   hden2_clone1688->SetPosteriorMode(0);
   hden2_clone1688->SetShortestInterval(0);
   hden2_clone1688->SetTotalEvents(0,0);
   hden2_clone1688->SetPassedEvents(0,0);
   hden2_clone1688->SetTotalEvents(1,0);
   hden2_clone1688->SetPassedEvents(1,0);
   hden2_clone1688->SetTotalEvents(2,271);
   hden2_clone1688->SetPassedEvents(2,0);
   hden2_clone1688->SetTotalEvents(3,487);
   hden2_clone1688->SetPassedEvents(3,0);
   hden2_clone1688->SetTotalEvents(4,490);
   hden2_clone1688->SetPassedEvents(4,0);
   hden2_clone1688->SetTotalEvents(5,530);
   hden2_clone1688->SetPassedEvents(5,0);
   hden2_clone1688->SetTotalEvents(6,519);
   hden2_clone1688->SetPassedEvents(6,0);
   hden2_clone1688->SetTotalEvents(7,542);
   hden2_clone1688->SetPassedEvents(7,4);
   hden2_clone1688->SetTotalEvents(8,498);
   hden2_clone1688->SetPassedEvents(8,0);
   hden2_clone1688->SetTotalEvents(9,516);
   hden2_clone1688->SetPassedEvents(9,2);
   hden2_clone1688->SetTotalEvents(10,543);
   hden2_clone1688->SetPassedEvents(10,2);
   hden2_clone1688->SetTotalEvents(11,507);
   hden2_clone1688->SetPassedEvents(11,10);
   hden2_clone1688->SetTotalEvents(12,509);
   hden2_clone1688->SetPassedEvents(12,10);
   hden2_clone1688->SetTotalEvents(13,498);
   hden2_clone1688->SetPassedEvents(13,4);
   hden2_clone1688->SetTotalEvents(14,544);
   hden2_clone1688->SetPassedEvents(14,11);
   hden2_clone1688->SetTotalEvents(15,490);
   hden2_clone1688->SetPassedEvents(15,14);
   hden2_clone1688->SetTotalEvents(16,550);
   hden2_clone1688->SetPassedEvents(16,16);
   hden2_clone1688->SetTotalEvents(17,504);
   hden2_clone1688->SetPassedEvents(17,21);
   hden2_clone1688->SetTotalEvents(18,535);
   hden2_clone1688->SetPassedEvents(18,25);
   hden2_clone1688->SetTotalEvents(19,515);
   hden2_clone1688->SetPassedEvents(19,20);
   hden2_clone1688->SetTotalEvents(20,480);
   hden2_clone1688->SetPassedEvents(20,32);
   hden2_clone1688->SetTotalEvents(21,517);
   hden2_clone1688->SetPassedEvents(21,49);
   hden2_clone1688->SetTotalEvents(22,513);
   hden2_clone1688->SetPassedEvents(22,80);
   hden2_clone1688->SetTotalEvents(23,474);
   hden2_clone1688->SetPassedEvents(23,82);
   hden2_clone1688->SetTotalEvents(24,509);
   hden2_clone1688->SetPassedEvents(24,106);
   hden2_clone1688->SetTotalEvents(25,510);
   hden2_clone1688->SetPassedEvents(25,115);
   hden2_clone1688->SetTotalEvents(26,507);
   hden2_clone1688->SetPassedEvents(26,134);
   hden2_clone1688->SetTotalEvents(27,546);
   hden2_clone1688->SetPassedEvents(27,176);
   hden2_clone1688->SetTotalEvents(28,517);
   hden2_clone1688->SetPassedEvents(28,181);
   hden2_clone1688->SetTotalEvents(29,549);
   hden2_clone1688->SetPassedEvents(29,206);
   hden2_clone1688->SetTotalEvents(30,505);
   hden2_clone1688->SetPassedEvents(30,213);
   hden2_clone1688->SetTotalEvents(31,511);
   hden2_clone1688->SetPassedEvents(31,250);
   hden2_clone1688->SetTotalEvents(32,515);
   hden2_clone1688->SetPassedEvents(32,278);
   hden2_clone1688->SetTotalEvents(33,582);
   hden2_clone1688->SetPassedEvents(33,335);
   hden2_clone1688->SetTotalEvents(34,512);
   hden2_clone1688->SetPassedEvents(34,316);
   hden2_clone1688->SetTotalEvents(35,496);
   hden2_clone1688->SetPassedEvents(35,312);
   hden2_clone1688->SetTotalEvents(36,476);
   hden2_clone1688->SetPassedEvents(36,329);
   hden2_clone1688->SetTotalEvents(37,553);
   hden2_clone1688->SetPassedEvents(37,378);
   hden2_clone1688->SetTotalEvents(38,531);
   hden2_clone1688->SetPassedEvents(38,389);
   hden2_clone1688->SetTotalEvents(39,519);
   hden2_clone1688->SetPassedEvents(39,379);
   hden2_clone1688->SetTotalEvents(40,496);
   hden2_clone1688->SetPassedEvents(40,361);
   hden2_clone1688->SetTotalEvents(41,545);
   hden2_clone1688->SetPassedEvents(41,435);
   hden2_clone1688->SetTotalEvents(42,548);
   hden2_clone1688->SetPassedEvents(42,434);
   hden2_clone1688->SetTotalEvents(43,509);
   hden2_clone1688->SetPassedEvents(43,406);
   hden2_clone1688->SetTotalEvents(44,542);
   hden2_clone1688->SetPassedEvents(44,446);
   hden2_clone1688->SetTotalEvents(45,473);
   hden2_clone1688->SetPassedEvents(45,397);
   hden2_clone1688->SetTotalEvents(46,505);
   hden2_clone1688->SetPassedEvents(46,415);
   hden2_clone1688->SetTotalEvents(47,512);
   hden2_clone1688->SetPassedEvents(47,416);
   hden2_clone1688->SetTotalEvents(48,525);
   hden2_clone1688->SetPassedEvents(48,439);
   hden2_clone1688->SetTotalEvents(49,535);
   hden2_clone1688->SetPassedEvents(49,453);
   hden2_clone1688->SetTotalEvents(50,498);
   hden2_clone1688->SetPassedEvents(50,416);
   hden2_clone1688->SetTotalEvents(51,5);
   hden2_clone1688->SetPassedEvents(51,5);
   hden2_clone1688->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden2_clone1688->SetLineColor(ci);
   hden2_clone1688->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden2_clone1688->SetMarkerColor(ci);
   hden2_clone1688->SetMarkerStyle(25);
   hden2_clone1688->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>40 GeV");
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
