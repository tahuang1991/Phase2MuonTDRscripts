void GEMCSC_L1Mu_CSconlyQ12_eff_20170208_pt10_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:01:56 2017) by ROOT version6.08/06
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
   Double_t xAxis11[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__9 = new TH1F("b1__9"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis11);
   b1__9->SetMinimum(0);
   b1__9->SetMaximum(1.05);
   b1__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__9->SetLineColor(ci);
   b1__9->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__9->GetXaxis()->SetLabelFont(42);
   b1__9->GetXaxis()->SetLabelSize(0.05);
   b1__9->GetXaxis()->SetTitleSize(0.05);
   b1__9->GetXaxis()->SetTitleFont(42);
   b1__9->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__9->GetYaxis()->SetNdivisions(520);
   b1__9->GetYaxis()->SetLabelFont(42);
   b1__9->GetYaxis()->SetLabelSize(0.05);
   b1__9->GetYaxis()->SetTitleSize(0.05);
   b1__9->GetYaxis()->SetTitleOffset(1.1);
   b1__9->GetYaxis()->SetTitleFont(42);
   b1__9->GetZaxis()->SetLabelFont(42);
   b1__9->GetZaxis()->SetLabelSize(0.035);
   b1__9->GetZaxis()->SetTitleSize(0.035);
   b1__9->GetZaxis()->SetTitleFont(42);
   b1__9->Draw("");
   Double_t xAxis3[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone3 = new TEfficiency("hden0_clone","",50,xAxis3);
   
   hden0_clone3->SetConfidenceLevel(0.6826895);
   hden0_clone3->SetBetaAlpha(1);
   hden0_clone3->SetBetaBeta(1);
   hden0_clone3->SetWeight(1);
   hden0_clone3->SetStatisticOption(0);
   hden0_clone3->SetPosteriorMode(0);
   hden0_clone3->SetShortestInterval(0);
   hden0_clone3->SetTotalEvents(0,0);
   hden0_clone3->SetPassedEvents(0,0);
   hden0_clone3->SetTotalEvents(1,0);
   hden0_clone3->SetPassedEvents(1,0);
   hden0_clone3->SetTotalEvents(2,230);
   hden0_clone3->SetPassedEvents(2,0);
   hden0_clone3->SetTotalEvents(3,440);
   hden0_clone3->SetPassedEvents(3,1);
   hden0_clone3->SetTotalEvents(4,436);
   hden0_clone3->SetPassedEvents(4,2);
   hden0_clone3->SetTotalEvents(5,440);
   hden0_clone3->SetPassedEvents(5,10);
   hden0_clone3->SetTotalEvents(6,430);
   hden0_clone3->SetPassedEvents(6,26);
   hden0_clone3->SetTotalEvents(7,492);
   hden0_clone3->SetPassedEvents(7,90);
   hden0_clone3->SetTotalEvents(8,510);
   hden0_clone3->SetPassedEvents(8,215);
   hden0_clone3->SetTotalEvents(9,444);
   hden0_clone3->SetPassedEvents(9,281);
   hden0_clone3->SetTotalEvents(10,406);
   hden0_clone3->SetPassedEvents(10,320);
   hden0_clone3->SetTotalEvents(11,376);
   hden0_clone3->SetPassedEvents(11,292);
   hden0_clone3->SetTotalEvents(12,460);
   hden0_clone3->SetPassedEvents(12,371);
   hden0_clone3->SetTotalEvents(13,488);
   hden0_clone3->SetPassedEvents(13,394);
   hden0_clone3->SetTotalEvents(14,422);
   hden0_clone3->SetPassedEvents(14,348);
   hden0_clone3->SetTotalEvents(15,484);
   hden0_clone3->SetPassedEvents(15,408);
   hden0_clone3->SetTotalEvents(16,424);
   hden0_clone3->SetPassedEvents(16,359);
   hden0_clone3->SetTotalEvents(17,434);
   hden0_clone3->SetPassedEvents(17,355);
   hden0_clone3->SetTotalEvents(18,474);
   hden0_clone3->SetPassedEvents(18,418);
   hden0_clone3->SetTotalEvents(19,446);
   hden0_clone3->SetPassedEvents(19,385);
   hden0_clone3->SetTotalEvents(20,476);
   hden0_clone3->SetPassedEvents(20,396);
   hden0_clone3->SetTotalEvents(21,404);
   hden0_clone3->SetPassedEvents(21,347);
   hden0_clone3->SetTotalEvents(22,438);
   hden0_clone3->SetPassedEvents(22,376);
   hden0_clone3->SetTotalEvents(23,470);
   hden0_clone3->SetPassedEvents(23,387);
   hden0_clone3->SetTotalEvents(24,424);
   hden0_clone3->SetPassedEvents(24,368);
   hden0_clone3->SetTotalEvents(25,474);
   hden0_clone3->SetPassedEvents(25,403);
   hden0_clone3->SetTotalEvents(26,468);
   hden0_clone3->SetPassedEvents(26,381);
   hden0_clone3->SetTotalEvents(27,398);
   hden0_clone3->SetPassedEvents(27,351);
   hden0_clone3->SetTotalEvents(28,468);
   hden0_clone3->SetPassedEvents(28,396);
   hden0_clone3->SetTotalEvents(29,390);
   hden0_clone3->SetPassedEvents(29,336);
   hden0_clone3->SetTotalEvents(30,412);
   hden0_clone3->SetPassedEvents(30,357);
   hden0_clone3->SetTotalEvents(31,458);
   hden0_clone3->SetPassedEvents(31,400);
   hden0_clone3->SetTotalEvents(32,436);
   hden0_clone3->SetPassedEvents(32,370);
   hden0_clone3->SetTotalEvents(33,460);
   hden0_clone3->SetPassedEvents(33,400);
   hden0_clone3->SetTotalEvents(34,456);
   hden0_clone3->SetPassedEvents(34,394);
   hden0_clone3->SetTotalEvents(35,442);
   hden0_clone3->SetPassedEvents(35,388);
   hden0_clone3->SetTotalEvents(36,416);
   hden0_clone3->SetPassedEvents(36,358);
   hden0_clone3->SetTotalEvents(37,430);
   hden0_clone3->SetPassedEvents(37,357);
   hden0_clone3->SetTotalEvents(38,406);
   hden0_clone3->SetPassedEvents(38,351);
   hden0_clone3->SetTotalEvents(39,472);
   hden0_clone3->SetPassedEvents(39,408);
   hden0_clone3->SetTotalEvents(40,486);
   hden0_clone3->SetPassedEvents(40,420);
   hden0_clone3->SetTotalEvents(41,404);
   hden0_clone3->SetPassedEvents(41,340);
   hden0_clone3->SetTotalEvents(42,418);
   hden0_clone3->SetPassedEvents(42,357);
   hden0_clone3->SetTotalEvents(43,428);
   hden0_clone3->SetPassedEvents(43,377);
   hden0_clone3->SetTotalEvents(44,416);
   hden0_clone3->SetPassedEvents(44,347);
   hden0_clone3->SetTotalEvents(45,438);
   hden0_clone3->SetPassedEvents(45,375);
   hden0_clone3->SetTotalEvents(46,416);
   hden0_clone3->SetPassedEvents(46,350);
   hden0_clone3->SetTotalEvents(47,406);
   hden0_clone3->SetPassedEvents(47,347);
   hden0_clone3->SetTotalEvents(48,470);
   hden0_clone3->SetPassedEvents(48,396);
   hden0_clone3->SetTotalEvents(49,442);
   hden0_clone3->SetPassedEvents(49,387);
   hden0_clone3->SetTotalEvents(50,494);
   hden0_clone3->SetPassedEvents(50,423);
   hden0_clone3->SetTotalEvents(51,0);
   hden0_clone3->SetPassedEvents(51,0);
   hden0_clone3->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone3->SetLineColor(ci);
   hden0_clone3->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone3->SetMarkerColor(ci);
   hden0_clone3->SetMarkerStyle(26);
   hden0_clone3->Draw("samezp");
   
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
   entry=leg->AddEntry("hden0_clone","CSC only","pl");

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
   TLatex *   tex = new TLatex(0.44,0.57,"p_{T}^{Trig} >10 GeV, p_{T}^{True}>15 GeV");
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
