void GEMCSC_hybrid_effvseta_20170208_pt6_simpt11_fraction94_st2eta16to21_badGE11frac30_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 22:30:20 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-0.1685185,2.693798,1.127778);
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
   Double_t xAxis82[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *b1__79 = new TH1F("b1__79"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis82);
   b1__79->SetMinimum(0);
   b1__79->SetMaximum(1.05);
   b1__79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__79->SetLineColor(ci);
   b1__79->GetXaxis()->SetTitle("Simulated |#eta|");
   b1__79->GetXaxis()->SetLabelFont(42);
   b1__79->GetXaxis()->SetLabelSize(0.05);
   b1__79->GetXaxis()->SetTitleSize(0.05);
   b1__79->GetXaxis()->SetTitleFont(42);
   b1__79->GetYaxis()->SetTitle("bending angle cut efficiency");
   b1__79->GetYaxis()->SetNdivisions(520);
   b1__79->GetYaxis()->SetLabelFont(42);
   b1__79->GetYaxis()->SetLabelSize(0.05);
   b1__79->GetYaxis()->SetTitleSize(0.05);
   b1__79->GetYaxis()->SetTitleOffset(1.1);
   b1__79->GetYaxis()->SetTitleFont(42);
   b1__79->GetZaxis()->SetLabelFont(42);
   b1__79->GetZaxis()->SetLabelSize(0.035);
   b1__79->GetZaxis()->SetTitleSize(0.035);
   b1__79->GetZaxis()->SetTitleFont(42);
   b1__79->Draw("");
   Double_t xAxis141[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden0_clone141 = new TEfficiency("hden0_clone","",23,xAxis141);
   
   hden0_clone141->SetConfidenceLevel(0.6826895);
   hden0_clone141->SetBetaAlpha(1);
   hden0_clone141->SetBetaBeta(1);
   hden0_clone141->SetWeight(1);
   hden0_clone141->SetStatisticOption(0);
   hden0_clone141->SetPosteriorMode(0);
   hden0_clone141->SetShortestInterval(0);
   hden0_clone141->SetTotalEvents(0,0);
   hden0_clone141->SetPassedEvents(0,0);
   hden0_clone141->SetTotalEvents(1,0);
   hden0_clone141->SetPassedEvents(1,0);
   hden0_clone141->SetTotalEvents(2,0);
   hden0_clone141->SetPassedEvents(2,0);
   hden0_clone141->SetTotalEvents(3,0);
   hden0_clone141->SetPassedEvents(3,0);
   hden0_clone141->SetTotalEvents(4,0);
   hden0_clone141->SetPassedEvents(4,0);
   hden0_clone141->SetTotalEvents(5,0);
   hden0_clone141->SetPassedEvents(5,0);
   hden0_clone141->SetTotalEvents(6,0);
   hden0_clone141->SetPassedEvents(6,0);
   hden0_clone141->SetTotalEvents(7,7678);
   hden0_clone141->SetPassedEvents(7,7460);
   hden0_clone141->SetTotalEvents(8,7334);
   hden0_clone141->SetPassedEvents(8,7070);
   hden0_clone141->SetTotalEvents(9,7490);
   hden0_clone141->SetPassedEvents(9,7118);
   hden0_clone141->SetTotalEvents(10,7468);
   hden0_clone141->SetPassedEvents(10,7089);
   hden0_clone141->SetTotalEvents(11,7202);
   hden0_clone141->SetPassedEvents(11,6887);
   hden0_clone141->SetTotalEvents(12,7372);
   hden0_clone141->SetPassedEvents(12,6996);
   hden0_clone141->SetTotalEvents(13,7382);
   hden0_clone141->SetPassedEvents(13,6999);
   hden0_clone141->SetTotalEvents(14,7342);
   hden0_clone141->SetPassedEvents(14,6842);
   hden0_clone141->SetTotalEvents(15,7398);
   hden0_clone141->SetPassedEvents(15,6786);
   hden0_clone141->SetTotalEvents(16,0);
   hden0_clone141->SetPassedEvents(16,0);
   hden0_clone141->SetTotalEvents(17,0);
   hden0_clone141->SetPassedEvents(17,0);
   hden0_clone141->SetTotalEvents(18,0);
   hden0_clone141->SetPassedEvents(18,0);
   hden0_clone141->SetTotalEvents(19,0);
   hden0_clone141->SetPassedEvents(19,0);
   hden0_clone141->SetTotalEvents(20,0);
   hden0_clone141->SetPassedEvents(20,0);
   hden0_clone141->SetTotalEvents(21,0);
   hden0_clone141->SetPassedEvents(21,0);
   hden0_clone141->SetTotalEvents(22,0);
   hden0_clone141->SetPassedEvents(22,0);
   hden0_clone141->SetTotalEvents(23,0);
   hden0_clone141->SetPassedEvents(23,0);
   hden0_clone141->SetTotalEvents(24,0);
   hden0_clone141->SetPassedEvents(24,0);
   hden0_clone141->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone141->SetLineColor(ci);
   hden0_clone141->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone141->SetMarkerColor(ci);
   hden0_clone141->SetMarkerStyle(26);
   hden0_clone141->Draw("samezp");
   Double_t xAxis142[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden1_clone142 = new TEfficiency("hden1_clone","",23,xAxis142);
   
   hden1_clone142->SetConfidenceLevel(0.6826895);
   hden1_clone142->SetBetaAlpha(1);
   hden1_clone142->SetBetaBeta(1);
   hden1_clone142->SetWeight(1);
   hden1_clone142->SetStatisticOption(0);
   hden1_clone142->SetPosteriorMode(0);
   hden1_clone142->SetShortestInterval(0);
   hden1_clone142->SetTotalEvents(0,0);
   hden1_clone142->SetPassedEvents(0,0);
   hden1_clone142->SetTotalEvents(1,0);
   hden1_clone142->SetPassedEvents(1,0);
   hden1_clone142->SetTotalEvents(2,0);
   hden1_clone142->SetPassedEvents(2,0);
   hden1_clone142->SetTotalEvents(3,0);
   hden1_clone142->SetPassedEvents(3,0);
   hden1_clone142->SetTotalEvents(4,0);
   hden1_clone142->SetPassedEvents(4,0);
   hden1_clone142->SetTotalEvents(5,0);
   hden1_clone142->SetPassedEvents(5,0);
   hden1_clone142->SetTotalEvents(6,0);
   hden1_clone142->SetPassedEvents(6,0);
   hden1_clone142->SetTotalEvents(7,5428);
   hden1_clone142->SetPassedEvents(7,5301);
   hden1_clone142->SetTotalEvents(8,5117);
   hden1_clone142->SetPassedEvents(8,4939);
   hden1_clone142->SetTotalEvents(9,5199);
   hden1_clone142->SetPassedEvents(9,4965);
   hden1_clone142->SetTotalEvents(10,5240);
   hden1_clone142->SetPassedEvents(10,4995);
   hden1_clone142->SetTotalEvents(11,4960);
   hden1_clone142->SetPassedEvents(11,4766);
   hden1_clone142->SetTotalEvents(12,5124);
   hden1_clone142->SetPassedEvents(12,4879);
   hden1_clone142->SetTotalEvents(13,5110);
   hden1_clone142->SetPassedEvents(13,4837);
   hden1_clone142->SetTotalEvents(14,5165);
   hden1_clone142->SetPassedEvents(14,4900);
   hden1_clone142->SetTotalEvents(15,5163);
   hden1_clone142->SetPassedEvents(15,4830);
   hden1_clone142->SetTotalEvents(16,0);
   hden1_clone142->SetPassedEvents(16,0);
   hden1_clone142->SetTotalEvents(17,0);
   hden1_clone142->SetPassedEvents(17,0);
   hden1_clone142->SetTotalEvents(18,0);
   hden1_clone142->SetPassedEvents(18,0);
   hden1_clone142->SetTotalEvents(19,0);
   hden1_clone142->SetPassedEvents(19,0);
   hden1_clone142->SetTotalEvents(20,0);
   hden1_clone142->SetPassedEvents(20,0);
   hden1_clone142->SetTotalEvents(21,0);
   hden1_clone142->SetPassedEvents(21,0);
   hden1_clone142->SetTotalEvents(22,0);
   hden1_clone142->SetPassedEvents(22,0);
   hden1_clone142->SetTotalEvents(23,0);
   hden1_clone142->SetPassedEvents(23,0);
   hden1_clone142->SetTotalEvents(24,0);
   hden1_clone142->SetPassedEvents(24,0);
   hden1_clone142->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden1_clone142->SetLineColor(ci);
   hden1_clone142->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden1_clone142->SetMarkerColor(ci);
   hden1_clone142->SetMarkerStyle(25);
   hden1_clone142->Draw("samezp");
   Double_t xAxis143[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TEfficiency * hden2_clone143 = new TEfficiency("hden2_clone","",23,xAxis143);
   
   hden2_clone143->SetConfidenceLevel(0.6826895);
   hden2_clone143->SetBetaAlpha(1);
   hden2_clone143->SetBetaBeta(1);
   hden2_clone143->SetWeight(1);
   hden2_clone143->SetStatisticOption(0);
   hden2_clone143->SetPosteriorMode(0);
   hden2_clone143->SetShortestInterval(0);
   hden2_clone143->SetTotalEvents(0,0);
   hden2_clone143->SetPassedEvents(0,0);
   hden2_clone143->SetTotalEvents(1,0);
   hden2_clone143->SetPassedEvents(1,0);
   hden2_clone143->SetTotalEvents(2,0);
   hden2_clone143->SetPassedEvents(2,0);
   hden2_clone143->SetTotalEvents(3,0);
   hden2_clone143->SetPassedEvents(3,0);
   hden2_clone143->SetTotalEvents(4,0);
   hden2_clone143->SetPassedEvents(4,0);
   hden2_clone143->SetTotalEvents(5,0);
   hden2_clone143->SetPassedEvents(5,0);
   hden2_clone143->SetTotalEvents(6,0);
   hden2_clone143->SetPassedEvents(6,0);
   hden2_clone143->SetTotalEvents(7,2250);
   hden2_clone143->SetPassedEvents(7,2150);
   hden2_clone143->SetTotalEvents(8,2217);
   hden2_clone143->SetPassedEvents(8,2121);
   hden2_clone143->SetTotalEvents(9,2291);
   hden2_clone143->SetPassedEvents(9,2149);
   hden2_clone143->SetTotalEvents(10,2228);
   hden2_clone143->SetPassedEvents(10,2084);
   hden2_clone143->SetTotalEvents(11,2242);
   hden2_clone143->SetPassedEvents(11,2116);
   hden2_clone143->SetTotalEvents(12,2248);
   hden2_clone143->SetPassedEvents(12,2111);
   hden2_clone143->SetTotalEvents(13,2272);
   hden2_clone143->SetPassedEvents(13,2151);
   hden2_clone143->SetTotalEvents(14,2177);
   hden2_clone143->SetPassedEvents(14,1936);
   hden2_clone143->SetTotalEvents(15,2235);
   hden2_clone143->SetPassedEvents(15,1950);
   hden2_clone143->SetTotalEvents(16,0);
   hden2_clone143->SetPassedEvents(16,0);
   hden2_clone143->SetTotalEvents(17,0);
   hden2_clone143->SetPassedEvents(17,0);
   hden2_clone143->SetTotalEvents(18,0);
   hden2_clone143->SetPassedEvents(18,0);
   hden2_clone143->SetTotalEvents(19,0);
   hden2_clone143->SetPassedEvents(19,0);
   hden2_clone143->SetTotalEvents(20,0);
   hden2_clone143->SetPassedEvents(20,0);
   hden2_clone143->SetTotalEvents(21,0);
   hden2_clone143->SetPassedEvents(21,0);
   hden2_clone143->SetTotalEvents(22,0);
   hden2_clone143->SetPassedEvents(22,0);
   hden2_clone143->SetTotalEvents(23,0);
   hden2_clone143->SetPassedEvents(23,0);
   hden2_clone143->SetTotalEvents(24,0);
   hden2_clone143->SetPassedEvents(24,0);
   hden2_clone143->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   hden2_clone143->SetLineColor(ci);
   hden2_clone143->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hden2_clone143->SetMarkerColor(ci);
   hden2_clone143->SetMarkerStyle(21);
   hden2_clone143->Draw("samezp");
   
   TLegend *leg = new TLegend(0.45,0.2,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GE11-ME11 and GE21-ME21","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden0_clone","combined","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","good muons (0.70)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden2_clone","bad muons(0.30)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.57,"1.65<|#eta|<2.10, p_{T}^{L1}>6 GeV");
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
