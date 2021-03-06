void GEMCSC_dxy10_50_mediumveto_combined_effvspt_20170131_pt10_fraction96_st2eta18to20_npar0()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:41:25 2017) by ROOT version6.08/06
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
   Double_t xAxis10[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__26 = new TH1F("b1__26"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis10);
   b1__26->SetMinimum(0);
   b1__26->SetMaximum(1.05);
   b1__26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__26->SetLineColor(ci);
   b1__26->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__26->GetXaxis()->SetLabelFont(42);
   b1__26->GetXaxis()->SetLabelSize(0.05);
   b1__26->GetXaxis()->SetTitleSize(0.05);
   b1__26->GetXaxis()->SetTitleFont(42);
   b1__26->GetYaxis()->SetTitle("Trigger efficiency");
   b1__26->GetYaxis()->SetNdivisions(520);
   b1__26->GetYaxis()->SetLabelFont(42);
   b1__26->GetYaxis()->SetLabelSize(0.05);
   b1__26->GetYaxis()->SetTitleSize(0.05);
   b1__26->GetYaxis()->SetTitleOffset(1.1);
   b1__26->GetYaxis()->SetTitleFont(42);
   b1__26->GetZaxis()->SetLabelFont(42);
   b1__26->GetZaxis()->SetLabelSize(0.035);
   b1__26->GetZaxis()->SetTitleSize(0.035);
   b1__26->GetZaxis()->SetTitleFont(42);
   b1__26->Draw("");
   Double_t xAxis28[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone76 = new TEfficiency("hden0_clone","",21,xAxis28);
   
   hden0_clone76->SetConfidenceLevel(0.6826895);
   hden0_clone76->SetBetaAlpha(1);
   hden0_clone76->SetBetaBeta(1);
   hden0_clone76->SetWeight(1);
   hden0_clone76->SetStatisticOption(0);
   hden0_clone76->SetPosteriorMode(0);
   hden0_clone76->SetShortestInterval(0);
   hden0_clone76->SetTotalEvents(0,0);
   hden0_clone76->SetPassedEvents(0,0);
   hden0_clone76->SetTotalEvents(1,0);
   hden0_clone76->SetPassedEvents(1,0);
   hden0_clone76->SetTotalEvents(2,1);
   hden0_clone76->SetPassedEvents(2,0);
   hden0_clone76->SetTotalEvents(3,11);
   hden0_clone76->SetPassedEvents(3,0);
   hden0_clone76->SetTotalEvents(4,18);
   hden0_clone76->SetPassedEvents(4,0);
   hden0_clone76->SetTotalEvents(5,19);
   hden0_clone76->SetPassedEvents(5,0);
   hden0_clone76->SetTotalEvents(6,15);
   hden0_clone76->SetPassedEvents(6,3);
   hden0_clone76->SetTotalEvents(7,23);
   hden0_clone76->SetPassedEvents(7,6);
   hden0_clone76->SetTotalEvents(8,25);
   hden0_clone76->SetPassedEvents(8,6);
   hden0_clone76->SetTotalEvents(9,27);
   hden0_clone76->SetPassedEvents(9,8);
   hden0_clone76->SetTotalEvents(10,29);
   hden0_clone76->SetPassedEvents(10,7);
   hden0_clone76->SetTotalEvents(11,50);
   hden0_clone76->SetPassedEvents(11,18);
   hden0_clone76->SetTotalEvents(12,37);
   hden0_clone76->SetPassedEvents(12,10);
   hden0_clone76->SetTotalEvents(13,41);
   hden0_clone76->SetPassedEvents(13,16);
   hden0_clone76->SetTotalEvents(14,29);
   hden0_clone76->SetPassedEvents(14,9);
   hden0_clone76->SetTotalEvents(15,22);
   hden0_clone76->SetPassedEvents(15,7);
   hden0_clone76->SetTotalEvents(16,37);
   hden0_clone76->SetPassedEvents(16,12);
   hden0_clone76->SetTotalEvents(17,24);
   hden0_clone76->SetPassedEvents(17,8);
   hden0_clone76->SetTotalEvents(18,23);
   hden0_clone76->SetPassedEvents(18,8);
   hden0_clone76->SetTotalEvents(19,12);
   hden0_clone76->SetPassedEvents(19,4);
   hden0_clone76->SetTotalEvents(20,8);
   hden0_clone76->SetPassedEvents(20,1);
   hden0_clone76->SetTotalEvents(21,5);
   hden0_clone76->SetPassedEvents(21,0);
   hden0_clone76->SetTotalEvents(22,2);
   hden0_clone76->SetPassedEvents(22,0);
   hden0_clone76->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone76->SetLineColor(ci);
   hden0_clone76->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone76->SetMarkerColor(ci);
   hden0_clone76->SetMarkerStyle(24);
   hden0_clone76->Draw("samezp");
   Double_t xAxis29[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone77 = new TEfficiency("hden1_clone","",21,xAxis29);
   
   hden1_clone77->SetConfidenceLevel(0.6826895);
   hden1_clone77->SetBetaAlpha(1);
   hden1_clone77->SetBetaBeta(1);
   hden1_clone77->SetWeight(1);
   hden1_clone77->SetStatisticOption(0);
   hden1_clone77->SetPosteriorMode(0);
   hden1_clone77->SetShortestInterval(0);
   hden1_clone77->SetTotalEvents(0,0);
   hden1_clone77->SetPassedEvents(0,0);
   hden1_clone77->SetTotalEvents(1,0);
   hden1_clone77->SetPassedEvents(1,0);
   hden1_clone77->SetTotalEvents(2,1);
   hden1_clone77->SetPassedEvents(2,0);
   hden1_clone77->SetTotalEvents(3,11);
   hden1_clone77->SetPassedEvents(3,0);
   hden1_clone77->SetTotalEvents(4,18);
   hden1_clone77->SetPassedEvents(4,0);
   hden1_clone77->SetTotalEvents(5,19);
   hden1_clone77->SetPassedEvents(5,0);
   hden1_clone77->SetTotalEvents(6,15);
   hden1_clone77->SetPassedEvents(6,4);
   hden1_clone77->SetTotalEvents(7,23);
   hden1_clone77->SetPassedEvents(7,6);
   hden1_clone77->SetTotalEvents(8,25);
   hden1_clone77->SetPassedEvents(8,6);
   hden1_clone77->SetTotalEvents(9,27);
   hden1_clone77->SetPassedEvents(9,8);
   hden1_clone77->SetTotalEvents(10,29);
   hden1_clone77->SetPassedEvents(10,7);
   hden1_clone77->SetTotalEvents(11,50);
   hden1_clone77->SetPassedEvents(11,18);
   hden1_clone77->SetTotalEvents(12,37);
   hden1_clone77->SetPassedEvents(12,10);
   hden1_clone77->SetTotalEvents(13,41);
   hden1_clone77->SetPassedEvents(13,16);
   hden1_clone77->SetTotalEvents(14,29);
   hden1_clone77->SetPassedEvents(14,10);
   hden1_clone77->SetTotalEvents(15,22);
   hden1_clone77->SetPassedEvents(15,7);
   hden1_clone77->SetTotalEvents(16,37);
   hden1_clone77->SetPassedEvents(16,12);
   hden1_clone77->SetTotalEvents(17,24);
   hden1_clone77->SetPassedEvents(17,8);
   hden1_clone77->SetTotalEvents(18,23);
   hden1_clone77->SetPassedEvents(18,8);
   hden1_clone77->SetTotalEvents(19,12);
   hden1_clone77->SetPassedEvents(19,4);
   hden1_clone77->SetTotalEvents(20,8);
   hden1_clone77->SetPassedEvents(20,1);
   hden1_clone77->SetTotalEvents(21,5);
   hden1_clone77->SetPassedEvents(21,0);
   hden1_clone77->SetTotalEvents(22,2);
   hden1_clone77->SetPassedEvents(22,0);
   hden1_clone77->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone77->SetLineColor(ci);
   hden1_clone77->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone77->SetMarkerColor(ci);
   hden1_clone77->SetMarkerStyle(21);
   hden1_clone77->Draw("samezp");
   Double_t xAxis30[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone78 = new TEfficiency("hden2_clone","",21,xAxis30);
   
   hden2_clone78->SetConfidenceLevel(0.6826895);
   hden2_clone78->SetBetaAlpha(1);
   hden2_clone78->SetBetaBeta(1);
   hden2_clone78->SetWeight(1);
   hden2_clone78->SetStatisticOption(0);
   hden2_clone78->SetPosteriorMode(0);
   hden2_clone78->SetShortestInterval(0);
   hden2_clone78->SetTotalEvents(0,0);
   hden2_clone78->SetPassedEvents(0,0);
   hden2_clone78->SetTotalEvents(1,0);
   hden2_clone78->SetPassedEvents(1,0);
   hden2_clone78->SetTotalEvents(2,1);
   hden2_clone78->SetPassedEvents(2,0);
   hden2_clone78->SetTotalEvents(3,11);
   hden2_clone78->SetPassedEvents(3,0);
   hden2_clone78->SetTotalEvents(4,18);
   hden2_clone78->SetPassedEvents(4,0);
   hden2_clone78->SetTotalEvents(5,19);
   hden2_clone78->SetPassedEvents(5,0);
   hden2_clone78->SetTotalEvents(6,15);
   hden2_clone78->SetPassedEvents(6,3);
   hden2_clone78->SetTotalEvents(7,23);
   hden2_clone78->SetPassedEvents(7,6);
   hden2_clone78->SetTotalEvents(8,25);
   hden2_clone78->SetPassedEvents(8,5);
   hden2_clone78->SetTotalEvents(9,27);
   hden2_clone78->SetPassedEvents(9,8);
   hden2_clone78->SetTotalEvents(10,29);
   hden2_clone78->SetPassedEvents(10,6);
   hden2_clone78->SetTotalEvents(11,50);
   hden2_clone78->SetPassedEvents(11,18);
   hden2_clone78->SetTotalEvents(12,37);
   hden2_clone78->SetPassedEvents(12,10);
   hden2_clone78->SetTotalEvents(13,41);
   hden2_clone78->SetPassedEvents(13,14);
   hden2_clone78->SetTotalEvents(14,29);
   hden2_clone78->SetPassedEvents(14,10);
   hden2_clone78->SetTotalEvents(15,22);
   hden2_clone78->SetPassedEvents(15,7);
   hden2_clone78->SetTotalEvents(16,37);
   hden2_clone78->SetPassedEvents(16,10);
   hden2_clone78->SetTotalEvents(17,24);
   hden2_clone78->SetPassedEvents(17,8);
   hden2_clone78->SetTotalEvents(18,23);
   hden2_clone78->SetPassedEvents(18,8);
   hden2_clone78->SetTotalEvents(19,12);
   hden2_clone78->SetPassedEvents(19,3);
   hden2_clone78->SetTotalEvents(20,8);
   hden2_clone78->SetPassedEvents(20,1);
   hden2_clone78->SetTotalEvents(21,5);
   hden2_clone78->SetPassedEvents(21,0);
   hden2_clone78->SetTotalEvents(22,2);
   hden2_clone78->SetPassedEvents(22,0);
   hden2_clone78->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone78->SetLineColor(ci);
   hden2_clone78->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone78->SetMarkerColor(ci);
   hden2_clone78->SetMarkerStyle(25);
   hden2_clone78->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 odd,ME21 even,ME31 even}{1.8<|#eta|<2.00, p_{T}^{L1}>10 GeV}");
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
