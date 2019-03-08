void TriggerRate_pt_combined_noveto_v2_20170611_ratefraction96_St2eta21to24_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Fri Jul 28 01:16:45 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.1162789,-0.5297949,38.87597,3.545551);
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
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU");
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation             #sqrt{s}=14 TeV, <PU>=200");

   hs->SetMinimum(.1);
   hs->SetMaximum(2000);
   Double_t xAxis211[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hs_stack_31 = new TH1F("hs_stack_31"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU",10, xAxis211);
   hs_stack_31->SetMinimum(1);
   hs_stack_31->SetMaximum(2000);
   hs_stack_31->SetDirectory(0);
   hs_stack_31->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_31->SetLineColor(ci);
   hs_stack_31->GetXaxis()->SetTitle("Trigger p_{T} threshold [GeV]");
   hs_stack_31->GetXaxis()->SetLabelFont(42);
   hs_stack_31->GetXaxis()->SetLabelSize(0.045);
   hs_stack_31->GetXaxis()->SetTitleSize(0.05);
   hs_stack_31->GetXaxis()->SetTitleFont(42);
   hs_stack_31->GetYaxis()->SetTitle("L1 trigger rate [kHz]");
   hs_stack_31->GetYaxis()->SetLabelFont(42);
   hs_stack_31->GetYaxis()->SetLabelSize(0.045);
   hs_stack_31->GetYaxis()->SetTitleSize(0.05);
   hs_stack_31->GetYaxis()->SetTitleFont(42);
   hs_stack_31->GetZaxis()->SetLabelFont(42);
   hs_stack_31->GetZaxis()->SetLabelSize(0.035);
   hs_stack_31->GetZaxis()->SetTitleSize(0.035);
   hs_stack_31->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_31);
   
   Double_t xAxis212[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hrate_p_fractionrate96__253 = new TH1F("hrate_p_fractionrate96__253","hrate_p_fractionrate96",10, xAxis212);
   hrate_p_fractionrate96__253->SetBinContent(1,1122.874);
   hrate_p_fractionrate96__253->SetBinContent(3,820.0182);
   hrate_p_fractionrate96__253->SetBinContent(5,516.5553);
   hrate_p_fractionrate96__253->SetBinContent(6,446.537);
   hrate_p_fractionrate96__253->SetBinContent(7,432.4119);
   hrate_p_fractionrate96__253->SetBinContent(8,402.9465);
   hrate_p_fractionrate96__253->SetBinError(1,13.05932);
   hrate_p_fractionrate96__253->SetBinError(3,11.16007);
   hrate_p_fractionrate96__253->SetBinError(5,8.857548);
   hrate_p_fractionrate96__253->SetBinError(6,8.235384);
   hrate_p_fractionrate96__253->SetBinError(7,8.104084);
   hrate_p_fractionrate96__253->SetBinError(8,7.823099);
   hrate_p_fractionrate96__253->SetEntries(6);
   hrate_p_fractionrate96__253->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hrate_p_fractionrate96__253->SetLineColor(ci);
   hrate_p_fractionrate96__253->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hrate_p_fractionrate96__253->SetMarkerColor(ci);
   hrate_p_fractionrate96__253->SetMarkerStyle(25);

   hrate_p_fractionrate96__253->GetXaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__253->GetXaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__253->GetXaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__253->GetXaxis()->SetTitleFont(42);
   hrate_p_fractionrate96__253->GetYaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__253->GetYaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__253->GetYaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__253->GetYaxis()->SetTitleFont(42);
   hrate_p_fractionrate96__253->GetZaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__253->GetZaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__253->GetZaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__253->GetZaxis()->SetTitleFont(42);
   hs->Add(hrate_p_fractionrate96__253,"");
   Double_t xAxis213[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hrate_h3_fractionrate96__254 = new TH1F("hrate_h3_fractionrate96__254","hrate_h3_fractionrate96",10, xAxis213);
   hrate_h3_fractionrate96__254->SetBinContent(1,25.36452);
   hrate_h3_fractionrate96__254->SetBinContent(3,17.01093);
   hrate_h3_fractionrate96__254->SetBinContent(5,7.290401);
   hrate_h3_fractionrate96__254->SetBinContent(6,6.834751);
   hrate_h3_fractionrate96__254->SetBinContent(7,5.771567);
   hrate_h3_fractionrate96__254->SetBinContent(8,4.860267);
   hrate_h3_fractionrate96__254->SetBinError(1,1.962765);
   hrate_h3_fractionrate96__254->SetBinError(3,1.607382);
   hrate_h3_fractionrate96__254->SetBinError(5,1.052279);
   hrate_h3_fractionrate96__254->SetBinError(6,1.018865);
   hrate_h3_fractionrate96__254->SetBinError(7,0.9362719);
   hrate_h3_fractionrate96__254->SetBinError(8,0.859182);
   hrate_h3_fractionrate96__254->SetEntries(6);
   hrate_h3_fractionrate96__254->SetStats(0);
   hrate_h3_fractionrate96__254->SetLineWidth(2);
   hrate_h3_fractionrate96__254->SetMarkerStyle(21);
   ci = kBlack;
   hrate_h3_fractionrate96__254->SetMarkerColor(ci);
   hrate_h3_fractionrate96__254->SetLineColor(ci);
   hrate_h3_fractionrate96__254->GetXaxis()->SetLabelFont(42);
   hrate_h3_fractionrate96__254->GetXaxis()->SetLabelSize(0.035);
   hrate_h3_fractionrate96__254->GetXaxis()->SetTitleSize(0.035);
   hrate_h3_fractionrate96__254->GetXaxis()->SetTitleFont(42);
   hrate_h3_fractionrate96__254->GetYaxis()->SetLabelFont(42);
   hrate_h3_fractionrate96__254->GetYaxis()->SetLabelSize(0.035);
   hrate_h3_fractionrate96__254->GetYaxis()->SetTitleSize(0.035);
   hrate_h3_fractionrate96__254->GetYaxis()->SetTitleFont(42);
   hrate_h3_fractionrate96__254->GetZaxis()->SetLabelFont(42);
   hrate_h3_fractionrate96__254->GetZaxis()->SetLabelSize(0.035);
   hrate_h3_fractionrate96__254->GetZaxis()->SetTitleSize(0.035);
   hrate_h3_fractionrate96__254->GetZaxis()->SetTitleFont(42);
   hs->Add(hrate_h3_fractionrate96__254,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.34,0.52,0.85,0.78,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu: no vertex constraint (displaced)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_p_fractionrate96","Phase-1(CSC only): positions only","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_h3_fractionrate96","#splitline{Phase-2(CSC+GE11+GE21+ME0):}{positions and directions}","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
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
      tex = new TLatex(0.2,0.2,"2.1<|#eta|<2.4, L1 track based veto not applied");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_v2_20170611_ratefraction96_St2eta21to24_allnpar.png");
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_v2_20170611_ratefraction96_St2eta21to24_allnpar.pdf");
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_v2_20170611_ratefraction96_St2eta21to24_allnpar.eps");
}
