void TriggerEffVsRate_GEMCSCBending_pt15_eta16to21_PU200_30CSCAging()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Aug 15 15:00:34 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.6622995,-7.357052,0.9416772,49.23566);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetLeftMargin(0.126);
   c1_n2->SetTopMargin(0.06);
   c1_n2->SetBottomMargin(0.13);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("TriggerEffVsRate_all_pt15_eta16to21");
   multigraph->SetTitle(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fx1001[24] = {
   0.764474,
   0.7662408,
   0.7726284,
   0.7757543,
   0.7864909,
   0.7976352,
   0.8006252,
   0.8068769,
   0.8134004,
   0.816798,
   0.8222343,
   0.8294373,
   0.8309323,
   0.8365045,
   0.8404458,
   0.8428921,
   0.8483284,
   0.8563468,
   0.860424,
   0.8673553,
   0.8718402,
   0.8774123,
   0.8817613,
   0.8867899};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fy1001[24] = {
   7.153003,
   7.000812,
   7.305195,
   7.305195,
   7.305195,
   7.457386,
   7.609578,
   8.218344,
   8.522727,
   8.522727,
   8.82711,
   9.588068,
   9.588068,
   9.892451,
   9.892451,
   10.04464,
   10.65341,
   11.26218,
   11.71875,
   12.02313,
   12.6319,
   13.39286,
   14.00162,
   14.91477};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fex1001[24] = {
   0.00494676,
   0.004933863,
   0.004886226,
   0.004862328,
   0.004777219,
   0.004683707,
   0.004657683,
   0.004601939,
   0.004541796,
   0.004509647,
   0.004456992,
   0.004384841,
   0.004369515,
   0.004311289,
   0.004269029,
   0.004242337,
   0.004181714,
   0.004088863,
   0.004040003,
   0.003954246,
   0.003896857,
   0.003823361,
   0.003764223,
   0.003693798};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fey1001[24] = {
   1.043373,
   1.032213,
   1.054414,
   1.054414,
   1.054414,
   1.065341,
   1.076157,
   1.118375,
   1.138897,
   1.138897,
   1.159056,
   1.207983,
   1.207983,
   1.227008,
   1.227008,
   1.23641,
   1.273326,
   1.309201,
   1.335476,
   1.352708,
   1.386531,
   1.427683,
   1.45977,
   1.50662};
   TGraphErrors *gre = new TGraphErrors(24,TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fx1001,TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fy1001,TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fex1001,TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fey1001);
   gre->SetName("TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcccc");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ffcccc");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001 = new TH1F("Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001","Graph",100,0.7464316,0.9035793);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->SetMinimum(4.923319);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->SetMaximum(17.46667);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->SetDirectory(0);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->SetLineColor(ci);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetXaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetXaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetXaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetXaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetYaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetYaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetYaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetYaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetZaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetZaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetZaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001);
   
   multigraph->Add(gre,"");
   
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_fx1002[24] = {
   0.7760379,
   0.7958849,
   0.7958849,
   0.7958849,
   0.8009832,
   0.8009832,
   0.8141843,
   0.8141843,
   0.8169155,
   0.8169155,
   0.8259286,
   0.8259286,
   0.8284778,
   0.835579,
   0.835579,
   0.8414057,
   0.8429534,
   0.8460488,
   0.8469592,
   0.8497815,
   0.8520575,
   0.8538784,
   0.8555171,
   0.8580663};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_fy1002[24] = {
   7.761769,
   8.370536,
   8.370536,
   8.370536,
   8.370536,
   8.370536,
   8.82711,
   8.82711,
   8.82711,
   8.82711,
   9.131494,
   9.131494,
   9.131494,
   9.74026,
   9.74026,
   10.8056,
   10.95779,
   11.41437,
   11.87094,
   12.02313,
   12.47971,
   13.24067,
   13.24067,
   13.54505};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_fex1002[24] = {
   0.003977851,
   0.003845762,
   0.003845762,
   0.003845762,
   0.003809573,
   0.003809573,
   0.003711268,
   0.003711268,
   0.003690066,
   0.003690066,
   0.003617884,
   0.003617884,
   0.003596834,
   0.00353665,
   0.00353665,
   0.00348551,
   0.003471649,
   0.003443571,
   0.00343522,
   0.003409063,
   0.003387666,
   0.00337035,
   0.003354612,
   0.003329837};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_fey1002[24] = {
   1.086865,
   1.128683,
   1.128683,
   1.128683,
   1.128683,
   1.128683,
   1.159056,
   1.159056,
   1.159056,
   1.159056,
   1.178871,
   1.178871,
   1.178871,
   1.217532,
   1.217532,
   1.282389,
   1.291388,
   1.318018,
   1.344119,
   1.352708,
   1.378153,
   1.419548,
   1.419548,
   1.435772};
   gre = new TGraphErrors(24,TriggerEffVsRate_GE11Cut_pt15_eta16to21_fx1002,TriggerEffVsRate_GE11Cut_pt15_eta16to21_fy1002,TriggerEffVsRate_GE11Cut_pt15_eta16to21_fex1002,TriggerEffVsRate_GE11Cut_pt15_eta16to21_fey1002);
   gre->SetName("TriggerEffVsRate_GE11Cut_pt15_eta16to21");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   
   TH1F *Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002 = new TH1F("Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002","Graph",100,0.7631264,0.8703297);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->SetMinimum(5.844313);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->SetMaximum(15.81141);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->SetDirectory(0);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->SetLineColor(ci);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetXaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetXaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetXaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetXaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetYaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetYaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetYaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetYaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetZaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetZaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetZaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002);
   
   multigraph->Add(gre,"");
   
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_fx1003[24] = {
   0.7841805,
   0.7877141,
   0.7927426,
   0.7946453,
   0.8045665,
   0.8155749,
   0.8203316,
   0.8240011,
   0.8294373,
   0.8336504,
   0.8379995,
   0.8439793,
   0.8462898,
   0.8525415,
   0.8551237,
   0.8551237,
   0.861919,
   0.869258,
   0.8703452,
   0.8799946,
   0.8842077,
   0.8884208,
   0.891003,
   0.8961674};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_fy1003[24] = {
   4.717938,
   4.87013,
   4.87013,
   4.87013,
   5.022321,
   5.326705,
   5.478896,
   5.478896,
   5.783279,
   5.783279,
   5.935471,
   6.239854,
   6.239854,
   6.696429,
   7.000812,
   6.84862,
   7.761769,
   7.913961,
   8.218344,
   8.674919,
   9.131494,
   9.588068,
   9.892451,
   10.19683};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_fex1003[24] = {
   0.004795937,
   0.004767218,
   0.004725429,
   0.00470933,
   0.004622752,
   0.004521287,
   0.004475594,
   0.00443955,
   0.004384841,
   0.004341331,
   0.004295366,
   0.004230357,
   0.004204662,
   0.004133451,
   0.0041033,
   0.0041033,
   0.004021798,
   0.003930086,
   0.003916158,
   0.003788441,
   0.003730243,
   0.003670465,
   0.003633013,
   0.003556161};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_fey1003[24] = {
   0.8473667,
   0.8609255,
   0.8609255,
   0.8609255,
   0.8742739,
   0.9003774,
   0.9131494,
   0.9131494,
   0.9381718,
   0.9381718,
   0.950436,
   0.9745015,
   0.9745015,
   1.009525,
   1.032213,
   1.020932,
   1.086865,
   1.097469,
   1.118375,
   1.149021,
   1.178871,
   1.207983,
   1.227008,
   1.245742};
   gre = new TGraphErrors(24,TriggerEffVsRate_hybrid_pt15_eta16to21_fx1003,TriggerEffVsRate_hybrid_pt15_eta16to21_fy1003,TriggerEffVsRate_hybrid_pt15_eta16to21_fex1003,TriggerEffVsRate_hybrid_pt15_eta16to21_fey1003);
   gre->SetName("TriggerEffVsRate_hybrid_pt15_eta16to21");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(22);
   
   TH1F *Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003 = new TH1F("Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003","Graph",100,0.7673506,0.9117575);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->SetMinimum(3.113371);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->SetMaximum(12.19978);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->SetDirectory(0);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->SetLineColor(ci);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetXaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetXaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetXaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetXaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetYaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetYaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetYaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetYaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetZaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetZaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetZaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003);
   
   multigraph->Add(gre,"");
   
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fx1004[24] = {
   0.804716,
   0.8188274,
   0.8188274,
   0.8188274,
   0.8221959,
   0.8221959,
   0.8302986,
   0.8302986,
   0.8323926,
   0.8323926,
   0.8385834,
   0.8385834,
   0.8401311,
   0.8448653,
   0.8448653,
   0.84878,
   0.8497815,
   0.8520575,
   0.8526948,
   0.8548798,
   0.8563365,
   0.85752,
   0.8587036,
   0.8604334};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fy1004[24] = {
   35.30844,
   35.46063,
   35.46063,
   35.46063,
   35.46063,
   35.46063,
   35.91721,
   35.91721,
   35.91721,
   35.91721,
   36.0694,
   36.0694,
   36.0694,
   36.37378,
   36.37378,
   36.98255,
   37.13474,
   37.43912,
   37.74351,
   37.74351,
   38.04789,
   38.20008,
   38.20008,
   38.20008};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fex1004[24] = {
   0.003782461,
   0.003675041,
   0.003675041,
   0.003675041,
   0.003648197,
   0.003648197,
   0.003581621,
   0.003581621,
   0.003563941,
   0.003563941,
   0.003510484,
   0.003510484,
   0.003496836,
   0.003454363,
   0.003454363,
   0.003418392,
   0.003409063,
   0.003387666,
   0.003381626,
   0.00336075,
   0.003346688,
   0.003335176,
   0.003323586,
   0.003306505};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fey1004[24] = {
   2.318113,
   2.323103,
   2.323103,
   2.323103,
   2.323103,
   2.323103,
   2.338011,
   2.338011,
   2.338011,
   2.338011,
   2.342959,
   2.342959,
   2.342959,
   2.352824,
   2.352824,
   2.372432,
   2.377308,
   2.387031,
   2.396715,
   2.396715,
   2.40636,
   2.411168,
   2.411168,
   2.411168};
   gre = new TGraphErrors(24,TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fx1004,TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fy1004,TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fex1004,TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fey1004);
   gre->SetName("TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ccccff");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ccccff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ccccff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004 = new TH1F("Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004","Graph",100,0.7946529,0.8700205);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->SetMinimum(32.22824);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->SetMaximum(41.37334);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->SetDirectory(0);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->SetLineColor(ci);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetXaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetXaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetXaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetXaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetYaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetYaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetYaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetYaxis()->SetTitleFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetZaxis()->SetLabelFont(42);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetZaxis()->SetLabelSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetZaxis()->SetTitleSize(0.035);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1005[24] = {
   0.7872674,
   0.7898139,
   0.7952987,
   0.7998041,
   0.8094025,
   0.8205681,
   0.8248776,
   0.8282076,
   0.8338883,
   0.8387855,
   0.8432909,
   0.8493634,
   0.8515181,
   0.8573947,
   0.8607248,
   0.8589618,
   0.8667973,
   0.8732615,
   0.8740451,
   0.8840353,
   0.887953,
   0.8918707,
   0.8952008,
   0.8997062};
   Double_t Graph_fy1005[24] = {
   3.956981,
   3.804789,
   3.804789,
   3.804789,
   3.804789,
   3.956981,
   4.109172,
   4.261364,
   4.413555,
   4.413555,
   4.565747,
   4.87013,
   4.87013,
   5.174513,
   5.022321,
   5.022321,
   5.631088,
   5.783279,
   5.935471,
   6.239854,
   6.544237,
   7.000812,
   7.000812,
   7.000812};
   Double_t Graph_fex1005[24] = {
   0.0057277,
   0.005702516,
   0.005647127,
   0.005600432,
   0.005497218,
   0.005370433,
   0.005319463,
   0.005279267,
   0.005209021,
   0.005146709,
   0.005087893,
   0.005006269,
   0.004976635,
   0.004893959,
   0.004845864,
   0.004871441,
   0.004755733,
   0.004656167,
   0.004643834,
   0.004481258,
   0.00441466,
   0.00434635,
   0.00428688,
   0.00420426};
   Double_t Graph_fey1005[24] = {
   0.7760277,
   0.7609578,
   0.7609578,
   0.7609578,
   0.7609578,
   0.7760277,
   0.7908105,
   0.805322,
   0.8195766,
   0.8195766,
   0.8335875,
   0.8609255,
   0.8609255,
   0.8874217,
   0.8742739,
   0.8742739,
   0.9257451,
   0.9381718,
   0.950436,
   0.9745015,
   0.9979868,
   1.032213,
   1.032213,
   1.032213};
   gre = new TGraphErrors(24,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#009900");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,0.7693026,0.9161475);
   Graph_Graph1005->SetMinimum(2.544912);
   Graph_Graph1005->SetMaximum(8.531944);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   //multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[24] = {
   0.716822,
   0.716822,
   0.7252552,
   0.7252552,
   0.7390146,
   0.750111,
   0.750111,
   0.7625388,
   0.770972,
   0.770972,
   0.7789614,
   0.7887261,
   0.7887261,
   0.7936085,
   0.7989348,
   0.8109188,
   0.8109188,
   0.8224589,
   0.8339991,
   0.8339991,
   0.8397692,
   0.8490901,
   0.8557479,
   0.8619618};
   Double_t Graph_fy1006[24] = {
   3.196023,
   3.196023,
   3.500406,
   3.500406,
   3.500406,
   3.500406,
   3.500406,
   3.956981,
   4.109172,
   4.109172,
   4.261364,
   4.717938,
   4.717938,
   4.717938,
   4.87013,
   5.022321,
   5.022321,
   5.478896,
   5.783279,
   5.783279,
   6.087662,
   6.392045,
   7.000812,
   7.913961};
   Double_t Graph_fex1006[24] = {
   0.009491936,
   0.009491936,
   0.009404367,
   0.009404367,
   0.009252391,
   0.009121279,
   0.009121279,
   0.008964925,
   0.008852847,
   0.008852847,
   0.008742013,
   0.008600138,
   0.008600138,
   0.008526454,
   0.008443909,
   0.008249588,
   0.008249588,
   0.008050557,
   0.007838941,
   0.007838941,
   0.007728094,
   0.007541455,
   0.007402074,
   0.007267132};
   Double_t Graph_fey1006[24] = {
   0.6974293,
   0.6974293,
   0.7298851,
   0.7298851,
   0.7298851,
   0.7298851,
   0.7298851,
   0.7760277,
   0.7908105,
   0.7908105,
   0.805322,
   0.8473667,
   0.8473667,
   0.8473667,
   0.8609255,
   0.8742739,
   0.8742739,
   0.9131494,
   0.9381718,
   0.9381718,
   0.9625439,
   0.986314,
   1.032213,
   1.097469};
   gre = new TGraphErrors(24,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#99ff99");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#99ff99");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,0.6911402,0.8854188);
   Graph_Graph1006->SetMinimum(1.84731);
   Graph_Graph1006->SetMaximum(9.662714);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   //gre->SetHistogram(Graph_Graph1006);
   
   //multigraph->Add(gre,"");
   multigraph->Draw("Ae3");
   multigraph->SetTitle("");
   multigraph->GetXaxis()->SetTitle("Trigger efficiency");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.045);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Trigger rate [kHz]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.045);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.15,0.5,0.6,0.72,NULL,"brNDC");
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
   entry=leg->AddEntry("TriggerEffVsRate_GE11Cut_pt15_eta16to21","Phase-1+GE11(CSC+GE11): ideal detectors","f");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TriggerEffVsRate_hybrid_pt15_eta16to21","Phase-2(CSC+GE11+GE21): ideal detectors","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11","Phase-1+GE11(CSC+GE11):30 % ME11 CSC off","f");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ccccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11","Phase-2(CSC+GE11+GE21):30 % ME11 CSC off","f");

   ci = TColor::GetColor("#ffcccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   //entry=leg->AddEntry("Graph","Phase-2(CSC+GE11+GE21): good muons(70 %)","f");

   //ci = TColor::GetColor("#009900");
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#009900");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   //entry=leg->AddEntry("Graph_Graph1006","Phase-2(CSC+GE11+GE21): bad muons(30 %)","f");

   //ci = TColor::GetColor("#99ff99");
   //entry->SetFillColor(ci);
   //entry->SetFillStyle(1001);

   //ci = TColor::GetColor("#99ff99");
   //entry->SetLineColor(ci);
   //entry->SetLineStyle(1);
   //entry->SetLineWidth(1);
   //entry->SetMarkerColor(1);
   //entry->SetMarkerStyle(21);
   //entry->SetMarkerSize(1);
   //entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.15,0.4,"1.65<|#eta|<2.15, p_{T}^{L1}>15 GeV");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0,0.942,1,1,"blNDC");
   //pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText(" #scale[1.4]{#font[61]{CMS}} Phase-2 Simulation         #sqrt{s}=14 TeV, <PU>=200");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
   c1_n2->SaveAs("TriggerEffVsRate_GEMCSCBending_pt15_eta16to21_PU200_30CSCAging.png");
   c1_n2->SaveAs("TriggerEffVsRate_GEMCSCBending_pt15_eta16to21_PU200_30CSCAging.pdf");
}
