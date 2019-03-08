void TriggerRate_pt_combined_noveto_20170131_ratefraction96_St2eta12to16_allnpar()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sat Jul 29 16:44:30 2017) by ROOT version6.08/06
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
   hs->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   hs->SetMinimum(1);
   hs->SetMaximum(2000);
   Double_t xAxis217[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hs_stack_31 = new TH1F("hs_stack_31"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",10, xAxis217);
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

   ci = TColor::GetColor("#0000ff");
   hrate_p_fractionrate96__295->SetLineColor(ci);
   hrate_p_fractionrate96__295->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hrate_p_fractionrate96__295->SetMarkerColor(ci);
   hrate_p_fractionrate96__295->SetMarkerStyle(25);
   hrate_p_fractionrate96__295->GetXaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__295->GetXaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__295->GetXaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__295->GetXaxis()->SetTitleFont(42);
   hrate_p_fractionrate96__295->GetYaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__295->GetYaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__295->GetYaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__295->GetYaxis()->SetTitleFont(42);
   hrate_p_fractionrate96__295->GetZaxis()->SetLabelFont(42);
   hrate_p_fractionrate96__295->GetZaxis()->SetLabelSize(0.035);
   hrate_p_fractionrate96__295->GetZaxis()->SetTitleSize(0.035);
   hrate_p_fractionrate96__295->GetZaxis()->SetTitleFont(42);
   hs->Add(hrate_p_fractionrate96,"");
   Double_t xAxis219[11] = {5, 6, 7, 8, 10, 12, 15, 20, 25, 30, 35}; 
   
   TH1F *hrate_h_fractionrate96__296 = new TH1F("hrate_h_fractionrate96__296","hrate_h_fractionrate96",10, xAxis219);
   hrate_h_fractionrate96__296->SetBinError(1,3.584576);
   hrate_h_fractionrate96__296->SetBinError(3,2.69138);
   hrate_h_fractionrate96__296->SetBinError(5,2.037729);
   hrate_h_fractionrate96__296->SetBinError(6,1.758177);
   hrate_h_fractionrate96__296->SetBinError(7,1.440892);
   hrate_h_fractionrate96__296->SetBinError(8,1.233906);
   hrate_h_fractionrate96__296->SetEntries(6);
   hrate_h_fractionrate96__296->SetStats(0);
   hrate_h_fractionrate96__296->SetLineWidth(2);
   hrate_h_fractionrate96__296->SetMarkerStyle(21);
   hrate_h_fractionrate96__296->GetXaxis()->SetLabelFont(42);
   hrate_h_fractionrate96__296->GetXaxis()->SetLabelSize(0.035);
   hrate_h_fractionrate96__296->GetXaxis()->SetTitleSize(0.035);
   hrate_h_fractionrate96__296->GetXaxis()->SetTitleFont(42);
   hrate_h_fractionrate96__296->GetYaxis()->SetLabelFont(42);
   hrate_h_fractionrate96__296->GetYaxis()->SetLabelSize(0.035);
   hrate_h_fractionrate96__296->GetYaxis()->SetTitleSize(0.035);
   hrate_h_fractionrate96__296->GetYaxis()->SetTitleFont(42);
   hrate_h_fractionrate96__296->GetZaxis()->SetLabelFont(42);
   hrate_h_fractionrate96__296->GetZaxis()->SetLabelSize(0.035);
   hrate_h_fractionrate96__296->GetZaxis()->SetTitleSize(0.035);
   hrate_h_fractionrate96__296->GetZaxis()->SetTitleFont(42);
   hs->Add(hrate_h_fractionrate96,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.16,0.49,0.65,0.82,NULL,"brNDC");
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
   entry=leg->AddEntry("hrate_p_fractionrate96","Position-based algorithm,event: 6","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_h_fractionrate96","Hybrid algorithm w/o GE21,event: 6","pl");
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
   TText *AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
      tex = new TLatex(0.2,0.2,"1.20<|#eta|<1.65");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
