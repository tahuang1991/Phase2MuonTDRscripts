void GEMCSC_TriggerEtaEff_pt14_fraction94_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:34:34 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(1.387209,0.5277778,2.679199,1.083333);
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
   Double_t xAxis480[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__460 = new TH1F("b1__460"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis480);
   b1__460->SetMinimum(0.6);
   b1__460->SetMaximum(1.05);
   b1__460->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__460->SetLineColor(ci);
   b1__460->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__460->GetXaxis()->SetLabelFont(42);
   b1__460->GetXaxis()->SetLabelSize(0.05);
   b1__460->GetXaxis()->SetTitleSize(0.05);
   b1__460->GetXaxis()->SetTitleFont(42);
   b1__460->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__460->GetYaxis()->SetNdivisions(520);
   b1__460->GetYaxis()->SetLabelFont(42);
   b1__460->GetYaxis()->SetLabelSize(0.05);
   b1__460->GetYaxis()->SetTitleSize(0.05);
   b1__460->GetYaxis()->SetTitleOffset(1.1);
   b1__460->GetYaxis()->SetTitleFont(42);
   b1__460->GetZaxis()->SetLabelFont(42);
   b1__460->GetZaxis()->SetLabelSize(0.035);
   b1__460->GetZaxis()->SetTitleSize(0.035);
   b1__460->GetZaxis()->SetTitleFont(42);
   b1__460->Draw("");
   Double_t xAxis857[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone857 = new TEfficiency("hden1_clone","",23,xAxis857);
   
   hden1_clone857->SetConfidenceLevel(0.6826895);
   hden1_clone857->SetBetaAlpha(1);
   hden1_clone857->SetBetaBeta(1);
   hden1_clone857->SetWeight(1);
   hden1_clone857->SetStatisticOption(0);
   hden1_clone857->SetPosteriorMode(0);
   hden1_clone857->SetShortestInterval(0);
   hden1_clone857->SetTotalEvents(0,0);
   hden1_clone857->SetPassedEvents(0,0);
   hden1_clone857->SetTotalEvents(1,0);
   hden1_clone857->SetPassedEvents(1,0);
   hden1_clone857->SetTotalEvents(2,0);
   hden1_clone857->SetPassedEvents(2,0);
   hden1_clone857->SetTotalEvents(3,0);
   hden1_clone857->SetPassedEvents(3,0);
   hden1_clone857->SetTotalEvents(4,0);
   hden1_clone857->SetPassedEvents(4,0);
   hden1_clone857->SetTotalEvents(5,0);
   hden1_clone857->SetPassedEvents(5,0);
   hden1_clone857->SetTotalEvents(6,0);
   hden1_clone857->SetPassedEvents(6,0);
   hden1_clone857->SetTotalEvents(7,6134);
   hden1_clone857->SetPassedEvents(7,6089);
   hden1_clone857->SetTotalEvents(8,5802);
   hden1_clone857->SetPassedEvents(8,5725);
   hden1_clone857->SetTotalEvents(9,5978);
   hden1_clone857->SetPassedEvents(9,5834);
   hden1_clone857->SetTotalEvents(10,6000);
   hden1_clone857->SetPassedEvents(10,5886);
   hden1_clone857->SetTotalEvents(11,5662);
   hden1_clone857->SetPassedEvents(11,5572);
   hden1_clone857->SetTotalEvents(12,5956);
   hden1_clone857->SetPassedEvents(12,5862);
   hden1_clone857->SetTotalEvents(13,5868);
   hden1_clone857->SetPassedEvents(13,5765);
   hden1_clone857->SetTotalEvents(14,5840);
   hden1_clone857->SetPassedEvents(14,5753);
   hden1_clone857->SetTotalEvents(15,5908);
   hden1_clone857->SetPassedEvents(15,5790);
   hden1_clone857->SetTotalEvents(16,0);
   hden1_clone857->SetPassedEvents(16,0);
   hden1_clone857->SetTotalEvents(17,0);
   hden1_clone857->SetPassedEvents(17,0);
   hden1_clone857->SetTotalEvents(18,0);
   hden1_clone857->SetPassedEvents(18,0);
   hden1_clone857->SetTotalEvents(19,0);
   hden1_clone857->SetPassedEvents(19,0);
   hden1_clone857->SetTotalEvents(20,0);
   hden1_clone857->SetPassedEvents(20,0);
   hden1_clone857->SetTotalEvents(21,0);
   hden1_clone857->SetPassedEvents(21,0);
   hden1_clone857->SetTotalEvents(22,0);
   hden1_clone857->SetPassedEvents(22,0);
   hden1_clone857->SetTotalEvents(23,0);
   hden1_clone857->SetPassedEvents(23,0);
   hden1_clone857->SetTotalEvents(24,0);
   hden1_clone857->SetPassedEvents(24,0);
   hden1_clone857->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone857->SetLineColor(ci);
   hden1_clone857->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone857->SetMarkerColor(ci);
   hden1_clone857->SetMarkerStyle(26);
   hden1_clone857->Draw("samepz");
   Double_t xAxis858[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone858 = new TEfficiency("hden0_clone","",23,xAxis858);
   
   hden0_clone858->SetConfidenceLevel(0.6826895);
   hden0_clone858->SetBetaAlpha(1);
   hden0_clone858->SetBetaBeta(1);
   hden0_clone858->SetWeight(1);
   hden0_clone858->SetStatisticOption(0);
   hden0_clone858->SetPosteriorMode(0);
   hden0_clone858->SetShortestInterval(0);
   hden0_clone858->SetTotalEvents(0,0);
   hden0_clone858->SetPassedEvents(0,0);
   hden0_clone858->SetTotalEvents(1,0);
   hden0_clone858->SetPassedEvents(1,0);
   hden0_clone858->SetTotalEvents(2,0);
   hden0_clone858->SetPassedEvents(2,0);
   hden0_clone858->SetTotalEvents(3,0);
   hden0_clone858->SetPassedEvents(3,0);
   hden0_clone858->SetTotalEvents(4,0);
   hden0_clone858->SetPassedEvents(4,0);
   hden0_clone858->SetTotalEvents(5,0);
   hden0_clone858->SetPassedEvents(5,0);
   hden0_clone858->SetTotalEvents(6,0);
   hden0_clone858->SetPassedEvents(6,0);
   hden0_clone858->SetTotalEvents(7,8976);
   hden0_clone858->SetPassedEvents(7,8870);
   hden0_clone858->SetTotalEvents(8,8728);
   hden0_clone858->SetPassedEvents(8,8498);
   hden0_clone858->SetTotalEvents(9,8622);
   hden0_clone858->SetPassedEvents(9,8271);
   hden0_clone858->SetTotalEvents(10,8822);
   hden0_clone858->SetPassedEvents(10,8535);
   hden0_clone858->SetTotalEvents(11,8456);
   hden0_clone858->SetPassedEvents(11,8207);
   hden0_clone858->SetTotalEvents(12,8708);
   hden0_clone858->SetPassedEvents(12,8476);
   hden0_clone858->SetTotalEvents(13,8578);
   hden0_clone858->SetPassedEvents(13,8297);
   hden0_clone858->SetTotalEvents(14,8562);
   hden0_clone858->SetPassedEvents(14,8288);
   hden0_clone858->SetTotalEvents(15,8646);
   hden0_clone858->SetPassedEvents(15,8212);
   hden0_clone858->SetTotalEvents(16,0);
   hden0_clone858->SetPassedEvents(16,0);
   hden0_clone858->SetTotalEvents(17,0);
   hden0_clone858->SetPassedEvents(17,0);
   hden0_clone858->SetTotalEvents(18,0);
   hden0_clone858->SetPassedEvents(18,0);
   hden0_clone858->SetTotalEvents(19,0);
   hden0_clone858->SetPassedEvents(19,0);
   hden0_clone858->SetTotalEvents(20,0);
   hden0_clone858->SetPassedEvents(20,0);
   hden0_clone858->SetTotalEvents(21,0);
   hden0_clone858->SetPassedEvents(21,0);
   hden0_clone858->SetTotalEvents(22,0);
   hden0_clone858->SetPassedEvents(22,0);
   hden0_clone858->SetTotalEvents(23,0);
   hden0_clone858->SetPassedEvents(23,0);
   hden0_clone858->SetTotalEvents(24,0);
   hden0_clone858->SetPassedEvents(24,0);
   hden0_clone858->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone858->SetLineColor(ci);
   hden0_clone858->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone858->SetMarkerColor(ci);
   hden0_clone858->SetMarkerStyle(25);
   hden0_clone858->Draw("samepz");
   Double_t xAxis859[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt14fraction94vseta859 = new TEfficiency("hybrideta16to21pt14fraction94vseta","",23,xAxis859);
   
   hybrideta16to21pt14fraction94vseta859->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt14fraction94vseta859->SetBetaAlpha(1);
   hybrideta16to21pt14fraction94vseta859->SetBetaBeta(1);
   hybrideta16to21pt14fraction94vseta859->SetWeight(1);
   hybrideta16to21pt14fraction94vseta859->SetStatisticOption(0);
   hybrideta16to21pt14fraction94vseta859->SetPosteriorMode(0);
   hybrideta16to21pt14fraction94vseta859->SetShortestInterval(0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(0,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(0,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(1,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(1,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(2,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(2,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(3,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(3,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(4,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(4,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(5,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(5,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(6,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(6,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(7,6134);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(7,5773);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(8,5802);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(8,5407);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(9,5978);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(9,5474);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(10,6000);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(10,5534);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(11,5662);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(11,5255);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(12,5956);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(12,5470);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(13,5868);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(13,5362);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(14,5840);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(14,5354);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(15,5908);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(15,5300);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(16,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(16,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(17,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(17,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(18,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(18,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(19,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(19,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(20,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(20,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(21,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(21,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(22,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(22,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(23,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(23,0);
   hybrideta16to21pt14fraction94vseta859->SetTotalEvents(24,0);
   hybrideta16to21pt14fraction94vseta859->SetPassedEvents(24,0);
   hybrideta16to21pt14fraction94vseta859->SetFillColor(19);
   hybrideta16to21pt14fraction94vseta859->SetLineWidth(2);
   hybrideta16to21pt14fraction94vseta859->SetMarkerStyle(21);
   hybrideta16to21pt14fraction94vseta859->Draw("samepz");
   Double_t xAxis860[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt14fraction94vseta860 = new TEfficiency("GE11eta16to21pt14fraction94vseta","",23,xAxis860);
   
   GE11eta16to21pt14fraction94vseta860->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt14fraction94vseta860->SetBetaAlpha(1);
   GE11eta16to21pt14fraction94vseta860->SetBetaBeta(1);
   GE11eta16to21pt14fraction94vseta860->SetWeight(1);
   GE11eta16to21pt14fraction94vseta860->SetStatisticOption(0);
   GE11eta16to21pt14fraction94vseta860->SetPosteriorMode(0);
   GE11eta16to21pt14fraction94vseta860->SetShortestInterval(0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(0,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(0,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(1,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(1,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(2,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(2,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(3,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(3,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(4,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(4,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(5,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(5,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(6,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(6,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(7,8976);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(7,8304);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(8,8728);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(8,7803);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(9,8622);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(9,7839);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(10,8822);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(10,8049);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(11,8456);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(11,7824);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(12,8708);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(12,7936);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(13,8578);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(13,7772);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(14,8562);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(14,7802);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(15,8646);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(15,7626);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(16,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(16,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(17,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(17,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(18,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(18,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(19,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(19,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(20,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(20,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(21,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(21,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(22,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(22,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(23,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(23,0);
   GE11eta16to21pt14fraction94vseta860->SetTotalEvents(24,0);
   GE11eta16to21pt14fraction94vseta860->SetPassedEvents(24,0);
   GE11eta16to21pt14fraction94vseta860->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt14fraction94vseta860->SetLineColor(ci);
   GE11eta16to21pt14fraction94vseta860->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt14fraction94vseta860->SetMarkerColor(ci);
   GE11eta16to21pt14fraction94vseta860->SetMarkerStyle(20);
   GE11eta16to21pt14fraction94vseta860->Draw("samepz");
   
   TLegend *leg = new TLegend(0.2,0.15,0.85,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL"," ","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","L1Mu w/ GE21 (inputs to L1Trk+L1Mu)","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","L1Mu w/o GE21","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt14fraction94vseta","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=14 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt14fraction94vseta","CSC+GE11: hits in ME11, p_{T}^{L1}>=14 GeV (Standalone L1Mu)","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>19 GeV");
tex->SetNDC();
   tex->SetTextSize(0.04);
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
