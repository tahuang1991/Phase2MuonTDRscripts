void GEMCSC_dxy10_50_hybrid_vetos_eff_20170131_pt10_fraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Nov 26 19:47:54 2017) by ROOT version6.08/06
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
   Double_t xAxis26[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TH1F *b1__50 = new TH1F("b1__50"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",21, xAxis26);
   b1__50->SetMinimum(0);
   b1__50->SetMaximum(1.05);
   b1__50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__50->SetLineColor(ci);
   b1__50->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__50->GetXaxis()->SetLabelFont(42);
   b1__50->GetXaxis()->SetLabelSize(0.05);
   b1__50->GetXaxis()->SetTitleSize(0.05);
   b1__50->GetXaxis()->SetTitleFont(42);
   b1__50->GetYaxis()->SetTitle("Trigger efficiency");
   b1__50->GetYaxis()->SetNdivisions(520);
   b1__50->GetYaxis()->SetLabelFont(42);
   b1__50->GetYaxis()->SetLabelSize(0.05);
   b1__50->GetYaxis()->SetTitleSize(0.05);
   b1__50->GetYaxis()->SetTitleOffset(1.1);
   b1__50->GetYaxis()->SetTitleFont(42);
   b1__50->GetZaxis()->SetLabelFont(42);
   b1__50->GetZaxis()->SetLabelSize(0.035);
   b1__50->GetZaxis()->SetTitleSize(0.035);
   b1__50->GetZaxis()->SetTitleFont(42);
   b1__50->Draw("");
   Double_t xAxis75[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hybrideta16to21displacedmuonfrac96pt10147 = new TEfficiency("hybrideta16to21displacedmuonfrac96pt10","",21,xAxis75);
   
   hybrideta16to21displacedmuonfrac96pt10147->SetConfidenceLevel(0.6826895);
   hybrideta16to21displacedmuonfrac96pt10147->SetBetaAlpha(1);
   hybrideta16to21displacedmuonfrac96pt10147->SetBetaBeta(1);
   hybrideta16to21displacedmuonfrac96pt10147->SetWeight(0.08333333);
   hybrideta16to21displacedmuonfrac96pt10147->SetStatisticOption(0);
   hybrideta16to21displacedmuonfrac96pt10147->SetPosteriorMode(0);
   hybrideta16to21displacedmuonfrac96pt10147->SetShortestInterval(0);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(0,0);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(0,0);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(1,0);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(1,0);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(2,10);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(2,0);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(3,248);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(3,2);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(4,354);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(4,10);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(5,484);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(5,49);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(6,537);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(6,124);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(7,618);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(7,217);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(8,664);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(8,328);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(9,663);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(9,421);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(10,661);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(10,462);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(11,1281);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(11,1086);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(12,1150);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(12,1048);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(13,1048);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(13,980);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(14,906);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(14,838);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(15,791);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(15,750);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(16,1245);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(16,1189);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(17,894);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(17,847);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(18,632);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(18,603);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(19,438);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(19,427);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(20,341);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(20,330);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(21,232);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(21,226);
   hybrideta16to21displacedmuonfrac96pt10147->SetTotalEvents(22,267);
   hybrideta16to21displacedmuonfrac96pt10147->SetPassedEvents(22,259);
   hybrideta16to21displacedmuonfrac96pt10147->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21displacedmuonfrac96pt10147->SetLineColor(ci);
   hybrideta16to21displacedmuonfrac96pt10147->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hybrideta16to21displacedmuonfrac96pt10147->SetMarkerColor(ci);
   hybrideta16to21displacedmuonfrac96pt10147->SetMarkerStyle(25);
   hybrideta16to21displacedmuonfrac96pt10147->Draw("samepz");
   Double_t xAxis76[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 24, 28, 32, 36, 42, 50}; 
   
   TEfficiency * hybridmediumvetoeta16to21displacedmuonfrac96pt10148 = new TEfficiency("hybridmediumvetoeta16to21displacedmuonfrac96pt10","",21,xAxis76);
   
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetConfidenceLevel(0.6826895);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetBetaAlpha(1);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetBetaBeta(1);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetWeight(0.08333333);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetStatisticOption(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPosteriorMode(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetShortestInterval(0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(0,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(0,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(1,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(1,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(2,10);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(2,0);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(3,248);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(3,1);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(4,354);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(4,3);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(5,484);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(5,6);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(6,537);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(6,18);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(7,618);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(7,30);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(8,664);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(8,35);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(9,663);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(9,46);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(10,661);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(10,46);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(11,1281);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(11,103);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(12,1150);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(12,98);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(13,1048);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(13,105);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(14,906);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(14,80);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(15,791);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(15,65);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(16,1245);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(16,82);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(17,894);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(17,50);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(18,632);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(18,34);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(19,438);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(19,16);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(20,341);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(20,9);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(21,232);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(21,5);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetTotalEvents(22,267);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetPassedEvents(22,4);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetFillColor(19);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetLineWidth(2);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->SetMarkerStyle(21);
   hybridmediumvetoeta16to21displacedmuonfrac96pt10148->Draw("samepz");
   
   TLegend *leg = new TLegend(0.45,0.2,0.9,0.38,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybrideta16to21displacedmuonfrac96pt10","no track veto","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hybridmediumvetoeta16to21displacedmuonfrac96pt10","medium track veto","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.4,0.6,"#splitline{Hybrid algorithm w/ GE21}{1.65<|#eta|<2.10, p_{T}^{L1}>10 GeV}");
tex->SetNDC();
   tex->SetTextSize(0.04);
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
