/*
 * Automatically Generated from Mathematica.
 * Mon 25 Jun 2018 14:53:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_RightToeJoint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1165;
  double t2569;
  double t2301;
  double t2337;
  double t2672;
  double t419;
  double t703;
  double t768;
  double t908;
  double t1528;
  double t2415;
  double t2679;
  double t2680;
  double t3225;
  double t3910;
  double t3922;
  double t3924;
  double t205;
  double t4002;
  double t4009;
  double t4057;
  double t4075;
  double t4083;
  double t4104;
  double t4136;
  double t4140;
  double t4145;
  double t4147;
  double t4263;
  double t4271;
  double t4274;
  double t4283;
  double t4285;
  double t4298;
  double t4312;
  double t4333;
  double t4336;
  double t4338;
  double t4361;
  double t4366;
  double t4369;
  double t4374;
  double t4383;
  double t4387;
  double t4389;
  double t4402;
  double t4413;
  double t4419;
  double t4447;
  double t4449;
  double t4456;
  double t4464;
  double t4465;
  double t4472;
  double t4483;
  double t4489;
  double t4491;
  double t4492;
  double t4500;
  double t4507;
  double t4508;
  double t4513;
  double t4516;
  double t4526;
  double t4544;
  double t4556;
  double t4557;
  double t4562;
  double t4581;
  double t4582;
  double t4587;
  double t894;
  double t958;
  double t1058;
  double t1988;
  double t2236;
  double t3356;
  double t3638;
  double t3678;
  double t3808;
  double t3935;
  double t3944;
  double t3992;
  double t4625;
  double t4626;
  double t4627;
  double t4637;
  double t4643;
  double t4648;
  double t4128;
  double t4137;
  double t4138;
  double t4659;
  double t4661;
  double t4665;
  double t4251;
  double t4252;
  double t4254;
  double t4308;
  double t4321;
  double t4329;
  double t4668;
  double t4671;
  double t4673;
  double t4688;
  double t4689;
  double t4695;
  double t4341;
  double t4347;
  double t4351;
  double t4388;
  double t4392;
  double t4396;
  double t4703;
  double t4707;
  double t4711;
  double t4719;
  double t4722;
  double t4725;
  double t4428;
  double t4436;
  double t4443;
  double t4477;
  double t4485;
  double t4487;
  double t4729;
  double t4730;
  double t4731;
  double t4738;
  double t4740;
  double t4745;
  double t4494;
  double t4495;
  double t4498;
  double t4535;
  double t4545;
  double t4548;
  double t4749;
  double t4753;
  double t4755;
  double t4767;
  double t4769;
  double t4773;
  double t4568;
  double t4571;
  double t4576;
  double t4777;
  double t4779;
  double t4781;
  double t4785;
  double t4786;
  double t4787;
  double t4823;
  double t4831;
  double t4834;
  double t4845;
  double t4846;
  double t4851;
  double t4878;
  double t4881;
  double t4884;
  double t4890;
  double t4891;
  double t4897;
  double t4904;
  double t4907;
  double t4914;
  double t4920;
  double t4921;
  double t4925;
  double t4932;
  double t4933;
  double t4934;
  double t4940;
  double t4942;
  double t4943;
  double t4946;
  double t4948;
  double t4949;
  double t4962;
  double t4964;
  double t4966;
  double t4969;
  double t4971;
  double t4974;
  double t5018;
  double t5026;
  double t5027;
  double t5035;
  double t5037;
  double t5040;
  double t5066;
  double t5070;
  double t5071;
  double t5079;
  double t5083;
  double t5085;
  double t5090;
  double t5094;
  double t5095;
  double t5112;
  double t5113;
  double t5119;
  double t5128;
  double t5130;
  double t5136;
  double t5142;
  double t5144;
  double t5145;
  double t5150;
  double t5153;
  double t5154;
  double t5164;
  double t5165;
  double t5167;
  double t5172;
  double t5173;
  double t5177;
  double t5217;
  double t5218;
  double t5219;
  double t5223;
  double t5225;
  double t5236;
  double t5255;
  double t5257;
  double t5258;
  double t5260;
  double t5264;
  double t5266;
  double t5271;
  double t5277;
  double t5285;
  double t5290;
  double t5292;
  double t5297;
  double t5302;
  double t5306;
  double t5307;
  double t5312;
  double t5316;
  double t5318;
  double t5321;
  double t5323;
  double t5324;
  double t5327;
  double t5330;
  double t5333;
  double t5335;
  double t5338;
  double t5343;
  double t5383;
  double t5391;
  double t5392;
  double t5415;
  double t5422;
  double t5402;
  double t5407;
  double t5408;
  double t5434;
  double t5436;
  double t5437;
  double t5440;
  double t5441;
  double t5442;
  double t5444;
  double t5447;
  double t5448;
  double t5456;
  double t5458;
  double t5459;
  double t5466;
  double t5467;
  double t5470;
  double t5475;
  double t5477;
  double t5478;
  double t5483;
  double t5486;
  double t5488;
  double t5494;
  double t5497;
  double t5498;
  double t5514;
  double t5517;
  double t5518;
  double t5534;
  double t5536;
  double t5537;
  double t5528;
  double t5532;
  double t5553;
  double t5555;
  double t5556;
  double t5558;
  double t5559;
  double t5561;
  double t5563;
  double t5568;
  double t5569;
  double t5576;
  double t5579;
  double t5582;
  double t5586;
  double t5591;
  double t5592;
  double t5596;
  double t5598;
  double t5599;
  double t5602;
  double t5606;
  double t5609;
  double t5612;
  double t5614;
  double t5615;
  double t5648;
  double t5651;
  double t5653;
  double t5641;
  double t5642;
  double t5644;
  double t5662;
  double t5664;
  double t5665;
  double t5668;
  double t5669;
  double t5670;
  double t5672;
  double t5673;
  double t5674;
  double t5676;
  double t5678;
  double t5679;
  double t5682;
  double t5684;
  double t5687;
  double t5691;
  double t5694;
  double t5695;
  double t5697;
  double t5700;
  double t5701;
  double t5705;
  double t5707;
  double t5708;
  double t5734;
  double t5735;
  double t5740;
  double t5741;
  double t5743;
  double t5749;
  double t5750;
  double t5753;
  double t5755;
  double t5756;
  double t5758;
  double t5760;
  double t5766;
  double t5767;
  double t5771;
  double t5772;
  double t5773;
  double t5776;
  double t5778;
  double t5779;
  double t5784;
  double t5785;
  double t5786;
  double t5790;
  double t5793;
  double t5794;
  double t5807;
  double t5809;
  double t5814;
  double t5823;
  double t5825;
  double t5817;
  double t5818;
  double t5830;
  double t5831;
  double t5832;
  double t5837;
  double t5838;
  double t5842;
  double t5849;
  double t5850;
  double t5851;
  double t5853;
  double t5854;
  double t5855;
  double t5857;
  double t5858;
  double t5859;
  double t5861;
  double t5863;
  double t5866;
  double t5869;
  double t5873;
  double t5874;
  double t5877;
  double t5878;
  double t5881;
  double t5647;
  double t5655;
  double t5659;
  double t5660;
  double t5666;
  double t5671;
  double t5675;
  double t5681;
  double t5690;
  double t5696;
  double t5702;
  double t5713;
  double t5714;
  double t5717;
  double t5718;
  double t5720;
  double t5723;
  double t5724;
  double t5726;
  double t5730;
  double t4681;
  double t4683;
  double t4686;
  double t5931;
  double t5932;
  double t5934;
  double t5937;
  double t5939;
  double t5940;
  double t5943;
  double t5944;
  double t5946;
  double t5949;
  double t5950;
  double t5951;
  double t5954;
  double t5957;
  double t5958;
  double t5960;
  double t5961;
  double t5962;
  double t5910;
  double t5911;
  double t5912;
  double t5915;
  double t5916;
  double t5974;
  double t5976;
  double t5977;
  double t5980;
  double t5981;
  double t5982;
  double t5993;
  double t5994;
  double t5995;
  double t5997;
  double t5998;
  double t5999;
  double t6001;
  double t6002;
  double t6003;
  double t6006;
  double t6009;
  double t6011;
  double t6014;
  double t6015;
  double t6016;
  double t6018;
  double t6020;
  double t6021;
  double t6036;
  double t6037;
  double t6038;
  double t6041;
  double t6042;
  double t6045;
  double t6056;
  double t6057;
  double t6058;
  double t6061;
  double t6064;
  double t6065;
  double t6067;
  double t6068;
  double t6069;
  double t6071;
  double t6072;
  double t6073;
  double t6075;
  double t6076;
  double t6077;
  double t6079;
  double t6080;
  double t6082;
  double t6103;
  double t6105;
  double t6107;
  double t6112;
  double t6113;
  double t6116;
  double t6119;
  double t6120;
  double t6122;
  double t6123;
  double t6124;
  double t6126;
  double t6127;
  double t6128;
  double t6130;
  double t6131;
  double t6133;
  double t6136;
  double t6139;
  double t6140;
  double t6096;
  double t6097;
  double t6099;
  double t6100;
  double t6101;
  double t6155;
  double t6156;
  double t6157;
  double t6159;
  double t6160;
  double t6161;
  double t6163;
  double t6164;
  double t6166;
  double t6169;
  double t6170;
  double t6171;
  double t6173;
  double t6174;
  double t6175;
  double t6177;
  double t6179;
  double t6180;
  double t6185;
  double t6186;
  double t6188;
  double t6190;
  double t6192;
  double t6193;
  double t6195;
  double t6196;
  double t6197;
  double t6215;
  double t6216;
  double t6217;
  double t6219;
  double t6220;
  double t6221;
  double t6223;
  double t6224;
  double t6225;
  double t6227;
  double t6228;
  double t6229;
  double t6232;
  double t6233;
  double t6234;
  double t6236;
  double t6237;
  double t6238;
  double t6240;
  double t6241;
  double t6242;
  double t6245;
  double t6246;
  double t6247;
  double t6249;
  double t6250;
  double t6251;
  double t6270;
  double t6271;
  double t6273;
  double t6274;
  double t6275;
  double t6277;
  double t6278;
  double t6280;
  double t6281;
  double t6282;
  double t6284;
  double t6285;
  double t6286;
  double t6262;
  double t6263;
  double t6264;
  double t6266;
  double t6267;
  double t6297;
  double t6298;
  double t6299;
  double t6302;
  double t6303;
  double t6305;
  double t6306;
  double t6308;
  double t6309;
  double t6310;
  double t6312;
  double t6313;
  double t6314;
  double t6316;
  double t6317;
  double t6318;
  double t6320;
  double t6321;
  double t6322;
  double t6333;
  double t6334;
  double t6335;
  double t6338;
  double t6339;
  double t6341;
  double t6342;
  double t6344;
  double t6345;
  double t6346;
  double t6348;
  double t6349;
  double t6350;
  double t6352;
  double t6353;
  double t6354;
  double t6356;
  double t6357;
  double t6358;
  double t6376;
  double t6377;
  double t6380;
  double t6381;
  double t6383;
  double t6384;
  double t6385;
  double t6369;
  double t6370;
  double t6372;
  double t6373;
  double t6374;
  double t6397;
  double t6398;
  double t6399;
  double t6401;
  double t6402;
  double t6404;
  double t6405;
  double t6407;
  double t6408;
  double t6409;
  double t6411;
  double t6412;
  double t6413;
  double t6425;
  double t6426;
  double t6427;
  double t6429;
  double t6430;
  double t6432;
  double t6433;
  double t6435;
  double t6436;
  double t6437;
  double t6439;
  double t6440;
  double t6441;
  double t6460;
  double t6461;
  double t4802;
  double t6452;
  double t6453;
  double t6454;
  double t6456;
  double t6457;
  double t6471;
  double t6472;
  double t6473;
  double t6476;
  double t6477;
  double t6479;
  double t6480;
  double t6491;
  double t6492;
  double t6493;
  double t6496;
  double t6497;
  double t6499;
  double t6500;
  double t6463;
  double t4804;
  double t4808;
  double t6511;
  double t6512;
  double t6514;
  double t6515;
  double t6516;
  double t6482;
  double t6524;
  double t6525;
  double t6526;
  double t6486;
  double t6502;
  double t6536;
  double t6537;
  double t6538;
  double t6506;
  t1165 = Sin(var1[3]);
  t2569 = Cos(var1[3]);
  t2301 = Cos(var1[5]);
  t2337 = Sin(var1[4]);
  t2672 = Sin(var1[5]);
  t419 = Cos(var1[14]);
  t703 = -1.*t419;
  t768 = 1. + t703;
  t908 = Sin(var1[14]);
  t1528 = Sin(var1[13]);
  t2415 = -1.*t2301*t1165*t2337;
  t2679 = t2569*t2672;
  t2680 = t2415 + t2679;
  t3225 = Cos(var1[13]);
  t3910 = -1.*t2569*t2301;
  t3922 = -1.*t1165*t2337*t2672;
  t3924 = t3910 + t3922;
  t205 = Cos(var1[4]);
  t4002 = t1528*t2680;
  t4009 = t3225*t3924;
  t4057 = t4002 + t4009;
  t4075 = Cos(var1[15]);
  t4083 = -1.*t4075;
  t4104 = 1. + t4083;
  t4136 = Sin(var1[15]);
  t4140 = t3225*t2680;
  t4145 = -1.*t1528*t3924;
  t4147 = t4140 + t4145;
  t4263 = -1.*t419*t205*t1165;
  t4271 = t908*t4057;
  t4274 = t4263 + t4271;
  t4283 = Cos(var1[16]);
  t4285 = -1.*t4283;
  t4298 = 1. + t4285;
  t4312 = Sin(var1[16]);
  t4333 = t4136*t4147;
  t4336 = t4075*t4274;
  t4338 = t4333 + t4336;
  t4361 = t4075*t4147;
  t4366 = -1.*t4136*t4274;
  t4369 = t4361 + t4366;
  t4374 = Cos(var1[17]);
  t4383 = -1.*t4374;
  t4387 = 1. + t4383;
  t4389 = Sin(var1[17]);
  t4402 = -1.*t4312*t4338;
  t4413 = t4283*t4369;
  t4419 = t4402 + t4413;
  t4447 = t4283*t4338;
  t4449 = t4312*t4369;
  t4456 = t4447 + t4449;
  t4464 = Cos(var1[18]);
  t4465 = -1.*t4464;
  t4472 = 1. + t4465;
  t4483 = Sin(var1[18]);
  t4489 = t4389*t4419;
  t4491 = t4374*t4456;
  t4492 = t4489 + t4491;
  t4500 = t4374*t4419;
  t4507 = -1.*t4389*t4456;
  t4508 = t4500 + t4507;
  t4513 = Cos(var1[19]);
  t4516 = -1.*t4513;
  t4526 = 1. + t4516;
  t4544 = Sin(var1[19]);
  t4556 = -1.*t4483*t4492;
  t4557 = t4464*t4508;
  t4562 = t4556 + t4557;
  t4581 = t4464*t4492;
  t4582 = t4483*t4508;
  t4587 = t4581 + t4582;
  t894 = -0.049*t768;
  t958 = -0.135*t908;
  t1058 = 0. + t894 + t958;
  t1988 = 0.135*t1528;
  t2236 = 0. + t1988;
  t3356 = -1.*t3225;
  t3638 = 1. + t3356;
  t3678 = -0.135*t3638;
  t3808 = 0. + t3678;
  t3935 = -0.135*t768;
  t3944 = 0.049*t908;
  t3992 = 0. + t3935 + t3944;
  t4625 = t2569*t2301*t2337;
  t4626 = t1165*t2672;
  t4627 = t4625 + t4626;
  t4637 = -1.*t2301*t1165;
  t4643 = t2569*t2337*t2672;
  t4648 = t4637 + t4643;
  t4128 = -0.09*t4104;
  t4137 = 0.049*t4136;
  t4138 = 0. + t4128 + t4137;
  t4659 = t1528*t4627;
  t4661 = t3225*t4648;
  t4665 = t4659 + t4661;
  t4251 = -0.049*t4104;
  t4252 = -0.09*t4136;
  t4254 = 0. + t4251 + t4252;
  t4308 = -0.049*t4298;
  t4321 = -0.21*t4312;
  t4329 = 0. + t4308 + t4321;
  t4668 = t3225*t4627;
  t4671 = -1.*t1528*t4648;
  t4673 = t4668 + t4671;
  t4688 = t419*t2569*t205;
  t4689 = t908*t4665;
  t4695 = t4688 + t4689;
  t4341 = -0.21*t4298;
  t4347 = 0.049*t4312;
  t4351 = 0. + t4341 + t4347;
  t4388 = -0.2707*t4387;
  t4392 = 0.0016*t4389;
  t4396 = 0. + t4388 + t4392;
  t4703 = t4136*t4673;
  t4707 = t4075*t4695;
  t4711 = t4703 + t4707;
  t4719 = t4075*t4673;
  t4722 = -1.*t4136*t4695;
  t4725 = t4719 + t4722;
  t4428 = -0.0016*t4387;
  t4436 = -0.2707*t4389;
  t4443 = 0. + t4428 + t4436;
  t4477 = 0.0184*t4472;
  t4485 = -0.7055*t4483;
  t4487 = 0. + t4477 + t4485;
  t4729 = -1.*t4312*t4711;
  t4730 = t4283*t4725;
  t4731 = t4729 + t4730;
  t4738 = t4283*t4711;
  t4740 = t4312*t4725;
  t4745 = t4738 + t4740;
  t4494 = -0.7055*t4472;
  t4495 = -0.0184*t4483;
  t4498 = 0. + t4494 + t4495;
  t4535 = -1.1135*t4526;
  t4545 = 0.0216*t4544;
  t4548 = 0. + t4535 + t4545;
  t4749 = t4389*t4731;
  t4753 = t4374*t4745;
  t4755 = t4749 + t4753;
  t4767 = t4374*t4731;
  t4769 = -1.*t4389*t4745;
  t4773 = t4767 + t4769;
  t4568 = -0.0216*t4526;
  t4571 = -1.1135*t4544;
  t4576 = 0. + t4568 + t4571;
  t4777 = -1.*t4483*t4755;
  t4779 = t4464*t4773;
  t4781 = t4777 + t4779;
  t4785 = t4464*t4755;
  t4786 = t4483*t4773;
  t4787 = t4785 + t4786;
  t4823 = t2569*t205*t2301*t1528;
  t4831 = t3225*t2569*t205*t2672;
  t4834 = t4823 + t4831;
  t4845 = t3225*t2569*t205*t2301;
  t4846 = -1.*t2569*t205*t1528*t2672;
  t4851 = t4845 + t4846;
  t4878 = -1.*t419*t2569*t2337;
  t4881 = t908*t4834;
  t4884 = t4878 + t4881;
  t4890 = t4136*t4851;
  t4891 = t4075*t4884;
  t4897 = t4890 + t4891;
  t4904 = t4075*t4851;
  t4907 = -1.*t4136*t4884;
  t4914 = t4904 + t4907;
  t4920 = -1.*t4312*t4897;
  t4921 = t4283*t4914;
  t4925 = t4920 + t4921;
  t4932 = t4283*t4897;
  t4933 = t4312*t4914;
  t4934 = t4932 + t4933;
  t4940 = t4389*t4925;
  t4942 = t4374*t4934;
  t4943 = t4940 + t4942;
  t4946 = t4374*t4925;
  t4948 = -1.*t4389*t4934;
  t4949 = t4946 + t4948;
  t4962 = -1.*t4483*t4943;
  t4964 = t4464*t4949;
  t4966 = t4962 + t4964;
  t4969 = t4464*t4943;
  t4971 = t4483*t4949;
  t4974 = t4969 + t4971;
  t5018 = t205*t2301*t1528*t1165;
  t5026 = t3225*t205*t1165*t2672;
  t5027 = t5018 + t5026;
  t5035 = t3225*t205*t2301*t1165;
  t5037 = -1.*t205*t1528*t1165*t2672;
  t5040 = t5035 + t5037;
  t5066 = -1.*t419*t1165*t2337;
  t5070 = t908*t5027;
  t5071 = t5066 + t5070;
  t5079 = t4136*t5040;
  t5083 = t4075*t5071;
  t5085 = t5079 + t5083;
  t5090 = t4075*t5040;
  t5094 = -1.*t4136*t5071;
  t5095 = t5090 + t5094;
  t5112 = -1.*t4312*t5085;
  t5113 = t4283*t5095;
  t5119 = t5112 + t5113;
  t5128 = t4283*t5085;
  t5130 = t4312*t5095;
  t5136 = t5128 + t5130;
  t5142 = t4389*t5119;
  t5144 = t4374*t5136;
  t5145 = t5142 + t5144;
  t5150 = t4374*t5119;
  t5153 = -1.*t4389*t5136;
  t5154 = t5150 + t5153;
  t5164 = -1.*t4483*t5145;
  t5165 = t4464*t5154;
  t5167 = t5164 + t5165;
  t5172 = t4464*t5145;
  t5173 = t4483*t5154;
  t5177 = t5172 + t5173;
  t5217 = -1.*t2301*t1528*t2337;
  t5218 = -1.*t3225*t2337*t2672;
  t5219 = t5217 + t5218;
  t5223 = -1.*t3225*t2301*t2337;
  t5225 = t1528*t2337*t2672;
  t5236 = t5223 + t5225;
  t5255 = -1.*t419*t205;
  t5257 = t908*t5219;
  t5258 = t5255 + t5257;
  t5260 = t4136*t5236;
  t5264 = t4075*t5258;
  t5266 = t5260 + t5264;
  t5271 = t4075*t5236;
  t5277 = -1.*t4136*t5258;
  t5285 = t5271 + t5277;
  t5290 = -1.*t4312*t5266;
  t5292 = t4283*t5285;
  t5297 = t5290 + t5292;
  t5302 = t4283*t5266;
  t5306 = t4312*t5285;
  t5307 = t5302 + t5306;
  t5312 = t4389*t5297;
  t5316 = t4374*t5307;
  t5318 = t5312 + t5316;
  t5321 = t4374*t5297;
  t5323 = -1.*t4389*t5307;
  t5324 = t5321 + t5323;
  t5327 = -1.*t4483*t5318;
  t5330 = t4464*t5324;
  t5333 = t5327 + t5330;
  t5335 = t4464*t5318;
  t5338 = t4483*t5324;
  t5343 = t5335 + t5338;
  t5383 = t2301*t1165;
  t5391 = -1.*t2569*t2337*t2672;
  t5392 = t5383 + t5391;
  t5415 = t1528*t5392;
  t5422 = t4668 + t5415;
  t5402 = -1.*t1528*t4627;
  t5407 = t3225*t5392;
  t5408 = t5402 + t5407;
  t5434 = t4136*t5408;
  t5436 = t4075*t908*t5422;
  t5437 = t5434 + t5436;
  t5440 = t4075*t5408;
  t5441 = -1.*t908*t4136*t5422;
  t5442 = t5440 + t5441;
  t5444 = -1.*t4312*t5437;
  t5447 = t4283*t5442;
  t5448 = t5444 + t5447;
  t5456 = t4283*t5437;
  t5458 = t4312*t5442;
  t5459 = t5456 + t5458;
  t5466 = t4389*t5448;
  t5467 = t4374*t5459;
  t5470 = t5466 + t5467;
  t5475 = t4374*t5448;
  t5477 = -1.*t4389*t5459;
  t5478 = t5475 + t5477;
  t5483 = -1.*t4483*t5470;
  t5486 = t4464*t5478;
  t5488 = t5483 + t5486;
  t5494 = t4464*t5470;
  t5497 = t4483*t5478;
  t5498 = t5494 + t5497;
  t5514 = t2301*t1165*t2337;
  t5517 = -1.*t2569*t2672;
  t5518 = t5514 + t5517;
  t5534 = t3225*t5518;
  t5536 = t1528*t3924;
  t5537 = t5534 + t5536;
  t5528 = -1.*t1528*t5518;
  t5532 = t5528 + t4009;
  t5553 = t4136*t5532;
  t5555 = t4075*t908*t5537;
  t5556 = t5553 + t5555;
  t5558 = t4075*t5532;
  t5559 = -1.*t908*t4136*t5537;
  t5561 = t5558 + t5559;
  t5563 = -1.*t4312*t5556;
  t5568 = t4283*t5561;
  t5569 = t5563 + t5568;
  t5576 = t4283*t5556;
  t5579 = t4312*t5561;
  t5582 = t5576 + t5579;
  t5586 = t4389*t5569;
  t5591 = t4374*t5582;
  t5592 = t5586 + t5591;
  t5596 = t4374*t5569;
  t5598 = -1.*t4389*t5582;
  t5599 = t5596 + t5598;
  t5602 = -1.*t4483*t5592;
  t5606 = t4464*t5599;
  t5609 = t5602 + t5606;
  t5612 = t4464*t5592;
  t5614 = t4483*t5599;
  t5615 = t5612 + t5614;
  t5648 = t3225*t205*t2301;
  t5651 = -1.*t205*t1528*t2672;
  t5653 = t5648 + t5651;
  t5641 = -1.*t205*t2301*t1528;
  t5642 = -1.*t3225*t205*t2672;
  t5644 = t5641 + t5642;
  t5662 = t4136*t5644;
  t5664 = t4075*t908*t5653;
  t5665 = t5662 + t5664;
  t5668 = t4075*t5644;
  t5669 = -1.*t908*t4136*t5653;
  t5670 = t5668 + t5669;
  t5672 = -1.*t4312*t5665;
  t5673 = t4283*t5670;
  t5674 = t5672 + t5673;
  t5676 = t4283*t5665;
  t5678 = t4312*t5670;
  t5679 = t5676 + t5678;
  t5682 = t4389*t5674;
  t5684 = t4374*t5679;
  t5687 = t5682 + t5684;
  t5691 = t4374*t5674;
  t5694 = -1.*t4389*t5679;
  t5695 = t5691 + t5694;
  t5697 = -1.*t4483*t5687;
  t5700 = t4464*t5695;
  t5701 = t5697 + t5700;
  t5705 = t4464*t5687;
  t5707 = t4483*t5695;
  t5708 = t5705 + t5707;
  t5734 = -1.*t3225*t4648;
  t5735 = t5402 + t5734;
  t5740 = t4136*t5735;
  t5741 = t4075*t908*t4673;
  t5743 = t5740 + t5741;
  t5749 = t4075*t5735;
  t5750 = -1.*t908*t4136*t4673;
  t5753 = t5749 + t5750;
  t5755 = -1.*t4312*t5743;
  t5756 = t4283*t5753;
  t5758 = t5755 + t5756;
  t5760 = t4283*t5743;
  t5766 = t4312*t5753;
  t5767 = t5760 + t5766;
  t5771 = t4389*t5758;
  t5772 = t4374*t5767;
  t5773 = t5771 + t5772;
  t5776 = t4374*t5758;
  t5778 = -1.*t4389*t5767;
  t5779 = t5776 + t5778;
  t5784 = -1.*t4483*t5773;
  t5785 = t4464*t5779;
  t5786 = t5784 + t5785;
  t5790 = t4464*t5773;
  t5793 = t4483*t5779;
  t5794 = t5790 + t5793;
  t5807 = t2569*t2301;
  t5809 = t1165*t2337*t2672;
  t5814 = t5807 + t5809;
  t5823 = -1.*t1528*t5814;
  t5825 = t5534 + t5823;
  t5817 = -1.*t3225*t5814;
  t5818 = t5528 + t5817;
  t5830 = t4136*t5818;
  t5831 = t4075*t908*t5825;
  t5832 = t5830 + t5831;
  t5837 = t4075*t5818;
  t5838 = -1.*t908*t4136*t5825;
  t5842 = t5837 + t5838;
  t5849 = -1.*t4312*t5832;
  t5850 = t4283*t5842;
  t5851 = t5849 + t5850;
  t5853 = t4283*t5832;
  t5854 = t4312*t5842;
  t5855 = t5853 + t5854;
  t5857 = t4389*t5851;
  t5858 = t4374*t5855;
  t5859 = t5857 + t5858;
  t5861 = t4374*t5851;
  t5863 = -1.*t4389*t5855;
  t5866 = t5861 + t5863;
  t5869 = -1.*t4483*t5859;
  t5873 = t4464*t5866;
  t5874 = t5869 + t5873;
  t5877 = t4464*t5859;
  t5878 = t4483*t5866;
  t5881 = t5877 + t5878;
  t5647 = t4138*t5644;
  t5655 = -0.1305*t419*t5653;
  t5659 = t3992*t5653;
  t5660 = t908*t4254*t5653;
  t5666 = t4329*t5665;
  t5671 = t4351*t5670;
  t5675 = t4396*t5674;
  t5681 = t4443*t5679;
  t5690 = t4487*t5687;
  t5696 = t4498*t5695;
  t5702 = t4548*t5701;
  t5713 = t4576*t5708;
  t5714 = t4544*t5701;
  t5717 = t4513*t5708;
  t5718 = t5714 + t5717;
  t5720 = -0.0216*t5718;
  t5723 = t4513*t5701;
  t5724 = -1.*t4544*t5708;
  t5726 = t5723 + t5724;
  t5730 = -1.1135*t5726;
  t4681 = -1.*t2569*t205*t908;
  t4683 = t419*t4665;
  t4686 = t4681 + t4683;
  t5931 = -1.*t4283*t4136*t4686;
  t5932 = -1.*t4075*t4312*t4686;
  t5934 = t5931 + t5932;
  t5937 = t4075*t4283*t4686;
  t5939 = -1.*t4136*t4312*t4686;
  t5940 = t5937 + t5939;
  t5943 = t4389*t5934;
  t5944 = t4374*t5940;
  t5946 = t5943 + t5944;
  t5949 = t4374*t5934;
  t5950 = -1.*t4389*t5940;
  t5951 = t5949 + t5950;
  t5954 = -1.*t4483*t5946;
  t5957 = t4464*t5951;
  t5958 = t5954 + t5957;
  t5960 = t4464*t5946;
  t5961 = t4483*t5951;
  t5962 = t5960 + t5961;
  t5910 = -0.135*t419;
  t5911 = -0.049*t908;
  t5912 = t5910 + t5911;
  t5915 = 0.049*t419;
  t5916 = t5915 + t958;
  t5974 = t1528*t5518;
  t5976 = t3225*t5814;
  t5977 = t5974 + t5976;
  t5980 = -1.*t205*t908*t1165;
  t5981 = t419*t5977;
  t5982 = t5980 + t5981;
  t5993 = -1.*t4283*t4136*t5982;
  t5994 = -1.*t4075*t4312*t5982;
  t5995 = t5993 + t5994;
  t5997 = t4075*t4283*t5982;
  t5998 = -1.*t4136*t4312*t5982;
  t5999 = t5997 + t5998;
  t6001 = t4389*t5995;
  t6002 = t4374*t5999;
  t6003 = t6001 + t6002;
  t6006 = t4374*t5995;
  t6009 = -1.*t4389*t5999;
  t6011 = t6006 + t6009;
  t6014 = -1.*t4483*t6003;
  t6015 = t4464*t6011;
  t6016 = t6014 + t6015;
  t6018 = t4464*t6003;
  t6020 = t4483*t6011;
  t6021 = t6018 + t6020;
  t6036 = t205*t2301*t1528;
  t6037 = t3225*t205*t2672;
  t6038 = t6036 + t6037;
  t6041 = t908*t2337;
  t6042 = t419*t6038;
  t6045 = t6041 + t6042;
  t6056 = -1.*t4283*t4136*t6045;
  t6057 = -1.*t4075*t4312*t6045;
  t6058 = t6056 + t6057;
  t6061 = t4075*t4283*t6045;
  t6064 = -1.*t4136*t4312*t6045;
  t6065 = t6061 + t6064;
  t6067 = t4389*t6058;
  t6068 = t4374*t6065;
  t6069 = t6067 + t6068;
  t6071 = t4374*t6058;
  t6072 = -1.*t4389*t6065;
  t6073 = t6071 + t6072;
  t6075 = -1.*t4483*t6069;
  t6076 = t4464*t6073;
  t6077 = t6075 + t6076;
  t6079 = t4464*t6069;
  t6080 = t4483*t6073;
  t6082 = t6079 + t6080;
  t6103 = -1.*t4136*t4673;
  t6105 = -1.*t4075*t4695;
  t6107 = t6103 + t6105;
  t6112 = t4312*t6107;
  t6113 = t6112 + t4730;
  t6116 = t4283*t6107;
  t6119 = -1.*t4312*t4725;
  t6120 = t6116 + t6119;
  t6122 = -1.*t4389*t6113;
  t6123 = t4374*t6120;
  t6124 = t6122 + t6123;
  t6126 = t4374*t6113;
  t6127 = t4389*t6120;
  t6128 = t6126 + t6127;
  t6130 = t4483*t6124;
  t6131 = t4464*t6128;
  t6133 = t6130 + t6131;
  t6136 = t4464*t6124;
  t6139 = -1.*t4483*t6128;
  t6140 = t6136 + t6139;
  t6096 = 0.049*t4075;
  t6097 = t6096 + t4252;
  t6099 = -0.09*t4075;
  t6100 = -0.049*t4136;
  t6101 = t6099 + t6100;
  t6155 = t419*t205*t1165;
  t6156 = t908*t5977;
  t6157 = t6155 + t6156;
  t6159 = -1.*t4136*t5825;
  t6160 = -1.*t4075*t6157;
  t6161 = t6159 + t6160;
  t6163 = t4075*t5825;
  t6164 = -1.*t4136*t6157;
  t6166 = t6163 + t6164;
  t6169 = t4312*t6161;
  t6170 = t4283*t6166;
  t6171 = t6169 + t6170;
  t6173 = t4283*t6161;
  t6174 = -1.*t4312*t6166;
  t6175 = t6173 + t6174;
  t6177 = -1.*t4389*t6171;
  t6179 = t4374*t6175;
  t6180 = t6177 + t6179;
  t6185 = t4374*t6171;
  t6186 = t4389*t6175;
  t6188 = t6185 + t6186;
  t6190 = t4483*t6180;
  t6192 = t4464*t6188;
  t6193 = t6190 + t6192;
  t6195 = t4464*t6180;
  t6196 = -1.*t4483*t6188;
  t6197 = t6195 + t6196;
  t6215 = -1.*t419*t2337;
  t6216 = t908*t6038;
  t6217 = t6215 + t6216;
  t6219 = -1.*t4136*t5653;
  t6220 = -1.*t4075*t6217;
  t6221 = t6219 + t6220;
  t6223 = t4075*t5653;
  t6224 = -1.*t4136*t6217;
  t6225 = t6223 + t6224;
  t6227 = t4312*t6221;
  t6228 = t4283*t6225;
  t6229 = t6227 + t6228;
  t6232 = t4283*t6221;
  t6233 = -1.*t4312*t6225;
  t6234 = t6232 + t6233;
  t6236 = -1.*t4389*t6229;
  t6237 = t4374*t6234;
  t6238 = t6236 + t6237;
  t6240 = t4374*t6229;
  t6241 = t4389*t6234;
  t6242 = t6240 + t6241;
  t6245 = t4483*t6238;
  t6246 = t4464*t6242;
  t6247 = t6245 + t6246;
  t6249 = t4464*t6238;
  t6250 = -1.*t4483*t6242;
  t6251 = t6249 + t6250;
  t6270 = -1.*t4283*t4711;
  t6271 = t6270 + t6119;
  t6273 = -1.*t4389*t4731;
  t6274 = t4374*t6271;
  t6275 = t6273 + t6274;
  t6277 = t4389*t6271;
  t6278 = t4767 + t6277;
  t6280 = t4483*t6275;
  t6281 = t4464*t6278;
  t6282 = t6280 + t6281;
  t6284 = t4464*t6275;
  t6285 = -1.*t4483*t6278;
  t6286 = t6284 + t6285;
  t6262 = -0.21*t4283;
  t6263 = -0.049*t4312;
  t6264 = t6262 + t6263;
  t6266 = 0.049*t4283;
  t6267 = t6266 + t4321;
  t6297 = t4136*t5825;
  t6298 = t4075*t6157;
  t6299 = t6297 + t6298;
  t6302 = -1.*t4312*t6299;
  t6303 = t6302 + t6170;
  t6305 = -1.*t4283*t6299;
  t6306 = t6305 + t6174;
  t6308 = -1.*t4389*t6303;
  t6309 = t4374*t6306;
  t6310 = t6308 + t6309;
  t6312 = t4374*t6303;
  t6313 = t4389*t6306;
  t6314 = t6312 + t6313;
  t6316 = t4483*t6310;
  t6317 = t4464*t6314;
  t6318 = t6316 + t6317;
  t6320 = t4464*t6310;
  t6321 = -1.*t4483*t6314;
  t6322 = t6320 + t6321;
  t6333 = t4136*t5653;
  t6334 = t4075*t6217;
  t6335 = t6333 + t6334;
  t6338 = -1.*t4312*t6335;
  t6339 = t6338 + t6228;
  t6341 = -1.*t4283*t6335;
  t6342 = t6341 + t6233;
  t6344 = -1.*t4389*t6339;
  t6345 = t4374*t6342;
  t6346 = t6344 + t6345;
  t6348 = t4374*t6339;
  t6349 = t4389*t6342;
  t6350 = t6348 + t6349;
  t6352 = t4483*t6346;
  t6353 = t4464*t6350;
  t6354 = t6352 + t6353;
  t6356 = t4464*t6346;
  t6357 = -1.*t4483*t6350;
  t6358 = t6356 + t6357;
  t6376 = -1.*t4374*t4745;
  t6377 = t6273 + t6376;
  t6380 = t4483*t6377;
  t6381 = t6380 + t4779;
  t6383 = t4464*t6377;
  t6384 = -1.*t4483*t4773;
  t6385 = t6383 + t6384;
  t6369 = 0.0016*t4374;
  t6370 = t6369 + t4436;
  t6372 = -0.2707*t4374;
  t6373 = -0.0016*t4389;
  t6374 = t6372 + t6373;
  t6397 = t4283*t6299;
  t6398 = t4312*t6166;
  t6399 = t6397 + t6398;
  t6401 = -1.*t4374*t6399;
  t6402 = t6308 + t6401;
  t6404 = -1.*t4389*t6399;
  t6405 = t6312 + t6404;
  t6407 = t4483*t6402;
  t6408 = t4464*t6405;
  t6409 = t6407 + t6408;
  t6411 = t4464*t6402;
  t6412 = -1.*t4483*t6405;
  t6413 = t6411 + t6412;
  t6425 = t4283*t6335;
  t6426 = t4312*t6225;
  t6427 = t6425 + t6426;
  t6429 = -1.*t4374*t6427;
  t6430 = t6344 + t6429;
  t6432 = -1.*t4389*t6427;
  t6433 = t6348 + t6432;
  t6435 = t4483*t6430;
  t6436 = t4464*t6433;
  t6437 = t6435 + t6436;
  t6439 = t4464*t6430;
  t6440 = -1.*t4483*t6433;
  t6441 = t6439 + t6440;
  t6460 = -1.*t4464*t4755;
  t6461 = t6460 + t6384;
  t4802 = t4513*t4781;
  t6452 = -0.7055*t4464;
  t6453 = 0.0184*t4483;
  t6454 = t6452 + t6453;
  t6456 = -0.0184*t4464;
  t6457 = t6456 + t4485;
  t6471 = t4389*t6303;
  t6472 = t4374*t6399;
  t6473 = t6471 + t6472;
  t6476 = -1.*t4483*t6473;
  t6477 = t6476 + t6408;
  t6479 = -1.*t4464*t6473;
  t6480 = t6479 + t6412;
  t6491 = t4389*t6339;
  t6492 = t4374*t6427;
  t6493 = t6491 + t6492;
  t6496 = -1.*t4483*t6493;
  t6497 = t6496 + t6436;
  t6499 = -1.*t4464*t6493;
  t6500 = t6499 + t6440;
  t6463 = -1.*t4544*t4781;
  t4804 = -1.*t4544*t4787;
  t4808 = t4802 + t4804;
  t6511 = 0.0216*t4513;
  t6512 = t6511 + t4571;
  t6514 = -1.1135*t4513;
  t6515 = -0.0216*t4544;
  t6516 = t6514 + t6515;
  t6482 = -1.*t4544*t6477;
  t6524 = t4464*t6473;
  t6525 = t4483*t6405;
  t6526 = t6524 + t6525;
  t6486 = t4513*t6477;
  t6502 = -1.*t4544*t6497;
  t6536 = t4464*t6493;
  t6537 = t4483*t6433;
  t6538 = t6536 + t6537;
  t6506 = t4513*t6497;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1058*t1165*t205 + t2236*t2680 + t3808*t3924 + t3992*t4057 + t4138*t4147 + t4254*t4274 + t4329*t4338 + t4351*t4369 + t4396*t4419 + t4443*t4456 + t4487*t4492 + t4498*t4508 + t4548*t4562 + t4576*t4587 - 0.0216*(t4544*t4562 + t4513*t4587) - 1.1135*(t4513*t4562 - 1.*t4544*t4587) - 0.1305*(t4057*t419 + t1165*t205*t908);
  p_output1[10]=t1058*t205*t2569 + t2236*t4627 + t3808*t4648 + t3992*t4665 + t4138*t4673 - 0.1305*t4686 + t4254*t4695 + t4329*t4711 + t4351*t4725 + t4396*t4731 + t4443*t4745 + t4487*t4755 + t4498*t4773 + t4548*t4781 + t4576*t4787 - 0.0216*(t4544*t4781 + t4513*t4787) - 1.1135*t4808;
  p_output1[11]=0;
  p_output1[12]=t205*t2236*t2301*t2569 - 1.*t1058*t2337*t2569 + t205*t2569*t2672*t3808 + t3992*t4834 + t4138*t4851 + t4254*t4884 + t4329*t4897 + t4351*t4914 + t4396*t4925 + t4443*t4934 + t4487*t4943 + t4498*t4949 + t4548*t4966 + t4576*t4974 - 0.0216*(t4544*t4966 + t4513*t4974) - 1.1135*(t4513*t4966 - 1.*t4544*t4974) - 0.1305*(t419*t4834 + t2337*t2569*t908);
  p_output1[13]=t1165*t205*t2236*t2301 - 1.*t1058*t1165*t2337 + t1165*t205*t2672*t3808 + t3992*t5027 + t4138*t5040 + t4254*t5071 + t4329*t5085 + t4351*t5095 + t4396*t5119 + t4443*t5136 + t4487*t5145 + t4498*t5154 + t4548*t5167 + t4576*t5177 - 0.0216*(t4544*t5167 + t4513*t5177) - 1.1135*(t4513*t5167 - 1.*t4544*t5177) - 0.1305*(t419*t5027 + t1165*t2337*t908);
  p_output1[14]=-1.*t1058*t205 - 1.*t2236*t2301*t2337 - 1.*t2337*t2672*t3808 + t3992*t5219 + t4138*t5236 + t4254*t5258 + t4329*t5266 + t4351*t5285 + t4396*t5297 + t4443*t5307 + t4487*t5318 + t4498*t5324 + t4548*t5333 + t4576*t5343 - 0.0216*(t4544*t5333 + t4513*t5343) - 1.1135*(t4513*t5333 - 1.*t4544*t5343) - 0.1305*(t419*t5219 + t205*t908);
  p_output1[15]=t3808*t4627 + t2236*t5392 + t4138*t5408 + t3992*t5422 - 0.1305*t419*t5422 + t4329*t5437 + t4351*t5442 + t4396*t5448 + t4443*t5459 + t4487*t5470 + t4498*t5478 + t4548*t5488 + t4576*t5498 - 0.0216*(t4544*t5488 + t4513*t5498) - 1.1135*(t4513*t5488 - 1.*t4544*t5498) + t4254*t5422*t908;
  p_output1[16]=t2236*t3924 + t3808*t5518 + t4138*t5532 + t3992*t5537 - 0.1305*t419*t5537 + t4329*t5556 + t4351*t5561 + t4396*t5569 + t4443*t5582 + t4487*t5592 + t4498*t5599 + t4548*t5609 + t4576*t5615 - 0.0216*(t4544*t5609 + t4513*t5615) - 1.1135*(t4513*t5609 - 1.*t4544*t5615) + t4254*t5537*t908;
  p_output1[17]=-1.*t205*t2236*t2672 + t205*t2301*t3808 + t5647 + t5655 + t5659 + t5660 + t5666 + t5671 + t5675 + t5681 + t5690 + t5696 + t5702 + t5713 + t5720 + t5730;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t3225*t4627 - 0.135*t1528*t4648 + t3992*t4673 - 0.1305*t419*t4673 + t4138*t5735 + t4329*t5743 + t4351*t5753 + t4396*t5758 + t4443*t5767 + t4487*t5773 + t4498*t5779 + t4548*t5786 + t4576*t5794 - 0.0216*(t4544*t5786 + t4513*t5794) - 1.1135*(t4513*t5786 - 1.*t4544*t5794) + t4254*t4673*t908;
  p_output1[40]=0.135*t3225*t5518 - 0.135*t1528*t5814 + t4138*t5818 + t3992*t5825 - 0.1305*t419*t5825 + t4329*t5832 + t4351*t5842 + t4396*t5851 + t4443*t5855 + t4487*t5859 + t4498*t5866 + t4548*t5874 + t4576*t5881 - 0.0216*(t4544*t5874 + t4513*t5881) - 1.1135*(t4513*t5874 - 1.*t4544*t5881) + t4254*t5825*t908;
  p_output1[41]=-0.135*t1528*t205*t2672 + 0.135*t205*t2301*t3225 + t5647 + t5655 + t5659 + t5660 + t5666 + t5671 + t5675 + t5681 + t5690 + t5696 + t5702 + t5713 + t5720 + t5730;
  p_output1[42]=t4254*t4686 + t4075*t4329*t4686 - 1.*t4136*t4351*t4686 + t205*t2569*t5912 + t4665*t5916 + t4396*t5934 + t4443*t5940 + t4487*t5946 + t4498*t5951 + t4548*t5958 + t4576*t5962 - 0.0216*(t4544*t5958 + t4513*t5962) - 1.1135*(t4513*t5958 - 1.*t4544*t5962) - 0.1305*(-1.*t205*t2569*t419 - 1.*t4665*t908);
  p_output1[43]=t1165*t205*t5912 + t5916*t5977 + t4254*t5982 + t4075*t4329*t5982 - 1.*t4136*t4351*t5982 + t4396*t5995 + t4443*t5999 + t4487*t6003 + t4498*t6011 + t4548*t6016 + t4576*t6021 - 0.0216*(t4544*t6016 + t4513*t6021) - 1.1135*(t4513*t6016 - 1.*t4544*t6021) - 0.1305*(t4263 - 1.*t5977*t908);
  p_output1[44]=-1.*t2337*t5912 + t5916*t6038 + t4254*t6045 + t4075*t4329*t6045 - 1.*t4136*t4351*t6045 + t4396*t6058 + t4443*t6065 + t4487*t6069 + t4498*t6073 + t4548*t6077 + t4576*t6082 - 0.0216*(t4544*t6077 + t4513*t6082) - 1.1135*(t4513*t6077 - 1.*t4544*t6082) - 0.1305*(t2337*t419 - 1.*t6038*t908);
  p_output1[45]=t4329*t4725 + t4673*t6097 + t4695*t6101 + t4351*t6107 + t4443*t6113 + t4396*t6120 + t4498*t6124 + t4487*t6128 + t4576*t6133 + t4548*t6140 - 1.1135*(-1.*t4544*t6133 + t4513*t6140) - 0.0216*(t4513*t6133 + t4544*t6140);
  p_output1[46]=t5825*t6097 + t6101*t6157 + t4351*t6161 + t4329*t6166 + t4443*t6171 + t4396*t6175 + t4498*t6180 + t4487*t6188 + t4576*t6193 + t4548*t6197 - 1.1135*(-1.*t4544*t6193 + t4513*t6197) - 0.0216*(t4513*t6193 + t4544*t6197);
  p_output1[47]=t5653*t6097 + t6101*t6217 + t4351*t6221 + t4329*t6225 + t4443*t6229 + t4396*t6234 + t4498*t6238 + t4487*t6242 + t4576*t6247 + t4548*t6251 - 1.1135*(-1.*t4544*t6247 + t4513*t6251) - 0.0216*(t4513*t6247 + t4544*t6251);
  p_output1[48]=t4443*t4731 + t4711*t6264 + t4725*t6267 + t4396*t6271 + t4498*t6275 + t4487*t6278 + t4576*t6282 + t4548*t6286 - 1.1135*(-1.*t4544*t6282 + t4513*t6286) - 0.0216*(t4513*t6282 + t4544*t6286);
  p_output1[49]=t6166*t6267 + t6264*t6299 + t4443*t6303 + t4396*t6306 + t4498*t6310 + t4487*t6314 + t4576*t6318 + t4548*t6322 - 1.1135*(-1.*t4544*t6318 + t4513*t6322) - 0.0216*(t4513*t6318 + t4544*t6322);
  p_output1[50]=t6225*t6267 + t6264*t6335 + t4443*t6339 + t4396*t6342 + t4498*t6346 + t4487*t6350 + t4576*t6354 + t4548*t6358 - 1.1135*(-1.*t4544*t6354 + t4513*t6358) - 0.0216*(t4513*t6354 + t4544*t6358);
  p_output1[51]=t4487*t4773 + t4731*t6370 + t4745*t6374 + t4498*t6377 + t4576*t6381 + t4548*t6385 - 1.1135*(-1.*t4544*t6381 + t4513*t6385) - 0.0216*(t4513*t6381 + t4544*t6385);
  p_output1[52]=t6303*t6370 + t6374*t6399 + t4498*t6402 + t4487*t6405 + t4576*t6409 + t4548*t6413 - 1.1135*(-1.*t4544*t6409 + t4513*t6413) - 0.0216*(t4513*t6409 + t4544*t6413);
  p_output1[53]=t6339*t6370 + t6374*t6427 + t4498*t6430 + t4487*t6433 + t4576*t6437 + t4548*t6441 - 1.1135*(-1.*t4544*t6437 + t4513*t6441) - 0.0216*(t4513*t6437 + t4544*t6441);
  p_output1[54]=t4576*t4781 + t4755*t6454 + t4773*t6457 + t4548*t6461 - 0.0216*(t4802 + t4544*t6461) - 1.1135*(t4513*t6461 + t6463);
  p_output1[55]=t6405*t6457 + t6454*t6473 + t4576*t6477 + t4548*t6480 - 1.1135*(t4513*t6480 + t6482) - 0.0216*(t4544*t6480 + t6486);
  p_output1[56]=t6433*t6457 + t6454*t6493 + t4576*t6497 + t4548*t6500 - 1.1135*(t4513*t6500 + t6502) - 0.0216*(t4544*t6500 + t6506);
  p_output1[57]=-0.0216*t4808 - 1.1135*(-1.*t4513*t4787 + t6463) + t4781*t6512 + t4787*t6516;
  p_output1[58]=t6477*t6512 + t6516*t6526 - 1.1135*(t6482 - 1.*t4513*t6526) - 0.0216*(t6486 - 1.*t4544*t6526);
  p_output1[59]=t6497*t6512 + t6516*t6538 - 1.1135*(t6502 - 1.*t4513*t6538) - 0.0216*(t6506 - 1.*t4544*t6538);
}



void J_RightToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}