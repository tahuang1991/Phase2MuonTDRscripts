void GEMCSC_TriggerEtaEff_pt13_fraction94_St2eta16to21_allnpar_badGE11frac30_L1Mu()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:34:05 2017) by ROOT version6.08/06
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
   Double_t xAxis432[11] = {1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25, 2.35, 2.45, 2.55}; 
   
   TH1F *b1__414 = new TH1F("b1__414"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis432);
   b1__414->SetMinimum(0.6);
   b1__414->SetMaximum(1.05);
   b1__414->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__414->SetLineColor(ci);
   b1__414->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__414->GetXaxis()->SetLabelFont(42);
   b1__414->GetXaxis()->SetLabelSize(0.05);
   b1__414->GetXaxis()->SetTitleSize(0.05);
   b1__414->GetXaxis()->SetTitleFont(42);
   b1__414->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__414->GetYaxis()->SetNdivisions(520);
   b1__414->GetYaxis()->SetLabelFont(42);
   b1__414->GetYaxis()->SetLabelSize(0.05);
   b1__414->GetYaxis()->SetTitleSize(0.05);
   b1__414->GetYaxis()->SetTitleOffset(1.1);
   b1__414->GetYaxis()->SetTitleFont(42);
   b1__414->GetZaxis()->SetLabelFont(42);
   b1__414->GetZaxis()->SetLabelSize(0.035);
   b1__414->GetZaxis()->SetTitleSize(0.035);
   b1__414->GetZaxis()->SetTitleFont(42);
   b1__414->Draw("");
   Double_t xAxis771[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone771 = new TEfficiency("hden1_clone","",23,xAxis771);
   
   hden1_clone771->SetConfidenceLevel(0.6826895);
   hden1_clone771->SetBetaAlpha(1);
   hden1_clone771->SetBetaBeta(1);
   hden1_clone771->SetWeight(1);
   hden1_clone771->SetStatisticOption(0);
   hden1_clone771->SetPosteriorMode(0);
   hden1_clone771->SetShortestInterval(0);
   hden1_clone771->SetTotalEvents(0,0);
   hden1_clone771->SetPassedEvents(0,0);
   hden1_clone771->SetTotalEvents(1,0);
   hden1_clone771->SetPassedEvents(1,0);
   hden1_clone771->SetTotalEvents(2,0);
   hden1_clone771->SetPassedEvents(2,0);
   hden1_clone771->SetTotalEvents(3,0);
   hden1_clone771->SetPassedEvents(3,0);
   hden1_clone771->SetTotalEvents(4,0);
   hden1_clone771->SetPassedEvents(4,0);
   hden1_clone771->SetTotalEvents(5,0);
   hden1_clone771->SetPassedEvents(5,0);
   hden1_clone771->SetTotalEvents(6,0);
   hden1_clone771->SetPassedEvents(6,0);
   hden1_clone771->SetTotalEvents(7,6348);
   hden1_clone771->SetPassedEvents(7,6302);
   hden1_clone771->SetTotalEvents(8,6016);
   hden1_clone771->SetPassedEvents(8,5935);
   hden1_clone771->SetTotalEvents(9,6144);
   hden1_clone771->SetPassedEvents(9,5996);
   hden1_clone771->SetTotalEvents(10,6184);
   hden1_clone771->SetPassedEvents(10,6065);
   hden1_clone771->SetTotalEvents(11,5860);
   hden1_clone771->SetPassedEvents(11,5767);
   hden1_clone771->SetTotalEvents(12,6146);
   hden1_clone771->SetPassedEvents(12,6050);
   hden1_clone771->SetTotalEvents(13,6034);
   hden1_clone771->SetPassedEvents(13,5928);
   hden1_clone771->SetTotalEvents(14,6036);
   hden1_clone771->SetPassedEvents(14,5946);
   hden1_clone771->SetTotalEvents(15,6086);
   hden1_clone771->SetPassedEvents(15,5968);
   hden1_clone771->SetTotalEvents(16,0);
   hden1_clone771->SetPassedEvents(16,0);
   hden1_clone771->SetTotalEvents(17,0);
   hden1_clone771->SetPassedEvents(17,0);
   hden1_clone771->SetTotalEvents(18,0);
   hden1_clone771->SetPassedEvents(18,0);
   hden1_clone771->SetTotalEvents(19,0);
   hden1_clone771->SetPassedEvents(19,0);
   hden1_clone771->SetTotalEvents(20,0);
   hden1_clone771->SetPassedEvents(20,0);
   hden1_clone771->SetTotalEvents(21,0);
   hden1_clone771->SetPassedEvents(21,0);
   hden1_clone771->SetTotalEvents(22,0);
   hden1_clone771->SetPassedEvents(22,0);
   hden1_clone771->SetTotalEvents(23,0);
   hden1_clone771->SetPassedEvents(23,0);
   hden1_clone771->SetTotalEvents(24,0);
   hden1_clone771->SetPassedEvents(24,0);
   hden1_clone771->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden1_clone771->SetLineColor(ci);
   hden1_clone771->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden1_clone771->SetMarkerColor(ci);
   hden1_clone771->SetMarkerStyle(26);
   hden1_clone771->Draw("samepz");
   Double_t xAxis772[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone772 = new TEfficiency("hden0_clone","",23,xAxis772);
   
   hden0_clone772->SetConfidenceLevel(0.6826895);
   hden0_clone772->SetBetaAlpha(1);
   hden0_clone772->SetBetaBeta(1);
   hden0_clone772->SetWeight(1);
   hden0_clone772->SetStatisticOption(0);
   hden0_clone772->SetPosteriorMode(0);
   hden0_clone772->SetShortestInterval(0);
   hden0_clone772->SetTotalEvents(0,0);
   hden0_clone772->SetPassedEvents(0,0);
   hden0_clone772->SetTotalEvents(1,0);
   hden0_clone772->SetPassedEvents(1,0);
   hden0_clone772->SetTotalEvents(2,0);
   hden0_clone772->SetPassedEvents(2,0);
   hden0_clone772->SetTotalEvents(3,0);
   hden0_clone772->SetPassedEvents(3,0);
   hden0_clone772->SetTotalEvents(4,0);
   hden0_clone772->SetPassedEvents(4,0);
   hden0_clone772->SetTotalEvents(5,0);
   hden0_clone772->SetPassedEvents(5,0);
   hden0_clone772->SetTotalEvents(6,0);
   hden0_clone772->SetPassedEvents(6,0);
   hden0_clone772->SetTotalEvents(7,9278);
   hden0_clone772->SetPassedEvents(7,9165);
   hden0_clone772->SetTotalEvents(8,9038);
   hden0_clone772->SetPassedEvents(8,8801);
   hden0_clone772->SetTotalEvents(9,8892);
   hden0_clone772->SetPassedEvents(9,8523);
   hden0_clone772->SetTotalEvents(10,9082);
   hden0_clone772->SetPassedEvents(10,8786);
   hden0_clone772->SetTotalEvents(11,8748);
   hden0_clone772->SetPassedEvents(11,8492);
   hden0_clone772->SetTotalEvents(12,8986);
   hden0_clone772->SetPassedEvents(12,8749);
   hden0_clone772->SetTotalEvents(13,8836);
   hden0_clone772->SetPassedEvents(13,8546);
   hden0_clone772->SetTotalEvents(14,8846);
   hden0_clone772->SetPassedEvents(14,8566);
   hden0_clone772->SetTotalEvents(15,8902);
   hden0_clone772->SetPassedEvents(15,8453);
   hden0_clone772->SetTotalEvents(16,0);
   hden0_clone772->SetPassedEvents(16,0);
   hden0_clone772->SetTotalEvents(17,0);
   hden0_clone772->SetPassedEvents(17,0);
   hden0_clone772->SetTotalEvents(18,0);
   hden0_clone772->SetPassedEvents(18,0);
   hden0_clone772->SetTotalEvents(19,0);
   hden0_clone772->SetPassedEvents(19,0);
   hden0_clone772->SetTotalEvents(20,0);
   hden0_clone772->SetPassedEvents(20,0);
   hden0_clone772->SetTotalEvents(21,0);
   hden0_clone772->SetPassedEvents(21,0);
   hden0_clone772->SetTotalEvents(22,0);
   hden0_clone772->SetPassedEvents(22,0);
   hden0_clone772->SetTotalEvents(23,0);
   hden0_clone772->SetPassedEvents(23,0);
   hden0_clone772->SetTotalEvents(24,0);
   hden0_clone772->SetPassedEvents(24,0);
   hden0_clone772->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone772->SetLineColor(ci);
   hden0_clone772->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone772->SetMarkerColor(ci);
   hden0_clone772->SetMarkerStyle(25);
   hden0_clone772->Draw("samepz");
   Double_t xAxis773[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hybrideta16to21pt13fraction94vseta773 = new TEfficiency("hybrideta16to21pt13fraction94vseta","",23,xAxis773);
   
   hybrideta16to21pt13fraction94vseta773->SetConfidenceLevel(0.6826895);
   hybrideta16to21pt13fraction94vseta773->SetBetaAlpha(1);
   hybrideta16to21pt13fraction94vseta773->SetBetaBeta(1);
   hybrideta16to21pt13fraction94vseta773->SetWeight(1);
   hybrideta16to21pt13fraction94vseta773->SetStatisticOption(0);
   hybrideta16to21pt13fraction94vseta773->SetPosteriorMode(0);
   hybrideta16to21pt13fraction94vseta773->SetShortestInterval(0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(0,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(0,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(1,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(1,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(2,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(2,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(3,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(3,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(4,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(4,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(5,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(5,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(6,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(6,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(7,6348);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(7,5976);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(8,6016);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(8,5612);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(9,6144);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(9,5625);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(10,6184);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(10,5695);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(11,5860);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(11,5437);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(12,6146);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(12,5659);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(13,6034);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(13,5526);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(14,6036);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(14,5515);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(15,6086);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(15,5446);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(16,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(16,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(17,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(17,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(18,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(18,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(19,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(19,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(20,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(20,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(21,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(21,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(22,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(22,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(23,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(23,0);
   hybrideta16to21pt13fraction94vseta773->SetTotalEvents(24,0);
   hybrideta16to21pt13fraction94vseta773->SetPassedEvents(24,0);
   hybrideta16to21pt13fraction94vseta773->SetFillColor(19);
   hybrideta16to21pt13fraction94vseta773->SetLineWidth(2);
   hybrideta16to21pt13fraction94vseta773->SetMarkerStyle(21);
   hybrideta16to21pt13fraction94vseta773->Draw("samepz");
   Double_t xAxis774[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * GE11eta16to21pt13fraction94vseta774 = new TEfficiency("GE11eta16to21pt13fraction94vseta","",23,xAxis774);
   
   GE11eta16to21pt13fraction94vseta774->SetConfidenceLevel(0.6826895);
   GE11eta16to21pt13fraction94vseta774->SetBetaAlpha(1);
   GE11eta16to21pt13fraction94vseta774->SetBetaBeta(1);
   GE11eta16to21pt13fraction94vseta774->SetWeight(1);
   GE11eta16to21pt13fraction94vseta774->SetStatisticOption(0);
   GE11eta16to21pt13fraction94vseta774->SetPosteriorMode(0);
   GE11eta16to21pt13fraction94vseta774->SetShortestInterval(0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(0,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(0,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(1,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(1,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(2,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(2,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(3,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(3,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(4,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(4,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(5,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(5,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(6,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(6,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(7,9278);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(7,8615);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(8,9038);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(8,8123);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(9,8892);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(9,8116);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(10,9082);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(10,8315);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(11,8748);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(11,8108);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(12,8986);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(12,8221);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(13,8836);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(13,8029);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(14,8846);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(14,8077);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(15,8902);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(15,7892);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(16,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(16,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(17,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(17,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(18,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(18,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(19,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(19,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(20,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(20,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(21,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(21,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(22,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(22,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(23,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(23,0);
   GE11eta16to21pt13fraction94vseta774->SetTotalEvents(24,0);
   GE11eta16to21pt13fraction94vseta774->SetPassedEvents(24,0);
   GE11eta16to21pt13fraction94vseta774->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt13fraction94vseta774->SetLineColor(ci);
   GE11eta16to21pt13fraction94vseta774->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   GE11eta16to21pt13fraction94vseta774->SetMarkerColor(ci);
   GE11eta16to21pt13fraction94vseta774->SetMarkerStyle(20);
   GE11eta16to21pt13fraction94vseta774->Draw("samepz");
   
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
   entry=leg->AddEntry("hybrideta16to21pt13fraction94vseta","CSC+GE11+GE21: hits in ME11, p_{T}^{L1}>=13 GeV (Standalone L1Mu)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GE11eta16to21pt13fraction94vseta","CSC+GE11: hits in ME11, p_{T}^{L1}>=13 GeV (Standalone L1Mu)","pl");

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
   TLatex *   tex = new TLatex(0.15,0.88,"p_{T}^{sim}>18 GeV");
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
