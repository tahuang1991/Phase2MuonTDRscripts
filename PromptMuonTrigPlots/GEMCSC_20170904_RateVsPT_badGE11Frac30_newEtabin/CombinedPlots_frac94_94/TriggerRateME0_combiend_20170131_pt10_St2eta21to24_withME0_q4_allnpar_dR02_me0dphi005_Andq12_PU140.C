void TriggerRateME0_combiend_20170131_pt10_St2eta21to24_withME0_q4_allnpar_dR02_me0dphi005_Andq12_PU140()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:01:56 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-0.8962307,2.693798,3.550757);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetLogy();
   c1_n2->SetGridx();
   c1_n2->SetGridy();
   c1_n2->SetTickx(1);
   c1_n2->SetTicky(1);
   c1_n2->SetLeftMargin(0.126);
   c1_n2->SetTopMargin(0.06);
   c1_n2->SetBottomMargin(0.13);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   Double_t xAxis1[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis1);
   hs_stack_1->SetMinimum(0.4807039);
   hs_stack_1->SetMaximum(1922.816);
   hs_stack_1->SetDirectory(0);
   hs_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_1->SetLineColor(ci);
   hs_stack_1->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_1->GetXaxis()->SetLabelFont(42);
   hs_stack_1->GetXaxis()->SetLabelSize(0.035);
   hs_stack_1->GetXaxis()->SetTitleSize(0.05);
   hs_stack_1->GetXaxis()->SetTitleFont(42);
   hs_stack_1->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_1->GetYaxis()->SetLabelFont(42);
   hs_stack_1->GetYaxis()->SetLabelSize(0.035);
   hs_stack_1->GetYaxis()->SetTitleSize(0.05);
   hs_stack_1->GetYaxis()->SetTitleFont(42);
   hs_stack_1->GetZaxis()->SetLabelFont(42);
   hs_stack_1->GetZaxis()->SetLabelSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_1);
   
   Double_t xAxis2[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step0__1 = new TH1F("ratehist_ME0_step0__1","ratehist_ME0_step0",23, xAxis2);
   ratehist_ME0_step0__1->SetBinContent(16,560.2171);
   ratehist_ME0_step0__1->SetBinContent(17,866.1221);
   ratehist_ME0_step0__1->SetBinContent(18,854.2512);
   ratehist_ME0_step0__1->SetBinContent(19,877.6887);
   ratehist_ME0_step0__1->SetBinContent(20,1188.312);
   ratehist_ME0_step0__1->SetBinContent(21,1134.74);
   ratehist_ME0_step0__1->SetBinError(16,9.233651);
   ratehist_ME0_step0__1->SetBinError(17,11.48114);
   ratehist_ME0_step0__1->SetBinError(18,11.40219);
   ratehist_ME0_step0__1->SetBinError(19,11.55754);
   ratehist_ME0_step0__1->SetBinError(20,13.44809);
   ratehist_ME0_step0__1->SetBinError(21,13.14146);
   ratehist_ME0_step0__1->SetEntries(36016);
   ratehist_ME0_step0__1->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__1->SetLineColor(ci);
   ratehist_ME0_step0__1->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__1->SetMarkerColor(ci);
   ratehist_ME0_step0__1->SetMarkerStyle(26);
   ratehist_ME0_step0__1->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step0__1->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step0__1->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__1->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__1->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step0__1->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step0__1->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step0__1->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__1->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__1->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step0__1->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step0__1->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__1->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__1->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step0,"");
   Double_t xAxis3[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step1__2 = new TH1F("ratehist_ME0_step1__2","ratehist_ME0_step1",23, xAxis3);
   ratehist_ME0_step1__2->SetBinContent(16,28.61201);
   ratehist_ME0_step1__2->SetBinContent(17,48.85349);
   ratehist_ME0_step1__2->SetBinContent(18,43.07021);
   ratehist_ME0_step1__2->SetBinContent(19,43.98336);
   ratehist_ME0_step1__2->SetBinContent(20,68.18182);
   ratehist_ME0_step1__2->SetBinContent(21,72.29099);
   ratehist_ME0_step1__2->SetBinError(16,2.086746);
   ratehist_ME0_step1__2->SetBinError(17,2.726736);
   ratehist_ME0_step1__2->SetBinError(18,2.560258);
   ratehist_ME0_step1__2->SetBinError(19,2.587256);
   ratehist_ME0_step1__2->SetBinError(20,3.221288);
   ratehist_ME0_step1__2->SetBinError(21,3.316938);
   ratehist_ME0_step1__2->SetEntries(2004);
   ratehist_ME0_step1__2->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__2->SetLineColor(ci);
   ratehist_ME0_step1__2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__2->SetMarkerColor(ci);
   ratehist_ME0_step1__2->SetMarkerStyle(25);
   ratehist_ME0_step1__2->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step1__2->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step1__2->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__2->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__2->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step1__2->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step1__2->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step1__2->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__2->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__2->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step1__2->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step1__2->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__2->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__2->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step1,"");
   Double_t xAxis4[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step2__3 = new TH1F("ratehist_ME0_step2__3","ratehist_ME0_step2",23, xAxis4);
   ratehist_ME0_step2__3->SetBinContent(16,9.435877);
   ratehist_ME0_step2__3->SetBinContent(17,12.32752);
   ratehist_ME0_step2__3->SetBinContent(18,11.87094);
   ratehist_ME0_step2__3->SetBinContent(19,11.87094);
   ratehist_ME0_step2__3->SetBinContent(20,21.15463);
   ratehist_ME0_step2__3->SetBinContent(21,26.17695);
   ratehist_ME0_step2__3->SetBinError(16,1.198358);
   ratehist_ME0_step2__3->SetBinError(17,1.369724);
   ratehist_ME0_step2__3->SetBinError(18,1.344119);
   ratehist_ME0_step2__3->SetBinError(19,1.344119);
   ratehist_ME0_step2__3->SetBinError(20,1.794312);
   ratehist_ME0_step2__3->SetBinError(21,1.995974);
   ratehist_ME0_step2__3->SetEntries(610);
   ratehist_ME0_step2__3->SetStats(0);
   ratehist_ME0_step2__3->SetLineWidth(2);
   ratehist_ME0_step2__3->SetMarkerStyle(21);
   ratehist_ME0_step2__3->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step2__3->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step2__3->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__3->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__3->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step2__3->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step2__3->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step2__3->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__3->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__3->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step2__3->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step2__3->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__3->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__3->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step2,"");
   Double_t xAxis5[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0__4 = new TH1F("ratehist_ME0__4","ratehist_ME0",23, xAxis5);
   ratehist_ME0__4->SetBinContent(16,0.7609578);
   ratehist_ME0__4->SetBinContent(17,2.130682);
   ratehist_ME0__4->SetBinContent(18,0.7609578);
   ratehist_ME0__4->SetBinContent(19,1.674107);
   ratehist_ME0__4->SetBinContent(20,1.97849);
   ratehist_ME0__4->SetBinContent(21,3.652597);
   ratehist_ME0__4->SetBinError(16,0.3403107);
   ratehist_ME0__4->SetBinError(17,0.5694487);
   ratehist_ME0__4->SetBinError(18,0.3403107);
   ratehist_ME0__4->SetBinError(19,0.5047623);
   ratehist_ME0__4->SetBinError(20,0.5487345);
   ratehist_ME0__4->SetBinError(21,0.7455833);
   ratehist_ME0__4->SetEntries(72);
   ratehist_ME0__4->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__4->SetLineColor(ci);
   ratehist_ME0__4->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__4->SetMarkerColor(ci);
   ratehist_ME0__4->SetMarkerStyle(24);
   ratehist_ME0__4->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0__4->GetXaxis()->SetLabelFont(42);
   ratehist_ME0__4->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0__4->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0__4->GetXaxis()->SetTitleFont(42);
   ratehist_ME0__4->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0__4->GetYaxis()->SetLabelFont(42);
   ratehist_ME0__4->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0__4->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0__4->GetYaxis()->SetTitleFont(42);
   ratehist_ME0__4->GetZaxis()->SetLabelFont(42);
   ratehist_ME0__4->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0__4->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0__4->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.2,0.15,0.75,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1 Muon with EMTFQ>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0_step0","No pt cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0_step1","p_{T}^{L1}>10 GeV","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0_step2","p_{T}^{L1}>10 GeV + L1Mu with ME0","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0","p_{T}^{L1}>10 GeV + L1Mu with ME0+ME0 bending cut","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
      tex = new TLatex(0.2,0.88,"Prompt muon trigger ");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
