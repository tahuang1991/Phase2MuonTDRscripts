void GEMCSC_L1Mu_CSconlyQ12_eff_20170208_pt20_fraction94_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:39 2017) by ROOT version6.08/06
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
   Double_t xAxis669[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__641 = new TH1F("b1__641"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis669);
   b1__641->SetMinimum(0);
   b1__641->SetMaximum(1.05);
   b1__641->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__641->SetLineColor(ci);
   b1__641->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__641->GetXaxis()->SetLabelFont(42);
   b1__641->GetXaxis()->SetLabelSize(0.05);
   b1__641->GetXaxis()->SetTitleSize(0.05);
   b1__641->GetXaxis()->SetTitleFont(42);
   b1__641->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__641->GetYaxis()->SetNdivisions(520);
   b1__641->GetYaxis()->SetLabelFont(42);
   b1__641->GetYaxis()->SetLabelSize(0.05);
   b1__641->GetYaxis()->SetTitleSize(0.05);
   b1__641->GetYaxis()->SetTitleOffset(1.1);
   b1__641->GetYaxis()->SetTitleFont(42);
   b1__641->GetZaxis()->SetLabelFont(42);
   b1__641->GetZaxis()->SetLabelSize(0.035);
   b1__641->GetZaxis()->SetTitleSize(0.035);
   b1__641->GetZaxis()->SetTitleFont(42);
   b1__641->Draw("");
   Double_t xAxis1191[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone1191 = new TEfficiency("hden0_clone","",50,xAxis1191);
   
   hden0_clone1191->SetConfidenceLevel(0.6826895);
   hden0_clone1191->SetBetaAlpha(1);
   hden0_clone1191->SetBetaBeta(1);
   hden0_clone1191->SetWeight(1);
   hden0_clone1191->SetStatisticOption(0);
   hden0_clone1191->SetPosteriorMode(0);
   hden0_clone1191->SetShortestInterval(0);
   hden0_clone1191->SetTotalEvents(0,0);
   hden0_clone1191->SetPassedEvents(0,0);
   hden0_clone1191->SetTotalEvents(1,0);
   hden0_clone1191->SetPassedEvents(1,0);
   hden0_clone1191->SetTotalEvents(2,230);
   hden0_clone1191->SetPassedEvents(2,0);
   hden0_clone1191->SetTotalEvents(3,440);
   hden0_clone1191->SetPassedEvents(3,1);
   hden0_clone1191->SetTotalEvents(4,436);
   hden0_clone1191->SetPassedEvents(4,0);
   hden0_clone1191->SetTotalEvents(5,440);
   hden0_clone1191->SetPassedEvents(5,1);
   hden0_clone1191->SetTotalEvents(6,430);
   hden0_clone1191->SetPassedEvents(6,6);
   hden0_clone1191->SetTotalEvents(7,492);
   hden0_clone1191->SetPassedEvents(7,5);
   hden0_clone1191->SetTotalEvents(8,510);
   hden0_clone1191->SetPassedEvents(8,4);
   hden0_clone1191->SetTotalEvents(9,444);
   hden0_clone1191->SetPassedEvents(9,10);
   hden0_clone1191->SetTotalEvents(10,406);
   hden0_clone1191->SetPassedEvents(10,17);
   hden0_clone1191->SetTotalEvents(11,376);
   hden0_clone1191->SetPassedEvents(11,21);
   hden0_clone1191->SetTotalEvents(12,460);
   hden0_clone1191->SetPassedEvents(12,44);
   hden0_clone1191->SetTotalEvents(13,488);
   hden0_clone1191->SetPassedEvents(13,82);
   hden0_clone1191->SetTotalEvents(14,422);
   hden0_clone1191->SetPassedEvents(14,123);
   hden0_clone1191->SetTotalEvents(15,484);
   hden0_clone1191->SetPassedEvents(15,165);
   hden0_clone1191->SetTotalEvents(16,424);
   hden0_clone1191->SetPassedEvents(16,215);
   hden0_clone1191->SetTotalEvents(17,434);
   hden0_clone1191->SetPassedEvents(17,254);
   hden0_clone1191->SetTotalEvents(18,474);
   hden0_clone1191->SetPassedEvents(18,333);
   hden0_clone1191->SetTotalEvents(19,446);
   hden0_clone1191->SetPassedEvents(19,324);
   hden0_clone1191->SetTotalEvents(20,476);
   hden0_clone1191->SetPassedEvents(20,353);
   hden0_clone1191->SetTotalEvents(21,404);
   hden0_clone1191->SetPassedEvents(21,306);
   hden0_clone1191->SetTotalEvents(22,438);
   hden0_clone1191->SetPassedEvents(22,356);
   hden0_clone1191->SetTotalEvents(23,470);
   hden0_clone1191->SetPassedEvents(23,365);
   hden0_clone1191->SetTotalEvents(24,424);
   hden0_clone1191->SetPassedEvents(24,356);
   hden0_clone1191->SetTotalEvents(25,474);
   hden0_clone1191->SetPassedEvents(25,390);
   hden0_clone1191->SetTotalEvents(26,468);
   hden0_clone1191->SetPassedEvents(26,374);
   hden0_clone1191->SetTotalEvents(27,398);
   hden0_clone1191->SetPassedEvents(27,339);
   hden0_clone1191->SetTotalEvents(28,468);
   hden0_clone1191->SetPassedEvents(28,383);
   hden0_clone1191->SetTotalEvents(29,390);
   hden0_clone1191->SetPassedEvents(29,326);
   hden0_clone1191->SetTotalEvents(30,412);
   hden0_clone1191->SetPassedEvents(30,349);
   hden0_clone1191->SetTotalEvents(31,458);
   hden0_clone1191->SetPassedEvents(31,392);
   hden0_clone1191->SetTotalEvents(32,436);
   hden0_clone1191->SetPassedEvents(32,363);
   hden0_clone1191->SetTotalEvents(33,460);
   hden0_clone1191->SetPassedEvents(33,393);
   hden0_clone1191->SetTotalEvents(34,456);
   hden0_clone1191->SetPassedEvents(34,387);
   hden0_clone1191->SetTotalEvents(35,442);
   hden0_clone1191->SetPassedEvents(35,383);
   hden0_clone1191->SetTotalEvents(36,416);
   hden0_clone1191->SetPassedEvents(36,356);
   hden0_clone1191->SetTotalEvents(37,430);
   hden0_clone1191->SetPassedEvents(37,349);
   hden0_clone1191->SetTotalEvents(38,406);
   hden0_clone1191->SetPassedEvents(38,347);
   hden0_clone1191->SetTotalEvents(39,472);
   hden0_clone1191->SetPassedEvents(39,399);
   hden0_clone1191->SetTotalEvents(40,486);
   hden0_clone1191->SetPassedEvents(40,413);
   hden0_clone1191->SetTotalEvents(41,404);
   hden0_clone1191->SetPassedEvents(41,333);
   hden0_clone1191->SetTotalEvents(42,418);
   hden0_clone1191->SetPassedEvents(42,356);
   hden0_clone1191->SetTotalEvents(43,428);
   hden0_clone1191->SetPassedEvents(43,370);
   hden0_clone1191->SetTotalEvents(44,416);
   hden0_clone1191->SetPassedEvents(44,338);
   hden0_clone1191->SetTotalEvents(45,438);
   hden0_clone1191->SetPassedEvents(45,366);
   hden0_clone1191->SetTotalEvents(46,416);
   hden0_clone1191->SetPassedEvents(46,346);
   hden0_clone1191->SetTotalEvents(47,406);
   hden0_clone1191->SetPassedEvents(47,342);
   hden0_clone1191->SetTotalEvents(48,470);
   hden0_clone1191->SetPassedEvents(48,389);
   hden0_clone1191->SetTotalEvents(49,442);
   hden0_clone1191->SetPassedEvents(49,379);
   hden0_clone1191->SetTotalEvents(50,494);
   hden0_clone1191->SetPassedEvents(50,418);
   hden0_clone1191->SetTotalEvents(51,0);
   hden0_clone1191->SetPassedEvents(51,0);
   hden0_clone1191->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1191->SetLineColor(ci);
   hden0_clone1191->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1191->SetMarkerColor(ci);
   hden0_clone1191->SetMarkerStyle(26);
   hden0_clone1191->Draw("samezp");
   
   TLegend *leg = new TLegend(0.42,0.2,0.88,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","CSC only","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","GE11only","pl");

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
