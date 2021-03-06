void GEMCSC_St1_GE11cut_eff_20170208_pt15_fraction75_st2eta16to21_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:04:59 2017) by ROOT version6.08/06
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
   Double_t xAxis1[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__1 = new TH1F("b1__1"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis1);
   b1__1->SetMinimum(0);
   b1__1->SetMaximum(1.05);
   b1__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__1->SetLineColor(ci);
   b1__1->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__1->GetXaxis()->SetLabelFont(42);
   b1__1->GetXaxis()->SetLabelSize(0.05);
   b1__1->GetXaxis()->SetTitleSize(0.05);
   b1__1->GetXaxis()->SetTitleFont(42);
   b1__1->GetYaxis()->SetTitle("Trigger efficiency");
   b1__1->GetYaxis()->SetNdivisions(520);
   b1__1->GetYaxis()->SetLabelFont(42);
   b1__1->GetYaxis()->SetLabelSize(0.05);
   b1__1->GetYaxis()->SetTitleSize(0.05);
   b1__1->GetYaxis()->SetTitleOffset(1.1);
   b1__1->GetYaxis()->SetTitleFont(42);
   b1__1->GetZaxis()->SetLabelFont(42);
   b1__1->GetZaxis()->SetLabelSize(0.035);
   b1__1->GetZaxis()->SetTitleSize(0.035);
   b1__1->GetZaxis()->SetTitleFont(42);
   b1__1->Draw("");
   Double_t xAxis1[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone1 = new TEfficiency("hden0_clone","",50,xAxis1);
   
   hden0_clone1->SetConfidenceLevel(0.6826895);
   hden0_clone1->SetBetaAlpha(1);
   hden0_clone1->SetBetaBeta(1);
   hden0_clone1->SetWeight(1);
   hden0_clone1->SetStatisticOption(0);
   hden0_clone1->SetPosteriorMode(0);
   hden0_clone1->SetShortestInterval(0);
   hden0_clone1->SetTotalEvents(0,0);
   hden0_clone1->SetPassedEvents(0,0);
   hden0_clone1->SetTotalEvents(1,0);
   hden0_clone1->SetPassedEvents(1,0);
   hden0_clone1->SetTotalEvents(2,1308);
   hden0_clone1->SetPassedEvents(2,0);
   hden0_clone1->SetTotalEvents(3,2390);
   hden0_clone1->SetPassedEvents(3,0);
   hden0_clone1->SetTotalEvents(4,2390);
   hden0_clone1->SetPassedEvents(4,0);
   hden0_clone1->SetTotalEvents(5,2546);
   hden0_clone1->SetPassedEvents(5,0);
   hden0_clone1->SetTotalEvents(6,2518);
   hden0_clone1->SetPassedEvents(6,0);
   hden0_clone1->SetTotalEvents(7,2458);
   hden0_clone1->SetPassedEvents(7,6);
   hden0_clone1->SetTotalEvents(8,2466);
   hden0_clone1->SetPassedEvents(8,13);
   hden0_clone1->SetTotalEvents(9,2452);
   hden0_clone1->SetPassedEvents(9,37);
   hden0_clone1->SetTotalEvents(10,2502);
   hden0_clone1->SetPassedEvents(10,109);
   hden0_clone1->SetTotalEvents(11,2564);
   hden0_clone1->SetPassedEvents(11,250);
   hden0_clone1->SetTotalEvents(12,2464);
   hden0_clone1->SetPassedEvents(12,447);
   hden0_clone1->SetTotalEvents(13,2492);
   hden0_clone1->SetPassedEvents(13,741);
   hden0_clone1->SetTotalEvents(14,2502);
   hden0_clone1->SetPassedEvents(14,1048);
   hden0_clone1->SetTotalEvents(15,2452);
   hden0_clone1->SetPassedEvents(15,1282);
   hden0_clone1->SetTotalEvents(16,2580);
   hden0_clone1->SetPassedEvents(16,1616);
   hden0_clone1->SetTotalEvents(17,2426);
   hden0_clone1->SetPassedEvents(17,1692);
   hden0_clone1->SetTotalEvents(18,2490);
   hden0_clone1->SetPassedEvents(18,1879);
   hden0_clone1->SetTotalEvents(19,2510);
   hden0_clone1->SetPassedEvents(19,2046);
   hden0_clone1->SetTotalEvents(20,2456);
   hden0_clone1->SetPassedEvents(20,2034);
   hden0_clone1->SetTotalEvents(21,2470);
   hden0_clone1->SetPassedEvents(21,2084);
   hden0_clone1->SetTotalEvents(22,2420);
   hden0_clone1->SetPassedEvents(22,2093);
   hden0_clone1->SetTotalEvents(23,2420);
   hden0_clone1->SetPassedEvents(23,2109);
   hden0_clone1->SetTotalEvents(24,2564);
   hden0_clone1->SetPassedEvents(24,2284);
   hden0_clone1->SetTotalEvents(25,2544);
   hden0_clone1->SetPassedEvents(25,2237);
   hden0_clone1->SetTotalEvents(26,2398);
   hden0_clone1->SetPassedEvents(26,2128);
   hden0_clone1->SetTotalEvents(27,2598);
   hden0_clone1->SetPassedEvents(27,2364);
   hden0_clone1->SetTotalEvents(28,2528);
   hden0_clone1->SetPassedEvents(28,2254);
   hden0_clone1->SetTotalEvents(29,2510);
   hden0_clone1->SetPassedEvents(29,2245);
   hden0_clone1->SetTotalEvents(30,2464);
   hden0_clone1->SetPassedEvents(30,2203);
   hden0_clone1->SetTotalEvents(31,2524);
   hden0_clone1->SetPassedEvents(31,2294);
   hden0_clone1->SetTotalEvents(32,2464);
   hden0_clone1->SetPassedEvents(32,2215);
   hden0_clone1->SetTotalEvents(33,2614);
   hden0_clone1->SetPassedEvents(33,2372);
   hden0_clone1->SetTotalEvents(34,2466);
   hden0_clone1->SetPassedEvents(34,2244);
   hden0_clone1->SetTotalEvents(35,2424);
   hden0_clone1->SetPassedEvents(35,2193);
   hden0_clone1->SetTotalEvents(36,2528);
   hden0_clone1->SetPassedEvents(36,2270);
   hden0_clone1->SetTotalEvents(37,2700);
   hden0_clone1->SetPassedEvents(37,2426);
   hden0_clone1->SetTotalEvents(38,2532);
   hden0_clone1->SetPassedEvents(38,2288);
   hden0_clone1->SetTotalEvents(39,2566);
   hden0_clone1->SetPassedEvents(39,2322);
   hden0_clone1->SetTotalEvents(40,2484);
   hden0_clone1->SetPassedEvents(40,2269);
   hden0_clone1->SetTotalEvents(41,2624);
   hden0_clone1->SetPassedEvents(41,2381);
   hden0_clone1->SetTotalEvents(42,2560);
   hden0_clone1->SetPassedEvents(42,2332);
   hden0_clone1->SetTotalEvents(43,2558);
   hden0_clone1->SetPassedEvents(43,2306);
   hden0_clone1->SetTotalEvents(44,2560);
   hden0_clone1->SetPassedEvents(44,2315);
   hden0_clone1->SetTotalEvents(45,2404);
   hden0_clone1->SetPassedEvents(45,2185);
   hden0_clone1->SetTotalEvents(46,2502);
   hden0_clone1->SetPassedEvents(46,2286);
   hden0_clone1->SetTotalEvents(47,2510);
   hden0_clone1->SetPassedEvents(47,2261);
   hden0_clone1->SetTotalEvents(48,2526);
   hden0_clone1->SetPassedEvents(48,2276);
   hden0_clone1->SetTotalEvents(49,2604);
   hden0_clone1->SetPassedEvents(49,2365);
   hden0_clone1->SetTotalEvents(50,2550);
   hden0_clone1->SetPassedEvents(50,2320);
   hden0_clone1->SetTotalEvents(51,26);
   hden0_clone1->SetPassedEvents(51,25);
   hden0_clone1->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1->SetLineColor(ci);
   hden0_clone1->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone1->SetMarkerColor(ci);
   hden0_clone1->SetMarkerStyle(26);
   hden0_clone1->Draw("samezp");
   
   TLegend *leg = new TLegend(0.42,0.2,0.88,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GE11-ME11","h");
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
