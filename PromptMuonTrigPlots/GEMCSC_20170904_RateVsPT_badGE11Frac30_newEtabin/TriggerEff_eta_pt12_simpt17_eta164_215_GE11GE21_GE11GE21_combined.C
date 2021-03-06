void TriggerEff_eta_pt12_simpt17_eta164_215_GE11GE21_GE11GE21_combined()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:33:35 2017) by ROOT version6.08/06
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
   Double_t xAxis380[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__364 = new TH1F("b1__364"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis380);
   b1__364->SetMinimum(0.6);
   b1__364->SetMaximum(1.05);
   b1__364->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__364->SetLineColor(ci);
   b1__364->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__364->GetXaxis()->SetLabelFont(42);
   b1__364->GetXaxis()->SetLabelSize(0.05);
   b1__364->GetXaxis()->SetTitleSize(0.05);
   b1__364->GetXaxis()->SetTitleFont(42);
   b1__364->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__364->GetYaxis()->SetNdivisions(520);
   b1__364->GetYaxis()->SetLabelFont(42);
   b1__364->GetYaxis()->SetLabelSize(0.05);
   b1__364->GetYaxis()->SetTitleSize(0.05);
   b1__364->GetYaxis()->SetTitleOffset(1.1);
   b1__364->GetYaxis()->SetTitleFont(42);
   b1__364->GetZaxis()->SetLabelFont(42);
   b1__364->GetZaxis()->SetLabelSize(0.035);
   b1__364->GetZaxis()->SetTitleSize(0.035);
   b1__364->GetZaxis()->SetTitleFont(42);
   b1__364->Draw("");
   Double_t xAxis671[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt12fraction94vseta671 = new TEfficiency("GE11eta16to21pt12fraction94vseta","",23,xAxis671);
   
   GE11eta16to21pt12fraction94vseta671->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt12fraction94vseta671->SetBetaAlpha(1);
   GE11eta16to21pt12fraction94vseta671->SetBetaBeta(1);
   GE11eta16to21pt12fraction94vseta671->SetWeight(1);
   GE11eta16to21pt12fraction94vseta671->SetStatisticOption(0);
   GE11eta16to21pt12fraction94vseta671->SetPosteriorMode(0);
   GE11eta16to21pt12fraction94vseta671->SetShortestInterval(0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(0,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(0,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(1,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(1,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(2,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(2,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(3,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(3,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(4,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(4,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(5,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(5,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(6,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(6,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(7,9542);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(7,8877);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(8,9376);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(8,8458);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(9,9184);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(9,8408);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(10,9344);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(10,8601);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(11,9052);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(11,8406);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(12,9274);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(12,8508);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(13,9076);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(13,8256);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(14,9084);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(14,8314);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(15,9166);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(15,8144);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(16,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(16,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(17,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(17,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(18,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(18,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(19,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(19,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(20,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(20,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(21,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(21,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(22,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(22,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(23,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(23,0);
   GE11eta16to21pt12fraction94vseta671->SetTotalEvents(24,0);
   GE11eta16to21pt12fraction94vseta671->SetPassedEvents(24,0);
   GE11eta16to21pt12fraction94vseta671->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt12fraction94vseta671->SetLineColor(ci);
   GE11eta16to21pt12fraction94vseta671->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt12fraction94vseta671->SetMarkerColor(ci);
   GE11eta16to21pt12fraction94vseta671->SetMarkerStyle(26);
   GE11eta16to21pt12fraction94vseta671->Draw("samepz");
   Double_t xAxis672[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt12fraction94vseta672 = new TEfficiency("hybrideta16to21pt12fraction94vseta","",23,xAxis672);
   
   hybrideta16to21pt12fraction94vseta672->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt12fraction94vseta672->SetBetaAlpha(1);
   hybrideta16to21pt12fraction94vseta672->SetBetaBeta(1);
   hybrideta16to21pt12fraction94vseta672->SetWeight(1);
   hybrideta16to21pt12fraction94vseta672->SetStatisticOption(0);
   hybrideta16to21pt12fraction94vseta672->SetPosteriorMode(0);
   hybrideta16to21pt12fraction94vseta672->SetShortestInterval(0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(0,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(0,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(1,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(1,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(2,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(2,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(3,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(3,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(4,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(4,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(5,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(5,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(6,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(6,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(7,6544);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(7,6194);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(8,6258);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(8,5865);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(9,6354);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(9,5867);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(10,6344);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(10,5886);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(11,6060);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(11,5658);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(12,6328);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(12,5858);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(13,6186);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(13,5701);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(14,6202);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(14,5707);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(15,6252);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(15,5633);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(16,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(16,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(17,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(17,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(18,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(18,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(19,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(19,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(20,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(20,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(21,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(21,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(22,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(22,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(23,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(23,0);
   hybrideta16to21pt12fraction94vseta672->SetTotalEvents(24,0);
   hybrideta16to21pt12fraction94vseta672->SetPassedEvents(24,0);
   hybrideta16to21pt12fraction94vseta672->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21pt12fraction94vseta672->SetLineColor(ci);
   hybrideta16to21pt12fraction94vseta672->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21pt12fraction94vseta672->SetMarkerColor(ci);
   hybrideta16to21pt12fraction94vseta672->SetMarkerStyle(25);
   hybrideta16to21pt12fraction94vseta672->Draw("samepz");
   Double_t xAxis673[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt12fraction94badGE11frac30vseta673 = new TEfficiency("GE11eta16to21pt12fraction94badGE11frac30vseta","",23,xAxis673);
   
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetBetaAlpha(1);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetBetaBeta(1);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetWeight(1);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetStatisticOption(0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPosteriorMode(0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetShortestInterval(0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(0,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(0,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(1,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(1,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(2,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(2,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(3,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(3,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(4,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(4,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(5,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(5,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(6,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(6,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(7,9542);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(7,8895);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(8,9376);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(8,8465);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(9,9184);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(9,8415);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(10,9344);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(10,8610);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(11,9052);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(11,8410);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(12,9274);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(12,8512);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(13,9076);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(13,8264);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(14,9084);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(14,8316);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(15,9166);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(15,8159);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(16,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(16,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(17,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(17,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(18,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(18,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(19,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(19,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(20,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(20,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(21,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(21,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(22,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(22,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(23,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(23,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetTotalEvents(24,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetPassedEvents(24,0);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetFillColor(19);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetLineWidth(2);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->SetMarkerStyle(21);
   GE11eta16to21pt12fraction94badGE11frac30vseta673->Draw("samepz");
   Double_t xAxis674[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt12fraction94badGE11frac30vseta674 = new TEfficiency("hybrideta16to21pt12fraction94badGE11frac30vseta","",23,xAxis674);
   
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetBetaAlpha(1);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetBetaBeta(1);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetWeight(1);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetStatisticOption(0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPosteriorMode(0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetShortestInterval(0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(0,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(0,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(1,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(1,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(2,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(2,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(3,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(3,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(4,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(4,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(5,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(5,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(6,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(6,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(7,6544);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(7,6159);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(8,6258);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(8,5830);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(9,6354);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(9,5827);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(10,6344);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(10,5838);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(11,6060);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(11,5630);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(12,6328);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(12,5825);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(13,6186);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(13,5672);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(14,6202);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(14,5599);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(15,6252);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(15,5518);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(16,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(16,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(17,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(17,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(18,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(18,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(19,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(19,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(20,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(20,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(21,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(21,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(22,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(22,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(23,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(23,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetTotalEvents(24,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetPassedEvents(24,0);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetLineColor(ci);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetMarkerColor(ci);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->SetMarkerStyle(20);
   hybrideta16to21pt12fraction94badGE11frac30vseta674->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt12fraction94vseta","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt12fraction94vseta","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt12fraction94badGE11frac30vseta","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt12fraction94badGE11frac30vseta","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>17 GeV");
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
