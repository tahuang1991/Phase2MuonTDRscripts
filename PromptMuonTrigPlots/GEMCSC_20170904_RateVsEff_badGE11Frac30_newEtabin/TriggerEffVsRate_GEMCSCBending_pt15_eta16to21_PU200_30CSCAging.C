void TriggerEffVsRate_GEMCSCBending_pt15_eta16to21_PU200_30CSCAging()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Sep  4 20:10:43 2017) by ROOT version6.08/06
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0.6618721,-6.888077,0.9438453,46.09713);
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
   0.766226,
   0.7675781,
   0.7741887,
   0.7783954,
   0.7892127,
   0.8003305,
   0.8031851,
   0.8105469,
   0.8165565,
   0.8201623,
   0.8255709,
   0.8326322,
   0.8350361,
   0.8402945,
   0.8440505,
   0.8479567,
   0.8535156,
   0.8611779,
   0.8655349,
   0.8727464,
   0.8771034,
   0.882512,
   0.886268,
   0.8913762};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fy1001[24] = {
   6.696429,
   6.696429,
   7.000812,
   7.000812,
   7.000812,
   7.153003,
   7.305195,
   7.913961,
   7.913961,
   7.913961,
   8.218344,
   8.979302,
   8.979302,
   9.283685,
   9.283685,
   9.588068,
   10.04464,
   10.65341,
   11.10998,
   11.41437,
   12.02313,
   12.78409,
   13.24067,
   14.15381};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fex1001[24] = {
   0.005187641,
   0.005177178,
   0.00512495,
   0.005090763,
   0.004999339,
   0.004899862,
   0.004873379,
   0.004803229,
   0.004743923,
   0.004707428,
   0.00465136,
   0.004575683,
   0.004549257,
   0.004490235,
   0.004447025,
   0.004401126,
   0.004334058,
   0.00423808,
   0.004181581,
   0.004084815,
   0.004024285,
   0.003946848,
   0.003891501,
   0.00381405};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11_fey1001[24] = {
   1.009525,
   1.009525,
   1.032213,
   1.032213,
   1.032213,
   1.043373,
   1.054414,
   1.097469,
   1.097469,
   1.097469,
   1.118375,
   1.169006,
   1.169006,
   1.188654,
   1.188654,
   1.207983,
   1.23641,
   1.273326,
   1.300325,
   1.318018,
   1.352708,
   1.394859,
   1.419548,
   1.467682};
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
   
   TH1F *Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001 = new TH1F("Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001","Graph",100,0.7476231,0.9086054);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->SetMinimum(4.693445);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to21_badGE111001->SetMaximum(16.61496);
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
   0.774236,
   0.7957903,
   0.7957903,
   0.7957903,
   0.8014572,
   0.8014572,
   0.8155232,
   0.8155232,
   0.818559,
   0.818559,
   0.8282736,
   0.8282736,
   0.8310059,
   0.8387978,
   0.8387978,
   0.845173,
   0.8468933,
   0.8502327,
   0.8512447,
   0.8542805,
   0.8568104,
   0.8586319,
   0.860251,
   0.862882};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_fy1002[24] = {
   7.153003,
   7.761769,
   7.761769,
   7.761769,
   7.761769,
   7.761769,
   8.218344,
   8.218344,
   8.218344,
   8.218344,
   8.522727,
   8.522727,
   8.522727,
   8.979302,
   8.979302,
   10.04464,
   10.19683,
   10.65341,
   11.10998,
   11.26218,
   11.71875,
   12.47971,
   12.47971,
   12.78409};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_fex1002[24] = {
   0.004205732,
   0.004055226,
   0.004055226,
   0.004055226,
   0.004012775,
   0.004012775,
   0.003901815,
   0.003901815,
   0.003876772,
   0.003876772,
   0.003793875,
   0.003793875,
   0.003769775,
   0.003699063,
   0.003699063,
   0.00363893,
   0.003622338,
   0.003589673,
   0.003579654,
   0.00354925,
   0.003523512,
   0.003504748,
   0.003487904,
   0.003460194};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_fey1002[24] = {
   1.043373,
   1.086865,
   1.086865,
   1.086865,
   1.086865,
   1.086865,
   1.118375,
   1.118375,
   1.118375,
   1.118375,
   1.138897,
   1.138897,
   1.138897,
   1.169006,
   1.169006,
   1.23641,
   1.245742,
   1.273326,
   1.300325,
   1.309201,
   1.335476,
   1.378153,
   1.378153,
   1.394859};
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
   
   TH1F *Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002 = new TH1F("Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002","Graph",100,0.7603991,0.8759734);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->SetMinimum(5.302699);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to211002->SetMaximum(14.98588);
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
   0.7838041,
   0.7874099,
   0.792518,
   0.7955228,
   0.804988,
   0.8153546,
   0.8204627,
   0.82497,
   0.8302284,
   0.8342849,
   0.8386418,
   0.844351,
   0.8473558,
   0.8538161,
   0.8560697,
   0.8575721,
   0.8643329,
   0.8713942,
   0.8724459,
   0.8823618,
   0.8861178,
   0.8901743,
   0.8925781,
   0.8978365};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_fy1003[24] = {
   4.261364,
   4.565747,
   4.565747,
   4.565747,
   4.717938,
   5.022321,
   5.174513,
   5.174513,
   5.326705,
   5.326705,
   5.478896,
   5.783279,
   5.783279,
   6.087662,
   6.392045,
   6.392045,
   7.153003,
   7.305195,
   7.609578,
   8.066153,
   8.522727,
   8.979302,
   9.283685,
   9.588068};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_fex1003[24] = {
   0.005045693,
   0.005014935,
   0.004970363,
   0.004943586,
   0.004856448,
   0.004755935,
   0.004704355,
   0.00465767,
   0.004601768,
   0.004557552,
   0.004508967,
   0.004443529,
   0.004408252,
   0.004330373,
   0.004302531,
   0.00428377,
   0.00419731,
   0.004103278,
   0.004088931,
   0.003949034,
   0.003893741,
   0.003832506,
   0.003795446,
   0.003712272};
   Double_t TriggerEffVsRate_hybrid_pt15_eta16to21_fey1003[24] = {
   0.805322,
   0.8335875,
   0.8335875,
   0.8335875,
   0.8473667,
   0.8742739,
   0.8874217,
   0.8874217,
   0.9003774,
   0.9003774,
   0.9131494,
   0.9381718,
   0.9381718,
   0.9625439,
   0.986314,
   0.986314,
   1.043373,
   1.054414,
   1.076157,
   1.107971,
   1.138897,
   1.169006,
   1.188654,
   1.207983};
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
   
   TH1F *Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003 = new TH1F("Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003","Graph",100,0.7664794,0.9138279);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->SetMinimum(2.722041);
   Graph_TriggerEffVsRate_hybrid_pt15_eta16to211003->SetMaximum(11.53005);
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
   0.804493,
   0.8200769,
   0.8200769,
   0.8200769,
   0.8238211,
   0.8238211,
   0.8324226,
   0.8324226,
   0.8347501,
   0.8347501,
   0.8414289,
   0.8414289,
   0.8431492,
   0.8483101,
   0.8483101,
   0.8526614,
   0.8537745,
   0.8563044,
   0.8570128,
   0.8593402,
   0.8609593,
   0.8620725,
   0.8632868,
   0.8652095};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fy1004[24] = {
   32.87338,
   33.02557,
   33.02557,
   33.02557,
   33.02557,
   33.02557,
   33.48214,
   33.48214,
   33.48214,
   33.48214,
   33.63433,
   33.63433,
   33.63433,
   33.93872,
   33.93872,
   34.54748,
   34.69968,
   35.00406,
   35.30844,
   35.30844,
   35.61282,
   35.76502,
   35.76502,
   35.76502};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fex1004[24] = {
   0.003989513,
   0.0038641,
   0.0038641,
   0.0038641,
   0.003832401,
   0.003832401,
   0.003757139,
   0.003757139,
   0.003736169,
   0.003736169,
   0.003674501,
   0.003674501,
   0.003658249,
   0.003608555,
   0.003608555,
   0.00356553,
   0.003554354,
   0.003528689,
   0.003521437,
   0.003497398,
   0.003480486,
   0.003468766,
   0.003455894,
   0.003435326};
   Double_t TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11_fey1004[24] = {
   2.23675,
   2.241922,
   2.241922,
   2.241922,
   2.241922,
   2.241922,
   2.257366,
   2.257366,
   2.257366,
   2.257366,
   2.26249,
   2.26249,
   2.26249,
   2.272705,
   2.272705,
   2.292997,
   2.298042,
   2.308099,
   2.318113,
   2.318113,
   2.328083,
   2.333052,
   2.333052,
   2.333052};
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
   
   TH1F *Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004 = new TH1F("Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004","Graph",100,0.7936894,0.8754589);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->SetMinimum(29.89048);
   Graph_TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE111004->SetMaximum(38.84421);
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
   0.7868888,
   0.788836,
   0.7944613,
   0.8005193,
   0.8096062,
   0.8206404,
   0.8247512,
   0.829511,
   0.8342709,
   0.8394634,
   0.8437906,
   0.8491995,
   0.8526612,
   0.8582865,
   0.8613154,
   0.8613154,
   0.8693206,
   0.8751623,
   0.8760277,
   0.8864128,
   0.8900909,
   0.8937689,
   0.8965816,
   0.9013414};
   Double_t Graph_fy1005[24] = {
   3.652597,
   3.652597,
   3.652597,
   3.652597,
   3.652597,
   3.804789,
   3.956981,
   4.109172,
   4.109172,
   4.109172,
   4.261364,
   4.565747,
   4.565747,
   4.87013,
   4.717938,
   4.87013,
   5.326705,
   5.478896,
   5.631088,
   5.935471,
   6.239854,
   6.696429,
   6.696429,
   6.696429};
   Double_t Graph_fex1005[24] = {
   0.006023444,
   0.006003276,
   0.005943855,
   0.005877889,
   0.005774951,
   0.005643178,
   0.005592089,
   0.005531517,
   0.005469379,
   0.005399741,
   0.005340181,
   0.005263702,
   0.00521353,
   0.005129876,
   0.005083703,
   0.005083703,
   0.00495768,
   0.004861858,
   0.004847371,
   0.004667322,
   0.004600649,
   0.00453235,
   0.004478978,
   0.004386288};
   Double_t Graph_fey1005[24] = {
   0.7455833,
   0.7455833,
   0.7455833,
   0.7455833,
   0.7455833,
   0.7609578,
   0.7760277,
   0.7908105,
   0.7908105,
   0.7908105,
   0.805322,
   0.8335875,
   0.8335875,
   0.8609255,
   0.8473667,
   0.8609255,
   0.9003774,
   0.9131494,
   0.9257451,
   0.950436,
   0.9745015,
   1.009525,
   1.009525,
   1.009525};
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
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,0.7683791,0.9182139);
   Graph_Graph1005->SetMinimum(2.42712);
   Graph_Graph1005->SetMaximum(8.185847);
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
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[24] = {
   0.7173058,
   0.7173058,
   0.7261554,
   0.7261554,
   0.7409046,
   0.7522124,
   0.7522124,
   0.7649951,
   0.7738446,
   0.7738446,
   0.7817109,
   0.792527,
   0.792527,
   0.7969518,
   0.8023599,
   0.8151426,
   0.8151426,
   0.826942,
   0.839233,
   0.839233,
   0.8451327,
   0.8544739,
   0.8603736,
   0.8662734};
   Double_t Graph_fy1006[24] = {
   3.043831,
   3.043831,
   3.348214,
   3.348214,
   3.348214,
   3.348214,
   3.348214,
   3.804789,
   3.804789,
   3.804789,
   3.956981,
   4.413555,
   4.413555,
   4.413555,
   4.565747,
   4.717938,
   4.717938,
   5.174513,
   5.478896,
   5.478896,
   5.783279,
   6.087662,
   6.544237,
   7.457386};
   Double_t Graph_fex1006[24] = {
   0.009984703,
   0.009984703,
   0.009887612,
   0.009887612,
   0.009714837,
   0.009572702,
   0.009572702,
   0.009401395,
   0.009275874,
   0.009275874,
   0.009159328,
   0.00899109,
   0.00899109,
   0.008919492,
   0.008829715,
   0.008607158,
   0.008607158,
   0.00838799,
   0.008144496,
   0.008144496,
   0.008021707,
   0.007818876,
   0.00768514,
   0.007546768};
   Double_t Graph_fey1006[24] = {
   0.6806213,
   0.6806213,
   0.7138417,
   0.7138417,
   0.7138417,
   0.7138417,
   0.7138417,
   0.7609578,
   0.7609578,
   0.7609578,
   0.7760277,
   0.8195766,
   0.8195766,
   0.8195766,
   0.8335875,
   0.8473667,
   0.8473667,
   0.8874217,
   0.9131494,
   0.9131494,
   0.9381718,
   0.9625439,
   0.9979868,
   1.065341};
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
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,0.6906712,0.89047);
   Graph_Graph1006->SetMinimum(1.747258);
   Graph_Graph1006->SetMaximum(9.138679);
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
   gre->SetHistogram(Graph_Graph1006);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("L1 Trigger efficiency");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("L1 Trigger rate [kHz]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.15,0.64,0.6,0.9,NULL,"brNDC");
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
   entry=leg->AddEntry("TriggerEffVsRate_GE11Cut_pt15_eta16to21","Phase-1+GE11(CSC+GE11)","f");

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
   entry=leg->AddEntry("TriggerEffVsRate_hybrid_pt15_eta16to21","Phase-2(CSC+GE11+GE21)","f");

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
   entry=leg->AddEntry("TriggerEffVsRate_GE11Cut_pt15_eta16to21_badGE11","Phase-1+GE11(CSC+GE11):30 % ME11 off","f");

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
   entry=leg->AddEntry("TriggerEffVsRate_hybrid_pt15_eta16to21_badGE11","Phase-2(CSC+GE11+GE21):30 % ME11 off","f");

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
   entry=leg->AddEntry("Graph","Phase-2(CSC+GE11+GE21): good muons(70 %)","f");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Phase-2(CSC+GE11+GE21): bad muons(30 %)","f");

   ci = TColor::GetColor("#99ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#99ff99");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.15,0.55,"1.65<|#eta|<2.10, p_{T}^{L1}>15 GeV");
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
