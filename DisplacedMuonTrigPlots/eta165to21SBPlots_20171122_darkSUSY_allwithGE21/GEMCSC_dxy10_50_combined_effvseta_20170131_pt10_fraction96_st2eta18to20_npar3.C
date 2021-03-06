void GEMCSC_dxy10_50_combined_effvseta_20170131_pt10_fraction96_st2eta18to20_npar3()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Nov 26 19:43:29 2017) by ROOT version6.08/06
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
   
   TH1F *b1__31 = new TH1F("b1__31"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,2.5);
   b1__31->SetMinimum(0);
   b1__31->SetMaximum(1.05);
   b1__31->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__31->SetLineColor(ci);
   b1__31->GetXaxis()->SetTitle("Trigger efficiency");
   b1__31->GetXaxis()->SetLabelFont(42);
   b1__31->GetXaxis()->SetLabelSize(0.05);
   b1__31->GetXaxis()->SetTitleSize(0.05);
   b1__31->GetXaxis()->SetTitleFont(42);
   b1__31->GetYaxis()->SetTitle("|#eta| at 2nd CSC station");
   b1__31->GetYaxis()->SetNdivisions(520);
   b1__31->GetYaxis()->SetLabelFont(42);
   b1__31->GetYaxis()->SetLabelSize(0.05);
   b1__31->GetYaxis()->SetTitleSize(0.05);
   b1__31->GetYaxis()->SetTitleOffset(1.1);
   b1__31->GetYaxis()->SetTitleFont(42);
   b1__31->GetZaxis()->SetLabelFont(42);
   b1__31->GetZaxis()->SetLabelSize(0.035);
   b1__31->GetZaxis()->SetTitleSize(0.035);
   b1__31->GetZaxis()->SetTitleFont(42);
   b1__31->Draw("");
   
   TEfficiency * hden0_clone91 = new TEfficiency("hden0_clone","",50,0,2.5);
   
   hden0_clone91->SetConfidenceLevel(0.6826895);
   hden0_clone91->SetBetaAlpha(1);
   hden0_clone91->SetBetaBeta(1);
   hden0_clone91->SetWeight(1);
   hden0_clone91->SetStatisticOption(0);
   hden0_clone91->SetPosteriorMode(0);
   hden0_clone91->SetShortestInterval(0);
   hden0_clone91->SetTotalEvents(0,0);
   hden0_clone91->SetPassedEvents(0,0);
   hden0_clone91->SetTotalEvents(1,0);
   hden0_clone91->SetPassedEvents(1,0);
   hden0_clone91->SetTotalEvents(2,0);
   hden0_clone91->SetPassedEvents(2,0);
   hden0_clone91->SetTotalEvents(3,0);
   hden0_clone91->SetPassedEvents(3,0);
   hden0_clone91->SetTotalEvents(4,0);
   hden0_clone91->SetPassedEvents(4,0);
   hden0_clone91->SetTotalEvents(5,0);
   hden0_clone91->SetPassedEvents(5,0);
   hden0_clone91->SetTotalEvents(6,0);
   hden0_clone91->SetPassedEvents(6,0);
   hden0_clone91->SetTotalEvents(7,0);
   hden0_clone91->SetPassedEvents(7,0);
   hden0_clone91->SetTotalEvents(8,0);
   hden0_clone91->SetPassedEvents(8,0);
   hden0_clone91->SetTotalEvents(9,0);
   hden0_clone91->SetPassedEvents(9,0);
   hden0_clone91->SetTotalEvents(10,0);
   hden0_clone91->SetPassedEvents(10,0);
   hden0_clone91->SetTotalEvents(11,0);
   hden0_clone91->SetPassedEvents(11,0);
   hden0_clone91->SetTotalEvents(12,0);
   hden0_clone91->SetPassedEvents(12,0);
   hden0_clone91->SetTotalEvents(13,0);
   hden0_clone91->SetPassedEvents(13,0);
   hden0_clone91->SetTotalEvents(14,0);
   hden0_clone91->SetPassedEvents(14,0);
   hden0_clone91->SetTotalEvents(15,0);
   hden0_clone91->SetPassedEvents(15,0);
   hden0_clone91->SetTotalEvents(16,0);
   hden0_clone91->SetPassedEvents(16,0);
   hden0_clone91->SetTotalEvents(17,0);
   hden0_clone91->SetPassedEvents(17,0);
   hden0_clone91->SetTotalEvents(18,0);
   hden0_clone91->SetPassedEvents(18,0);
   hden0_clone91->SetTotalEvents(19,0);
   hden0_clone91->SetPassedEvents(19,0);
   hden0_clone91->SetTotalEvents(20,0);
   hden0_clone91->SetPassedEvents(20,0);
   hden0_clone91->SetTotalEvents(21,0);
   hden0_clone91->SetPassedEvents(21,0);
   hden0_clone91->SetTotalEvents(22,0);
   hden0_clone91->SetPassedEvents(22,0);
   hden0_clone91->SetTotalEvents(23,0);
   hden0_clone91->SetPassedEvents(23,0);
   hden0_clone91->SetTotalEvents(24,0);
   hden0_clone91->SetPassedEvents(24,0);
   hden0_clone91->SetTotalEvents(25,0);
   hden0_clone91->SetPassedEvents(25,0);
   hden0_clone91->SetTotalEvents(26,0);
   hden0_clone91->SetPassedEvents(26,0);
   hden0_clone91->SetTotalEvents(27,0);
   hden0_clone91->SetPassedEvents(27,0);
   hden0_clone91->SetTotalEvents(28,0);
   hden0_clone91->SetPassedEvents(28,0);
   hden0_clone91->SetTotalEvents(29,0);
   hden0_clone91->SetPassedEvents(29,0);
   hden0_clone91->SetTotalEvents(30,0);
   hden0_clone91->SetPassedEvents(30,0);
   hden0_clone91->SetTotalEvents(31,0);
   hden0_clone91->SetPassedEvents(31,0);
   hden0_clone91->SetTotalEvents(32,0);
   hden0_clone91->SetPassedEvents(32,0);
   hden0_clone91->SetTotalEvents(33,0);
   hden0_clone91->SetPassedEvents(33,0);
   hden0_clone91->SetTotalEvents(34,0);
   hden0_clone91->SetPassedEvents(34,0);
   hden0_clone91->SetTotalEvents(35,0);
   hden0_clone91->SetPassedEvents(35,0);
   hden0_clone91->SetTotalEvents(36,0);
   hden0_clone91->SetPassedEvents(36,0);
   hden0_clone91->SetTotalEvents(37,236);
   hden0_clone91->SetPassedEvents(37,193);
   hden0_clone91->SetTotalEvents(38,239);
   hden0_clone91->SetPassedEvents(38,213);
   hden0_clone91->SetTotalEvents(39,200);
   hden0_clone91->SetPassedEvents(39,175);
   hden0_clone91->SetTotalEvents(40,238);
   hden0_clone91->SetPassedEvents(40,211);
   hden0_clone91->SetTotalEvents(41,0);
   hden0_clone91->SetPassedEvents(41,0);
   hden0_clone91->SetTotalEvents(42,0);
   hden0_clone91->SetPassedEvents(42,0);
   hden0_clone91->SetTotalEvents(43,0);
   hden0_clone91->SetPassedEvents(43,0);
   hden0_clone91->SetTotalEvents(44,0);
   hden0_clone91->SetPassedEvents(44,0);
   hden0_clone91->SetTotalEvents(45,0);
   hden0_clone91->SetPassedEvents(45,0);
   hden0_clone91->SetTotalEvents(46,0);
   hden0_clone91->SetPassedEvents(46,0);
   hden0_clone91->SetTotalEvents(47,0);
   hden0_clone91->SetPassedEvents(47,0);
   hden0_clone91->SetTotalEvents(48,0);
   hden0_clone91->SetPassedEvents(48,0);
   hden0_clone91->SetTotalEvents(49,0);
   hden0_clone91->SetPassedEvents(49,0);
   hden0_clone91->SetTotalEvents(50,0);
   hden0_clone91->SetPassedEvents(50,0);
   hden0_clone91->SetTotalEvents(51,0);
   hden0_clone91->SetPassedEvents(51,0);
   hden0_clone91->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone91->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hden0_clone91->SetMarkerColor(ci);
   hden0_clone91->SetMarkerStyle(24);
   hden0_clone91->Draw("samep");
   
   TEfficiency * hden1_clone92 = new TEfficiency("hden1_clone","",50,0,2.5);
   
   hden1_clone92->SetConfidenceLevel(0.6826895);
   hden1_clone92->SetBetaAlpha(1);
   hden1_clone92->SetBetaBeta(1);
   hden1_clone92->SetWeight(1);
   hden1_clone92->SetStatisticOption(0);
   hden1_clone92->SetPosteriorMode(0);
   hden1_clone92->SetShortestInterval(0);
   hden1_clone92->SetTotalEvents(0,0);
   hden1_clone92->SetPassedEvents(0,0);
   hden1_clone92->SetTotalEvents(1,0);
   hden1_clone92->SetPassedEvents(1,0);
   hden1_clone92->SetTotalEvents(2,0);
   hden1_clone92->SetPassedEvents(2,0);
   hden1_clone92->SetTotalEvents(3,0);
   hden1_clone92->SetPassedEvents(3,0);
   hden1_clone92->SetTotalEvents(4,0);
   hden1_clone92->SetPassedEvents(4,0);
   hden1_clone92->SetTotalEvents(5,0);
   hden1_clone92->SetPassedEvents(5,0);
   hden1_clone92->SetTotalEvents(6,0);
   hden1_clone92->SetPassedEvents(6,0);
   hden1_clone92->SetTotalEvents(7,0);
   hden1_clone92->SetPassedEvents(7,0);
   hden1_clone92->SetTotalEvents(8,0);
   hden1_clone92->SetPassedEvents(8,0);
   hden1_clone92->SetTotalEvents(9,0);
   hden1_clone92->SetPassedEvents(9,0);
   hden1_clone92->SetTotalEvents(10,0);
   hden1_clone92->SetPassedEvents(10,0);
   hden1_clone92->SetTotalEvents(11,0);
   hden1_clone92->SetPassedEvents(11,0);
   hden1_clone92->SetTotalEvents(12,0);
   hden1_clone92->SetPassedEvents(12,0);
   hden1_clone92->SetTotalEvents(13,0);
   hden1_clone92->SetPassedEvents(13,0);
   hden1_clone92->SetTotalEvents(14,0);
   hden1_clone92->SetPassedEvents(14,0);
   hden1_clone92->SetTotalEvents(15,0);
   hden1_clone92->SetPassedEvents(15,0);
   hden1_clone92->SetTotalEvents(16,0);
   hden1_clone92->SetPassedEvents(16,0);
   hden1_clone92->SetTotalEvents(17,0);
   hden1_clone92->SetPassedEvents(17,0);
   hden1_clone92->SetTotalEvents(18,0);
   hden1_clone92->SetPassedEvents(18,0);
   hden1_clone92->SetTotalEvents(19,0);
   hden1_clone92->SetPassedEvents(19,0);
   hden1_clone92->SetTotalEvents(20,0);
   hden1_clone92->SetPassedEvents(20,0);
   hden1_clone92->SetTotalEvents(21,0);
   hden1_clone92->SetPassedEvents(21,0);
   hden1_clone92->SetTotalEvents(22,0);
   hden1_clone92->SetPassedEvents(22,0);
   hden1_clone92->SetTotalEvents(23,0);
   hden1_clone92->SetPassedEvents(23,0);
   hden1_clone92->SetTotalEvents(24,0);
   hden1_clone92->SetPassedEvents(24,0);
   hden1_clone92->SetTotalEvents(25,0);
   hden1_clone92->SetPassedEvents(25,0);
   hden1_clone92->SetTotalEvents(26,0);
   hden1_clone92->SetPassedEvents(26,0);
   hden1_clone92->SetTotalEvents(27,0);
   hden1_clone92->SetPassedEvents(27,0);
   hden1_clone92->SetTotalEvents(28,0);
   hden1_clone92->SetPassedEvents(28,0);
   hden1_clone92->SetTotalEvents(29,0);
   hden1_clone92->SetPassedEvents(29,0);
   hden1_clone92->SetTotalEvents(30,0);
   hden1_clone92->SetPassedEvents(30,0);
   hden1_clone92->SetTotalEvents(31,0);
   hden1_clone92->SetPassedEvents(31,0);
   hden1_clone92->SetTotalEvents(32,0);
   hden1_clone92->SetPassedEvents(32,0);
   hden1_clone92->SetTotalEvents(33,0);
   hden1_clone92->SetPassedEvents(33,0);
   hden1_clone92->SetTotalEvents(34,0);
   hden1_clone92->SetPassedEvents(34,0);
   hden1_clone92->SetTotalEvents(35,0);
   hden1_clone92->SetPassedEvents(35,0);
   hden1_clone92->SetTotalEvents(36,0);
   hden1_clone92->SetPassedEvents(36,0);
   hden1_clone92->SetTotalEvents(37,236);
   hden1_clone92->SetPassedEvents(37,194);
   hden1_clone92->SetTotalEvents(38,239);
   hden1_clone92->SetPassedEvents(38,213);
   hden1_clone92->SetTotalEvents(39,200);
   hden1_clone92->SetPassedEvents(39,175);
   hden1_clone92->SetTotalEvents(40,238);
   hden1_clone92->SetPassedEvents(40,209);
   hden1_clone92->SetTotalEvents(41,0);
   hden1_clone92->SetPassedEvents(41,0);
   hden1_clone92->SetTotalEvents(42,0);
   hden1_clone92->SetPassedEvents(42,0);
   hden1_clone92->SetTotalEvents(43,0);
   hden1_clone92->SetPassedEvents(43,0);
   hden1_clone92->SetTotalEvents(44,0);
   hden1_clone92->SetPassedEvents(44,0);
   hden1_clone92->SetTotalEvents(45,0);
   hden1_clone92->SetPassedEvents(45,0);
   hden1_clone92->SetTotalEvents(46,0);
   hden1_clone92->SetPassedEvents(46,0);
   hden1_clone92->SetTotalEvents(47,0);
   hden1_clone92->SetPassedEvents(47,0);
   hden1_clone92->SetTotalEvents(48,0);
   hden1_clone92->SetPassedEvents(48,0);
   hden1_clone92->SetTotalEvents(49,0);
   hden1_clone92->SetPassedEvents(49,0);
   hden1_clone92->SetTotalEvents(50,0);
   hden1_clone92->SetPassedEvents(50,0);
   hden1_clone92->SetTotalEvents(51,0);
   hden1_clone92->SetPassedEvents(51,0);
   hden1_clone92->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone92->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hden1_clone92->SetMarkerColor(ci);
   hden1_clone92->SetMarkerStyle(21);
   hden1_clone92->Draw("samep");
   
   TEfficiency * hden2_clone93 = new TEfficiency("hden2_clone","",50,0,2.5);
   
   hden2_clone93->SetConfidenceLevel(0.6826895);
   hden2_clone93->SetBetaAlpha(1);
   hden2_clone93->SetBetaBeta(1);
   hden2_clone93->SetWeight(1);
   hden2_clone93->SetStatisticOption(0);
   hden2_clone93->SetPosteriorMode(0);
   hden2_clone93->SetShortestInterval(0);
   hden2_clone93->SetTotalEvents(0,0);
   hden2_clone93->SetPassedEvents(0,0);
   hden2_clone93->SetTotalEvents(1,0);
   hden2_clone93->SetPassedEvents(1,0);
   hden2_clone93->SetTotalEvents(2,0);
   hden2_clone93->SetPassedEvents(2,0);
   hden2_clone93->SetTotalEvents(3,0);
   hden2_clone93->SetPassedEvents(3,0);
   hden2_clone93->SetTotalEvents(4,0);
   hden2_clone93->SetPassedEvents(4,0);
   hden2_clone93->SetTotalEvents(5,0);
   hden2_clone93->SetPassedEvents(5,0);
   hden2_clone93->SetTotalEvents(6,0);
   hden2_clone93->SetPassedEvents(6,0);
   hden2_clone93->SetTotalEvents(7,0);
   hden2_clone93->SetPassedEvents(7,0);
   hden2_clone93->SetTotalEvents(8,0);
   hden2_clone93->SetPassedEvents(8,0);
   hden2_clone93->SetTotalEvents(9,0);
   hden2_clone93->SetPassedEvents(9,0);
   hden2_clone93->SetTotalEvents(10,0);
   hden2_clone93->SetPassedEvents(10,0);
   hden2_clone93->SetTotalEvents(11,0);
   hden2_clone93->SetPassedEvents(11,0);
   hden2_clone93->SetTotalEvents(12,0);
   hden2_clone93->SetPassedEvents(12,0);
   hden2_clone93->SetTotalEvents(13,0);
   hden2_clone93->SetPassedEvents(13,0);
   hden2_clone93->SetTotalEvents(14,0);
   hden2_clone93->SetPassedEvents(14,0);
   hden2_clone93->SetTotalEvents(15,0);
   hden2_clone93->SetPassedEvents(15,0);
   hden2_clone93->SetTotalEvents(16,0);
   hden2_clone93->SetPassedEvents(16,0);
   hden2_clone93->SetTotalEvents(17,0);
   hden2_clone93->SetPassedEvents(17,0);
   hden2_clone93->SetTotalEvents(18,0);
   hden2_clone93->SetPassedEvents(18,0);
   hden2_clone93->SetTotalEvents(19,0);
   hden2_clone93->SetPassedEvents(19,0);
   hden2_clone93->SetTotalEvents(20,0);
   hden2_clone93->SetPassedEvents(20,0);
   hden2_clone93->SetTotalEvents(21,0);
   hden2_clone93->SetPassedEvents(21,0);
   hden2_clone93->SetTotalEvents(22,0);
   hden2_clone93->SetPassedEvents(22,0);
   hden2_clone93->SetTotalEvents(23,0);
   hden2_clone93->SetPassedEvents(23,0);
   hden2_clone93->SetTotalEvents(24,0);
   hden2_clone93->SetPassedEvents(24,0);
   hden2_clone93->SetTotalEvents(25,0);
   hden2_clone93->SetPassedEvents(25,0);
   hden2_clone93->SetTotalEvents(26,0);
   hden2_clone93->SetPassedEvents(26,0);
   hden2_clone93->SetTotalEvents(27,0);
   hden2_clone93->SetPassedEvents(27,0);
   hden2_clone93->SetTotalEvents(28,0);
   hden2_clone93->SetPassedEvents(28,0);
   hden2_clone93->SetTotalEvents(29,0);
   hden2_clone93->SetPassedEvents(29,0);
   hden2_clone93->SetTotalEvents(30,0);
   hden2_clone93->SetPassedEvents(30,0);
   hden2_clone93->SetTotalEvents(31,0);
   hden2_clone93->SetPassedEvents(31,0);
   hden2_clone93->SetTotalEvents(32,0);
   hden2_clone93->SetPassedEvents(32,0);
   hden2_clone93->SetTotalEvents(33,0);
   hden2_clone93->SetPassedEvents(33,0);
   hden2_clone93->SetTotalEvents(34,0);
   hden2_clone93->SetPassedEvents(34,0);
   hden2_clone93->SetTotalEvents(35,0);
   hden2_clone93->SetPassedEvents(35,0);
   hden2_clone93->SetTotalEvents(36,0);
   hden2_clone93->SetPassedEvents(36,0);
   hden2_clone93->SetTotalEvents(37,236);
   hden2_clone93->SetPassedEvents(37,190);
   hden2_clone93->SetTotalEvents(38,239);
   hden2_clone93->SetPassedEvents(38,209);
   hden2_clone93->SetTotalEvents(39,200);
   hden2_clone93->SetPassedEvents(39,168);
   hden2_clone93->SetTotalEvents(40,238);
   hden2_clone93->SetPassedEvents(40,204);
   hden2_clone93->SetTotalEvents(41,0);
   hden2_clone93->SetPassedEvents(41,0);
   hden2_clone93->SetTotalEvents(42,0);
   hden2_clone93->SetPassedEvents(42,0);
   hden2_clone93->SetTotalEvents(43,0);
   hden2_clone93->SetPassedEvents(43,0);
   hden2_clone93->SetTotalEvents(44,0);
   hden2_clone93->SetPassedEvents(44,0);
   hden2_clone93->SetTotalEvents(45,0);
   hden2_clone93->SetPassedEvents(45,0);
   hden2_clone93->SetTotalEvents(46,0);
   hden2_clone93->SetPassedEvents(46,0);
   hden2_clone93->SetTotalEvents(47,0);
   hden2_clone93->SetPassedEvents(47,0);
   hden2_clone93->SetTotalEvents(48,0);
   hden2_clone93->SetPassedEvents(48,0);
   hden2_clone93->SetTotalEvents(49,0);
   hden2_clone93->SetPassedEvents(49,0);
   hden2_clone93->SetTotalEvents(50,0);
   hden2_clone93->SetPassedEvents(50,0);
   hden2_clone93->SetTotalEvents(51,0);
   hden2_clone93->SetPassedEvents(51,0);
   hden2_clone93->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone93->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hden2_clone93->SetMarkerColor(ci);
   hden2_clone93->SetMarkerStyle(25);
   hden2_clone93->Draw("samep");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 even,ME21 odd,ME31 odd}{1.8<|#eta|<2.00, p_{T}^{L1}>10 GeV}");
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
