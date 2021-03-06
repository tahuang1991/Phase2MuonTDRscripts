void TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta16to21_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Jul 25 11:27:35 2017) by ROOT version6.08/06
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
   hs->SetMaximum(500);
   Double_t xAxis265[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hs_stack_31 = new TH1F("hs_stack_31"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU",10, xAxis265);
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
   
   Double_t xAxis266[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hrate_p_fractionrate96__391 = new TH1F("hrate_p_fractionrate96__391","hrate_p_fractionrate96",10, xAxis266);
   hrate_p_fractionrate96__391->SetBinContent(1,286.9077);
   hrate_p_fractionrate96__391->SetBinContent(3,226.1543);
   hrate_p_fractionrate96__391->SetBinContent(5,188.9429);
   hrate_p_fractionrate96__391->SetBinContent(6,173.6027);
   hrate_p_fractionrate96__391->SetBinContent(7,161.6039);
   hrate_p_fractionrate96__391->SetBinContent(8,153.8578);
   hrate_p_fractionrate96__391->SetBinError(1,6.60125);
   hrate_p_fractionrate96__391->SetBinError(3,5.860809);
   hrate_p_fractionrate96__391->SetBinError(5,5.356984);
   hrate_p_fractionrate96__391->SetBinError(6,5.134915);
   hrate_p_fractionrate96__391->SetBinError(7,4.954285);
   hrate_p_fractionrate96__391->SetBinError(8,4.834092);
   hrate_p_fractionrate96__391->SetEntries(6);
   hrate_p_fractionrate96__391->SetStats(0);

   ci = kBlue;
   hrate_p_fractionrate96__391->SetLineColor(ci);

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
   hrate_h_fractionrate96__392->SetBinContent(1,143.3779);
   hrate_h_fractionrate96__392->SetBinContent(3,104.4957);
   hrate_h_fractionrate96__392->SetBinContent(5,83.83961);
   hrate_h_fractionrate96__392->SetBinContent(6,74.72661);
   hrate_h_fractionrate96__392->SetBinContent(7,69.71445);
   hrate_h_fractionrate96__392->SetBinContent(8,63.03159);
   hrate_h_fractionrate96__392->SetBinError(1,6.60125);
   hrate_h_fractionrate96__392->SetBinError(3,5.860809);
   hrate_h_fractionrate96__392->SetBinError(5,5.356984);
   hrate_h_fractionrate96__392->SetBinError(6,5.134915);
   hrate_h_fractionrate96__392->SetBinError(7,4.954285);
   hrate_h_fractionrate96__392->SetBinError(8,4.834092);
   hrate_h_fractionrate96__392->SetEntries(6);
   hrate_h_fractionrate96__392->SetStats(0);

   ci = kBlack;
   hrate_h_fractionrate96__392->SetLineColor(ci);

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
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.16,0.3,0.65,0.55,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu, no track veto","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_p_fractionrate96","CSC+GE11: Position-based algorithm","pl");

   entry->SetMarkerColor(kBlue);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_h_fractionrate96","CSC+GE11+GE21: Hybrid algorithm","pl");

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
      tex = new TLatex(0.2,0.2,"1.65<|#eta|<2.15, before track veto is applied");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta16to21_allnpar.pdf");
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta16to21_allnpar.png");
   c1_n2->SaveAs("TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta16to21_allnpar.eps");
}
