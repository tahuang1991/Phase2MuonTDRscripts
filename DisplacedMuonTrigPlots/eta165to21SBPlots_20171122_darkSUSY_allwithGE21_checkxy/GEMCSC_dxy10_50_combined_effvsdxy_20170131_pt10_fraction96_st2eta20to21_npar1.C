void GEMCSC_dxy10_50_combined_effvsdxy_20170131_pt10_fraction96_st2eta20to21_npar1()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:14:41 2017) by ROOT version6.08/06
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
   
   TH1F *b1__59 = new TH1F("b1__59"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,50);
   b1__59->SetMinimum(0);
   b1__59->SetMaximum(1.05);
   b1__59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__59->SetLineColor(ci);
   b1__59->GetXaxis()->SetTitle("|dxy| [cm]");
   b1__59->GetXaxis()->SetLabelFont(42);
   b1__59->GetXaxis()->SetLabelSize(0.05);
   b1__59->GetXaxis()->SetTitleSize(0.05);
   b1__59->GetXaxis()->SetTitleFont(42);
   b1__59->GetYaxis()->SetTitle("Trigger efficiency");
   b1__59->GetYaxis()->SetNdivisions(520);
   b1__59->GetYaxis()->SetLabelFont(42);
   b1__59->GetYaxis()->SetLabelSize(0.05);
   b1__59->GetYaxis()->SetTitleSize(0.05);
   b1__59->GetYaxis()->SetTitleOffset(1.1);
   b1__59->GetYaxis()->SetTitleFont(42);
   b1__59->GetZaxis()->SetLabelFont(42);
   b1__59->GetZaxis()->SetLabelSize(0.035);
   b1__59->GetZaxis()->SetTitleSize(0.035);
   b1__59->GetZaxis()->SetTitleFont(42);
   b1__59->Draw("");
   
   TEfficiency * hden0_clone175 = new TEfficiency("hden0_clone","",50,0,50);
   
   hden0_clone175->SetConfidenceLevel(0.6826895);
   hden0_clone175->SetBetaAlpha(1);
   hden0_clone175->SetBetaBeta(1);
   hden0_clone175->SetWeight(1);
   hden0_clone175->SetStatisticOption(0);
   hden0_clone175->SetPosteriorMode(0);
   hden0_clone175->SetShortestInterval(0);
   hden0_clone175->SetTotalEvents(0,0);
   hden0_clone175->SetPassedEvents(0,0);
   hden0_clone175->SetTotalEvents(1,68);
   hden0_clone175->SetPassedEvents(1,64);
   hden0_clone175->SetTotalEvents(2,36);
   hden0_clone175->SetPassedEvents(2,31);
   hden0_clone175->SetTotalEvents(3,34);
   hden0_clone175->SetPassedEvents(3,30);
   hden0_clone175->SetTotalEvents(4,36);
   hden0_clone175->SetPassedEvents(4,32);
   hden0_clone175->SetTotalEvents(5,31);
   hden0_clone175->SetPassedEvents(5,29);
   hden0_clone175->SetTotalEvents(6,26);
   hden0_clone175->SetPassedEvents(6,24);
   hden0_clone175->SetTotalEvents(7,26);
   hden0_clone175->SetPassedEvents(7,23);
   hden0_clone175->SetTotalEvents(8,25);
   hden0_clone175->SetPassedEvents(8,20);
   hden0_clone175->SetTotalEvents(9,21);
   hden0_clone175->SetPassedEvents(9,19);
   hden0_clone175->SetTotalEvents(10,18);
   hden0_clone175->SetPassedEvents(10,17);
   hden0_clone175->SetTotalEvents(11,17);
   hden0_clone175->SetPassedEvents(11,15);
   hden0_clone175->SetTotalEvents(12,16);
   hden0_clone175->SetPassedEvents(12,16);
   hden0_clone175->SetTotalEvents(13,21);
   hden0_clone175->SetPassedEvents(13,19);
   hden0_clone175->SetTotalEvents(14,12);
   hden0_clone175->SetPassedEvents(14,12);
   hden0_clone175->SetTotalEvents(15,12);
   hden0_clone175->SetPassedEvents(15,12);
   hden0_clone175->SetTotalEvents(16,14);
   hden0_clone175->SetPassedEvents(16,14);
   hden0_clone175->SetTotalEvents(17,10);
   hden0_clone175->SetPassedEvents(17,10);
   hden0_clone175->SetTotalEvents(18,17);
   hden0_clone175->SetPassedEvents(18,15);
   hden0_clone175->SetTotalEvents(19,11);
   hden0_clone175->SetPassedEvents(19,11);
   hden0_clone175->SetTotalEvents(20,10);
   hden0_clone175->SetPassedEvents(20,10);
   hden0_clone175->SetTotalEvents(21,8);
   hden0_clone175->SetPassedEvents(21,7);
   hden0_clone175->SetTotalEvents(22,13);
   hden0_clone175->SetPassedEvents(22,12);
   hden0_clone175->SetTotalEvents(23,11);
   hden0_clone175->SetPassedEvents(23,10);
   hden0_clone175->SetTotalEvents(24,13);
   hden0_clone175->SetPassedEvents(24,13);
   hden0_clone175->SetTotalEvents(25,6);
   hden0_clone175->SetPassedEvents(25,5);
   hden0_clone175->SetTotalEvents(26,5);
   hden0_clone175->SetPassedEvents(26,4);
   hden0_clone175->SetTotalEvents(27,11);
   hden0_clone175->SetPassedEvents(27,11);
   hden0_clone175->SetTotalEvents(28,6);
   hden0_clone175->SetPassedEvents(28,6);
   hden0_clone175->SetTotalEvents(29,10);
   hden0_clone175->SetPassedEvents(29,10);
   hden0_clone175->SetTotalEvents(30,12);
   hden0_clone175->SetPassedEvents(30,12);
   hden0_clone175->SetTotalEvents(31,3);
   hden0_clone175->SetPassedEvents(31,3);
   hden0_clone175->SetTotalEvents(32,4);
   hden0_clone175->SetPassedEvents(32,3);
   hden0_clone175->SetTotalEvents(33,13);
   hden0_clone175->SetPassedEvents(33,13);
   hden0_clone175->SetTotalEvents(34,4);
   hden0_clone175->SetPassedEvents(34,4);
   hden0_clone175->SetTotalEvents(35,7);
   hden0_clone175->SetPassedEvents(35,5);
   hden0_clone175->SetTotalEvents(36,10);
   hden0_clone175->SetPassedEvents(36,10);
   hden0_clone175->SetTotalEvents(37,10);
   hden0_clone175->SetPassedEvents(37,9);
   hden0_clone175->SetTotalEvents(38,5);
   hden0_clone175->SetPassedEvents(38,5);
   hden0_clone175->SetTotalEvents(39,4);
   hden0_clone175->SetPassedEvents(39,3);
   hden0_clone175->SetTotalEvents(40,8);
   hden0_clone175->SetPassedEvents(40,7);
   hden0_clone175->SetTotalEvents(41,4);
   hden0_clone175->SetPassedEvents(41,4);
   hden0_clone175->SetTotalEvents(42,3);
   hden0_clone175->SetPassedEvents(42,3);
   hden0_clone175->SetTotalEvents(43,5);
   hden0_clone175->SetPassedEvents(43,4);
   hden0_clone175->SetTotalEvents(44,5);
   hden0_clone175->SetPassedEvents(44,5);
   hden0_clone175->SetTotalEvents(45,6);
   hden0_clone175->SetPassedEvents(45,6);
   hden0_clone175->SetTotalEvents(46,6);
   hden0_clone175->SetPassedEvents(46,6);
   hden0_clone175->SetTotalEvents(47,2);
   hden0_clone175->SetPassedEvents(47,2);
   hden0_clone175->SetTotalEvents(48,4);
   hden0_clone175->SetPassedEvents(48,4);
   hden0_clone175->SetTotalEvents(49,8);
   hden0_clone175->SetPassedEvents(49,7);
   hden0_clone175->SetTotalEvents(50,1);
   hden0_clone175->SetPassedEvents(50,1);
   hden0_clone175->SetTotalEvents(51,221);
   hden0_clone175->SetPassedEvents(51,214);
   hden0_clone175->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone175->SetLineColor(ci);
   hden0_clone175->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone175->SetMarkerColor(ci);
   hden0_clone175->SetMarkerStyle(24);
   hden0_clone175->Draw("samezp");
   
   TEfficiency * hden1_clone176 = new TEfficiency("hden1_clone","",50,0,50);
   
   hden1_clone176->SetConfidenceLevel(0.6826895);
   hden1_clone176->SetBetaAlpha(1);
   hden1_clone176->SetBetaBeta(1);
   hden1_clone176->SetWeight(1);
   hden1_clone176->SetStatisticOption(0);
   hden1_clone176->SetPosteriorMode(0);
   hden1_clone176->SetShortestInterval(0);
   hden1_clone176->SetTotalEvents(0,0);
   hden1_clone176->SetPassedEvents(0,0);
   hden1_clone176->SetTotalEvents(1,68);
   hden1_clone176->SetPassedEvents(1,62);
   hden1_clone176->SetTotalEvents(2,36);
   hden1_clone176->SetPassedEvents(2,31);
   hden1_clone176->SetTotalEvents(3,34);
   hden1_clone176->SetPassedEvents(3,28);
   hden1_clone176->SetTotalEvents(4,36);
   hden1_clone176->SetPassedEvents(4,29);
   hden1_clone176->SetTotalEvents(5,31);
   hden1_clone176->SetPassedEvents(5,27);
   hden1_clone176->SetTotalEvents(6,26);
   hden1_clone176->SetPassedEvents(6,23);
   hden1_clone176->SetTotalEvents(7,26);
   hden1_clone176->SetPassedEvents(7,21);
   hden1_clone176->SetTotalEvents(8,25);
   hden1_clone176->SetPassedEvents(8,20);
   hden1_clone176->SetTotalEvents(9,21);
   hden1_clone176->SetPassedEvents(9,19);
   hden1_clone176->SetTotalEvents(10,18);
   hden1_clone176->SetPassedEvents(10,17);
   hden1_clone176->SetTotalEvents(11,17);
   hden1_clone176->SetPassedEvents(11,15);
   hden1_clone176->SetTotalEvents(12,16);
   hden1_clone176->SetPassedEvents(12,16);
   hden1_clone176->SetTotalEvents(13,21);
   hden1_clone176->SetPassedEvents(13,18);
   hden1_clone176->SetTotalEvents(14,12);
   hden1_clone176->SetPassedEvents(14,12);
   hden1_clone176->SetTotalEvents(15,12);
   hden1_clone176->SetPassedEvents(15,11);
   hden1_clone176->SetTotalEvents(16,14);
   hden1_clone176->SetPassedEvents(16,13);
   hden1_clone176->SetTotalEvents(17,10);
   hden1_clone176->SetPassedEvents(17,10);
   hden1_clone176->SetTotalEvents(18,17);
   hden1_clone176->SetPassedEvents(18,14);
   hden1_clone176->SetTotalEvents(19,11);
   hden1_clone176->SetPassedEvents(19,11);
   hden1_clone176->SetTotalEvents(20,10);
   hden1_clone176->SetPassedEvents(20,10);
   hden1_clone176->SetTotalEvents(21,8);
   hden1_clone176->SetPassedEvents(21,7);
   hden1_clone176->SetTotalEvents(22,13);
   hden1_clone176->SetPassedEvents(22,12);
   hden1_clone176->SetTotalEvents(23,11);
   hden1_clone176->SetPassedEvents(23,11);
   hden1_clone176->SetTotalEvents(24,13);
   hden1_clone176->SetPassedEvents(24,13);
   hden1_clone176->SetTotalEvents(25,6);
   hden1_clone176->SetPassedEvents(25,5);
   hden1_clone176->SetTotalEvents(26,5);
   hden1_clone176->SetPassedEvents(26,3);
   hden1_clone176->SetTotalEvents(27,11);
   hden1_clone176->SetPassedEvents(27,11);
   hden1_clone176->SetTotalEvents(28,6);
   hden1_clone176->SetPassedEvents(28,6);
   hden1_clone176->SetTotalEvents(29,10);
   hden1_clone176->SetPassedEvents(29,10);
   hden1_clone176->SetTotalEvents(30,12);
   hden1_clone176->SetPassedEvents(30,12);
   hden1_clone176->SetTotalEvents(31,3);
   hden1_clone176->SetPassedEvents(31,3);
   hden1_clone176->SetTotalEvents(32,4);
   hden1_clone176->SetPassedEvents(32,2);
   hden1_clone176->SetTotalEvents(33,13);
   hden1_clone176->SetPassedEvents(33,13);
   hden1_clone176->SetTotalEvents(34,4);
   hden1_clone176->SetPassedEvents(34,4);
   hden1_clone176->SetTotalEvents(35,7);
   hden1_clone176->SetPassedEvents(35,6);
   hden1_clone176->SetTotalEvents(36,10);
   hden1_clone176->SetPassedEvents(36,10);
   hden1_clone176->SetTotalEvents(37,10);
   hden1_clone176->SetPassedEvents(37,9);
   hden1_clone176->SetTotalEvents(38,5);
   hden1_clone176->SetPassedEvents(38,5);
   hden1_clone176->SetTotalEvents(39,4);
   hden1_clone176->SetPassedEvents(39,3);
   hden1_clone176->SetTotalEvents(40,8);
   hden1_clone176->SetPassedEvents(40,7);
   hden1_clone176->SetTotalEvents(41,4);
   hden1_clone176->SetPassedEvents(41,4);
   hden1_clone176->SetTotalEvents(42,3);
   hden1_clone176->SetPassedEvents(42,3);
   hden1_clone176->SetTotalEvents(43,5);
   hden1_clone176->SetPassedEvents(43,4);
   hden1_clone176->SetTotalEvents(44,5);
   hden1_clone176->SetPassedEvents(44,5);
   hden1_clone176->SetTotalEvents(45,6);
   hden1_clone176->SetPassedEvents(45,6);
   hden1_clone176->SetTotalEvents(46,6);
   hden1_clone176->SetPassedEvents(46,6);
   hden1_clone176->SetTotalEvents(47,2);
   hden1_clone176->SetPassedEvents(47,2);
   hden1_clone176->SetTotalEvents(48,4);
   hden1_clone176->SetPassedEvents(48,4);
   hden1_clone176->SetTotalEvents(49,8);
   hden1_clone176->SetPassedEvents(49,7);
   hden1_clone176->SetTotalEvents(50,1);
   hden1_clone176->SetPassedEvents(50,1);
   hden1_clone176->SetTotalEvents(51,221);
   hden1_clone176->SetPassedEvents(51,212);
   hden1_clone176->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone176->SetLineColor(ci);
   hden1_clone176->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone176->SetMarkerColor(ci);
   hden1_clone176->SetMarkerStyle(21);
   hden1_clone176->Draw("samezp");
   
   TEfficiency * hden2_clone177 = new TEfficiency("hden2_clone","",50,0,50);
   
   hden2_clone177->SetConfidenceLevel(0.6826895);
   hden2_clone177->SetBetaAlpha(1);
   hden2_clone177->SetBetaBeta(1);
   hden2_clone177->SetWeight(1);
   hden2_clone177->SetStatisticOption(0);
   hden2_clone177->SetPosteriorMode(0);
   hden2_clone177->SetShortestInterval(0);
   hden2_clone177->SetTotalEvents(0,0);
   hden2_clone177->SetPassedEvents(0,0);
   hden2_clone177->SetTotalEvents(1,68);
   hden2_clone177->SetPassedEvents(1,64);
   hden2_clone177->SetTotalEvents(2,36);
   hden2_clone177->SetPassedEvents(2,33);
   hden2_clone177->SetTotalEvents(3,34);
   hden2_clone177->SetPassedEvents(3,31);
   hden2_clone177->SetTotalEvents(4,36);
   hden2_clone177->SetPassedEvents(4,32);
   hden2_clone177->SetTotalEvents(5,31);
   hden2_clone177->SetPassedEvents(5,29);
   hden2_clone177->SetTotalEvents(6,26);
   hden2_clone177->SetPassedEvents(6,24);
   hden2_clone177->SetTotalEvents(7,26);
   hden2_clone177->SetPassedEvents(7,23);
   hden2_clone177->SetTotalEvents(8,25);
   hden2_clone177->SetPassedEvents(8,22);
   hden2_clone177->SetTotalEvents(9,21);
   hden2_clone177->SetPassedEvents(9,19);
   hden2_clone177->SetTotalEvents(10,18);
   hden2_clone177->SetPassedEvents(10,17);
   hden2_clone177->SetTotalEvents(11,17);
   hden2_clone177->SetPassedEvents(11,15);
   hden2_clone177->SetTotalEvents(12,16);
   hden2_clone177->SetPassedEvents(12,15);
   hden2_clone177->SetTotalEvents(13,21);
   hden2_clone177->SetPassedEvents(13,19);
   hden2_clone177->SetTotalEvents(14,12);
   hden2_clone177->SetPassedEvents(14,12);
   hden2_clone177->SetTotalEvents(15,12);
   hden2_clone177->SetPassedEvents(15,12);
   hden2_clone177->SetTotalEvents(16,14);
   hden2_clone177->SetPassedEvents(16,14);
   hden2_clone177->SetTotalEvents(17,10);
   hden2_clone177->SetPassedEvents(17,10);
   hden2_clone177->SetTotalEvents(18,17);
   hden2_clone177->SetPassedEvents(18,15);
   hden2_clone177->SetTotalEvents(19,11);
   hden2_clone177->SetPassedEvents(19,11);
   hden2_clone177->SetTotalEvents(20,10);
   hden2_clone177->SetPassedEvents(20,10);
   hden2_clone177->SetTotalEvents(21,8);
   hden2_clone177->SetPassedEvents(21,6);
   hden2_clone177->SetTotalEvents(22,13);
   hden2_clone177->SetPassedEvents(22,12);
   hden2_clone177->SetTotalEvents(23,11);
   hden2_clone177->SetPassedEvents(23,10);
   hden2_clone177->SetTotalEvents(24,13);
   hden2_clone177->SetPassedEvents(24,13);
   hden2_clone177->SetTotalEvents(25,6);
   hden2_clone177->SetPassedEvents(25,5);
   hden2_clone177->SetTotalEvents(26,5);
   hden2_clone177->SetPassedEvents(26,4);
   hden2_clone177->SetTotalEvents(27,11);
   hden2_clone177->SetPassedEvents(27,11);
   hden2_clone177->SetTotalEvents(28,6);
   hden2_clone177->SetPassedEvents(28,5);
   hden2_clone177->SetTotalEvents(29,10);
   hden2_clone177->SetPassedEvents(29,10);
   hden2_clone177->SetTotalEvents(30,12);
   hden2_clone177->SetPassedEvents(30,12);
   hden2_clone177->SetTotalEvents(31,3);
   hden2_clone177->SetPassedEvents(31,3);
   hden2_clone177->SetTotalEvents(32,4);
   hden2_clone177->SetPassedEvents(32,3);
   hden2_clone177->SetTotalEvents(33,13);
   hden2_clone177->SetPassedEvents(33,12);
   hden2_clone177->SetTotalEvents(34,4);
   hden2_clone177->SetPassedEvents(34,3);
   hden2_clone177->SetTotalEvents(35,7);
   hden2_clone177->SetPassedEvents(35,5);
   hden2_clone177->SetTotalEvents(36,10);
   hden2_clone177->SetPassedEvents(36,10);
   hden2_clone177->SetTotalEvents(37,10);
   hden2_clone177->SetPassedEvents(37,9);
   hden2_clone177->SetTotalEvents(38,5);
   hden2_clone177->SetPassedEvents(38,5);
   hden2_clone177->SetTotalEvents(39,4);
   hden2_clone177->SetPassedEvents(39,3);
   hden2_clone177->SetTotalEvents(40,8);
   hden2_clone177->SetPassedEvents(40,7);
   hden2_clone177->SetTotalEvents(41,4);
   hden2_clone177->SetPassedEvents(41,4);
   hden2_clone177->SetTotalEvents(42,3);
   hden2_clone177->SetPassedEvents(42,3);
   hden2_clone177->SetTotalEvents(43,5);
   hden2_clone177->SetPassedEvents(43,3);
   hden2_clone177->SetTotalEvents(44,5);
   hden2_clone177->SetPassedEvents(44,5);
   hden2_clone177->SetTotalEvents(45,6);
   hden2_clone177->SetPassedEvents(45,6);
   hden2_clone177->SetTotalEvents(46,6);
   hden2_clone177->SetPassedEvents(46,5);
   hden2_clone177->SetTotalEvents(47,2);
   hden2_clone177->SetPassedEvents(47,2);
   hden2_clone177->SetTotalEvents(48,4);
   hden2_clone177->SetPassedEvents(48,4);
   hden2_clone177->SetTotalEvents(49,8);
   hden2_clone177->SetPassedEvents(49,7);
   hden2_clone177->SetTotalEvents(50,1);
   hden2_clone177->SetPassedEvents(50,1);
   hden2_clone177->SetTotalEvents(51,221);
   hden2_clone177->SetPassedEvents(51,212);
   hden2_clone177->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone177->SetLineColor(ci);
   hden2_clone177->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone177->SetMarkerColor(ci);
   hden2_clone177->SetMarkerStyle(25);
   hden2_clone177->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 odd,ME21 odd,ME31 odd}{2.0<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
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
