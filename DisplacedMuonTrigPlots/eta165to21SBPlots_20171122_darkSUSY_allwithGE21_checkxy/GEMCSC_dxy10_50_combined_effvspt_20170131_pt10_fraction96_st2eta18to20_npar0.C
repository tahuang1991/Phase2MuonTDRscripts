void GEMCSC_dxy10_50_combined_effvspt_20170131_pt10_fraction96_st2eta18to20_npar0()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:13:30 2017) by ROOT version6.08/06
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
   Double_t xAxis9[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__25 = new TH1F("b1__25"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis9);
   b1__25->SetMinimum(0);
   b1__25->SetMaximum(1.05);
   b1__25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__25->SetLineColor(ci);
   b1__25->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__25->GetXaxis()->SetLabelFont(42);
   b1__25->GetXaxis()->SetLabelSize(0.05);
   b1__25->GetXaxis()->SetTitleSize(0.05);
   b1__25->GetXaxis()->SetTitleFont(42);
   b1__25->GetYaxis()->SetTitle("Trigger efficiency");
   b1__25->GetYaxis()->SetNdivisions(520);
   b1__25->GetYaxis()->SetLabelFont(42);
   b1__25->GetYaxis()->SetLabelSize(0.05);
   b1__25->GetYaxis()->SetTitleSize(0.05);
   b1__25->GetYaxis()->SetTitleOffset(1.1);
   b1__25->GetYaxis()->SetTitleFont(42);
   b1__25->GetZaxis()->SetLabelFont(42);
   b1__25->GetZaxis()->SetLabelSize(0.035);
   b1__25->GetZaxis()->SetTitleSize(0.035);
   b1__25->GetZaxis()->SetTitleFont(42);
   b1__25->Draw("");
   Double_t xAxis25[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone73 = new TEfficiency("hden0_clone","",21,xAxis25);
   
   hden0_clone73->SetConfidenceLevel(0.6826895);
   hden0_clone73->SetBetaAlpha(1);
   hden0_clone73->SetBetaBeta(1);
   hden0_clone73->SetWeight(1);
   hden0_clone73->SetStatisticOption(0);
   hden0_clone73->SetPosteriorMode(0);
   hden0_clone73->SetShortestInterval(0);
   hden0_clone73->SetTotalEvents(0,0);
   hden0_clone73->SetPassedEvents(0,0);
   hden0_clone73->SetTotalEvents(1,0);
   hden0_clone73->SetPassedEvents(1,0);
   hden0_clone73->SetTotalEvents(2,1);
   hden0_clone73->SetPassedEvents(2,0);
   hden0_clone73->SetTotalEvents(3,40);
   hden0_clone73->SetPassedEvents(3,0);
   hden0_clone73->SetTotalEvents(4,60);
   hden0_clone73->SetPassedEvents(4,0);
   hden0_clone73->SetTotalEvents(5,68);
   hden0_clone73->SetPassedEvents(5,7);
   hden0_clone73->SetTotalEvents(6,86);
   hden0_clone73->SetPassedEvents(6,16);
   hden0_clone73->SetTotalEvents(7,98);
   hden0_clone73->SetPassedEvents(7,39);
   hden0_clone73->SetTotalEvents(8,99);
   hden0_clone73->SetPassedEvents(8,47);
   hden0_clone73->SetTotalEvents(9,97);
   hden0_clone73->SetPassedEvents(9,70);
   hden0_clone73->SetTotalEvents(10,99);
   hden0_clone73->SetPassedEvents(10,71);
   hden0_clone73->SetTotalEvents(11,198);
   hden0_clone73->SetPassedEvents(11,182);
   hden0_clone73->SetTotalEvents(12,172);
   hden0_clone73->SetPassedEvents(12,163);
   hden0_clone73->SetTotalEvents(13,173);
   hden0_clone73->SetPassedEvents(13,170);
   hden0_clone73->SetTotalEvents(14,122);
   hden0_clone73->SetPassedEvents(14,120);
   hden0_clone73->SetTotalEvents(15,102);
   hden0_clone73->SetPassedEvents(15,100);
   hden0_clone73->SetTotalEvents(16,177);
   hden0_clone73->SetPassedEvents(16,173);
   hden0_clone73->SetTotalEvents(17,106);
   hden0_clone73->SetPassedEvents(17,99);
   hden0_clone73->SetTotalEvents(18,108);
   hden0_clone73->SetPassedEvents(18,107);
   hden0_clone73->SetTotalEvents(19,69);
   hden0_clone73->SetPassedEvents(19,67);
   hden0_clone73->SetTotalEvents(20,55);
   hden0_clone73->SetPassedEvents(20,54);
   hden0_clone73->SetTotalEvents(21,35);
   hden0_clone73->SetPassedEvents(21,34);
   hden0_clone73->SetTotalEvents(22,46);
   hden0_clone73->SetPassedEvents(22,44);
   hden0_clone73->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone73->SetLineColor(ci);
   hden0_clone73->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone73->SetMarkerColor(ci);
   hden0_clone73->SetMarkerStyle(24);
   hden0_clone73->Draw("samezp");
   Double_t xAxis26[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone74 = new TEfficiency("hden1_clone","",21,xAxis26);
   
   hden1_clone74->SetConfidenceLevel(0.6826895);
   hden1_clone74->SetBetaAlpha(1);
   hden1_clone74->SetBetaBeta(1);
   hden1_clone74->SetWeight(1);
   hden1_clone74->SetStatisticOption(0);
   hden1_clone74->SetPosteriorMode(0);
   hden1_clone74->SetShortestInterval(0);
   hden1_clone74->SetTotalEvents(0,0);
   hden1_clone74->SetPassedEvents(0,0);
   hden1_clone74->SetTotalEvents(1,0);
   hden1_clone74->SetPassedEvents(1,0);
   hden1_clone74->SetTotalEvents(2,1);
   hden1_clone74->SetPassedEvents(2,0);
   hden1_clone74->SetTotalEvents(3,40);
   hden1_clone74->SetPassedEvents(3,0);
   hden1_clone74->SetTotalEvents(4,60);
   hden1_clone74->SetPassedEvents(4,0);
   hden1_clone74->SetTotalEvents(5,68);
   hden1_clone74->SetPassedEvents(5,7);
   hden1_clone74->SetTotalEvents(6,86);
   hden1_clone74->SetPassedEvents(6,15);
   hden1_clone74->SetTotalEvents(7,98);
   hden1_clone74->SetPassedEvents(7,38);
   hden1_clone74->SetTotalEvents(8,99);
   hden1_clone74->SetPassedEvents(8,46);
   hden1_clone74->SetTotalEvents(9,97);
   hden1_clone74->SetPassedEvents(9,70);
   hden1_clone74->SetTotalEvents(10,99);
   hden1_clone74->SetPassedEvents(10,69);
   hden1_clone74->SetTotalEvents(11,198);
   hden1_clone74->SetPassedEvents(11,181);
   hden1_clone74->SetTotalEvents(12,172);
   hden1_clone74->SetPassedEvents(12,164);
   hden1_clone74->SetTotalEvents(13,173);
   hden1_clone74->SetPassedEvents(13,171);
   hden1_clone74->SetTotalEvents(14,122);
   hden1_clone74->SetPassedEvents(14,121);
   hden1_clone74->SetTotalEvents(15,102);
   hden1_clone74->SetPassedEvents(15,100);
   hden1_clone74->SetTotalEvents(16,177);
   hden1_clone74->SetPassedEvents(16,173);
   hden1_clone74->SetTotalEvents(17,106);
   hden1_clone74->SetPassedEvents(17,99);
   hden1_clone74->SetTotalEvents(18,108);
   hden1_clone74->SetPassedEvents(18,106);
   hden1_clone74->SetTotalEvents(19,69);
   hden1_clone74->SetPassedEvents(19,67);
   hden1_clone74->SetTotalEvents(20,55);
   hden1_clone74->SetPassedEvents(20,53);
   hden1_clone74->SetTotalEvents(21,35);
   hden1_clone74->SetPassedEvents(21,34);
   hden1_clone74->SetTotalEvents(22,46);
   hden1_clone74->SetPassedEvents(22,44);
   hden1_clone74->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone74->SetLineColor(ci);
   hden1_clone74->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone74->SetMarkerColor(ci);
   hden1_clone74->SetMarkerStyle(21);
   hden1_clone74->Draw("samezp");
   Double_t xAxis27[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone75 = new TEfficiency("hden2_clone","",21,xAxis27);
   
   hden2_clone75->SetConfidenceLevel(0.6826895);
   hden2_clone75->SetBetaAlpha(1);
   hden2_clone75->SetBetaBeta(1);
   hden2_clone75->SetWeight(1);
   hden2_clone75->SetStatisticOption(0);
   hden2_clone75->SetPosteriorMode(0);
   hden2_clone75->SetShortestInterval(0);
   hden2_clone75->SetTotalEvents(0,0);
   hden2_clone75->SetPassedEvents(0,0);
   hden2_clone75->SetTotalEvents(1,0);
   hden2_clone75->SetPassedEvents(1,0);
   hden2_clone75->SetTotalEvents(2,1);
   hden2_clone75->SetPassedEvents(2,0);
   hden2_clone75->SetTotalEvents(3,40);
   hden2_clone75->SetPassedEvents(3,0);
   hden2_clone75->SetTotalEvents(4,60);
   hden2_clone75->SetPassedEvents(4,0);
   hden2_clone75->SetTotalEvents(5,68);
   hden2_clone75->SetPassedEvents(5,7);
   hden2_clone75->SetTotalEvents(6,86);
   hden2_clone75->SetPassedEvents(6,17);
   hden2_clone75->SetTotalEvents(7,98);
   hden2_clone75->SetPassedEvents(7,39);
   hden2_clone75->SetTotalEvents(8,99);
   hden2_clone75->SetPassedEvents(8,44);
   hden2_clone75->SetTotalEvents(9,97);
   hden2_clone75->SetPassedEvents(9,70);
   hden2_clone75->SetTotalEvents(10,99);
   hden2_clone75->SetPassedEvents(10,69);
   hden2_clone75->SetTotalEvents(11,198);
   hden2_clone75->SetPassedEvents(11,180);
   hden2_clone75->SetTotalEvents(12,172);
   hden2_clone75->SetPassedEvents(12,162);
   hden2_clone75->SetTotalEvents(13,173);
   hden2_clone75->SetPassedEvents(13,166);
   hden2_clone75->SetTotalEvents(14,122);
   hden2_clone75->SetPassedEvents(14,120);
   hden2_clone75->SetTotalEvents(15,102);
   hden2_clone75->SetPassedEvents(15,99);
   hden2_clone75->SetTotalEvents(16,177);
   hden2_clone75->SetPassedEvents(16,171);
   hden2_clone75->SetTotalEvents(17,106);
   hden2_clone75->SetPassedEvents(17,99);
   hden2_clone75->SetTotalEvents(18,108);
   hden2_clone75->SetPassedEvents(18,106);
   hden2_clone75->SetTotalEvents(19,69);
   hden2_clone75->SetPassedEvents(19,66);
   hden2_clone75->SetTotalEvents(20,55);
   hden2_clone75->SetPassedEvents(20,51);
   hden2_clone75->SetTotalEvents(21,35);
   hden2_clone75->SetPassedEvents(21,34);
   hden2_clone75->SetTotalEvents(22,46);
   hden2_clone75->SetPassedEvents(22,44);
   hden2_clone75->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone75->SetLineColor(ci);
   hden2_clone75->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone75->SetMarkerColor(ci);
   hden2_clone75->SetMarkerStyle(25);
   hden2_clone75->Draw("samezp");
   
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
