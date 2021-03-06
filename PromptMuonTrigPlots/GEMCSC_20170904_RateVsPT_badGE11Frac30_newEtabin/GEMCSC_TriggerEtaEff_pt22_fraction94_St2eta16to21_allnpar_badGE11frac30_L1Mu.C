void GEMCSC_TriggerEtaEff_pt22_fraction94_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:37:09 2017) by ROOT version6.08/06
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
   Double_t xAxis720[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__690 = new TH1F("b1__690"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis720);
   b1__690->SetMinimum(0.6);
   b1__690->SetMaximum(1.05);
   b1__690->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__690->SetLineColor(ci);
   b1__690->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__690->GetXaxis()->SetLabelFont(42);
   b1__690->GetXaxis()->SetLabelSize(0.05);
   b1__690->GetXaxis()->SetTitleSize(0.05);
   b1__690->GetXaxis()->SetTitleFont(42);
   b1__690->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__690->GetYaxis()->SetNdivisions(520);
   b1__690->GetYaxis()->SetLabelFont(42);
   b1__690->GetYaxis()->SetLabelSize(0.05);
   b1__690->GetYaxis()->SetTitleSize(0.05);
   b1__690->GetYaxis()->SetTitleOffset(1.1);
   b1__690->GetYaxis()->SetTitleFont(42);
   b1__690->GetZaxis()->SetLabelFont(42);
   b1__690->GetZaxis()->SetLabelSize(0.035);
   b1__690->GetZaxis()->SetTitleSize(0.035);
   b1__690->GetZaxis()->SetTitleFont(42);
   b1__690->Draw("");
   Double_t xAxis1287[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone1287 = new TEfficiency("hden1_clone","",23,xAxis1287);
   
   hden1_clone1287->SetConfidenceLevel(0.6826895);
   hden1_clone1287->SetBetaAlpha(1);
   hden1_clone1287->SetBetaBeta(1);
   hden1_clone1287->SetWeight(1);
   hden1_clone1287->SetStatisticOption(0);
   hden1_clone1287->SetPosteriorMode(0);
   hden1_clone1287->SetShortestInterval(0);
   hden1_clone1287->SetTotalEvents(0,0);
   hden1_clone1287->SetPassedEvents(0,0);
   hden1_clone1287->SetTotalEvents(1,0);
   hden1_clone1287->SetPassedEvents(1,0);
   hden1_clone1287->SetTotalEvents(2,0);
   hden1_clone1287->SetPassedEvents(2,0);
   hden1_clone1287->SetTotalEvents(3,0);
   hden1_clone1287->SetPassedEvents(3,0);
   hden1_clone1287->SetTotalEvents(4,0);
   hden1_clone1287->SetPassedEvents(4,0);
   hden1_clone1287->SetTotalEvents(5,0);
   hden1_clone1287->SetPassedEvents(5,0);
   hden1_clone1287->SetTotalEvents(6,0);
   hden1_clone1287->SetPassedEvents(6,0);
   hden1_clone1287->SetTotalEvents(7,4548);
   hden1_clone1287->SetPassedEvents(7,4510);
   hden1_clone1287->SetTotalEvents(8,4366);
   hden1_clone1287->SetPassedEvents(8,4309);
   hden1_clone1287->SetTotalEvents(9,4474);
   hden1_clone1287->SetPassedEvents(9,4371);
   hden1_clone1287->SetTotalEvents(10,4494);
   hden1_clone1287->SetPassedEvents(10,4414);
   hden1_clone1287->SetTotalEvents(11,4198);
   hden1_clone1287->SetPassedEvents(11,4130);
   hden1_clone1287->SetTotalEvents(12,4432);
   hden1_clone1287->SetPassedEvents(12,4364);
   hden1_clone1287->SetTotalEvents(13,4340);
   hden1_clone1287->SetPassedEvents(13,4262);
   hden1_clone1287->SetTotalEvents(14,4394);
   hden1_clone1287->SetPassedEvents(14,4333);
   hden1_clone1287->SetTotalEvents(15,4378);
   hden1_clone1287->SetPassedEvents(15,4287);
   hden1_clone1287->SetTotalEvents(16,0);
   hden1_clone1287->SetPassedEvents(16,0);
   hden1_clone1287->SetTotalEvents(17,0);
   hden1_clone1287->SetPassedEvents(17,0);
   hden1_clone1287->SetTotalEvents(18,0);
   hden1_clone1287->SetPassedEvents(18,0);
   hden1_clone1287->SetTotalEvents(19,0);
   hden1_clone1287->SetPassedEvents(19,0);
   hden1_clone1287->SetTotalEvents(20,0);
   hden1_clone1287->SetPassedEvents(20,0);
   hden1_clone1287->SetTotalEvents(21,0);
   hden1_clone1287->SetPassedEvents(21,0);
   hden1_clone1287->SetTotalEvents(22,0);
   hden1_clone1287->SetPassedEvents(22,0);
   hden1_clone1287->SetTotalEvents(23,0);
   hden1_clone1287->SetPassedEvents(23,0);
   hden1_clone1287->SetTotalEvents(24,0);
   hden1_clone1287->SetPassedEvents(24,0);
   hden1_clone1287->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone1287->SetLineColor(ci);
   hden1_clone1287->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone1287->SetMarkerColor(ci);
   hden1_clone1287->SetMarkerStyle(26);
   hden1_clone1287->Draw("samepz");
   Double_t xAxis1288[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone1288 = new TEfficiency("hden0_clone","",23,xAxis1288);
   
   hden0_clone1288->SetConfidenceLevel(0.6826895);
   hden0_clone1288->SetBetaAlpha(1);
   hden0_clone1288->SetBetaBeta(1);
   hden0_clone1288->SetWeight(1);
   hden0_clone1288->SetStatisticOption(0);
   hden0_clone1288->SetPosteriorMode(0);
   hden0_clone1288->SetShortestInterval(0);
   hden0_clone1288->SetTotalEvents(0,0);
   hden0_clone1288->SetPassedEvents(0,0);
   hden0_clone1288->SetTotalEvents(1,0);
   hden0_clone1288->SetPassedEvents(1,0);
   hden0_clone1288->SetTotalEvents(2,0);
   hden0_clone1288->SetPassedEvents(2,0);
   hden0_clone1288->SetTotalEvents(3,0);
   hden0_clone1288->SetPassedEvents(3,0);
   hden0_clone1288->SetTotalEvents(4,0);
   hden0_clone1288->SetPassedEvents(4,0);
   hden0_clone1288->SetTotalEvents(5,0);
   hden0_clone1288->SetPassedEvents(5,0);
   hden0_clone1288->SetTotalEvents(6,0);
   hden0_clone1288->SetPassedEvents(6,0);
   hden0_clone1288->SetTotalEvents(7,6710);
   hden0_clone1288->SetPassedEvents(7,6633);
   hden0_clone1288->SetTotalEvents(8,6562);
   hden0_clone1288->SetPassedEvents(8,6383);
   hden0_clone1288->SetTotalEvents(9,6498);
   hden0_clone1288->SetPassedEvents(9,6239);
   hden0_clone1288->SetTotalEvents(10,6568);
   hden0_clone1288->SetPassedEvents(10,6349);
   hden0_clone1288->SetTotalEvents(11,6242);
   hden0_clone1288->SetPassedEvents(11,6063);
   hden0_clone1288->SetTotalEvents(12,6466);
   hden0_clone1288->SetPassedEvents(12,6292);
   hden0_clone1288->SetTotalEvents(13,6310);
   hden0_clone1288->SetPassedEvents(13,6107);
   hden0_clone1288->SetTotalEvents(14,6438);
   hden0_clone1288->SetPassedEvents(14,6220);
   hden0_clone1288->SetTotalEvents(15,6434);
   hden0_clone1288->SetPassedEvents(15,6116);
   hden0_clone1288->SetTotalEvents(16,0);
   hden0_clone1288->SetPassedEvents(16,0);
   hden0_clone1288->SetTotalEvents(17,0);
   hden0_clone1288->SetPassedEvents(17,0);
   hden0_clone1288->SetTotalEvents(18,0);
   hden0_clone1288->SetPassedEvents(18,0);
   hden0_clone1288->SetTotalEvents(19,0);
   hden0_clone1288->SetPassedEvents(19,0);
   hden0_clone1288->SetTotalEvents(20,0);
   hden0_clone1288->SetPassedEvents(20,0);
   hden0_clone1288->SetTotalEvents(21,0);
   hden0_clone1288->SetPassedEvents(21,0);
   hden0_clone1288->SetTotalEvents(22,0);
   hden0_clone1288->SetPassedEvents(22,0);
   hden0_clone1288->SetTotalEvents(23,0);
   hden0_clone1288->SetPassedEvents(23,0);
   hden0_clone1288->SetTotalEvents(24,0);
   hden0_clone1288->SetPassedEvents(24,0);
   hden0_clone1288->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone1288->SetLineColor(ci);
   hden0_clone1288->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone1288->SetMarkerColor(ci);
   hden0_clone1288->SetMarkerStyle(25);
   hden0_clone1288->Draw("samepz");
   Double_t xAxis1289[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt22fraction94vseta1289 = new TEfficiency("hybrideta16to21pt22fraction94vseta","",23,xAxis1289);
   
   hybrideta16to21pt22fraction94vseta1289->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt22fraction94vseta1289->SetBetaAlpha(1);
   hybrideta16to21pt22fraction94vseta1289->SetBetaBeta(1);
   hybrideta16to21pt22fraction94vseta1289->SetWeight(1);
   hybrideta16to21pt22fraction94vseta1289->SetStatisticOption(0);
   hybrideta16to21pt22fraction94vseta1289->SetPosteriorMode(0);
   hybrideta16to21pt22fraction94vseta1289->SetShortestInterval(0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(0,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(0,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(1,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(1,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(2,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(2,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(3,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(3,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(4,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(4,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(5,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(5,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(6,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(6,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(7,4548);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(7,4244);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(8,4366);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(8,3983);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(9,4474);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(9,4030);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(10,4494);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(10,4125);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(11,4198);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(11,3872);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(12,4432);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(12,4052);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(13,4340);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(13,3936);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(14,4394);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(14,4008);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(15,4378);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(15,3879);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(16,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(16,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(17,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(17,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(18,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(18,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(19,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(19,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(20,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(20,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(21,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(21,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(22,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(22,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(23,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(23,0);
   hybrideta16to21pt22fraction94vseta1289->SetTotalEvents(24,0);
   hybrideta16to21pt22fraction94vseta1289->SetPassedEvents(24,0);
   hybrideta16to21pt22fraction94vseta1289->SetFillColor(19);
   hybrideta16to21pt22fraction94vseta1289->SetLineWidth(2);
   hybrideta16to21pt22fraction94vseta1289->SetMarkerStyle(21);
   hybrideta16to21pt22fraction94vseta1289->Draw("samepz");
   Double_t xAxis1290[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt22fraction94vseta1290 = new TEfficiency("GE11eta16to21pt22fraction94vseta","",23,xAxis1290);
   
   GE11eta16to21pt22fraction94vseta1290->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt22fraction94vseta1290->SetBetaAlpha(1);
   GE11eta16to21pt22fraction94vseta1290->SetBetaBeta(1);
   GE11eta16to21pt22fraction94vseta1290->SetWeight(1);
   GE11eta16to21pt22fraction94vseta1290->SetStatisticOption(0);
   GE11eta16to21pt22fraction94vseta1290->SetPosteriorMode(0);
   GE11eta16to21pt22fraction94vseta1290->SetShortestInterval(0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(0,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(0,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(1,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(1,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(2,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(2,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(3,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(3,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(4,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(4,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(5,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(5,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(6,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(6,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(7,6710);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(7,6038);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(8,6562);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(8,5583);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(9,6498);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(9,5693);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(10,6568);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(10,5817);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(11,6242);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(11,5631);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(12,6466);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(12,5741);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(13,6310);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(13,5581);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(14,6438);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(14,5696);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(15,6434);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(15,5526);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(16,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(16,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(17,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(17,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(18,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(18,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(19,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(19,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(20,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(20,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(21,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(21,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(22,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(22,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(23,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(23,0);
   GE11eta16to21pt22fraction94vseta1290->SetTotalEvents(24,0);
   GE11eta16to21pt22fraction94vseta1290->SetPassedEvents(24,0);
   GE11eta16to21pt22fraction94vseta1290->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt22fraction94vseta1290->SetLineColor(ci);
   GE11eta16to21pt22fraction94vseta1290->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt22fraction94vseta1290->SetMarkerColor(ci);
   GE11eta16to21pt22fraction94vseta1290->SetMarkerStyle(20);
   GE11eta16to21pt22fraction94vseta1290->Draw("samepz");
   
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
   entry=leg->AddEntry("hybrideta16to21pt22fraction94vseta","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=22 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt22fraction94vseta","CSC+GE11: hits in ME11, p_{T}^{L1}>=22 GeV (Standalone L1Mu)","pl");

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
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>27 GeV");
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
