void GEMCSC_L1Mu_CSconlyQ12_eff_20170208_pt18_fraction94_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:36:09 2017) by ROOT version6.08/06
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
   Double_t xAxis621[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__595 = new TH1F("b1__595"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis621);
   b1__595->SetMinimum(0);
   b1__595->SetMaximum(1.05);
   b1__595->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__595->SetLineColor(ci);
   b1__595->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__595->GetXaxis()->SetLabelFont(42);
   b1__595->GetXaxis()->SetLabelSize(0.05);
   b1__595->GetXaxis()->SetTitleSize(0.05);
   b1__595->GetXaxis()->SetTitleFont(42);
   b1__595->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__595->GetYaxis()->SetNdivisions(520);
   b1__595->GetYaxis()->SetLabelFont(42);
   b1__595->GetYaxis()->SetLabelSize(0.05);
   b1__595->GetYaxis()->SetTitleSize(0.05);
   b1__595->GetYaxis()->SetTitleOffset(1.1);
   b1__595->GetYaxis()->SetTitleFont(42);
   b1__595->GetZaxis()->SetLabelFont(42);
   b1__595->GetZaxis()->SetLabelSize(0.035);
   b1__595->GetZaxis()->SetTitleSize(0.035);
   b1__595->GetZaxis()->SetTitleFont(42);
   b1__595->Draw("");
   Double_t xAxis1105[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone1105 = new TEfficiency("hden0_clone","",50,xAxis1105);
   
   hden0_clone1105->SetConfidenceLevel(0.6826895);
   hden0_clone1105->SetBetaAlpha(1);
   hden0_clone1105->SetBetaBeta(1);
   hden0_clone1105->SetWeight(1);
   hden0_clone1105->SetStatisticOption(0);
   hden0_clone1105->SetPosteriorMode(0);
   hden0_clone1105->SetShortestInterval(0);
   hden0_clone1105->SetTotalEvents(0,0);
   hden0_clone1105->SetPassedEvents(0,0);
   hden0_clone1105->SetTotalEvents(1,0);
   hden0_clone1105->SetPassedEvents(1,0);
   hden0_clone1105->SetTotalEvents(2,230);
   hden0_clone1105->SetPassedEvents(2,0);
   hden0_clone1105->SetTotalEvents(3,440);
   hden0_clone1105->SetPassedEvents(3,1);
   hden0_clone1105->SetTotalEvents(4,436);
   hden0_clone1105->SetPassedEvents(4,0);
   hden0_clone1105->SetTotalEvents(5,440);
   hden0_clone1105->SetPassedEvents(5,2);
   hden0_clone1105->SetTotalEvents(6,430);
   hden0_clone1105->SetPassedEvents(6,6);
   hden0_clone1105->SetTotalEvents(7,492);
   hden0_clone1105->SetPassedEvents(7,7);
   hden0_clone1105->SetTotalEvents(8,510);
   hden0_clone1105->SetPassedEvents(8,7);
   hden0_clone1105->SetTotalEvents(9,444);
   hden0_clone1105->SetPassedEvents(9,14);
   hden0_clone1105->SetTotalEvents(10,406);
   hden0_clone1105->SetPassedEvents(10,25);
   hden0_clone1105->SetTotalEvents(11,376);
   hden0_clone1105->SetPassedEvents(11,50);
   hden0_clone1105->SetTotalEvents(12,460);
   hden0_clone1105->SetPassedEvents(12,90);
   hden0_clone1105->SetTotalEvents(13,488);
   hden0_clone1105->SetPassedEvents(13,140);
   hden0_clone1105->SetTotalEvents(14,422);
   hden0_clone1105->SetPassedEvents(14,196);
   hden0_clone1105->SetTotalEvents(15,484);
   hden0_clone1105->SetPassedEvents(15,239);
   hden0_clone1105->SetTotalEvents(16,424);
   hden0_clone1105->SetPassedEvents(16,276);
   hden0_clone1105->SetTotalEvents(17,434);
   hden0_clone1105->SetPassedEvents(17,311);
   hden0_clone1105->SetTotalEvents(18,474);
   hden0_clone1105->SetPassedEvents(18,376);
   hden0_clone1105->SetTotalEvents(19,446);
   hden0_clone1105->SetPassedEvents(19,353);
   hden0_clone1105->SetTotalEvents(20,476);
   hden0_clone1105->SetPassedEvents(20,372);
   hden0_clone1105->SetTotalEvents(21,404);
   hden0_clone1105->SetPassedEvents(21,320);
   hden0_clone1105->SetTotalEvents(22,438);
   hden0_clone1105->SetPassedEvents(22,360);
   hden0_clone1105->SetTotalEvents(23,470);
   hden0_clone1105->SetPassedEvents(23,372);
   hden0_clone1105->SetTotalEvents(24,424);
   hden0_clone1105->SetPassedEvents(24,359);
   hden0_clone1105->SetTotalEvents(25,474);
   hden0_clone1105->SetPassedEvents(25,393);
   hden0_clone1105->SetTotalEvents(26,468);
   hden0_clone1105->SetPassedEvents(26,376);
   hden0_clone1105->SetTotalEvents(27,398);
   hden0_clone1105->SetPassedEvents(27,343);
   hden0_clone1105->SetTotalEvents(28,468);
   hden0_clone1105->SetPassedEvents(28,386);
   hden0_clone1105->SetTotalEvents(29,390);
   hden0_clone1105->SetPassedEvents(29,328);
   hden0_clone1105->SetTotalEvents(30,412);
   hden0_clone1105->SetPassedEvents(30,351);
   hden0_clone1105->SetTotalEvents(31,458);
   hden0_clone1105->SetPassedEvents(31,393);
   hden0_clone1105->SetTotalEvents(32,436);
   hden0_clone1105->SetPassedEvents(32,365);
   hden0_clone1105->SetTotalEvents(33,460);
   hden0_clone1105->SetPassedEvents(33,393);
   hden0_clone1105->SetTotalEvents(34,456);
   hden0_clone1105->SetPassedEvents(34,388);
   hden0_clone1105->SetTotalEvents(35,442);
   hden0_clone1105->SetPassedEvents(35,385);
   hden0_clone1105->SetTotalEvents(36,416);
   hden0_clone1105->SetPassedEvents(36,357);
   hden0_clone1105->SetTotalEvents(37,430);
   hden0_clone1105->SetPassedEvents(37,349);
   hden0_clone1105->SetTotalEvents(38,406);
   hden0_clone1105->SetPassedEvents(38,347);
   hden0_clone1105->SetTotalEvents(39,472);
   hden0_clone1105->SetPassedEvents(39,400);
   hden0_clone1105->SetTotalEvents(40,486);
   hden0_clone1105->SetPassedEvents(40,415);
   hden0_clone1105->SetTotalEvents(41,404);
   hden0_clone1105->SetPassedEvents(41,333);
   hden0_clone1105->SetTotalEvents(42,418);
   hden0_clone1105->SetPassedEvents(42,356);
   hden0_clone1105->SetTotalEvents(43,428);
   hden0_clone1105->SetPassedEvents(43,372);
   hden0_clone1105->SetTotalEvents(44,416);
   hden0_clone1105->SetPassedEvents(44,339);
   hden0_clone1105->SetTotalEvents(45,438);
   hden0_clone1105->SetPassedEvents(45,367);
   hden0_clone1105->SetTotalEvents(46,416);
   hden0_clone1105->SetPassedEvents(46,346);
   hden0_clone1105->SetTotalEvents(47,406);
   hden0_clone1105->SetPassedEvents(47,342);
   hden0_clone1105->SetTotalEvents(48,470);
   hden0_clone1105->SetPassedEvents(48,391);
   hden0_clone1105->SetTotalEvents(49,442);
   hden0_clone1105->SetPassedEvents(49,380);
   hden0_clone1105->SetTotalEvents(50,494);
   hden0_clone1105->SetPassedEvents(50,418);
   hden0_clone1105->SetTotalEvents(51,0);
   hden0_clone1105->SetPassedEvents(51,0);
   hden0_clone1105->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1105->SetLineColor(ci);
   hden0_clone1105->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1105->SetMarkerColor(ci);
   hden0_clone1105->SetMarkerStyle(26);
   hden0_clone1105->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>18 GeV");
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
