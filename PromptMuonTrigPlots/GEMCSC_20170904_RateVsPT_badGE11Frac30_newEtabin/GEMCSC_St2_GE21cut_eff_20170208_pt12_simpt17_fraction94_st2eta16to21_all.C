void GEMCSC_St2_GE21cut_eff_20170208_pt12_simpt17_fraction94_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:33:25 2017) by ROOT version6.08/06
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
   Double_t xAxis365[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__350 = new TH1F("b1__350"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis365);
   b1__350->SetMinimum(0);
   b1__350->SetMaximum(1.05);
   b1__350->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__350->SetLineColor(ci);
   b1__350->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__350->GetXaxis()->SetLabelFont(42);
   b1__350->GetXaxis()->SetLabelSize(0.05);
   b1__350->GetXaxis()->SetTitleSize(0.05);
   b1__350->GetXaxis()->SetTitleFont(42);
   b1__350->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__350->GetYaxis()->SetNdivisions(520);
   b1__350->GetYaxis()->SetLabelFont(42);
   b1__350->GetYaxis()->SetLabelSize(0.05);
   b1__350->GetYaxis()->SetTitleSize(0.05);
   b1__350->GetYaxis()->SetTitleOffset(1.1);
   b1__350->GetYaxis()->SetTitleFont(42);
   b1__350->GetZaxis()->SetLabelFont(42);
   b1__350->GetZaxis()->SetLabelSize(0.035);
   b1__350->GetZaxis()->SetTitleSize(0.035);
   b1__350->GetZaxis()->SetTitleFont(42);
   b1__350->Draw("");
   Double_t xAxis650[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone650 = new TEfficiency("hden0_clone","",50,xAxis650);
   
   hden0_clone650->SetConfidenceLevel(0.6826895);
   hden0_clone650->SetBetaAlpha(1);
   hden0_clone650->SetBetaBeta(1);
   hden0_clone650->SetWeight(1);
   hden0_clone650->SetStatisticOption(0);
   hden0_clone650->SetPosteriorMode(0);
   hden0_clone650->SetShortestInterval(0);
   hden0_clone650->SetTotalEvents(0,0);
   hden0_clone650->SetPassedEvents(0,0);
   hden0_clone650->SetTotalEvents(1,0);
   hden0_clone650->SetPassedEvents(1,0);
   hden0_clone650->SetTotalEvents(2,868);
   hden0_clone650->SetPassedEvents(2,1);
   hden0_clone650->SetTotalEvents(3,1576);
   hden0_clone650->SetPassedEvents(3,3);
   hden0_clone650->SetTotalEvents(4,1626);
   hden0_clone650->SetPassedEvents(4,10);
   hden0_clone650->SetTotalEvents(5,1728);
   hden0_clone650->SetPassedEvents(5,20);
   hden0_clone650->SetTotalEvents(6,1728);
   hden0_clone650->SetPassedEvents(6,38);
   hden0_clone650->SetTotalEvents(7,1742);
   hden0_clone650->SetPassedEvents(7,96);
   hden0_clone650->SetTotalEvents(8,1652);
   hden0_clone650->SetPassedEvents(8,245);
   hden0_clone650->SetTotalEvents(9,1684);
   hden0_clone650->SetPassedEvents(9,543);
   hden0_clone650->SetTotalEvents(10,1736);
   hden0_clone650->SetPassedEvents(10,889);
   hden0_clone650->SetTotalEvents(11,1712);
   hden0_clone650->SetPassedEvents(11,1097);
   hden0_clone650->SetTotalEvents(12,1714);
   hden0_clone650->SetPassedEvents(12,1320);
   hden0_clone650->SetTotalEvents(13,1694);
   hden0_clone650->SetPassedEvents(13,1395);
   hden0_clone650->SetTotalEvents(14,1704);
   hden0_clone650->SetPassedEvents(14,1474);
   hden0_clone650->SetTotalEvents(15,1614);
   hden0_clone650->SetPassedEvents(15,1415);
   hden0_clone650->SetTotalEvents(16,1756);
   hden0_clone650->SetPassedEvents(16,1541);
   hden0_clone650->SetTotalEvents(17,1656);
   hden0_clone650->SetPassedEvents(17,1444);
   hden0_clone650->SetTotalEvents(18,1674);
   hden0_clone650->SetPassedEvents(18,1483);
   hden0_clone650->SetTotalEvents(19,1706);
   hden0_clone650->SetPassedEvents(19,1532);
   hden0_clone650->SetTotalEvents(20,1620);
   hden0_clone650->SetPassedEvents(20,1449);
   hden0_clone650->SetTotalEvents(21,1692);
   hden0_clone650->SetPassedEvents(21,1536);
   hden0_clone650->SetTotalEvents(22,1670);
   hden0_clone650->SetPassedEvents(22,1512);
   hden0_clone650->SetTotalEvents(23,1602);
   hden0_clone650->SetPassedEvents(23,1441);
   hden0_clone650->SetTotalEvents(24,1694);
   hden0_clone650->SetPassedEvents(24,1541);
   hden0_clone650->SetTotalEvents(25,1760);
   hden0_clone650->SetPassedEvents(25,1608);
   hden0_clone650->SetTotalEvents(26,1682);
   hden0_clone650->SetPassedEvents(26,1529);
   hden0_clone650->SetTotalEvents(27,1804);
   hden0_clone650->SetPassedEvents(27,1653);
   hden0_clone650->SetTotalEvents(28,1738);
   hden0_clone650->SetPassedEvents(28,1620);
   hden0_clone650->SetTotalEvents(29,1716);
   hden0_clone650->SetPassedEvents(29,1560);
   hden0_clone650->SetTotalEvents(30,1684);
   hden0_clone650->SetPassedEvents(30,1557);
   hden0_clone650->SetTotalEvents(31,1710);
   hden0_clone650->SetPassedEvents(31,1554);
   hden0_clone650->SetTotalEvents(32,1640);
   hden0_clone650->SetPassedEvents(32,1499);
   hden0_clone650->SetTotalEvents(33,1816);
   hden0_clone650->SetPassedEvents(33,1666);
   hden0_clone650->SetTotalEvents(34,1642);
   hden0_clone650->SetPassedEvents(34,1485);
   hden0_clone650->SetTotalEvents(35,1664);
   hden0_clone650->SetPassedEvents(35,1547);
   hden0_clone650->SetTotalEvents(36,1670);
   hden0_clone650->SetPassedEvents(36,1545);
   hden0_clone650->SetTotalEvents(37,1880);
   hden0_clone650->SetPassedEvents(37,1700);
   hden0_clone650->SetTotalEvents(38,1730);
   hden0_clone650->SetPassedEvents(38,1595);
   hden0_clone650->SetTotalEvents(39,1720);
   hden0_clone650->SetPassedEvents(39,1562);
   hden0_clone650->SetTotalEvents(40,1670);
   hden0_clone650->SetPassedEvents(40,1522);
   hden0_clone650->SetTotalEvents(41,1790);
   hden0_clone650->SetPassedEvents(41,1650);
   hden0_clone650->SetTotalEvents(42,1806);
   hden0_clone650->SetPassedEvents(42,1646);
   hden0_clone650->SetTotalEvents(43,1720);
   hden0_clone650->SetPassedEvents(43,1579);
   hden0_clone650->SetTotalEvents(44,1732);
   hden0_clone650->SetPassedEvents(44,1561);
   hden0_clone650->SetTotalEvents(45,1598);
   hden0_clone650->SetPassedEvents(45,1481);
   hden0_clone650->SetTotalEvents(46,1706);
   hden0_clone650->SetPassedEvents(46,1559);
   hden0_clone650->SetTotalEvents(47,1756);
   hden0_clone650->SetPassedEvents(47,1611);
   hden0_clone650->SetTotalEvents(48,1760);
   hden0_clone650->SetPassedEvents(48,1616);
   hden0_clone650->SetTotalEvents(49,1746);
   hden0_clone650->SetPassedEvents(49,1598);
   hden0_clone650->SetTotalEvents(50,1712);
   hden0_clone650->SetPassedEvents(50,1565);
   hden0_clone650->SetTotalEvents(51,18);
   hden0_clone650->SetPassedEvents(51,15);
   hden0_clone650->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone650->SetLineColor(ci);
   hden0_clone650->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone650->SetMarkerColor(ci);
   hden0_clone650->SetMarkerStyle(26);
   hden0_clone650->Draw("samezp");
   
   TLegend *leg = new TLegend(0.42,0.2,0.88,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GE21-ME21","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","prompt muon","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>12 GeV");
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
