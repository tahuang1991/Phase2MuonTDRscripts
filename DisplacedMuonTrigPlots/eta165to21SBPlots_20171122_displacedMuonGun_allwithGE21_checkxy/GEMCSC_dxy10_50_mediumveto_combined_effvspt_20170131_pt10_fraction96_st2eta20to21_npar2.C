void GEMCSC_dxy10_50_mediumveto_combined_effvspt_20170131_pt10_fraction96_st2eta20to21_npar2()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:07:40 2017) by ROOT version6.08/06
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
   Double_t xAxis22[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__62 = new TH1F("b1__62"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis22);
   b1__62->SetMinimum(0);
   b1__62->SetMaximum(1.05);
   b1__62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__62->SetLineColor(ci);
   b1__62->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__62->GetXaxis()->SetLabelFont(42);
   b1__62->GetXaxis()->SetLabelSize(0.05);
   b1__62->GetXaxis()->SetTitleSize(0.05);
   b1__62->GetXaxis()->SetTitleFont(42);
   b1__62->GetYaxis()->SetTitle("Trigger efficiency");
   b1__62->GetYaxis()->SetNdivisions(520);
   b1__62->GetYaxis()->SetLabelFont(42);
   b1__62->GetYaxis()->SetLabelSize(0.05);
   b1__62->GetYaxis()->SetTitleSize(0.05);
   b1__62->GetYaxis()->SetTitleOffset(1.1);
   b1__62->GetYaxis()->SetTitleFont(42);
   b1__62->GetZaxis()->SetLabelFont(42);
   b1__62->GetZaxis()->SetLabelSize(0.035);
   b1__62->GetZaxis()->SetTitleSize(0.035);
   b1__62->GetZaxis()->SetTitleFont(42);
   b1__62->Draw("");
   Double_t xAxis64[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone184 = new TEfficiency("hden0_clone","",21,xAxis64);
   
   hden0_clone184->SetConfidenceLevel(0.6826895);
   hden0_clone184->SetBetaAlpha(1);
   hden0_clone184->SetBetaBeta(1);
   hden0_clone184->SetWeight(1);
   hden0_clone184->SetStatisticOption(0);
   hden0_clone184->SetPosteriorMode(0);
   hden0_clone184->SetShortestInterval(0);
   hden0_clone184->SetTotalEvents(0,0);
   hden0_clone184->SetPassedEvents(0,0);
   hden0_clone184->SetTotalEvents(1,0);
   hden0_clone184->SetPassedEvents(1,0);
   hden0_clone184->SetTotalEvents(2,0);
   hden0_clone184->SetPassedEvents(2,0);
   hden0_clone184->SetTotalEvents(3,36);
   hden0_clone184->SetPassedEvents(3,0);
   hden0_clone184->SetTotalEvents(4,34);
   hden0_clone184->SetPassedEvents(4,1);
   hden0_clone184->SetTotalEvents(5,47);
   hden0_clone184->SetPassedEvents(5,11);
   hden0_clone184->SetTotalEvents(6,47);
   hden0_clone184->SetPassedEvents(6,16);
   hden0_clone184->SetTotalEvents(7,25);
   hden0_clone184->SetPassedEvents(7,13);
   hden0_clone184->SetTotalEvents(8,29);
   hden0_clone184->SetPassedEvents(8,16);
   hden0_clone184->SetTotalEvents(9,36);
   hden0_clone184->SetPassedEvents(9,23);
   hden0_clone184->SetTotalEvents(10,24);
   hden0_clone184->SetPassedEvents(10,18);
   hden0_clone184->SetTotalEvents(11,53);
   hden0_clone184->SetPassedEvents(11,43);
   hden0_clone184->SetTotalEvents(12,69);
   hden0_clone184->SetPassedEvents(12,51);
   hden0_clone184->SetTotalEvents(13,66);
   hden0_clone184->SetPassedEvents(13,53);
   hden0_clone184->SetTotalEvents(14,57);
   hden0_clone184->SetPassedEvents(14,47);
   hden0_clone184->SetTotalEvents(15,57);
   hden0_clone184->SetPassedEvents(15,51);
   hden0_clone184->SetTotalEvents(16,154);
   hden0_clone184->SetPassedEvents(16,132);
   hden0_clone184->SetTotalEvents(17,136);
   hden0_clone184->SetPassedEvents(17,118);
   hden0_clone184->SetTotalEvents(18,118);
   hden0_clone184->SetPassedEvents(18,107);
   hden0_clone184->SetTotalEvents(19,120);
   hden0_clone184->SetPassedEvents(19,106);
   hden0_clone184->SetTotalEvents(20,162);
   hden0_clone184->SetPassedEvents(20,141);
   hden0_clone184->SetTotalEvents(21,239);
   hden0_clone184->SetPassedEvents(21,203);
   hden0_clone184->SetTotalEvents(22,0);
   hden0_clone184->SetPassedEvents(22,0);
   hden0_clone184->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone184->SetLineColor(ci);
   hden0_clone184->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone184->SetMarkerColor(ci);
   hden0_clone184->SetMarkerStyle(24);
   hden0_clone184->Draw("samezp");
   Double_t xAxis65[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone185 = new TEfficiency("hden1_clone","",21,xAxis65);
   
   hden1_clone185->SetConfidenceLevel(0.6826895);
   hden1_clone185->SetBetaAlpha(1);
   hden1_clone185->SetBetaBeta(1);
   hden1_clone185->SetWeight(1);
   hden1_clone185->SetStatisticOption(0);
   hden1_clone185->SetPosteriorMode(0);
   hden1_clone185->SetShortestInterval(0);
   hden1_clone185->SetTotalEvents(0,0);
   hden1_clone185->SetPassedEvents(0,0);
   hden1_clone185->SetTotalEvents(1,0);
   hden1_clone185->SetPassedEvents(1,0);
   hden1_clone185->SetTotalEvents(2,0);
   hden1_clone185->SetPassedEvents(2,0);
   hden1_clone185->SetTotalEvents(3,36);
   hden1_clone185->SetPassedEvents(3,0);
   hden1_clone185->SetTotalEvents(4,34);
   hden1_clone185->SetPassedEvents(4,1);
   hden1_clone185->SetTotalEvents(5,47);
   hden1_clone185->SetPassedEvents(5,13);
   hden1_clone185->SetTotalEvents(6,47);
   hden1_clone185->SetPassedEvents(6,17);
   hden1_clone185->SetTotalEvents(7,25);
   hden1_clone185->SetPassedEvents(7,13);
   hden1_clone185->SetTotalEvents(8,29);
   hden1_clone185->SetPassedEvents(8,16);
   hden1_clone185->SetTotalEvents(9,36);
   hden1_clone185->SetPassedEvents(9,23);
   hden1_clone185->SetTotalEvents(10,24);
   hden1_clone185->SetPassedEvents(10,19);
   hden1_clone185->SetTotalEvents(11,53);
   hden1_clone185->SetPassedEvents(11,42);
   hden1_clone185->SetTotalEvents(12,69);
   hden1_clone185->SetPassedEvents(12,50);
   hden1_clone185->SetTotalEvents(13,66);
   hden1_clone185->SetPassedEvents(13,53);
   hden1_clone185->SetTotalEvents(14,57);
   hden1_clone185->SetPassedEvents(14,47);
   hden1_clone185->SetTotalEvents(15,57);
   hden1_clone185->SetPassedEvents(15,50);
   hden1_clone185->SetTotalEvents(16,154);
   hden1_clone185->SetPassedEvents(16,130);
   hden1_clone185->SetTotalEvents(17,136);
   hden1_clone185->SetPassedEvents(17,116);
   hden1_clone185->SetTotalEvents(18,118);
   hden1_clone185->SetPassedEvents(18,106);
   hden1_clone185->SetTotalEvents(19,120);
   hden1_clone185->SetPassedEvents(19,106);
   hden1_clone185->SetTotalEvents(20,162);
   hden1_clone185->SetPassedEvents(20,140);
   hden1_clone185->SetTotalEvents(21,239);
   hden1_clone185->SetPassedEvents(21,201);
   hden1_clone185->SetTotalEvents(22,0);
   hden1_clone185->SetPassedEvents(22,0);
   hden1_clone185->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone185->SetLineColor(ci);
   hden1_clone185->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone185->SetMarkerColor(ci);
   hden1_clone185->SetMarkerStyle(21);
   hden1_clone185->Draw("samezp");
   Double_t xAxis66[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone186 = new TEfficiency("hden2_clone","",21,xAxis66);
   
   hden2_clone186->SetConfidenceLevel(0.6826895);
   hden2_clone186->SetBetaAlpha(1);
   hden2_clone186->SetBetaBeta(1);
   hden2_clone186->SetWeight(1);
   hden2_clone186->SetStatisticOption(0);
   hden2_clone186->SetPosteriorMode(0);
   hden2_clone186->SetShortestInterval(0);
   hden2_clone186->SetTotalEvents(0,0);
   hden2_clone186->SetPassedEvents(0,0);
   hden2_clone186->SetTotalEvents(1,0);
   hden2_clone186->SetPassedEvents(1,0);
   hden2_clone186->SetTotalEvents(2,0);
   hden2_clone186->SetPassedEvents(2,0);
   hden2_clone186->SetTotalEvents(3,36);
   hden2_clone186->SetPassedEvents(3,0);
   hden2_clone186->SetTotalEvents(4,34);
   hden2_clone186->SetPassedEvents(4,2);
   hden2_clone186->SetTotalEvents(5,47);
   hden2_clone186->SetPassedEvents(5,9);
   hden2_clone186->SetTotalEvents(6,47);
   hden2_clone186->SetPassedEvents(6,15);
   hden2_clone186->SetTotalEvents(7,25);
   hden2_clone186->SetPassedEvents(7,12);
   hden2_clone186->SetTotalEvents(8,29);
   hden2_clone186->SetPassedEvents(8,16);
   hden2_clone186->SetTotalEvents(9,36);
   hden2_clone186->SetPassedEvents(9,21);
   hden2_clone186->SetTotalEvents(10,24);
   hden2_clone186->SetPassedEvents(10,18);
   hden2_clone186->SetTotalEvents(11,53);
   hden2_clone186->SetPassedEvents(11,40);
   hden2_clone186->SetTotalEvents(12,69);
   hden2_clone186->SetPassedEvents(12,47);
   hden2_clone186->SetTotalEvents(13,66);
   hden2_clone186->SetPassedEvents(13,50);
   hden2_clone186->SetTotalEvents(14,57);
   hden2_clone186->SetPassedEvents(14,36);
   hden2_clone186->SetTotalEvents(15,57);
   hden2_clone186->SetPassedEvents(15,47);
   hden2_clone186->SetTotalEvents(16,154);
   hden2_clone186->SetPassedEvents(16,126);
   hden2_clone186->SetTotalEvents(17,136);
   hden2_clone186->SetPassedEvents(17,105);
   hden2_clone186->SetTotalEvents(18,118);
   hden2_clone186->SetPassedEvents(18,94);
   hden2_clone186->SetTotalEvents(19,120);
   hden2_clone186->SetPassedEvents(19,93);
   hden2_clone186->SetTotalEvents(20,162);
   hden2_clone186->SetPassedEvents(20,131);
   hden2_clone186->SetTotalEvents(21,239);
   hden2_clone186->SetPassedEvents(21,187);
   hden2_clone186->SetTotalEvents(22,0);
   hden2_clone186->SetPassedEvents(22,0);
   hden2_clone186->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone186->SetLineColor(ci);
   hden2_clone186->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone186->SetMarkerColor(ci);
   hden2_clone186->SetMarkerStyle(25);
   hden2_clone186->Draw("samezp");
   
   TLegend *leg = new TLegend(0.45,0.2,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","medium track veto","h");
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 even,ME21 even,ME31 even}{2.0<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
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
