void TriggerRate_q4_eta16to21_PU200_Eff98_30CSCAging()
{
//=========Macro generated from canvas: c1_n4/c1_n4
//=========  (Mon Sep  4 20:10:43 2017) by ROOT version6.08/06
   TCanvas *c1_n4 = new TCanvas("c1_n4", "c1_n4",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n4->SetHighLightColor(2);
   c1_n4->Range(-4.651163,-1.340945,56.07235,3.597326);
   c1_n4->SetFillColor(0);
   c1_n4->SetBorderMode(0);
   c1_n4->SetBorderSize(2);
   c1_n4->SetLogy();
   c1_n4->SetGridx();
   c1_n4->SetGridy();
   c1_n4->SetLeftMargin(0.126);
   c1_n4->SetTopMargin(0.06);
   c1_n4->SetBottomMargin(0.13);
   c1_n4->SetFrameBorderMode(0);
   c1_n4->SetFrameBorderMode(0);
   Double_t xAxis577[23] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 25, 28, 30, 35, 40, 50}; 
   
   TH1F *hrate_ge11__553 = new TH1F("hrate_ge11__553"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",22, xAxis577);
   hrate_ge11__553->SetMinimum(0.2);
   hrate_ge11__553->SetMaximum(2000);
   hrate_ge11__553->SetDirectory(0);
   hrate_ge11__553->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hrate_ge11__553->SetLineColor(ci);
   hrate_ge11__553->GetXaxis()->SetTitle("Muon trigger p_{T} threshold [GeV]");
   hrate_ge11__553->GetXaxis()->SetLabelFont(42);
   hrate_ge11__553->GetXaxis()->SetLabelSize(0.035);
   hrate_ge11__553->GetXaxis()->SetTitleSize(0.035);
   hrate_ge11__553->GetXaxis()->SetTitleFont(42);
   hrate_ge11__553->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   hrate_ge11__553->GetYaxis()->SetLabelFont(42);
   hrate_ge11__553->GetYaxis()->SetLabelSize(0.035);
   hrate_ge11__553->GetYaxis()->SetTitleSize(0.035);
   hrate_ge11__553->GetYaxis()->SetTitleFont(42);
   hrate_ge11__553->GetZaxis()->SetLabelFont(42);
   hrate_ge11__553->GetZaxis()->SetLabelSize(0.035);
   hrate_ge11__553->GetZaxis()->SetTitleSize(0.035);
   hrate_ge11__553->GetZaxis()->SetTitleFont(42);
   hrate_ge11__553->Draw("");
   Double_t xAxis578[23] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 25, 28, 30, 35, 40, 50}; 
   
   TH1F *hrate_ge11__554 = new TH1F("hrate_ge11__554","hrate_ge11",22, xAxis578);
   hrate_ge11__554->SetBinContent(13,12.78409);
   hrate_ge11__554->SetEntries(1);
   hrate_ge11__554->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hrate_ge11__554->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hrate_ge11__554->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hrate_ge11__554->SetMarkerColor(ci);
   hrate_ge11__554->SetMarkerStyle(25);
   hrate_ge11__554->GetXaxis()->SetLabelFont(42);
   hrate_ge11__554->GetXaxis()->SetLabelSize(0.035);
   hrate_ge11__554->GetXaxis()->SetTitleSize(0.035);
   hrate_ge11__554->GetXaxis()->SetTitleFont(42);
   hrate_ge11__554->GetYaxis()->SetLabelFont(42);
   hrate_ge11__554->GetYaxis()->SetLabelSize(0.035);
   hrate_ge11__554->GetYaxis()->SetTitleSize(0.035);
   hrate_ge11__554->GetYaxis()->SetTitleFont(42);
   hrate_ge11__554->GetZaxis()->SetLabelFont(42);
   hrate_ge11__554->GetZaxis()->SetLabelSize(0.035);
   hrate_ge11__554->GetZaxis()->SetTitleSize(0.035);
   hrate_ge11__554->GetZaxis()->SetTitleFont(42);
   hrate_ge11__554->Draw("samee");
   Double_t xAxis579[23] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 25, 28, 30, 35, 40, 50}; 
   
   TH1F *hrate_h__555 = new TH1F("hrate_h__555","hrate_h",22, xAxis579);
   hrate_h__555->SetBinContent(13,9.588068);
   hrate_h__555->SetEntries(1);
   hrate_h__555->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hrate_h__555->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hrate_h__555->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hrate_h__555->SetMarkerColor(ci);
   hrate_h__555->SetMarkerStyle(22);
   hrate_h__555->GetXaxis()->SetLabelFont(42);
   hrate_h__555->GetXaxis()->SetLabelSize(0.035);
   hrate_h__555->GetXaxis()->SetTitleSize(0.035);
   hrate_h__555->GetXaxis()->SetTitleFont(42);
   hrate_h__555->GetYaxis()->SetLabelFont(42);
   hrate_h__555->GetYaxis()->SetLabelSize(0.035);
   hrate_h__555->GetYaxis()->SetTitleSize(0.035);
   hrate_h__555->GetYaxis()->SetTitleFont(42);
   hrate_h__555->GetZaxis()->SetLabelFont(42);
   hrate_h__555->GetZaxis()->SetLabelSize(0.035);
   hrate_h__555->GetZaxis()->SetTitleSize(0.035);
   hrate_h__555->GetZaxis()->SetTitleFont(42);
   hrate_h__555->Draw("samee");
   Double_t xAxis580[23] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 25, 28, 30, 35, 40, 50}; 
   
   TH1F *hrate_ge11_bad__556 = new TH1F("hrate_ge11_bad__556","hrate_ge21_bad",22, xAxis580);
   hrate_ge11_bad__556->SetBinContent(13,35.76501);
   hrate_ge11_bad__556->SetEntries(1);
   hrate_ge11_bad__556->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   hrate_ge11_bad__556->SetFillColor(ci);

   ci = TColor::GetColor("#ccccff");
   hrate_ge11_bad__556->SetLineColor(ci);

   ci = TColor::GetColor("#ccccff");
   hrate_ge11_bad__556->SetMarkerColor(ci);
   hrate_ge11_bad__556->SetMarkerStyle(21);
   hrate_ge11_bad__556->GetXaxis()->SetLabelFont(42);
   hrate_ge11_bad__556->GetXaxis()->SetLabelSize(0.035);
   hrate_ge11_bad__556->GetXaxis()->SetTitleSize(0.035);
   hrate_ge11_bad__556->GetXaxis()->SetTitleFont(42);
   hrate_ge11_bad__556->GetYaxis()->SetLabelFont(42);
   hrate_ge11_bad__556->GetYaxis()->SetLabelSize(0.035);
   hrate_ge11_bad__556->GetYaxis()->SetTitleSize(0.035);
   hrate_ge11_bad__556->GetYaxis()->SetTitleFont(42);
   hrate_ge11_bad__556->GetZaxis()->SetLabelFont(42);
   hrate_ge11_bad__556->GetZaxis()->SetLabelSize(0.035);
   hrate_ge11_bad__556->GetZaxis()->SetTitleSize(0.035);
   hrate_ge11_bad__556->GetZaxis()->SetTitleFont(42);
   hrate_ge11_bad__556->Draw("samee");
   Double_t xAxis581[23] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 25, 28, 30, 35, 40, 50}; 
   
   TH1F *hrate_h_bad__557 = new TH1F("hrate_h_bad__557","hrate_h_bad",22, xAxis581);
   hrate_h_bad__557->SetBinContent(13,14.15382);
   hrate_h_bad__557->SetEntries(1);
   hrate_h_bad__557->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   hrate_h_bad__557->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   hrate_h_bad__557->SetLineColor(ci);

   ci = TColor::GetColor("#ffcccc");
   hrate_h_bad__557->SetMarkerColor(ci);
   hrate_h_bad__557->SetMarkerStyle(20);
   hrate_h_bad__557->GetXaxis()->SetLabelFont(42);
   hrate_h_bad__557->GetXaxis()->SetLabelSize(0.035);
   hrate_h_bad__557->GetXaxis()->SetTitleSize(0.035);
   hrate_h_bad__557->GetXaxis()->SetTitleFont(42);
   hrate_h_bad__557->GetYaxis()->SetLabelFont(42);
   hrate_h_bad__557->GetYaxis()->SetLabelSize(0.035);
   hrate_h_bad__557->GetYaxis()->SetTitleSize(0.035);
   hrate_h_bad__557->GetYaxis()->SetTitleFont(42);
   hrate_h_bad__557->GetZaxis()->SetLabelFont(42);
   hrate_h_bad__557->GetZaxis()->SetLabelSize(0.035);
   hrate_h_bad__557->GetZaxis()->SetTitleSize(0.035);
   hrate_h_bad__557->GetZaxis()->SetTitleFont(42);
   hrate_h_bad__557->Draw("samee");
   
   TLegend *leg = new TLegend(0.4,0.7,0.9,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hrate_ge11","YE11 bending angle cut","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_h","Combined bending angle cut","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_ge11_bad","YE11 bending angle cut+30 % CSC aging","pl");

   ci = TColor::GetColor("#ccccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ccccff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hrate_h_bad","#splitline{Combined bending angle cut}{+30 % CSC aging}","pl");

   ci = TColor::GetColor("#ffcccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.2,0.88,"1.65<|#eta|<2.10, L1Mu with Q>=4");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
   c1_n4->Modified();
   c1_n4->cd();
   c1_n4->SetSelected(c1_n4);
}
