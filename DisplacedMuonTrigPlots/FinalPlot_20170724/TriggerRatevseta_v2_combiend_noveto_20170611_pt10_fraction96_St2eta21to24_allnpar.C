void TriggerRatevseta_v2_combiend_noveto_20170611_pt10_fraction96_St2eta21to24_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Fri Jul 28 01:12:11 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.7558139,-1.879572,2.693798,2.567415);
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
   Double_t xAxis13[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1"," #scale[1.4]{#font[61]{CMS}} #font[52]{Simulation preliminary}                 14 TeV,200 PU",22, xAxis13);
   hs_stack_1->SetMinimum(0.04995006);
   hs_stack_1->SetMaximum(199.8002);
   hs_stack_1->SetDirectory(0);
   hs_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_1->SetLineColor(ci);
   hs_stack_1->GetXaxis()->SetTitle("|#eta| at 2nd CSC station");
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
   
   Double_t xAxis14[23] = {1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_position_eta21to24_frac96_pt10__25 = new TH1F("ratehist_position_eta21to24_frac96_pt10__25","ratehist_position_eta21to22_npar0_frac96_pt10",22, xAxis14);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinContent(15,46.47631);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinContent(16,57.56379);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinContent(17,80.34629);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinContent(18,91.58566);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinContent(19,120.5954);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinContent(20,119.9878);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinError(15,2.656874);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinError(16,2.956853);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinError(17,3.493317);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinError(18,3.729656);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinError(19,4.27977);
   ratehist_position_eta21to24_frac96_pt10__25->SetBinError(20,4.268976);
   ratehist_position_eta21to24_frac96_pt10__25->SetEntries(3401);
   ratehist_position_eta21to24_frac96_pt10__25->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta21to24_frac96_pt10__25->SetLineColor(ci);
   ratehist_position_eta21to24_frac96_pt10__25->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_position_eta21to24_frac96_pt10__25->SetMarkerColor(ci);
   ratehist_position_eta21to24_frac96_pt10__25->SetMarkerStyle(25);
   ratehist_position_eta21to24_frac96_pt10__25->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_position_eta21to24_frac96_pt10__25->GetXaxis()->SetLabelFont(42);
   ratehist_position_eta21to24_frac96_pt10__25->GetXaxis()->SetLabelSize(0.035);
   ratehist_position_eta21to24_frac96_pt10__25->GetXaxis()->SetTitleSize(0.035);
   ratehist_position_eta21to24_frac96_pt10__25->GetXaxis()->SetTitleFont(42);
   ratehist_position_eta21to24_frac96_pt10__25->GetYaxis()->SetTitle("Trigger Rate [kHz]");
   ratehist_position_eta21to24_frac96_pt10__25->GetYaxis()->SetLabelFont(42);
   ratehist_position_eta21to24_frac96_pt10__25->GetYaxis()->SetLabelSize(0.035);
   ratehist_position_eta21to24_frac96_pt10__25->GetYaxis()->SetTitleSize(0.035);
   ratehist_position_eta21to24_frac96_pt10__25->GetYaxis()->SetTitleFont(42);
   ratehist_position_eta21to24_frac96_pt10__25->GetZaxis()->SetLabelFont(42);
   ratehist_position_eta21to24_frac96_pt10__25->GetZaxis()->SetLabelSize(0.035);
   ratehist_position_eta21to24_frac96_pt10__25->GetZaxis()->SetTitleSize(0.035);
   ratehist_position_eta21to24_frac96_pt10__25->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_position_eta21to24_frac96_pt10,"");
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
   hs->Add(ratehist_hybrid3_eta21to24_frac96_pt10,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.46,0.45,0.88,0.57,NULL,"brNDC");
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
   entry=leg->AddEntry("ratehist_position_eta21to24_frac96_pt10","CSC+GE11: position based","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_hybrid3_eta21to24_frac96_pt10","CSC+GE11+GE21+ME0: hybrid algorithm","pl");
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
      tex = new TLatex(0.2,0.2,"Displaced Muon Trigger, 2.10<|#eta|<2.40");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
