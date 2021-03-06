void GEMCSC_dxy10_50_combined_eff_20170131_pt10_fraction96_st2eta20to21_npar0()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Nov 26 19:47:21 2017) by ROOT version6.08/06
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
   Double_t xAxis17[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__33 = new TH1F("b1__33"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis17);
   b1__33->SetMinimum(0);
   b1__33->SetMaximum(1.05);
   b1__33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__33->SetLineColor(ci);
   b1__33->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__33->GetXaxis()->SetLabelFont(42);
   b1__33->GetXaxis()->SetLabelSize(0.05);
   b1__33->GetXaxis()->SetTitleSize(0.05);
   b1__33->GetXaxis()->SetTitleFont(42);
   b1__33->GetYaxis()->SetTitle("Trigger efficiency");
   b1__33->GetYaxis()->SetNdivisions(520);
   b1__33->GetYaxis()->SetLabelFont(42);
   b1__33->GetYaxis()->SetLabelSize(0.05);
   b1__33->GetYaxis()->SetTitleSize(0.05);
   b1__33->GetYaxis()->SetTitleOffset(1.1);
   b1__33->GetYaxis()->SetTitleFont(42);
   b1__33->GetZaxis()->SetLabelFont(42);
   b1__33->GetZaxis()->SetLabelSize(0.035);
   b1__33->GetZaxis()->SetTitleSize(0.035);
   b1__33->GetZaxis()->SetTitleFont(42);
   b1__33->Draw("");
   Double_t xAxis49[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone97 = new TEfficiency("hden0_clone","",21,xAxis49);
   
   hden0_clone97->SetConfidenceLevel(0.6826895);
   hden0_clone97->SetBetaAlpha(1);
   hden0_clone97->SetBetaBeta(1);
   hden0_clone97->SetWeight(1);
   hden0_clone97->SetStatisticOption(0);
   hden0_clone97->SetPosteriorMode(0);
   hden0_clone97->SetShortestInterval(0);
   hden0_clone97->SetTotalEvents(0,0);
   hden0_clone97->SetPassedEvents(0,0);
   hden0_clone97->SetTotalEvents(1,0);
   hden0_clone97->SetPassedEvents(1,0);
   hden0_clone97->SetTotalEvents(2,1);
   hden0_clone97->SetPassedEvents(2,0);
   hden0_clone97->SetTotalEvents(3,15);
   hden0_clone97->SetPassedEvents(3,0);
   hden0_clone97->SetTotalEvents(4,23);
   hden0_clone97->SetPassedEvents(4,2);
   hden0_clone97->SetTotalEvents(5,34);
   hden0_clone97->SetPassedEvents(5,4);
   hden0_clone97->SetTotalEvents(6,32);
   hden0_clone97->SetPassedEvents(6,12);
   hden0_clone97->SetTotalEvents(7,35);
   hden0_clone97->SetPassedEvents(7,25);
   hden0_clone97->SetTotalEvents(8,51);
   hden0_clone97->SetPassedEvents(8,34);
   hden0_clone97->SetTotalEvents(9,53);
   hden0_clone97->SetPassedEvents(9,39);
   hden0_clone97->SetTotalEvents(10,45);
   hden0_clone97->SetPassedEvents(10,40);
   hden0_clone97->SetTotalEvents(11,93);
   hden0_clone97->SetPassedEvents(11,84);
   hden0_clone97->SetTotalEvents(12,100);
   hden0_clone97->SetPassedEvents(12,96);
   hden0_clone97->SetTotalEvents(13,69);
   hden0_clone97->SetPassedEvents(13,63);
   hden0_clone97->SetTotalEvents(14,58);
   hden0_clone97->SetPassedEvents(14,55);
   hden0_clone97->SetTotalEvents(15,73);
   hden0_clone97->SetPassedEvents(15,71);
   hden0_clone97->SetTotalEvents(16,89);
   hden0_clone97->SetPassedEvents(16,86);
   hden0_clone97->SetTotalEvents(17,54);
   hden0_clone97->SetPassedEvents(17,52);
   hden0_clone97->SetTotalEvents(18,49);
   hden0_clone97->SetPassedEvents(18,49);
   hden0_clone97->SetTotalEvents(19,24);
   hden0_clone97->SetPassedEvents(19,24);
   hden0_clone97->SetTotalEvents(20,19);
   hden0_clone97->SetPassedEvents(20,19);
   hden0_clone97->SetTotalEvents(21,13);
   hden0_clone97->SetPassedEvents(21,13);
   hden0_clone97->SetTotalEvents(22,11);
   hden0_clone97->SetPassedEvents(22,11);
   hden0_clone97->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone97->SetLineColor(ci);
   hden0_clone97->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone97->SetMarkerColor(ci);
   hden0_clone97->SetMarkerStyle(24);
   hden0_clone97->Draw("samezp");
   Double_t xAxis50[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone98 = new TEfficiency("hden1_clone","",21,xAxis50);
   
   hden1_clone98->SetConfidenceLevel(0.6826895);
   hden1_clone98->SetBetaAlpha(1);
   hden1_clone98->SetBetaBeta(1);
   hden1_clone98->SetWeight(1);
   hden1_clone98->SetStatisticOption(0);
   hden1_clone98->SetPosteriorMode(0);
   hden1_clone98->SetShortestInterval(0);
   hden1_clone98->SetTotalEvents(0,0);
   hden1_clone98->SetPassedEvents(0,0);
   hden1_clone98->SetTotalEvents(1,0);
   hden1_clone98->SetPassedEvents(1,0);
   hden1_clone98->SetTotalEvents(2,1);
   hden1_clone98->SetPassedEvents(2,0);
   hden1_clone98->SetTotalEvents(3,15);
   hden1_clone98->SetPassedEvents(3,0);
   hden1_clone98->SetTotalEvents(4,23);
   hden1_clone98->SetPassedEvents(4,5);
   hden1_clone98->SetTotalEvents(5,34);
   hden1_clone98->SetPassedEvents(5,4);
   hden1_clone98->SetTotalEvents(6,32);
   hden1_clone98->SetPassedEvents(6,14);
   hden1_clone98->SetTotalEvents(7,35);
   hden1_clone98->SetPassedEvents(7,23);
   hden1_clone98->SetTotalEvents(8,51);
   hden1_clone98->SetPassedEvents(8,35);
   hden1_clone98->SetTotalEvents(9,53);
   hden1_clone98->SetPassedEvents(9,42);
   hden1_clone98->SetTotalEvents(10,45);
   hden1_clone98->SetPassedEvents(10,40);
   hden1_clone98->SetTotalEvents(11,93);
   hden1_clone98->SetPassedEvents(11,85);
   hden1_clone98->SetTotalEvents(12,100);
   hden1_clone98->SetPassedEvents(12,96);
   hden1_clone98->SetTotalEvents(13,69);
   hden1_clone98->SetPassedEvents(13,64);
   hden1_clone98->SetTotalEvents(14,58);
   hden1_clone98->SetPassedEvents(14,55);
   hden1_clone98->SetTotalEvents(15,73);
   hden1_clone98->SetPassedEvents(15,71);
   hden1_clone98->SetTotalEvents(16,89);
   hden1_clone98->SetPassedEvents(16,86);
   hden1_clone98->SetTotalEvents(17,54);
   hden1_clone98->SetPassedEvents(17,52);
   hden1_clone98->SetTotalEvents(18,49);
   hden1_clone98->SetPassedEvents(18,49);
   hden1_clone98->SetTotalEvents(19,24);
   hden1_clone98->SetPassedEvents(19,24);
   hden1_clone98->SetTotalEvents(20,19);
   hden1_clone98->SetPassedEvents(20,19);
   hden1_clone98->SetTotalEvents(21,13);
   hden1_clone98->SetPassedEvents(21,13);
   hden1_clone98->SetTotalEvents(22,11);
   hden1_clone98->SetPassedEvents(22,11);
   hden1_clone98->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone98->SetLineColor(ci);
   hden1_clone98->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone98->SetMarkerColor(ci);
   hden1_clone98->SetMarkerStyle(21);
   hden1_clone98->Draw("samezp");
   Double_t xAxis51[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone99 = new TEfficiency("hden2_clone","",21,xAxis51);
   
   hden2_clone99->SetConfidenceLevel(0.6826895);
   hden2_clone99->SetBetaAlpha(1);
   hden2_clone99->SetBetaBeta(1);
   hden2_clone99->SetWeight(1);
   hden2_clone99->SetStatisticOption(0);
   hden2_clone99->SetPosteriorMode(0);
   hden2_clone99->SetShortestInterval(0);
   hden2_clone99->SetTotalEvents(0,0);
   hden2_clone99->SetPassedEvents(0,0);
   hden2_clone99->SetTotalEvents(1,0);
   hden2_clone99->SetPassedEvents(1,0);
   hden2_clone99->SetTotalEvents(2,1);
   hden2_clone99->SetPassedEvents(2,0);
   hden2_clone99->SetTotalEvents(3,15);
   hden2_clone99->SetPassedEvents(3,0);
   hden2_clone99->SetTotalEvents(4,23);
   hden2_clone99->SetPassedEvents(4,3);
   hden2_clone99->SetTotalEvents(5,34);
   hden2_clone99->SetPassedEvents(5,7);
   hden2_clone99->SetTotalEvents(6,32);
   hden2_clone99->SetPassedEvents(6,10);
   hden2_clone99->SetTotalEvents(7,35);
   hden2_clone99->SetPassedEvents(7,23);
   hden2_clone99->SetTotalEvents(8,51);
   hden2_clone99->SetPassedEvents(8,37);
   hden2_clone99->SetTotalEvents(9,53);
   hden2_clone99->SetPassedEvents(9,43);
   hden2_clone99->SetTotalEvents(10,45);
   hden2_clone99->SetPassedEvents(10,38);
   hden2_clone99->SetTotalEvents(11,93);
   hden2_clone99->SetPassedEvents(11,86);
   hden2_clone99->SetTotalEvents(12,100);
   hden2_clone99->SetPassedEvents(12,95);
   hden2_clone99->SetTotalEvents(13,69);
   hden2_clone99->SetPassedEvents(13,63);
   hden2_clone99->SetTotalEvents(14,58);
   hden2_clone99->SetPassedEvents(14,52);
   hden2_clone99->SetTotalEvents(15,73);
   hden2_clone99->SetPassedEvents(15,70);
   hden2_clone99->SetTotalEvents(16,89);
   hden2_clone99->SetPassedEvents(16,86);
   hden2_clone99->SetTotalEvents(17,54);
   hden2_clone99->SetPassedEvents(17,52);
   hden2_clone99->SetTotalEvents(18,49);
   hden2_clone99->SetPassedEvents(18,48);
   hden2_clone99->SetTotalEvents(19,24);
   hden2_clone99->SetPassedEvents(19,24);
   hden2_clone99->SetTotalEvents(20,19);
   hden2_clone99->SetPassedEvents(20,19);
   hden2_clone99->SetTotalEvents(21,13);
   hden2_clone99->SetPassedEvents(21,13);
   hden2_clone99->SetTotalEvents(22,11);
   hden2_clone99->SetPassedEvents(22,11);
   hden2_clone99->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone99->SetLineColor(ci);
   hden2_clone99->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone99->SetMarkerColor(ci);
   hden2_clone99->SetMarkerStyle(25);
   hden2_clone99->Draw("samezp");
   
   TLegend *leg = new TLegend(0.45,0.2,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","no track veto","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","Position-based algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","Hybrid algorithm w/o GE21","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden2_clone","Hybrid algorithm w GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 odd,ME21 even,ME31 even}{2.0<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
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
