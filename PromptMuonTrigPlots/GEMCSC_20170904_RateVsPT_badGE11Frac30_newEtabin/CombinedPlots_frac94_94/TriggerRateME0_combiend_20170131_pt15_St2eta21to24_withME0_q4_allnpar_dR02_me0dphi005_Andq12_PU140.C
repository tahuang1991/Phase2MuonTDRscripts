void TriggerRateME0_combiend_20170131_pt15_St2eta21to24_withME0_q4_allnpar_dR02_me0dphi005_Andq12_PU140()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:01:58 2017) by ROOT version6.08/06
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
   Double_t xAxis16[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_3 = new TH1F("hs_stack_3"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",23, xAxis16);
   hs_stack_3->SetMinimum(0.4807039);
   hs_stack_3->SetMaximum(1922.816);
   hs_stack_3->SetDirectory(0);
   hs_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_3->SetLineColor(ci);
   hs_stack_3->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_3->GetXaxis()->SetLabelFont(42);
   hs_stack_3->GetXaxis()->SetLabelSize(0.035);
   hs_stack_3->GetXaxis()->SetTitleSize(0.05);
   hs_stack_3->GetXaxis()->SetTitleFont(42);
   hs_stack_3->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_3->GetYaxis()->SetLabelFont(42);
   hs_stack_3->GetYaxis()->SetLabelSize(0.035);
   hs_stack_3->GetYaxis()->SetTitleSize(0.05);
   hs_stack_3->GetYaxis()->SetTitleFont(42);
   hs_stack_3->GetZaxis()->SetLabelFont(42);
   hs_stack_3->GetZaxis()->SetLabelSize(0.035);
   hs_stack_3->GetZaxis()->SetTitleSize(0.035);
   hs_stack_3->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_3);
   
   Double_t xAxis17[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step0__14 = new TH1F("ratehist_ME0_step0__14","ratehist_ME0_step0",23, xAxis17);
   ratehist_ME0_step0__14->SetBinContent(16,560.2171);
   ratehist_ME0_step0__14->SetBinContent(17,866.1221);
   ratehist_ME0_step0__14->SetBinContent(18,854.2512);
   ratehist_ME0_step0__14->SetBinContent(19,877.6887);
   ratehist_ME0_step0__14->SetBinContent(20,1188.312);
   ratehist_ME0_step0__14->SetBinContent(21,1134.74);
   ratehist_ME0_step0__14->SetBinError(16,9.233651);
   ratehist_ME0_step0__14->SetBinError(17,11.48114);
   ratehist_ME0_step0__14->SetBinError(18,11.40219);
   ratehist_ME0_step0__14->SetBinError(19,11.55754);
   ratehist_ME0_step0__14->SetBinError(20,13.44809);
   ratehist_ME0_step0__14->SetBinError(21,13.14146);
   ratehist_ME0_step0__14->SetEntries(36016);
   ratehist_ME0_step0__14->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__14->SetLineColor(ci);
   ratehist_ME0_step0__14->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_ME0_step0__14->SetMarkerColor(ci);
   ratehist_ME0_step0__14->SetMarkerStyle(26);
   ratehist_ME0_step0__14->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step0__14->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step0__14->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__14->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__14->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step0__14->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step0__14->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step0__14->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__14->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__14->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step0__14->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step0__14->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step0__14->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step0__14->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step0,"");
   Double_t xAxis18[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step1__15 = new TH1F("ratehist_ME0_step1__15","ratehist_ME0_step1",23, xAxis18);
   ratehist_ME0_step1__15->SetBinContent(16,13.54505);
   ratehist_ME0_step1__15->SetBinContent(17,26.63352);
   ratehist_ME0_step1__15->SetBinContent(18,25.11161);
   ratehist_ME0_step1__15->SetBinContent(19,25.72037);
   ratehist_ME0_step1__15->SetBinContent(20,38.04789);
   ratehist_ME0_step1__15->SetBinContent(21,34.69968);
   ratehist_ME0_step1__15->SetBinError(16,1.435772);
   ratehist_ME0_step1__15->SetBinError(17,2.013305);
   ratehist_ME0_step1__15->SetBinError(18,1.954936);
   ratehist_ME0_step1__15->SetBinError(19,1.97849);
   ratehist_ME0_step1__15->SetBinError(20,2.40636);
   ratehist_ME0_step1__15->SetBinError(21,2.298042);
   ratehist_ME0_step1__15->SetEntries(1076);
   ratehist_ME0_step1__15->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__15->SetLineColor(ci);
   ratehist_ME0_step1__15->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_ME0_step1__15->SetMarkerColor(ci);
   ratehist_ME0_step1__15->SetMarkerStyle(25);
   ratehist_ME0_step1__15->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step1__15->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step1__15->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__15->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__15->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step1__15->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step1__15->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step1__15->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__15->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__15->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step1__15->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step1__15->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step1__15->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step1__15->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step1,"");
   Double_t xAxis19[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0_step2__16 = new TH1F("ratehist_ME0_step2__16","ratehist_ME0_step2",23, xAxis19);
   ratehist_ME0_step2__16->SetBinContent(16,4.87013);
   ratehist_ME0_step2__16->SetBinContent(17,7.305195);
   ratehist_ME0_step2__16->SetBinContent(18,7.153003);
   ratehist_ME0_step2__16->SetBinContent(19,6.696429);
   ratehist_ME0_step2__16->SetBinContent(20,13.08847);
   ratehist_ME0_step2__16->SetBinContent(21,13.84943);
   ratehist_ME0_step2__16->SetBinError(16,0.8609255);
   ratehist_ME0_step2__16->SetBinError(17,1.054414);
   ratehist_ME0_step2__16->SetBinError(18,1.043373);
   ratehist_ME0_step2__16->SetBinError(19,1.009525);
   ratehist_ME0_step2__16->SetBinError(20,1.411366);
   ratehist_ME0_step2__16->SetBinError(21,1.451815);
   ratehist_ME0_step2__16->SetEntries(348);
   ratehist_ME0_step2__16->SetStats(0);
   ratehist_ME0_step2__16->SetLineWidth(2);
   ratehist_ME0_step2__16->SetMarkerStyle(21);
   ratehist_ME0_step2__16->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0_step2__16->GetXaxis()->SetLabelFont(42);
   ratehist_ME0_step2__16->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__16->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__16->GetXaxis()->SetTitleFont(42);
   ratehist_ME0_step2__16->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0_step2__16->GetYaxis()->SetLabelFont(42);
   ratehist_ME0_step2__16->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__16->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__16->GetYaxis()->SetTitleFont(42);
   ratehist_ME0_step2__16->GetZaxis()->SetLabelFont(42);
   ratehist_ME0_step2__16->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0_step2__16->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0_step2__16->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0_step2,"");
   Double_t xAxis20[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0__17 = new TH1F("ratehist_ME0__17","ratehist_ME0",23, xAxis20);
   ratehist_ME0__17->SetBinContent(17,0.6087663);
   ratehist_ME0__17->SetBinContent(18,0.4565747);
   ratehist_ME0__17->SetBinContent(19,0.7609578);
   ratehist_ME0__17->SetBinContent(20,0.9131494);
   ratehist_ME0__17->SetBinContent(21,1.826299);
   ratehist_ME0__17->SetBinError(17,0.3043831);
   ratehist_ME0__17->SetBinError(18,0.2636035);
   ratehist_ME0__17->SetBinError(19,0.3403107);
   ratehist_ME0__17->SetBinError(20,0.3727917);
   ratehist_ME0__17->SetBinError(21,0.527207);
   ratehist_ME0__17->SetEntries(30);
   ratehist_ME0__17->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__17->SetLineColor(ci);
   ratehist_ME0__17->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   ratehist_ME0__17->SetMarkerColor(ci);
   ratehist_ME0__17->SetMarkerStyle(24);
   ratehist_ME0__17->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0__17->GetXaxis()->SetLabelFont(42);
   ratehist_ME0__17->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0__17->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0__17->GetXaxis()->SetTitleFont(42);
   ratehist_ME0__17->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0__17->GetYaxis()->SetLabelFont(42);
   ratehist_ME0__17->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0__17->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0__17->GetYaxis()->SetTitleFont(42);
   ratehist_ME0__17->GetZaxis()->SetLabelFont(42);
   ratehist_ME0__17->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0__17->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0__17->GetZaxis()->SetTitleFont(42);
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
