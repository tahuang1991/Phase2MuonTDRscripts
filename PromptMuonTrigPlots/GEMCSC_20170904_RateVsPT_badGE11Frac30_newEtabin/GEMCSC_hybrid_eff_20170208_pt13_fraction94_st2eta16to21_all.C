void GEMCSC_hybrid_eff_20170208_pt13_fraction94_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:33:56 2017) by ROOT version6.08/06
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
   Double_t xAxis415[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__398 = new TH1F("b1__398"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis415);
   b1__398->SetMinimum(0);
   b1__398->SetMaximum(1.05);
   b1__398->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__398->SetLineColor(ci);
   b1__398->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__398->GetXaxis()->SetLabelFont(42);
   b1__398->GetXaxis()->SetLabelSize(0.05);
   b1__398->GetXaxis()->SetTitleSize(0.05);
   b1__398->GetXaxis()->SetTitleFont(42);
   b1__398->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__398->GetYaxis()->SetNdivisions(520);
   b1__398->GetYaxis()->SetLabelFont(42);
   b1__398->GetYaxis()->SetLabelSize(0.05);
   b1__398->GetYaxis()->SetTitleSize(0.05);
   b1__398->GetYaxis()->SetTitleOffset(1.1);
   b1__398->GetYaxis()->SetTitleFont(42);
   b1__398->GetZaxis()->SetLabelFont(42);
   b1__398->GetZaxis()->SetLabelSize(0.035);
   b1__398->GetZaxis()->SetTitleSize(0.035);
   b1__398->GetZaxis()->SetTitleFont(42);
   b1__398->Draw("");
   Double_t xAxis738[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone738 = new TEfficiency("hden0_clone","",50,xAxis738);
   
   hden0_clone738->SetConfidenceLevel(0.6826895);
   hden0_clone738->SetBetaAlpha(1);
   hden0_clone738->SetBetaBeta(1);
   hden0_clone738->SetWeight(1);
   hden0_clone738->SetStatisticOption(0);
   hden0_clone738->SetPosteriorMode(0);
   hden0_clone738->SetShortestInterval(0);
   hden0_clone738->SetTotalEvents(0,0);
   hden0_clone738->SetPassedEvents(0,0);
   hden0_clone738->SetTotalEvents(1,0);
   hden0_clone738->SetPassedEvents(1,0);
   hden0_clone738->SetTotalEvents(2,868);
   hden0_clone738->SetPassedEvents(2,0);
   hden0_clone738->SetTotalEvents(3,1576);
   hden0_clone738->SetPassedEvents(3,0);
   hden0_clone738->SetTotalEvents(4,1626);
   hden0_clone738->SetPassedEvents(4,1);
   hden0_clone738->SetTotalEvents(5,1728);
   hden0_clone738->SetPassedEvents(5,3);
   hden0_clone738->SetTotalEvents(6,1728);
   hden0_clone738->SetPassedEvents(6,4);
   hden0_clone738->SetTotalEvents(7,1742);
   hden0_clone738->SetPassedEvents(7,23);
   hden0_clone738->SetTotalEvents(8,1652);
   hden0_clone738->SetPassedEvents(8,88);
   hden0_clone738->SetTotalEvents(9,1684);
   hden0_clone738->SetPassedEvents(9,225);
   hden0_clone738->SetTotalEvents(10,1736);
   hden0_clone738->SetPassedEvents(10,516);
   hden0_clone738->SetTotalEvents(11,1712);
   hden0_clone738->SetPassedEvents(11,790);
   hden0_clone738->SetTotalEvents(12,1714);
   hden0_clone738->SetPassedEvents(12,1104);
   hden0_clone738->SetTotalEvents(13,1694);
   hden0_clone738->SetPassedEvents(13,1310);
   hden0_clone738->SetTotalEvents(14,1704);
   hden0_clone738->SetPassedEvents(14,1431);
   hden0_clone738->SetTotalEvents(15,1614);
   hden0_clone738->SetPassedEvents(15,1411);
   hden0_clone738->SetTotalEvents(16,1756);
   hden0_clone738->SetPassedEvents(16,1549);
   hden0_clone738->SetTotalEvents(17,1656);
   hden0_clone738->SetPassedEvents(17,1467);
   hden0_clone738->SetTotalEvents(18,1674);
   hden0_clone738->SetPassedEvents(18,1485);
   hden0_clone738->SetTotalEvents(19,1706);
   hden0_clone738->SetPassedEvents(19,1554);
   hden0_clone738->SetTotalEvents(20,1620);
   hden0_clone738->SetPassedEvents(20,1464);
   hden0_clone738->SetTotalEvents(21,1692);
   hden0_clone738->SetPassedEvents(21,1546);
   hden0_clone738->SetTotalEvents(22,1670);
   hden0_clone738->SetPassedEvents(22,1515);
   hden0_clone738->SetTotalEvents(23,1602);
   hden0_clone738->SetPassedEvents(23,1449);
   hden0_clone738->SetTotalEvents(24,1694);
   hden0_clone738->SetPassedEvents(24,1568);
   hden0_clone738->SetTotalEvents(25,1760);
   hden0_clone738->SetPassedEvents(25,1615);
   hden0_clone738->SetTotalEvents(26,1682);
   hden0_clone738->SetPassedEvents(26,1526);
   hden0_clone738->SetTotalEvents(27,1804);
   hden0_clone738->SetPassedEvents(27,1669);
   hden0_clone738->SetTotalEvents(28,1738);
   hden0_clone738->SetPassedEvents(28,1611);
   hden0_clone738->SetTotalEvents(29,1716);
   hden0_clone738->SetPassedEvents(29,1576);
   hden0_clone738->SetTotalEvents(30,1684);
   hden0_clone738->SetPassedEvents(30,1547);
   hden0_clone738->SetTotalEvents(31,1710);
   hden0_clone738->SetPassedEvents(31,1584);
   hden0_clone738->SetTotalEvents(32,1640);
   hden0_clone738->SetPassedEvents(32,1501);
   hden0_clone738->SetTotalEvents(33,1816);
   hden0_clone738->SetPassedEvents(33,1694);
   hden0_clone738->SetTotalEvents(34,1642);
   hden0_clone738->SetPassedEvents(34,1486);
   hden0_clone738->SetTotalEvents(35,1664);
   hden0_clone738->SetPassedEvents(35,1552);
   hden0_clone738->SetTotalEvents(36,1670);
   hden0_clone738->SetPassedEvents(36,1547);
   hden0_clone738->SetTotalEvents(37,1880);
   hden0_clone738->SetPassedEvents(37,1700);
   hden0_clone738->SetTotalEvents(38,1730);
   hden0_clone738->SetPassedEvents(38,1602);
   hden0_clone738->SetTotalEvents(39,1720);
   hden0_clone738->SetPassedEvents(39,1578);
   hden0_clone738->SetTotalEvents(40,1670);
   hden0_clone738->SetPassedEvents(40,1541);
   hden0_clone738->SetTotalEvents(41,1790);
   hden0_clone738->SetPassedEvents(41,1660);
   hden0_clone738->SetTotalEvents(42,1806);
   hden0_clone738->SetPassedEvents(42,1686);
   hden0_clone738->SetTotalEvents(43,1720);
   hden0_clone738->SetPassedEvents(43,1593);
   hden0_clone738->SetTotalEvents(44,1732);
   hden0_clone738->SetPassedEvents(44,1582);
   hden0_clone738->SetTotalEvents(45,1598);
   hden0_clone738->SetPassedEvents(45,1498);
   hden0_clone738->SetTotalEvents(46,1706);
   hden0_clone738->SetPassedEvents(46,1575);
   hden0_clone738->SetTotalEvents(47,1756);
   hden0_clone738->SetPassedEvents(47,1631);
   hden0_clone738->SetTotalEvents(48,1760);
   hden0_clone738->SetPassedEvents(48,1638);
   hden0_clone738->SetTotalEvents(49,1746);
   hden0_clone738->SetPassedEvents(49,1611);
   hden0_clone738->SetTotalEvents(50,1712);
   hden0_clone738->SetPassedEvents(50,1574);
   hden0_clone738->SetTotalEvents(51,18);
   hden0_clone738->SetPassedEvents(51,18);
   hden0_clone738->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone738->SetLineColor(ci);
   hden0_clone738->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone738->SetMarkerColor(ci);
   hden0_clone738->SetMarkerStyle(26);
   hden0_clone738->Draw("samezp");
   
   TLegend *leg = new TLegend(0.42,0.2,0.88,0.3,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>13 GeV");
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
