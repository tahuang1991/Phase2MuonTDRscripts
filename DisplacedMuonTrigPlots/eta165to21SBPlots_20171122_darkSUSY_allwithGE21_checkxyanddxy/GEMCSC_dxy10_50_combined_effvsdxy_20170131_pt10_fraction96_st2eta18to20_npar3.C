void GEMCSC_dxy10_50_combined_effvsdxy_20170131_pt10_fraction96_st2eta18to20_npar3()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:42:09 2017) by ROOT version6.08/06
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
   
   TH1F *b1__47 = new TH1F("b1__47"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,50);
   b1__47->SetMinimum(0);
   b1__47->SetMaximum(1.05);
   b1__47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__47->SetLineColor(ci);
   b1__47->GetXaxis()->SetTitle("|dxy| [cm]");
   b1__47->GetXaxis()->SetLabelFont(42);
   b1__47->GetXaxis()->SetLabelSize(0.05);
   b1__47->GetXaxis()->SetTitleSize(0.05);
   b1__47->GetXaxis()->SetTitleFont(42);
   b1__47->GetYaxis()->SetTitle("Trigger efficiency");
   b1__47->GetYaxis()->SetNdivisions(520);
   b1__47->GetYaxis()->SetLabelFont(42);
   b1__47->GetYaxis()->SetLabelSize(0.05);
   b1__47->GetYaxis()->SetTitleSize(0.05);
   b1__47->GetYaxis()->SetTitleOffset(1.1);
   b1__47->GetYaxis()->SetTitleFont(42);
   b1__47->GetZaxis()->SetLabelFont(42);
   b1__47->GetZaxis()->SetLabelSize(0.035);
   b1__47->GetZaxis()->SetTitleSize(0.035);
   b1__47->GetZaxis()->SetTitleFont(42);
   b1__47->Draw("");
   
   TEfficiency * hden0_clone139 = new TEfficiency("hden0_clone","",50,0,50);
   
   hden0_clone139->SetConfidenceLevel(0.6826895);
   hden0_clone139->SetBetaAlpha(1);
   hden0_clone139->SetBetaBeta(1);
   hden0_clone139->SetWeight(1);
   hden0_clone139->SetStatisticOption(0);
   hden0_clone139->SetPosteriorMode(0);
   hden0_clone139->SetShortestInterval(0);
   hden0_clone139->SetTotalEvents(0,0);
   hden0_clone139->SetPassedEvents(0,0);
   hden0_clone139->SetTotalEvents(1,0);
   hden0_clone139->SetPassedEvents(1,0);
   hden0_clone139->SetTotalEvents(2,26);
   hden0_clone139->SetPassedEvents(2,24);
   hden0_clone139->SetTotalEvents(3,20);
   hden0_clone139->SetPassedEvents(3,16);
   hden0_clone139->SetTotalEvents(4,17);
   hden0_clone139->SetPassedEvents(4,15);
   hden0_clone139->SetTotalEvents(5,14);
   hden0_clone139->SetPassedEvents(5,14);
   hden0_clone139->SetTotalEvents(6,17);
   hden0_clone139->SetPassedEvents(6,16);
   hden0_clone139->SetTotalEvents(7,9);
   hden0_clone139->SetPassedEvents(7,8);
   hden0_clone139->SetTotalEvents(8,18);
   hden0_clone139->SetPassedEvents(8,17);
   hden0_clone139->SetTotalEvents(9,14);
   hden0_clone139->SetPassedEvents(9,14);
   hden0_clone139->SetTotalEvents(10,11);
   hden0_clone139->SetPassedEvents(10,11);
   hden0_clone139->SetTotalEvents(11,11);
   hden0_clone139->SetPassedEvents(11,10);
   hden0_clone139->SetTotalEvents(12,8);
   hden0_clone139->SetPassedEvents(12,8);
   hden0_clone139->SetTotalEvents(13,6);
   hden0_clone139->SetPassedEvents(13,5);
   hden0_clone139->SetTotalEvents(14,6);
   hden0_clone139->SetPassedEvents(14,6);
   hden0_clone139->SetTotalEvents(15,9);
   hden0_clone139->SetPassedEvents(15,8);
   hden0_clone139->SetTotalEvents(16,8);
   hden0_clone139->SetPassedEvents(16,7);
   hden0_clone139->SetTotalEvents(17,7);
   hden0_clone139->SetPassedEvents(17,7);
   hden0_clone139->SetTotalEvents(18,11);
   hden0_clone139->SetPassedEvents(18,11);
   hden0_clone139->SetTotalEvents(19,7);
   hden0_clone139->SetPassedEvents(19,6);
   hden0_clone139->SetTotalEvents(20,3);
   hden0_clone139->SetPassedEvents(20,3);
   hden0_clone139->SetTotalEvents(21,7);
   hden0_clone139->SetPassedEvents(21,7);
   hden0_clone139->SetTotalEvents(22,7);
   hden0_clone139->SetPassedEvents(22,6);
   hden0_clone139->SetTotalEvents(23,10);
   hden0_clone139->SetPassedEvents(23,10);
   hden0_clone139->SetTotalEvents(24,4);
   hden0_clone139->SetPassedEvents(24,4);
   hden0_clone139->SetTotalEvents(25,2);
   hden0_clone139->SetPassedEvents(25,2);
   hden0_clone139->SetTotalEvents(26,4);
   hden0_clone139->SetPassedEvents(26,4);
   hden0_clone139->SetTotalEvents(27,3);
   hden0_clone139->SetPassedEvents(27,3);
   hden0_clone139->SetTotalEvents(28,5);
   hden0_clone139->SetPassedEvents(28,5);
   hden0_clone139->SetTotalEvents(29,2);
   hden0_clone139->SetPassedEvents(29,2);
   hden0_clone139->SetTotalEvents(30,1);
   hden0_clone139->SetPassedEvents(30,1);
   hden0_clone139->SetTotalEvents(31,3);
   hden0_clone139->SetPassedEvents(31,2);
   hden0_clone139->SetTotalEvents(32,3);
   hden0_clone139->SetPassedEvents(32,3);
   hden0_clone139->SetTotalEvents(33,1);
   hden0_clone139->SetPassedEvents(33,1);
   hden0_clone139->SetTotalEvents(34,2);
   hden0_clone139->SetPassedEvents(34,2);
   hden0_clone139->SetTotalEvents(35,4);
   hden0_clone139->SetPassedEvents(35,4);
   hden0_clone139->SetTotalEvents(36,3);
   hden0_clone139->SetPassedEvents(36,3);
   hden0_clone139->SetTotalEvents(37,6);
   hden0_clone139->SetPassedEvents(37,5);
   hden0_clone139->SetTotalEvents(38,4);
   hden0_clone139->SetPassedEvents(38,4);
   hden0_clone139->SetTotalEvents(39,3);
   hden0_clone139->SetPassedEvents(39,2);
   hden0_clone139->SetTotalEvents(40,3);
   hden0_clone139->SetPassedEvents(40,3);
   hden0_clone139->SetTotalEvents(41,2);
   hden0_clone139->SetPassedEvents(41,2);
   hden0_clone139->SetTotalEvents(42,2);
   hden0_clone139->SetPassedEvents(42,2);
   hden0_clone139->SetTotalEvents(43,4);
   hden0_clone139->SetPassedEvents(43,4);
   hden0_clone139->SetTotalEvents(44,2);
   hden0_clone139->SetPassedEvents(44,2);
   hden0_clone139->SetTotalEvents(45,3);
   hden0_clone139->SetPassedEvents(45,3);
   hden0_clone139->SetTotalEvents(46,1);
   hden0_clone139->SetPassedEvents(46,1);
   hden0_clone139->SetTotalEvents(47,0);
   hden0_clone139->SetPassedEvents(47,0);
   hden0_clone139->SetTotalEvents(48,2);
   hden0_clone139->SetPassedEvents(48,1);
   hden0_clone139->SetTotalEvents(49,0);
   hden0_clone139->SetPassedEvents(49,0);
   hden0_clone139->SetTotalEvents(50,0);
   hden0_clone139->SetPassedEvents(50,0);
   hden0_clone139->SetTotalEvents(51,17);
   hden0_clone139->SetPassedEvents(51,16);
   hden0_clone139->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone139->SetLineColor(ci);
   hden0_clone139->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone139->SetMarkerColor(ci);
   hden0_clone139->SetMarkerStyle(24);
   hden0_clone139->Draw("samezp");
   
   TEfficiency * hden1_clone140 = new TEfficiency("hden1_clone","",50,0,50);
   
   hden1_clone140->SetConfidenceLevel(0.6826895);
   hden1_clone140->SetBetaAlpha(1);
   hden1_clone140->SetBetaBeta(1);
   hden1_clone140->SetWeight(1);
   hden1_clone140->SetStatisticOption(0);
   hden1_clone140->SetPosteriorMode(0);
   hden1_clone140->SetShortestInterval(0);
   hden1_clone140->SetTotalEvents(0,0);
   hden1_clone140->SetPassedEvents(0,0);
   hden1_clone140->SetTotalEvents(1,0);
   hden1_clone140->SetPassedEvents(1,0);
   hden1_clone140->SetTotalEvents(2,26);
   hden1_clone140->SetPassedEvents(2,23);
   hden1_clone140->SetTotalEvents(3,20);
   hden1_clone140->SetPassedEvents(3,16);
   hden1_clone140->SetTotalEvents(4,17);
   hden1_clone140->SetPassedEvents(4,16);
   hden1_clone140->SetTotalEvents(5,14);
   hden1_clone140->SetPassedEvents(5,14);
   hden1_clone140->SetTotalEvents(6,17);
   hden1_clone140->SetPassedEvents(6,16);
   hden1_clone140->SetTotalEvents(7,9);
   hden1_clone140->SetPassedEvents(7,8);
   hden1_clone140->SetTotalEvents(8,18);
   hden1_clone140->SetPassedEvents(8,17);
   hden1_clone140->SetTotalEvents(9,14);
   hden1_clone140->SetPassedEvents(9,14);
   hden1_clone140->SetTotalEvents(10,11);
   hden1_clone140->SetPassedEvents(10,9);
   hden1_clone140->SetTotalEvents(11,11);
   hden1_clone140->SetPassedEvents(11,10);
   hden1_clone140->SetTotalEvents(12,8);
   hden1_clone140->SetPassedEvents(12,8);
   hden1_clone140->SetTotalEvents(13,6);
   hden1_clone140->SetPassedEvents(13,5);
   hden1_clone140->SetTotalEvents(14,6);
   hden1_clone140->SetPassedEvents(14,6);
   hden1_clone140->SetTotalEvents(15,9);
   hden1_clone140->SetPassedEvents(15,8);
   hden1_clone140->SetTotalEvents(16,8);
   hden1_clone140->SetPassedEvents(16,7);
   hden1_clone140->SetTotalEvents(17,7);
   hden1_clone140->SetPassedEvents(17,7);
   hden1_clone140->SetTotalEvents(18,11);
   hden1_clone140->SetPassedEvents(18,11);
   hden1_clone140->SetTotalEvents(19,7);
   hden1_clone140->SetPassedEvents(19,6);
   hden1_clone140->SetTotalEvents(20,3);
   hden1_clone140->SetPassedEvents(20,3);
   hden1_clone140->SetTotalEvents(21,7);
   hden1_clone140->SetPassedEvents(21,7);
   hden1_clone140->SetTotalEvents(22,7);
   hden1_clone140->SetPassedEvents(22,6);
   hden1_clone140->SetTotalEvents(23,10);
   hden1_clone140->SetPassedEvents(23,10);
   hden1_clone140->SetTotalEvents(24,4);
   hden1_clone140->SetPassedEvents(24,4);
   hden1_clone140->SetTotalEvents(25,2);
   hden1_clone140->SetPassedEvents(25,2);
   hden1_clone140->SetTotalEvents(26,4);
   hden1_clone140->SetPassedEvents(26,4);
   hden1_clone140->SetTotalEvents(27,3);
   hden1_clone140->SetPassedEvents(27,3);
   hden1_clone140->SetTotalEvents(28,5);
   hden1_clone140->SetPassedEvents(28,5);
   hden1_clone140->SetTotalEvents(29,2);
   hden1_clone140->SetPassedEvents(29,2);
   hden1_clone140->SetTotalEvents(30,1);
   hden1_clone140->SetPassedEvents(30,1);
   hden1_clone140->SetTotalEvents(31,3);
   hden1_clone140->SetPassedEvents(31,2);
   hden1_clone140->SetTotalEvents(32,3);
   hden1_clone140->SetPassedEvents(32,3);
   hden1_clone140->SetTotalEvents(33,1);
   hden1_clone140->SetPassedEvents(33,1);
   hden1_clone140->SetTotalEvents(34,2);
   hden1_clone140->SetPassedEvents(34,2);
   hden1_clone140->SetTotalEvents(35,4);
   hden1_clone140->SetPassedEvents(35,4);
   hden1_clone140->SetTotalEvents(36,3);
   hden1_clone140->SetPassedEvents(36,3);
   hden1_clone140->SetTotalEvents(37,6);
   hden1_clone140->SetPassedEvents(37,5);
   hden1_clone140->SetTotalEvents(38,4);
   hden1_clone140->SetPassedEvents(38,4);
   hden1_clone140->SetTotalEvents(39,3);
   hden1_clone140->SetPassedEvents(39,2);
   hden1_clone140->SetTotalEvents(40,3);
   hden1_clone140->SetPassedEvents(40,3);
   hden1_clone140->SetTotalEvents(41,2);
   hden1_clone140->SetPassedEvents(41,2);
   hden1_clone140->SetTotalEvents(42,2);
   hden1_clone140->SetPassedEvents(42,2);
   hden1_clone140->SetTotalEvents(43,4);
   hden1_clone140->SetPassedEvents(43,4);
   hden1_clone140->SetTotalEvents(44,2);
   hden1_clone140->SetPassedEvents(44,2);
   hden1_clone140->SetTotalEvents(45,3);
   hden1_clone140->SetPassedEvents(45,3);
   hden1_clone140->SetTotalEvents(46,1);
   hden1_clone140->SetPassedEvents(46,1);
   hden1_clone140->SetTotalEvents(47,0);
   hden1_clone140->SetPassedEvents(47,0);
   hden1_clone140->SetTotalEvents(48,2);
   hden1_clone140->SetPassedEvents(48,1);
   hden1_clone140->SetTotalEvents(49,0);
   hden1_clone140->SetPassedEvents(49,0);
   hden1_clone140->SetTotalEvents(50,0);
   hden1_clone140->SetPassedEvents(50,0);
   hden1_clone140->SetTotalEvents(51,17);
   hden1_clone140->SetPassedEvents(51,16);
   hden1_clone140->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone140->SetLineColor(ci);
   hden1_clone140->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone140->SetMarkerColor(ci);
   hden1_clone140->SetMarkerStyle(21);
   hden1_clone140->Draw("samezp");
   
   TEfficiency * hden2_clone141 = new TEfficiency("hden2_clone","",50,0,50);
   
   hden2_clone141->SetConfidenceLevel(0.6826895);
   hden2_clone141->SetBetaAlpha(1);
   hden2_clone141->SetBetaBeta(1);
   hden2_clone141->SetWeight(1);
   hden2_clone141->SetStatisticOption(0);
   hden2_clone141->SetPosteriorMode(0);
   hden2_clone141->SetShortestInterval(0);
   hden2_clone141->SetTotalEvents(0,0);
   hden2_clone141->SetPassedEvents(0,0);
   hden2_clone141->SetTotalEvents(1,0);
   hden2_clone141->SetPassedEvents(1,0);
   hden2_clone141->SetTotalEvents(2,26);
   hden2_clone141->SetPassedEvents(2,24);
   hden2_clone141->SetTotalEvents(3,20);
   hden2_clone141->SetPassedEvents(3,16);
   hden2_clone141->SetTotalEvents(4,17);
   hden2_clone141->SetPassedEvents(4,16);
   hden2_clone141->SetTotalEvents(5,14);
   hden2_clone141->SetPassedEvents(5,14);
   hden2_clone141->SetTotalEvents(6,17);
   hden2_clone141->SetPassedEvents(6,16);
   hden2_clone141->SetTotalEvents(7,9);
   hden2_clone141->SetPassedEvents(7,8);
   hden2_clone141->SetTotalEvents(8,18);
   hden2_clone141->SetPassedEvents(8,18);
   hden2_clone141->SetTotalEvents(9,14);
   hden2_clone141->SetPassedEvents(9,12);
   hden2_clone141->SetTotalEvents(10,11);
   hden2_clone141->SetPassedEvents(10,11);
   hden2_clone141->SetTotalEvents(11,11);
   hden2_clone141->SetPassedEvents(11,10);
   hden2_clone141->SetTotalEvents(12,8);
   hden2_clone141->SetPassedEvents(12,8);
   hden2_clone141->SetTotalEvents(13,6);
   hden2_clone141->SetPassedEvents(13,5);
   hden2_clone141->SetTotalEvents(14,6);
   hden2_clone141->SetPassedEvents(14,6);
   hden2_clone141->SetTotalEvents(15,9);
   hden2_clone141->SetPassedEvents(15,7);
   hden2_clone141->SetTotalEvents(16,8);
   hden2_clone141->SetPassedEvents(16,6);
   hden2_clone141->SetTotalEvents(17,7);
   hden2_clone141->SetPassedEvents(17,7);
   hden2_clone141->SetTotalEvents(18,11);
   hden2_clone141->SetPassedEvents(18,9);
   hden2_clone141->SetTotalEvents(19,7);
   hden2_clone141->SetPassedEvents(19,4);
   hden2_clone141->SetTotalEvents(20,3);
   hden2_clone141->SetPassedEvents(20,3);
   hden2_clone141->SetTotalEvents(21,7);
   hden2_clone141->SetPassedEvents(21,7);
   hden2_clone141->SetTotalEvents(22,7);
   hden2_clone141->SetPassedEvents(22,5);
   hden2_clone141->SetTotalEvents(23,10);
   hden2_clone141->SetPassedEvents(23,10);
   hden2_clone141->SetTotalEvents(24,4);
   hden2_clone141->SetPassedEvents(24,4);
   hden2_clone141->SetTotalEvents(25,2);
   hden2_clone141->SetPassedEvents(25,2);
   hden2_clone141->SetTotalEvents(26,4);
   hden2_clone141->SetPassedEvents(26,4);
   hden2_clone141->SetTotalEvents(27,3);
   hden2_clone141->SetPassedEvents(27,3);
   hden2_clone141->SetTotalEvents(28,5);
   hden2_clone141->SetPassedEvents(28,4);
   hden2_clone141->SetTotalEvents(29,2);
   hden2_clone141->SetPassedEvents(29,1);
   hden2_clone141->SetTotalEvents(30,1);
   hden2_clone141->SetPassedEvents(30,1);
   hden2_clone141->SetTotalEvents(31,3);
   hden2_clone141->SetPassedEvents(31,2);
   hden2_clone141->SetTotalEvents(32,3);
   hden2_clone141->SetPassedEvents(32,2);
   hden2_clone141->SetTotalEvents(33,1);
   hden2_clone141->SetPassedEvents(33,1);
   hden2_clone141->SetTotalEvents(34,2);
   hden2_clone141->SetPassedEvents(34,2);
   hden2_clone141->SetTotalEvents(35,4);
   hden2_clone141->SetPassedEvents(35,1);
   hden2_clone141->SetTotalEvents(36,3);
   hden2_clone141->SetPassedEvents(36,3);
   hden2_clone141->SetTotalEvents(37,6);
   hden2_clone141->SetPassedEvents(37,4);
   hden2_clone141->SetTotalEvents(38,4);
   hden2_clone141->SetPassedEvents(38,4);
   hden2_clone141->SetTotalEvents(39,3);
   hden2_clone141->SetPassedEvents(39,2);
   hden2_clone141->SetTotalEvents(40,3);
   hden2_clone141->SetPassedEvents(40,2);
   hden2_clone141->SetTotalEvents(41,2);
   hden2_clone141->SetPassedEvents(41,2);
   hden2_clone141->SetTotalEvents(42,2);
   hden2_clone141->SetPassedEvents(42,2);
   hden2_clone141->SetTotalEvents(43,4);
   hden2_clone141->SetPassedEvents(43,4);
   hden2_clone141->SetTotalEvents(44,2);
   hden2_clone141->SetPassedEvents(44,2);
   hden2_clone141->SetTotalEvents(45,3);
   hden2_clone141->SetPassedEvents(45,1);
   hden2_clone141->SetTotalEvents(46,1);
   hden2_clone141->SetPassedEvents(46,1);
   hden2_clone141->SetTotalEvents(47,0);
   hden2_clone141->SetPassedEvents(47,0);
   hden2_clone141->SetTotalEvents(48,2);
   hden2_clone141->SetPassedEvents(48,1);
   hden2_clone141->SetTotalEvents(49,0);
   hden2_clone141->SetPassedEvents(49,0);
   hden2_clone141->SetTotalEvents(50,0);
   hden2_clone141->SetPassedEvents(50,0);
   hden2_clone141->SetTotalEvents(51,17);
   hden2_clone141->SetPassedEvents(51,12);
   hden2_clone141->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone141->SetLineColor(ci);
   hden2_clone141->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone141->SetMarkerColor(ci);
   hden2_clone141->SetMarkerStyle(25);
   hden2_clone141->Draw("samezp");
   
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
