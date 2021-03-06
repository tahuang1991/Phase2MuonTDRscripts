void GEMCSC_dxy10_50_combined_effvseta_20170131_pt10_fraction96_st2eta18to20_npar0()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Nov 26 19:36:50 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(-0.4069768,-0.1685185,2.822997,1.127778);
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
   
   TH1F *b1__19 = new TH1F("b1__19"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,2.5);
   b1__19->SetMinimum(0);
   b1__19->SetMaximum(1.05);
   b1__19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__19->SetLineColor(ci);
   b1__19->GetXaxis()->SetTitle("Trigger efficiency");
   b1__19->GetXaxis()->SetLabelFont(42);
   b1__19->GetXaxis()->SetLabelSize(0.05);
   b1__19->GetXaxis()->SetTitleSize(0.05);
   b1__19->GetXaxis()->SetTitleFont(42);
   b1__19->GetYaxis()->SetTitle("|#eta| at 2nd CSC station");
   b1__19->GetYaxis()->SetNdivisions(520);
   b1__19->GetYaxis()->SetLabelFont(42);
   b1__19->GetYaxis()->SetLabelSize(0.05);
   b1__19->GetYaxis()->SetTitleSize(0.05);
   b1__19->GetYaxis()->SetTitleOffset(1.1);
   b1__19->GetYaxis()->SetTitleFont(42);
   b1__19->GetZaxis()->SetLabelFont(42);
   b1__19->GetZaxis()->SetLabelSize(0.035);
   b1__19->GetZaxis()->SetTitleSize(0.035);
   b1__19->GetZaxis()->SetTitleFont(42);
   b1__19->Draw("");
   
   TEfficiency * hden0_clone55 = new TEfficiency("hden0_clone","",50,0,2.5);
   
   hden0_clone55->SetConfidenceLevel(0.6826895);
   hden0_clone55->SetBetaAlpha(1);
   hden0_clone55->SetBetaBeta(1);
   hden0_clone55->SetWeight(1);
   hden0_clone55->SetStatisticOption(0);
   hden0_clone55->SetPosteriorMode(0);
   hden0_clone55->SetShortestInterval(0);
   hden0_clone55->SetTotalEvents(0,0);
   hden0_clone55->SetPassedEvents(0,0);
   hden0_clone55->SetTotalEvents(1,0);
   hden0_clone55->SetPassedEvents(1,0);
   hden0_clone55->SetTotalEvents(2,0);
   hden0_clone55->SetPassedEvents(2,0);
   hden0_clone55->SetTotalEvents(3,0);
   hden0_clone55->SetPassedEvents(3,0);
   hden0_clone55->SetTotalEvents(4,0);
   hden0_clone55->SetPassedEvents(4,0);
   hden0_clone55->SetTotalEvents(5,0);
   hden0_clone55->SetPassedEvents(5,0);
   hden0_clone55->SetTotalEvents(6,0);
   hden0_clone55->SetPassedEvents(6,0);
   hden0_clone55->SetTotalEvents(7,0);
   hden0_clone55->SetPassedEvents(7,0);
   hden0_clone55->SetTotalEvents(8,0);
   hden0_clone55->SetPassedEvents(8,0);
   hden0_clone55->SetTotalEvents(9,0);
   hden0_clone55->SetPassedEvents(9,0);
   hden0_clone55->SetTotalEvents(10,0);
   hden0_clone55->SetPassedEvents(10,0);
   hden0_clone55->SetTotalEvents(11,0);
   hden0_clone55->SetPassedEvents(11,0);
   hden0_clone55->SetTotalEvents(12,0);
   hden0_clone55->SetPassedEvents(12,0);
   hden0_clone55->SetTotalEvents(13,0);
   hden0_clone55->SetPassedEvents(13,0);
   hden0_clone55->SetTotalEvents(14,0);
   hden0_clone55->SetPassedEvents(14,0);
   hden0_clone55->SetTotalEvents(15,0);
   hden0_clone55->SetPassedEvents(15,0);
   hden0_clone55->SetTotalEvents(16,0);
   hden0_clone55->SetPassedEvents(16,0);
   hden0_clone55->SetTotalEvents(17,0);
   hden0_clone55->SetPassedEvents(17,0);
   hden0_clone55->SetTotalEvents(18,0);
   hden0_clone55->SetPassedEvents(18,0);
   hden0_clone55->SetTotalEvents(19,0);
   hden0_clone55->SetPassedEvents(19,0);
   hden0_clone55->SetTotalEvents(20,0);
   hden0_clone55->SetPassedEvents(20,0);
   hden0_clone55->SetTotalEvents(21,0);
   hden0_clone55->SetPassedEvents(21,0);
   hden0_clone55->SetTotalEvents(22,0);
   hden0_clone55->SetPassedEvents(22,0);
   hden0_clone55->SetTotalEvents(23,0);
   hden0_clone55->SetPassedEvents(23,0);
   hden0_clone55->SetTotalEvents(24,0);
   hden0_clone55->SetPassedEvents(24,0);
   hden0_clone55->SetTotalEvents(25,0);
   hden0_clone55->SetPassedEvents(25,0);
   hden0_clone55->SetTotalEvents(26,0);
   hden0_clone55->SetPassedEvents(26,0);
   hden0_clone55->SetTotalEvents(27,0);
   hden0_clone55->SetPassedEvents(27,0);
   hden0_clone55->SetTotalEvents(28,0);
   hden0_clone55->SetPassedEvents(28,0);
   hden0_clone55->SetTotalEvents(29,0);
   hden0_clone55->SetPassedEvents(29,0);
   hden0_clone55->SetTotalEvents(30,0);
   hden0_clone55->SetPassedEvents(30,0);
   hden0_clone55->SetTotalEvents(31,0);
   hden0_clone55->SetPassedEvents(31,0);
   hden0_clone55->SetTotalEvents(32,0);
   hden0_clone55->SetPassedEvents(32,0);
   hden0_clone55->SetTotalEvents(33,0);
   hden0_clone55->SetPassedEvents(33,0);
   hden0_clone55->SetTotalEvents(34,0);
   hden0_clone55->SetPassedEvents(34,0);
   hden0_clone55->SetTotalEvents(35,0);
   hden0_clone55->SetPassedEvents(35,0);
   hden0_clone55->SetTotalEvents(36,0);
   hden0_clone55->SetPassedEvents(36,0);
   hden0_clone55->SetTotalEvents(37,1370);
   hden0_clone55->SetPassedEvents(37,1231);
   hden0_clone55->SetTotalEvents(38,1138);
   hden0_clone55->SetPassedEvents(38,1036);
   hden0_clone55->SetTotalEvents(39,903);
   hden0_clone55->SetPassedEvents(39,832);
   hden0_clone55->SetTotalEvents(40,883);
   hden0_clone55->SetPassedEvents(40,800);
   hden0_clone55->SetTotalEvents(41,0);
   hden0_clone55->SetPassedEvents(41,0);
   hden0_clone55->SetTotalEvents(42,0);
   hden0_clone55->SetPassedEvents(42,0);
   hden0_clone55->SetTotalEvents(43,0);
   hden0_clone55->SetPassedEvents(43,0);
   hden0_clone55->SetTotalEvents(44,0);
   hden0_clone55->SetPassedEvents(44,0);
   hden0_clone55->SetTotalEvents(45,0);
   hden0_clone55->SetPassedEvents(45,0);
   hden0_clone55->SetTotalEvents(46,0);
   hden0_clone55->SetPassedEvents(46,0);
   hden0_clone55->SetTotalEvents(47,0);
   hden0_clone55->SetPassedEvents(47,0);
   hden0_clone55->SetTotalEvents(48,0);
   hden0_clone55->SetPassedEvents(48,0);
   hden0_clone55->SetTotalEvents(49,0);
   hden0_clone55->SetPassedEvents(49,0);
   hden0_clone55->SetTotalEvents(50,0);
   hden0_clone55->SetPassedEvents(50,0);
   hden0_clone55->SetTotalEvents(51,0);
   hden0_clone55->SetPassedEvents(51,0);
   hden0_clone55->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone55->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hden0_clone55->SetMarkerColor(ci);
   hden0_clone55->SetMarkerStyle(24);
   hden0_clone55->Draw("samep");
   
   TEfficiency * hden1_clone56 = new TEfficiency("hden1_clone","",50,0,2.5);
   
   hden1_clone56->SetConfidenceLevel(0.6826895);
   hden1_clone56->SetBetaAlpha(1);
   hden1_clone56->SetBetaBeta(1);
   hden1_clone56->SetWeight(1);
   hden1_clone56->SetStatisticOption(0);
   hden1_clone56->SetPosteriorMode(0);
   hden1_clone56->SetShortestInterval(0);
   hden1_clone56->SetTotalEvents(0,0);
   hden1_clone56->SetPassedEvents(0,0);
   hden1_clone56->SetTotalEvents(1,0);
   hden1_clone56->SetPassedEvents(1,0);
   hden1_clone56->SetTotalEvents(2,0);
   hden1_clone56->SetPassedEvents(2,0);
   hden1_clone56->SetTotalEvents(3,0);
   hden1_clone56->SetPassedEvents(3,0);
   hden1_clone56->SetTotalEvents(4,0);
   hden1_clone56->SetPassedEvents(4,0);
   hden1_clone56->SetTotalEvents(5,0);
   hden1_clone56->SetPassedEvents(5,0);
   hden1_clone56->SetTotalEvents(6,0);
   hden1_clone56->SetPassedEvents(6,0);
   hden1_clone56->SetTotalEvents(7,0);
   hden1_clone56->SetPassedEvents(7,0);
   hden1_clone56->SetTotalEvents(8,0);
   hden1_clone56->SetPassedEvents(8,0);
   hden1_clone56->SetTotalEvents(9,0);
   hden1_clone56->SetPassedEvents(9,0);
   hden1_clone56->SetTotalEvents(10,0);
   hden1_clone56->SetPassedEvents(10,0);
   hden1_clone56->SetTotalEvents(11,0);
   hden1_clone56->SetPassedEvents(11,0);
   hden1_clone56->SetTotalEvents(12,0);
   hden1_clone56->SetPassedEvents(12,0);
   hden1_clone56->SetTotalEvents(13,0);
   hden1_clone56->SetPassedEvents(13,0);
   hden1_clone56->SetTotalEvents(14,0);
   hden1_clone56->SetPassedEvents(14,0);
   hden1_clone56->SetTotalEvents(15,0);
   hden1_clone56->SetPassedEvents(15,0);
   hden1_clone56->SetTotalEvents(16,0);
   hden1_clone56->SetPassedEvents(16,0);
   hden1_clone56->SetTotalEvents(17,0);
   hden1_clone56->SetPassedEvents(17,0);
   hden1_clone56->SetTotalEvents(18,0);
   hden1_clone56->SetPassedEvents(18,0);
   hden1_clone56->SetTotalEvents(19,0);
   hden1_clone56->SetPassedEvents(19,0);
   hden1_clone56->SetTotalEvents(20,0);
   hden1_clone56->SetPassedEvents(20,0);
   hden1_clone56->SetTotalEvents(21,0);
   hden1_clone56->SetPassedEvents(21,0);
   hden1_clone56->SetTotalEvents(22,0);
   hden1_clone56->SetPassedEvents(22,0);
   hden1_clone56->SetTotalEvents(23,0);
   hden1_clone56->SetPassedEvents(23,0);
   hden1_clone56->SetTotalEvents(24,0);
   hden1_clone56->SetPassedEvents(24,0);
   hden1_clone56->SetTotalEvents(25,0);
   hden1_clone56->SetPassedEvents(25,0);
   hden1_clone56->SetTotalEvents(26,0);
   hden1_clone56->SetPassedEvents(26,0);
   hden1_clone56->SetTotalEvents(27,0);
   hden1_clone56->SetPassedEvents(27,0);
   hden1_clone56->SetTotalEvents(28,0);
   hden1_clone56->SetPassedEvents(28,0);
   hden1_clone56->SetTotalEvents(29,0);
   hden1_clone56->SetPassedEvents(29,0);
   hden1_clone56->SetTotalEvents(30,0);
   hden1_clone56->SetPassedEvents(30,0);
   hden1_clone56->SetTotalEvents(31,0);
   hden1_clone56->SetPassedEvents(31,0);
   hden1_clone56->SetTotalEvents(32,0);
   hden1_clone56->SetPassedEvents(32,0);
   hden1_clone56->SetTotalEvents(33,0);
   hden1_clone56->SetPassedEvents(33,0);
   hden1_clone56->SetTotalEvents(34,0);
   hden1_clone56->SetPassedEvents(34,0);
   hden1_clone56->SetTotalEvents(35,0);
   hden1_clone56->SetPassedEvents(35,0);
   hden1_clone56->SetTotalEvents(36,0);
   hden1_clone56->SetPassedEvents(36,0);
   hden1_clone56->SetTotalEvents(37,1370);
   hden1_clone56->SetPassedEvents(37,1214);
   hden1_clone56->SetTotalEvents(38,1138);
   hden1_clone56->SetPassedEvents(38,1029);
   hden1_clone56->SetTotalEvents(39,903);
   hden1_clone56->SetPassedEvents(39,820);
   hden1_clone56->SetTotalEvents(40,883);
   hden1_clone56->SetPassedEvents(40,796);
   hden1_clone56->SetTotalEvents(41,0);
   hden1_clone56->SetPassedEvents(41,0);
   hden1_clone56->SetTotalEvents(42,0);
   hden1_clone56->SetPassedEvents(42,0);
   hden1_clone56->SetTotalEvents(43,0);
   hden1_clone56->SetPassedEvents(43,0);
   hden1_clone56->SetTotalEvents(44,0);
   hden1_clone56->SetPassedEvents(44,0);
   hden1_clone56->SetTotalEvents(45,0);
   hden1_clone56->SetPassedEvents(45,0);
   hden1_clone56->SetTotalEvents(46,0);
   hden1_clone56->SetPassedEvents(46,0);
   hden1_clone56->SetTotalEvents(47,0);
   hden1_clone56->SetPassedEvents(47,0);
   hden1_clone56->SetTotalEvents(48,0);
   hden1_clone56->SetPassedEvents(48,0);
   hden1_clone56->SetTotalEvents(49,0);
   hden1_clone56->SetPassedEvents(49,0);
   hden1_clone56->SetTotalEvents(50,0);
   hden1_clone56->SetPassedEvents(50,0);
   hden1_clone56->SetTotalEvents(51,0);
   hden1_clone56->SetPassedEvents(51,0);
   hden1_clone56->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone56->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hden1_clone56->SetMarkerColor(ci);
   hden1_clone56->SetMarkerStyle(21);
   hden1_clone56->Draw("samep");
   
   TEfficiency * hden2_clone57 = new TEfficiency("hden2_clone","",50,0,2.5);
   
   hden2_clone57->SetConfidenceLevel(0.6826895);
   hden2_clone57->SetBetaAlpha(1);
   hden2_clone57->SetBetaBeta(1);
   hden2_clone57->SetWeight(1);
   hden2_clone57->SetStatisticOption(0);
   hden2_clone57->SetPosteriorMode(0);
   hden2_clone57->SetShortestInterval(0);
   hden2_clone57->SetTotalEvents(0,0);
   hden2_clone57->SetPassedEvents(0,0);
   hden2_clone57->SetTotalEvents(1,0);
   hden2_clone57->SetPassedEvents(1,0);
   hden2_clone57->SetTotalEvents(2,0);
   hden2_clone57->SetPassedEvents(2,0);
   hden2_clone57->SetTotalEvents(3,0);
   hden2_clone57->SetPassedEvents(3,0);
   hden2_clone57->SetTotalEvents(4,0);
   hden2_clone57->SetPassedEvents(4,0);
   hden2_clone57->SetTotalEvents(5,0);
   hden2_clone57->SetPassedEvents(5,0);
   hden2_clone57->SetTotalEvents(6,0);
   hden2_clone57->SetPassedEvents(6,0);
   hden2_clone57->SetTotalEvents(7,0);
   hden2_clone57->SetPassedEvents(7,0);
   hden2_clone57->SetTotalEvents(8,0);
   hden2_clone57->SetPassedEvents(8,0);
   hden2_clone57->SetTotalEvents(9,0);
   hden2_clone57->SetPassedEvents(9,0);
   hden2_clone57->SetTotalEvents(10,0);
   hden2_clone57->SetPassedEvents(10,0);
   hden2_clone57->SetTotalEvents(11,0);
   hden2_clone57->SetPassedEvents(11,0);
   hden2_clone57->SetTotalEvents(12,0);
   hden2_clone57->SetPassedEvents(12,0);
   hden2_clone57->SetTotalEvents(13,0);
   hden2_clone57->SetPassedEvents(13,0);
   hden2_clone57->SetTotalEvents(14,0);
   hden2_clone57->SetPassedEvents(14,0);
   hden2_clone57->SetTotalEvents(15,0);
   hden2_clone57->SetPassedEvents(15,0);
   hden2_clone57->SetTotalEvents(16,0);
   hden2_clone57->SetPassedEvents(16,0);
   hden2_clone57->SetTotalEvents(17,0);
   hden2_clone57->SetPassedEvents(17,0);
   hden2_clone57->SetTotalEvents(18,0);
   hden2_clone57->SetPassedEvents(18,0);
   hden2_clone57->SetTotalEvents(19,0);
   hden2_clone57->SetPassedEvents(19,0);
   hden2_clone57->SetTotalEvents(20,0);
   hden2_clone57->SetPassedEvents(20,0);
   hden2_clone57->SetTotalEvents(21,0);
   hden2_clone57->SetPassedEvents(21,0);
   hden2_clone57->SetTotalEvents(22,0);
   hden2_clone57->SetPassedEvents(22,0);
   hden2_clone57->SetTotalEvents(23,0);
   hden2_clone57->SetPassedEvents(23,0);
   hden2_clone57->SetTotalEvents(24,0);
   hden2_clone57->SetPassedEvents(24,0);
   hden2_clone57->SetTotalEvents(25,0);
   hden2_clone57->SetPassedEvents(25,0);
   hden2_clone57->SetTotalEvents(26,0);
   hden2_clone57->SetPassedEvents(26,0);
   hden2_clone57->SetTotalEvents(27,0);
   hden2_clone57->SetPassedEvents(27,0);
   hden2_clone57->SetTotalEvents(28,0);
   hden2_clone57->SetPassedEvents(28,0);
   hden2_clone57->SetTotalEvents(29,0);
   hden2_clone57->SetPassedEvents(29,0);
   hden2_clone57->SetTotalEvents(30,0);
   hden2_clone57->SetPassedEvents(30,0);
   hden2_clone57->SetTotalEvents(31,0);
   hden2_clone57->SetPassedEvents(31,0);
   hden2_clone57->SetTotalEvents(32,0);
   hden2_clone57->SetPassedEvents(32,0);
   hden2_clone57->SetTotalEvents(33,0);
   hden2_clone57->SetPassedEvents(33,0);
   hden2_clone57->SetTotalEvents(34,0);
   hden2_clone57->SetPassedEvents(34,0);
   hden2_clone57->SetTotalEvents(35,0);
   hden2_clone57->SetPassedEvents(35,0);
   hden2_clone57->SetTotalEvents(36,0);
   hden2_clone57->SetPassedEvents(36,0);
   hden2_clone57->SetTotalEvents(37,1370);
   hden2_clone57->SetPassedEvents(37,1166);
   hden2_clone57->SetTotalEvents(38,1138);
   hden2_clone57->SetPassedEvents(38,968);
   hden2_clone57->SetTotalEvents(39,903);
   hden2_clone57->SetPassedEvents(39,771);
   hden2_clone57->SetTotalEvents(40,883);
   hden2_clone57->SetPassedEvents(40,731);
   hden2_clone57->SetTotalEvents(41,0);
   hden2_clone57->SetPassedEvents(41,0);
   hden2_clone57->SetTotalEvents(42,0);
   hden2_clone57->SetPassedEvents(42,0);
   hden2_clone57->SetTotalEvents(43,0);
   hden2_clone57->SetPassedEvents(43,0);
   hden2_clone57->SetTotalEvents(44,0);
   hden2_clone57->SetPassedEvents(44,0);
   hden2_clone57->SetTotalEvents(45,0);
   hden2_clone57->SetPassedEvents(45,0);
   hden2_clone57->SetTotalEvents(46,0);
   hden2_clone57->SetPassedEvents(46,0);
   hden2_clone57->SetTotalEvents(47,0);
   hden2_clone57->SetPassedEvents(47,0);
   hden2_clone57->SetTotalEvents(48,0);
   hden2_clone57->SetPassedEvents(48,0);
   hden2_clone57->SetTotalEvents(49,0);
   hden2_clone57->SetPassedEvents(49,0);
   hden2_clone57->SetTotalEvents(50,0);
   hden2_clone57->SetPassedEvents(50,0);
   hden2_clone57->SetTotalEvents(51,0);
   hden2_clone57->SetPassedEvents(51,0);
   hden2_clone57->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone57->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hden2_clone57->SetMarkerColor(ci);
   hden2_clone57->SetMarkerStyle(25);
   hden2_clone57->Draw("samep");
   
   TLegend *leg = new TLegend(0.45,0.2,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","no track veto","h");
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
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","Hybrid algorithm w/o GE21","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden2_clone","Hybrid algorithm w GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

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
