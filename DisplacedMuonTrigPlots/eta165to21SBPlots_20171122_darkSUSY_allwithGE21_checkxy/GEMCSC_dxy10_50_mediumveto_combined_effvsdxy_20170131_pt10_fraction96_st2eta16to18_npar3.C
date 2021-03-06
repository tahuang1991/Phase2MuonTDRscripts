void GEMCSC_dxy10_50_mediumveto_combined_effvsdxy_20170131_pt10_fraction96_st2eta16to18_npar3()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:13:27 2017) by ROOT version6.08/06
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
   
   TH1F *b1__24 = new TH1F("b1__24"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,50);
   b1__24->SetMinimum(0);
   b1__24->SetMaximum(1.05);
   b1__24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__24->SetLineColor(ci);
   b1__24->GetXaxis()->SetTitle("|dxy| [cm]");
   b1__24->GetXaxis()->SetLabelFont(42);
   b1__24->GetXaxis()->SetLabelSize(0.05);
   b1__24->GetXaxis()->SetTitleSize(0.05);
   b1__24->GetXaxis()->SetTitleFont(42);
   b1__24->GetYaxis()->SetTitle("Trigger efficiency");
   b1__24->GetYaxis()->SetNdivisions(520);
   b1__24->GetYaxis()->SetLabelFont(42);
   b1__24->GetYaxis()->SetLabelSize(0.05);
   b1__24->GetYaxis()->SetTitleSize(0.05);
   b1__24->GetYaxis()->SetTitleOffset(1.1);
   b1__24->GetYaxis()->SetTitleFont(42);
   b1__24->GetZaxis()->SetLabelFont(42);
   b1__24->GetZaxis()->SetLabelSize(0.035);
   b1__24->GetZaxis()->SetTitleSize(0.035);
   b1__24->GetZaxis()->SetTitleFont(42);
   b1__24->Draw("");
   
   TEfficiency * hden0_clone70 = new TEfficiency("hden0_clone","",50,0,50);
   
   hden0_clone70->SetConfidenceLevel(0.6826895);
   hden0_clone70->SetBetaAlpha(1);
   hden0_clone70->SetBetaBeta(1);
   hden0_clone70->SetWeight(1);
   hden0_clone70->SetStatisticOption(0);
   hden0_clone70->SetPosteriorMode(0);
   hden0_clone70->SetShortestInterval(0);
   hden0_clone70->SetTotalEvents(0,0);
   hden0_clone70->SetPassedEvents(0,0);
   hden0_clone70->SetTotalEvents(1,51);
   hden0_clone70->SetPassedEvents(1,0);
   hden0_clone70->SetTotalEvents(2,25);
   hden0_clone70->SetPassedEvents(2,0);
   hden0_clone70->SetTotalEvents(3,36);
   hden0_clone70->SetPassedEvents(3,0);
   hden0_clone70->SetTotalEvents(4,33);
   hden0_clone70->SetPassedEvents(4,1);
   hden0_clone70->SetTotalEvents(5,22);
   hden0_clone70->SetPassedEvents(5,1);
   hden0_clone70->SetTotalEvents(6,26);
   hden0_clone70->SetPassedEvents(6,1);
   hden0_clone70->SetTotalEvents(7,21);
   hden0_clone70->SetPassedEvents(7,0);
   hden0_clone70->SetTotalEvents(8,24);
   hden0_clone70->SetPassedEvents(8,0);
   hden0_clone70->SetTotalEvents(9,21);
   hden0_clone70->SetPassedEvents(9,0);
   hden0_clone70->SetTotalEvents(10,15);
   hden0_clone70->SetPassedEvents(10,0);
   hden0_clone70->SetTotalEvents(11,22);
   hden0_clone70->SetPassedEvents(11,2);
   hden0_clone70->SetTotalEvents(12,15);
   hden0_clone70->SetPassedEvents(12,2);
   hden0_clone70->SetTotalEvents(13,18);
   hden0_clone70->SetPassedEvents(13,0);
   hden0_clone70->SetTotalEvents(14,14);
   hden0_clone70->SetPassedEvents(14,1);
   hden0_clone70->SetTotalEvents(15,11);
   hden0_clone70->SetPassedEvents(15,1);
   hden0_clone70->SetTotalEvents(16,11);
   hden0_clone70->SetPassedEvents(16,1);
   hden0_clone70->SetTotalEvents(17,13);
   hden0_clone70->SetPassedEvents(17,0);
   hden0_clone70->SetTotalEvents(18,6);
   hden0_clone70->SetPassedEvents(18,0);
   hden0_clone70->SetTotalEvents(19,18);
   hden0_clone70->SetPassedEvents(19,2);
   hden0_clone70->SetTotalEvents(20,11);
   hden0_clone70->SetPassedEvents(20,0);
   hden0_clone70->SetTotalEvents(21,10);
   hden0_clone70->SetPassedEvents(21,0);
   hden0_clone70->SetTotalEvents(22,10);
   hden0_clone70->SetPassedEvents(22,0);
   hden0_clone70->SetTotalEvents(23,10);
   hden0_clone70->SetPassedEvents(23,0);
   hden0_clone70->SetTotalEvents(24,6);
   hden0_clone70->SetPassedEvents(24,1);
   hden0_clone70->SetTotalEvents(25,9);
   hden0_clone70->SetPassedEvents(25,0);
   hden0_clone70->SetTotalEvents(26,4);
   hden0_clone70->SetPassedEvents(26,0);
   hden0_clone70->SetTotalEvents(27,8);
   hden0_clone70->SetPassedEvents(27,0);
   hden0_clone70->SetTotalEvents(28,3);
   hden0_clone70->SetPassedEvents(28,0);
   hden0_clone70->SetTotalEvents(29,5);
   hden0_clone70->SetPassedEvents(29,0);
   hden0_clone70->SetTotalEvents(30,5);
   hden0_clone70->SetPassedEvents(30,0);
   hden0_clone70->SetTotalEvents(31,3);
   hden0_clone70->SetPassedEvents(31,0);
   hden0_clone70->SetTotalEvents(32,9);
   hden0_clone70->SetPassedEvents(32,0);
   hden0_clone70->SetTotalEvents(33,6);
   hden0_clone70->SetPassedEvents(33,0);
   hden0_clone70->SetTotalEvents(34,6);
   hden0_clone70->SetPassedEvents(34,0);
   hden0_clone70->SetTotalEvents(35,7);
   hden0_clone70->SetPassedEvents(35,0);
   hden0_clone70->SetTotalEvents(36,6);
   hden0_clone70->SetPassedEvents(36,0);
   hden0_clone70->SetTotalEvents(37,7);
   hden0_clone70->SetPassedEvents(37,1);
   hden0_clone70->SetTotalEvents(38,7);
   hden0_clone70->SetPassedEvents(38,2);
   hden0_clone70->SetTotalEvents(39,7);
   hden0_clone70->SetPassedEvents(39,0);
   hden0_clone70->SetTotalEvents(40,2);
   hden0_clone70->SetPassedEvents(40,0);
   hden0_clone70->SetTotalEvents(41,8);
   hden0_clone70->SetPassedEvents(41,2);
   hden0_clone70->SetTotalEvents(42,2);
   hden0_clone70->SetPassedEvents(42,0);
   hden0_clone70->SetTotalEvents(43,5);
   hden0_clone70->SetPassedEvents(43,0);
   hden0_clone70->SetTotalEvents(44,2);
   hden0_clone70->SetPassedEvents(44,0);
   hden0_clone70->SetTotalEvents(45,6);
   hden0_clone70->SetPassedEvents(45,2);
   hden0_clone70->SetTotalEvents(46,6);
   hden0_clone70->SetPassedEvents(46,0);
   hden0_clone70->SetTotalEvents(47,4);
   hden0_clone70->SetPassedEvents(47,1);
   hden0_clone70->SetTotalEvents(48,3);
   hden0_clone70->SetPassedEvents(48,1);
   hden0_clone70->SetTotalEvents(49,5);
   hden0_clone70->SetPassedEvents(49,0);
   hden0_clone70->SetTotalEvents(50,5);
   hden0_clone70->SetPassedEvents(50,1);
   hden0_clone70->SetTotalEvents(51,172);
   hden0_clone70->SetPassedEvents(51,7);
   hden0_clone70->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone70->SetLineColor(ci);
   hden0_clone70->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone70->SetMarkerColor(ci);
   hden0_clone70->SetMarkerStyle(24);
   hden0_clone70->Draw("samezp");
   
   TEfficiency * hden1_clone71 = new TEfficiency("hden1_clone","",50,0,50);
   
   hden1_clone71->SetConfidenceLevel(0.6826895);
   hden1_clone71->SetBetaAlpha(1);
   hden1_clone71->SetBetaBeta(1);
   hden1_clone71->SetWeight(1);
   hden1_clone71->SetStatisticOption(0);
   hden1_clone71->SetPosteriorMode(0);
   hden1_clone71->SetShortestInterval(0);
   hden1_clone71->SetTotalEvents(0,0);
   hden1_clone71->SetPassedEvents(0,0);
   hden1_clone71->SetTotalEvents(1,51);
   hden1_clone71->SetPassedEvents(1,0);
   hden1_clone71->SetTotalEvents(2,25);
   hden1_clone71->SetPassedEvents(2,0);
   hden1_clone71->SetTotalEvents(3,36);
   hden1_clone71->SetPassedEvents(3,0);
   hden1_clone71->SetTotalEvents(4,33);
   hden1_clone71->SetPassedEvents(4,1);
   hden1_clone71->SetTotalEvents(5,22);
   hden1_clone71->SetPassedEvents(5,1);
   hden1_clone71->SetTotalEvents(6,26);
   hden1_clone71->SetPassedEvents(6,1);
   hden1_clone71->SetTotalEvents(7,21);
   hden1_clone71->SetPassedEvents(7,0);
   hden1_clone71->SetTotalEvents(8,24);
   hden1_clone71->SetPassedEvents(8,0);
   hden1_clone71->SetTotalEvents(9,21);
   hden1_clone71->SetPassedEvents(9,0);
   hden1_clone71->SetTotalEvents(10,15);
   hden1_clone71->SetPassedEvents(10,0);
   hden1_clone71->SetTotalEvents(11,22);
   hden1_clone71->SetPassedEvents(11,2);
   hden1_clone71->SetTotalEvents(12,15);
   hden1_clone71->SetPassedEvents(12,2);
   hden1_clone71->SetTotalEvents(13,18);
   hden1_clone71->SetPassedEvents(13,0);
   hden1_clone71->SetTotalEvents(14,14);
   hden1_clone71->SetPassedEvents(14,1);
   hden1_clone71->SetTotalEvents(15,11);
   hden1_clone71->SetPassedEvents(15,1);
   hden1_clone71->SetTotalEvents(16,11);
   hden1_clone71->SetPassedEvents(16,1);
   hden1_clone71->SetTotalEvents(17,13);
   hden1_clone71->SetPassedEvents(17,0);
   hden1_clone71->SetTotalEvents(18,6);
   hden1_clone71->SetPassedEvents(18,0);
   hden1_clone71->SetTotalEvents(19,18);
   hden1_clone71->SetPassedEvents(19,2);
   hden1_clone71->SetTotalEvents(20,11);
   hden1_clone71->SetPassedEvents(20,0);
   hden1_clone71->SetTotalEvents(21,10);
   hden1_clone71->SetPassedEvents(21,0);
   hden1_clone71->SetTotalEvents(22,10);
   hden1_clone71->SetPassedEvents(22,0);
   hden1_clone71->SetTotalEvents(23,10);
   hden1_clone71->SetPassedEvents(23,0);
   hden1_clone71->SetTotalEvents(24,6);
   hden1_clone71->SetPassedEvents(24,1);
   hden1_clone71->SetTotalEvents(25,9);
   hden1_clone71->SetPassedEvents(25,0);
   hden1_clone71->SetTotalEvents(26,4);
   hden1_clone71->SetPassedEvents(26,0);
   hden1_clone71->SetTotalEvents(27,8);
   hden1_clone71->SetPassedEvents(27,0);
   hden1_clone71->SetTotalEvents(28,3);
   hden1_clone71->SetPassedEvents(28,0);
   hden1_clone71->SetTotalEvents(29,5);
   hden1_clone71->SetPassedEvents(29,0);
   hden1_clone71->SetTotalEvents(30,5);
   hden1_clone71->SetPassedEvents(30,0);
   hden1_clone71->SetTotalEvents(31,3);
   hden1_clone71->SetPassedEvents(31,0);
   hden1_clone71->SetTotalEvents(32,9);
   hden1_clone71->SetPassedEvents(32,0);
   hden1_clone71->SetTotalEvents(33,6);
   hden1_clone71->SetPassedEvents(33,0);
   hden1_clone71->SetTotalEvents(34,6);
   hden1_clone71->SetPassedEvents(34,0);
   hden1_clone71->SetTotalEvents(35,7);
   hden1_clone71->SetPassedEvents(35,0);
   hden1_clone71->SetTotalEvents(36,6);
   hden1_clone71->SetPassedEvents(36,0);
   hden1_clone71->SetTotalEvents(37,7);
   hden1_clone71->SetPassedEvents(37,1);
   hden1_clone71->SetTotalEvents(38,7);
   hden1_clone71->SetPassedEvents(38,2);
   hden1_clone71->SetTotalEvents(39,7);
   hden1_clone71->SetPassedEvents(39,0);
   hden1_clone71->SetTotalEvents(40,2);
   hden1_clone71->SetPassedEvents(40,0);
   hden1_clone71->SetTotalEvents(41,8);
   hden1_clone71->SetPassedEvents(41,2);
   hden1_clone71->SetTotalEvents(42,2);
   hden1_clone71->SetPassedEvents(42,0);
   hden1_clone71->SetTotalEvents(43,5);
   hden1_clone71->SetPassedEvents(43,0);
   hden1_clone71->SetTotalEvents(44,2);
   hden1_clone71->SetPassedEvents(44,0);
   hden1_clone71->SetTotalEvents(45,6);
   hden1_clone71->SetPassedEvents(45,2);
   hden1_clone71->SetTotalEvents(46,6);
   hden1_clone71->SetPassedEvents(46,0);
   hden1_clone71->SetTotalEvents(47,4);
   hden1_clone71->SetPassedEvents(47,1);
   hden1_clone71->SetTotalEvents(48,3);
   hden1_clone71->SetPassedEvents(48,1);
   hden1_clone71->SetTotalEvents(49,5);
   hden1_clone71->SetPassedEvents(49,0);
   hden1_clone71->SetTotalEvents(50,5);
   hden1_clone71->SetPassedEvents(50,1);
   hden1_clone71->SetTotalEvents(51,172);
   hden1_clone71->SetPassedEvents(51,7);
   hden1_clone71->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone71->SetLineColor(ci);
   hden1_clone71->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone71->SetMarkerColor(ci);
   hden1_clone71->SetMarkerStyle(21);
   hden1_clone71->Draw("samezp");
   
   TEfficiency * hden2_clone72 = new TEfficiency("hden2_clone","",50,0,50);
   
   hden2_clone72->SetConfidenceLevel(0.6826895);
   hden2_clone72->SetBetaAlpha(1);
   hden2_clone72->SetBetaBeta(1);
   hden2_clone72->SetWeight(1);
   hden2_clone72->SetStatisticOption(0);
   hden2_clone72->SetPosteriorMode(0);
   hden2_clone72->SetShortestInterval(0);
   hden2_clone72->SetTotalEvents(0,0);
   hden2_clone72->SetPassedEvents(0,0);
   hden2_clone72->SetTotalEvents(1,51);
   hden2_clone72->SetPassedEvents(1,0);
   hden2_clone72->SetTotalEvents(2,25);
   hden2_clone72->SetPassedEvents(2,0);
   hden2_clone72->SetTotalEvents(3,36);
   hden2_clone72->SetPassedEvents(3,0);
   hden2_clone72->SetTotalEvents(4,33);
   hden2_clone72->SetPassedEvents(4,1);
   hden2_clone72->SetTotalEvents(5,22);
   hden2_clone72->SetPassedEvents(5,1);
   hden2_clone72->SetTotalEvents(6,26);
   hden2_clone72->SetPassedEvents(6,1);
   hden2_clone72->SetTotalEvents(7,21);
   hden2_clone72->SetPassedEvents(7,0);
   hden2_clone72->SetTotalEvents(8,24);
   hden2_clone72->SetPassedEvents(8,0);
   hden2_clone72->SetTotalEvents(9,21);
   hden2_clone72->SetPassedEvents(9,0);
   hden2_clone72->SetTotalEvents(10,15);
   hden2_clone72->SetPassedEvents(10,0);
   hden2_clone72->SetTotalEvents(11,22);
   hden2_clone72->SetPassedEvents(11,2);
   hden2_clone72->SetTotalEvents(12,15);
   hden2_clone72->SetPassedEvents(12,2);
   hden2_clone72->SetTotalEvents(13,18);
   hden2_clone72->SetPassedEvents(13,0);
   hden2_clone72->SetTotalEvents(14,14);
   hden2_clone72->SetPassedEvents(14,1);
   hden2_clone72->SetTotalEvents(15,11);
   hden2_clone72->SetPassedEvents(15,1);
   hden2_clone72->SetTotalEvents(16,11);
   hden2_clone72->SetPassedEvents(16,1);
   hden2_clone72->SetTotalEvents(17,13);
   hden2_clone72->SetPassedEvents(17,0);
   hden2_clone72->SetTotalEvents(18,6);
   hden2_clone72->SetPassedEvents(18,0);
   hden2_clone72->SetTotalEvents(19,18);
   hden2_clone72->SetPassedEvents(19,2);
   hden2_clone72->SetTotalEvents(20,11);
   hden2_clone72->SetPassedEvents(20,0);
   hden2_clone72->SetTotalEvents(21,10);
   hden2_clone72->SetPassedEvents(21,0);
   hden2_clone72->SetTotalEvents(22,10);
   hden2_clone72->SetPassedEvents(22,0);
   hden2_clone72->SetTotalEvents(23,10);
   hden2_clone72->SetPassedEvents(23,0);
   hden2_clone72->SetTotalEvents(24,6);
   hden2_clone72->SetPassedEvents(24,1);
   hden2_clone72->SetTotalEvents(25,9);
   hden2_clone72->SetPassedEvents(25,0);
   hden2_clone72->SetTotalEvents(26,4);
   hden2_clone72->SetPassedEvents(26,0);
   hden2_clone72->SetTotalEvents(27,8);
   hden2_clone72->SetPassedEvents(27,0);
   hden2_clone72->SetTotalEvents(28,3);
   hden2_clone72->SetPassedEvents(28,0);
   hden2_clone72->SetTotalEvents(29,5);
   hden2_clone72->SetPassedEvents(29,0);
   hden2_clone72->SetTotalEvents(30,5);
   hden2_clone72->SetPassedEvents(30,0);
   hden2_clone72->SetTotalEvents(31,3);
   hden2_clone72->SetPassedEvents(31,0);
   hden2_clone72->SetTotalEvents(32,9);
   hden2_clone72->SetPassedEvents(32,0);
   hden2_clone72->SetTotalEvents(33,6);
   hden2_clone72->SetPassedEvents(33,0);
   hden2_clone72->SetTotalEvents(34,6);
   hden2_clone72->SetPassedEvents(34,0);
   hden2_clone72->SetTotalEvents(35,7);
   hden2_clone72->SetPassedEvents(35,0);
   hden2_clone72->SetTotalEvents(36,6);
   hden2_clone72->SetPassedEvents(36,0);
   hden2_clone72->SetTotalEvents(37,7);
   hden2_clone72->SetPassedEvents(37,0);
   hden2_clone72->SetTotalEvents(38,7);
   hden2_clone72->SetPassedEvents(38,2);
   hden2_clone72->SetTotalEvents(39,7);
   hden2_clone72->SetPassedEvents(39,0);
   hden2_clone72->SetTotalEvents(40,2);
   hden2_clone72->SetPassedEvents(40,0);
   hden2_clone72->SetTotalEvents(41,8);
   hden2_clone72->SetPassedEvents(41,1);
   hden2_clone72->SetTotalEvents(42,2);
   hden2_clone72->SetPassedEvents(42,0);
   hden2_clone72->SetTotalEvents(43,5);
   hden2_clone72->SetPassedEvents(43,0);
   hden2_clone72->SetTotalEvents(44,2);
   hden2_clone72->SetPassedEvents(44,0);
   hden2_clone72->SetTotalEvents(45,6);
   hden2_clone72->SetPassedEvents(45,1);
   hden2_clone72->SetTotalEvents(46,6);
   hden2_clone72->SetPassedEvents(46,0);
   hden2_clone72->SetTotalEvents(47,4);
   hden2_clone72->SetPassedEvents(47,1);
   hden2_clone72->SetTotalEvents(48,3);
   hden2_clone72->SetPassedEvents(48,1);
   hden2_clone72->SetTotalEvents(49,5);
   hden2_clone72->SetPassedEvents(49,0);
   hden2_clone72->SetTotalEvents(50,5);
   hden2_clone72->SetPassedEvents(50,1);
   hden2_clone72->SetTotalEvents(51,172);
   hden2_clone72->SetPassedEvents(51,6);
   hden2_clone72->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone72->SetLineColor(ci);
   hden2_clone72->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone72->SetMarkerColor(ci);
   hden2_clone72->SetMarkerStyle(25);
   hden2_clone72->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 even,ME21 odd,ME31 odd}{1.6<|#eta|<1.80, p_{T}^{L1}>10 GeV}");
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
