void GEMCSC_L1Mu_CSConly_withME0Eta21_eff_20170208_pt30_st2eta21to24_all()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Sep  5 14:02:05 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(-8.139535,-0.1685185,56.45995,1.127778);
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
   Double_t xAxis70[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TH1F *b1__60 = new TH1F("b1__60"," #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200",50, xAxis70);
   b1__60->SetMinimum(0);
   b1__60->SetMaximum(1.05);
   b1__60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1__60->SetLineColor(ci);
   b1__60->GetXaxis()->SetTitle("True muon p_{T} [GeV]");
   b1__60->GetXaxis()->SetLabelFont(42);
   b1__60->GetXaxis()->SetLabelSize(0.05);
   b1__60->GetXaxis()->SetTitleSize(0.05);
   b1__60->GetXaxis()->SetTitleFont(42);
   b1__60->GetYaxis()->SetTitle("L1 trigger efficiency");
   b1__60->GetYaxis()->SetNdivisions(520);
   b1__60->GetYaxis()->SetLabelFont(42);
   b1__60->GetYaxis()->SetLabelSize(0.05);
   b1__60->GetYaxis()->SetTitleSize(0.05);
   b1__60->GetYaxis()->SetTitleOffset(1.1);
   b1__60->GetYaxis()->SetTitleFont(42);
   b1__60->GetZaxis()->SetLabelFont(42);
   b1__60->GetZaxis()->SetLabelSize(0.035);
   b1__60->GetZaxis()->SetTitleSize(0.035);
   b1__60->GetZaxis()->SetTitleFont(42);
   b1__60->Draw("");
   Double_t xAxis73[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden0_clone73 = new TEfficiency("hden0_clone","",50,xAxis73);
   
   hden0_clone73->SetConfidenceLevel(0.6826895);
   hden0_clone73->SetBetaAlpha(1);
   hden0_clone73->SetBetaBeta(1);
   hden0_clone73->SetWeight(1);
   hden0_clone73->SetStatisticOption(0);
   hden0_clone73->SetPosteriorMode(0);
   hden0_clone73->SetShortestInterval(0);
   hden0_clone73->SetTotalEvents(0,0);
   hden0_clone73->SetPassedEvents(0,0);
   hden0_clone73->SetTotalEvents(1,0);
   hden0_clone73->SetPassedEvents(1,0);
   hden0_clone73->SetTotalEvents(2,118);
   hden0_clone73->SetPassedEvents(2,0);
   hden0_clone73->SetTotalEvents(3,300);
   hden0_clone73->SetPassedEvents(3,0);
   hden0_clone73->SetTotalEvents(4,316);
   hden0_clone73->SetPassedEvents(4,0);
   hden0_clone73->SetTotalEvents(5,332);
   hden0_clone73->SetPassedEvents(5,2);
   hden0_clone73->SetTotalEvents(6,302);
   hden0_clone73->SetPassedEvents(6,4);
   hden0_clone73->SetTotalEvents(7,332);
   hden0_clone73->SetPassedEvents(7,3);
   hden0_clone73->SetTotalEvents(8,310);
   hden0_clone73->SetPassedEvents(8,7);
   hden0_clone73->SetTotalEvents(9,276);
   hden0_clone73->SetPassedEvents(9,4);
   hden0_clone73->SetTotalEvents(10,284);
   hden0_clone73->SetPassedEvents(10,10);
   hden0_clone73->SetTotalEvents(11,312);
   hden0_clone73->SetPassedEvents(11,18);
   hden0_clone73->SetTotalEvents(12,256);
   hden0_clone73->SetPassedEvents(12,18);
   hden0_clone73->SetTotalEvents(13,300);
   hden0_clone73->SetPassedEvents(13,28);
   hden0_clone73->SetTotalEvents(14,328);
   hden0_clone73->SetPassedEvents(14,32);
   hden0_clone73->SetTotalEvents(15,276);
   hden0_clone73->SetPassedEvents(15,43);
   hden0_clone73->SetTotalEvents(16,282);
   hden0_clone73->SetPassedEvents(16,43);
   hden0_clone73->SetTotalEvents(17,292);
   hden0_clone73->SetPassedEvents(17,77);
   hden0_clone73->SetTotalEvents(18,266);
   hden0_clone73->SetPassedEvents(18,67);
   hden0_clone73->SetTotalEvents(19,338);
   hden0_clone73->SetPassedEvents(19,122);
   hden0_clone73->SetTotalEvents(20,280);
   hden0_clone73->SetPassedEvents(20,97);
   hden0_clone73->SetTotalEvents(21,326);
   hden0_clone73->SetPassedEvents(21,141);
   hden0_clone73->SetTotalEvents(22,286);
   hden0_clone73->SetPassedEvents(22,124);
   hden0_clone73->SetTotalEvents(23,276);
   hden0_clone73->SetPassedEvents(23,149);
   hden0_clone73->SetTotalEvents(24,290);
   hden0_clone73->SetPassedEvents(24,164);
   hden0_clone73->SetTotalEvents(25,272);
   hden0_clone73->SetPassedEvents(25,164);
   hden0_clone73->SetTotalEvents(26,296);
   hden0_clone73->SetPassedEvents(26,185);
   hden0_clone73->SetTotalEvents(27,304);
   hden0_clone73->SetPassedEvents(27,196);
   hden0_clone73->SetTotalEvents(28,292);
   hden0_clone73->SetPassedEvents(28,202);
   hden0_clone73->SetTotalEvents(29,294);
   hden0_clone73->SetPassedEvents(29,198);
   hden0_clone73->SetTotalEvents(30,332);
   hden0_clone73->SetPassedEvents(30,241);
   hden0_clone73->SetTotalEvents(31,346);
   hden0_clone73->SetPassedEvents(31,251);
   hden0_clone73->SetTotalEvents(32,290);
   hden0_clone73->SetPassedEvents(32,223);
   hden0_clone73->SetTotalEvents(33,318);
   hden0_clone73->SetPassedEvents(33,234);
   hden0_clone73->SetTotalEvents(34,304);
   hden0_clone73->SetPassedEvents(34,235);
   hden0_clone73->SetTotalEvents(35,244);
   hden0_clone73->SetPassedEvents(35,194);
   hden0_clone73->SetTotalEvents(36,278);
   hden0_clone73->SetPassedEvents(36,215);
   hden0_clone73->SetTotalEvents(37,280);
   hden0_clone73->SetPassedEvents(37,219);
   hden0_clone73->SetTotalEvents(38,270);
   hden0_clone73->SetPassedEvents(38,202);
   hden0_clone73->SetTotalEvents(39,242);
   hden0_clone73->SetPassedEvents(39,196);
   hden0_clone73->SetTotalEvents(40,338);
   hden0_clone73->SetPassedEvents(40,268);
   hden0_clone73->SetTotalEvents(41,264);
   hden0_clone73->SetPassedEvents(41,223);
   hden0_clone73->SetTotalEvents(42,312);
   hden0_clone73->SetPassedEvents(42,248);
   hden0_clone73->SetTotalEvents(43,316);
   hden0_clone73->SetPassedEvents(43,268);
   hden0_clone73->SetTotalEvents(44,300);
   hden0_clone73->SetPassedEvents(44,230);
   hden0_clone73->SetTotalEvents(45,238);
   hden0_clone73->SetPassedEvents(45,191);
   hden0_clone73->SetTotalEvents(46,300);
   hden0_clone73->SetPassedEvents(46,242);
   hden0_clone73->SetTotalEvents(47,280);
   hden0_clone73->SetPassedEvents(47,217);
   hden0_clone73->SetTotalEvents(48,262);
   hden0_clone73->SetPassedEvents(48,213);
   hden0_clone73->SetTotalEvents(49,300);
   hden0_clone73->SetPassedEvents(49,240);
   hden0_clone73->SetTotalEvents(50,260);
   hden0_clone73->SetPassedEvents(50,218);
   hden0_clone73->SetTotalEvents(51,4);
   hden0_clone73->SetPassedEvents(51,4);
   hden0_clone73->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   hden0_clone73->SetLineColor(ci);
   hden0_clone73->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hden0_clone73->SetMarkerColor(ci);
   hden0_clone73->SetMarkerStyle(26);
   hden0_clone73->Draw("samezp");
   Double_t xAxis74[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}; 
   
   TEfficiency * hden1_clone74 = new TEfficiency("hden1_clone","",50,xAxis74);
   
   hden1_clone74->SetConfidenceLevel(0.6826895);
   hden1_clone74->SetBetaAlpha(1);
   hden1_clone74->SetBetaBeta(1);
   hden1_clone74->SetWeight(1);
   hden1_clone74->SetStatisticOption(0);
   hden1_clone74->SetPosteriorMode(0);
   hden1_clone74->SetShortestInterval(0);
   hden1_clone74->SetTotalEvents(0,0);
   hden1_clone74->SetPassedEvents(0,0);
   hden1_clone74->SetTotalEvents(1,0);
   hden1_clone74->SetPassedEvents(1,0);
   hden1_clone74->SetTotalEvents(2,584);
   hden1_clone74->SetPassedEvents(2,0);
   hden1_clone74->SetTotalEvents(3,1164);
   hden1_clone74->SetPassedEvents(3,0);
   hden1_clone74->SetTotalEvents(4,1244);
   hden1_clone74->SetPassedEvents(4,2);
   hden1_clone74->SetTotalEvents(5,1146);
   hden1_clone74->SetPassedEvents(5,3);
   hden1_clone74->SetTotalEvents(6,1158);
   hden1_clone74->SetPassedEvents(6,8);
   hden1_clone74->SetTotalEvents(7,1192);
   hden1_clone74->SetPassedEvents(7,7);
   hden1_clone74->SetTotalEvents(8,1170);
   hden1_clone74->SetPassedEvents(8,18);
   hden1_clone74->SetTotalEvents(9,1186);
   hden1_clone74->SetPassedEvents(9,18);
   hden1_clone74->SetTotalEvents(10,1150);
   hden1_clone74->SetPassedEvents(10,39);
   hden1_clone74->SetTotalEvents(11,1174);
   hden1_clone74->SetPassedEvents(11,57);
   hden1_clone74->SetTotalEvents(12,1118);
   hden1_clone74->SetPassedEvents(12,65);
   hden1_clone74->SetTotalEvents(13,1234);
   hden1_clone74->SetPassedEvents(13,101);
   hden1_clone74->SetTotalEvents(14,1110);
   hden1_clone74->SetPassedEvents(14,134);
   hden1_clone74->SetTotalEvents(15,1154);
   hden1_clone74->SetPassedEvents(15,175);
   hden1_clone74->SetTotalEvents(16,1160);
   hden1_clone74->SetPassedEvents(16,235);
   hden1_clone74->SetTotalEvents(17,1074);
   hden1_clone74->SetPassedEvents(17,253);
   hden1_clone74->SetTotalEvents(18,1140);
   hden1_clone74->SetPassedEvents(18,299);
   hden1_clone74->SetTotalEvents(19,1102);
   hden1_clone74->SetPassedEvents(19,362);
   hden1_clone74->SetTotalEvents(20,1092);
   hden1_clone74->SetPassedEvents(20,397);
   hden1_clone74->SetTotalEvents(21,1154);
   hden1_clone74->SetPassedEvents(21,505);
   hden1_clone74->SetTotalEvents(22,1098);
   hden1_clone74->SetPassedEvents(22,498);
   hden1_clone74->SetTotalEvents(23,1172);
   hden1_clone74->SetPassedEvents(23,643);
   hden1_clone74->SetTotalEvents(24,1170);
   hden1_clone74->SetPassedEvents(24,673);
   hden1_clone74->SetTotalEvents(25,1172);
   hden1_clone74->SetPassedEvents(25,709);
   hden1_clone74->SetTotalEvents(26,1098);
   hden1_clone74->SetPassedEvents(26,691);
   hden1_clone74->SetTotalEvents(27,1146);
   hden1_clone74->SetPassedEvents(27,753);
   hden1_clone74->SetTotalEvents(28,1232);
   hden1_clone74->SetPassedEvents(28,870);
   hden1_clone74->SetTotalEvents(29,1172);
   hden1_clone74->SetPassedEvents(29,868);
   hden1_clone74->SetTotalEvents(30,1198);
   hden1_clone74->SetPassedEvents(30,898);
   hden1_clone74->SetTotalEvents(31,1120);
   hden1_clone74->SetPassedEvents(31,850);
   hden1_clone74->SetTotalEvents(32,1182);
   hden1_clone74->SetPassedEvents(32,926);
   hden1_clone74->SetTotalEvents(33,1230);
   hden1_clone74->SetPassedEvents(33,975);
   hden1_clone74->SetTotalEvents(34,1062);
   hden1_clone74->SetPassedEvents(34,891);
   hden1_clone74->SetTotalEvents(35,1080);
   hden1_clone74->SetPassedEvents(35,909);
   hden1_clone74->SetTotalEvents(36,1102);
   hden1_clone74->SetPassedEvents(36,945);
   hden1_clone74->SetTotalEvents(37,1148);
   hden1_clone74->SetPassedEvents(37,961);
   hden1_clone74->SetTotalEvents(38,1182);
   hden1_clone74->SetPassedEvents(38,1001);
   hden1_clone74->SetTotalEvents(39,1164);
   hden1_clone74->SetPassedEvents(39,997);
   hden1_clone74->SetTotalEvents(40,1154);
   hden1_clone74->SetPassedEvents(40,999);
   hden1_clone74->SetTotalEvents(41,1192);
   hden1_clone74->SetPassedEvents(41,1015);
   hden1_clone74->SetTotalEvents(42,1178);
   hden1_clone74->SetPassedEvents(42,1011);
   hden1_clone74->SetTotalEvents(43,1094);
   hden1_clone74->SetPassedEvents(43,961);
   hden1_clone74->SetTotalEvents(44,1200);
   hden1_clone74->SetPassedEvents(44,1045);
   hden1_clone74->SetTotalEvents(45,1144);
   hden1_clone74->SetPassedEvents(45,997);
   hden1_clone74->SetTotalEvents(46,1260);
   hden1_clone74->SetPassedEvents(46,1114);
   hden1_clone74->SetTotalEvents(47,1140);
   hden1_clone74->SetPassedEvents(47,983);
   hden1_clone74->SetTotalEvents(48,1290);
   hden1_clone74->SetPassedEvents(48,1134);
   hden1_clone74->SetTotalEvents(49,1186);
   hden1_clone74->SetPassedEvents(49,1032);
   hden1_clone74->SetTotalEvents(50,1140);
   hden1_clone74->SetPassedEvents(50,1010);
   hden1_clone74->SetTotalEvents(51,16);
   hden1_clone74->SetPassedEvents(51,13);
   hden1_clone74->SetFillColor(19);
   hden1_clone74->SetLineWidth(2);
   hden1_clone74->SetMarkerStyle(21);
   hden1_clone74->Draw("samezp");
   
   TLegend *leg = new TLegend(0.42,0.2,0.88,0.35,NULL,"brNDC");
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
   entry=leg->AddEntry("hden0_clone","Phase-1 detector(CSC): Run-2 Trigger Configuration","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hden1_clone","Phase-2(CSC+GE11GE21+ME0)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.44,0.57,"p_{T}^{Trig} >30 GeV, 2.10<|#eta|<2.40");
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
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
