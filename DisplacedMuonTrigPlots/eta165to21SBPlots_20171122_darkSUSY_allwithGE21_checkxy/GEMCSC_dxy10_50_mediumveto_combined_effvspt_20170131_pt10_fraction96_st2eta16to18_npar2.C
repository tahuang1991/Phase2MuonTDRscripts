void GEMCSC_dxy10_50_mediumveto_combined_effvspt_20170131_pt10_fraction96_st2eta16to18_npar2()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:13:03 2017) by ROOT version6.08/06
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
   Double_t xAxis6[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__14 = new TH1F("b1__14"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis6);
   b1__14->SetMinimum(0);
   b1__14->SetMaximum(1.05);
   b1__14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__14->SetLineColor(ci);
   b1__14->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__14->GetXaxis()->SetLabelFont(42);
   b1__14->GetXaxis()->SetLabelSize(0.05);
   b1__14->GetXaxis()->SetTitleSize(0.05);
   b1__14->GetXaxis()->SetTitleFont(42);
   b1__14->GetYaxis()->SetTitle("Trigger efficiency");
   b1__14->GetYaxis()->SetNdivisions(520);
   b1__14->GetYaxis()->SetLabelFont(42);
   b1__14->GetYaxis()->SetLabelSize(0.05);
   b1__14->GetYaxis()->SetTitleSize(0.05);
   b1__14->GetYaxis()->SetTitleOffset(1.1);
   b1__14->GetYaxis()->SetTitleFont(42);
   b1__14->GetZaxis()->SetLabelFont(42);
   b1__14->GetZaxis()->SetLabelSize(0.035);
   b1__14->GetZaxis()->SetTitleSize(0.035);
   b1__14->GetZaxis()->SetTitleFont(42);
   b1__14->Draw("");
   Double_t xAxis16[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone40 = new TEfficiency("hden0_clone","",21,xAxis16);
   
   hden0_clone40->SetConfidenceLevel(0.6826895);
   hden0_clone40->SetBetaAlpha(1);
   hden0_clone40->SetBetaBeta(1);
   hden0_clone40->SetWeight(1);
   hden0_clone40->SetStatisticOption(0);
   hden0_clone40->SetPosteriorMode(0);
   hden0_clone40->SetShortestInterval(0);
   hden0_clone40->SetTotalEvents(0,0);
   hden0_clone40->SetPassedEvents(0,0);
   hden0_clone40->SetTotalEvents(1,0);
   hden0_clone40->SetPassedEvents(1,0);
   hden0_clone40->SetTotalEvents(2,0);
   hden0_clone40->SetPassedEvents(2,0);
   hden0_clone40->SetTotalEvents(3,14);
   hden0_clone40->SetPassedEvents(3,0);
   hden0_clone40->SetTotalEvents(4,16);
   hden0_clone40->SetPassedEvents(4,0);
   hden0_clone40->SetTotalEvents(5,36);
   hden0_clone40->SetPassedEvents(5,0);
   hden0_clone40->SetTotalEvents(6,24);
   hden0_clone40->SetPassedEvents(6,1);
   hden0_clone40->SetTotalEvents(7,30);
   hden0_clone40->SetPassedEvents(7,1);
   hden0_clone40->SetTotalEvents(8,43);
   hden0_clone40->SetPassedEvents(8,1);
   hden0_clone40->SetTotalEvents(9,34);
   hden0_clone40->SetPassedEvents(9,3);
   hden0_clone40->SetTotalEvents(10,34);
   hden0_clone40->SetPassedEvents(10,2);
   hden0_clone40->SetTotalEvents(11,74);
   hden0_clone40->SetPassedEvents(11,3);
   hden0_clone40->SetTotalEvents(12,56);
   hden0_clone40->SetPassedEvents(12,4);
   hden0_clone40->SetTotalEvents(13,57);
   hden0_clone40->SetPassedEvents(13,3);
   hden0_clone40->SetTotalEvents(14,52);
   hden0_clone40->SetPassedEvents(14,6);
   hden0_clone40->SetTotalEvents(15,49);
   hden0_clone40->SetPassedEvents(15,2);
   hden0_clone40->SetTotalEvents(16,71);
   hden0_clone40->SetPassedEvents(16,8);
   hden0_clone40->SetTotalEvents(17,64);
   hden0_clone40->SetPassedEvents(17,3);
   hden0_clone40->SetTotalEvents(18,34);
   hden0_clone40->SetPassedEvents(18,2);
   hden0_clone40->SetTotalEvents(19,24);
   hden0_clone40->SetPassedEvents(19,0);
   hden0_clone40->SetTotalEvents(20,28);
   hden0_clone40->SetPassedEvents(20,1);
   hden0_clone40->SetTotalEvents(21,10);
   hden0_clone40->SetPassedEvents(21,1);
   hden0_clone40->SetTotalEvents(22,15);
   hden0_clone40->SetPassedEvents(22,0);
   hden0_clone40->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone40->SetLineColor(ci);
   hden0_clone40->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone40->SetMarkerColor(ci);
   hden0_clone40->SetMarkerStyle(24);
   hden0_clone40->Draw("samezp");
   Double_t xAxis17[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone41 = new TEfficiency("hden1_clone","",21,xAxis17);
   
   hden1_clone41->SetConfidenceLevel(0.6826895);
   hden1_clone41->SetBetaAlpha(1);
   hden1_clone41->SetBetaBeta(1);
   hden1_clone41->SetWeight(1);
   hden1_clone41->SetStatisticOption(0);
   hden1_clone41->SetPosteriorMode(0);
   hden1_clone41->SetShortestInterval(0);
   hden1_clone41->SetTotalEvents(0,0);
   hden1_clone41->SetPassedEvents(0,0);
   hden1_clone41->SetTotalEvents(1,0);
   hden1_clone41->SetPassedEvents(1,0);
   hden1_clone41->SetTotalEvents(2,0);
   hden1_clone41->SetPassedEvents(2,0);
   hden1_clone41->SetTotalEvents(3,14);
   hden1_clone41->SetPassedEvents(3,0);
   hden1_clone41->SetTotalEvents(4,16);
   hden1_clone41->SetPassedEvents(4,0);
   hden1_clone41->SetTotalEvents(5,36);
   hden1_clone41->SetPassedEvents(5,0);
   hden1_clone41->SetTotalEvents(6,24);
   hden1_clone41->SetPassedEvents(6,1);
   hden1_clone41->SetTotalEvents(7,30);
   hden1_clone41->SetPassedEvents(7,1);
   hden1_clone41->SetTotalEvents(8,43);
   hden1_clone41->SetPassedEvents(8,1);
   hden1_clone41->SetTotalEvents(9,34);
   hden1_clone41->SetPassedEvents(9,3);
   hden1_clone41->SetTotalEvents(10,34);
   hden1_clone41->SetPassedEvents(10,1);
   hden1_clone41->SetTotalEvents(11,74);
   hden1_clone41->SetPassedEvents(11,4);
   hden1_clone41->SetTotalEvents(12,56);
   hden1_clone41->SetPassedEvents(12,3);
   hden1_clone41->SetTotalEvents(13,57);
   hden1_clone41->SetPassedEvents(13,3);
   hden1_clone41->SetTotalEvents(14,52);
   hden1_clone41->SetPassedEvents(14,5);
   hden1_clone41->SetTotalEvents(15,49);
   hden1_clone41->SetPassedEvents(15,2);
   hden1_clone41->SetTotalEvents(16,71);
   hden1_clone41->SetPassedEvents(16,8);
   hden1_clone41->SetTotalEvents(17,64);
   hden1_clone41->SetPassedEvents(17,3);
   hden1_clone41->SetTotalEvents(18,34);
   hden1_clone41->SetPassedEvents(18,1);
   hden1_clone41->SetTotalEvents(19,24);
   hden1_clone41->SetPassedEvents(19,0);
   hden1_clone41->SetTotalEvents(20,28);
   hden1_clone41->SetPassedEvents(20,1);
   hden1_clone41->SetTotalEvents(21,10);
   hden1_clone41->SetPassedEvents(21,1);
   hden1_clone41->SetTotalEvents(22,15);
   hden1_clone41->SetPassedEvents(22,0);
   hden1_clone41->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone41->SetLineColor(ci);
   hden1_clone41->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone41->SetMarkerColor(ci);
   hden1_clone41->SetMarkerStyle(21);
   hden1_clone41->Draw("samezp");
   Double_t xAxis18[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone42 = new TEfficiency("hden2_clone","",21,xAxis18);
   
   hden2_clone42->SetConfidenceLevel(0.6826895);
   hden2_clone42->SetBetaAlpha(1);
   hden2_clone42->SetBetaBeta(1);
   hden2_clone42->SetWeight(1);
   hden2_clone42->SetStatisticOption(0);
   hden2_clone42->SetPosteriorMode(0);
   hden2_clone42->SetShortestInterval(0);
   hden2_clone42->SetTotalEvents(0,0);
   hden2_clone42->SetPassedEvents(0,0);
   hden2_clone42->SetTotalEvents(1,0);
   hden2_clone42->SetPassedEvents(1,0);
   hden2_clone42->SetTotalEvents(2,0);
   hden2_clone42->SetPassedEvents(2,0);
   hden2_clone42->SetTotalEvents(3,14);
   hden2_clone42->SetPassedEvents(3,0);
   hden2_clone42->SetTotalEvents(4,16);
   hden2_clone42->SetPassedEvents(4,0);
   hden2_clone42->SetTotalEvents(5,36);
   hden2_clone42->SetPassedEvents(5,0);
   hden2_clone42->SetTotalEvents(6,24);
   hden2_clone42->SetPassedEvents(6,1);
   hden2_clone42->SetTotalEvents(7,30);
   hden2_clone42->SetPassedEvents(7,0);
   hden2_clone42->SetTotalEvents(8,43);
   hden2_clone42->SetPassedEvents(8,2);
   hden2_clone42->SetTotalEvents(9,34);
   hden2_clone42->SetPassedEvents(9,2);
   hden2_clone42->SetTotalEvents(10,34);
   hden2_clone42->SetPassedEvents(10,2);
   hden2_clone42->SetTotalEvents(11,74);
   hden2_clone42->SetPassedEvents(11,4);
   hden2_clone42->SetTotalEvents(12,56);
   hden2_clone42->SetPassedEvents(12,6);
   hden2_clone42->SetTotalEvents(13,57);
   hden2_clone42->SetPassedEvents(13,4);
   hden2_clone42->SetTotalEvents(14,52);
   hden2_clone42->SetPassedEvents(14,6);
   hden2_clone42->SetTotalEvents(15,49);
   hden2_clone42->SetPassedEvents(15,1);
   hden2_clone42->SetTotalEvents(16,71);
   hden2_clone42->SetPassedEvents(16,7);
   hden2_clone42->SetTotalEvents(17,64);
   hden2_clone42->SetPassedEvents(17,2);
   hden2_clone42->SetTotalEvents(18,34);
   hden2_clone42->SetPassedEvents(18,2);
   hden2_clone42->SetTotalEvents(19,24);
   hden2_clone42->SetPassedEvents(19,0);
   hden2_clone42->SetTotalEvents(20,28);
   hden2_clone42->SetPassedEvents(20,1);
   hden2_clone42->SetTotalEvents(21,10);
   hden2_clone42->SetPassedEvents(21,1);
   hden2_clone42->SetTotalEvents(22,15);
   hden2_clone42->SetPassedEvents(22,0);
   hden2_clone42->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone42->SetLineColor(ci);
   hden2_clone42->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone42->SetMarkerColor(ci);
   hden2_clone42->SetMarkerStyle(25);
   hden2_clone42->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 even,ME21 even,ME31 even}{1.6<|#eta|<1.80, p_{T}^{L1}>10 GeV}");
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
