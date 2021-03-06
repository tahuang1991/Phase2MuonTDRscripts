void GEMCSC_TriggerEtaEff_pt15_fraction75_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:05:12 2017) by ROOT version6.08/06
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
   Double_t xAxis24[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__23 = new TH1F("b1__23"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis24);
   b1__23->SetMinimum(0.6);
   b1__23->SetMaximum(1.05);
   b1__23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__23->SetLineColor(ci);
   b1__23->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__23->GetXaxis()->SetLabelFont(42);
   b1__23->GetXaxis()->SetLabelSize(0.05);
   b1__23->GetXaxis()->SetTitleSize(0.05);
   b1__23->GetXaxis()->SetTitleFont(42);
   b1__23->GetYaxis()->SetTitle("Trigger efficiency");
   b1__23->GetYaxis()->SetNdivisions(520);
   b1__23->GetYaxis()->SetLabelFont(42);
   b1__23->GetYaxis()->SetLabelSize(0.05);
   b1__23->GetYaxis()->SetTitleSize(0.05);
   b1__23->GetYaxis()->SetTitleOffset(1.1);
   b1__23->GetYaxis()->SetTitleFont(42);
   b1__23->GetZaxis()->SetLabelFont(42);
   b1__23->GetZaxis()->SetLabelSize(0.035);
   b1__23->GetZaxis()->SetTitleSize(0.035);
   b1__23->GetZaxis()->SetTitleFont(42);
   b1__23->Draw("");
   Double_t xAxis40[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone40 = new TEfficiency("hden1_clone","",23,xAxis40);
   
   hden1_clone40->SetConfidenceLevel(0.6826895);
   hden1_clone40->SetBetaAlpha(1);
   hden1_clone40->SetBetaBeta(1);
   hden1_clone40->SetWeight(1);
   hden1_clone40->SetStatisticOption(0);
   hden1_clone40->SetPosteriorMode(0);
   hden1_clone40->SetShortestInterval(0);
   hden1_clone40->SetTotalEvents(0,0);
   hden1_clone40->SetPassedEvents(0,0);
   hden1_clone40->SetTotalEvents(1,0);
   hden1_clone40->SetPassedEvents(1,0);
   hden1_clone40->SetTotalEvents(2,0);
   hden1_clone40->SetPassedEvents(2,0);
   hden1_clone40->SetTotalEvents(3,0);
   hden1_clone40->SetPassedEvents(3,0);
   hden1_clone40->SetTotalEvents(4,0);
   hden1_clone40->SetPassedEvents(4,0);
   hden1_clone40->SetTotalEvents(5,0);
   hden1_clone40->SetPassedEvents(5,0);
   hden1_clone40->SetTotalEvents(6,0);
   hden1_clone40->SetPassedEvents(6,0);
   hden1_clone40->SetTotalEvents(7,5956);
   hden1_clone40->SetPassedEvents(7,5911);
   hden1_clone40->SetTotalEvents(8,5618);
   hden1_clone40->SetPassedEvents(8,5543);
   hden1_clone40->SetTotalEvents(9,5822);
   hden1_clone40->SetPassedEvents(9,5681);
   hden1_clone40->SetTotalEvents(10,5806);
   hden1_clone40->SetPassedEvents(10,5698);
   hden1_clone40->SetTotalEvents(11,5480);
   hden1_clone40->SetPassedEvents(11,5395);
   hden1_clone40->SetTotalEvents(12,5760);
   hden1_clone40->SetPassedEvents(12,5671);
   hden1_clone40->SetTotalEvents(13,5706);
   hden1_clone40->SetPassedEvents(13,5606);
   hden1_clone40->SetTotalEvents(14,5658);
   hden1_clone40->SetPassedEvents(14,5573);
   hden1_clone40->SetTotalEvents(15,5722);
   hden1_clone40->SetPassedEvents(15,5609);
   hden1_clone40->SetTotalEvents(16,0);
   hden1_clone40->SetPassedEvents(16,0);
   hden1_clone40->SetTotalEvents(17,0);
   hden1_clone40->SetPassedEvents(17,0);
   hden1_clone40->SetTotalEvents(18,0);
   hden1_clone40->SetPassedEvents(18,0);
   hden1_clone40->SetTotalEvents(19,0);
   hden1_clone40->SetPassedEvents(19,0);
   hden1_clone40->SetTotalEvents(20,0);
   hden1_clone40->SetPassedEvents(20,0);
   hden1_clone40->SetTotalEvents(21,0);
   hden1_clone40->SetPassedEvents(21,0);
   hden1_clone40->SetTotalEvents(22,0);
   hden1_clone40->SetPassedEvents(22,0);
   hden1_clone40->SetTotalEvents(23,0);
   hden1_clone40->SetPassedEvents(23,0);
   hden1_clone40->SetTotalEvents(24,0);
   hden1_clone40->SetPassedEvents(24,0);
   hden1_clone40->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone40->SetLineColor(ci);
   hden1_clone40->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone40->SetMarkerColor(ci);
   hden1_clone40->SetMarkerStyle(26);
   hden1_clone40->Draw("samepz");
   Double_t xAxis41[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone41 = new TEfficiency("hden0_clone","",23,xAxis41);
   
   hden0_clone41->SetConfidenceLevel(0.6826895);
   hden0_clone41->SetBetaAlpha(1);
   hden0_clone41->SetBetaBeta(1);
   hden0_clone41->SetWeight(1);
   hden0_clone41->SetStatisticOption(0);
   hden0_clone41->SetPosteriorMode(0);
   hden0_clone41->SetShortestInterval(0);
   hden0_clone41->SetTotalEvents(0,0);
   hden0_clone41->SetPassedEvents(0,0);
   hden0_clone41->SetTotalEvents(1,0);
   hden0_clone41->SetPassedEvents(1,0);
   hden0_clone41->SetTotalEvents(2,0);
   hden0_clone41->SetPassedEvents(2,0);
   hden0_clone41->SetTotalEvents(3,0);
   hden0_clone41->SetPassedEvents(3,0);
   hden0_clone41->SetTotalEvents(4,0);
   hden0_clone41->SetPassedEvents(4,0);
   hden0_clone41->SetTotalEvents(5,0);
   hden0_clone41->SetPassedEvents(5,0);
   hden0_clone41->SetTotalEvents(6,0);
   hden0_clone41->SetPassedEvents(6,0);
   hden0_clone41->SetTotalEvents(7,8694);
   hden0_clone41->SetPassedEvents(7,8591);
   hden0_clone41->SetTotalEvents(8,8460);
   hden0_clone41->SetPassedEvents(8,8244);
   hden0_clone41->SetTotalEvents(9,8390);
   hden0_clone41->SetPassedEvents(9,8057);
   hden0_clone41->SetTotalEvents(10,8546);
   hden0_clone41->SetPassedEvents(10,8266);
   hden0_clone41->SetTotalEvents(11,8168);
   hden0_clone41->SetPassedEvents(11,7933);
   hden0_clone41->SetTotalEvents(12,8424);
   hden0_clone41->SetPassedEvents(12,8201);
   hden0_clone41->SetTotalEvents(13,8314);
   hden0_clone41->SetPassedEvents(13,8043);
   hden0_clone41->SetTotalEvents(14,8306);
   hden0_clone41->SetPassedEvents(14,8039);
   hden0_clone41->SetTotalEvents(15,8340);
   hden0_clone41->SetPassedEvents(15,7920);
   hden0_clone41->SetTotalEvents(16,0);
   hden0_clone41->SetPassedEvents(16,0);
   hden0_clone41->SetTotalEvents(17,0);
   hden0_clone41->SetPassedEvents(17,0);
   hden0_clone41->SetTotalEvents(18,0);
   hden0_clone41->SetPassedEvents(18,0);
   hden0_clone41->SetTotalEvents(19,0);
   hden0_clone41->SetPassedEvents(19,0);
   hden0_clone41->SetTotalEvents(20,0);
   hden0_clone41->SetPassedEvents(20,0);
   hden0_clone41->SetTotalEvents(21,0);
   hden0_clone41->SetPassedEvents(21,0);
   hden0_clone41->SetTotalEvents(22,0);
   hden0_clone41->SetPassedEvents(22,0);
   hden0_clone41->SetTotalEvents(23,0);
   hden0_clone41->SetPassedEvents(23,0);
   hden0_clone41->SetTotalEvents(24,0);
   hden0_clone41->SetPassedEvents(24,0);
   hden0_clone41->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone41->SetLineColor(ci);
   hden0_clone41->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone41->SetMarkerColor(ci);
   hden0_clone41->SetMarkerStyle(25);
   hden0_clone41->Draw("samepz");
   Double_t xAxis42[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt15fraction75vseta42 = new TEfficiency("hybrideta16to21pt15fraction75vseta","",23,xAxis42);
   
   hybrideta16to21pt15fraction75vseta42->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt15fraction75vseta42->SetBetaAlpha(1);
   hybrideta16to21pt15fraction75vseta42->SetBetaBeta(1);
   hybrideta16to21pt15fraction75vseta42->SetWeight(1);
   hybrideta16to21pt15fraction75vseta42->SetStatisticOption(0);
   hybrideta16to21pt15fraction75vseta42->SetPosteriorMode(0);
   hybrideta16to21pt15fraction75vseta42->SetShortestInterval(0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(0,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(0,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(1,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(1,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(2,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(2,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(3,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(3,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(4,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(4,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(5,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(5,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(6,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(6,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(7,5956);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(7,5366);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(8,5618);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(8,4968);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(9,5822);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(9,5111);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(10,5806);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(10,5124);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(11,5480);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(11,4846);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(12,5760);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(12,5068);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(13,5706);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(13,5016);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(14,5658);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(14,4940);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(15,5722);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(15,4910);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(16,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(16,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(17,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(17,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(18,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(18,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(19,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(19,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(20,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(20,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(21,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(21,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(22,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(22,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(23,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(23,0);
   hybrideta16to21pt15fraction75vseta42->SetTotalEvents(24,0);
   hybrideta16to21pt15fraction75vseta42->SetPassedEvents(24,0);
   hybrideta16to21pt15fraction75vseta42->SetFillColor(19);
   hybrideta16to21pt15fraction75vseta42->SetLineWidth(2);
   hybrideta16to21pt15fraction75vseta42->SetMarkerStyle(21);
   hybrideta16to21pt15fraction75vseta42->Draw("samepz");
   Double_t xAxis43[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt15fraction75vseta43 = new TEfficiency("GE11eta16to21pt15fraction75vseta","",23,xAxis43);
   
   GE11eta16to21pt15fraction75vseta43->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt15fraction75vseta43->SetBetaAlpha(1);
   GE11eta16to21pt15fraction75vseta43->SetBetaBeta(1);
   GE11eta16to21pt15fraction75vseta43->SetWeight(1);
   GE11eta16to21pt15fraction75vseta43->SetStatisticOption(0);
   GE11eta16to21pt15fraction75vseta43->SetPosteriorMode(0);
   GE11eta16to21pt15fraction75vseta43->SetShortestInterval(0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(0,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(0,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(1,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(1,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(2,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(2,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(3,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(3,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(4,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(4,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(5,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(5,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(6,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(6,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(7,8694);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(7,7905);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(8,8460);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(8,7456);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(9,8390);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(9,7528);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(10,8546);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(10,7711);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(11,8168);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(11,7484);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(12,8424);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(12,7617);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(13,8314);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(13,7460);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(14,8306);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(14,7500);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(15,8340);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(15,7285);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(16,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(16,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(17,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(17,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(18,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(18,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(19,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(19,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(20,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(20,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(21,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(21,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(22,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(22,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(23,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(23,0);
   GE11eta16to21pt15fraction75vseta43->SetTotalEvents(24,0);
   GE11eta16to21pt15fraction75vseta43->SetPassedEvents(24,0);
   GE11eta16to21pt15fraction75vseta43->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction75vseta43->SetLineColor(ci);
   GE11eta16to21pt15fraction75vseta43->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction75vseta43->SetMarkerColor(ci);
   GE11eta16to21pt15fraction75vseta43->SetMarkerStyle(20);
   GE11eta16to21pt15fraction75vseta43->Draw("samepz");
   
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
   entry=leg->AddEntry("hybrideta16to21pt15fraction75vseta","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt15fraction75vseta","CSC+GE11: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");

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
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>20 GeV");
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
