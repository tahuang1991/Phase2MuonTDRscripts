void GEMCSC_TriggerEtaEff_pt15_fraction89_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:08:47 2017) by ROOT version6.08/06
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
   Double_t xAxis360[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__345 = new TH1F("b1__345"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis360);
   b1__345->SetMinimum(0.6);
   b1__345->SetMaximum(1.05);
   b1__345->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__345->SetLineColor(ci);
   b1__345->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__345->GetXaxis()->SetLabelFont(42);
   b1__345->GetXaxis()->SetLabelSize(0.05);
   b1__345->GetXaxis()->SetTitleSize(0.05);
   b1__345->GetXaxis()->SetTitleFont(42);
   b1__345->GetYaxis()->SetTitle("Trigger efficiency");
   b1__345->GetYaxis()->SetNdivisions(520);
   b1__345->GetYaxis()->SetLabelFont(42);
   b1__345->GetYaxis()->SetLabelSize(0.05);
   b1__345->GetYaxis()->SetTitleSize(0.05);
   b1__345->GetYaxis()->SetTitleOffset(1.1);
   b1__345->GetYaxis()->SetTitleFont(42);
   b1__345->GetZaxis()->SetLabelFont(42);
   b1__345->GetZaxis()->SetLabelSize(0.035);
   b1__345->GetZaxis()->SetTitleSize(0.035);
   b1__345->GetZaxis()->SetTitleFont(42);
   b1__345->Draw("");
   Double_t xAxis642[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone642 = new TEfficiency("hden1_clone","",23,xAxis642);
   
   hden1_clone642->SetConfidenceLevel(0.6826895);
   hden1_clone642->SetBetaAlpha(1);
   hden1_clone642->SetBetaBeta(1);
   hden1_clone642->SetWeight(1);
   hden1_clone642->SetStatisticOption(0);
   hden1_clone642->SetPosteriorMode(0);
   hden1_clone642->SetShortestInterval(0);
   hden1_clone642->SetTotalEvents(0,0);
   hden1_clone642->SetPassedEvents(0,0);
   hden1_clone642->SetTotalEvents(1,0);
   hden1_clone642->SetPassedEvents(1,0);
   hden1_clone642->SetTotalEvents(2,0);
   hden1_clone642->SetPassedEvents(2,0);
   hden1_clone642->SetTotalEvents(3,0);
   hden1_clone642->SetPassedEvents(3,0);
   hden1_clone642->SetTotalEvents(4,0);
   hden1_clone642->SetPassedEvents(4,0);
   hden1_clone642->SetTotalEvents(5,0);
   hden1_clone642->SetPassedEvents(5,0);
   hden1_clone642->SetTotalEvents(6,0);
   hden1_clone642->SetPassedEvents(6,0);
   hden1_clone642->SetTotalEvents(7,5956);
   hden1_clone642->SetPassedEvents(7,5911);
   hden1_clone642->SetTotalEvents(8,5618);
   hden1_clone642->SetPassedEvents(8,5543);
   hden1_clone642->SetTotalEvents(9,5822);
   hden1_clone642->SetPassedEvents(9,5681);
   hden1_clone642->SetTotalEvents(10,5806);
   hden1_clone642->SetPassedEvents(10,5698);
   hden1_clone642->SetTotalEvents(11,5480);
   hden1_clone642->SetPassedEvents(11,5395);
   hden1_clone642->SetTotalEvents(12,5760);
   hden1_clone642->SetPassedEvents(12,5671);
   hden1_clone642->SetTotalEvents(13,5706);
   hden1_clone642->SetPassedEvents(13,5606);
   hden1_clone642->SetTotalEvents(14,5658);
   hden1_clone642->SetPassedEvents(14,5573);
   hden1_clone642->SetTotalEvents(15,5722);
   hden1_clone642->SetPassedEvents(15,5609);
   hden1_clone642->SetTotalEvents(16,0);
   hden1_clone642->SetPassedEvents(16,0);
   hden1_clone642->SetTotalEvents(17,0);
   hden1_clone642->SetPassedEvents(17,0);
   hden1_clone642->SetTotalEvents(18,0);
   hden1_clone642->SetPassedEvents(18,0);
   hden1_clone642->SetTotalEvents(19,0);
   hden1_clone642->SetPassedEvents(19,0);
   hden1_clone642->SetTotalEvents(20,0);
   hden1_clone642->SetPassedEvents(20,0);
   hden1_clone642->SetTotalEvents(21,0);
   hden1_clone642->SetPassedEvents(21,0);
   hden1_clone642->SetTotalEvents(22,0);
   hden1_clone642->SetPassedEvents(22,0);
   hden1_clone642->SetTotalEvents(23,0);
   hden1_clone642->SetPassedEvents(23,0);
   hden1_clone642->SetTotalEvents(24,0);
   hden1_clone642->SetPassedEvents(24,0);
   hden1_clone642->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone642->SetLineColor(ci);
   hden1_clone642->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone642->SetMarkerColor(ci);
   hden1_clone642->SetMarkerStyle(26);
   hden1_clone642->Draw("samepz");
   Double_t xAxis643[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone643 = new TEfficiency("hden0_clone","",23,xAxis643);
   
   hden0_clone643->SetConfidenceLevel(0.6826895);
   hden0_clone643->SetBetaAlpha(1);
   hden0_clone643->SetBetaBeta(1);
   hden0_clone643->SetWeight(1);
   hden0_clone643->SetStatisticOption(0);
   hden0_clone643->SetPosteriorMode(0);
   hden0_clone643->SetShortestInterval(0);
   hden0_clone643->SetTotalEvents(0,0);
   hden0_clone643->SetPassedEvents(0,0);
   hden0_clone643->SetTotalEvents(1,0);
   hden0_clone643->SetPassedEvents(1,0);
   hden0_clone643->SetTotalEvents(2,0);
   hden0_clone643->SetPassedEvents(2,0);
   hden0_clone643->SetTotalEvents(3,0);
   hden0_clone643->SetPassedEvents(3,0);
   hden0_clone643->SetTotalEvents(4,0);
   hden0_clone643->SetPassedEvents(4,0);
   hden0_clone643->SetTotalEvents(5,0);
   hden0_clone643->SetPassedEvents(5,0);
   hden0_clone643->SetTotalEvents(6,0);
   hden0_clone643->SetPassedEvents(6,0);
   hden0_clone643->SetTotalEvents(7,8694);
   hden0_clone643->SetPassedEvents(7,8591);
   hden0_clone643->SetTotalEvents(8,8460);
   hden0_clone643->SetPassedEvents(8,8244);
   hden0_clone643->SetTotalEvents(9,8390);
   hden0_clone643->SetPassedEvents(9,8057);
   hden0_clone643->SetTotalEvents(10,8546);
   hden0_clone643->SetPassedEvents(10,8266);
   hden0_clone643->SetTotalEvents(11,8168);
   hden0_clone643->SetPassedEvents(11,7933);
   hden0_clone643->SetTotalEvents(12,8424);
   hden0_clone643->SetPassedEvents(12,8201);
   hden0_clone643->SetTotalEvents(13,8314);
   hden0_clone643->SetPassedEvents(13,8043);
   hden0_clone643->SetTotalEvents(14,8306);
   hden0_clone643->SetPassedEvents(14,8039);
   hden0_clone643->SetTotalEvents(15,8340);
   hden0_clone643->SetPassedEvents(15,7920);
   hden0_clone643->SetTotalEvents(16,0);
   hden0_clone643->SetPassedEvents(16,0);
   hden0_clone643->SetTotalEvents(17,0);
   hden0_clone643->SetPassedEvents(17,0);
   hden0_clone643->SetTotalEvents(18,0);
   hden0_clone643->SetPassedEvents(18,0);
   hden0_clone643->SetTotalEvents(19,0);
   hden0_clone643->SetPassedEvents(19,0);
   hden0_clone643->SetTotalEvents(20,0);
   hden0_clone643->SetPassedEvents(20,0);
   hden0_clone643->SetTotalEvents(21,0);
   hden0_clone643->SetPassedEvents(21,0);
   hden0_clone643->SetTotalEvents(22,0);
   hden0_clone643->SetPassedEvents(22,0);
   hden0_clone643->SetTotalEvents(23,0);
   hden0_clone643->SetPassedEvents(23,0);
   hden0_clone643->SetTotalEvents(24,0);
   hden0_clone643->SetPassedEvents(24,0);
   hden0_clone643->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone643->SetLineColor(ci);
   hden0_clone643->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone643->SetMarkerColor(ci);
   hden0_clone643->SetMarkerStyle(25);
   hden0_clone643->Draw("samepz");
   Double_t xAxis644[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt15fraction89vseta644 = new TEfficiency("hybrideta16to21pt15fraction89vseta","",23,xAxis644);
   
   hybrideta16to21pt15fraction89vseta644->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt15fraction89vseta644->SetBetaAlpha(1);
   hybrideta16to21pt15fraction89vseta644->SetBetaBeta(1);
   hybrideta16to21pt15fraction89vseta644->SetWeight(1);
   hybrideta16to21pt15fraction89vseta644->SetStatisticOption(0);
   hybrideta16to21pt15fraction89vseta644->SetPosteriorMode(0);
   hybrideta16to21pt15fraction89vseta644->SetShortestInterval(0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(0,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(0,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(1,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(1,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(2,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(2,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(3,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(3,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(4,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(4,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(5,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(5,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(6,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(6,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(7,5956);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(7,5546);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(8,5618);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(8,5148);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(9,5822);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(9,5264);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(10,5806);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(10,5308);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(11,5480);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(11,5016);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(12,5760);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(12,5241);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(13,5706);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(13,5154);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(14,5658);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(14,5124);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(15,5722);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(15,5068);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(16,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(16,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(17,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(17,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(18,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(18,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(19,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(19,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(20,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(20,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(21,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(21,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(22,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(22,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(23,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(23,0);
   hybrideta16to21pt15fraction89vseta644->SetTotalEvents(24,0);
   hybrideta16to21pt15fraction89vseta644->SetPassedEvents(24,0);
   hybrideta16to21pt15fraction89vseta644->SetFillColor(19);
   hybrideta16to21pt15fraction89vseta644->SetLineWidth(2);
   hybrideta16to21pt15fraction89vseta644->SetMarkerStyle(21);
   hybrideta16to21pt15fraction89vseta644->Draw("samepz");
   Double_t xAxis645[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt15fraction89vseta645 = new TEfficiency("GE11eta16to21pt15fraction89vseta","",23,xAxis645);
   
   GE11eta16to21pt15fraction89vseta645->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt15fraction89vseta645->SetBetaAlpha(1);
   GE11eta16to21pt15fraction89vseta645->SetBetaBeta(1);
   GE11eta16to21pt15fraction89vseta645->SetWeight(1);
   GE11eta16to21pt15fraction89vseta645->SetStatisticOption(0);
   GE11eta16to21pt15fraction89vseta645->SetPosteriorMode(0);
   GE11eta16to21pt15fraction89vseta645->SetShortestInterval(0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(0,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(0,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(1,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(1,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(2,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(2,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(3,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(3,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(4,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(4,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(5,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(5,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(6,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(6,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(7,8694);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(7,7994);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(8,8460);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(8,7516);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(9,8390);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(9,7586);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(10,8546);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(10,7752);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(11,8168);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(11,7534);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(12,8424);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(12,7645);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(13,8314);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(13,7493);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(14,8306);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(14,7535);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(15,8340);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(15,7317);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(16,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(16,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(17,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(17,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(18,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(18,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(19,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(19,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(20,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(20,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(21,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(21,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(22,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(22,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(23,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(23,0);
   GE11eta16to21pt15fraction89vseta645->SetTotalEvents(24,0);
   GE11eta16to21pt15fraction89vseta645->SetPassedEvents(24,0);
   GE11eta16to21pt15fraction89vseta645->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction89vseta645->SetLineColor(ci);
   GE11eta16to21pt15fraction89vseta645->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt15fraction89vseta645->SetMarkerColor(ci);
   GE11eta16to21pt15fraction89vseta645->SetMarkerStyle(20);
   GE11eta16to21pt15fraction89vseta645->Draw("samepz");
   
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
   entry=leg->AddEntry("hybrideta16to21pt15fraction89vseta","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt15fraction89vseta","CSC+GE11: hits in ME11, p_{T}^{L1}>=15 GeV (Standalone L1Mu)","pl");

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
