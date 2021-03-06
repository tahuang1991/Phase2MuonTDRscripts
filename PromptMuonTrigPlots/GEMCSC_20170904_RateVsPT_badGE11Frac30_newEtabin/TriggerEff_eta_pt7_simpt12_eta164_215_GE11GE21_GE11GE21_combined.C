void TriggerEff_eta_pt7_simpt12_eta164_215_GE11GE21_GE11GE21_combined()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:30:47 2017) by ROOT version6.08/06
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
   Double_t xAxis140[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__134 = new TH1F("b1__134"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis140);
   b1__134->SetMinimum(0.6);
   b1__134->SetMaximum(1.05);
   b1__134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__134->SetLineColor(ci);
   b1__134->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__134->GetXaxis()->SetLabelFont(42);
   b1__134->GetXaxis()->SetLabelSize(0.05);
   b1__134->GetXaxis()->SetTitleSize(0.05);
   b1__134->GetXaxis()->SetTitleFont(42);
   b1__134->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__134->GetYaxis()->SetNdivisions(520);
   b1__134->GetYaxis()->SetLabelFont(42);
   b1__134->GetYaxis()->SetLabelSize(0.05);
   b1__134->GetYaxis()->SetTitleSize(0.05);
   b1__134->GetYaxis()->SetTitleOffset(1.1);
   b1__134->GetYaxis()->SetTitleFont(42);
   b1__134->GetZaxis()->SetLabelFont(42);
   b1__134->GetZaxis()->SetLabelSize(0.035);
   b1__134->GetZaxis()->SetTitleSize(0.035);
   b1__134->GetZaxis()->SetTitleFont(42);
   b1__134->Draw("");
   Double_t xAxis241[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt7fraction94vseta241 = new TEfficiency("GE11eta16to21pt7fraction94vseta","",23,xAxis241);
   
   GE11eta16to21pt7fraction94vseta241->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt7fraction94vseta241->SetBetaAlpha(1);
   GE11eta16to21pt7fraction94vseta241->SetBetaBeta(1);
   GE11eta16to21pt7fraction94vseta241->SetWeight(1);
   GE11eta16to21pt7fraction94vseta241->SetStatisticOption(0);
   GE11eta16to21pt7fraction94vseta241->SetPosteriorMode(0);
   GE11eta16to21pt7fraction94vseta241->SetShortestInterval(0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(0,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(0,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(1,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(1,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(2,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(2,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(3,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(3,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(4,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(4,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(5,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(5,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(6,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(6,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(7,10936);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(7,10486);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(8,10694);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(8,10035);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(9,10578);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(9,9886);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(10,10698);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(10,10005);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(11,10486);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(11,9858);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(12,10618);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(12,9922);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(13,10488);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(13,9713);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(14,10476);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(14,9711);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(15,10576);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(15,9605);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(16,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(16,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(17,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(17,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(18,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(18,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(19,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(19,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(20,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(20,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(21,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(21,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(22,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(22,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(23,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(23,0);
   GE11eta16to21pt7fraction94vseta241->SetTotalEvents(24,0);
   GE11eta16to21pt7fraction94vseta241->SetPassedEvents(24,0);
   GE11eta16to21pt7fraction94vseta241->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt7fraction94vseta241->SetLineColor(ci);
   GE11eta16to21pt7fraction94vseta241->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   GE11eta16to21pt7fraction94vseta241->SetMarkerColor(ci);
   GE11eta16to21pt7fraction94vseta241->SetMarkerStyle(26);
   GE11eta16to21pt7fraction94vseta241->Draw("samepz");
   Double_t xAxis242[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt7fraction94vseta242 = new TEfficiency("hybrideta16to21pt7fraction94vseta","",23,xAxis242);
   
   hybrideta16to21pt7fraction94vseta242->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt7fraction94vseta242->SetBetaAlpha(1);
   hybrideta16to21pt7fraction94vseta242->SetBetaBeta(1);
   hybrideta16to21pt7fraction94vseta242->SetWeight(1);
   hybrideta16to21pt7fraction94vseta242->SetStatisticOption(0);
   hybrideta16to21pt7fraction94vseta242->SetPosteriorMode(0);
   hybrideta16to21pt7fraction94vseta242->SetShortestInterval(0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(0,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(0,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(1,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(1,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(2,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(2,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(3,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(3,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(4,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(4,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(5,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(5,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(6,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(6,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(7,7498);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(7,7290);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(8,7142);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(8,6872);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(9,7286);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(9,6931);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(10,7282);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(10,6934);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(11,7006);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(11,6707);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(12,7210);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(12,6844);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(13,7158);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(13,6760);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(14,7152);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(14,6764);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(15,7218);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(15,6711);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(16,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(16,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(17,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(17,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(18,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(18,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(19,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(19,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(20,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(20,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(21,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(21,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(22,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(22,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(23,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(23,0);
   hybrideta16to21pt7fraction94vseta242->SetTotalEvents(24,0);
   hybrideta16to21pt7fraction94vseta242->SetPassedEvents(24,0);
   hybrideta16to21pt7fraction94vseta242->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21pt7fraction94vseta242->SetLineColor(ci);
   hybrideta16to21pt7fraction94vseta242->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21pt7fraction94vseta242->SetMarkerColor(ci);
   hybrideta16to21pt7fraction94vseta242->SetMarkerStyle(25);
   hybrideta16to21pt7fraction94vseta242->Draw("samepz");
   Double_t xAxis243[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt7fraction94badGE11frac30vseta243 = new TEfficiency("GE11eta16to21pt7fraction94badGE11frac30vseta","",23,xAxis243);
   
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetBetaAlpha(1);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetBetaBeta(1);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetWeight(1);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetStatisticOption(0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPosteriorMode(0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetShortestInterval(0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(0,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(0,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(1,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(1,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(2,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(2,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(3,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(3,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(4,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(4,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(5,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(5,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(6,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(6,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(7,10936);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(7,10490);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(8,10694);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(8,10039);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(9,10578);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(9,9889);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(10,10698);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(10,10011);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(11,10486);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(11,9860);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(12,10618);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(12,9924);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(13,10488);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(13,9718);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(14,10476);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(14,9713);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(15,10576);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(15,9611);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(16,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(16,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(17,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(17,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(18,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(18,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(19,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(19,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(20,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(20,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(21,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(21,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(22,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(22,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(23,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(23,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetTotalEvents(24,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetPassedEvents(24,0);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetFillColor(19);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetLineWidth(2);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->SetMarkerStyle(21);
   GE11eta16to21pt7fraction94badGE11frac30vseta243->Draw("samepz");
   Double_t xAxis244[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt7fraction94badGE11frac30vseta244 = new TEfficiency("hybrideta16to21pt7fraction94badGE11frac30vseta","",23,xAxis244);
   
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetBetaAlpha(1);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetBetaBeta(1);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetWeight(1);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetStatisticOption(0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPosteriorMode(0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetShortestInterval(0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(0,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(0,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(1,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(1,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(2,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(2,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(3,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(3,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(4,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(4,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(5,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(5,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(6,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(6,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(7,7498);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(7,7251);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(8,7142);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(8,6853);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(9,7286);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(9,6889);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(10,7282);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(10,6890);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(11,7006);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(11,6669);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(12,7210);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(12,6816);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(13,7158);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(13,6746);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(14,7152);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(14,6637);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(15,7218);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(15,6578);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(16,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(16,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(17,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(17,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(18,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(18,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(19,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(19,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(20,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(20,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(21,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(21,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(22,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(22,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(23,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(23,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetTotalEvents(24,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetPassedEvents(24,0);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetLineColor(ci);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetMarkerColor(ci);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->SetMarkerStyle(20);
   hybrideta16to21pt7fraction94badGE11frac30vseta244->Draw("samepz");
   
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
   entry=leg->AddEntry("GE11eta16to21pt7fraction94vseta","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt7fraction94vseta","Combined cut with YE11 and YE21 bending","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt7fraction94badGE11frac30vseta","YE11 bending angle cut+20% CSC aging","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21pt7fraction94badGE11frac30vseta","#splitline{Combined cut with YE11 and YE21 bending}{+20% CSC aging}","pl");

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
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>12 GeV");
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
