void TriggerRate_combiend_noveto_20170131_pt10_fraction96_St2eta12to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Jul 25 11:13:04 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-2.252752,2.693798,2.194236);
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
   hs->SetMinimum(.1);
   hs->SetMaximum(500);
   //hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU");
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation             #sqrt{s}=14 TeV, <PU>=200");
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation             #sqrt{s}=14 TeV, <PU>=200");
   Double_t xAxis55[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU",22, xAxis55);
   hs_stack_4->SetMinimum(0.02115224);
   hs_stack_4->SetMaximum(84.60897);
   hs_stack_4->SetDirectory(0);
   hs_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_4->SetLineColor(ci);
   hs_stack_4->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
   hs_stack_4->GetXaxis()->SetLabelFont(42);
   hs_stack_4->GetXaxis()->SetLabelSize(0.045);
   hs_stack_4->GetXaxis()->SetTitleSize(0.05);
   hs_stack_4->GetXaxis()->SetTitleFont(42);
   hs_stack_4->GetYaxis()->SetTitle("L1 trigger rate [kHz]");
   hs_stack_4->GetYaxis()->SetLabelFont(42);
   hs_stack_4->GetYaxis()->SetLabelSize(0.045);
   hs_stack_4->GetYaxis()->SetTitleSize(0.05);
   hs_stack_4->GetYaxis()->SetTitleFont(42);
   hs_stack_4->GetZaxis()->SetLabelFont(42);
   hs_stack_4->GetZaxis()->SetLabelSize(0.035);
   hs_stack_4->GetZaxis()->SetTitleSize(0.035);
   hs_stack_4->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_4);
   
   Double_t xAxis56[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_eta12to21_frac96_pt10__94 = new TH1F("ratehist_position_eta12to21_frac96_pt10__94","ratehist_position_eta12to14_npar0_frac96_pt10",22, xAxis56);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(2,4.252734);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(3,6.530984);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(4,6.834751);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(5,8.201701);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(6,3.037667);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(7,5.771567);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(8,11.54313);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(9,10.63183);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(10,11.8469);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(11,15.18834);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(12,27.64277);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(13,20.65614);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(14,33.41434);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(15,50.12151);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(2,0.8036912);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(3,0.9959658);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(4,1.018865);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(5,1.11611);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(6,0.679243);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(7,0.9362719);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(8,1.324088);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(9,1.270747);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(10,1.341397);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(11,1.518834);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(12,2.049018);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(13,1.771249);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(14,2.252794);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(15,2.759098);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(16,57.71568);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(17,81.71325);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(18,90.52248);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(19,119.0765);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinContent(20,117.4058);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(16,2.960752);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(17,3.522908);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(18,3.707945);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(19,4.252734);
   ratehist_position_eta12to21_frac96_pt10__94->SetBinError(20,4.222794);

   ratehist_position_eta12to21_frac96_pt10__94->SetEntries(1420);
   ratehist_position_eta12to21_frac96_pt10__94->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta12to21_frac96_pt10__94->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta12to21_frac96_pt10__94->SetMarkerColor(ci);
   ratehist_position_eta12to21_frac96_pt10__94->SetMarkerStyle(25);
   ratehist_position_eta12to21_frac96_pt10__94->SetLineWidth(2);
   ratehist_position_eta12to21_frac96_pt10__94->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta12to21_frac96_pt10__94->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta12to21_frac96_pt10__94->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to21_frac96_pt10__94->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to21_frac96_pt10__94->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta12to21_frac96_pt10__94->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta12to21_frac96_pt10__94->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta12to21_frac96_pt10__94->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to21_frac96_pt10__94->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to21_frac96_pt10__94->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta12to21_frac96_pt10__94->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta12to21_frac96_pt10__94->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta12to21_frac96_pt10__94->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta12to21_frac96_pt10__94->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta12to21_frac96_pt10__94,"");
   Double_t xAxis57[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid_eta12to21_frac96_pt10__95 = new TH1F("ratehist_hybrid_eta12to21_frac96_pt10__95","ratehist_hybrid_eta12to14_npar0_frac96_pt10",22, xAxis57);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(6,0.3037667);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(7,0.9113001);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(8,6.227218);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(9,6.227218);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(10,6.379101);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(11,7.746051);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(12,17.01094);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(13,11.99879);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(14,13.97327);
   //ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinContent(15,13.06197);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(6,0.2147955);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(7,0.3720367);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(8,0.972528);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(9,0.972528);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(10,0.9843166);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(11,1.084664);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(12,1.607382);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(13,1.349969);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(14,1.456814);
   //ratehist_hybrid_eta12to21_frac96_pt10__95->SetBinError(15,1.408508);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetEntries(552);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetStats(0);

   ci = kBlack;
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetLineColor(ci);

   ratehist_hybrid_eta12to21_frac96_pt10__95->SetMarkerColor(ci);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetMarkerStyle(21);
   ratehist_hybrid_eta12to21_frac96_pt10__95->SetLineWidth(2);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid_eta12to21_frac96_pt10__95->GetZaxis()->SetTitleFont(42);


   Double_t xAxis15[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_hybrid3_eta21to24_frac96_pt10__26 = new TH1F("ratehist_hybrid3_eta21to24_frac96_pt10__26","ratehist_hybrid3_eta21to22_npar0_frac96_pt10",22, xAxis15);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinContent(15,3.037667);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinContent(16,0.45565);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinContent(17,0.9113001);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinContent(18,1.063183);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinContent(19,0.7594168);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinContent(20,1.063183);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinError(15,0.679243);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinError(16,0.2630697);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinError(17,0.3720367);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinError(18,0.4018456);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinError(19,0.3396215);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetBinError(20,0.4018456);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetEntries(48);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetStats(0);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetLineWidth(2);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->SetMarkerStyle(21);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetXaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetXaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetXaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetXaxis()->SetTitleFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetYaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetYaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetYaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetYaxis()->SetTitleFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetZaxis()->SetLabelFont(42);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetZaxis()->SetLabelSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetZaxis()->SetTitleSize(0.035);
   ratehist_hybrid3_eta21to24_frac96_pt10__26->GetZaxis()->SetTitleFont(42);

   ratehist_hybrid_eta12to21_frac96_pt10__95->Add(ratehist_hybrid3_eta21to24_frac96_pt10__26);
   hs->Add(ratehist_hybrid_eta12to21_frac96_pt10__95,"");
   //hs->Add(ratehist_hybrid3_eta21to24_frac96_pt10__110,"");
   hs->Draw("nostacke");
   


   
   TLegend *leg = new TLegend(0.14,0.7,0.6,0.93,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu: no vertex constraint (displaced)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_position_eta12to21_frac96_pt10","Phase-1(CSC): positions only","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid_eta12to21_frac96_pt10","#splitline{Phase-2(CSC+GE11+GE21+ME0):}{positions and directions}","pl");

   ci = kBlack;
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU");
   pt->Draw();
      tex = new TLatex(0.2,0.16,"p_{T}^{Trig}>10 GeV, L1 track based veto not applied");
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
