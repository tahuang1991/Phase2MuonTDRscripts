void GEMCSC_dxy10_50_combined_effvsdxy_20170131_pt10_fraction96_st2eta16to18_npar1()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:04:07 2017) by ROOT version6.08/06
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
   
   TH1F *b1__11 = new TH1F("b1__11"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,50);
   b1__11->SetMinimum(0);
   b1__11->SetMaximum(1.05);
   b1__11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__11->SetLineColor(ci);
   b1__11->GetXaxis()->SetTitle("|dxy| [cm]");
   b1__11->GetXaxis()->SetLabelFont(42);
   b1__11->GetXaxis()->SetLabelSize(0.05);
   b1__11->GetXaxis()->SetTitleSize(0.05);
   b1__11->GetXaxis()->SetTitleFont(42);
   b1__11->GetYaxis()->SetTitle("Trigger efficiency");
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
   
   TEfficiency * hden0_clone31 = new TEfficiency("hden0_clone","",50,0,50);
   
   hden0_clone31->SetConfidenceLevel(0.6826895);
   hden0_clone31->SetBetaAlpha(1);
   hden0_clone31->SetBetaBeta(1);
   hden0_clone31->SetWeight(1);
   hden0_clone31->SetStatisticOption(0);
   hden0_clone31->SetPosteriorMode(0);
   hden0_clone31->SetShortestInterval(0);
   hden0_clone31->SetTotalEvents(0,0);
   hden0_clone31->SetPassedEvents(0,0);
   hden0_clone31->SetTotalEvents(1,56);
   hden0_clone31->SetPassedEvents(1,56);
   hden0_clone31->SetTotalEvents(2,52);
   hden0_clone31->SetPassedEvents(2,50);
   hden0_clone31->SetTotalEvents(3,36);
   hden0_clone31->SetPassedEvents(3,36);
   hden0_clone31->SetTotalEvents(4,41);
   hden0_clone31->SetPassedEvents(4,40);
   hden0_clone31->SetTotalEvents(5,46);
   hden0_clone31->SetPassedEvents(5,45);
   hden0_clone31->SetTotalEvents(6,37);
   hden0_clone31->SetPassedEvents(6,37);
   hden0_clone31->SetTotalEvents(7,48);
   hden0_clone31->SetPassedEvents(7,46);
   hden0_clone31->SetTotalEvents(8,46);
   hden0_clone31->SetPassedEvents(8,46);
   hden0_clone31->SetTotalEvents(9,62);
   hden0_clone31->SetPassedEvents(9,61);
   hden0_clone31->SetTotalEvents(10,51);
   hden0_clone31->SetPassedEvents(10,51);
   hden0_clone31->SetTotalEvents(11,54);
   hden0_clone31->SetPassedEvents(11,52);
   hden0_clone31->SetTotalEvents(12,54);
   hden0_clone31->SetPassedEvents(12,53);
   hden0_clone31->SetTotalEvents(13,43);
   hden0_clone31->SetPassedEvents(13,43);
   hden0_clone31->SetTotalEvents(14,55);
   hden0_clone31->SetPassedEvents(14,54);
   hden0_clone31->SetTotalEvents(15,46);
   hden0_clone31->SetPassedEvents(15,46);
   hden0_clone31->SetTotalEvents(16,50);
   hden0_clone31->SetPassedEvents(16,49);
   hden0_clone31->SetTotalEvents(17,53);
   hden0_clone31->SetPassedEvents(17,50);
   hden0_clone31->SetTotalEvents(18,47);
   hden0_clone31->SetPassedEvents(18,46);
   hden0_clone31->SetTotalEvents(19,42);
   hden0_clone31->SetPassedEvents(19,40);
   hden0_clone31->SetTotalEvents(20,47);
   hden0_clone31->SetPassedEvents(20,46);
   hden0_clone31->SetTotalEvents(21,69);
   hden0_clone31->SetPassedEvents(21,67);
   hden0_clone31->SetTotalEvents(22,42);
   hden0_clone31->SetPassedEvents(22,41);
   hden0_clone31->SetTotalEvents(23,67);
   hden0_clone31->SetPassedEvents(23,66);
   hden0_clone31->SetTotalEvents(24,49);
   hden0_clone31->SetPassedEvents(24,47);
   hden0_clone31->SetTotalEvents(25,52);
   hden0_clone31->SetPassedEvents(25,48);
   hden0_clone31->SetTotalEvents(26,41);
   hden0_clone31->SetPassedEvents(26,40);
   hden0_clone31->SetTotalEvents(27,51);
   hden0_clone31->SetPassedEvents(27,51);
   hden0_clone31->SetTotalEvents(28,48);
   hden0_clone31->SetPassedEvents(28,47);
   hden0_clone31->SetTotalEvents(29,67);
   hden0_clone31->SetPassedEvents(29,63);
   hden0_clone31->SetTotalEvents(30,57);
   hden0_clone31->SetPassedEvents(30,57);
   hden0_clone31->SetTotalEvents(31,44);
   hden0_clone31->SetPassedEvents(31,42);
   hden0_clone31->SetTotalEvents(32,60);
   hden0_clone31->SetPassedEvents(32,56);
   hden0_clone31->SetTotalEvents(33,41);
   hden0_clone31->SetPassedEvents(33,40);
   hden0_clone31->SetTotalEvents(34,51);
   hden0_clone31->SetPassedEvents(34,50);
   hden0_clone31->SetTotalEvents(35,42);
   hden0_clone31->SetPassedEvents(35,41);
   hden0_clone31->SetTotalEvents(36,53);
   hden0_clone31->SetPassedEvents(36,52);
   hden0_clone31->SetTotalEvents(37,47);
   hden0_clone31->SetPassedEvents(37,44);
   hden0_clone31->SetTotalEvents(38,45);
   hden0_clone31->SetPassedEvents(38,43);
   hden0_clone31->SetTotalEvents(39,48);
   hden0_clone31->SetPassedEvents(39,46);
   hden0_clone31->SetTotalEvents(40,63);
   hden0_clone31->SetPassedEvents(40,62);
   hden0_clone31->SetTotalEvents(41,45);
   hden0_clone31->SetPassedEvents(41,44);
   hden0_clone31->SetTotalEvents(42,46);
   hden0_clone31->SetPassedEvents(42,43);
   hden0_clone31->SetTotalEvents(43,55);
   hden0_clone31->SetPassedEvents(43,50);
   hden0_clone31->SetTotalEvents(44,50);
   hden0_clone31->SetPassedEvents(44,48);
   hden0_clone31->SetTotalEvents(45,58);
   hden0_clone31->SetPassedEvents(45,56);
   hden0_clone31->SetTotalEvents(46,45);
   hden0_clone31->SetPassedEvents(46,42);
   hden0_clone31->SetTotalEvents(47,56);
   hden0_clone31->SetPassedEvents(47,55);
   hden0_clone31->SetTotalEvents(48,51);
   hden0_clone31->SetPassedEvents(48,50);
   hden0_clone31->SetTotalEvents(49,43);
   hden0_clone31->SetPassedEvents(49,42);
   hden0_clone31->SetTotalEvents(50,39);
   hden0_clone31->SetPassedEvents(50,35);
   hden0_clone31->SetTotalEvents(51,0);
   hden0_clone31->SetPassedEvents(51,0);
   hden0_clone31->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone31->SetLineColor(ci);
   hden0_clone31->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone31->SetMarkerColor(ci);
   hden0_clone31->SetMarkerStyle(24);
   hden0_clone31->Draw("samezp");
   
   TEfficiency * hden1_clone32 = new TEfficiency("hden1_clone","",50,0,50);
   
   hden1_clone32->SetConfidenceLevel(0.6826895);
   hden1_clone32->SetBetaAlpha(1);
   hden1_clone32->SetBetaBeta(1);
   hden1_clone32->SetWeight(1);
   hden1_clone32->SetStatisticOption(0);
   hden1_clone32->SetPosteriorMode(0);
   hden1_clone32->SetShortestInterval(0);
   hden1_clone32->SetTotalEvents(0,0);
   hden1_clone32->SetPassedEvents(0,0);
   hden1_clone32->SetTotalEvents(1,56);
   hden1_clone32->SetPassedEvents(1,55);
   hden1_clone32->SetTotalEvents(2,52);
   hden1_clone32->SetPassedEvents(2,48);
   hden1_clone32->SetTotalEvents(3,36);
   hden1_clone32->SetPassedEvents(3,35);
   hden1_clone32->SetTotalEvents(4,41);
   hden1_clone32->SetPassedEvents(4,40);
   hden1_clone32->SetTotalEvents(5,46);
   hden1_clone32->SetPassedEvents(5,45);
   hden1_clone32->SetTotalEvents(6,37);
   hden1_clone32->SetPassedEvents(6,37);
   hden1_clone32->SetTotalEvents(7,48);
   hden1_clone32->SetPassedEvents(7,46);
   hden1_clone32->SetTotalEvents(8,46);
   hden1_clone32->SetPassedEvents(8,46);
   hden1_clone32->SetTotalEvents(9,62);
   hden1_clone32->SetPassedEvents(9,61);
   hden1_clone32->SetTotalEvents(10,51);
   hden1_clone32->SetPassedEvents(10,49);
   hden1_clone32->SetTotalEvents(11,54);
   hden1_clone32->SetPassedEvents(11,50);
   hden1_clone32->SetTotalEvents(12,54);
   hden1_clone32->SetPassedEvents(12,54);
   hden1_clone32->SetTotalEvents(13,43);
   hden1_clone32->SetPassedEvents(13,42);
   hden1_clone32->SetTotalEvents(14,55);
   hden1_clone32->SetPassedEvents(14,54);
   hden1_clone32->SetTotalEvents(15,46);
   hden1_clone32->SetPassedEvents(15,45);
   hden1_clone32->SetTotalEvents(16,50);
   hden1_clone32->SetPassedEvents(16,48);
   hden1_clone32->SetTotalEvents(17,53);
   hden1_clone32->SetPassedEvents(17,51);
   hden1_clone32->SetTotalEvents(18,47);
   hden1_clone32->SetPassedEvents(18,46);
   hden1_clone32->SetTotalEvents(19,42);
   hden1_clone32->SetPassedEvents(19,39);
   hden1_clone32->SetTotalEvents(20,47);
   hden1_clone32->SetPassedEvents(20,47);
   hden1_clone32->SetTotalEvents(21,69);
   hden1_clone32->SetPassedEvents(21,66);
   hden1_clone32->SetTotalEvents(22,42);
   hden1_clone32->SetPassedEvents(22,41);
   hden1_clone32->SetTotalEvents(23,67);
   hden1_clone32->SetPassedEvents(23,65);
   hden1_clone32->SetTotalEvents(24,49);
   hden1_clone32->SetPassedEvents(24,45);
   hden1_clone32->SetTotalEvents(25,52);
   hden1_clone32->SetPassedEvents(25,49);
   hden1_clone32->SetTotalEvents(26,41);
   hden1_clone32->SetPassedEvents(26,39);
   hden1_clone32->SetTotalEvents(27,51);
   hden1_clone32->SetPassedEvents(27,51);
   hden1_clone32->SetTotalEvents(28,48);
   hden1_clone32->SetPassedEvents(28,47);
   hden1_clone32->SetTotalEvents(29,67);
   hden1_clone32->SetPassedEvents(29,62);
   hden1_clone32->SetTotalEvents(30,57);
   hden1_clone32->SetPassedEvents(30,54);
   hden1_clone32->SetTotalEvents(31,44);
   hden1_clone32->SetPassedEvents(31,41);
   hden1_clone32->SetTotalEvents(32,60);
   hden1_clone32->SetPassedEvents(32,57);
   hden1_clone32->SetTotalEvents(33,41);
   hden1_clone32->SetPassedEvents(33,40);
   hden1_clone32->SetTotalEvents(34,51);
   hden1_clone32->SetPassedEvents(34,49);
   hden1_clone32->SetTotalEvents(35,42);
   hden1_clone32->SetPassedEvents(35,41);
   hden1_clone32->SetTotalEvents(36,53);
   hden1_clone32->SetPassedEvents(36,52);
   hden1_clone32->SetTotalEvents(37,47);
   hden1_clone32->SetPassedEvents(37,45);
   hden1_clone32->SetTotalEvents(38,45);
   hden1_clone32->SetPassedEvents(38,43);
   hden1_clone32->SetTotalEvents(39,48);
   hden1_clone32->SetPassedEvents(39,46);
   hden1_clone32->SetTotalEvents(40,63);
   hden1_clone32->SetPassedEvents(40,60);
   hden1_clone32->SetTotalEvents(41,45);
   hden1_clone32->SetPassedEvents(41,43);
   hden1_clone32->SetTotalEvents(42,46);
   hden1_clone32->SetPassedEvents(42,44);
   hden1_clone32->SetTotalEvents(43,55);
   hden1_clone32->SetPassedEvents(43,50);
   hden1_clone32->SetTotalEvents(44,50);
   hden1_clone32->SetPassedEvents(44,46);
   hden1_clone32->SetTotalEvents(45,58);
   hden1_clone32->SetPassedEvents(45,56);
   hden1_clone32->SetTotalEvents(46,45);
   hden1_clone32->SetPassedEvents(46,42);
   hden1_clone32->SetTotalEvents(47,56);
   hden1_clone32->SetPassedEvents(47,55);
   hden1_clone32->SetTotalEvents(48,51);
   hden1_clone32->SetPassedEvents(48,48);
   hden1_clone32->SetTotalEvents(49,43);
   hden1_clone32->SetPassedEvents(49,41);
   hden1_clone32->SetTotalEvents(50,39);
   hden1_clone32->SetPassedEvents(50,34);
   hden1_clone32->SetTotalEvents(51,0);
   hden1_clone32->SetPassedEvents(51,0);
   hden1_clone32->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone32->SetLineColor(ci);
   hden1_clone32->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone32->SetMarkerColor(ci);
   hden1_clone32->SetMarkerStyle(21);
   hden1_clone32->Draw("samezp");
   
   TEfficiency * hden2_clone33 = new TEfficiency("hden2_clone","",50,0,50);
   
   hden2_clone33->SetConfidenceLevel(0.6826895);
   hden2_clone33->SetBetaAlpha(1);
   hden2_clone33->SetBetaBeta(1);
   hden2_clone33->SetWeight(1);
   hden2_clone33->SetStatisticOption(0);
   hden2_clone33->SetPosteriorMode(0);
   hden2_clone33->SetShortestInterval(0);
   hden2_clone33->SetTotalEvents(0,0);
   hden2_clone33->SetPassedEvents(0,0);
   hden2_clone33->SetTotalEvents(1,56);
   hden2_clone33->SetPassedEvents(1,54);
   hden2_clone33->SetTotalEvents(2,52);
   hden2_clone33->SetPassedEvents(2,47);
   hden2_clone33->SetTotalEvents(3,36);
   hden2_clone33->SetPassedEvents(3,34);
   hden2_clone33->SetTotalEvents(4,41);
   hden2_clone33->SetPassedEvents(4,39);
   hden2_clone33->SetTotalEvents(5,46);
   hden2_clone33->SetPassedEvents(5,43);
   hden2_clone33->SetTotalEvents(6,37);
   hden2_clone33->SetPassedEvents(6,35);
   hden2_clone33->SetTotalEvents(7,48);
   hden2_clone33->SetPassedEvents(7,42);
   hden2_clone33->SetTotalEvents(8,46);
   hden2_clone33->SetPassedEvents(8,43);
   hden2_clone33->SetTotalEvents(9,62);
   hden2_clone33->SetPassedEvents(9,56);
   hden2_clone33->SetTotalEvents(10,51);
   hden2_clone33->SetPassedEvents(10,47);
   hden2_clone33->SetTotalEvents(11,54);
   hden2_clone33->SetPassedEvents(11,48);
   hden2_clone33->SetTotalEvents(12,54);
   hden2_clone33->SetPassedEvents(12,49);
   hden2_clone33->SetTotalEvents(13,43);
   hden2_clone33->SetPassedEvents(13,40);
   hden2_clone33->SetTotalEvents(14,55);
   hden2_clone33->SetPassedEvents(14,49);
   hden2_clone33->SetTotalEvents(15,46);
   hden2_clone33->SetPassedEvents(15,42);
   hden2_clone33->SetTotalEvents(16,50);
   hden2_clone33->SetPassedEvents(16,47);
   hden2_clone33->SetTotalEvents(17,53);
   hden2_clone33->SetPassedEvents(17,49);
   hden2_clone33->SetTotalEvents(18,47);
   hden2_clone33->SetPassedEvents(18,44);
   hden2_clone33->SetTotalEvents(19,42);
   hden2_clone33->SetPassedEvents(19,38);
   hden2_clone33->SetTotalEvents(20,47);
   hden2_clone33->SetPassedEvents(20,44);
   hden2_clone33->SetTotalEvents(21,69);
   hden2_clone33->SetPassedEvents(21,66);
   hden2_clone33->SetTotalEvents(22,42);
   hden2_clone33->SetPassedEvents(22,40);
   hden2_clone33->SetTotalEvents(23,67);
   hden2_clone33->SetPassedEvents(23,59);
   hden2_clone33->SetTotalEvents(24,49);
   hden2_clone33->SetPassedEvents(24,43);
   hden2_clone33->SetTotalEvents(25,52);
   hden2_clone33->SetPassedEvents(25,45);
   hden2_clone33->SetTotalEvents(26,41);
   hden2_clone33->SetPassedEvents(26,33);
   hden2_clone33->SetTotalEvents(27,51);
   hden2_clone33->SetPassedEvents(27,44);
   hden2_clone33->SetTotalEvents(28,48);
   hden2_clone33->SetPassedEvents(28,38);
   hden2_clone33->SetTotalEvents(29,67);
   hden2_clone33->SetPassedEvents(29,59);
   hden2_clone33->SetTotalEvents(30,57);
   hden2_clone33->SetPassedEvents(30,52);
   hden2_clone33->SetTotalEvents(31,44);
   hden2_clone33->SetPassedEvents(31,37);
   hden2_clone33->SetTotalEvents(32,60);
   hden2_clone33->SetPassedEvents(32,50);
   hden2_clone33->SetTotalEvents(33,41);
   hden2_clone33->SetPassedEvents(33,37);
   hden2_clone33->SetTotalEvents(34,51);
   hden2_clone33->SetPassedEvents(34,42);
   hden2_clone33->SetTotalEvents(35,42);
   hden2_clone33->SetPassedEvents(35,36);
   hden2_clone33->SetTotalEvents(36,53);
   hden2_clone33->SetPassedEvents(36,42);
   hden2_clone33->SetTotalEvents(37,47);
   hden2_clone33->SetPassedEvents(37,38);
   hden2_clone33->SetTotalEvents(38,45);
   hden2_clone33->SetPassedEvents(38,40);
   hden2_clone33->SetTotalEvents(39,48);
   hden2_clone33->SetPassedEvents(39,40);
   hden2_clone33->SetTotalEvents(40,63);
   hden2_clone33->SetPassedEvents(40,58);
   hden2_clone33->SetTotalEvents(41,45);
   hden2_clone33->SetPassedEvents(41,35);
   hden2_clone33->SetTotalEvents(42,46);
   hden2_clone33->SetPassedEvents(42,39);
   hden2_clone33->SetTotalEvents(43,55);
   hden2_clone33->SetPassedEvents(43,44);
   hden2_clone33->SetTotalEvents(44,50);
   hden2_clone33->SetPassedEvents(44,41);
   hden2_clone33->SetTotalEvents(45,58);
   hden2_clone33->SetPassedEvents(45,46);
   hden2_clone33->SetTotalEvents(46,45);
   hden2_clone33->SetPassedEvents(46,34);
   hden2_clone33->SetTotalEvents(47,56);
   hden2_clone33->SetPassedEvents(47,46);
   hden2_clone33->SetTotalEvents(48,51);
   hden2_clone33->SetPassedEvents(48,45);
   hden2_clone33->SetTotalEvents(49,43);
   hden2_clone33->SetPassedEvents(49,34);
   hden2_clone33->SetTotalEvents(50,39);
   hden2_clone33->SetPassedEvents(50,30);
   hden2_clone33->SetTotalEvents(51,0);
   hden2_clone33->SetPassedEvents(51,0);
   hden2_clone33->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone33->SetLineColor(ci);
   hden2_clone33->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone33->SetMarkerColor(ci);
   hden2_clone33->SetMarkerStyle(25);
   hden2_clone33->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 odd,ME21 odd,ME31 odd}{1.6<|#eta|<1.80, p_{T}^{L1}>10 GeV}");
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
