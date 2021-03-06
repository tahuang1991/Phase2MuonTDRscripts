void GEMCSC_dxy10_50_combined_effvsdxy_20170131_pt10_fraction96_st2eta16to18_npar0()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:40:41 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(-8.139535,-0.1685185,56.45995,1.127778);
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
   
   TH1F *b1__5 = new TH1F("b1__5"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,50);
   b1__5->SetMinimum(0);
   b1__5->SetMaximum(1.05);
   b1__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__5->SetLineColor(ci);
   b1__5->GetXaxis()->SetTitle("|dxy| [cm]");
   b1__5->GetXaxis()->SetLabelFont(42);
   b1__5->GetXaxis()->SetLabelSize(0.05);
   b1__5->GetXaxis()->SetTitleSize(0.05);
   b1__5->GetXaxis()->SetTitleFont(42);
   b1__5->GetYaxis()->SetTitle("Trigger efficiency");
   b1__5->GetYaxis()->SetNdivisions(520);
   b1__5->GetYaxis()->SetLabelFont(42);
   b1__5->GetYaxis()->SetLabelSize(0.05);
   b1__5->GetYaxis()->SetTitleSize(0.05);
   b1__5->GetYaxis()->SetTitleOffset(1.1);
   b1__5->GetYaxis()->SetTitleFont(42);
   b1__5->GetZaxis()->SetLabelFont(42);
   b1__5->GetZaxis()->SetLabelSize(0.035);
   b1__5->GetZaxis()->SetTitleSize(0.035);
   b1__5->GetZaxis()->SetTitleFont(42);
   b1__5->Draw("");
   
   TEfficiency * hden0_clone13 = new TEfficiency("hden0_clone","",50,0,50);
   
   hden0_clone13->SetConfidenceLevel(0.6826895);
   hden0_clone13->SetBetaAlpha(1);
   hden0_clone13->SetBetaBeta(1);
   hden0_clone13->SetWeight(1);
   hden0_clone13->SetStatisticOption(0);
   hden0_clone13->SetPosteriorMode(0);
   hden0_clone13->SetShortestInterval(0);
   hden0_clone13->SetTotalEvents(0,0);
   hden0_clone13->SetPassedEvents(0,0);
   hden0_clone13->SetTotalEvents(1,0);
   hden0_clone13->SetPassedEvents(1,0);
   hden0_clone13->SetTotalEvents(2,6);
   hden0_clone13->SetPassedEvents(2,6);
   hden0_clone13->SetTotalEvents(3,5);
   hden0_clone13->SetPassedEvents(3,4);
   hden0_clone13->SetTotalEvents(4,5);
   hden0_clone13->SetPassedEvents(4,5);
   hden0_clone13->SetTotalEvents(5,6);
   hden0_clone13->SetPassedEvents(5,6);
   hden0_clone13->SetTotalEvents(6,9);
   hden0_clone13->SetPassedEvents(6,8);
   hden0_clone13->SetTotalEvents(7,6);
   hden0_clone13->SetPassedEvents(7,5);
   hden0_clone13->SetTotalEvents(8,3);
   hden0_clone13->SetPassedEvents(8,2);
   hden0_clone13->SetTotalEvents(9,5);
   hden0_clone13->SetPassedEvents(9,5);
   hden0_clone13->SetTotalEvents(10,3);
   hden0_clone13->SetPassedEvents(10,3);
   hden0_clone13->SetTotalEvents(11,6);
   hden0_clone13->SetPassedEvents(11,6);
   hden0_clone13->SetTotalEvents(12,6);
   hden0_clone13->SetPassedEvents(12,6);
   hden0_clone13->SetTotalEvents(13,6);
   hden0_clone13->SetPassedEvents(13,6);
   hden0_clone13->SetTotalEvents(14,0);
   hden0_clone13->SetPassedEvents(14,0);
   hden0_clone13->SetTotalEvents(15,5);
   hden0_clone13->SetPassedEvents(15,4);
   hden0_clone13->SetTotalEvents(16,2);
   hden0_clone13->SetPassedEvents(16,2);
   hden0_clone13->SetTotalEvents(17,2);
   hden0_clone13->SetPassedEvents(17,2);
   hden0_clone13->SetTotalEvents(18,4);
   hden0_clone13->SetPassedEvents(18,4);
   hden0_clone13->SetTotalEvents(19,1);
   hden0_clone13->SetPassedEvents(19,1);
   hden0_clone13->SetTotalEvents(20,2);
   hden0_clone13->SetPassedEvents(20,2);
   hden0_clone13->SetTotalEvents(21,3);
   hden0_clone13->SetPassedEvents(21,3);
   hden0_clone13->SetTotalEvents(22,3);
   hden0_clone13->SetPassedEvents(22,3);
   hden0_clone13->SetTotalEvents(23,0);
   hden0_clone13->SetPassedEvents(23,0);
   hden0_clone13->SetTotalEvents(24,0);
   hden0_clone13->SetPassedEvents(24,0);
   hden0_clone13->SetTotalEvents(25,1);
   hden0_clone13->SetPassedEvents(25,1);
   hden0_clone13->SetTotalEvents(26,2);
   hden0_clone13->SetPassedEvents(26,2);
   hden0_clone13->SetTotalEvents(27,3);
   hden0_clone13->SetPassedEvents(27,3);
   hden0_clone13->SetTotalEvents(28,0);
   hden0_clone13->SetPassedEvents(28,0);
   hden0_clone13->SetTotalEvents(29,2);
   hden0_clone13->SetPassedEvents(29,2);
   hden0_clone13->SetTotalEvents(30,4);
   hden0_clone13->SetPassedEvents(30,4);
   hden0_clone13->SetTotalEvents(31,0);
   hden0_clone13->SetPassedEvents(31,0);
   hden0_clone13->SetTotalEvents(32,0);
   hden0_clone13->SetPassedEvents(32,0);
   hden0_clone13->SetTotalEvents(33,2);
   hden0_clone13->SetPassedEvents(33,2);
   hden0_clone13->SetTotalEvents(34,1);
   hden0_clone13->SetPassedEvents(34,1);
   hden0_clone13->SetTotalEvents(35,1);
   hden0_clone13->SetPassedEvents(35,1);
   hden0_clone13->SetTotalEvents(36,2);
   hden0_clone13->SetPassedEvents(36,2);
   hden0_clone13->SetTotalEvents(37,0);
   hden0_clone13->SetPassedEvents(37,0);
   hden0_clone13->SetTotalEvents(38,0);
   hden0_clone13->SetPassedEvents(38,0);
   hden0_clone13->SetTotalEvents(39,1);
   hden0_clone13->SetPassedEvents(39,0);
   hden0_clone13->SetTotalEvents(40,0);
   hden0_clone13->SetPassedEvents(40,0);
   hden0_clone13->SetTotalEvents(41,0);
   hden0_clone13->SetPassedEvents(41,0);
   hden0_clone13->SetTotalEvents(42,3);
   hden0_clone13->SetPassedEvents(42,3);
   hden0_clone13->SetTotalEvents(43,0);
   hden0_clone13->SetPassedEvents(43,0);
   hden0_clone13->SetTotalEvents(44,0);
   hden0_clone13->SetPassedEvents(44,0);
   hden0_clone13->SetTotalEvents(45,1);
   hden0_clone13->SetPassedEvents(45,1);
   hden0_clone13->SetTotalEvents(46,0);
   hden0_clone13->SetPassedEvents(46,0);
   hden0_clone13->SetTotalEvents(47,1);
   hden0_clone13->SetPassedEvents(47,1);
   hden0_clone13->SetTotalEvents(48,1);
   hden0_clone13->SetPassedEvents(48,1);
   hden0_clone13->SetTotalEvents(49,1);
   hden0_clone13->SetPassedEvents(49,0);
   hden0_clone13->SetTotalEvents(50,0);
   hden0_clone13->SetPassedEvents(50,0);
   hden0_clone13->SetTotalEvents(51,16);
   hden0_clone13->SetPassedEvents(51,16);
   hden0_clone13->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone13->SetLineColor(ci);
   hden0_clone13->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone13->SetMarkerColor(ci);
   hden0_clone13->SetMarkerStyle(24);
   hden0_clone13->Draw("samezp");
   
   TEfficiency * hden1_clone14 = new TEfficiency("hden1_clone","",50,0,50);
   
   hden1_clone14->SetConfidenceLevel(0.6826895);
   hden1_clone14->SetBetaAlpha(1);
   hden1_clone14->SetBetaBeta(1);
   hden1_clone14->SetWeight(1);
   hden1_clone14->SetStatisticOption(0);
   hden1_clone14->SetPosteriorMode(0);
   hden1_clone14->SetShortestInterval(0);
   hden1_clone14->SetTotalEvents(0,0);
   hden1_clone14->SetPassedEvents(0,0);
   hden1_clone14->SetTotalEvents(1,0);
   hden1_clone14->SetPassedEvents(1,0);
   hden1_clone14->SetTotalEvents(2,6);
   hden1_clone14->SetPassedEvents(2,6);
   hden1_clone14->SetTotalEvents(3,5);
   hden1_clone14->SetPassedEvents(3,4);
   hden1_clone14->SetTotalEvents(4,5);
   hden1_clone14->SetPassedEvents(4,5);
   hden1_clone14->SetTotalEvents(5,6);
   hden1_clone14->SetPassedEvents(5,6);
   hden1_clone14->SetTotalEvents(6,9);
   hden1_clone14->SetPassedEvents(6,8);
   hden1_clone14->SetTotalEvents(7,6);
   hden1_clone14->SetPassedEvents(7,5);
   hden1_clone14->SetTotalEvents(8,3);
   hden1_clone14->SetPassedEvents(8,2);
   hden1_clone14->SetTotalEvents(9,5);
   hden1_clone14->SetPassedEvents(9,5);
   hden1_clone14->SetTotalEvents(10,3);
   hden1_clone14->SetPassedEvents(10,3);
   hden1_clone14->SetTotalEvents(11,6);
   hden1_clone14->SetPassedEvents(11,6);
   hden1_clone14->SetTotalEvents(12,6);
   hden1_clone14->SetPassedEvents(12,5);
   hden1_clone14->SetTotalEvents(13,6);
   hden1_clone14->SetPassedEvents(13,6);
   hden1_clone14->SetTotalEvents(14,0);
   hden1_clone14->SetPassedEvents(14,0);
   hden1_clone14->SetTotalEvents(15,5);
   hden1_clone14->SetPassedEvents(15,4);
   hden1_clone14->SetTotalEvents(16,2);
   hden1_clone14->SetPassedEvents(16,2);
   hden1_clone14->SetTotalEvents(17,2);
   hden1_clone14->SetPassedEvents(17,2);
   hden1_clone14->SetTotalEvents(18,4);
   hden1_clone14->SetPassedEvents(18,4);
   hden1_clone14->SetTotalEvents(19,1);
   hden1_clone14->SetPassedEvents(19,1);
   hden1_clone14->SetTotalEvents(20,2);
   hden1_clone14->SetPassedEvents(20,2);
   hden1_clone14->SetTotalEvents(21,3);
   hden1_clone14->SetPassedEvents(21,3);
   hden1_clone14->SetTotalEvents(22,3);
   hden1_clone14->SetPassedEvents(22,3);
   hden1_clone14->SetTotalEvents(23,0);
   hden1_clone14->SetPassedEvents(23,0);
   hden1_clone14->SetTotalEvents(24,0);
   hden1_clone14->SetPassedEvents(24,0);
   hden1_clone14->SetTotalEvents(25,1);
   hden1_clone14->SetPassedEvents(25,1);
   hden1_clone14->SetTotalEvents(26,2);
   hden1_clone14->SetPassedEvents(26,2);
   hden1_clone14->SetTotalEvents(27,3);
   hden1_clone14->SetPassedEvents(27,3);
   hden1_clone14->SetTotalEvents(28,0);
   hden1_clone14->SetPassedEvents(28,0);
   hden1_clone14->SetTotalEvents(29,2);
   hden1_clone14->SetPassedEvents(29,1);
   hden1_clone14->SetTotalEvents(30,4);
   hden1_clone14->SetPassedEvents(30,4);
   hden1_clone14->SetTotalEvents(31,0);
   hden1_clone14->SetPassedEvents(31,0);
   hden1_clone14->SetTotalEvents(32,0);
   hden1_clone14->SetPassedEvents(32,0);
   hden1_clone14->SetTotalEvents(33,2);
   hden1_clone14->SetPassedEvents(33,2);
   hden1_clone14->SetTotalEvents(34,1);
   hden1_clone14->SetPassedEvents(34,1);
   hden1_clone14->SetTotalEvents(35,1);
   hden1_clone14->SetPassedEvents(35,1);
   hden1_clone14->SetTotalEvents(36,2);
   hden1_clone14->SetPassedEvents(36,2);
   hden1_clone14->SetTotalEvents(37,0);
   hden1_clone14->SetPassedEvents(37,0);
   hden1_clone14->SetTotalEvents(38,0);
   hden1_clone14->SetPassedEvents(38,0);
   hden1_clone14->SetTotalEvents(39,1);
   hden1_clone14->SetPassedEvents(39,0);
   hden1_clone14->SetTotalEvents(40,0);
   hden1_clone14->SetPassedEvents(40,0);
   hden1_clone14->SetTotalEvents(41,0);
   hden1_clone14->SetPassedEvents(41,0);
   hden1_clone14->SetTotalEvents(42,3);
   hden1_clone14->SetPassedEvents(42,3);
   hden1_clone14->SetTotalEvents(43,0);
   hden1_clone14->SetPassedEvents(43,0);
   hden1_clone14->SetTotalEvents(44,0);
   hden1_clone14->SetPassedEvents(44,0);
   hden1_clone14->SetTotalEvents(45,1);
   hden1_clone14->SetPassedEvents(45,1);
   hden1_clone14->SetTotalEvents(46,0);
   hden1_clone14->SetPassedEvents(46,0);
   hden1_clone14->SetTotalEvents(47,1);
   hden1_clone14->SetPassedEvents(47,1);
   hden1_clone14->SetTotalEvents(48,1);
   hden1_clone14->SetPassedEvents(48,1);
   hden1_clone14->SetTotalEvents(49,1);
   hden1_clone14->SetPassedEvents(49,0);
   hden1_clone14->SetTotalEvents(50,0);
   hden1_clone14->SetPassedEvents(50,0);
   hden1_clone14->SetTotalEvents(51,16);
   hden1_clone14->SetPassedEvents(51,16);
   hden1_clone14->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone14->SetLineColor(ci);
   hden1_clone14->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone14->SetMarkerColor(ci);
   hden1_clone14->SetMarkerStyle(21);
   hden1_clone14->Draw("samezp");
   
   TEfficiency * hden2_clone15 = new TEfficiency("hden2_clone","",50,0,50);
   
   hden2_clone15->SetConfidenceLevel(0.6826895);
   hden2_clone15->SetBetaAlpha(1);
   hden2_clone15->SetBetaBeta(1);
   hden2_clone15->SetWeight(1);
   hden2_clone15->SetStatisticOption(0);
   hden2_clone15->SetPosteriorMode(0);
   hden2_clone15->SetShortestInterval(0);
   hden2_clone15->SetTotalEvents(0,0);
   hden2_clone15->SetPassedEvents(0,0);
   hden2_clone15->SetTotalEvents(1,0);
   hden2_clone15->SetPassedEvents(1,0);
   hden2_clone15->SetTotalEvents(2,6);
   hden2_clone15->SetPassedEvents(2,6);
   hden2_clone15->SetTotalEvents(3,5);
   hden2_clone15->SetPassedEvents(3,4);
   hden2_clone15->SetTotalEvents(4,5);
   hden2_clone15->SetPassedEvents(4,5);
   hden2_clone15->SetTotalEvents(5,6);
   hden2_clone15->SetPassedEvents(5,6);
   hden2_clone15->SetTotalEvents(6,9);
   hden2_clone15->SetPassedEvents(6,8);
   hden2_clone15->SetTotalEvents(7,6);
   hden2_clone15->SetPassedEvents(7,5);
   hden2_clone15->SetTotalEvents(8,3);
   hden2_clone15->SetPassedEvents(8,2);
   hden2_clone15->SetTotalEvents(9,5);
   hden2_clone15->SetPassedEvents(9,5);
   hden2_clone15->SetTotalEvents(10,3);
   hden2_clone15->SetPassedEvents(10,3);
   hden2_clone15->SetTotalEvents(11,6);
   hden2_clone15->SetPassedEvents(11,6);
   hden2_clone15->SetTotalEvents(12,6);
   hden2_clone15->SetPassedEvents(12,5);
   hden2_clone15->SetTotalEvents(13,6);
   hden2_clone15->SetPassedEvents(13,5);
   hden2_clone15->SetTotalEvents(14,0);
   hden2_clone15->SetPassedEvents(14,0);
   hden2_clone15->SetTotalEvents(15,5);
   hden2_clone15->SetPassedEvents(15,5);
   hden2_clone15->SetTotalEvents(16,2);
   hden2_clone15->SetPassedEvents(16,2);
   hden2_clone15->SetTotalEvents(17,2);
   hden2_clone15->SetPassedEvents(17,2);
   hden2_clone15->SetTotalEvents(18,4);
   hden2_clone15->SetPassedEvents(18,4);
   hden2_clone15->SetTotalEvents(19,1);
   hden2_clone15->SetPassedEvents(19,1);
   hden2_clone15->SetTotalEvents(20,2);
   hden2_clone15->SetPassedEvents(20,2);
   hden2_clone15->SetTotalEvents(21,3);
   hden2_clone15->SetPassedEvents(21,2);
   hden2_clone15->SetTotalEvents(22,3);
   hden2_clone15->SetPassedEvents(22,3);
   hden2_clone15->SetTotalEvents(23,0);
   hden2_clone15->SetPassedEvents(23,0);
   hden2_clone15->SetTotalEvents(24,0);
   hden2_clone15->SetPassedEvents(24,0);
   hden2_clone15->SetTotalEvents(25,1);
   hden2_clone15->SetPassedEvents(25,0);
   hden2_clone15->SetTotalEvents(26,2);
   hden2_clone15->SetPassedEvents(26,1);
   hden2_clone15->SetTotalEvents(27,3);
   hden2_clone15->SetPassedEvents(27,3);
   hden2_clone15->SetTotalEvents(28,0);
   hden2_clone15->SetPassedEvents(28,0);
   hden2_clone15->SetTotalEvents(29,2);
   hden2_clone15->SetPassedEvents(29,2);
   hden2_clone15->SetTotalEvents(30,4);
   hden2_clone15->SetPassedEvents(30,4);
   hden2_clone15->SetTotalEvents(31,0);
   hden2_clone15->SetPassedEvents(31,0);
   hden2_clone15->SetTotalEvents(32,0);
   hden2_clone15->SetPassedEvents(32,0);
   hden2_clone15->SetTotalEvents(33,2);
   hden2_clone15->SetPassedEvents(33,2);
   hden2_clone15->SetTotalEvents(34,1);
   hden2_clone15->SetPassedEvents(34,1);
   hden2_clone15->SetTotalEvents(35,1);
   hden2_clone15->SetPassedEvents(35,1);
   hden2_clone15->SetTotalEvents(36,2);
   hden2_clone15->SetPassedEvents(36,2);
   hden2_clone15->SetTotalEvents(37,0);
   hden2_clone15->SetPassedEvents(37,0);
   hden2_clone15->SetTotalEvents(38,0);
   hden2_clone15->SetPassedEvents(38,0);
   hden2_clone15->SetTotalEvents(39,1);
   hden2_clone15->SetPassedEvents(39,0);
   hden2_clone15->SetTotalEvents(40,0);
   hden2_clone15->SetPassedEvents(40,0);
   hden2_clone15->SetTotalEvents(41,0);
   hden2_clone15->SetPassedEvents(41,0);
   hden2_clone15->SetTotalEvents(42,3);
   hden2_clone15->SetPassedEvents(42,3);
   hden2_clone15->SetTotalEvents(43,0);
   hden2_clone15->SetPassedEvents(43,0);
   hden2_clone15->SetTotalEvents(44,0);
   hden2_clone15->SetPassedEvents(44,0);
   hden2_clone15->SetTotalEvents(45,1);
   hden2_clone15->SetPassedEvents(45,1);
   hden2_clone15->SetTotalEvents(46,0);
   hden2_clone15->SetPassedEvents(46,0);
   hden2_clone15->SetTotalEvents(47,1);
   hden2_clone15->SetPassedEvents(47,1);
   hden2_clone15->SetTotalEvents(48,1);
   hden2_clone15->SetPassedEvents(48,1);
   hden2_clone15->SetTotalEvents(49,1);
   hden2_clone15->SetPassedEvents(49,0);
   hden2_clone15->SetTotalEvents(50,0);
   hden2_clone15->SetPassedEvents(50,0);
   hden2_clone15->SetTotalEvents(51,16);
   hden2_clone15->SetPassedEvents(51,16);
   hden2_clone15->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone15->SetLineColor(ci);
   hden2_clone15->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone15->SetMarkerColor(ci);
   hden2_clone15->SetMarkerStyle(25);
   hden2_clone15->Draw("samezp");
   
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
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","Hybrid algorithm w/o GE21","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden2_clone","Hybrid algorithm w GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 odd,ME21 even,ME31 even}{1.6<|#eta|<1.80, p_{T}^{L1}>10 GeV}");
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
