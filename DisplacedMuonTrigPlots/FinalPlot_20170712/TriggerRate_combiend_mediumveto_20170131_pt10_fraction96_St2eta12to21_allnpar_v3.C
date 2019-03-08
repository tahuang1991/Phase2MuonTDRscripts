void TriggerRate_combiend_mediumveto_20170131_pt10_fraction96_St2eta12to21_allnpar_v3()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Thu Mar 16 20:14:02 2017) by ROOT version6.06/08
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.874652,2.693798,17.32797);
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
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU");
   hs->SetMinimum(-0.2483118);
   hs->SetMaximum(14);
   //Double_t xAxis183[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   Double_t xAxis183[15] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1}; 
   
   TH1F *hs_stack_15 = new TH1F("hs_stack_15"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU",14, xAxis183);
   hs_stack_15->SetMinimum(-0.2483118);
   hs_stack_15->SetMaximum(14);
   hs_stack_15->SetDirectory(0);
   hs_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_15->SetLineColor(ci);
   hs_stack_15->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_15->GetXaxis()->SetLabelFont(42);
   hs_stack_15->GetXaxis()->SetLabelSize(0.035);
   hs_stack_15->GetXaxis()->SetTitleSize(0.035);
   hs_stack_15->GetXaxis()->SetTitleFont(42);
   hs_stack_15->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_15->GetYaxis()->SetLabelFont(42);
   hs_stack_15->GetYaxis()->SetLabelSize(0.035);
   hs_stack_15->GetYaxis()->SetTitleSize(0.035);
   hs_stack_15->GetYaxis()->SetTitleFont(42);
   hs_stack_15->GetZaxis()->SetLabelFont(42);
   hs_stack_15->GetZaxis()->SetLabelSize(0.035);
   hs_stack_15->GetZaxis()->SetTitleSize(0.035);
   hs_stack_15->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_15);
   
   Double_t xAxis184[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169 = new TH1F("ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169","ratehist_position_mediumveto_eta12to14_npar0_frac96_pt10",22, xAxis184);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(2,0.3159003);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(3,0.3159003);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(4,0.1053001);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(5,2.211302);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(6,0.2106002);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(7,0.1053001);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(8,0.3159003);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(9,0.8424008);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(10,0.5265005);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(11,0.8424008);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(12,4.106704);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(13,4.001404);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(14,7.897508);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinContent(15,11.89891);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(2,0.5620501);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(3,0.5620501);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(4,0.3244998);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(5,1.487045);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(6,0.458912);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(7,0.3244998);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(8,0.5620501);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(9,0.917824);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(10,0.7256036);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(11,0.917824);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(12,2.0265);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(13,2.000351);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(14,2.810251);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetBinError(15,3.44948);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetEntries(320);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetMarkerColor(ci);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->SetMarkerStyle(20);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetXaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetXaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetYaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetYaxis()->SetTitleFont(42);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetZaxis()->SetLabelFont(42);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169,"");
   Double_t xAxis185[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170 = new TH1F("ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170","ratehist_hybrid_noGE21_mediumveto_eta12to14_npar0_frac96_pt10",22, xAxis185);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(2,0.3159003);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(3,0.3159003);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(4,0.2106002);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(5,1.368901);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(8,0.1053001);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(9,0.5265005);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(10,0.4212004);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(11,0.3159003);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(12,3.264303);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(13,2.527203);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(14,5.580905);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinContent(15,8.950509);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(2,0.5620501);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(3,0.5620501);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(4,0.458912);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(5,1.170001);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(8,0.3244998);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(9,0.7256036);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(10,0.6489996);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(11,0.5620501);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(12,1.806738);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(13,1.589718);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(14,2.362394);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetBinError(15,2.99174);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetEntries(227);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetMarkerColor(ci);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->SetMarkerStyle(21);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170,"");
   Double_t xAxis186[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171 = new TH1F("ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171","ratehist_hybrid_mediumveto_eta12to14_npar0_frac96_pt10",22, xAxis186);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(2,0.3159003);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(3,0.3159003);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(4,0.2106002);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(5,1.368901);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(9,0.2106002);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(10,0.3159003);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(11,0.2106002);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(12,1.790102);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(13,0.8424008);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(14,1.790102);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinContent(15,5.686206);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(2,0.5620501);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(3,0.5620501);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(4,0.458912);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(5,1.170001);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(9,0.458912);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(10,0.5620501);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(11,0.458912);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(12,1.337947);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(13,0.917824);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(14,1.337947);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetBinError(15,2.384577);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetEntries(124);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetMarkerColor(ci);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->SetMarkerStyle(22);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.15,0.45,0.65,0.72,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu with medium tracker veto, Q>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_mediumveto_eta12to21_npar3_frac96_pt10__169","Position-based algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_noGE21_mediumveto_eta12to21_npar3_frac96_pt10__170","Hybrid algorithm w/o GE21","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_mediumveto_eta12to21_npar3_frac96_pt10__171","Hybrid algorithm w GE21","pl");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU");
   pt->Draw();
      tex = new TLatex(0.2,0.78,"#splitline{1.20<|#eta|<2.1, p_{T}^{L1}>10 GeV}{ medium tracker veto}");
tex->SetNDC();
   //tex->SetTextFont(52);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
   c1_n2->SaveAs("TriggerRate_combiend_mediumveto_20170131_pt10_fraction96_St2eta12to21_allnpar_v3.png");
   c1_n2->SaveAs("TriggerRate_combiend_mediumveto_20170131_pt10_fraction96_St2eta12to21_allnpar_v3.pdf");
}
