void TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta12to24_allnpar_plusbarrel()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Jul 25 12:40:39 2017) by ROOT version6.08/06
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
   hs->SetMinimum(1);
   hs->SetMaximum(4000);
   Double_t xAxis265[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   //Double_t xAxis265[11] = {5, 7, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hs_stack_31 = new TH1F("hs_stack_31"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU", 10, xAxis265);
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
   hs_stack_31->GetXaxis()->SetLabelSize(0.035);
   hs_stack_31->GetXaxis()->SetTitleSize(0.035);
   hs_stack_31->GetXaxis()->SetTitleFont(42);
   hs_stack_31->GetYaxis()->SetTitle("Trigger rate [kHz]");
   hs_stack_31->GetYaxis()->SetLabelFont(42);
   hs_stack_31->GetYaxis()->SetLabelSize(0.035);
   hs_stack_31->GetYaxis()->SetTitleSize(0.035);
   hs_stack_31->GetYaxis()->SetTitleFont(42);
   hs_stack_31->GetZaxis()->SetLabelFont(42);
   hs_stack_31->GetZaxis()->SetLabelSize(0.035);
   hs_stack_31->GetZaxis()->SetTitleSize(0.035);
   hs_stack_31->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_31);
   
   
   Double_t xAxis218[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hrate_p_fractionrate96__295 = new TH1F("hrate_p_fractionrate96__295","hrate_p_fractionrate96",10, xAxis218);
   hrate_p_fractionrate96__295->SetBinContent(1,84.59903);
   hrate_p_fractionrate96__295->SetBinContent(3,47.69137);
   hrate_p_fractionrate96__295->SetBinContent(5,27.339);
   hrate_p_fractionrate96__295->SetBinContent(6,20.35237);
   hrate_p_fractionrate96__295->SetBinContent(7,13.6695);
   hrate_p_fractionrate96__295->SetBinContent(8,10.0243);
   hrate_p_fractionrate96__295->SetBinError(1,3.584576);
   hrate_p_fractionrate96__295->SetBinError(3,2.69138);
   hrate_p_fractionrate96__295->SetBinError(5,2.037729);
   hrate_p_fractionrate96__295->SetBinError(6,1.758177);
   hrate_p_fractionrate96__295->SetBinError(7,1.440892);
   hrate_p_fractionrate96__295->SetBinError(8,1.233906);
   hrate_p_fractionrate96__295->SetEntries(6);
   hrate_p_fractionrate96__295->SetStats(0);


   Double_t xAxis266[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   //Double_t xAxis266[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30}; 
   
   TH1F *hrate_p_fractionrate96__391 = new TH1F("hrate_p_fractionrate96__391","hrate_p_fractionrate96",10, xAxis266);
   hrate_p_fractionrate96__391->SetBinContent(1,222.3572);
   hrate_p_fractionrate96__391->SetBinContent(3,170.4131);
   hrate_p_fractionrate96__391->SetBinContent(5,138.8214);
   hrate_p_fractionrate96__391->SetBinContent(6,125.1519);
   hrate_p_fractionrate96__391->SetBinContent(7,114.6719);
   hrate_p_fractionrate96__391->SetBinContent(8,107.6853);
   hrate_p_fractionrate96__391->SetBinError(1,5.811399);
   hrate_p_fractionrate96__391->SetBinError(3,5.087526);
   hrate_p_fractionrate96__391->SetBinError(5,4.591803);
   hrate_p_fractionrate96__391->SetBinError(6,4.359872);
   hrate_p_fractionrate96__391->SetBinError(7,4.173339);
   hrate_p_fractionrate96__391->SetBinError(8,4.044206);
   hrate_p_fractionrate96__391->SetEntries(6);
   hrate_p_fractionrate96__391->SetStats(0);

   TH1F *hrate_p_fractionrate96__253 = new TH1F("hrate_p_fractionrate96__253","hrate_p_fractionrate96",10, xAxis266);
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
   hrate_p_fractionrate96__391->Add(hrate_p_fractionrate96__253);
   hrate_p_fractionrate96__391->Add(hrate_p_fractionrate96__295);


   //ci = TColor::GetColor("#0000ff");
   ci = kBlue;
   hrate_p_fractionrate96__391->SetLineColor(ci);
   hrate_p_fractionrate96__391->SetFillColor(ci);
   hrate_p_fractionrate96__391->SetMarkerColor(ci);
   hrate_p_fractionrate96__391->SetMarkerStyle(25);
   hrate_p_fractionrate96__391->GetXaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__391->GetXaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__391->GetXaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__391->GetXaxis()->SetTitleFont(42);
   hrate_p_fractionrate96__391->GetYaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__391->GetYaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__391->GetYaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__391->GetYaxis()->SetTitleFont(42);
   hrate_p_fractionrate96__391->GetZaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__391->GetZaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__391->GetZaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__391->GetZaxis()->SetTitleFont(42);



   hs->Add(hrate_p_fractionrate96__391,"");
   Double_t xAxis267[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hrate_h_fractionrate96__392 = new TH1F("hrate_h_fractionrate96__392","hrate_h_fractionrate96",10, xAxis267);
   hrate_h_fractionrate96__392->SetBinContent(1,125.3038);
   hrate_h_fractionrate96__392->SetBinContent(3,89.91495);
   hrate_h_fractionrate96__392->SetBinContent(5,70.77764);
   hrate_h_fractionrate96__392->SetBinContent(6,61.96841);
   hrate_h_fractionrate96__392->SetBinContent(7,57.26002);
   hrate_h_fractionrate96__392->SetBinContent(8,50.72904);
   hrate_h_fractionrate96__392->SetBinError(1,5.811399);
   hrate_h_fractionrate96__392->SetBinError(3,5.087526);
   hrate_h_fractionrate96__392->SetBinError(5,4.591803);
   hrate_h_fractionrate96__392->SetBinError(6,4.359872);
   hrate_h_fractionrate96__392->SetBinError(7,4.173339);
   hrate_h_fractionrate96__392->SetBinError(8,4.044206);
   hrate_h_fractionrate96__392->SetEntries(6);
   hrate_h_fractionrate96__392->SetStats(0);

   TH1F *hrate_h3_fractionrate96__254 = new TH1F("hrate_h3_fractionrate96__254","hrate_h3_fractionrate96",10, xAxis267);
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

   hrate_h_fractionrate96__392->Add(hrate_h3_fractionrate96__254);
   hrate_h_fractionrate96__392->Add(hrate_p_fractionrate96__295);

   ci = kBlue;
   hrate_h_fractionrate96__392->SetLineColor(ci);
   hrate_h_fractionrate96__392->SetFillColor(ci);
   hrate_h_fractionrate96__392->SetMarkerColor(ci);
   hrate_h_fractionrate96__392->SetMarkerStyle(21);
   hrate_h_fractionrate96__392->GetXaxis()->SetLabelFont(42);
   hrate_h_fractionrate96__392->GetXaxis()->SetLabelSize(0.035);
   hrate_h_fractionrate96__392->GetXaxis()->SetTitleSize(0.035);
   hrate_h_fractionrate96__392->GetXaxis()->SetTitleFont(42);
   hrate_h_fractionrate96__392->GetYaxis()->SetLabelFont(42);
   hrate_h_fractionrate96__392->GetYaxis()->SetLabelSize(0.035);
   hrate_h_fractionrate96__392->GetYaxis()->SetTitleSize(0.035);
   hrate_h_fractionrate96__392->GetYaxis()->SetTitleFont(42);
   hrate_h_fractionrate96__392->GetZaxis()->SetLabelFont(42);
   hrate_h_fractionrate96__392->GetZaxis()->SetLabelSize(0.035);
   hrate_h_fractionrate96__392->GetZaxis()->SetTitleSize(0.035);
   hrate_h_fractionrate96__392->GetZaxis()->SetTitleFont(42);
   hs->Add(hrate_h_fractionrate96__392,"");
   //hrate_h_fractionrate96__392->Draw("e3");
   hs->Draw("nostacke");



   
   TLegend *leg = new TLegend(0.3,0.22,0.9,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Displaced Muon Trigger in Endcap(1.2<|#eta|<2.4)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_p_fractionrate96__391","Phase1+GE11(CSC+GE11): Position-based algorithm","pl");

   ci = kBlue-10;
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_h_fractionrate96__392","Phase-2(CSC+GE11+GE21+ME0): Hybrid algorithm","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();

   Double_t xAxis39[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hRate__44 = new TH1F("hRate__44"," ",10, xAxis39);
   hRate__44->SetBinContent(0,1563.893);
   hRate__44->SetBinContent(1,475.8322);
   //hRate__44->SetBinContent(2,344.4711);
   hRate__44->SetBinContent(3,302.708);
   //hRate__44->SetBinContent(4,205.2609);
   hRate__44->SetBinContent(5,166.4598);
   hRate__44->SetBinContent(6,125.7334);
   hRate__44->SetBinContent(7,119.3653);
   hRate__44->SetBinContent(8,111.22);
   //hRate__44->SetBinContent(9,106.3329);
   //hRate__44->SetBinContent(10,106.3329);
   //hRate__44->SetBinContent(11,86.48801);
   hRate__44->SetBinError(0,15.21861);
   hRate__44->SetBinError(1,8.394569);
   //hRate__44->SetBinError(2,7.142462);
   hRate__44->SetBinError(3,6.695508);
   //hRate__44->SetBinError(4,5.513466);
   hRate__44->SetBinError(5,4.96508);
   hRate__44->SetBinError(6,4.31516);
   hRate__44->SetBinError(7,4.204463);
   hRate__44->SetBinError(8,4.058476);
   //hRate__44->SetBinError(9,3.968307);
   //hRate__44->SetBinError(10,3.968307);
   //hRate__44->SetBinError(11,3.578899);
   hRate__44->SetEntries(12);
   hRate__44->SetDirectory(0);
   hRate__44->SetStats(0);

   ci = kRed;
   hRate__44->SetLineColor(ci);
   hRate__44->SetFillColor(ci);
   hRate__44->SetMarkerColor(ci);
   hRate__44->SetMarkerStyle(20);
   hRate__44->GetXaxis()->SetLabelFont(42);
   hRate__44->GetXaxis()->SetLabelSize(0.035);
   hRate__44->GetXaxis()->SetTitleSize(0.035);
   hRate__44->GetXaxis()->SetTitleFont(42);
   hRate__44->GetYaxis()->SetLabelFont(42);
   hRate__44->GetYaxis()->SetLabelSize(0.035);
   hRate__44->GetYaxis()->SetTitleSize(0.035);
   hRate__44->GetYaxis()->SetTitleFont(42);
   hRate__44->GetZaxis()->SetLabelFont(42);
   hRate__44->GetZaxis()->SetLabelSize(0.035);
   hRate__44->GetZaxis()->SetTitleSize(0.035);
   hRate__44->GetZaxis()->SetTitleFont(42);
   //hRate__44->Draw("E1X0 same");
   hRate__44->Draw("samee");

   Double_t xAxis40[10] = {2, 3, 5, 7, 10, 15, 20, 30, 40, 50}; 
   
   TH1F *hRate__45 = new TH1F("hRate__45"," ",9, xAxis40);
   hRate__45->SetBinContent(0,492.2708);
   hRate__45->SetBinContent(1,492.2708);
   hRate__45->SetBinContent(2,372.0169);
   hRate__45->SetBinContent(3,86.9323);
   hRate__45->SetBinContent(4,44.42877);
   hRate__45->SetBinContent(5,24.28773);
   hRate__45->SetBinContent(6,17.91961);
   hRate__45->SetBinContent(7,17.62341);
   hRate__45->SetBinContent(8,16.58674);
   //hRate__45->SetBinContent(9,14.80959);
   //hRate__45->SetBinContent(10,13.47673);
   hRate__45->SetBinError(0,8.538342);
   hRate__45->SetBinError(1,8.538342);
   hRate__45->SetBinError(2,7.422546);
   hRate__45->SetBinError(3,3.58808);
   hRate__45->SetBinError(4,2.565096);
   hRate__45->SetBinError(5,1.896553);
   hRate__45->SetBinError(6,1.629055);
   hRate__45->SetBinError(7,1.615536);
   hRate__45->SetBinError(8,1.5673);
   //hRate__45->SetBinError(9,1.480959);
   //hRate__45->SetBinError(10,1.412745);
   hRate__45->SetEntries(11);
   hRate__45->SetStats(0);

   ci = TColor::GetColor("#009900");
   hRate__45->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   hRate__45->SetMarkerColor(ci);
   hRate__45->SetMarkerStyle(21);
   hRate__45->GetXaxis()->SetLabelFont(42);
   hRate__45->GetXaxis()->SetLabelSize(0.035);
   hRate__45->GetXaxis()->SetTitleSize(0.035);
   hRate__45->GetXaxis()->SetTitleFont(42);
   hRate__45->GetYaxis()->SetLabelFont(42);
   hRate__45->GetYaxis()->SetLabelSize(0.035);
   hRate__45->GetYaxis()->SetTitleSize(0.035);
   hRate__45->GetYaxis()->SetTitleFont(42);
   hRate__45->GetZaxis()->SetLabelFont(42);
   hRate__45->GetZaxis()->SetLabelSize(0.035);
   hRate__45->GetZaxis()->SetTitleSize(0.035);
   hRate__45->GetZaxis()->SetTitleFont(42);
   //hRate__45->Draw("E1X0 same");
   
   //TLegend *leg = new TLegend(0.16,0.3,0.65,0.45,NULL,"brNDC");
   TLegend *leg2 = new TLegend(0.3,0.4,0.9,0.5,NULL,"brNDC");
   leg2->SetBorderSize(0);
   leg2->SetTextSize(0.03);
   leg2->SetLineColor(1);
   leg2->SetLineStyle(1);
   leg2->SetLineWidth(1);
   leg2->SetFillColor(0);
   leg2->SetFillStyle(1001);
   //TLegendEntry *
   entry=leg2->AddEntry("NULL","Displaced Muon Trigger in Barrel (|#eta|<0.9)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg2->AddEntry("hRate__44","Phase-1(DT): Directions-based algorithm","pl");

   ci = kRed;
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   //entry=leg2->AddEntry("hRate","Directions-based with medium L1TrkVeto","p");
   //entry->SetLineColor(1);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);

   //ci = TColor::GetColor("#009900");
   //entry->SetMarkerColor(ci);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   leg2->Draw();
   
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU");
   pt->Draw();
      tex = new TLatex(0.2,0.15,"L1Trk-based track veto not applied");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta12to24_allnpar_plusbarrel.pdf");
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta12to24_allnpar_plusbarrel.png");
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta12to24_allnpar_plusbarrel.eps");
}
