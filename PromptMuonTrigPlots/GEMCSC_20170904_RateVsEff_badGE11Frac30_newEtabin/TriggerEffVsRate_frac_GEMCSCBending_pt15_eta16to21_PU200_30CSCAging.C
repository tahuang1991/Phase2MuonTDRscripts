void TriggerEffVsRate_frac_GEMCSCBending_pt15_eta16to21_PU200_30CSCAging()
{
//=========Macro generated from canvas: c1_n3/c1_n3
//=========  (Mon Sep  4 20:10:43 2017) by ROOT version6.08/06
   TCanvas *c1_n3 = new TCanvas("c1_n3", "c1_n3",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n3->SetHighLightColor(2);
   c1_n3->Range(0.6908446,-2.462121,1.026834,16.47727);
   c1_n3->SetFillColor(0);
   c1_n3->SetBorderMode(0);
   c1_n3->SetBorderSize(2);
   c1_n3->SetLeftMargin(0.126);
   c1_n3->SetTopMargin(0.06);
   c1_n3->SetBottomMargin(0.13);
   c1_n3->SetFrameBorderMode(0);
   c1_n3->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("TriggerEffVsRate_frac_all_pt15_eta16to21");
   multigraph->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   
   Double_t Graph_fx1007[24] = {
   0.75,
   0.76,
   0.77,
   0.78,
   0.79,
   0.8,
   0.81,
   0.82,
   0.83,
   0.84,
   0.85,
   0.86,
   0.87,
   0.88,
   0.89,
   0.9,
   0.91,
   0.92,
   0.93,
   0.94,
   0.95,
   0.96,
   0.97,
   0.98};
   Double_t Graph_fy1007[24] = {
   7.153003,
   7.761769,
   7.761769,
   7.761769,
   7.761769,
   7.761769,
   8.218344,
   8.218344,
   8.218344,
   8.218344,
   8.522727,
   8.522727,
   8.522727,
   8.979302,
   8.979302,
   10.04464,
   10.19683,
   10.65341,
   11.10998,
   11.26218,
   11.71875,
   12.47971,
   12.47971,
   12.78409};
   Double_t Graph_fex1007[24] = {
   0.005,
   0.004898979,
   0.004795832,
   0.004690416,
   0.004582576,
   0.004472136,
   0.004358899,
   0.004242641,
   0.004123106,
   0.004,
   0.003872983,
   0.003741657,
   0.003605551,
   0.003464102,
   0.003316625,
   0.003162278,
   0.003,
   0.002828427,
   0.002645751,
   0.00244949,
   0.002236068,
   0.002,
   0.001732051,
   0.001414214};
   Double_t Graph_fey1007[24] = {
   1.043373,
   1.086865,
   1.086865,
   1.086865,
   1.086865,
   1.086865,
   1.118375,
   1.118375,
   1.118375,
   1.118375,
   1.138897,
   1.138897,
   1.138897,
   1.169006,
   1.169006,
   1.23641,
   1.245742,
   1.273326,
   1.300325,
   1.309201,
   1.335476,
   1.378153,
   1.378153,
   1.394859};
   TGraphErrors *gre = new TGraphErrors(24,Graph_fx1007,Graph_fy1007,Graph_fex1007,Graph_fey1007);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,0.7213586,1.005056);
   Graph_Graph1007->SetMinimum(5.302699);
   Graph_Graph1007->SetMaximum(14.98588);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1008[24] = {
   0.75,
   0.76,
   0.77,
   0.78,
   0.79,
   0.8,
   0.81,
   0.82,
   0.83,
   0.84,
   0.85,
   0.86,
   0.87,
   0.88,
   0.89,
   0.9,
   0.91,
   0.92,
   0.93,
   0.94,
   0.95,
   0.96,
   0.97,
   0.98};
   Double_t Graph_fy1008[24] = {
   4.261364,
   4.565747,
   4.565747,
   4.565747,
   4.717938,
   5.022321,
   5.174513,
   5.174513,
   5.326705,
   5.326705,
   5.478896,
   5.783279,
   5.783279,
   6.087662,
   6.392045,
   6.392045,
   7.153003,
   7.305195,
   7.609578,
   8.066153,
   8.522727,
   8.979302,
   9.283685,
   9.588068};
   Double_t Graph_fex1008[24] = {
   0.005,
   0.004898979,
   0.004795832,
   0.004690416,
   0.004582576,
   0.004472136,
   0.004358899,
   0.004242641,
   0.004123106,
   0.004,
   0.003872983,
   0.003741657,
   0.003605551,
   0.003464102,
   0.003316625,
   0.003162278,
   0.003,
   0.002828427,
   0.002645751,
   0.00244949,
   0.002236068,
   0.002,
   0.001732051,
   0.001414214};
   Double_t Graph_fey1008[24] = {
   0.805322,
   0.8335875,
   0.8335875,
   0.8335875,
   0.8473667,
   0.8742739,
   0.8874217,
   0.8874217,
   0.9003774,
   0.9003774,
   0.9131494,
   0.9381718,
   0.9381718,
   0.9625439,
   0.986314,
   0.986314,
   1.043373,
   1.054414,
   1.076157,
   1.107971,
   1.138897,
   1.169006,
   1.188654,
   1.207983};
   gre = new TGraphErrors(24,Graph_fx1008,Graph_fy1008,Graph_fex1008,Graph_fey1008);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(22);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,0.7213586,1.005056);
   Graph_Graph1008->SetMinimum(2.722041);
   Graph_Graph1008->SetMaximum(11.53005);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("L1 Trigger efficiency");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.15,0.68,0.6,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu(standalone) Performance","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","YE11 bending angle cut","f");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Combined bending angle cut","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.15,0.55,"1.65<|#eta|<2.10, p_{T}^{L1}>15 GeV");
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
   c1_n3->Modified();
   c1_n3->cd();
   c1_n3->SetSelected(c1_n3);
}
