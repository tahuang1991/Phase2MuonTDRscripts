void GEMCSC_dxy10_50_mediumveto_combined_effvsdxy_20170131_pt10_fraction96_st2eta18to20_npar3()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:06:43 2017) by ROOT version6.08/06
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
   
   TH1F *b1__48 = new TH1F("b1__48"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50,0,50);
   b1__48->SetMinimum(0);
   b1__48->SetMaximum(1.05);
   b1__48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__48->SetLineColor(ci);
   b1__48->GetXaxis()->SetTitle("|dxy| [cm]");
   b1__48->GetXaxis()->SetLabelFont(42);
   b1__48->GetXaxis()->SetLabelSize(0.05);
   b1__48->GetXaxis()->SetTitleSize(0.05);
   b1__48->GetXaxis()->SetTitleFont(42);
   b1__48->GetYaxis()->SetTitle("Trigger efficiency");
   b1__48->GetYaxis()->SetNdivisions(520);
   b1__48->GetYaxis()->SetLabelFont(42);
   b1__48->GetYaxis()->SetLabelSize(0.05);
   b1__48->GetYaxis()->SetTitleSize(0.05);
   b1__48->GetYaxis()->SetTitleOffset(1.1);
   b1__48->GetYaxis()->SetTitleFont(42);
   b1__48->GetZaxis()->SetLabelFont(42);
   b1__48->GetZaxis()->SetLabelSize(0.035);
   b1__48->GetZaxis()->SetTitleSize(0.035);
   b1__48->GetZaxis()->SetTitleFont(42);
   b1__48->Draw("");
   
   TEfficiency * hden0_clone142 = new TEfficiency("hden0_clone","",50,0,50);
   
   hden0_clone142->SetConfidenceLevel(0.6826895);
   hden0_clone142->SetBetaAlpha(1);
   hden0_clone142->SetBetaBeta(1);
   hden0_clone142->SetWeight(1);
   hden0_clone142->SetStatisticOption(0);
   hden0_clone142->SetPosteriorMode(0);
   hden0_clone142->SetShortestInterval(0);
   hden0_clone142->SetTotalEvents(0,0);
   hden0_clone142->SetPassedEvents(0,0);
   hden0_clone142->SetTotalEvents(1,96);
   hden0_clone142->SetPassedEvents(1,74);
   hden0_clone142->SetTotalEvents(2,85);
   hden0_clone142->SetPassedEvents(2,74);
   hden0_clone142->SetTotalEvents(3,84);
   hden0_clone142->SetPassedEvents(3,73);
   hden0_clone142->SetTotalEvents(4,84);
   hden0_clone142->SetPassedEvents(4,72);
   hden0_clone142->SetTotalEvents(5,89);
   hden0_clone142->SetPassedEvents(5,83);
   hden0_clone142->SetTotalEvents(6,95);
   hden0_clone142->SetPassedEvents(6,80);
   hden0_clone142->SetTotalEvents(7,95);
   hden0_clone142->SetPassedEvents(7,80);
   hden0_clone142->SetTotalEvents(8,95);
   hden0_clone142->SetPassedEvents(8,86);
   hden0_clone142->SetTotalEvents(9,89);
   hden0_clone142->SetPassedEvents(9,83);
   hden0_clone142->SetTotalEvents(10,85);
   hden0_clone142->SetPassedEvents(10,73);
   hden0_clone142->SetTotalEvents(11,90);
   hden0_clone142->SetPassedEvents(11,80);
   hden0_clone142->SetTotalEvents(12,97);
   hden0_clone142->SetPassedEvents(12,92);
   hden0_clone142->SetTotalEvents(13,96);
   hden0_clone142->SetPassedEvents(13,86);
   hden0_clone142->SetTotalEvents(14,84);
   hden0_clone142->SetPassedEvents(14,78);
   hden0_clone142->SetTotalEvents(15,90);
   hden0_clone142->SetPassedEvents(15,76);
   hden0_clone142->SetTotalEvents(16,87);
   hden0_clone142->SetPassedEvents(16,82);
   hden0_clone142->SetTotalEvents(17,84);
   hden0_clone142->SetPassedEvents(17,74);
   hden0_clone142->SetTotalEvents(18,95);
   hden0_clone142->SetPassedEvents(18,81);
   hden0_clone142->SetTotalEvents(19,92);
   hden0_clone142->SetPassedEvents(19,74);
   hden0_clone142->SetTotalEvents(20,83);
   hden0_clone142->SetPassedEvents(20,75);
   hden0_clone142->SetTotalEvents(21,92);
   hden0_clone142->SetPassedEvents(21,78);
   hden0_clone142->SetTotalEvents(22,91);
   hden0_clone142->SetPassedEvents(22,84);
   hden0_clone142->SetTotalEvents(23,83);
   hden0_clone142->SetPassedEvents(23,77);
   hden0_clone142->SetTotalEvents(24,94);
   hden0_clone142->SetPassedEvents(24,74);
   hden0_clone142->SetTotalEvents(25,75);
   hden0_clone142->SetPassedEvents(25,62);
   hden0_clone142->SetTotalEvents(26,88);
   hden0_clone142->SetPassedEvents(26,73);
   hden0_clone142->SetTotalEvents(27,84);
   hden0_clone142->SetPassedEvents(27,66);
   hden0_clone142->SetTotalEvents(28,81);
   hden0_clone142->SetPassedEvents(28,67);
   hden0_clone142->SetTotalEvents(29,73);
   hden0_clone142->SetPassedEvents(29,59);
   hden0_clone142->SetTotalEvents(30,59);
   hden0_clone142->SetPassedEvents(30,48);
   hden0_clone142->SetTotalEvents(31,72);
   hden0_clone142->SetPassedEvents(31,57);
   hden0_clone142->SetTotalEvents(32,87);
   hden0_clone142->SetPassedEvents(32,77);
   hden0_clone142->SetTotalEvents(33,72);
   hden0_clone142->SetPassedEvents(33,58);
   hden0_clone142->SetTotalEvents(34,77);
   hden0_clone142->SetPassedEvents(34,71);
   hden0_clone142->SetTotalEvents(35,80);
   hden0_clone142->SetPassedEvents(35,71);
   hden0_clone142->SetTotalEvents(36,63);
   hden0_clone142->SetPassedEvents(36,56);
   hden0_clone142->SetTotalEvents(37,61);
   hden0_clone142->SetPassedEvents(37,55);
   hden0_clone142->SetTotalEvents(38,71);
   hden0_clone142->SetPassedEvents(38,62);
   hden0_clone142->SetTotalEvents(39,74);
   hden0_clone142->SetPassedEvents(39,59);
   hden0_clone142->SetTotalEvents(40,79);
   hden0_clone142->SetPassedEvents(40,65);
   hden0_clone142->SetTotalEvents(41,75);
   hden0_clone142->SetPassedEvents(41,62);
   hden0_clone142->SetTotalEvents(42,82);
   hden0_clone142->SetPassedEvents(42,70);
   hden0_clone142->SetTotalEvents(43,79);
   hden0_clone142->SetPassedEvents(43,70);
   hden0_clone142->SetTotalEvents(44,53);
   hden0_clone142->SetPassedEvents(44,41);
   hden0_clone142->SetTotalEvents(45,77);
   hden0_clone142->SetPassedEvents(45,62);
   hden0_clone142->SetTotalEvents(46,70);
   hden0_clone142->SetPassedEvents(46,62);
   hden0_clone142->SetTotalEvents(47,70);
   hden0_clone142->SetPassedEvents(47,56);
   hden0_clone142->SetTotalEvents(48,86);
   hden0_clone142->SetPassedEvents(48,75);
   hden0_clone142->SetTotalEvents(49,65);
   hden0_clone142->SetPassedEvents(49,61);
   hden0_clone142->SetTotalEvents(50,74);
   hden0_clone142->SetPassedEvents(50,65);
   hden0_clone142->SetTotalEvents(51,0);
   hden0_clone142->SetPassedEvents(51,0);
   hden0_clone142->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone142->SetLineColor(ci);
   hden0_clone142->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone142->SetMarkerColor(ci);
   hden0_clone142->SetMarkerStyle(24);
   hden0_clone142->Draw("samezp");
   
   TEfficiency * hden1_clone143 = new TEfficiency("hden1_clone","",50,0,50);
   
   hden1_clone143->SetConfidenceLevel(0.6826895);
   hden1_clone143->SetBetaAlpha(1);
   hden1_clone143->SetBetaBeta(1);
   hden1_clone143->SetWeight(1);
   hden1_clone143->SetStatisticOption(0);
   hden1_clone143->SetPosteriorMode(0);
   hden1_clone143->SetShortestInterval(0);
   hden1_clone143->SetTotalEvents(0,0);
   hden1_clone143->SetPassedEvents(0,0);
   hden1_clone143->SetTotalEvents(1,96);
   hden1_clone143->SetPassedEvents(1,74);
   hden1_clone143->SetTotalEvents(2,85);
   hden1_clone143->SetPassedEvents(2,71);
   hden1_clone143->SetTotalEvents(3,84);
   hden1_clone143->SetPassedEvents(3,73);
   hden1_clone143->SetTotalEvents(4,84);
   hden1_clone143->SetPassedEvents(4,72);
   hden1_clone143->SetTotalEvents(5,89);
   hden1_clone143->SetPassedEvents(5,83);
   hden1_clone143->SetTotalEvents(6,95);
   hden1_clone143->SetPassedEvents(6,80);
   hden1_clone143->SetTotalEvents(7,95);
   hden1_clone143->SetPassedEvents(7,78);
   hden1_clone143->SetTotalEvents(8,95);
   hden1_clone143->SetPassedEvents(8,85);
   hden1_clone143->SetTotalEvents(9,89);
   hden1_clone143->SetPassedEvents(9,81);
   hden1_clone143->SetTotalEvents(10,85);
   hden1_clone143->SetPassedEvents(10,73);
   hden1_clone143->SetTotalEvents(11,90);
   hden1_clone143->SetPassedEvents(11,80);
   hden1_clone143->SetTotalEvents(12,97);
   hden1_clone143->SetPassedEvents(12,91);
   hden1_clone143->SetTotalEvents(13,96);
   hden1_clone143->SetPassedEvents(13,85);
   hden1_clone143->SetTotalEvents(14,84);
   hden1_clone143->SetPassedEvents(14,75);
   hden1_clone143->SetTotalEvents(15,90);
   hden1_clone143->SetPassedEvents(15,76);
   hden1_clone143->SetTotalEvents(16,87);
   hden1_clone143->SetPassedEvents(16,81);
   hden1_clone143->SetTotalEvents(17,84);
   hden1_clone143->SetPassedEvents(17,74);
   hden1_clone143->SetTotalEvents(18,95);
   hden1_clone143->SetPassedEvents(18,81);
   hden1_clone143->SetTotalEvents(19,92);
   hden1_clone143->SetPassedEvents(19,73);
   hden1_clone143->SetTotalEvents(20,83);
   hden1_clone143->SetPassedEvents(20,73);
   hden1_clone143->SetTotalEvents(21,92);
   hden1_clone143->SetPassedEvents(21,78);
   hden1_clone143->SetTotalEvents(22,91);
   hden1_clone143->SetPassedEvents(22,84);
   hden1_clone143->SetTotalEvents(23,83);
   hden1_clone143->SetPassedEvents(23,76);
   hden1_clone143->SetTotalEvents(24,94);
   hden1_clone143->SetPassedEvents(24,73);
   hden1_clone143->SetTotalEvents(25,75);
   hden1_clone143->SetPassedEvents(25,60);
   hden1_clone143->SetTotalEvents(26,88);
   hden1_clone143->SetPassedEvents(26,72);
   hden1_clone143->SetTotalEvents(27,84);
   hden1_clone143->SetPassedEvents(27,65);
   hden1_clone143->SetTotalEvents(28,81);
   hden1_clone143->SetPassedEvents(28,66);
   hden1_clone143->SetTotalEvents(29,73);
   hden1_clone143->SetPassedEvents(29,58);
   hden1_clone143->SetTotalEvents(30,59);
   hden1_clone143->SetPassedEvents(30,47);
   hden1_clone143->SetTotalEvents(31,72);
   hden1_clone143->SetPassedEvents(31,57);
   hden1_clone143->SetTotalEvents(32,87);
   hden1_clone143->SetPassedEvents(32,76);
   hden1_clone143->SetTotalEvents(33,72);
   hden1_clone143->SetPassedEvents(33,58);
   hden1_clone143->SetTotalEvents(34,77);
   hden1_clone143->SetPassedEvents(34,70);
   hden1_clone143->SetTotalEvents(35,80);
   hden1_clone143->SetPassedEvents(35,70);
   hden1_clone143->SetTotalEvents(36,63);
   hden1_clone143->SetPassedEvents(36,56);
   hden1_clone143->SetTotalEvents(37,61);
   hden1_clone143->SetPassedEvents(37,55);
   hden1_clone143->SetTotalEvents(38,71);
   hden1_clone143->SetPassedEvents(38,61);
   hden1_clone143->SetTotalEvents(39,74);
   hden1_clone143->SetPassedEvents(39,59);
   hden1_clone143->SetTotalEvents(40,79);
   hden1_clone143->SetPassedEvents(40,65);
   hden1_clone143->SetTotalEvents(41,75);
   hden1_clone143->SetPassedEvents(41,60);
   hden1_clone143->SetTotalEvents(42,82);
   hden1_clone143->SetPassedEvents(42,68);
   hden1_clone143->SetTotalEvents(43,79);
   hden1_clone143->SetPassedEvents(43,68);
   hden1_clone143->SetTotalEvents(44,53);
   hden1_clone143->SetPassedEvents(44,39);
   hden1_clone143->SetTotalEvents(45,77);
   hden1_clone143->SetPassedEvents(45,62);
   hden1_clone143->SetTotalEvents(46,70);
   hden1_clone143->SetPassedEvents(46,62);
   hden1_clone143->SetTotalEvents(47,70);
   hden1_clone143->SetPassedEvents(47,56);
   hden1_clone143->SetTotalEvents(48,86);
   hden1_clone143->SetPassedEvents(48,73);
   hden1_clone143->SetTotalEvents(49,65);
   hden1_clone143->SetPassedEvents(49,61);
   hden1_clone143->SetTotalEvents(50,74);
   hden1_clone143->SetPassedEvents(50,62);
   hden1_clone143->SetTotalEvents(51,0);
   hden1_clone143->SetPassedEvents(51,0);
   hden1_clone143->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone143->SetLineColor(ci);
   hden1_clone143->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone143->SetMarkerColor(ci);
   hden1_clone143->SetMarkerStyle(21);
   hden1_clone143->Draw("samezp");
   
   TEfficiency * hden2_clone144 = new TEfficiency("hden2_clone","",50,0,50);
   
   hden2_clone144->SetConfidenceLevel(0.6826895);
   hden2_clone144->SetBetaAlpha(1);
   hden2_clone144->SetBetaBeta(1);
   hden2_clone144->SetWeight(1);
   hden2_clone144->SetStatisticOption(0);
   hden2_clone144->SetPosteriorMode(0);
   hden2_clone144->SetShortestInterval(0);
   hden2_clone144->SetTotalEvents(0,0);
   hden2_clone144->SetPassedEvents(0,0);
   hden2_clone144->SetTotalEvents(1,96);
   hden2_clone144->SetPassedEvents(1,74);
   hden2_clone144->SetTotalEvents(2,85);
   hden2_clone144->SetPassedEvents(2,73);
   hden2_clone144->SetTotalEvents(3,84);
   hden2_clone144->SetPassedEvents(3,73);
   hden2_clone144->SetTotalEvents(4,84);
   hden2_clone144->SetPassedEvents(4,72);
   hden2_clone144->SetTotalEvents(5,89);
   hden2_clone144->SetPassedEvents(5,83);
   hden2_clone144->SetTotalEvents(6,95);
   hden2_clone144->SetPassedEvents(6,81);
   hden2_clone144->SetTotalEvents(7,95);
   hden2_clone144->SetPassedEvents(7,78);
   hden2_clone144->SetTotalEvents(8,95);
   hden2_clone144->SetPassedEvents(8,86);
   hden2_clone144->SetTotalEvents(9,89);
   hden2_clone144->SetPassedEvents(9,82);
   hden2_clone144->SetTotalEvents(10,85);
   hden2_clone144->SetPassedEvents(10,73);
   hden2_clone144->SetTotalEvents(11,90);
   hden2_clone144->SetPassedEvents(11,79);
   hden2_clone144->SetTotalEvents(12,97);
   hden2_clone144->SetPassedEvents(12,93);
   hden2_clone144->SetTotalEvents(13,96);
   hden2_clone144->SetPassedEvents(13,84);
   hden2_clone144->SetTotalEvents(14,84);
   hden2_clone144->SetPassedEvents(14,76);
   hden2_clone144->SetTotalEvents(15,90);
   hden2_clone144->SetPassedEvents(15,72);
   hden2_clone144->SetTotalEvents(16,87);
   hden2_clone144->SetPassedEvents(16,80);
   hden2_clone144->SetTotalEvents(17,84);
   hden2_clone144->SetPassedEvents(17,70);
   hden2_clone144->SetTotalEvents(18,95);
   hden2_clone144->SetPassedEvents(18,79);
   hden2_clone144->SetTotalEvents(19,92);
   hden2_clone144->SetPassedEvents(19,71);
   hden2_clone144->SetTotalEvents(20,83);
   hden2_clone144->SetPassedEvents(20,70);
   hden2_clone144->SetTotalEvents(21,92);
   hden2_clone144->SetPassedEvents(21,75);
   hden2_clone144->SetTotalEvents(22,91);
   hden2_clone144->SetPassedEvents(22,81);
   hden2_clone144->SetTotalEvents(23,83);
   hden2_clone144->SetPassedEvents(23,73);
   hden2_clone144->SetTotalEvents(24,94);
   hden2_clone144->SetPassedEvents(24,68);
   hden2_clone144->SetTotalEvents(25,75);
   hden2_clone144->SetPassedEvents(25,55);
   hden2_clone144->SetTotalEvents(26,88);
   hden2_clone144->SetPassedEvents(26,61);
   hden2_clone144->SetTotalEvents(27,84);
   hden2_clone144->SetPassedEvents(27,61);
   hden2_clone144->SetTotalEvents(28,81);
   hden2_clone144->SetPassedEvents(28,58);
   hden2_clone144->SetTotalEvents(29,73);
   hden2_clone144->SetPassedEvents(29,53);
   hden2_clone144->SetTotalEvents(30,59);
   hden2_clone144->SetPassedEvents(30,44);
   hden2_clone144->SetTotalEvents(31,72);
   hden2_clone144->SetPassedEvents(31,54);
   hden2_clone144->SetTotalEvents(32,87);
   hden2_clone144->SetPassedEvents(32,66);
   hden2_clone144->SetTotalEvents(33,72);
   hden2_clone144->SetPassedEvents(33,45);
   hden2_clone144->SetTotalEvents(34,77);
   hden2_clone144->SetPassedEvents(34,59);
   hden2_clone144->SetTotalEvents(35,80);
   hden2_clone144->SetPassedEvents(35,62);
   hden2_clone144->SetTotalEvents(36,63);
   hden2_clone144->SetPassedEvents(36,45);
   hden2_clone144->SetTotalEvents(37,61);
   hden2_clone144->SetPassedEvents(37,52);
   hden2_clone144->SetTotalEvents(38,71);
   hden2_clone144->SetPassedEvents(38,49);
   hden2_clone144->SetTotalEvents(39,74);
   hden2_clone144->SetPassedEvents(39,50);
   hden2_clone144->SetTotalEvents(40,79);
   hden2_clone144->SetPassedEvents(40,58);
   hden2_clone144->SetTotalEvents(41,75);
   hden2_clone144->SetPassedEvents(41,53);
   hden2_clone144->SetTotalEvents(42,82);
   hden2_clone144->SetPassedEvents(42,54);
   hden2_clone144->SetTotalEvents(43,79);
   hden2_clone144->SetPassedEvents(43,58);
   hden2_clone144->SetTotalEvents(44,53);
   hden2_clone144->SetPassedEvents(44,35);
   hden2_clone144->SetTotalEvents(45,77);
   hden2_clone144->SetPassedEvents(45,52);
   hden2_clone144->SetTotalEvents(46,70);
   hden2_clone144->SetPassedEvents(46,52);
   hden2_clone144->SetTotalEvents(47,70);
   hden2_clone144->SetPassedEvents(47,49);
   hden2_clone144->SetTotalEvents(48,86);
   hden2_clone144->SetPassedEvents(48,64);
   hden2_clone144->SetTotalEvents(49,65);
   hden2_clone144->SetPassedEvents(49,48);
   hden2_clone144->SetTotalEvents(50,74);
   hden2_clone144->SetPassedEvents(50,54);
   hden2_clone144->SetTotalEvents(51,0);
   hden2_clone144->SetPassedEvents(51,0);
   hden2_clone144->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone144->SetLineColor(ci);
   hden2_clone144->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone144->SetMarkerColor(ci);
   hden2_clone144->SetMarkerStyle(25);
   hden2_clone144->Draw("samezp");
   
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
