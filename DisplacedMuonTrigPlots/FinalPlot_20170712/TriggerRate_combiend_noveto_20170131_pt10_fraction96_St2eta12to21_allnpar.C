void TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta12to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Mar 20 15:08:53 2017) by ROOT version6.06/08
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-5.840112,2.693798,37.82953);
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
   c1_n2->SetLogy();
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetMinimum(.1);
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU");
   Double_t xAxis1295[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_104 = new TH1F("hs_stack_104"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV, 140 PU",22, xAxis1295);
   hs_stack_104->SetMinimum(-0.1630582);
   hs_stack_104->SetMaximum(35.20935);
   hs_stack_104->SetDirectory(0);
   hs_stack_104->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_104->SetLineColor(ci);
   hs_stack_104->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_104->GetXaxis()->SetLabelFont(42);
   hs_stack_104->GetXaxis()->SetLabelSize(0.035);
   hs_stack_104->GetXaxis()->SetTitleSize(0.035);
   hs_stack_104->GetXaxis()->SetTitleFont(42);
   hs_stack_104->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_104->GetYaxis()->SetLabelFont(42);
   hs_stack_104->GetYaxis()->SetLabelSize(0.035);
   hs_stack_104->GetYaxis()->SetTitleSize(0.035);
   hs_stack_104->GetYaxis()->SetTitleFont(42);
   hs_stack_104->GetZaxis()->SetLabelFont(42);
   hs_stack_104->GetZaxis()->SetLabelSize(0.035);
   hs_stack_104->GetZaxis()->SetTitleSize(0.035);
   hs_stack_104->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_104);
   
   Double_t xAxis1296[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_eta12to21_npar3_frac96_pt10__1192 = new TH1F("ratehist_position_eta12to21_npar3_frac96_pt10__1192","ratehist_position_eta12to14_npar0_frac96_pt10",22, xAxis1296);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(2,4.527905);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(3,5.265005);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(4,5.159705);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(5,10.00351);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(6,1.474201);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(7,0.947701);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(8,4.106704);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(9,6.423306);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(10,6.107406);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(11,8.634609);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(12,15.37382);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(13,15.47911);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(14,20.21762);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinContent(15,28.22043);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinContent(16,35.38083);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinContent(17,58.02036);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinContent(18,87.08318);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinContent(19,108.9856);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinContent(20,84.55598);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinError(16,1.930183);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinError(17,2.47175);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinError(18,3.028179);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinError(19,3.387653);
   ratehist_position_eta21to24_npar3_frac96_pt10__1192->SetBinError(20,2.983916);

   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(2,2.127887);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(3,2.29456);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(4,2.271498);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(5,3.162833);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(6,1.214167);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(7,0.9734993);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(8,2.0265);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(9,2.534424);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(10,2.471317);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(11,2.93847);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(12,3.920946);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(13,3.934351);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(14,4.496401);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetBinError(15,5.31229);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetMarkerColor(ci);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->SetMarkerStyle(20);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to21_npar3_frac96_pt10__1192->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta12to21_npar3_frac96_pt10__1192,"");
   Double_t xAxis1297[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193 = new TH1F("ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193","ratehist_hybrid_noGE21_eta12to14_npar0_frac96_pt10",22, xAxis1297);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(2,4.212005);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(3,4.633204);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(4,4.949105);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(5,6.844507);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(6,1.053001);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(7,0.7371007);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(8,3.159003);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(9,6.002106);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(10,5.896806);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(11,7.476307);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(12,14.32081);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(13,13.47841);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(14,17.69042);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinContent(15,24.85082);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(2,2.052317);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(3,2.152488);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(4,2.224658);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(5,2.616201);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(6,1.026158);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(7,0.8585457);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(8,1.777358);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(9,2.44992);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(10,2.428334);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(11,2.734284);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(12,3.784285);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(13,3.671296);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(14,4.205998);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetBinError(15,4.98506);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetEntries(1095);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetMarkerColor(ci);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->SetMarkerStyle(21);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193->GetZaxis()->SetTitleFont(42);
   //hs->Add(ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10__1193,"");
   //Double_t xAxis1298[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   Double_t xAxis1298[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194 = new TH1F("ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194","ratehist_hybrid_eta12to14_npar0_frac96_pt10",22, xAxis1298);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(2,4.212005);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(3,4.633204);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(4,4.949105);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(5,6.844507);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(6,0.6318007);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(7,0.7371007);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(8,2.527203);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(9,4.001404);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(10,3.474903);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(11,5.791506);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(12,10.10881);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(13,10.21411);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(14,11.58301);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinContent(15,20.00702);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(2,2.052317);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(3,2.152488);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(4,2.224658);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(5,2.616201);
   //ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(6,0.7948589);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(7,0.8585457);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(8,1.589718);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(9,2.000351);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(10,1.864109);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(11,2.406555);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(12,3.179436);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(13,3.195952);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(14,3.403382);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetBinError(15,4.472921);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetEntries(852);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetStats(0);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetMarkerColor(ci);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->SetMarkerStyle(22);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_hybrid_eta12to21_npar3_frac96_pt10__1194,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.2,0.7,0.5,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu Q>=4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_eta12to21_npar3_frac96_pt10","Position-based algorithm","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   /*entry=leg->AddEntry("ratehist_hybrid_noGE21_eta12to21_npar3_frac96_pt10","Hybrid algorithm w/o GE21","pl");

   
   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   */
   entry=leg->AddEntry("ratehist_hybrid_eta12to21_npar3_frac96_pt10","Hybrid algorithm w GE21","pl");

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
      tex = new TLatex(0.2,0.6,"1.20<|#eta|<2.15, p_{T}^{L1}>10 GeV, no tracker veto");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
   c1_n2->SaveAs("TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta12to21_allnpar.png");
   c1_n2->SaveAs("TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta12to21_allnpar.pdf");
   c1_n2->SaveAs("TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta12to21_allnpar.eps");
}
