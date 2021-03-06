void GEMCSC_dxy10_50_combined_effvspt_20170131_pt10_fraction96_st2eta20to21_npar1()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:07:11 2017) by ROOT version6.08/06
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
   Double_t xAxis19[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__55 = new TH1F("b1__55"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis19);
   b1__55->SetMinimum(0);
   b1__55->SetMaximum(1.05);
   b1__55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__55->SetLineColor(ci);
   b1__55->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__55->GetXaxis()->SetLabelFont(42);
   b1__55->GetXaxis()->SetLabelSize(0.05);
   b1__55->GetXaxis()->SetTitleSize(0.05);
   b1__55->GetXaxis()->SetTitleFont(42);
   b1__55->GetYaxis()->SetTitle("Trigger efficiency");
   b1__55->GetYaxis()->SetNdivisions(520);
   b1__55->GetYaxis()->SetLabelFont(42);
   b1__55->GetYaxis()->SetLabelSize(0.05);
   b1__55->GetYaxis()->SetTitleSize(0.05);
   b1__55->GetYaxis()->SetTitleOffset(1.1);
   b1__55->GetYaxis()->SetTitleFont(42);
   b1__55->GetZaxis()->SetLabelFont(42);
   b1__55->GetZaxis()->SetLabelSize(0.035);
   b1__55->GetZaxis()->SetTitleSize(0.035);
   b1__55->GetZaxis()->SetTitleFont(42);
   b1__55->Draw("");
   Double_t xAxis55[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone163 = new TEfficiency("hden0_clone","",21,xAxis55);
   
   hden0_clone163->SetConfidenceLevel(0.6826895);
   hden0_clone163->SetBetaAlpha(1);
   hden0_clone163->SetBetaBeta(1);
   hden0_clone163->SetWeight(1);
   hden0_clone163->SetStatisticOption(0);
   hden0_clone163->SetPosteriorMode(0);
   hden0_clone163->SetShortestInterval(0);
   hden0_clone163->SetTotalEvents(0,0);
   hden0_clone163->SetPassedEvents(0,0);
   hden0_clone163->SetTotalEvents(1,0);
   hden0_clone163->SetPassedEvents(1,0);
   hden0_clone163->SetTotalEvents(2,0);
   hden0_clone163->SetPassedEvents(2,0);
   hden0_clone163->SetTotalEvents(3,23);
   hden0_clone163->SetPassedEvents(3,0);
   hden0_clone163->SetTotalEvents(4,38);
   hden0_clone163->SetPassedEvents(4,4);
   hden0_clone163->SetTotalEvents(5,31);
   hden0_clone163->SetPassedEvents(5,7);
   hden0_clone163->SetTotalEvents(6,43);
   hden0_clone163->SetPassedEvents(6,13);
   hden0_clone163->SetTotalEvents(7,38);
   hden0_clone163->SetPassedEvents(7,19);
   hden0_clone163->SetTotalEvents(8,28);
   hden0_clone163->SetPassedEvents(8,23);
   hden0_clone163->SetTotalEvents(9,41);
   hden0_clone163->SetPassedEvents(9,28);
   hden0_clone163->SetTotalEvents(10,33);
   hden0_clone163->SetPassedEvents(10,28);
   hden0_clone163->SetTotalEvents(11,55);
   hden0_clone163->SetPassedEvents(11,47);
   hden0_clone163->SetTotalEvents(12,56);
   hden0_clone163->SetPassedEvents(12,53);
   hden0_clone163->SetTotalEvents(13,71);
   hden0_clone163->SetPassedEvents(13,67);
   hden0_clone163->SetTotalEvents(14,63);
   hden0_clone163->SetPassedEvents(14,61);
   hden0_clone163->SetTotalEvents(15,66);
   hden0_clone163->SetPassedEvents(15,63);
   hden0_clone163->SetTotalEvents(16,141);
   hden0_clone163->SetPassedEvents(16,128);
   hden0_clone163->SetTotalEvents(17,145);
   hden0_clone163->SetPassedEvents(17,133);
   hden0_clone163->SetTotalEvents(18,137);
   hden0_clone163->SetPassedEvents(18,130);
   hden0_clone163->SetTotalEvents(19,132);
   hden0_clone163->SetPassedEvents(19,122);
   hden0_clone163->SetTotalEvents(20,198);
   hden0_clone163->SetPassedEvents(20,178);
   hden0_clone163->SetTotalEvents(21,294);
   hden0_clone163->SetPassedEvents(21,268);
   hden0_clone163->SetTotalEvents(22,0);
   hden0_clone163->SetPassedEvents(22,0);
   hden0_clone163->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone163->SetLineColor(ci);
   hden0_clone163->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone163->SetMarkerColor(ci);
   hden0_clone163->SetMarkerStyle(24);
   hden0_clone163->Draw("samezp");
   Double_t xAxis56[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone164 = new TEfficiency("hden1_clone","",21,xAxis56);
   
   hden1_clone164->SetConfidenceLevel(0.6826895);
   hden1_clone164->SetBetaAlpha(1);
   hden1_clone164->SetBetaBeta(1);
   hden1_clone164->SetWeight(1);
   hden1_clone164->SetStatisticOption(0);
   hden1_clone164->SetPosteriorMode(0);
   hden1_clone164->SetShortestInterval(0);
   hden1_clone164->SetTotalEvents(0,0);
   hden1_clone164->SetPassedEvents(0,0);
   hden1_clone164->SetTotalEvents(1,0);
   hden1_clone164->SetPassedEvents(1,0);
   hden1_clone164->SetTotalEvents(2,0);
   hden1_clone164->SetPassedEvents(2,0);
   hden1_clone164->SetTotalEvents(3,23);
   hden1_clone164->SetPassedEvents(3,0);
   hden1_clone164->SetTotalEvents(4,38);
   hden1_clone164->SetPassedEvents(4,4);
   hden1_clone164->SetTotalEvents(5,31);
   hden1_clone164->SetPassedEvents(5,8);
   hden1_clone164->SetTotalEvents(6,43);
   hden1_clone164->SetPassedEvents(6,16);
   hden1_clone164->SetTotalEvents(7,38);
   hden1_clone164->SetPassedEvents(7,23);
   hden1_clone164->SetTotalEvents(8,28);
   hden1_clone164->SetPassedEvents(8,21);
   hden1_clone164->SetTotalEvents(9,41);
   hden1_clone164->SetPassedEvents(9,33);
   hden1_clone164->SetTotalEvents(10,33);
   hden1_clone164->SetPassedEvents(10,28);
   hden1_clone164->SetTotalEvents(11,55);
   hden1_clone164->SetPassedEvents(11,50);
   hden1_clone164->SetTotalEvents(12,56);
   hden1_clone164->SetPassedEvents(12,52);
   hden1_clone164->SetTotalEvents(13,71);
   hden1_clone164->SetPassedEvents(13,66);
   hden1_clone164->SetTotalEvents(14,63);
   hden1_clone164->SetPassedEvents(14,59);
   hden1_clone164->SetTotalEvents(15,66);
   hden1_clone164->SetPassedEvents(15,61);
   hden1_clone164->SetTotalEvents(16,141);
   hden1_clone164->SetPassedEvents(16,127);
   hden1_clone164->SetTotalEvents(17,145);
   hden1_clone164->SetPassedEvents(17,128);
   hden1_clone164->SetTotalEvents(18,137);
   hden1_clone164->SetPassedEvents(18,125);
   hden1_clone164->SetTotalEvents(19,132);
   hden1_clone164->SetPassedEvents(19,116);
   hden1_clone164->SetTotalEvents(20,198);
   hden1_clone164->SetPassedEvents(20,171);
   hden1_clone164->SetTotalEvents(21,294);
   hden1_clone164->SetPassedEvents(21,263);
   hden1_clone164->SetTotalEvents(22,0);
   hden1_clone164->SetPassedEvents(22,0);
   hden1_clone164->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone164->SetLineColor(ci);
   hden1_clone164->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone164->SetMarkerColor(ci);
   hden1_clone164->SetMarkerStyle(21);
   hden1_clone164->Draw("samezp");
   Double_t xAxis57[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone165 = new TEfficiency("hden2_clone","",21,xAxis57);
   
   hden2_clone165->SetConfidenceLevel(0.6826895);
   hden2_clone165->SetBetaAlpha(1);
   hden2_clone165->SetBetaBeta(1);
   hden2_clone165->SetWeight(1);
   hden2_clone165->SetStatisticOption(0);
   hden2_clone165->SetPosteriorMode(0);
   hden2_clone165->SetShortestInterval(0);
   hden2_clone165->SetTotalEvents(0,0);
   hden2_clone165->SetPassedEvents(0,0);
   hden2_clone165->SetTotalEvents(1,0);
   hden2_clone165->SetPassedEvents(1,0);
   hden2_clone165->SetTotalEvents(2,0);
   hden2_clone165->SetPassedEvents(2,0);
   hden2_clone165->SetTotalEvents(3,23);
   hden2_clone165->SetPassedEvents(3,0);
   hden2_clone165->SetTotalEvents(4,38);
   hden2_clone165->SetPassedEvents(4,3);
   hden2_clone165->SetTotalEvents(5,31);
   hden2_clone165->SetPassedEvents(5,8);
   hden2_clone165->SetTotalEvents(6,43);
   hden2_clone165->SetPassedEvents(6,15);
   hden2_clone165->SetTotalEvents(7,38);
   hden2_clone165->SetPassedEvents(7,20);
   hden2_clone165->SetTotalEvents(8,28);
   hden2_clone165->SetPassedEvents(8,19);
   hden2_clone165->SetTotalEvents(9,41);
   hden2_clone165->SetPassedEvents(9,28);
   hden2_clone165->SetTotalEvents(10,33);
   hden2_clone165->SetPassedEvents(10,26);
   hden2_clone165->SetTotalEvents(11,55);
   hden2_clone165->SetPassedEvents(11,49);
   hden2_clone165->SetTotalEvents(12,56);
   hden2_clone165->SetPassedEvents(12,50);
   hden2_clone165->SetTotalEvents(13,71);
   hden2_clone165->SetPassedEvents(13,59);
   hden2_clone165->SetTotalEvents(14,63);
   hden2_clone165->SetPassedEvents(14,53);
   hden2_clone165->SetTotalEvents(15,66);
   hden2_clone165->SetPassedEvents(15,57);
   hden2_clone165->SetTotalEvents(16,141);
   hden2_clone165->SetPassedEvents(16,114);
   hden2_clone165->SetTotalEvents(17,145);
   hden2_clone165->SetPassedEvents(17,117);
   hden2_clone165->SetTotalEvents(18,137);
   hden2_clone165->SetPassedEvents(18,119);
   hden2_clone165->SetTotalEvents(19,132);
   hden2_clone165->SetPassedEvents(19,116);
   hden2_clone165->SetTotalEvents(20,198);
   hden2_clone165->SetPassedEvents(20,163);
   hden2_clone165->SetTotalEvents(21,294);
   hden2_clone165->SetPassedEvents(21,248);
   hden2_clone165->SetTotalEvents(22,0);
   hden2_clone165->SetPassedEvents(22,0);
   hden2_clone165->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone165->SetLineColor(ci);
   hden2_clone165->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone165->SetMarkerColor(ci);
   hden2_clone165->SetMarkerStyle(25);
   hden2_clone165->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 odd,ME21 odd,ME31 odd}{2.0<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
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
