void GEMCSC_St1_GE11cut_eff_20170208_pt11_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:32:40 2017) by ROOT version6.08/06
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
   Double_t xAxis315[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__302 = new TH1F("b1__302"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis315);
   b1__302->SetMinimum(0);
   b1__302->SetMaximum(1.05);
   b1__302->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__302->SetLineColor(ci);
   b1__302->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__302->GetXaxis()->SetLabelFont(42);
   b1__302->GetXaxis()->SetLabelSize(0.05);
   b1__302->GetXaxis()->SetTitleSize(0.05);
   b1__302->GetXaxis()->SetTitleFont(42);
   b1__302->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__302->GetYaxis()->SetNdivisions(520);
   b1__302->GetYaxis()->SetLabelFont(42);
   b1__302->GetYaxis()->SetLabelSize(0.05);
   b1__302->GetYaxis()->SetTitleSize(0.05);
   b1__302->GetYaxis()->SetTitleOffset(1.1);
   b1__302->GetYaxis()->SetTitleFont(42);
   b1__302->GetZaxis()->SetLabelFont(42);
   b1__302->GetZaxis()->SetLabelSize(0.035);
   b1__302->GetZaxis()->SetTitleSize(0.035);
   b1__302->GetZaxis()->SetTitleFont(42);
   b1__302->Draw("");
   Double_t xAxis562[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone562 = new TEfficiency("hden0_clone","",50,xAxis562);
   
   hden0_clone562->SetConfidenceLevel(0.6826895);
   hden0_clone562->SetBetaAlpha(1);
   hden0_clone562->SetBetaBeta(1);
   hden0_clone562->SetWeight(1);
   hden0_clone562->SetStatisticOption(0);
   hden0_clone562->SetPosteriorMode(0);
   hden0_clone562->SetShortestInterval(0);
   hden0_clone562->SetTotalEvents(0,0);
   hden0_clone562->SetPassedEvents(0,0);
   hden0_clone562->SetTotalEvents(1,0);
   hden0_clone562->SetPassedEvents(1,0);
   hden0_clone562->SetTotalEvents(2,1308);
   hden0_clone562->SetPassedEvents(2,0);
   hden0_clone562->SetTotalEvents(3,2390);
   hden0_clone562->SetPassedEvents(3,7);
   hden0_clone562->SetTotalEvents(4,2390);
   hden0_clone562->SetPassedEvents(4,18);
   hden0_clone562->SetTotalEvents(5,2546);
   hden0_clone562->SetPassedEvents(5,27);
   hden0_clone562->SetTotalEvents(6,2518);
   hden0_clone562->SetPassedEvents(6,47);
   hden0_clone562->SetTotalEvents(7,2458);
   hden0_clone562->SetPassedEvents(7,180);
   hden0_clone562->SetTotalEvents(8,2466);
   hden0_clone562->SetPassedEvents(8,476);
   hden0_clone562->SetTotalEvents(9,2452);
   hden0_clone562->SetPassedEvents(9,931);
   hden0_clone562->SetTotalEvents(10,2502);
   hden0_clone562->SetPassedEvents(10,1468);
   hden0_clone562->SetTotalEvents(11,2564);
   hden0_clone562->SetPassedEvents(11,1878);
   hden0_clone562->SetTotalEvents(12,2464);
   hden0_clone562->SetPassedEvents(12,2017);
   hden0_clone562->SetTotalEvents(13,2492);
   hden0_clone562->SetPassedEvents(13,2168);
   hden0_clone562->SetTotalEvents(14,2502);
   hden0_clone562->SetPassedEvents(14,2208);
   hden0_clone562->SetTotalEvents(15,2452);
   hden0_clone562->SetPassedEvents(15,2165);
   hden0_clone562->SetTotalEvents(16,2580);
   hden0_clone562->SetPassedEvents(16,2324);
   hden0_clone562->SetTotalEvents(17,2426);
   hden0_clone562->SetPassedEvents(17,2184);
   hden0_clone562->SetTotalEvents(18,2490);
   hden0_clone562->SetPassedEvents(18,2247);
   hden0_clone562->SetTotalEvents(19,2510);
   hden0_clone562->SetPassedEvents(19,2286);
   hden0_clone562->SetTotalEvents(20,2456);
   hden0_clone562->SetPassedEvents(20,2223);
   hden0_clone562->SetTotalEvents(21,2470);
   hden0_clone562->SetPassedEvents(21,2262);
   hden0_clone562->SetTotalEvents(22,2420);
   hden0_clone562->SetPassedEvents(22,2195);
   hden0_clone562->SetTotalEvents(23,2420);
   hden0_clone562->SetPassedEvents(23,2213);
   hden0_clone562->SetTotalEvents(24,2564);
   hden0_clone562->SetPassedEvents(24,2371);
   hden0_clone562->SetTotalEvents(25,2544);
   hden0_clone562->SetPassedEvents(25,2323);
   hden0_clone562->SetTotalEvents(26,2398);
   hden0_clone562->SetPassedEvents(26,2182);
   hden0_clone562->SetTotalEvents(27,2598);
   hden0_clone562->SetPassedEvents(27,2426);
   hden0_clone562->SetTotalEvents(28,2528);
   hden0_clone562->SetPassedEvents(28,2321);
   hden0_clone562->SetTotalEvents(29,2510);
   hden0_clone562->SetPassedEvents(29,2317);
   hden0_clone562->SetTotalEvents(30,2464);
   hden0_clone562->SetPassedEvents(30,2256);
   hden0_clone562->SetTotalEvents(31,2524);
   hden0_clone562->SetPassedEvents(31,2336);
   hden0_clone562->SetTotalEvents(32,2464);
   hden0_clone562->SetPassedEvents(32,2273);
   hden0_clone562->SetTotalEvents(33,2614);
   hden0_clone562->SetPassedEvents(33,2410);
   hden0_clone562->SetTotalEvents(34,2466);
   hden0_clone562->SetPassedEvents(34,2283);
   hden0_clone562->SetTotalEvents(35,2424);
   hden0_clone562->SetPassedEvents(35,2232);
   hden0_clone562->SetTotalEvents(36,2528);
   hden0_clone562->SetPassedEvents(36,2321);
   hden0_clone562->SetTotalEvents(37,2700);
   hden0_clone562->SetPassedEvents(37,2467);
   hden0_clone562->SetTotalEvents(38,2532);
   hden0_clone562->SetPassedEvents(38,2335);
   hden0_clone562->SetTotalEvents(39,2566);
   hden0_clone562->SetPassedEvents(39,2367);
   hden0_clone562->SetTotalEvents(40,2484);
   hden0_clone562->SetPassedEvents(40,2309);
   hden0_clone562->SetTotalEvents(41,2624);
   hden0_clone562->SetPassedEvents(41,2424);
   hden0_clone562->SetTotalEvents(42,2560);
   hden0_clone562->SetPassedEvents(42,2365);
   hden0_clone562->SetTotalEvents(43,2558);
   hden0_clone562->SetPassedEvents(43,2348);
   hden0_clone562->SetTotalEvents(44,2560);
   hden0_clone562->SetPassedEvents(44,2351);
   hden0_clone562->SetTotalEvents(45,2404);
   hden0_clone562->SetPassedEvents(45,2231);
   hden0_clone562->SetTotalEvents(46,2502);
   hden0_clone562->SetPassedEvents(46,2315);
   hden0_clone562->SetTotalEvents(47,2510);
   hden0_clone562->SetPassedEvents(47,2299);
   hden0_clone562->SetTotalEvents(48,2526);
   hden0_clone562->SetPassedEvents(48,2310);
   hden0_clone562->SetTotalEvents(49,2604);
   hden0_clone562->SetPassedEvents(49,2408);
   hden0_clone562->SetTotalEvents(50,2550);
   hden0_clone562->SetPassedEvents(50,2361);
   hden0_clone562->SetTotalEvents(51,26);
   hden0_clone562->SetPassedEvents(51,25);
   hden0_clone562->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone562->SetLineColor(ci);
   hden0_clone562->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone562->SetMarkerColor(ci);
   hden0_clone562->SetMarkerStyle(26);
   hden0_clone562->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.44,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>11 GeV");
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
