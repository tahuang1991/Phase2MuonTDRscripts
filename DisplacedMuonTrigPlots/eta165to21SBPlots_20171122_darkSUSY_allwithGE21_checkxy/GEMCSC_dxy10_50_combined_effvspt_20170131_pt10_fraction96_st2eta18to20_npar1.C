void GEMCSC_dxy10_50_combined_effvspt_20170131_pt10_fraction96_st2eta18to20_npar1()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Nov 27 15:13:42 2017) by ROOT version6.08/06
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
   Double_t xAxis11[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__31 = new TH1F("b1__31"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis11);
   b1__31->SetMinimum(0);
   b1__31->SetMaximum(1.05);
   b1__31->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__31->SetLineColor(ci);
   b1__31->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__31->GetXaxis()->SetLabelFont(42);
   b1__31->GetXaxis()->SetLabelSize(0.05);
   b1__31->GetXaxis()->SetTitleSize(0.05);
   b1__31->GetXaxis()->SetTitleFont(42);
   b1__31->GetYaxis()->SetTitle("Trigger efficiency");
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
   Double_t xAxis31[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden0_clone91 = new TEfficiency("hden0_clone","",21,xAxis31);
   
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
   hden0_clone91->SetTotalEvents(2,1);
   hden0_clone91->SetPassedEvents(2,0);
   hden0_clone91->SetTotalEvents(3,29);
   hden0_clone91->SetPassedEvents(3,1);
   hden0_clone91->SetTotalEvents(4,48);
   hden0_clone91->SetPassedEvents(4,2);
   hden0_clone91->SetTotalEvents(5,56);
   hden0_clone91->SetPassedEvents(5,2);
   hden0_clone91->SetTotalEvents(6,83);
   hden0_clone91->SetPassedEvents(6,28);
   hden0_clone91->SetTotalEvents(7,85);
   hden0_clone91->SetPassedEvents(7,18);
   hden0_clone91->SetTotalEvents(8,90);
   hden0_clone91->SetPassedEvents(8,50);
   hden0_clone91->SetTotalEvents(9,97);
   hden0_clone91->SetPassedEvents(9,74);
   hden0_clone91->SetTotalEvents(10,72);
   hden0_clone91->SetPassedEvents(10,57);
   hden0_clone91->SetTotalEvents(11,173);
   hden0_clone91->SetPassedEvents(11,150);
   hden0_clone91->SetTotalEvents(12,184);
   hden0_clone91->SetPassedEvents(12,169);
   hden0_clone91->SetTotalEvents(13,146);
   hden0_clone91->SetPassedEvents(13,140);
   hden0_clone91->SetTotalEvents(14,128);
   hden0_clone91->SetPassedEvents(14,120);
   hden0_clone91->SetTotalEvents(15,96);
   hden0_clone91->SetPassedEvents(15,93);
   hden0_clone91->SetTotalEvents(16,163);
   hden0_clone91->SetPassedEvents(16,157);
   hden0_clone91->SetTotalEvents(17,128);
   hden0_clone91->SetPassedEvents(17,124);
   hden0_clone91->SetTotalEvents(18,86);
   hden0_clone91->SetPassedEvents(18,83);
   hden0_clone91->SetTotalEvents(19,61);
   hden0_clone91->SetPassedEvents(19,59);
   hden0_clone91->SetTotalEvents(20,54);
   hden0_clone91->SetPassedEvents(20,54);
   hden0_clone91->SetTotalEvents(21,40);
   hden0_clone91->SetPassedEvents(21,38);
   hden0_clone91->SetTotalEvents(22,33);
   hden0_clone91->SetPassedEvents(22,31);
   hden0_clone91->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden0_clone91->SetLineColor(ci);
   hden0_clone91->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden0_clone91->SetMarkerColor(ci);
   hden0_clone91->SetMarkerStyle(24);
   hden0_clone91->Draw("samezp");
   Double_t xAxis32[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden1_clone92 = new TEfficiency("hden1_clone","",21,xAxis32);
   
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
   hden1_clone92->SetTotalEvents(2,1);
   hden1_clone92->SetPassedEvents(2,0);
   hden1_clone92->SetTotalEvents(3,29);
   hden1_clone92->SetPassedEvents(3,1);
   hden1_clone92->SetTotalEvents(4,48);
   hden1_clone92->SetPassedEvents(4,2);
   hden1_clone92->SetTotalEvents(5,56);
   hden1_clone92->SetPassedEvents(5,5);
   hden1_clone92->SetTotalEvents(6,83);
   hden1_clone92->SetPassedEvents(6,26);
   hden1_clone92->SetTotalEvents(7,85);
   hden1_clone92->SetPassedEvents(7,28);
   hden1_clone92->SetTotalEvents(8,90);
   hden1_clone92->SetPassedEvents(8,59);
   hden1_clone92->SetTotalEvents(9,97);
   hden1_clone92->SetPassedEvents(9,77);
   hden1_clone92->SetTotalEvents(10,72);
   hden1_clone92->SetPassedEvents(10,57);
   hden1_clone92->SetTotalEvents(11,173);
   hden1_clone92->SetPassedEvents(11,165);
   hden1_clone92->SetTotalEvents(12,184);
   hden1_clone92->SetPassedEvents(12,165);
   hden1_clone92->SetTotalEvents(13,146);
   hden1_clone92->SetPassedEvents(13,140);
   hden1_clone92->SetTotalEvents(14,128);
   hden1_clone92->SetPassedEvents(14,119);
   hden1_clone92->SetTotalEvents(15,96);
   hden1_clone92->SetPassedEvents(15,92);
   hden1_clone92->SetTotalEvents(16,163);
   hden1_clone92->SetPassedEvents(16,155);
   hden1_clone92->SetTotalEvents(17,128);
   hden1_clone92->SetPassedEvents(17,119);
   hden1_clone92->SetTotalEvents(18,86);
   hden1_clone92->SetPassedEvents(18,82);
   hden1_clone92->SetTotalEvents(19,61);
   hden1_clone92->SetPassedEvents(19,59);
   hden1_clone92->SetTotalEvents(20,54);
   hden1_clone92->SetPassedEvents(20,54);
   hden1_clone92->SetTotalEvents(21,40);
   hden1_clone92->SetPassedEvents(21,37);
   hden1_clone92->SetTotalEvents(22,33);
   hden1_clone92->SetPassedEvents(22,30);
   hden1_clone92->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   hden1_clone92->SetLineColor(ci);
   hden1_clone92->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   hden1_clone92->SetMarkerColor(ci);
   hden1_clone92->SetMarkerStyle(21);
   hden1_clone92->Draw("samezp");
   Double_t xAxis33[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hden2_clone93 = new TEfficiency("hden2_clone","",21,xAxis33);
   
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
   hden2_clone93->SetTotalEvents(2,1);
   hden2_clone93->SetPassedEvents(2,0);
   hden2_clone93->SetTotalEvents(3,29);
   hden2_clone93->SetPassedEvents(3,0);
   hden2_clone93->SetTotalEvents(4,48);
   hden2_clone93->SetPassedEvents(4,1);
   hden2_clone93->SetTotalEvents(5,56);
   hden2_clone93->SetPassedEvents(5,1);
   hden2_clone93->SetTotalEvents(6,83);
   hden2_clone93->SetPassedEvents(6,25);
   hden2_clone93->SetTotalEvents(7,85);
   hden2_clone93->SetPassedEvents(7,16);
   hden2_clone93->SetTotalEvents(8,90);
   hden2_clone93->SetPassedEvents(8,46);
   hden2_clone93->SetTotalEvents(9,97);
   hden2_clone93->SetPassedEvents(9,68);
   hden2_clone93->SetTotalEvents(10,72);
   hden2_clone93->SetPassedEvents(10,53);
   hden2_clone93->SetTotalEvents(11,173);
   hden2_clone93->SetPassedEvents(11,152);
   hden2_clone93->SetTotalEvents(12,184);
   hden2_clone93->SetPassedEvents(12,164);
   hden2_clone93->SetTotalEvents(13,146);
   hden2_clone93->SetPassedEvents(13,137);
   hden2_clone93->SetTotalEvents(14,128);
   hden2_clone93->SetPassedEvents(14,112);
   hden2_clone93->SetTotalEvents(15,96);
   hden2_clone93->SetPassedEvents(15,90);
   hden2_clone93->SetTotalEvents(16,163);
   hden2_clone93->SetPassedEvents(16,152);
   hden2_clone93->SetTotalEvents(17,128);
   hden2_clone93->SetPassedEvents(17,119);
   hden2_clone93->SetTotalEvents(18,86);
   hden2_clone93->SetPassedEvents(18,81);
   hden2_clone93->SetTotalEvents(19,61);
   hden2_clone93->SetPassedEvents(19,59);
   hden2_clone93->SetTotalEvents(20,54);
   hden2_clone93->SetPassedEvents(20,54);
   hden2_clone93->SetTotalEvents(21,40);
   hden2_clone93->SetPassedEvents(21,38);
   hden2_clone93->SetTotalEvents(22,33);
   hden2_clone93->SetPassedEvents(22,31);
   hden2_clone93->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden2_clone93->SetLineColor(ci);
   hden2_clone93->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden2_clone93->SetMarkerColor(ci);
   hden2_clone93->SetMarkerStyle(25);
   hden2_clone93->Draw("samezp");
   
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
   TLatex *   tex = new TLatex(0.35,0.57,"#splitline{ME11 odd,ME21 odd,ME31 odd}{1.8<|#eta|<2.00, p_{T}^{L1}>10 GeV}");
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
