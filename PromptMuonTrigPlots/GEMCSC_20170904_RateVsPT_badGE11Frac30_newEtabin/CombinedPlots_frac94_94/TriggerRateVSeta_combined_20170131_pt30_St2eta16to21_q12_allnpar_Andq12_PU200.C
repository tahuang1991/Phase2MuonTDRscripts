void TriggerRateVSeta_combined_20170131_pt30_St2eta16to21_q12_allnpar_Andq12_PU200()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:02:05 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(1.461628,-3.316537,2.559819,1.130451);
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
   Double_t xAxis66[18] = {1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45}; 
   
   TH1F *hs_stack_10 = new TH1F("hs_stack_10"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",17, xAxis66);
   hs_stack_10->SetMinimum(0.001826299);
   hs_stack_10->SetMaximum(7.305195);
   hs_stack_10->SetDirectory(0);
   hs_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_10->SetLineColor(ci);
   hs_stack_10->GetXaxis()->SetTitle("L1Mu |#eta|");
   hs_stack_10->GetXaxis()->SetLabelFont(42);
   hs_stack_10->GetXaxis()->SetLabelSize(0.035);
   hs_stack_10->GetXaxis()->SetTitleSize(0.05);
   hs_stack_10->GetXaxis()->SetTitleFont(42);
   hs_stack_10->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hs_stack_10->GetYaxis()->SetLabelFont(42);
   hs_stack_10->GetYaxis()->SetLabelSize(0.035);
   hs_stack_10->GetYaxis()->SetTitleSize(0.05);
   hs_stack_10->GetYaxis()->SetTitleFont(42);
   hs_stack_10->GetZaxis()->SetLabelFont(42);
   hs_stack_10->GetZaxis()->SetLabelSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleSize(0.035);
   hs_stack_10->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_10);
   
   Double_t xAxis67[18] = {1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45}; 
   
   TH1F *ratehist_CSC__57 = new TH1F("ratehist_CSC__57","ratehist_CSC",17, xAxis67);
   ratehist_CSC__57->SetBinContent(2,1.065341);
   ratehist_CSC__57->SetBinContent(3,0.4565747);
   ratehist_CSC__57->SetBinContent(4,1.065341);
   ratehist_CSC__57->SetBinContent(5,0.7609578);
   ratehist_CSC__57->SetBinContent(6,0.7609578);
   ratehist_CSC__57->SetBinContent(7,0.4565747);
   ratehist_CSC__57->SetBinContent(8,1.826299);
   ratehist_CSC__57->SetBinContent(9,1.521916);
   ratehist_CSC__57->SetBinContent(10,1.826299);
   ratehist_CSC__57->SetBinContent(11,0.9131494);
   ratehist_CSC__57->SetBinContent(12,2.587256);
   ratehist_CSC__57->SetBinContent(13,3.804789);
   ratehist_CSC__57->SetBinContent(14,2.89164);
   ratehist_CSC__57->SetBinContent(15,2.282873);
   ratehist_CSC__57->SetBinContent(16,2.130682);
   ratehist_CSC__57->SetBinError(2,0.402661);
   ratehist_CSC__57->SetBinError(3,0.2636035);
   ratehist_CSC__57->SetBinError(4,0.402661);
   ratehist_CSC__57->SetBinError(5,0.3403107);
   ratehist_CSC__57->SetBinError(6,0.3403107);
   ratehist_CSC__57->SetBinError(7,0.2636035);
   ratehist_CSC__57->SetBinError(8,0.527207);
   ratehist_CSC__57->SetBinError(9,0.481272);
   ratehist_CSC__57->SetBinError(10,0.527207);
   ratehist_CSC__57->SetBinError(11,0.3727917);
   ratehist_CSC__57->SetBinError(12,0.6275019);
   ratehist_CSC__57->SetBinError(13,0.7609578);
   ratehist_CSC__57->SetBinError(14,0.6633876);
   ratehist_CSC__57->SetBinError(15,0.5894354);
   ratehist_CSC__57->SetBinError(16,0.5694487);
   ratehist_CSC__57->SetEntries(160);
   ratehist_CSC__57->SetDirectory(0);
   ratehist_CSC__57->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratehist_CSC__57->SetLineColor(ci);
   ratehist_CSC__57->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   ratehist_CSC__57->SetMarkerColor(ci);
   ratehist_CSC__57->SetMarkerStyle(26);
   ratehist_CSC__57->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_CSC__57->GetXaxis()->SetLabelFont(42);
   ratehist_CSC__57->GetXaxis()->SetLabelSize(0.035);
   ratehist_CSC__57->GetXaxis()->SetTitleSize(0.035);
   ratehist_CSC__57->GetXaxis()->SetTitleFont(42);
   ratehist_CSC__57->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_CSC__57->GetYaxis()->SetLabelFont(42);
   ratehist_CSC__57->GetYaxis()->SetLabelSize(0.035);
   ratehist_CSC__57->GetYaxis()->SetTitleSize(0.035);
   ratehist_CSC__57->GetYaxis()->SetTitleFont(42);
   ratehist_CSC__57->GetZaxis()->SetLabelFont(42);
   ratehist_CSC__57->GetZaxis()->SetLabelSize(0.035);
   ratehist_CSC__57->GetZaxis()->SetTitleSize(0.035);
   ratehist_CSC__57->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_CSC,"");
   Double_t xAxis68[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_GE11_eta16to21_frac98_pt30__58 = new TH1F("ratehist_GE11_eta16to21_frac98_pt30__58","ratehist_GE11_eta16to21_frac98_pt30",23, xAxis68);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinContent(8,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinContent(9,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinContent(10,0.3043831);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinContent(11,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinContent(12,0.3043831);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinContent(13,0.3043831);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinContent(14,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinError(8,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinError(9,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinError(10,0.2152314);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinError(11,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinError(12,0.2152314);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinError(13,0.2152314);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetBinError(14,0.1521916);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetEntries(10);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   ratehist_GE11_eta16to21_frac98_pt30__58->SetLineColor(ci);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   ratehist_GE11_eta16to21_frac98_pt30__58->SetMarkerColor(ci);
   ratehist_GE11_eta16to21_frac98_pt30__58->SetMarkerStyle(25);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_GE11_eta16to21_frac98_pt30__58->GetXaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetXaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetXaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetXaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_GE11_eta16to21_frac98_pt30__58->GetYaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetYaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetYaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetYaxis()->SetTitleFont(42);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetZaxis()->SetLabelFont(42);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetZaxis()->SetLabelSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetZaxis()->SetTitleSize(0.035);
   ratehist_GE11_eta16to21_frac98_pt30__58->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_GE11_eta16to21_frac98_pt30,"");
   Double_t xAxis69[24] = {1, 1.2, 1.3, 1.45, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 1.85, 1.9, 1.95, 2, 2.05, 2.1, 2.15, 2.2, 2.25, 2.3, 2.35, 2.4, 2.45, 2.5}; 
   
   TH1F *ratehist_ME0__59 = new TH1F("ratehist_ME0__59","ratehist_ME0",23, xAxis69);
   ratehist_ME0__59->SetBinContent(10,0.1521916);
   ratehist_ME0__59->SetBinContent(12,0.3043831);
   ratehist_ME0__59->SetBinContent(14,0.1521916);
   ratehist_ME0__59->SetBinContent(18,0.3043831);
   ratehist_ME0__59->SetBinContent(20,0.3043831);
   ratehist_ME0__59->SetBinContent(21,0.9131494);
   ratehist_ME0__59->SetBinError(10,0.1521916);
   ratehist_ME0__59->SetBinError(12,0.2152314);
   ratehist_ME0__59->SetBinError(14,0.1521916);
   ratehist_ME0__59->SetBinError(18,0.2152314);
   ratehist_ME0__59->SetBinError(20,0.2152314);
   ratehist_ME0__59->SetBinError(21,0.3727917);
   ratehist_ME0__59->SetEntries(14);
   ratehist_ME0__59->SetStats(0);
   ratehist_ME0__59->SetLineWidth(2);
   ratehist_ME0__59->SetMarkerStyle(21);
   ratehist_ME0__59->GetXaxis()->SetTitle("L1Mu |#eta|");
   ratehist_ME0__59->GetXaxis()->SetLabelFont(42);
   ratehist_ME0__59->GetXaxis()->SetLabelSize(0.035);
   ratehist_ME0__59->GetXaxis()->SetTitleSize(0.035);
   ratehist_ME0__59->GetXaxis()->SetTitleFont(42);
   ratehist_ME0__59->GetYaxis()->SetTitle("L1 Trigger Rate [kHz]");
   ratehist_ME0__59->GetYaxis()->SetLabelFont(42);
   ratehist_ME0__59->GetYaxis()->SetLabelSize(0.035);
   ratehist_ME0__59->GetYaxis()->SetTitleSize(0.035);
   ratehist_ME0__59->GetYaxis()->SetTitleFont(42);
   ratehist_ME0__59->GetZaxis()->SetLabelFont(42);
   ratehist_ME0__59->GetZaxis()->SetLabelSize(0.035);
   ratehist_ME0__59->GetZaxis()->SetTitleSize(0.035);
   ratehist_ME0__59->GetZaxis()->SetTitleFont(42);
   hs->Add(ratehist_ME0,"");
   hs->Draw("nostacke");
   
   TLegend *leg = new TLegend(0.2,0.15,0.75,0.35,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","L1Mu(standalone) Performance","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_CSC","Phase-1 detector (CSC): Run-2 Trigger Configuration","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_GE11_eta16to21_frac98_pt30","Phase-1+GE11(CSC+GE11)","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ratehist_ME0","Phase-2(CSC+GE11+GE21+ME0)","pl");
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
      tex = new TLatex(0.2,0.88,"p_{T}^{Trig} >30 GeV");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
