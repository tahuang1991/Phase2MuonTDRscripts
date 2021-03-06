void GEMCSC_dxy10_50_mediumveto_combined_effvspt_20170131_pt10_fraction96_st2eta20to21_npar3()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:14:59 2017) by ROOT version6.08/06
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
   Double_t xAxis24[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__68 = new TH1F("b1__68"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis24);
   b1__68->SetMinimum(0);
   b1__68->SetMaximum(1.05);
   b1__68->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__68->SetLineColor(ci);
   b1__68->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__68->GetXaxis()->SetLabelFont(42);
   b1__68->GetXaxis()->SetLabelSize(0.05);
   b1__68->GetXaxis()->SetTitleSize(0.05);
   b1__68->GetXaxis()->SetTitleFont(42);
   b1__68->GetYaxis()->SetTitle("Trigger efficiency");
   b1__68->GetYaxis()->SetNdivisions(520);
   b1__68->GetYaxis()->SetLabelFont(42);
   b1__68->GetYaxis()->SetLabelSize(0.05);
   b1__68->GetYaxis()->SetTitleSize(0.05);
   b1__68->GetYaxis()->SetTitleOffset(1.1);
   b1__68->GetYaxis()->SetTitleFont(42);
   b1__68->GetZaxis()->SetLabelFont(42);
   b1__68->GetZaxis()->SetLabelSize(0.035);
   b1__68->GetZaxis()->SetTitleSize(0.035);
   b1__68->GetZaxis()->SetTitleFont(42);
   b1__68->Draw("");
   Double_t xAxis70[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone202 = new TEfficiency("hden0_clone","",21,xAxis70);
   
   hden0_clone202->SetConfidenceLevel(0.6826895);
   hden0_clone202->SetBetaAlpha(1);
   hden0_clone202->SetBetaBeta(1);
   hden0_clone202->SetWeight(1);
   hden0_clone202->SetStatisticOption(0);
   hden0_clone202->SetPosteriorMode(0);
   hden0_clone202->SetShortestInterval(0);
   hden0_clone202->SetTotalEvents(0,0);
   hden0_clone202->SetPassedEvents(0,0);
   hden0_clone202->SetTotalEvents(1,0);
   hden0_clone202->SetPassedEvents(1,0);
   hden0_clone202->SetTotalEvents(2,1);
   hden0_clone202->SetPassedEvents(2,0);
   hden0_clone202->SetTotalEvents(3,12);
   hden0_clone202->SetPassedEvents(3,0);
   hden0_clone202->SetTotalEvents(4,20);
   hden0_clone202->SetPassedEvents(4,0);
   hden0_clone202->SetTotalEvents(5,29);
   hden0_clone202->SetPassedEvents(5,1);
   hden0_clone202->SetTotalEvents(6,23);
   hden0_clone202->SetPassedEvents(6,1);
   hden0_clone202->SetTotalEvents(7,31);
   hden0_clone202->SetPassedEvents(7,0);
   hden0_clone202->SetTotalEvents(8,43);
   hden0_clone202->SetPassedEvents(8,1);
   hden0_clone202->SetTotalEvents(9,41);
   hden0_clone202->SetPassedEvents(9,1);
   hden0_clone202->SetTotalEvents(10,50);
   hden0_clone202->SetPassedEvents(10,4);
   hden0_clone202->SetTotalEvents(11,84);
   hden0_clone202->SetPassedEvents(11,5);
   hden0_clone202->SetTotalEvents(12,69);
   hden0_clone202->SetPassedEvents(12,3);
   hden0_clone202->SetTotalEvents(13,62);
   hden0_clone202->SetPassedEvents(13,5);
   hden0_clone202->SetTotalEvents(14,55);
   hden0_clone202->SetPassedEvents(14,3);
   hden0_clone202->SetTotalEvents(15,47);
   hden0_clone202->SetPassedEvents(15,1);
   hden0_clone202->SetTotalEvents(16,83);
   hden0_clone202->SetPassedEvents(16,4);
   hden0_clone202->SetTotalEvents(17,51);
   hden0_clone202->SetPassedEvents(17,2);
   hden0_clone202->SetTotalEvents(18,26);
   hden0_clone202->SetPassedEvents(18,1);
   hden0_clone202->SetTotalEvents(19,20);
   hden0_clone202->SetPassedEvents(19,2);
   hden0_clone202->SetTotalEvents(20,14);
   hden0_clone202->SetPassedEvents(20,0);
   hden0_clone202->SetTotalEvents(21,15);
   hden0_clone202->SetPassedEvents(21,0);
   hden0_clone202->SetTotalEvents(22,10);
   hden0_clone202->SetPassedEvents(22,0);
   hden0_clone202->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone202->SetLineColor(ci);
   hden0_clone202->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone202->SetMarkerColor(ci);
   hden0_clone202->SetMarkerStyle(24);
   hden0_clone202->Draw("samezp");
   Double_t xAxis71[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone203 = new TEfficiency("hden1_clone","",21,xAxis71);
   
   hden1_clone203->SetConfidenceLevel(0.6826895);
   hden1_clone203->SetBetaAlpha(1);
   hden1_clone203->SetBetaBeta(1);
   hden1_clone203->SetWeight(1);
   hden1_clone203->SetStatisticOption(0);
   hden1_clone203->SetPosteriorMode(0);
   hden1_clone203->SetShortestInterval(0);
   hden1_clone203->SetTotalEvents(0,0);
   hden1_clone203->SetPassedEvents(0,0);
   hden1_clone203->SetTotalEvents(1,0);
   hden1_clone203->SetPassedEvents(1,0);
   hden1_clone203->SetTotalEvents(2,1);
   hden1_clone203->SetPassedEvents(2,0);
   hden1_clone203->SetTotalEvents(3,12);
   hden1_clone203->SetPassedEvents(3,0);
   hden1_clone203->SetTotalEvents(4,20);
   hden1_clone203->SetPassedEvents(4,0);
   hden1_clone203->SetTotalEvents(5,29);
   hden1_clone203->SetPassedEvents(5,1);
   hden1_clone203->SetTotalEvents(6,23);
   hden1_clone203->SetPassedEvents(6,1);
   hden1_clone203->SetTotalEvents(7,31);
   hden1_clone203->SetPassedEvents(7,1);
   hden1_clone203->SetTotalEvents(8,43);
   hden1_clone203->SetPassedEvents(8,1);
   hden1_clone203->SetTotalEvents(9,41);
   hden1_clone203->SetPassedEvents(9,1);
   hden1_clone203->SetTotalEvents(10,50);
   hden1_clone203->SetPassedEvents(10,4);
   hden1_clone203->SetTotalEvents(11,84);
   hden1_clone203->SetPassedEvents(11,5);
   hden1_clone203->SetTotalEvents(12,69);
   hden1_clone203->SetPassedEvents(12,3);
   hden1_clone203->SetTotalEvents(13,62);
   hden1_clone203->SetPassedEvents(13,5);
   hden1_clone203->SetTotalEvents(14,55);
   hden1_clone203->SetPassedEvents(14,3);
   hden1_clone203->SetTotalEvents(15,47);
   hden1_clone203->SetPassedEvents(15,1);
   hden1_clone203->SetTotalEvents(16,83);
   hden1_clone203->SetPassedEvents(16,4);
   hden1_clone203->SetTotalEvents(17,51);
   hden1_clone203->SetPassedEvents(17,2);
   hden1_clone203->SetTotalEvents(18,26);
   hden1_clone203->SetPassedEvents(18,1);
   hden1_clone203->SetTotalEvents(19,20);
   hden1_clone203->SetPassedEvents(19,2);
   hden1_clone203->SetTotalEvents(20,14);
   hden1_clone203->SetPassedEvents(20,0);
   hden1_clone203->SetTotalEvents(21,15);
   hden1_clone203->SetPassedEvents(21,0);
   hden1_clone203->SetTotalEvents(22,10);
   hden1_clone203->SetPassedEvents(22,0);
   hden1_clone203->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone203->SetLineColor(ci);
   hden1_clone203->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone203->SetMarkerColor(ci);
   hden1_clone203->SetMarkerStyle(21);
   hden1_clone203->Draw("samezp");
   Double_t xAxis72[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone204 = new TEfficiency("hden2_clone","",21,xAxis72);
   
   hden2_clone204->SetConfidenceLevel(0.6826895);
   hden2_clone204->SetBetaAlpha(1);
   hden2_clone204->SetBetaBeta(1);
   hden2_clone204->SetWeight(1);
   hden2_clone204->SetStatisticOption(0);
   hden2_clone204->SetPosteriorMode(0);
   hden2_clone204->SetShortestInterval(0);
   hden2_clone204->SetTotalEvents(0,0);
   hden2_clone204->SetPassedEvents(0,0);
   hden2_clone204->SetTotalEvents(1,0);
   hden2_clone204->SetPassedEvents(1,0);
   hden2_clone204->SetTotalEvents(2,1);
   hden2_clone204->SetPassedEvents(2,0);
   hden2_clone204->SetTotalEvents(3,12);
   hden2_clone204->SetPassedEvents(3,0);
   hden2_clone204->SetTotalEvents(4,20);
   hden2_clone204->SetPassedEvents(4,0);
   hden2_clone204->SetTotalEvents(5,29);
   hden2_clone204->SetPassedEvents(5,1);
   hden2_clone204->SetTotalEvents(6,23);
   hden2_clone204->SetPassedEvents(6,2);
   hden2_clone204->SetTotalEvents(7,31);
   hden2_clone204->SetPassedEvents(7,1);
   hden2_clone204->SetTotalEvents(8,43);
   hden2_clone204->SetPassedEvents(8,1);
   hden2_clone204->SetTotalEvents(9,41);
   hden2_clone204->SetPassedEvents(9,0);
   hden2_clone204->SetTotalEvents(10,50);
   hden2_clone204->SetPassedEvents(10,4);
   hden2_clone204->SetTotalEvents(11,84);
   hden2_clone204->SetPassedEvents(11,4);
   hden2_clone204->SetTotalEvents(12,69);
   hden2_clone204->SetPassedEvents(12,3);
   hden2_clone204->SetTotalEvents(13,62);
   hden2_clone204->SetPassedEvents(13,4);
   hden2_clone204->SetTotalEvents(14,55);
   hden2_clone204->SetPassedEvents(14,3);
   hden2_clone204->SetTotalEvents(15,47);
   hden2_clone204->SetPassedEvents(15,1);
   hden2_clone204->SetTotalEvents(16,83);
   hden2_clone204->SetPassedEvents(16,4);
   hden2_clone204->SetTotalEvents(17,51);
   hden2_clone204->SetPassedEvents(17,2);
   hden2_clone204->SetTotalEvents(18,26);
   hden2_clone204->SetPassedEvents(18,1);
   hden2_clone204->SetTotalEvents(19,20);
   hden2_clone204->SetPassedEvents(19,2);
   hden2_clone204->SetTotalEvents(20,14);
   hden2_clone204->SetPassedEvents(20,0);
   hden2_clone204->SetTotalEvents(21,15);
   hden2_clone204->SetPassedEvents(21,0);
   hden2_clone204->SetTotalEvents(22,10);
   hden2_clone204->SetPassedEvents(22,0);
   hden2_clone204->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone204->SetLineColor(ci);
   hden2_clone204->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone204->SetMarkerColor(ci);
   hden2_clone204->SetMarkerStyle(25);
   hden2_clone204->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 even,ME21 odd,ME31 odd}{2.0<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
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
