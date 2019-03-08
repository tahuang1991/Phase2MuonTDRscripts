void TriggerRate_combiend_noveto_20170611_pt10_fraction96_St2eta20to24_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Jun 19 18:06:39 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-61.67811,2.693798,412.7689);
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
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 200 PU");
   Double_t xAxis12[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 200 PU",22, xAxis12);
   hs_stack_1->SetMinimum(0);
   hs_stack_1->SetMaximum(384.3021);
   hs_stack_1->SetDirectory(0);
   hs_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_1->SetLineColor(ci);
   hs_stack_1->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_1->GetXaxis()->SetLabelFont(42);
   hs_stack_1->GetXaxis()->SetLabelSize(0.035);
   hs_stack_1->GetXaxis()->SetTitleSize(0.035);
   hs_stack_1->GetXaxis()->SetTitleFont(42);
   hs_stack_1->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_1->GetYaxis()->SetLabelFont(42);
   hs_stack_1->GetYaxis()->SetLabelSize(0.035);
   hs_stack_1->GetYaxis()->SetTitleSize(0.035);
   hs_stack_1->GetYaxis()->SetTitleFont(42);
   hs_stack_1->GetZaxis()->SetLabelFont(42);
   hs_stack_1->GetZaxis()->SetLabelSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_1);
   
   Double_t xAxis13[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_eta20to24_npar3_frac96_pt10__12 = new TH1F("ratehist_position_eta20to24_npar3_frac96_pt10__12","ratehist_position_eta20to22_npar0_frac96_pt10",22, xAxis13);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(13,14.81108);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(14,24.93703);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(15,26.29723);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(16,39.59698);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(17,62.11587);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(18,75.41562);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(19,122.5693);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinContent(20,125.8942);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(13,1.496145);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(14,1.941345);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(15,1.993588);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(16,2.446309);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(17,3.06395);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(18,3.376067);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(19,4.303989);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetBinError(20,4.361976);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetEntries(3253);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetMarkerColor(ci);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->SetMarkerStyle(20);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta20to24_npar3_frac96_pt10__12->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta20to24_npar3_frac96_pt10,"");
   Double_t xAxis14[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13 = new TH1F("ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13","ratehist_hybrid1_eta20to22_npar0_frac96_pt10",22, xAxis14);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(13,150.9824);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(14,153.8539);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(15,145.0882);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(16,203.2746);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(17,255.2645);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(18,263.1234);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(19,358.6398);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinContent(20,323.8791);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(13,4.776871);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(14,4.822082);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(15,4.6827);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(16,5.542707);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(17,6.211201);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(18,6.306089);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(19,7.362234);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetBinError(20,6.996355);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetEntries(12268);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetDirectory(0);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetMarkerColor(ci);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->SetMarkerStyle(21);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid1_eta20to24_npar3_frac96_pt10__13->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid1_eta20to24_npar3_frac96_pt10,"");
   Double_t xAxis15[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14 = new TH1F("ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14","ratehist_hybrid1_eta20to22_npar0_frac96_pt10",22, xAxis15);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(13,119.3955);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(14,121.2091);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(15,113.8035);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(16,156.4232);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(17,206.1461);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(18,210.6801);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(19,292.5945);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinContent(20,257.3804);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(13,4.2479);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(14,4.280041);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(15,4.147231);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(16,4.862179);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(17,5.581718);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(18,5.642767);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(19,6.649874);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetBinError(20,6.23689);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetEntries(9777);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetDirectory(0);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetMarkerColor(ci);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->SetMarkerStyle(22);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid2_eta20to24_npar3_frac96_pt10__14->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid2_eta20to24_npar3_frac96_pt10,"");
   Double_t xAxis16[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15 = new TH1F("ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15","ratehist_hybrid1_eta20to22_npar0_frac96_pt10",22, xAxis16);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(13,0.1511335);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(14,0.4534005);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(15,0.7556675);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(16,0.7556675);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(17,1.209068);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(18,1.209068);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(19,1.813602);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinContent(20,2.418136);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(13,0.1511335);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(14,0.2617709);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(15,0.3379448);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(16,0.3379448);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(17,0.4274701);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(18,0.4274701);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(19,0.5235418);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetBinError(20,0.604534);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetEntries(58);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetStats(0);

   ci = TColor::GetColor("#990099");
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetLineColor(ci);

   ci = TColor::GetColor("#990099");
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetMarkerColor(ci);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->SetMarkerStyle(23);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta20to24_npar3_frac96_pt10__15->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid3_eta20to24_npar3_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.15,0.55,0.65,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with Q>=12, no tracker veto","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_eta20to24_npar3_frac96_pt10","Position-based algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid1_eta20to24_npar3_frac96_pt10","Stub alignment algorithm+ w/o ME0 + w/o GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid2_eta20to24_npar3_frac96_pt10","Stub alignment algorithm+ w/o ME0 + w GE21","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid3_eta20to24_npar3_frac96_pt10","Stub alignment algorithm+ w ME0 + w GE21","pl");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#990099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 200 PU");
   pt->Draw();
      tex = new TLatex(0.2,0.45,"2.00<|#eta|<2.40, p_{T}^{L1}>10 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
