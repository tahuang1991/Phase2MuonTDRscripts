void GEMCSC_dxy10_50_mediumveto_combined_effvseta_20170131_pt10_fraction96_st2eta18to20_npar2()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:06:09 2017) by ROOT version6.08/06
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
   
   TH1F *b1__40 = new TH1F("b1__40"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,2.5);
   b1__40->SetMinimum(0);
   b1__40->SetMaximum(1.05);
   b1__40->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__40->SetLineColor(ci);
   b1__40->GetXaxis()->SetTitle("Trigger efficiency");
   b1__40->GetXaxis()->SetLabelFont(42);
   b1__40->GetXaxis()->SetLabelSize(0.05);
   b1__40->GetXaxis()->SetTitleSize(0.05);
   b1__40->GetXaxis()->SetTitleFont(42);
   b1__40->GetYaxis()->SetTitle("|#eta| at 2nd CSC station");
   b1__40->GetYaxis()->SetNdivisions(520);
   b1__40->GetYaxis()->SetLabelFont(42);
   b1__40->GetYaxis()->SetLabelSize(0.05);
   b1__40->GetYaxis()->SetTitleSize(0.05);
   b1__40->GetYaxis()->SetTitleOffset(1.1);
   b1__40->GetYaxis()->SetTitleFont(42);
   b1__40->GetZaxis()->SetLabelFont(42);
   b1__40->GetZaxis()->SetLabelSize(0.035);
   b1__40->GetZaxis()->SetTitleSize(0.035);
   b1__40->GetZaxis()->SetTitleFont(42);
   b1__40->Draw("");
   
   TEfficiency * hden0_clone118 = new TEfficiency("hden0_clone","",50,0,2.5);
   
   hden0_clone118->SetConfidenceLevel(0.6826895);
   hden0_clone118->SetBetaAlpha(1);
   hden0_clone118->SetBetaBeta(1);
   hden0_clone118->SetWeight(1);
   hden0_clone118->SetStatisticOption(0);
   hden0_clone118->SetPosteriorMode(0);
   hden0_clone118->SetShortestInterval(0);
   hden0_clone118->SetTotalEvents(0,0);
   hden0_clone118->SetPassedEvents(0,0);
   hden0_clone118->SetTotalEvents(1,0);
   hden0_clone118->SetPassedEvents(1,0);
   hden0_clone118->SetTotalEvents(2,0);
   hden0_clone118->SetPassedEvents(2,0);
   hden0_clone118->SetTotalEvents(3,0);
   hden0_clone118->SetPassedEvents(3,0);
   hden0_clone118->SetTotalEvents(4,0);
   hden0_clone118->SetPassedEvents(4,0);
   hden0_clone118->SetTotalEvents(5,0);
   hden0_clone118->SetPassedEvents(5,0);
   hden0_clone118->SetTotalEvents(6,0);
   hden0_clone118->SetPassedEvents(6,0);
   hden0_clone118->SetTotalEvents(7,0);
   hden0_clone118->SetPassedEvents(7,0);
   hden0_clone118->SetTotalEvents(8,0);
   hden0_clone118->SetPassedEvents(8,0);
   hden0_clone118->SetTotalEvents(9,0);
   hden0_clone118->SetPassedEvents(9,0);
   hden0_clone118->SetTotalEvents(10,0);
   hden0_clone118->SetPassedEvents(10,0);
   hden0_clone118->SetTotalEvents(11,0);
   hden0_clone118->SetPassedEvents(11,0);
   hden0_clone118->SetTotalEvents(12,0);
   hden0_clone118->SetPassedEvents(12,0);
   hden0_clone118->SetTotalEvents(13,0);
   hden0_clone118->SetPassedEvents(13,0);
   hden0_clone118->SetTotalEvents(14,0);
   hden0_clone118->SetPassedEvents(14,0);
   hden0_clone118->SetTotalEvents(15,0);
   hden0_clone118->SetPassedEvents(15,0);
   hden0_clone118->SetTotalEvents(16,0);
   hden0_clone118->SetPassedEvents(16,0);
   hden0_clone118->SetTotalEvents(17,0);
   hden0_clone118->SetPassedEvents(17,0);
   hden0_clone118->SetTotalEvents(18,0);
   hden0_clone118->SetPassedEvents(18,0);
   hden0_clone118->SetTotalEvents(19,0);
   hden0_clone118->SetPassedEvents(19,0);
   hden0_clone118->SetTotalEvents(20,0);
   hden0_clone118->SetPassedEvents(20,0);
   hden0_clone118->SetTotalEvents(21,0);
   hden0_clone118->SetPassedEvents(21,0);
   hden0_clone118->SetTotalEvents(22,0);
   hden0_clone118->SetPassedEvents(22,0);
   hden0_clone118->SetTotalEvents(23,0);
   hden0_clone118->SetPassedEvents(23,0);
   hden0_clone118->SetTotalEvents(24,0);
   hden0_clone118->SetPassedEvents(24,0);
   hden0_clone118->SetTotalEvents(25,0);
   hden0_clone118->SetPassedEvents(25,0);
   hden0_clone118->SetTotalEvents(26,0);
   hden0_clone118->SetPassedEvents(26,0);
   hden0_clone118->SetTotalEvents(27,0);
   hden0_clone118->SetPassedEvents(27,0);
   hden0_clone118->SetTotalEvents(28,0);
   hden0_clone118->SetPassedEvents(28,0);
   hden0_clone118->SetTotalEvents(29,0);
   hden0_clone118->SetPassedEvents(29,0);
   hden0_clone118->SetTotalEvents(30,0);
   hden0_clone118->SetPassedEvents(30,0);
   hden0_clone118->SetTotalEvents(31,0);
   hden0_clone118->SetPassedEvents(31,0);
   hden0_clone118->SetTotalEvents(32,0);
   hden0_clone118->SetPassedEvents(32,0);
   hden0_clone118->SetTotalEvents(33,0);
   hden0_clone118->SetPassedEvents(33,0);
   hden0_clone118->SetTotalEvents(34,0);
   hden0_clone118->SetPassedEvents(34,0);
   hden0_clone118->SetTotalEvents(35,0);
   hden0_clone118->SetPassedEvents(35,0);
   hden0_clone118->SetTotalEvents(36,0);
   hden0_clone118->SetPassedEvents(36,0);
   hden0_clone118->SetTotalEvents(37,1074);
   hden0_clone118->SetPassedEvents(37,928);
   hden0_clone118->SetTotalEvents(38,923);
   hden0_clone118->SetPassedEvents(38,812);
   hden0_clone118->SetTotalEvents(39,697);
   hden0_clone118->SetPassedEvents(39,613);
   hden0_clone118->SetTotalEvents(40,709);
   hden0_clone118->SetPassedEvents(40,641);
   hden0_clone118->SetTotalEvents(41,0);
   hden0_clone118->SetPassedEvents(41,0);
   hden0_clone118->SetTotalEvents(42,0);
   hden0_clone118->SetPassedEvents(42,0);
   hden0_clone118->SetTotalEvents(43,0);
   hden0_clone118->SetPassedEvents(43,0);
   hden0_clone118->SetTotalEvents(44,0);
   hden0_clone118->SetPassedEvents(44,0);
   hden0_clone118->SetTotalEvents(45,0);
   hden0_clone118->SetPassedEvents(45,0);
   hden0_clone118->SetTotalEvents(46,0);
   hden0_clone118->SetPassedEvents(46,0);
   hden0_clone118->SetTotalEvents(47,0);
   hden0_clone118->SetPassedEvents(47,0);
   hden0_clone118->SetTotalEvents(48,0);
   hden0_clone118->SetPassedEvents(48,0);
   hden0_clone118->SetTotalEvents(49,0);
   hden0_clone118->SetPassedEvents(49,0);
   hden0_clone118->SetTotalEvents(50,0);
   hden0_clone118->SetPassedEvents(50,0);
   hden0_clone118->SetTotalEvents(51,0);
   hden0_clone118->SetPassedEvents(51,0);
   hden0_clone118->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone118->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hden0_clone118->SetMarkerColor(ci);
   hden0_clone118->SetMarkerStyle(24);
   hden0_clone118->Draw("samep");
   
   TEfficiency * hden1_clone119 = new TEfficiency("hden1_clone","",50,0,2.5);
   
   hden1_clone119->SetConfidenceLevel(0.6826895);
   hden1_clone119->SetBetaAlpha(1);
   hden1_clone119->SetBetaBeta(1);
   hden1_clone119->SetWeight(1);
   hden1_clone119->SetStatisticOption(0);
   hden1_clone119->SetPosteriorMode(0);
   hden1_clone119->SetShortestInterval(0);
   hden1_clone119->SetTotalEvents(0,0);
   hden1_clone119->SetPassedEvents(0,0);
   hden1_clone119->SetTotalEvents(1,0);
   hden1_clone119->SetPassedEvents(1,0);
   hden1_clone119->SetTotalEvents(2,0);
   hden1_clone119->SetPassedEvents(2,0);
   hden1_clone119->SetTotalEvents(3,0);
   hden1_clone119->SetPassedEvents(3,0);
   hden1_clone119->SetTotalEvents(4,0);
   hden1_clone119->SetPassedEvents(4,0);
   hden1_clone119->SetTotalEvents(5,0);
   hden1_clone119->SetPassedEvents(5,0);
   hden1_clone119->SetTotalEvents(6,0);
   hden1_clone119->SetPassedEvents(6,0);
   hden1_clone119->SetTotalEvents(7,0);
   hden1_clone119->SetPassedEvents(7,0);
   hden1_clone119->SetTotalEvents(8,0);
   hden1_clone119->SetPassedEvents(8,0);
   hden1_clone119->SetTotalEvents(9,0);
   hden1_clone119->SetPassedEvents(9,0);
   hden1_clone119->SetTotalEvents(10,0);
   hden1_clone119->SetPassedEvents(10,0);
   hden1_clone119->SetTotalEvents(11,0);
   hden1_clone119->SetPassedEvents(11,0);
   hden1_clone119->SetTotalEvents(12,0);
   hden1_clone119->SetPassedEvents(12,0);
   hden1_clone119->SetTotalEvents(13,0);
   hden1_clone119->SetPassedEvents(13,0);
   hden1_clone119->SetTotalEvents(14,0);
   hden1_clone119->SetPassedEvents(14,0);
   hden1_clone119->SetTotalEvents(15,0);
   hden1_clone119->SetPassedEvents(15,0);
   hden1_clone119->SetTotalEvents(16,0);
   hden1_clone119->SetPassedEvents(16,0);
   hden1_clone119->SetTotalEvents(17,0);
   hden1_clone119->SetPassedEvents(17,0);
   hden1_clone119->SetTotalEvents(18,0);
   hden1_clone119->SetPassedEvents(18,0);
   hden1_clone119->SetTotalEvents(19,0);
   hden1_clone119->SetPassedEvents(19,0);
   hden1_clone119->SetTotalEvents(20,0);
   hden1_clone119->SetPassedEvents(20,0);
   hden1_clone119->SetTotalEvents(21,0);
   hden1_clone119->SetPassedEvents(21,0);
   hden1_clone119->SetTotalEvents(22,0);
   hden1_clone119->SetPassedEvents(22,0);
   hden1_clone119->SetTotalEvents(23,0);
   hden1_clone119->SetPassedEvents(23,0);
   hden1_clone119->SetTotalEvents(24,0);
   hden1_clone119->SetPassedEvents(24,0);
   hden1_clone119->SetTotalEvents(25,0);
   hden1_clone119->SetPassedEvents(25,0);
   hden1_clone119->SetTotalEvents(26,0);
   hden1_clone119->SetPassedEvents(26,0);
   hden1_clone119->SetTotalEvents(27,0);
   hden1_clone119->SetPassedEvents(27,0);
   hden1_clone119->SetTotalEvents(28,0);
   hden1_clone119->SetPassedEvents(28,0);
   hden1_clone119->SetTotalEvents(29,0);
   hden1_clone119->SetPassedEvents(29,0);
   hden1_clone119->SetTotalEvents(30,0);
   hden1_clone119->SetPassedEvents(30,0);
   hden1_clone119->SetTotalEvents(31,0);
   hden1_clone119->SetPassedEvents(31,0);
   hden1_clone119->SetTotalEvents(32,0);
   hden1_clone119->SetPassedEvents(32,0);
   hden1_clone119->SetTotalEvents(33,0);
   hden1_clone119->SetPassedEvents(33,0);
   hden1_clone119->SetTotalEvents(34,0);
   hden1_clone119->SetPassedEvents(34,0);
   hden1_clone119->SetTotalEvents(35,0);
   hden1_clone119->SetPassedEvents(35,0);
   hden1_clone119->SetTotalEvents(36,0);
   hden1_clone119->SetPassedEvents(36,0);
   hden1_clone119->SetTotalEvents(37,1074);
   hden1_clone119->SetPassedEvents(37,911);
   hden1_clone119->SetTotalEvents(38,923);
   hden1_clone119->SetPassedEvents(38,800);
   hden1_clone119->SetTotalEvents(39,697);
   hden1_clone119->SetPassedEvents(39,609);
   hden1_clone119->SetTotalEvents(40,709);
   hden1_clone119->SetPassedEvents(40,636);
   hden1_clone119->SetTotalEvents(41,0);
   hden1_clone119->SetPassedEvents(41,0);
   hden1_clone119->SetTotalEvents(42,0);
   hden1_clone119->SetPassedEvents(42,0);
   hden1_clone119->SetTotalEvents(43,0);
   hden1_clone119->SetPassedEvents(43,0);
   hden1_clone119->SetTotalEvents(44,0);
   hden1_clone119->SetPassedEvents(44,0);
   hden1_clone119->SetTotalEvents(45,0);
   hden1_clone119->SetPassedEvents(45,0);
   hden1_clone119->SetTotalEvents(46,0);
   hden1_clone119->SetPassedEvents(46,0);
   hden1_clone119->SetTotalEvents(47,0);
   hden1_clone119->SetPassedEvents(47,0);
   hden1_clone119->SetTotalEvents(48,0);
   hden1_clone119->SetPassedEvents(48,0);
   hden1_clone119->SetTotalEvents(49,0);
   hden1_clone119->SetPassedEvents(49,0);
   hden1_clone119->SetTotalEvents(50,0);
   hden1_clone119->SetPassedEvents(50,0);
   hden1_clone119->SetTotalEvents(51,0);
   hden1_clone119->SetPassedEvents(51,0);
   hden1_clone119->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone119->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hden1_clone119->SetMarkerColor(ci);
   hden1_clone119->SetMarkerStyle(21);
   hden1_clone119->Draw("samep");
   
   TEfficiency * hden2_clone120 = new TEfficiency("hden2_clone","",50,0,2.5);
   
   hden2_clone120->SetConfidenceLevel(0.6826895);
   hden2_clone120->SetBetaAlpha(1);
   hden2_clone120->SetBetaBeta(1);
   hden2_clone120->SetWeight(1);
   hden2_clone120->SetStatisticOption(0);
   hden2_clone120->SetPosteriorMode(0);
   hden2_clone120->SetShortestInterval(0);
   hden2_clone120->SetTotalEvents(0,0);
   hden2_clone120->SetPassedEvents(0,0);
   hden2_clone120->SetTotalEvents(1,0);
   hden2_clone120->SetPassedEvents(1,0);
   hden2_clone120->SetTotalEvents(2,0);
   hden2_clone120->SetPassedEvents(2,0);
   hden2_clone120->SetTotalEvents(3,0);
   hden2_clone120->SetPassedEvents(3,0);
   hden2_clone120->SetTotalEvents(4,0);
   hden2_clone120->SetPassedEvents(4,0);
   hden2_clone120->SetTotalEvents(5,0);
   hden2_clone120->SetPassedEvents(5,0);
   hden2_clone120->SetTotalEvents(6,0);
   hden2_clone120->SetPassedEvents(6,0);
   hden2_clone120->SetTotalEvents(7,0);
   hden2_clone120->SetPassedEvents(7,0);
   hden2_clone120->SetTotalEvents(8,0);
   hden2_clone120->SetPassedEvents(8,0);
   hden2_clone120->SetTotalEvents(9,0);
   hden2_clone120->SetPassedEvents(9,0);
   hden2_clone120->SetTotalEvents(10,0);
   hden2_clone120->SetPassedEvents(10,0);
   hden2_clone120->SetTotalEvents(11,0);
   hden2_clone120->SetPassedEvents(11,0);
   hden2_clone120->SetTotalEvents(12,0);
   hden2_clone120->SetPassedEvents(12,0);
   hden2_clone120->SetTotalEvents(13,0);
   hden2_clone120->SetPassedEvents(13,0);
   hden2_clone120->SetTotalEvents(14,0);
   hden2_clone120->SetPassedEvents(14,0);
   hden2_clone120->SetTotalEvents(15,0);
   hden2_clone120->SetPassedEvents(15,0);
   hden2_clone120->SetTotalEvents(16,0);
   hden2_clone120->SetPassedEvents(16,0);
   hden2_clone120->SetTotalEvents(17,0);
   hden2_clone120->SetPassedEvents(17,0);
   hden2_clone120->SetTotalEvents(18,0);
   hden2_clone120->SetPassedEvents(18,0);
   hden2_clone120->SetTotalEvents(19,0);
   hden2_clone120->SetPassedEvents(19,0);
   hden2_clone120->SetTotalEvents(20,0);
   hden2_clone120->SetPassedEvents(20,0);
   hden2_clone120->SetTotalEvents(21,0);
   hden2_clone120->SetPassedEvents(21,0);
   hden2_clone120->SetTotalEvents(22,0);
   hden2_clone120->SetPassedEvents(22,0);
   hden2_clone120->SetTotalEvents(23,0);
   hden2_clone120->SetPassedEvents(23,0);
   hden2_clone120->SetTotalEvents(24,0);
   hden2_clone120->SetPassedEvents(24,0);
   hden2_clone120->SetTotalEvents(25,0);
   hden2_clone120->SetPassedEvents(25,0);
   hden2_clone120->SetTotalEvents(26,0);
   hden2_clone120->SetPassedEvents(26,0);
   hden2_clone120->SetTotalEvents(27,0);
   hden2_clone120->SetPassedEvents(27,0);
   hden2_clone120->SetTotalEvents(28,0);
   hden2_clone120->SetPassedEvents(28,0);
   hden2_clone120->SetTotalEvents(29,0);
   hden2_clone120->SetPassedEvents(29,0);
   hden2_clone120->SetTotalEvents(30,0);
   hden2_clone120->SetPassedEvents(30,0);
   hden2_clone120->SetTotalEvents(31,0);
   hden2_clone120->SetPassedEvents(31,0);
   hden2_clone120->SetTotalEvents(32,0);
   hden2_clone120->SetPassedEvents(32,0);
   hden2_clone120->SetTotalEvents(33,0);
   hden2_clone120->SetPassedEvents(33,0);
   hden2_clone120->SetTotalEvents(34,0);
   hden2_clone120->SetPassedEvents(34,0);
   hden2_clone120->SetTotalEvents(35,0);
   hden2_clone120->SetPassedEvents(35,0);
   hden2_clone120->SetTotalEvents(36,0);
   hden2_clone120->SetPassedEvents(36,0);
   hden2_clone120->SetTotalEvents(37,1074);
   hden2_clone120->SetPassedEvents(37,885);
   hden2_clone120->SetTotalEvents(38,923);
   hden2_clone120->SetPassedEvents(38,780);
   hden2_clone120->SetTotalEvents(39,697);
   hden2_clone120->SetPassedEvents(39,585);
   hden2_clone120->SetTotalEvents(40,709);
   hden2_clone120->SetPassedEvents(40,604);
   hden2_clone120->SetTotalEvents(41,0);
   hden2_clone120->SetPassedEvents(41,0);
   hden2_clone120->SetTotalEvents(42,0);
   hden2_clone120->SetPassedEvents(42,0);
   hden2_clone120->SetTotalEvents(43,0);
   hden2_clone120->SetPassedEvents(43,0);
   hden2_clone120->SetTotalEvents(44,0);
   hden2_clone120->SetPassedEvents(44,0);
   hden2_clone120->SetTotalEvents(45,0);
   hden2_clone120->SetPassedEvents(45,0);
   hden2_clone120->SetTotalEvents(46,0);
   hden2_clone120->SetPassedEvents(46,0);
   hden2_clone120->SetTotalEvents(47,0);
   hden2_clone120->SetPassedEvents(47,0);
   hden2_clone120->SetTotalEvents(48,0);
   hden2_clone120->SetPassedEvents(48,0);
   hden2_clone120->SetTotalEvents(49,0);
   hden2_clone120->SetPassedEvents(49,0);
   hden2_clone120->SetTotalEvents(50,0);
   hden2_clone120->SetPassedEvents(50,0);
   hden2_clone120->SetTotalEvents(51,0);
   hden2_clone120->SetPassedEvents(51,0);
   hden2_clone120->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone120->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hden2_clone120->SetMarkerColor(ci);
   hden2_clone120->SetMarkerStyle(25);
   hden2_clone120->Draw("samep");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 even,ME21 even,ME31 even}{1.8<|#eta|<2.00, p_{T}^{L1}>10 GeV}");
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
