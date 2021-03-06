void GEMCSC_dxy10_50_combined_effvseta_20170131_pt10_fraction96_st2eta16to18_npar2()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Nov 26 19:42:52 2017) by ROOT version6.08/06
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
   
   TH1F *b1__11 = new TH1F("b1__11"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,2.5);
   b1__11->SetMinimum(0);
   b1__11->SetMaximum(1.05);
   b1__11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__11->SetLineColor(ci);
   b1__11->GetXaxis()->SetTitle("Trigger efficiency");
   b1__11->GetXaxis()->SetLabelFont(42);
   b1__11->GetXaxis()->SetLabelSize(0.05);
   b1__11->GetXaxis()->SetTitleSize(0.05);
   b1__11->GetXaxis()->SetTitleFont(42);
   b1__11->GetYaxis()->SetTitle("|#eta| at 2nd CSC station");
   b1__11->GetYaxis()->SetNdivisions(520);
   b1__11->GetYaxis()->SetLabelFont(42);
   b1__11->GetYaxis()->SetLabelSize(0.05);
   b1__11->GetYaxis()->SetTitleSize(0.05);
   b1__11->GetYaxis()->SetTitleOffset(1.1);
   b1__11->GetYaxis()->SetTitleFont(42);
   b1__11->GetZaxis()->SetLabelFont(42);
   b1__11->GetZaxis()->SetLabelSize(0.035);
   b1__11->GetZaxis()->SetTitleSize(0.035);
   b1__11->GetZaxis()->SetTitleFont(42);
   b1__11->Draw("");
   
   TEfficiency * hden0_clone31 = new TEfficiency("hden0_clone","",50,0,2.5);
   
   hden0_clone31->SetConfidenceLevel(0.6826895);
   hden0_clone31->SetBetaAlpha(1);
   hden0_clone31->SetBetaBeta(1);
   hden0_clone31->SetWeight(1);
   hden0_clone31->SetStatisticOption(0);
   hden0_clone31->SetPosteriorMode(0);
   hden0_clone31->SetShortestInterval(0);
   hden0_clone31->SetTotalEvents(0,0);
   hden0_clone31->SetPassedEvents(0,0);
   hden0_clone31->SetTotalEvents(1,0);
   hden0_clone31->SetPassedEvents(1,0);
   hden0_clone31->SetTotalEvents(2,0);
   hden0_clone31->SetPassedEvents(2,0);
   hden0_clone31->SetTotalEvents(3,0);
   hden0_clone31->SetPassedEvents(3,0);
   hden0_clone31->SetTotalEvents(4,0);
   hden0_clone31->SetPassedEvents(4,0);
   hden0_clone31->SetTotalEvents(5,0);
   hden0_clone31->SetPassedEvents(5,0);
   hden0_clone31->SetTotalEvents(6,0);
   hden0_clone31->SetPassedEvents(6,0);
   hden0_clone31->SetTotalEvents(7,0);
   hden0_clone31->SetPassedEvents(7,0);
   hden0_clone31->SetTotalEvents(8,0);
   hden0_clone31->SetPassedEvents(8,0);
   hden0_clone31->SetTotalEvents(9,0);
   hden0_clone31->SetPassedEvents(9,0);
   hden0_clone31->SetTotalEvents(10,0);
   hden0_clone31->SetPassedEvents(10,0);
   hden0_clone31->SetTotalEvents(11,0);
   hden0_clone31->SetPassedEvents(11,0);
   hden0_clone31->SetTotalEvents(12,0);
   hden0_clone31->SetPassedEvents(12,0);
   hden0_clone31->SetTotalEvents(13,0);
   hden0_clone31->SetPassedEvents(13,0);
   hden0_clone31->SetTotalEvents(14,0);
   hden0_clone31->SetPassedEvents(14,0);
   hden0_clone31->SetTotalEvents(15,0);
   hden0_clone31->SetPassedEvents(15,0);
   hden0_clone31->SetTotalEvents(16,0);
   hden0_clone31->SetPassedEvents(16,0);
   hden0_clone31->SetTotalEvents(17,0);
   hden0_clone31->SetPassedEvents(17,0);
   hden0_clone31->SetTotalEvents(18,0);
   hden0_clone31->SetPassedEvents(18,0);
   hden0_clone31->SetTotalEvents(19,0);
   hden0_clone31->SetPassedEvents(19,0);
   hden0_clone31->SetTotalEvents(20,0);
   hden0_clone31->SetPassedEvents(20,0);
   hden0_clone31->SetTotalEvents(21,0);
   hden0_clone31->SetPassedEvents(21,0);
   hden0_clone31->SetTotalEvents(22,0);
   hden0_clone31->SetPassedEvents(22,0);
   hden0_clone31->SetTotalEvents(23,0);
   hden0_clone31->SetPassedEvents(23,0);
   hden0_clone31->SetTotalEvents(24,0);
   hden0_clone31->SetPassedEvents(24,0);
   hden0_clone31->SetTotalEvents(25,0);
   hden0_clone31->SetPassedEvents(25,0);
   hden0_clone31->SetTotalEvents(26,0);
   hden0_clone31->SetPassedEvents(26,0);
   hden0_clone31->SetTotalEvents(27,0);
   hden0_clone31->SetPassedEvents(27,0);
   hden0_clone31->SetTotalEvents(28,0);
   hden0_clone31->SetPassedEvents(28,0);
   hden0_clone31->SetTotalEvents(29,0);
   hden0_clone31->SetPassedEvents(29,0);
   hden0_clone31->SetTotalEvents(30,0);
   hden0_clone31->SetPassedEvents(30,0);
   hden0_clone31->SetTotalEvents(31,0);
   hden0_clone31->SetPassedEvents(31,0);
   hden0_clone31->SetTotalEvents(32,0);
   hden0_clone31->SetPassedEvents(32,0);
   hden0_clone31->SetTotalEvents(33,0);
   hden0_clone31->SetPassedEvents(33,0);
   hden0_clone31->SetTotalEvents(34,169);
   hden0_clone31->SetPassedEvents(34,155);
   hden0_clone31->SetTotalEvents(35,12);
   hden0_clone31->SetPassedEvents(35,8);
   hden0_clone31->SetTotalEvents(36,232);
   hden0_clone31->SetPassedEvents(36,198);
   hden0_clone31->SetTotalEvents(37,0);
   hden0_clone31->SetPassedEvents(37,0);
   hden0_clone31->SetTotalEvents(38,0);
   hden0_clone31->SetPassedEvents(38,0);
   hden0_clone31->SetTotalEvents(39,0);
   hden0_clone31->SetPassedEvents(39,0);
   hden0_clone31->SetTotalEvents(40,0);
   hden0_clone31->SetPassedEvents(40,0);
   hden0_clone31->SetTotalEvents(41,0);
   hden0_clone31->SetPassedEvents(41,0);
   hden0_clone31->SetTotalEvents(42,0);
   hden0_clone31->SetPassedEvents(42,0);
   hden0_clone31->SetTotalEvents(43,0);
   hden0_clone31->SetPassedEvents(43,0);
   hden0_clone31->SetTotalEvents(44,0);
   hden0_clone31->SetPassedEvents(44,0);
   hden0_clone31->SetTotalEvents(45,0);
   hden0_clone31->SetPassedEvents(45,0);
   hden0_clone31->SetTotalEvents(46,0);
   hden0_clone31->SetPassedEvents(46,0);
   hden0_clone31->SetTotalEvents(47,0);
   hden0_clone31->SetPassedEvents(47,0);
   hden0_clone31->SetTotalEvents(48,0);
   hden0_clone31->SetPassedEvents(48,0);
   hden0_clone31->SetTotalEvents(49,0);
   hden0_clone31->SetPassedEvents(49,0);
   hden0_clone31->SetTotalEvents(50,0);
   hden0_clone31->SetPassedEvents(50,0);
   hden0_clone31->SetTotalEvents(51,0);
   hden0_clone31->SetPassedEvents(51,0);
   hden0_clone31->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone31->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hden0_clone31->SetMarkerColor(ci);
   hden0_clone31->SetMarkerStyle(24);
   hden0_clone31->Draw("samep");
   
   TEfficiency * hden1_clone32 = new TEfficiency("hden1_clone","",50,0,2.5);
   
   hden1_clone32->SetConfidenceLevel(0.6826895);
   hden1_clone32->SetBetaAlpha(1);
   hden1_clone32->SetBetaBeta(1);
   hden1_clone32->SetWeight(1);
   hden1_clone32->SetStatisticOption(0);
   hden1_clone32->SetPosteriorMode(0);
   hden1_clone32->SetShortestInterval(0);
   hden1_clone32->SetTotalEvents(0,0);
   hden1_clone32->SetPassedEvents(0,0);
   hden1_clone32->SetTotalEvents(1,0);
   hden1_clone32->SetPassedEvents(1,0);
   hden1_clone32->SetTotalEvents(2,0);
   hden1_clone32->SetPassedEvents(2,0);
   hden1_clone32->SetTotalEvents(3,0);
   hden1_clone32->SetPassedEvents(3,0);
   hden1_clone32->SetTotalEvents(4,0);
   hden1_clone32->SetPassedEvents(4,0);
   hden1_clone32->SetTotalEvents(5,0);
   hden1_clone32->SetPassedEvents(5,0);
   hden1_clone32->SetTotalEvents(6,0);
   hden1_clone32->SetPassedEvents(6,0);
   hden1_clone32->SetTotalEvents(7,0);
   hden1_clone32->SetPassedEvents(7,0);
   hden1_clone32->SetTotalEvents(8,0);
   hden1_clone32->SetPassedEvents(8,0);
   hden1_clone32->SetTotalEvents(9,0);
   hden1_clone32->SetPassedEvents(9,0);
   hden1_clone32->SetTotalEvents(10,0);
   hden1_clone32->SetPassedEvents(10,0);
   hden1_clone32->SetTotalEvents(11,0);
   hden1_clone32->SetPassedEvents(11,0);
   hden1_clone32->SetTotalEvents(12,0);
   hden1_clone32->SetPassedEvents(12,0);
   hden1_clone32->SetTotalEvents(13,0);
   hden1_clone32->SetPassedEvents(13,0);
   hden1_clone32->SetTotalEvents(14,0);
   hden1_clone32->SetPassedEvents(14,0);
   hden1_clone32->SetTotalEvents(15,0);
   hden1_clone32->SetPassedEvents(15,0);
   hden1_clone32->SetTotalEvents(16,0);
   hden1_clone32->SetPassedEvents(16,0);
   hden1_clone32->SetTotalEvents(17,0);
   hden1_clone32->SetPassedEvents(17,0);
   hden1_clone32->SetTotalEvents(18,0);
   hden1_clone32->SetPassedEvents(18,0);
   hden1_clone32->SetTotalEvents(19,0);
   hden1_clone32->SetPassedEvents(19,0);
   hden1_clone32->SetTotalEvents(20,0);
   hden1_clone32->SetPassedEvents(20,0);
   hden1_clone32->SetTotalEvents(21,0);
   hden1_clone32->SetPassedEvents(21,0);
   hden1_clone32->SetTotalEvents(22,0);
   hden1_clone32->SetPassedEvents(22,0);
   hden1_clone32->SetTotalEvents(23,0);
   hden1_clone32->SetPassedEvents(23,0);
   hden1_clone32->SetTotalEvents(24,0);
   hden1_clone32->SetPassedEvents(24,0);
   hden1_clone32->SetTotalEvents(25,0);
   hden1_clone32->SetPassedEvents(25,0);
   hden1_clone32->SetTotalEvents(26,0);
   hden1_clone32->SetPassedEvents(26,0);
   hden1_clone32->SetTotalEvents(27,0);
   hden1_clone32->SetPassedEvents(27,0);
   hden1_clone32->SetTotalEvents(28,0);
   hden1_clone32->SetPassedEvents(28,0);
   hden1_clone32->SetTotalEvents(29,0);
   hden1_clone32->SetPassedEvents(29,0);
   hden1_clone32->SetTotalEvents(30,0);
   hden1_clone32->SetPassedEvents(30,0);
   hden1_clone32->SetTotalEvents(31,0);
   hden1_clone32->SetPassedEvents(31,0);
   hden1_clone32->SetTotalEvents(32,0);
   hden1_clone32->SetPassedEvents(32,0);
   hden1_clone32->SetTotalEvents(33,0);
   hden1_clone32->SetPassedEvents(33,0);
   hden1_clone32->SetTotalEvents(34,169);
   hden1_clone32->SetPassedEvents(34,155);
   hden1_clone32->SetTotalEvents(35,12);
   hden1_clone32->SetPassedEvents(35,8);
   hden1_clone32->SetTotalEvents(36,232);
   hden1_clone32->SetPassedEvents(36,192);
   hden1_clone32->SetTotalEvents(37,0);
   hden1_clone32->SetPassedEvents(37,0);
   hden1_clone32->SetTotalEvents(38,0);
   hden1_clone32->SetPassedEvents(38,0);
   hden1_clone32->SetTotalEvents(39,0);
   hden1_clone32->SetPassedEvents(39,0);
   hden1_clone32->SetTotalEvents(40,0);
   hden1_clone32->SetPassedEvents(40,0);
   hden1_clone32->SetTotalEvents(41,0);
   hden1_clone32->SetPassedEvents(41,0);
   hden1_clone32->SetTotalEvents(42,0);
   hden1_clone32->SetPassedEvents(42,0);
   hden1_clone32->SetTotalEvents(43,0);
   hden1_clone32->SetPassedEvents(43,0);
   hden1_clone32->SetTotalEvents(44,0);
   hden1_clone32->SetPassedEvents(44,0);
   hden1_clone32->SetTotalEvents(45,0);
   hden1_clone32->SetPassedEvents(45,0);
   hden1_clone32->SetTotalEvents(46,0);
   hden1_clone32->SetPassedEvents(46,0);
   hden1_clone32->SetTotalEvents(47,0);
   hden1_clone32->SetPassedEvents(47,0);
   hden1_clone32->SetTotalEvents(48,0);
   hden1_clone32->SetPassedEvents(48,0);
   hden1_clone32->SetTotalEvents(49,0);
   hden1_clone32->SetPassedEvents(49,0);
   hden1_clone32->SetTotalEvents(50,0);
   hden1_clone32->SetPassedEvents(50,0);
   hden1_clone32->SetTotalEvents(51,0);
   hden1_clone32->SetPassedEvents(51,0);
   hden1_clone32->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone32->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hden1_clone32->SetMarkerColor(ci);
   hden1_clone32->SetMarkerStyle(21);
   hden1_clone32->Draw("samep");
   
   TEfficiency * hden2_clone33 = new TEfficiency("hden2_clone","",50,0,2.5);
   
   hden2_clone33->SetConfidenceLevel(0.6826895);
   hden2_clone33->SetBetaAlpha(1);
   hden2_clone33->SetBetaBeta(1);
   hden2_clone33->SetWeight(1);
   hden2_clone33->SetStatisticOption(0);
   hden2_clone33->SetPosteriorMode(0);
   hden2_clone33->SetShortestInterval(0);
   hden2_clone33->SetTotalEvents(0,0);
   hden2_clone33->SetPassedEvents(0,0);
   hden2_clone33->SetTotalEvents(1,0);
   hden2_clone33->SetPassedEvents(1,0);
   hden2_clone33->SetTotalEvents(2,0);
   hden2_clone33->SetPassedEvents(2,0);
   hden2_clone33->SetTotalEvents(3,0);
   hden2_clone33->SetPassedEvents(3,0);
   hden2_clone33->SetTotalEvents(4,0);
   hden2_clone33->SetPassedEvents(4,0);
   hden2_clone33->SetTotalEvents(5,0);
   hden2_clone33->SetPassedEvents(5,0);
   hden2_clone33->SetTotalEvents(6,0);
   hden2_clone33->SetPassedEvents(6,0);
   hden2_clone33->SetTotalEvents(7,0);
   hden2_clone33->SetPassedEvents(7,0);
   hden2_clone33->SetTotalEvents(8,0);
   hden2_clone33->SetPassedEvents(8,0);
   hden2_clone33->SetTotalEvents(9,0);
   hden2_clone33->SetPassedEvents(9,0);
   hden2_clone33->SetTotalEvents(10,0);
   hden2_clone33->SetPassedEvents(10,0);
   hden2_clone33->SetTotalEvents(11,0);
   hden2_clone33->SetPassedEvents(11,0);
   hden2_clone33->SetTotalEvents(12,0);
   hden2_clone33->SetPassedEvents(12,0);
   hden2_clone33->SetTotalEvents(13,0);
   hden2_clone33->SetPassedEvents(13,0);
   hden2_clone33->SetTotalEvents(14,0);
   hden2_clone33->SetPassedEvents(14,0);
   hden2_clone33->SetTotalEvents(15,0);
   hden2_clone33->SetPassedEvents(15,0);
   hden2_clone33->SetTotalEvents(16,0);
   hden2_clone33->SetPassedEvents(16,0);
   hden2_clone33->SetTotalEvents(17,0);
   hden2_clone33->SetPassedEvents(17,0);
   hden2_clone33->SetTotalEvents(18,0);
   hden2_clone33->SetPassedEvents(18,0);
   hden2_clone33->SetTotalEvents(19,0);
   hden2_clone33->SetPassedEvents(19,0);
   hden2_clone33->SetTotalEvents(20,0);
   hden2_clone33->SetPassedEvents(20,0);
   hden2_clone33->SetTotalEvents(21,0);
   hden2_clone33->SetPassedEvents(21,0);
   hden2_clone33->SetTotalEvents(22,0);
   hden2_clone33->SetPassedEvents(22,0);
   hden2_clone33->SetTotalEvents(23,0);
   hden2_clone33->SetPassedEvents(23,0);
   hden2_clone33->SetTotalEvents(24,0);
   hden2_clone33->SetPassedEvents(24,0);
   hden2_clone33->SetTotalEvents(25,0);
   hden2_clone33->SetPassedEvents(25,0);
   hden2_clone33->SetTotalEvents(26,0);
   hden2_clone33->SetPassedEvents(26,0);
   hden2_clone33->SetTotalEvents(27,0);
   hden2_clone33->SetPassedEvents(27,0);
   hden2_clone33->SetTotalEvents(28,0);
   hden2_clone33->SetPassedEvents(28,0);
   hden2_clone33->SetTotalEvents(29,0);
   hden2_clone33->SetPassedEvents(29,0);
   hden2_clone33->SetTotalEvents(30,0);
   hden2_clone33->SetPassedEvents(30,0);
   hden2_clone33->SetTotalEvents(31,0);
   hden2_clone33->SetPassedEvents(31,0);
   hden2_clone33->SetTotalEvents(32,0);
   hden2_clone33->SetPassedEvents(32,0);
   hden2_clone33->SetTotalEvents(33,0);
   hden2_clone33->SetPassedEvents(33,0);
   hden2_clone33->SetTotalEvents(34,169);
   hden2_clone33->SetPassedEvents(34,156);
   hden2_clone33->SetTotalEvents(35,12);
   hden2_clone33->SetPassedEvents(35,7);
   hden2_clone33->SetTotalEvents(36,232);
   hden2_clone33->SetPassedEvents(36,191);
   hden2_clone33->SetTotalEvents(37,0);
   hden2_clone33->SetPassedEvents(37,0);
   hden2_clone33->SetTotalEvents(38,0);
   hden2_clone33->SetPassedEvents(38,0);
   hden2_clone33->SetTotalEvents(39,0);
   hden2_clone33->SetPassedEvents(39,0);
   hden2_clone33->SetTotalEvents(40,0);
   hden2_clone33->SetPassedEvents(40,0);
   hden2_clone33->SetTotalEvents(41,0);
   hden2_clone33->SetPassedEvents(41,0);
   hden2_clone33->SetTotalEvents(42,0);
   hden2_clone33->SetPassedEvents(42,0);
   hden2_clone33->SetTotalEvents(43,0);
   hden2_clone33->SetPassedEvents(43,0);
   hden2_clone33->SetTotalEvents(44,0);
   hden2_clone33->SetPassedEvents(44,0);
   hden2_clone33->SetTotalEvents(45,0);
   hden2_clone33->SetPassedEvents(45,0);
   hden2_clone33->SetTotalEvents(46,0);
   hden2_clone33->SetPassedEvents(46,0);
   hden2_clone33->SetTotalEvents(47,0);
   hden2_clone33->SetPassedEvents(47,0);
   hden2_clone33->SetTotalEvents(48,0);
   hden2_clone33->SetPassedEvents(48,0);
   hden2_clone33->SetTotalEvents(49,0);
   hden2_clone33->SetPassedEvents(49,0);
   hden2_clone33->SetTotalEvents(50,0);
   hden2_clone33->SetPassedEvents(50,0);
   hden2_clone33->SetTotalEvents(51,0);
   hden2_clone33->SetPassedEvents(51,0);
   hden2_clone33->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone33->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hden2_clone33->SetMarkerColor(ci);
   hden2_clone33->SetMarkerStyle(25);
   hden2_clone33->Draw("samep");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 even,ME21 even,ME31 even}{1.6<|#eta|<1.80, p_{T}^{L1}>10 GeV}");
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
