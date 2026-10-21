/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0200aa(int);
int FUN_0c077210(int, int);
int GetAverageAngle(int, int, float);
int Psg_SetMoveSpeed(int, float);
int Psg_SetPosPtr(int, int);
int Sound_Request(int, int);
int kmiFlipVertexBuffer(int);
int kmiWriteRegister(int, int);
int kyakuTaskStart(int, int);
int nd_CarSelMain(int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPrintf(int, ...);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int exec_KyakuMain(float f4);
int kmiStartRenderTextureEntry(int a4);
float psgRunToPoint(int a4, int a5);

int exec_KyakuMain(float f4)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t10;
    int t11;
    int t3;
    int t4;
    int t5;
    int t16;
    int t22;
    int t27;
    int t28;
    int t23;
    int t24;
    int t34;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    float u44;
    int t45;
    int t2419;
    int t2420;
    int t2421;
    int t2422;
    int t2423;
    int t2424;
    float u2425;
    float u2426;
    float u2427;
    int t1450;
    int t1451;
    int t1452;
    int t1453;
    int t1454;
    int t1455;
    float u1456;
    float u1457;
    float u1458;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t108;
    int t109;
    int t110;
    int t157;
    int t158;
    int t159;
    int t206;
    int t207;
    int t208;
    int t255;
    int t256;
    int t257;
    int t304;
    int t305;
    int t306;
    int t366;
    int t367;
    int t368;
    int t369;
    int t370;
    int t371;
    int t372;
    int t373;
    int t374;
    int t423;
    int t424;
    int t425;
    int t472;
    int t473;
    int t474;
    int t521;
    int t522;
    int t523;
    int t570;
    int t571;
    int t572;
    int t619;
    int t620;
    int t621;
    int t679;
    int t680;
    int t681;
    int t682;
    int t683;
    int t684;
    int t685;
    int t686;
    int t687;
    int t688;
    int t737;
    int t738;
    int t739;
    int t786;
    int t787;
    int t788;
    int t835;
    int t836;
    int t837;
    int t884;
    int t885;
    int t886;
    int t933;
    int t934;
    int t935;
    int t1006;
    int t1007;
    int t1008;
    int t1009;
    int t1010;
    int t1011;
    int t1012;
    int t1013;
    int t1014;
    int t1015;
    int t1064;
    int t1065;
    int t1066;
    int t1113;
    int t1114;
    int t1115;
    int t1162;
    int t1163;
    int t1164;
    int t1211;
    int t1212;
    int t1213;
    int t1260;
    int t1261;
    int t1262;
    int t1333;
    int t1334;
    int t1335;
    int t1382;
    int t1398;
    int t1460;
    int t1461;
    int t1462;
    int t1463;
    int t1464;
    int t1465;
    int t1467;
    int t1468;
    int t1634;
    int t1635;
    float u1639;
    float u1640;
    float u1641;
    int t1472;
    int t1473;
    int t1474;
    int t1475;
    int t1476;
    int t1477;
    float t1478;
    int t1479;
    int t1480;
    int t1481;
    int t1482;
    int t1483;
    int t1494;
    int t1495;
    float u1496;
    float u1497;
    float u1498;
    float u1484;
    float u1500;
    int t1516;
    int t1526;
    float u1527;
    float u1528;
    float u1529;
    float u1517;
    int t1546;
    int t1547;
    int t1548;
    int t1559;
    int t1560;
    float u1561;
    float u1563;
    float u1549;
    float u1565;
    int t1581;
    int t1591;
    float u1592;
    float u1594;
    float u1582;
    int t1610;
    float u1621;
    float u1623;
    float u1611;
    int t1643;
    int t2010;
    int t2011;
    int t2012;
    int t2013;
    int t2014;
    int t2015;
    float u2016;
    float u2017;
    float u2018;
    int t1644;
    int t1817;
    int t1818;
    int t1819;
    int t1820;
    int t1821;
    int t1822;
    float u1823;
    float u1824;
    float u1825;
    int t1807;
    int t1808;
    float u1812;
    float u1813;
    float u1814;
    int t1645;
    int t1646;
    int t1647;
    int t1648;
    int t1649;
    int t1650;
    float t1651;
    int t1652;
    int t1653;
    int t1654;
    int t1655;
    int t1656;
    int t1667;
    int t1668;
    float u1669;
    float u1670;
    float u1671;
    float u1657;
    float u1673;
    int t1689;
    int t1699;
    float u1700;
    float u1701;
    float u1702;
    float u1690;
    int t1719;
    int t1720;
    int t1721;
    int t1732;
    int t1733;
    float u1734;
    float u1736;
    float u1722;
    float u1738;
    int t1754;
    int t1764;
    float u1765;
    float u1767;
    float u1755;
    int t1783;
    float u1794;
    float u1796;
    float u1784;
    int t1989;
    int t1990;
    float u1994;
    float u1995;
    float u1996;
    int t1827;
    int t1828;
    int t1829;
    int t1830;
    int t1831;
    int t1832;
    float t1833;
    int t1834;
    int t1835;
    int t1836;
    int t1837;
    int t1838;
    int t1849;
    int t1850;
    float u1851;
    float u1852;
    float u1853;
    float u1839;
    float u1855;
    int t1871;
    int t1881;
    float u1882;
    float u1883;
    float u1884;
    float u1872;
    int t1901;
    int t1902;
    int t1903;
    int t1914;
    int t1915;
    float u1916;
    float u1918;
    float u1904;
    float u1920;
    int t1936;
    int t1946;
    float u1947;
    float u1949;
    float u1937;
    int t1965;
    float u1976;
    float u1978;
    float u1966;
    int t2020;
    int t2193;
    int t2194;
    int t2195;
    int t2196;
    int t2197;
    int t2198;
    float u2199;
    float u2200;
    float u2201;
    int t2183;
    int t2184;
    float u2188;
    float u2189;
    float u2190;
    int t2021;
    int t2022;
    int t2023;
    int t2024;
    int t2025;
    int t2026;
    float t2027;
    int t2028;
    int t2029;
    int t2030;
    int t2031;
    int t2032;
    int t2043;
    int t2044;
    float u2045;
    float u2046;
    float u2047;
    float u2033;
    float u2049;
    int t2065;
    int t2075;
    float u2076;
    float u2077;
    float u2078;
    float u2066;
    int t2095;
    int t2096;
    int t2097;
    int t2108;
    int t2109;
    float u2110;
    float u2112;
    float u2098;
    float u2114;
    int t2130;
    int t2140;
    float u2141;
    float u2143;
    float u2131;
    int t2159;
    float u2170;
    float u2172;
    float u2160;
    int t2365;
    int t2366;
    float u2370;
    float u2371;
    float u2372;
    int t2203;
    int t2204;
    int t2205;
    int t2206;
    int t2207;
    int t2208;
    float t2209;
    int t2210;
    int t2211;
    int t2212;
    int t2213;
    int t2214;
    int t2225;
    int t2226;
    float u2227;
    float u2228;
    float u2229;
    float u2215;
    float u2231;
    int t2247;
    int t2257;
    float u2258;
    float u2259;
    float u2260;
    float u2248;
    int t2277;
    int t2278;
    int t2279;
    int t2290;
    int t2291;
    float u2292;
    float u2294;
    float u2280;
    float u2296;
    int t2312;
    int t2322;
    float u2323;
    float u2325;
    float u2313;
    int t2341;
    float u2352;
    float u2354;
    float u2342;
    int t2441;
    int t2442;
    int t2443;
    int t2444;
    int t2445;
    int t30;
    int t31;
    int t32;
    int t18;
    int t19;
    int t20;
    int t12;
    int t13;
    int t14;
    int t7;
    int t8;
    int t35;
    float u42;
    float u43;
    int t2408;
    int t2409;
    int t2410;
    int t2411;
    int t2412;
    int t2413;
    float u2414;
    float u2415;
    float u2416;
    int t1439;
    int t1440;
    int t1441;
    int t1442;
    int t1443;
    int t1444;
    float u1445;
    float u1446;
    float u1447;
    int t1372;
    int t1373;
    int t1374;
    int t1375;
    int t1376;
    int t1377;
    float u1378;
    float u1379;
    float u1380;
    int t1323;
    int t1324;
    int t1325;
    int t1326;
    int t1327;
    int t1328;
    float u1329;
    float u1330;
    float u1331;
    int t996;
    int t997;
    int t998;
    int t999;
    int t1000;
    int t1001;
    float u1002;
    float u1003;
    float u1004;
    int t669;
    int t670;
    int t671;
    int t672;
    int t673;
    int t674;
    float u675;
    float u676;
    float u677;
    int t356;
    int t357;
    int t358;
    int t359;
    int t360;
    int t361;
    float u362;
    float u363;
    float u364;
    int t343;
    int t344;
    int t345;
    int t346;
    int t347;
    int t348;
    float u349;
    float u350;
    float u351;
    int t294;
    int t295;
    int t296;
    int t297;
    int t298;
    int t299;
    float u300;
    float u301;
    float u302;
    int t245;
    int t246;
    int t247;
    int t248;
    int t249;
    int t250;
    float u251;
    float u252;
    float u253;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    float u202;
    float u203;
    float u204;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    float u153;
    float u154;
    float u155;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    float u104;
    float u105;
    float u106;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    float u91;
    float u92;
    float u93;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    float u80;
    float u81;
    float u82;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    float u69;
    float u70;
    float u71;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    float u142;
    float u143;
    float u144;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    float u131;
    float u132;
    float u133;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    float u120;
    float u121;
    float u122;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    float u191;
    float u192;
    float u193;
    int t174;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    float u180;
    float u181;
    float u182;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    float u169;
    float u170;
    float u171;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    float u240;
    float u241;
    float u242;
    int t223;
    int t224;
    int t225;
    int t226;
    int t227;
    int t228;
    float u229;
    float u230;
    float u231;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    float u218;
    float u219;
    float u220;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    int t288;
    float u289;
    float u290;
    float u291;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    float u278;
    float u279;
    float u280;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    float u267;
    float u268;
    float u269;
    int t332;
    int t333;
    int t334;
    int t335;
    int t336;
    int t337;
    float u338;
    float u339;
    float u340;
    int t321;
    int t322;
    int t323;
    int t324;
    int t325;
    int t326;
    float u327;
    float u328;
    float u329;
    int t310;
    int t311;
    int t312;
    int t313;
    int t314;
    int t315;
    float u316;
    float u317;
    float u318;
    int t658;
    int t659;
    int t660;
    int t661;
    int t662;
    int t663;
    float u664;
    float u665;
    float u666;
    int t609;
    int t610;
    int t611;
    int t612;
    int t613;
    int t614;
    float u615;
    float u616;
    float u617;
    int t560;
    int t561;
    int t562;
    int t563;
    int t564;
    int t565;
    float u566;
    float u567;
    float u568;
    int t511;
    int t512;
    int t513;
    int t514;
    int t515;
    int t516;
    float u517;
    float u518;
    float u519;
    int t462;
    int t463;
    int t464;
    int t465;
    int t466;
    int t467;
    float u468;
    float u469;
    float u470;
    int t413;
    int t414;
    int t415;
    int t416;
    int t417;
    int t418;
    float u419;
    float u420;
    float u421;
    int t400;
    int t401;
    int t402;
    int t403;
    int t404;
    int t405;
    float u406;
    float u407;
    float u408;
    int t389;
    int t390;
    int t391;
    int t392;
    int t393;
    int t394;
    float u395;
    float u396;
    float u397;
    int t378;
    int t379;
    int t380;
    int t381;
    int t382;
    int t383;
    float u384;
    float u385;
    float u386;
    int t451;
    int t452;
    int t453;
    int t454;
    int t455;
    int t456;
    float u457;
    float u458;
    float u459;
    int t440;
    int t441;
    int t442;
    int t443;
    int t444;
    int t445;
    float u446;
    float u447;
    float u448;
    int t429;
    int t430;
    int t431;
    int t432;
    int t433;
    int t434;
    float u435;
    float u436;
    float u437;
    int t500;
    int t501;
    int t502;
    int t503;
    int t504;
    int t505;
    float u506;
    float u507;
    float u508;
    int t489;
    int t490;
    int t491;
    int t492;
    int t493;
    int t494;
    float u495;
    float u496;
    float u497;
    int t478;
    int t479;
    int t480;
    int t481;
    int t482;
    int t483;
    float u484;
    float u485;
    float u486;
    int t549;
    int t550;
    int t551;
    int t552;
    int t553;
    int t554;
    float u555;
    float u556;
    float u557;
    int t538;
    int t539;
    int t540;
    int t541;
    int t542;
    int t543;
    float u544;
    float u545;
    float u546;
    int t527;
    int t528;
    int t529;
    int t530;
    int t531;
    int t532;
    float u533;
    float u534;
    float u535;
    int t598;
    int t599;
    int t600;
    int t601;
    int t602;
    int t603;
    float u604;
    float u605;
    float u606;
    int t587;
    int t588;
    int t589;
    int t590;
    int t591;
    int t592;
    float u593;
    float u594;
    float u595;
    int t576;
    int t577;
    int t578;
    int t579;
    int t580;
    int t581;
    float u582;
    float u583;
    float u584;
    int t647;
    int t648;
    int t649;
    int t650;
    int t651;
    int t652;
    float u653;
    float u654;
    float u655;
    int t636;
    int t637;
    int t638;
    int t639;
    int t640;
    int t641;
    float u642;
    float u643;
    float u644;
    int t625;
    int t626;
    int t627;
    int t628;
    int t629;
    int t630;
    float u631;
    float u632;
    float u633;
    int t985;
    int t986;
    int t987;
    int t988;
    int t989;
    int t990;
    float u991;
    float u992;
    float u993;
    int t972;
    int t973;
    int t974;
    int t975;
    int t976;
    int t977;
    float u978;
    float u979;
    float u980;
    int t923;
    int t924;
    int t925;
    int t926;
    int t927;
    int t928;
    float u929;
    float u930;
    float u931;
    int t874;
    int t875;
    int t876;
    int t877;
    int t878;
    int t879;
    float u880;
    float u881;
    float u882;
    int t825;
    int t826;
    int t827;
    int t828;
    int t829;
    int t830;
    float u831;
    float u832;
    float u833;
    int t776;
    int t777;
    int t778;
    int t779;
    int t780;
    int t781;
    float u782;
    float u783;
    float u784;
    int t727;
    int t728;
    int t729;
    int t730;
    int t731;
    int t732;
    float u733;
    float u734;
    float u735;
    int t714;
    int t715;
    int t716;
    int t717;
    int t718;
    int t719;
    float u720;
    float u721;
    float u722;
    int t703;
    int t704;
    int t705;
    int t706;
    int t707;
    int t708;
    float u709;
    float u710;
    float u711;
    int t692;
    int t693;
    int t694;
    int t695;
    int t696;
    int t697;
    float u698;
    float u699;
    float u700;
    int t765;
    int t766;
    int t767;
    int t768;
    int t769;
    int t770;
    float u771;
    float u772;
    float u773;
    int t754;
    int t755;
    int t756;
    int t757;
    int t758;
    int t759;
    float u760;
    float u761;
    float u762;
    int t743;
    int t744;
    int t745;
    int t746;
    int t747;
    int t748;
    float u749;
    float u750;
    float u751;
    int t814;
    int t815;
    int t816;
    int t817;
    int t818;
    int t819;
    float u820;
    float u821;
    float u822;
    int t803;
    int t804;
    int t805;
    int t806;
    int t807;
    int t808;
    float u809;
    float u810;
    float u811;
    int t792;
    int t793;
    int t794;
    int t795;
    int t796;
    int t797;
    float u798;
    float u799;
    float u800;
    int t863;
    int t864;
    int t865;
    int t866;
    int t867;
    int t868;
    float u869;
    float u870;
    float u871;
    int t852;
    int t853;
    int t854;
    int t855;
    int t856;
    int t857;
    float u858;
    float u859;
    float u860;
    int t841;
    int t842;
    int t843;
    int t844;
    int t845;
    int t846;
    float u847;
    float u848;
    float u849;
    int t912;
    int t913;
    int t914;
    int t915;
    int t916;
    int t917;
    float u918;
    float u919;
    float u920;
    int t901;
    int t902;
    int t903;
    int t904;
    int t905;
    int t906;
    float u907;
    float u908;
    float u909;
    int t890;
    int t891;
    int t892;
    int t893;
    int t894;
    int t895;
    float u896;
    float u897;
    float u898;
    int t961;
    int t962;
    int t963;
    int t964;
    int t965;
    int t966;
    float u967;
    float u968;
    float u969;
    int t950;
    int t951;
    int t952;
    int t953;
    int t954;
    int t955;
    float u956;
    float u957;
    float u958;
    int t939;
    int t940;
    int t941;
    int t942;
    int t943;
    int t944;
    float u945;
    float u946;
    float u947;
    int t1312;
    int t1313;
    int t1314;
    int t1315;
    int t1316;
    int t1317;
    float u1318;
    float u1319;
    float u1320;
    int t1299;
    int t1300;
    int t1301;
    int t1302;
    int t1303;
    int t1304;
    float u1305;
    float u1306;
    float u1307;
    int t1250;
    int t1251;
    int t1252;
    int t1253;
    int t1254;
    int t1255;
    float u1256;
    float u1257;
    float u1258;
    int t1201;
    int t1202;
    int t1203;
    int t1204;
    int t1205;
    int t1206;
    float u1207;
    float u1208;
    float u1209;
    int t1152;
    int t1153;
    int t1154;
    int t1155;
    int t1156;
    int t1157;
    float u1158;
    float u1159;
    float u1160;
    int t1103;
    int t1104;
    int t1105;
    int t1106;
    int t1107;
    int t1108;
    float u1109;
    float u1110;
    float u1111;
    int t1054;
    int t1055;
    int t1056;
    int t1057;
    int t1058;
    int t1059;
    float u1060;
    float u1061;
    float u1062;
    int t1041;
    int t1042;
    int t1043;
    int t1044;
    int t1045;
    int t1046;
    float u1047;
    float u1048;
    float u1049;
    int t1030;
    int t1031;
    int t1032;
    int t1033;
    int t1034;
    int t1035;
    float u1036;
    float u1037;
    float u1038;
    int t1019;
    int t1020;
    int t1021;
    int t1022;
    int t1023;
    int t1024;
    float u1025;
    float u1026;
    float u1027;
    int t1092;
    int t1093;
    int t1094;
    int t1095;
    int t1096;
    int t1097;
    float u1098;
    float u1099;
    float u1100;
    int t1081;
    int t1082;
    int t1083;
    int t1084;
    int t1085;
    int t1086;
    float u1087;
    float u1088;
    float u1089;
    int t1070;
    int t1071;
    int t1072;
    int t1073;
    int t1074;
    int t1075;
    float u1076;
    float u1077;
    float u1078;
    int t1141;
    int t1142;
    int t1143;
    int t1144;
    int t1145;
    int t1146;
    float u1147;
    float u1148;
    float u1149;
    int t1130;
    int t1131;
    int t1132;
    int t1133;
    int t1134;
    int t1135;
    float u1136;
    float u1137;
    float u1138;
    int t1119;
    int t1120;
    int t1121;
    int t1122;
    int t1123;
    int t1124;
    float u1125;
    float u1126;
    float u1127;
    int t1190;
    int t1191;
    int t1192;
    int t1193;
    int t1194;
    int t1195;
    float u1196;
    float u1197;
    float u1198;
    int t1179;
    int t1180;
    int t1181;
    int t1182;
    int t1183;
    int t1184;
    float u1185;
    float u1186;
    float u1187;
    int t1168;
    int t1169;
    int t1170;
    int t1171;
    int t1172;
    int t1173;
    float u1174;
    float u1175;
    float u1176;
    int t1239;
    int t1240;
    int t1241;
    int t1242;
    int t1243;
    int t1244;
    float u1245;
    float u1246;
    float u1247;
    int t1228;
    int t1229;
    int t1230;
    int t1231;
    int t1232;
    int t1233;
    float u1234;
    float u1235;
    float u1236;
    int t1217;
    int t1218;
    int t1219;
    int t1220;
    int t1221;
    int t1222;
    float u1223;
    float u1224;
    float u1225;
    int t1288;
    int t1289;
    int t1290;
    int t1291;
    int t1292;
    int t1293;
    float u1294;
    float u1295;
    float u1296;
    int t1277;
    int t1278;
    int t1279;
    int t1280;
    int t1281;
    int t1282;
    float u1283;
    float u1284;
    float u1285;
    int t1266;
    int t1267;
    int t1268;
    int t1269;
    int t1270;
    int t1271;
    float u1272;
    float u1273;
    float u1274;
    int t1361;
    int t1362;
    int t1363;
    int t1364;
    int t1365;
    int t1366;
    float u1367;
    float u1368;
    float u1369;
    int t1350;
    int t1351;
    int t1352;
    int t1353;
    int t1354;
    int t1355;
    float u1356;
    float u1357;
    float u1358;
    int t1339;
    int t1340;
    int t1341;
    int t1342;
    int t1343;
    int t1344;
    float u1345;
    float u1346;
    float u1347;
    int t1428;
    int t1429;
    int t1430;
    int t1431;
    int t1432;
    int t1433;
    float u1434;
    float u1435;
    float u1436;
    int t1388;
    int t1389;
    int t1390;
    int t1391;
    int t1392;
    int t1393;
    float u1394;
    float u1395;
    float u1396;
    int t1417;
    int t1418;
    int t1419;
    int t1420;
    int t1421;
    int t1422;
    float u1423;
    float u1424;
    float u1425;
    int t1404;
    int t1405;
    int t1406;
    int t1407;
    int t1408;
    int t1409;
    float u1410;
    float u1411;
    float u1412;
    int t2397;
    int t2398;
    int t2399;
    int t2400;
    int t2401;
    int t2402;
    float u2403;
    float u2404;
    float u2405;
    int t1633;
    int t1636;
    int t1637;
    int t1638;
    int t1626;
    int t1627;
    float u1628;
    float u1629;
    float u1630;
    int t1604;
    int t1605;
    float u1606;
    float u1607;
    float u1608;
    int t1540;
    int t1541;
    float u1542;
    float u1543;
    float u1544;
    int t1532;
    int t1533;
    float u1534;
    float u1535;
    float u1536;
    int t1510;
    int t1511;
    float u1512;
    float u1513;
    float u1514;
    int t1487;
    int t1488;
    float u1489;
    float u1490;
    float u1491;
    int t1503;
    int t1504;
    float u1505;
    float u1506;
    float u1507;
    int t1520;
    float u1521;
    float u1522;
    float u1523;
    int t1597;
    int t1598;
    float u1599;
    float u1600;
    float u1601;
    int t1575;
    int t1576;
    float u1577;
    float u1578;
    float u1579;
    float u1562;
    int t1552;
    int t1553;
    float u1554;
    float u1555;
    float u1556;
    int t1568;
    int t1569;
    float u1570;
    float u1571;
    float u1572;
    float u1593;
    int t1585;
    float u1586;
    float u1587;
    float u1588;
    int t1620;
    float u1622;
    int t1614;
    float u1615;
    float u1616;
    float u1617;
    int t2386;
    int t2387;
    int t2388;
    int t2389;
    int t2390;
    int t2391;
    float u2392;
    float u2393;
    float u2394;
    int t1999;
    int t2000;
    int t2001;
    int t2002;
    int t2003;
    int t2004;
    float u2005;
    float u2006;
    float u2007;
    int t1806;
    int t1809;
    int t1810;
    int t1811;
    int t1799;
    int t1800;
    float u1801;
    float u1802;
    float u1803;
    int t1777;
    int t1778;
    float u1779;
    float u1780;
    float u1781;
    int t1713;
    int t1714;
    float u1715;
    float u1716;
    float u1717;
    int t1705;
    int t1706;
    float u1707;
    float u1708;
    float u1709;
    int t1683;
    int t1684;
    float u1685;
    float u1686;
    float u1687;
    int t1660;
    int t1661;
    float u1662;
    float u1663;
    float u1664;
    int t1676;
    int t1677;
    float u1678;
    float u1679;
    float u1680;
    int t1693;
    float u1694;
    float u1695;
    float u1696;
    int t1770;
    int t1771;
    float u1772;
    float u1773;
    float u1774;
    int t1748;
    int t1749;
    float u1750;
    float u1751;
    float u1752;
    float u1735;
    int t1725;
    int t1726;
    float u1727;
    float u1728;
    float u1729;
    int t1741;
    int t1742;
    float u1743;
    float u1744;
    float u1745;
    float u1766;
    int t1758;
    float u1759;
    float u1760;
    float u1761;
    int t1793;
    float u1795;
    int t1787;
    float u1788;
    float u1789;
    float u1790;
    int t1988;
    int t1991;
    int t1992;
    int t1993;
    int t1981;
    int t1982;
    float u1983;
    float u1984;
    float u1985;
    int t1959;
    int t1960;
    float u1961;
    float u1962;
    float u1963;
    int t1895;
    int t1896;
    float u1897;
    float u1898;
    float u1899;
    int t1887;
    int t1888;
    float u1889;
    float u1890;
    float u1891;
    int t1865;
    int t1866;
    float u1867;
    float u1868;
    float u1869;
    int t1842;
    int t1843;
    float u1844;
    float u1845;
    float u1846;
    int t1858;
    int t1859;
    float u1860;
    float u1861;
    float u1862;
    int t1875;
    float u1876;
    float u1877;
    float u1878;
    int t1952;
    int t1953;
    float u1954;
    float u1955;
    float u1956;
    int t1930;
    int t1931;
    float u1932;
    float u1933;
    float u1934;
    float u1917;
    int t1907;
    int t1908;
    float u1909;
    float u1910;
    float u1911;
    int t1923;
    int t1924;
    float u1925;
    float u1926;
    float u1927;
    float u1948;
    int t1940;
    float u1941;
    float u1942;
    float u1943;
    int t1975;
    float u1977;
    int t1969;
    float u1970;
    float u1971;
    float u1972;
    int t2375;
    int t2376;
    int t2377;
    int t2378;
    int t2379;
    int t2380;
    float u2381;
    float u2382;
    float u2383;
    int t2182;
    int t2185;
    int t2186;
    int t2187;
    int t2175;
    int t2176;
    float u2177;
    float u2178;
    float u2179;
    int t2153;
    int t2154;
    float u2155;
    float u2156;
    float u2157;
    int t2089;
    int t2090;
    float u2091;
    float u2092;
    float u2093;
    int t2081;
    int t2082;
    float u2083;
    float u2084;
    float u2085;
    int t2059;
    int t2060;
    float u2061;
    float u2062;
    float u2063;
    int t2036;
    int t2037;
    float u2038;
    float u2039;
    float u2040;
    int t2052;
    int t2053;
    float u2054;
    float u2055;
    float u2056;
    int t2069;
    float u2070;
    float u2071;
    float u2072;
    int t2146;
    int t2147;
    float u2148;
    float u2149;
    float u2150;
    int t2124;
    int t2125;
    float u2126;
    float u2127;
    float u2128;
    float u2111;
    int t2101;
    int t2102;
    float u2103;
    float u2104;
    float u2105;
    int t2117;
    int t2118;
    float u2119;
    float u2120;
    float u2121;
    float u2142;
    int t2134;
    float u2135;
    float u2136;
    float u2137;
    int t2169;
    float u2171;
    int t2163;
    float u2164;
    float u2165;
    float u2166;
    int t2364;
    int t2367;
    int t2368;
    int t2369;
    int t2357;
    int t2358;
    float u2359;
    float u2360;
    float u2361;
    int t2335;
    int t2336;
    float u2337;
    float u2338;
    float u2339;
    int t2271;
    int t2272;
    float u2273;
    float u2274;
    float u2275;
    int t2263;
    int t2264;
    float u2265;
    float u2266;
    float u2267;
    int t2241;
    int t2242;
    float u2243;
    float u2244;
    float u2245;
    int t2218;
    int t2219;
    float u2220;
    float u2221;
    float u2222;
    int t2234;
    int t2235;
    float u2236;
    float u2237;
    float u2238;
    int t2251;
    float u2252;
    float u2253;
    float u2254;
    int t2328;
    int t2329;
    float u2330;
    float u2331;
    float u2332;
    int t2306;
    int t2307;
    float u2308;
    float u2309;
    float u2310;
    float u2293;
    int t2283;
    int t2284;
    float u2285;
    float u2286;
    float u2287;
    int t2299;
    int t2300;
    float u2301;
    float u2302;
    float u2303;
    float u2324;
    int t2316;
    float u2317;
    float u2318;
    float u2319;
    int t2351;
    float u2353;
    int t2345;
    float u2346;
    float u2347;
    float u2348;
    int stk[18] = {0};

    t0 = *(int *)0xC1EE20C;
    t1 = *(int *)0xC17948C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t2 = *(int *)0xC1EE214;
                t9 = 0xC;
                t10 = 0xF6;
                t11 = 0xC0DD678;
                if ((unsigned int)(t2 - 3) < (unsigned int)0xC) {
                    switch (((t2 - 3) << 1)) {
                        case 0:
                        {
                            t7 = 0x1;
                            t8 = 0xC0E4978;
                        }
                            break;
                        case 2:
                        {
                            t7 = 0x1;
                            t8 = 0xC0E42E8;
                        }
                            break;
                        case 4:
                        {
                            t7 = 0x1;
                            t8 = 0xC0E4310;
                        }
                            break;
                        case 6:
                        {
                            t7 = 0x1;
                            t8 = 0xC0E4338;
                        }
                            break;
                        case 8:
                        case 16:
                        {
                            t3 = *(int *)0xC1EE214;
                            t4 = 0x1;
                            t5 = 0xC0E4360;
                            if (t3 == 11) {
                                t4 = 0x7;
                                t5 = 0xC0E46D0;
                            }
                            t7 = t4;
                            t8 = t5;
                        }
                            break;
                        case 10:
                        {
                            t7 = 0xA;
                            t8 = 0xC0E4388;
                        }
                            break;
                        case 12:
                        {
                            t7 = 0x3;
                            t8 = 0xC0E4518;
                        }
                            break;
                        case 14:
                        {
                            t7 = 0x8;
                            t8 = 0xC0E4590;
                        }
                            break;
                        case 18:
                        {
                            t7 = 0x1;
                            t8 = 0xC0E47E8;
                        }
                            break;
                        case 20:
                        {
                            t7 = 0x1;
                            t8 = 0xC0E4810;
                        }
                            break;
                        default:
                        {
                            t7 = 0x7;
                            t8 = 0xC0E4838;
                        }
                            break;
                    }
                    t9 = ((t2 - 3) << 1);
                    t10 = t7;
                    t11 = t8;
                }
                t12 = t9;
                t13 = t10;
                t14 = t11;
            }
            t18 = t12;
            t19 = t13;
            t20 = t14;
        } else {
            t16 = 0xC0DF608;
            if (t1 == 1) {
                t16 = 0xC0E1C78;
            }
            t19 = 0xF6;
            t20 = t16;
        }
        t30 = t18;
        t31 = t19;
        t32 = t20;
    } else {
        t22 = *(int *)0xC1EE214;
        t27 = 0x1;
        t28 = 0xC0E4950;
        if (t22 == 15) {
        } else {
            t23 = 0xF6;
            t24 = 0xC0DB008;
            if (t1 == 1) {
                t23 = 0xCA;
                t24 = 0xC0DD678;
            }
            t27 = t23;
            t28 = t24;
        }
        t31 = t27;
        t32 = t28;
    }
    if ((int)t31 > 0) {
        t34 = t30;
        t36 = 0xC17948C;
        t37 = t1;
        t38 = 0xC1EE214;
        t39 = 0xC0DD678;
        t40 = 0x0;
        t41 = t32;
        u44 = f4;
        for (;;) {
            t45 = *(int *)((t41 + 0x0));
            t2419 = t34;
            t2420 = t35;
            t2421 = t36;
            t2422 = t37;
            t2423 = t38;
            t2424 = t39;
            u2425 = u42;
            u2426 = u43;
            u2427 = u44;
            if (t45 == -1) {
            } else {
                if (t45 != 0) {
                    t1450 = t34;
                    t1451 = t35;
                    t1452 = t36;
                    t1453 = t37;
                    t1454 = t38;
                    t1455 = t39;
                    u1456 = u42;
                    u1457 = u43;
                    u1458 = u44;
                    if (t45 == 1) {
                    } else {
                        if (t45 == 3) {
                            t46 = *(int *)0xC1EE20C;
                            if (t46 == 2) {
                                t36 = 0xC1EE214;
                                t47 = *(int *)((t36 + 0x0));
                                if (t47 != 10) {
                                    t48 = *(int *)((t36 + 0x0));
                                    if (t48 != 11) {
                                        t49 = *(int *)((t36 + 0x0));
                                        if (t49 == 14) {
                                            t36 = 0xC1EE7EC;
                                            t50 = *(int *)((t36 + 0x0));
                                            if (t50 == 2) {
                                                t51 = *(int *)0xC1EE20C;
                                                if (t51 == 2) {
                                                    t35 = 0xC1EE214;
                                                    t52 = *(int *)((t35 + 0x0));
                                                    if (t52 != 10) {
                                                        t34 = 0xC1EE214;
                                                        t53 = *(int *)((t34 + 0x0));
                                                        if (t53 != 11) {
                                                            t35 = 0xC1EE214;
                                                            t54 = *(int *)((t35 + 0x0));
                                                            if (t54 != 14) {
                                                                t36 = 0xC179828;
                                                                t55 = *(int *)((t36 + 0x0));
                                                                t34 = t55;
                                                                if (t34 == 0) {
                                                                    t34 = 0xC1EE7EC;
                                                                    t56 = *(int *)((t34 + 0x0));
                                                                    if (t56 == 2) {
                                                                        t57 = *(int *)0xC1EE20C;
                                                                        if (t57 != 2) {
                                                                            t35 = 0xC179828;
                                                                            t58 = *(int *)((t35 + 0x0));
                                                                            t36 = t58;
                                                                            if (t36 == 0) {
                                                                                t36 = 0xC1EE7EC;
                                                                                t59 = *(int *)((t36 + 0x0));
                                                                                if (t59 != 2) {
                                                                                    t37 = 0x2A9;
                                                                                    t36 = 0xC072168;
                                                                                    t34 = 0x4;
                                                                                    *(unsigned int *)((t41 + 0x0)) = t34;
                                                                                    *(unsigned int *)0xC179120 = 0x0;
                                                                                    t38 = 0x0;
                                                                                    Sound_Request(t37, t38);
                                                                                    t35 = 0xC179828;
                                                                                    t36 = 0xC0200AA;
                                                                                    *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                                    t37 = t40;
                                                                                    FUN_0c0200aa(t37);
                                                                                } else {
                                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                                    t63 = t34;
                                                                                    t64 = t35;
                                                                                    t65 = t36;
                                                                                    t66 = t37;
                                                                                    t67 = t38;
                                                                                    t68 = t39;
                                                                                    u69 = u42;
                                                                                    u70 = u43;
                                                                                    u71 = u44;
                                                                                }
                                                                                t74 = t63;
                                                                                t75 = t64;
                                                                                t76 = t65;
                                                                                t77 = t66;
                                                                                t78 = t67;
                                                                                t79 = t68;
                                                                                u80 = u69;
                                                                                u81 = u70;
                                                                                u82 = u71;
                                                                            } else {
                                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                                t74 = t34;
                                                                                t75 = t35;
                                                                                t76 = t36;
                                                                                t77 = t37;
                                                                                t78 = t38;
                                                                                t79 = t39;
                                                                                u80 = u42;
                                                                                u81 = u43;
                                                                                u82 = u44;
                                                                            }
                                                                            t85 = t74;
                                                                            t86 = t75;
                                                                            t87 = t76;
                                                                            t88 = t77;
                                                                            t89 = t78;
                                                                            t90 = t79;
                                                                            u91 = u80;
                                                                            u92 = u81;
                                                                            u93 = u82;
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t85 = t34;
                                                                            t86 = t35;
                                                                            t87 = t36;
                                                                            t88 = t37;
                                                                            t89 = t38;
                                                                            t90 = t39;
                                                                            u91 = u42;
                                                                            u92 = u43;
                                                                            u93 = u44;
                                                                        }
                                                                        t98 = t85;
                                                                        t99 = t86;
                                                                        t100 = t87;
                                                                        t101 = t88;
                                                                        t102 = t89;
                                                                        t103 = t90;
                                                                        u104 = u91;
                                                                        u105 = u92;
                                                                        u106 = u93;
                                                                    } else {
                                                                        t37 = 0x2A9;
                                                                        t36 = 0xC072168;
                                                                        t34 = 0x4;
                                                                        *(unsigned int *)((t41 + 0x0)) = t34;
                                                                        *(unsigned int *)0xC179120 = 0x0;
                                                                        t38 = 0x0;
                                                                        Sound_Request(t37, t38);
                                                                        t35 = 0xC179828;
                                                                        t36 = 0xC0200AA;
                                                                        *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                        t37 = t40;
                                                                        FUN_0c0200aa(t37);
                                                                    }
                                                                    t147 = t98;
                                                                    t148 = t99;
                                                                    t149 = t100;
                                                                    t150 = t101;
                                                                    t151 = t102;
                                                                    t152 = t103;
                                                                    u153 = u104;
                                                                    u154 = u105;
                                                                    u155 = u106;
                                                                } else {
                                                                    t108 = *(int *)0xC1EE20C;
                                                                    if (t108 != 2) {
                                                                        t35 = 0xC179828;
                                                                        t109 = *(int *)((t35 + 0x0));
                                                                        t36 = t109;
                                                                        if (t36 == 0) {
                                                                            t36 = 0xC1EE7EC;
                                                                            t110 = *(int *)((t36 + 0x0));
                                                                            if (t110 != 2) {
                                                                                t37 = 0x2A9;
                                                                                t36 = 0xC072168;
                                                                                t34 = 0x4;
                                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                                t38 = 0x0;
                                                                                Sound_Request(t37, t38);
                                                                                t35 = 0xC179828;
                                                                                t36 = 0xC0200AA;
                                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                                t37 = t40;
                                                                                FUN_0c0200aa(t37);
                                                                            } else {
                                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                                t114 = t34;
                                                                                t115 = t35;
                                                                                t116 = t36;
                                                                                t117 = t37;
                                                                                t118 = t38;
                                                                                t119 = t39;
                                                                                u120 = u42;
                                                                                u121 = u43;
                                                                                u122 = u44;
                                                                            }
                                                                            t125 = t114;
                                                                            t126 = t115;
                                                                            t127 = t116;
                                                                            t128 = t117;
                                                                            t129 = t118;
                                                                            t130 = t119;
                                                                            u131 = u120;
                                                                            u132 = u121;
                                                                            u133 = u122;
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t125 = t34;
                                                                            t126 = t35;
                                                                            t127 = t36;
                                                                            t128 = t37;
                                                                            t129 = t38;
                                                                            t130 = t39;
                                                                            u131 = u42;
                                                                            u132 = u43;
                                                                            u133 = u44;
                                                                        }
                                                                        t136 = t125;
                                                                        t137 = t126;
                                                                        t138 = t127;
                                                                        t139 = t128;
                                                                        t140 = t129;
                                                                        t141 = t130;
                                                                        u142 = u131;
                                                                        u143 = u132;
                                                                        u144 = u133;
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t136 = t34;
                                                                        t137 = t35;
                                                                        t138 = t36;
                                                                        t139 = t37;
                                                                        t140 = t38;
                                                                        t141 = t39;
                                                                        u142 = u42;
                                                                        u143 = u43;
                                                                        u144 = u44;
                                                                    }
                                                                    t147 = t136;
                                                                    t148 = t137;
                                                                    t149 = t138;
                                                                    t150 = t139;
                                                                    t151 = t140;
                                                                    t152 = t141;
                                                                    u153 = u142;
                                                                    u154 = u143;
                                                                    u155 = u144;
                                                                }
                                                                t196 = t147;
                                                                t197 = t148;
                                                                t198 = t149;
                                                                t199 = t150;
                                                                t200 = t151;
                                                                t201 = t152;
                                                                u202 = u153;
                                                                u203 = u154;
                                                                u204 = u155;
                                                            } else {
                                                                t157 = *(int *)0xC1EE20C;
                                                                if (t157 != 2) {
                                                                    t35 = 0xC179828;
                                                                    t158 = *(int *)((t35 + 0x0));
                                                                    t36 = t158;
                                                                    if (t36 == 0) {
                                                                        t36 = 0xC1EE7EC;
                                                                        t159 = *(int *)((t36 + 0x0));
                                                                        if (t159 != 2) {
                                                                            t37 = 0x2A9;
                                                                            t36 = 0xC072168;
                                                                            t34 = 0x4;
                                                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                                                            *(unsigned int *)0xC179120 = 0x0;
                                                                            t38 = 0x0;
                                                                            Sound_Request(t37, t38);
                                                                            t35 = 0xC179828;
                                                                            t36 = 0xC0200AA;
                                                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                            t37 = t40;
                                                                            FUN_0c0200aa(t37);
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t163 = t34;
                                                                            t164 = t35;
                                                                            t165 = t36;
                                                                            t166 = t37;
                                                                            t167 = t38;
                                                                            t168 = t39;
                                                                            u169 = u42;
                                                                            u170 = u43;
                                                                            u171 = u44;
                                                                        }
                                                                        t174 = t163;
                                                                        t175 = t164;
                                                                        t176 = t165;
                                                                        t177 = t166;
                                                                        t178 = t167;
                                                                        t179 = t168;
                                                                        u180 = u169;
                                                                        u181 = u170;
                                                                        u182 = u171;
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t174 = t34;
                                                                        t175 = t35;
                                                                        t176 = t36;
                                                                        t177 = t37;
                                                                        t178 = t38;
                                                                        t179 = t39;
                                                                        u180 = u42;
                                                                        u181 = u43;
                                                                        u182 = u44;
                                                                    }
                                                                    t185 = t174;
                                                                    t186 = t175;
                                                                    t187 = t176;
                                                                    t188 = t177;
                                                                    t189 = t178;
                                                                    t190 = t179;
                                                                    u191 = u180;
                                                                    u192 = u181;
                                                                    u193 = u182;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t185 = t34;
                                                                    t186 = t35;
                                                                    t187 = t36;
                                                                    t188 = t37;
                                                                    t189 = t38;
                                                                    t190 = t39;
                                                                    u191 = u42;
                                                                    u192 = u43;
                                                                    u193 = u44;
                                                                }
                                                                t196 = t185;
                                                                t197 = t186;
                                                                t198 = t187;
                                                                t199 = t188;
                                                                t200 = t189;
                                                                t201 = t190;
                                                                u202 = u191;
                                                                u203 = u192;
                                                                u204 = u193;
                                                            }
                                                            t245 = t196;
                                                            t246 = t197;
                                                            t247 = t198;
                                                            t248 = t199;
                                                            t249 = t200;
                                                            t250 = t201;
                                                            u251 = u202;
                                                            u252 = u203;
                                                            u253 = u204;
                                                        } else {
                                                            t206 = *(int *)0xC1EE20C;
                                                            if (t206 != 2) {
                                                                t35 = 0xC179828;
                                                                t207 = *(int *)((t35 + 0x0));
                                                                t36 = t207;
                                                                if (t36 == 0) {
                                                                    t36 = 0xC1EE7EC;
                                                                    t208 = *(int *)((t36 + 0x0));
                                                                    if (t208 != 2) {
                                                                        t37 = 0x2A9;
                                                                        t36 = 0xC072168;
                                                                        t34 = 0x4;
                                                                        *(unsigned int *)((t41 + 0x0)) = t34;
                                                                        *(unsigned int *)0xC179120 = 0x0;
                                                                        t38 = 0x0;
                                                                        Sound_Request(t37, t38);
                                                                        t35 = 0xC179828;
                                                                        t36 = 0xC0200AA;
                                                                        *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                        t37 = t40;
                                                                        FUN_0c0200aa(t37);
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t212 = t34;
                                                                        t213 = t35;
                                                                        t214 = t36;
                                                                        t215 = t37;
                                                                        t216 = t38;
                                                                        t217 = t39;
                                                                        u218 = u42;
                                                                        u219 = u43;
                                                                        u220 = u44;
                                                                    }
                                                                    t223 = t212;
                                                                    t224 = t213;
                                                                    t225 = t214;
                                                                    t226 = t215;
                                                                    t227 = t216;
                                                                    t228 = t217;
                                                                    u229 = u218;
                                                                    u230 = u219;
                                                                    u231 = u220;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t223 = t34;
                                                                    t224 = t35;
                                                                    t225 = t36;
                                                                    t226 = t37;
                                                                    t227 = t38;
                                                                    t228 = t39;
                                                                    u229 = u42;
                                                                    u230 = u43;
                                                                    u231 = u44;
                                                                }
                                                                t234 = t223;
                                                                t235 = t224;
                                                                t236 = t225;
                                                                t237 = t226;
                                                                t238 = t227;
                                                                t239 = t228;
                                                                u240 = u229;
                                                                u241 = u230;
                                                                u242 = u231;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t234 = t34;
                                                                t235 = t35;
                                                                t236 = t36;
                                                                t237 = t37;
                                                                t238 = t38;
                                                                t239 = t39;
                                                                u240 = u42;
                                                                u241 = u43;
                                                                u242 = u44;
                                                            }
                                                            t245 = t234;
                                                            t246 = t235;
                                                            t247 = t236;
                                                            t248 = t237;
                                                            t249 = t238;
                                                            t250 = t239;
                                                            u251 = u240;
                                                            u252 = u241;
                                                            u253 = u242;
                                                        }
                                                        t294 = t245;
                                                        t295 = t246;
                                                        t296 = t247;
                                                        t297 = t248;
                                                        t298 = t249;
                                                        t299 = t250;
                                                        u300 = u251;
                                                        u301 = u252;
                                                        u302 = u253;
                                                    } else {
                                                        t255 = *(int *)0xC1EE20C;
                                                        if (t255 != 2) {
                                                            t35 = 0xC179828;
                                                            t256 = *(int *)((t35 + 0x0));
                                                            t36 = t256;
                                                            if (t36 == 0) {
                                                                t36 = 0xC1EE7EC;
                                                                t257 = *(int *)((t36 + 0x0));
                                                                if (t257 != 2) {
                                                                    t37 = 0x2A9;
                                                                    t36 = 0xC072168;
                                                                    t34 = 0x4;
                                                                    *(unsigned int *)((t41 + 0x0)) = t34;
                                                                    *(unsigned int *)0xC179120 = 0x0;
                                                                    t38 = 0x0;
                                                                    Sound_Request(t37, t38);
                                                                    t35 = 0xC179828;
                                                                    t36 = 0xC0200AA;
                                                                    *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                    t37 = t40;
                                                                    FUN_0c0200aa(t37);
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t261 = t34;
                                                                    t262 = t35;
                                                                    t263 = t36;
                                                                    t264 = t37;
                                                                    t265 = t38;
                                                                    t266 = t39;
                                                                    u267 = u42;
                                                                    u268 = u43;
                                                                    u269 = u44;
                                                                }
                                                                t272 = t261;
                                                                t273 = t262;
                                                                t274 = t263;
                                                                t275 = t264;
                                                                t276 = t265;
                                                                t277 = t266;
                                                                u278 = u267;
                                                                u279 = u268;
                                                                u280 = u269;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t272 = t34;
                                                                t273 = t35;
                                                                t274 = t36;
                                                                t275 = t37;
                                                                t276 = t38;
                                                                t277 = t39;
                                                                u278 = u42;
                                                                u279 = u43;
                                                                u280 = u44;
                                                            }
                                                            t283 = t272;
                                                            t284 = t273;
                                                            t285 = t274;
                                                            t286 = t275;
                                                            t287 = t276;
                                                            t288 = t277;
                                                            u289 = u278;
                                                            u290 = u279;
                                                            u291 = u280;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t283 = t34;
                                                            t284 = t35;
                                                            t285 = t36;
                                                            t286 = t37;
                                                            t287 = t38;
                                                            t288 = t39;
                                                            u289 = u42;
                                                            u290 = u43;
                                                            u291 = u44;
                                                        }
                                                        t294 = t283;
                                                        t295 = t284;
                                                        t296 = t285;
                                                        t297 = t286;
                                                        t298 = t287;
                                                        t299 = t288;
                                                        u300 = u289;
                                                        u301 = u290;
                                                        u302 = u291;
                                                    }
                                                    t343 = t294;
                                                    t344 = t295;
                                                    t345 = t296;
                                                    t346 = t297;
                                                    t347 = t298;
                                                    t348 = t299;
                                                    u349 = u300;
                                                    u350 = u301;
                                                    u351 = u302;
                                                } else {
                                                    t304 = *(int *)0xC1EE20C;
                                                    if (t304 != 2) {
                                                        t35 = 0xC179828;
                                                        t305 = *(int *)((t35 + 0x0));
                                                        t36 = t305;
                                                        if (t36 == 0) {
                                                            t36 = 0xC1EE7EC;
                                                            t306 = *(int *)((t36 + 0x0));
                                                            if (t306 != 2) {
                                                                t37 = 0x2A9;
                                                                t36 = 0xC072168;
                                                                t34 = 0x4;
                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                t38 = 0x0;
                                                                Sound_Request(t37, t38);
                                                                t35 = 0xC179828;
                                                                t36 = 0xC0200AA;
                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                t37 = t40;
                                                                FUN_0c0200aa(t37);
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t310 = t34;
                                                                t311 = t35;
                                                                t312 = t36;
                                                                t313 = t37;
                                                                t314 = t38;
                                                                t315 = t39;
                                                                u316 = u42;
                                                                u317 = u43;
                                                                u318 = u44;
                                                            }
                                                            t321 = t310;
                                                            t322 = t311;
                                                            t323 = t312;
                                                            t324 = t313;
                                                            t325 = t314;
                                                            t326 = t315;
                                                            u327 = u316;
                                                            u328 = u317;
                                                            u329 = u318;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t321 = t34;
                                                            t322 = t35;
                                                            t323 = t36;
                                                            t324 = t37;
                                                            t325 = t38;
                                                            t326 = t39;
                                                            u327 = u42;
                                                            u328 = u43;
                                                            u329 = u44;
                                                        }
                                                        t332 = t321;
                                                        t333 = t322;
                                                        t334 = t323;
                                                        t335 = t324;
                                                        t336 = t325;
                                                        t337 = t326;
                                                        u338 = u327;
                                                        u339 = u328;
                                                        u340 = u329;
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t332 = t34;
                                                        t333 = t35;
                                                        t334 = t36;
                                                        t335 = t37;
                                                        t336 = t38;
                                                        t337 = t39;
                                                        u338 = u42;
                                                        u339 = u43;
                                                        u340 = u44;
                                                    }
                                                    t343 = t332;
                                                    t344 = t333;
                                                    t345 = t334;
                                                    t346 = t335;
                                                    t347 = t336;
                                                    t348 = t337;
                                                    u349 = u338;
                                                    u350 = u339;
                                                    u351 = u340;
                                                }
                                                t356 = t343;
                                                t357 = t344;
                                                t358 = t345;
                                                t359 = t346;
                                                t360 = t347;
                                                t361 = t348;
                                                u362 = u349;
                                                u363 = u350;
                                                u364 = u351;
                                            } else {
                                                t37 = 0x2A9;
                                                t36 = 0xC072168;
                                                t34 = 0x4;
                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                *(unsigned int *)0xC179120 = 0x0;
                                                t38 = 0x0;
                                                Sound_Request(t37, t38);
                                                t35 = 0xC179828;
                                                t36 = 0xC0200AA;
                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                t37 = t40;
                                                FUN_0c0200aa(t37);
                                            }
                                            t669 = t356;
                                            t670 = t357;
                                            t671 = t358;
                                            t672 = t359;
                                            t673 = t360;
                                            t674 = t361;
                                            u675 = u362;
                                            u676 = u363;
                                            u677 = u364;
                                        } else {
                                            t366 = *(int *)0xC1EE20C;
                                            if (t366 == 2) {
                                                t35 = 0xC1EE214;
                                                t367 = *(int *)((t35 + 0x0));
                                                if (t367 != 10) {
                                                    t34 = 0xC1EE214;
                                                    t368 = *(int *)((t34 + 0x0));
                                                    if (t368 != 11) {
                                                        t35 = 0xC1EE214;
                                                        t369 = *(int *)((t35 + 0x0));
                                                        if (t369 != 14) {
                                                            t36 = 0xC179828;
                                                            t370 = *(int *)((t36 + 0x0));
                                                            t34 = t370;
                                                            if (t34 == 0) {
                                                                t34 = 0xC1EE7EC;
                                                                t371 = *(int *)((t34 + 0x0));
                                                                if (t371 == 2) {
                                                                    t372 = *(int *)0xC1EE20C;
                                                                    if (t372 != 2) {
                                                                        t35 = 0xC179828;
                                                                        t373 = *(int *)((t35 + 0x0));
                                                                        t36 = t373;
                                                                        if (t36 == 0) {
                                                                            t36 = 0xC1EE7EC;
                                                                            t374 = *(int *)((t36 + 0x0));
                                                                            if (t374 != 2) {
                                                                                t37 = 0x2A9;
                                                                                t36 = 0xC072168;
                                                                                t34 = 0x4;
                                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                                t38 = 0x0;
                                                                                Sound_Request(t37, t38);
                                                                                t35 = 0xC179828;
                                                                                t36 = 0xC0200AA;
                                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                                t37 = t40;
                                                                                FUN_0c0200aa(t37);
                                                                            } else {
                                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                                t378 = t34;
                                                                                t379 = t35;
                                                                                t380 = t36;
                                                                                t381 = t37;
                                                                                t382 = t38;
                                                                                t383 = t39;
                                                                                u384 = u42;
                                                                                u385 = u43;
                                                                                u386 = u44;
                                                                            }
                                                                            t389 = t378;
                                                                            t390 = t379;
                                                                            t391 = t380;
                                                                            t392 = t381;
                                                                            t393 = t382;
                                                                            t394 = t383;
                                                                            u395 = u384;
                                                                            u396 = u385;
                                                                            u397 = u386;
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t389 = t34;
                                                                            t390 = t35;
                                                                            t391 = t36;
                                                                            t392 = t37;
                                                                            t393 = t38;
                                                                            t394 = t39;
                                                                            u395 = u42;
                                                                            u396 = u43;
                                                                            u397 = u44;
                                                                        }
                                                                        t400 = t389;
                                                                        t401 = t390;
                                                                        t402 = t391;
                                                                        t403 = t392;
                                                                        t404 = t393;
                                                                        t405 = t394;
                                                                        u406 = u395;
                                                                        u407 = u396;
                                                                        u408 = u397;
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t400 = t34;
                                                                        t401 = t35;
                                                                        t402 = t36;
                                                                        t403 = t37;
                                                                        t404 = t38;
                                                                        t405 = t39;
                                                                        u406 = u42;
                                                                        u407 = u43;
                                                                        u408 = u44;
                                                                    }
                                                                    t413 = t400;
                                                                    t414 = t401;
                                                                    t415 = t402;
                                                                    t416 = t403;
                                                                    t417 = t404;
                                                                    t418 = t405;
                                                                    u419 = u406;
                                                                    u420 = u407;
                                                                    u421 = u408;
                                                                } else {
                                                                    t37 = 0x2A9;
                                                                    t36 = 0xC072168;
                                                                    t34 = 0x4;
                                                                    *(unsigned int *)((t41 + 0x0)) = t34;
                                                                    *(unsigned int *)0xC179120 = 0x0;
                                                                    t38 = 0x0;
                                                                    Sound_Request(t37, t38);
                                                                    t35 = 0xC179828;
                                                                    t36 = 0xC0200AA;
                                                                    *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                    t37 = t40;
                                                                    FUN_0c0200aa(t37);
                                                                }
                                                                t462 = t413;
                                                                t463 = t414;
                                                                t464 = t415;
                                                                t465 = t416;
                                                                t466 = t417;
                                                                t467 = t418;
                                                                u468 = u419;
                                                                u469 = u420;
                                                                u470 = u421;
                                                            } else {
                                                                t423 = *(int *)0xC1EE20C;
                                                                if (t423 != 2) {
                                                                    t35 = 0xC179828;
                                                                    t424 = *(int *)((t35 + 0x0));
                                                                    t36 = t424;
                                                                    if (t36 == 0) {
                                                                        t36 = 0xC1EE7EC;
                                                                        t425 = *(int *)((t36 + 0x0));
                                                                        if (t425 != 2) {
                                                                            t37 = 0x2A9;
                                                                            t36 = 0xC072168;
                                                                            t34 = 0x4;
                                                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                                                            *(unsigned int *)0xC179120 = 0x0;
                                                                            t38 = 0x0;
                                                                            Sound_Request(t37, t38);
                                                                            t35 = 0xC179828;
                                                                            t36 = 0xC0200AA;
                                                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                            t37 = t40;
                                                                            FUN_0c0200aa(t37);
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t429 = t34;
                                                                            t430 = t35;
                                                                            t431 = t36;
                                                                            t432 = t37;
                                                                            t433 = t38;
                                                                            t434 = t39;
                                                                            u435 = u42;
                                                                            u436 = u43;
                                                                            u437 = u44;
                                                                        }
                                                                        t440 = t429;
                                                                        t441 = t430;
                                                                        t442 = t431;
                                                                        t443 = t432;
                                                                        t444 = t433;
                                                                        t445 = t434;
                                                                        u446 = u435;
                                                                        u447 = u436;
                                                                        u448 = u437;
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t440 = t34;
                                                                        t441 = t35;
                                                                        t442 = t36;
                                                                        t443 = t37;
                                                                        t444 = t38;
                                                                        t445 = t39;
                                                                        u446 = u42;
                                                                        u447 = u43;
                                                                        u448 = u44;
                                                                    }
                                                                    t451 = t440;
                                                                    t452 = t441;
                                                                    t453 = t442;
                                                                    t454 = t443;
                                                                    t455 = t444;
                                                                    t456 = t445;
                                                                    u457 = u446;
                                                                    u458 = u447;
                                                                    u459 = u448;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t451 = t34;
                                                                    t452 = t35;
                                                                    t453 = t36;
                                                                    t454 = t37;
                                                                    t455 = t38;
                                                                    t456 = t39;
                                                                    u457 = u42;
                                                                    u458 = u43;
                                                                    u459 = u44;
                                                                }
                                                                t462 = t451;
                                                                t463 = t452;
                                                                t464 = t453;
                                                                t465 = t454;
                                                                t466 = t455;
                                                                t467 = t456;
                                                                u468 = u457;
                                                                u469 = u458;
                                                                u470 = u459;
                                                            }
                                                            t511 = t462;
                                                            t512 = t463;
                                                            t513 = t464;
                                                            t514 = t465;
                                                            t515 = t466;
                                                            t516 = t467;
                                                            u517 = u468;
                                                            u518 = u469;
                                                            u519 = u470;
                                                        } else {
                                                            t472 = *(int *)0xC1EE20C;
                                                            if (t472 != 2) {
                                                                t35 = 0xC179828;
                                                                t473 = *(int *)((t35 + 0x0));
                                                                t36 = t473;
                                                                if (t36 == 0) {
                                                                    t36 = 0xC1EE7EC;
                                                                    t474 = *(int *)((t36 + 0x0));
                                                                    if (t474 != 2) {
                                                                        t37 = 0x2A9;
                                                                        t36 = 0xC072168;
                                                                        t34 = 0x4;
                                                                        *(unsigned int *)((t41 + 0x0)) = t34;
                                                                        *(unsigned int *)0xC179120 = 0x0;
                                                                        t38 = 0x0;
                                                                        Sound_Request(t37, t38);
                                                                        t35 = 0xC179828;
                                                                        t36 = 0xC0200AA;
                                                                        *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                        t37 = t40;
                                                                        FUN_0c0200aa(t37);
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t478 = t34;
                                                                        t479 = t35;
                                                                        t480 = t36;
                                                                        t481 = t37;
                                                                        t482 = t38;
                                                                        t483 = t39;
                                                                        u484 = u42;
                                                                        u485 = u43;
                                                                        u486 = u44;
                                                                    }
                                                                    t489 = t478;
                                                                    t490 = t479;
                                                                    t491 = t480;
                                                                    t492 = t481;
                                                                    t493 = t482;
                                                                    t494 = t483;
                                                                    u495 = u484;
                                                                    u496 = u485;
                                                                    u497 = u486;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t489 = t34;
                                                                    t490 = t35;
                                                                    t491 = t36;
                                                                    t492 = t37;
                                                                    t493 = t38;
                                                                    t494 = t39;
                                                                    u495 = u42;
                                                                    u496 = u43;
                                                                    u497 = u44;
                                                                }
                                                                t500 = t489;
                                                                t501 = t490;
                                                                t502 = t491;
                                                                t503 = t492;
                                                                t504 = t493;
                                                                t505 = t494;
                                                                u506 = u495;
                                                                u507 = u496;
                                                                u508 = u497;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t500 = t34;
                                                                t501 = t35;
                                                                t502 = t36;
                                                                t503 = t37;
                                                                t504 = t38;
                                                                t505 = t39;
                                                                u506 = u42;
                                                                u507 = u43;
                                                                u508 = u44;
                                                            }
                                                            t511 = t500;
                                                            t512 = t501;
                                                            t513 = t502;
                                                            t514 = t503;
                                                            t515 = t504;
                                                            t516 = t505;
                                                            u517 = u506;
                                                            u518 = u507;
                                                            u519 = u508;
                                                        }
                                                        t560 = t511;
                                                        t561 = t512;
                                                        t562 = t513;
                                                        t563 = t514;
                                                        t564 = t515;
                                                        t565 = t516;
                                                        u566 = u517;
                                                        u567 = u518;
                                                        u568 = u519;
                                                    } else {
                                                        t521 = *(int *)0xC1EE20C;
                                                        if (t521 != 2) {
                                                            t35 = 0xC179828;
                                                            t522 = *(int *)((t35 + 0x0));
                                                            t36 = t522;
                                                            if (t36 == 0) {
                                                                t36 = 0xC1EE7EC;
                                                                t523 = *(int *)((t36 + 0x0));
                                                                if (t523 != 2) {
                                                                    t37 = 0x2A9;
                                                                    t36 = 0xC072168;
                                                                    t34 = 0x4;
                                                                    *(unsigned int *)((t41 + 0x0)) = t34;
                                                                    *(unsigned int *)0xC179120 = 0x0;
                                                                    t38 = 0x0;
                                                                    Sound_Request(t37, t38);
                                                                    t35 = 0xC179828;
                                                                    t36 = 0xC0200AA;
                                                                    *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                    t37 = t40;
                                                                    FUN_0c0200aa(t37);
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t527 = t34;
                                                                    t528 = t35;
                                                                    t529 = t36;
                                                                    t530 = t37;
                                                                    t531 = t38;
                                                                    t532 = t39;
                                                                    u533 = u42;
                                                                    u534 = u43;
                                                                    u535 = u44;
                                                                }
                                                                t538 = t527;
                                                                t539 = t528;
                                                                t540 = t529;
                                                                t541 = t530;
                                                                t542 = t531;
                                                                t543 = t532;
                                                                u544 = u533;
                                                                u545 = u534;
                                                                u546 = u535;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t538 = t34;
                                                                t539 = t35;
                                                                t540 = t36;
                                                                t541 = t37;
                                                                t542 = t38;
                                                                t543 = t39;
                                                                u544 = u42;
                                                                u545 = u43;
                                                                u546 = u44;
                                                            }
                                                            t549 = t538;
                                                            t550 = t539;
                                                            t551 = t540;
                                                            t552 = t541;
                                                            t553 = t542;
                                                            t554 = t543;
                                                            u555 = u544;
                                                            u556 = u545;
                                                            u557 = u546;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t549 = t34;
                                                            t550 = t35;
                                                            t551 = t36;
                                                            t552 = t37;
                                                            t553 = t38;
                                                            t554 = t39;
                                                            u555 = u42;
                                                            u556 = u43;
                                                            u557 = u44;
                                                        }
                                                        t560 = t549;
                                                        t561 = t550;
                                                        t562 = t551;
                                                        t563 = t552;
                                                        t564 = t553;
                                                        t565 = t554;
                                                        u566 = u555;
                                                        u567 = u556;
                                                        u568 = u557;
                                                    }
                                                    t609 = t560;
                                                    t610 = t561;
                                                    t611 = t562;
                                                    t612 = t563;
                                                    t613 = t564;
                                                    t614 = t565;
                                                    u615 = u566;
                                                    u616 = u567;
                                                    u617 = u568;
                                                } else {
                                                    t570 = *(int *)0xC1EE20C;
                                                    if (t570 != 2) {
                                                        t35 = 0xC179828;
                                                        t571 = *(int *)((t35 + 0x0));
                                                        t36 = t571;
                                                        if (t36 == 0) {
                                                            t36 = 0xC1EE7EC;
                                                            t572 = *(int *)((t36 + 0x0));
                                                            if (t572 != 2) {
                                                                t37 = 0x2A9;
                                                                t36 = 0xC072168;
                                                                t34 = 0x4;
                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                t38 = 0x0;
                                                                Sound_Request(t37, t38);
                                                                t35 = 0xC179828;
                                                                t36 = 0xC0200AA;
                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                t37 = t40;
                                                                FUN_0c0200aa(t37);
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t576 = t34;
                                                                t577 = t35;
                                                                t578 = t36;
                                                                t579 = t37;
                                                                t580 = t38;
                                                                t581 = t39;
                                                                u582 = u42;
                                                                u583 = u43;
                                                                u584 = u44;
                                                            }
                                                            t587 = t576;
                                                            t588 = t577;
                                                            t589 = t578;
                                                            t590 = t579;
                                                            t591 = t580;
                                                            t592 = t581;
                                                            u593 = u582;
                                                            u594 = u583;
                                                            u595 = u584;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t587 = t34;
                                                            t588 = t35;
                                                            t589 = t36;
                                                            t590 = t37;
                                                            t591 = t38;
                                                            t592 = t39;
                                                            u593 = u42;
                                                            u594 = u43;
                                                            u595 = u44;
                                                        }
                                                        t598 = t587;
                                                        t599 = t588;
                                                        t600 = t589;
                                                        t601 = t590;
                                                        t602 = t591;
                                                        t603 = t592;
                                                        u604 = u593;
                                                        u605 = u594;
                                                        u606 = u595;
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t598 = t34;
                                                        t599 = t35;
                                                        t600 = t36;
                                                        t601 = t37;
                                                        t602 = t38;
                                                        t603 = t39;
                                                        u604 = u42;
                                                        u605 = u43;
                                                        u606 = u44;
                                                    }
                                                    t609 = t598;
                                                    t610 = t599;
                                                    t611 = t600;
                                                    t612 = t601;
                                                    t613 = t602;
                                                    t614 = t603;
                                                    u615 = u604;
                                                    u616 = u605;
                                                    u617 = u606;
                                                }
                                                t658 = t609;
                                                t659 = t610;
                                                t660 = t611;
                                                t661 = t612;
                                                t662 = t613;
                                                t663 = t614;
                                                u664 = u615;
                                                u665 = u616;
                                                u666 = u617;
                                            } else {
                                                t619 = *(int *)0xC1EE20C;
                                                if (t619 != 2) {
                                                    t35 = 0xC179828;
                                                    t620 = *(int *)((t35 + 0x0));
                                                    t36 = t620;
                                                    if (t36 == 0) {
                                                        t36 = 0xC1EE7EC;
                                                        t621 = *(int *)((t36 + 0x0));
                                                        if (t621 != 2) {
                                                            t37 = 0x2A9;
                                                            t36 = 0xC072168;
                                                            t34 = 0x4;
                                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                                            *(unsigned int *)0xC179120 = 0x0;
                                                            t38 = 0x0;
                                                            Sound_Request(t37, t38);
                                                            t35 = 0xC179828;
                                                            t36 = 0xC0200AA;
                                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                            t37 = t40;
                                                            FUN_0c0200aa(t37);
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t625 = t34;
                                                            t626 = t35;
                                                            t627 = t36;
                                                            t628 = t37;
                                                            t629 = t38;
                                                            t630 = t39;
                                                            u631 = u42;
                                                            u632 = u43;
                                                            u633 = u44;
                                                        }
                                                        t636 = t625;
                                                        t637 = t626;
                                                        t638 = t627;
                                                        t639 = t628;
                                                        t640 = t629;
                                                        t641 = t630;
                                                        u642 = u631;
                                                        u643 = u632;
                                                        u644 = u633;
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t636 = t34;
                                                        t637 = t35;
                                                        t638 = t36;
                                                        t639 = t37;
                                                        t640 = t38;
                                                        t641 = t39;
                                                        u642 = u42;
                                                        u643 = u43;
                                                        u644 = u44;
                                                    }
                                                    t647 = t636;
                                                    t648 = t637;
                                                    t649 = t638;
                                                    t650 = t639;
                                                    t651 = t640;
                                                    t652 = t641;
                                                    u653 = u642;
                                                    u654 = u643;
                                                    u655 = u644;
                                                } else {
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t647 = t34;
                                                    t648 = t35;
                                                    t649 = t36;
                                                    t650 = t37;
                                                    t651 = t38;
                                                    t652 = t39;
                                                    u653 = u42;
                                                    u654 = u43;
                                                    u655 = u44;
                                                }
                                                t658 = t647;
                                                t659 = t648;
                                                t660 = t649;
                                                t661 = t650;
                                                t662 = t651;
                                                t663 = t652;
                                                u664 = u653;
                                                u665 = u654;
                                                u666 = u655;
                                            }
                                            t669 = t658;
                                            t670 = t659;
                                            t671 = t660;
                                            t672 = t661;
                                            t673 = t662;
                                            t674 = t663;
                                            u675 = u664;
                                            u676 = u665;
                                            u677 = u666;
                                        }
                                        t996 = t669;
                                        t997 = t670;
                                        t998 = t671;
                                        t999 = t672;
                                        t1000 = t673;
                                        t1001 = t674;
                                        u1002 = u675;
                                        u1003 = u676;
                                        u1004 = u677;
                                    } else {
                                        t36 = 0xC1EE7EC;
                                        t679 = *(int *)((t36 + 0x0));
                                        if (t679 == 2) {
                                            t680 = *(int *)0xC1EE20C;
                                            if (t680 == 2) {
                                                t35 = 0xC1EE214;
                                                t681 = *(int *)((t35 + 0x0));
                                                if (t681 != 10) {
                                                    t34 = 0xC1EE214;
                                                    t682 = *(int *)((t34 + 0x0));
                                                    if (t682 != 11) {
                                                        t35 = 0xC1EE214;
                                                        t683 = *(int *)((t35 + 0x0));
                                                        if (t683 != 14) {
                                                            t36 = 0xC179828;
                                                            t684 = *(int *)((t36 + 0x0));
                                                            t34 = t684;
                                                            if (t34 == 0) {
                                                                t34 = 0xC1EE7EC;
                                                                t685 = *(int *)((t34 + 0x0));
                                                                if (t685 == 2) {
                                                                    t686 = *(int *)0xC1EE20C;
                                                                    if (t686 != 2) {
                                                                        t35 = 0xC179828;
                                                                        t687 = *(int *)((t35 + 0x0));
                                                                        t36 = t687;
                                                                        if (t36 == 0) {
                                                                            t36 = 0xC1EE7EC;
                                                                            t688 = *(int *)((t36 + 0x0));
                                                                            if (t688 != 2) {
                                                                                t37 = 0x2A9;
                                                                                t36 = 0xC072168;
                                                                                t34 = 0x4;
                                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                                t38 = 0x0;
                                                                                Sound_Request(t37, t38);
                                                                                t35 = 0xC179828;
                                                                                t36 = 0xC0200AA;
                                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                                t37 = t40;
                                                                                FUN_0c0200aa(t37);
                                                                            } else {
                                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                                t692 = t34;
                                                                                t693 = t35;
                                                                                t694 = t36;
                                                                                t695 = t37;
                                                                                t696 = t38;
                                                                                t697 = t39;
                                                                                u698 = u42;
                                                                                u699 = u43;
                                                                                u700 = u44;
                                                                            }
                                                                            t703 = t692;
                                                                            t704 = t693;
                                                                            t705 = t694;
                                                                            t706 = t695;
                                                                            t707 = t696;
                                                                            t708 = t697;
                                                                            u709 = u698;
                                                                            u710 = u699;
                                                                            u711 = u700;
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t703 = t34;
                                                                            t704 = t35;
                                                                            t705 = t36;
                                                                            t706 = t37;
                                                                            t707 = t38;
                                                                            t708 = t39;
                                                                            u709 = u42;
                                                                            u710 = u43;
                                                                            u711 = u44;
                                                                        }
                                                                        t714 = t703;
                                                                        t715 = t704;
                                                                        t716 = t705;
                                                                        t717 = t706;
                                                                        t718 = t707;
                                                                        t719 = t708;
                                                                        u720 = u709;
                                                                        u721 = u710;
                                                                        u722 = u711;
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t714 = t34;
                                                                        t715 = t35;
                                                                        t716 = t36;
                                                                        t717 = t37;
                                                                        t718 = t38;
                                                                        t719 = t39;
                                                                        u720 = u42;
                                                                        u721 = u43;
                                                                        u722 = u44;
                                                                    }
                                                                    t727 = t714;
                                                                    t728 = t715;
                                                                    t729 = t716;
                                                                    t730 = t717;
                                                                    t731 = t718;
                                                                    t732 = t719;
                                                                    u733 = u720;
                                                                    u734 = u721;
                                                                    u735 = u722;
                                                                } else {
                                                                    t37 = 0x2A9;
                                                                    t36 = 0xC072168;
                                                                    t34 = 0x4;
                                                                    *(unsigned int *)((t41 + 0x0)) = t34;
                                                                    *(unsigned int *)0xC179120 = 0x0;
                                                                    t38 = 0x0;
                                                                    Sound_Request(t37, t38);
                                                                    t35 = 0xC179828;
                                                                    t36 = 0xC0200AA;
                                                                    *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                    t37 = t40;
                                                                    FUN_0c0200aa(t37);
                                                                }
                                                                t776 = t727;
                                                                t777 = t728;
                                                                t778 = t729;
                                                                t779 = t730;
                                                                t780 = t731;
                                                                t781 = t732;
                                                                u782 = u733;
                                                                u783 = u734;
                                                                u784 = u735;
                                                            } else {
                                                                t737 = *(int *)0xC1EE20C;
                                                                if (t737 != 2) {
                                                                    t35 = 0xC179828;
                                                                    t738 = *(int *)((t35 + 0x0));
                                                                    t36 = t738;
                                                                    if (t36 == 0) {
                                                                        t36 = 0xC1EE7EC;
                                                                        t739 = *(int *)((t36 + 0x0));
                                                                        if (t739 != 2) {
                                                                            t37 = 0x2A9;
                                                                            t36 = 0xC072168;
                                                                            t34 = 0x4;
                                                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                                                            *(unsigned int *)0xC179120 = 0x0;
                                                                            t38 = 0x0;
                                                                            Sound_Request(t37, t38);
                                                                            t35 = 0xC179828;
                                                                            t36 = 0xC0200AA;
                                                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                            t37 = t40;
                                                                            FUN_0c0200aa(t37);
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t743 = t34;
                                                                            t744 = t35;
                                                                            t745 = t36;
                                                                            t746 = t37;
                                                                            t747 = t38;
                                                                            t748 = t39;
                                                                            u749 = u42;
                                                                            u750 = u43;
                                                                            u751 = u44;
                                                                        }
                                                                        t754 = t743;
                                                                        t755 = t744;
                                                                        t756 = t745;
                                                                        t757 = t746;
                                                                        t758 = t747;
                                                                        t759 = t748;
                                                                        u760 = u749;
                                                                        u761 = u750;
                                                                        u762 = u751;
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t754 = t34;
                                                                        t755 = t35;
                                                                        t756 = t36;
                                                                        t757 = t37;
                                                                        t758 = t38;
                                                                        t759 = t39;
                                                                        u760 = u42;
                                                                        u761 = u43;
                                                                        u762 = u44;
                                                                    }
                                                                    t765 = t754;
                                                                    t766 = t755;
                                                                    t767 = t756;
                                                                    t768 = t757;
                                                                    t769 = t758;
                                                                    t770 = t759;
                                                                    u771 = u760;
                                                                    u772 = u761;
                                                                    u773 = u762;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t765 = t34;
                                                                    t766 = t35;
                                                                    t767 = t36;
                                                                    t768 = t37;
                                                                    t769 = t38;
                                                                    t770 = t39;
                                                                    u771 = u42;
                                                                    u772 = u43;
                                                                    u773 = u44;
                                                                }
                                                                t776 = t765;
                                                                t777 = t766;
                                                                t778 = t767;
                                                                t779 = t768;
                                                                t780 = t769;
                                                                t781 = t770;
                                                                u782 = u771;
                                                                u783 = u772;
                                                                u784 = u773;
                                                            }
                                                            t825 = t776;
                                                            t826 = t777;
                                                            t827 = t778;
                                                            t828 = t779;
                                                            t829 = t780;
                                                            t830 = t781;
                                                            u831 = u782;
                                                            u832 = u783;
                                                            u833 = u784;
                                                        } else {
                                                            t786 = *(int *)0xC1EE20C;
                                                            if (t786 != 2) {
                                                                t35 = 0xC179828;
                                                                t787 = *(int *)((t35 + 0x0));
                                                                t36 = t787;
                                                                if (t36 == 0) {
                                                                    t36 = 0xC1EE7EC;
                                                                    t788 = *(int *)((t36 + 0x0));
                                                                    if (t788 != 2) {
                                                                        t37 = 0x2A9;
                                                                        t36 = 0xC072168;
                                                                        t34 = 0x4;
                                                                        *(unsigned int *)((t41 + 0x0)) = t34;
                                                                        *(unsigned int *)0xC179120 = 0x0;
                                                                        t38 = 0x0;
                                                                        Sound_Request(t37, t38);
                                                                        t35 = 0xC179828;
                                                                        t36 = 0xC0200AA;
                                                                        *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                        t37 = t40;
                                                                        FUN_0c0200aa(t37);
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t792 = t34;
                                                                        t793 = t35;
                                                                        t794 = t36;
                                                                        t795 = t37;
                                                                        t796 = t38;
                                                                        t797 = t39;
                                                                        u798 = u42;
                                                                        u799 = u43;
                                                                        u800 = u44;
                                                                    }
                                                                    t803 = t792;
                                                                    t804 = t793;
                                                                    t805 = t794;
                                                                    t806 = t795;
                                                                    t807 = t796;
                                                                    t808 = t797;
                                                                    u809 = u798;
                                                                    u810 = u799;
                                                                    u811 = u800;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t803 = t34;
                                                                    t804 = t35;
                                                                    t805 = t36;
                                                                    t806 = t37;
                                                                    t807 = t38;
                                                                    t808 = t39;
                                                                    u809 = u42;
                                                                    u810 = u43;
                                                                    u811 = u44;
                                                                }
                                                                t814 = t803;
                                                                t815 = t804;
                                                                t816 = t805;
                                                                t817 = t806;
                                                                t818 = t807;
                                                                t819 = t808;
                                                                u820 = u809;
                                                                u821 = u810;
                                                                u822 = u811;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t814 = t34;
                                                                t815 = t35;
                                                                t816 = t36;
                                                                t817 = t37;
                                                                t818 = t38;
                                                                t819 = t39;
                                                                u820 = u42;
                                                                u821 = u43;
                                                                u822 = u44;
                                                            }
                                                            t825 = t814;
                                                            t826 = t815;
                                                            t827 = t816;
                                                            t828 = t817;
                                                            t829 = t818;
                                                            t830 = t819;
                                                            u831 = u820;
                                                            u832 = u821;
                                                            u833 = u822;
                                                        }
                                                        t874 = t825;
                                                        t875 = t826;
                                                        t876 = t827;
                                                        t877 = t828;
                                                        t878 = t829;
                                                        t879 = t830;
                                                        u880 = u831;
                                                        u881 = u832;
                                                        u882 = u833;
                                                    } else {
                                                        t835 = *(int *)0xC1EE20C;
                                                        if (t835 != 2) {
                                                            t35 = 0xC179828;
                                                            t836 = *(int *)((t35 + 0x0));
                                                            t36 = t836;
                                                            if (t36 == 0) {
                                                                t36 = 0xC1EE7EC;
                                                                t837 = *(int *)((t36 + 0x0));
                                                                if (t837 != 2) {
                                                                    t37 = 0x2A9;
                                                                    t36 = 0xC072168;
                                                                    t34 = 0x4;
                                                                    *(unsigned int *)((t41 + 0x0)) = t34;
                                                                    *(unsigned int *)0xC179120 = 0x0;
                                                                    t38 = 0x0;
                                                                    Sound_Request(t37, t38);
                                                                    t35 = 0xC179828;
                                                                    t36 = 0xC0200AA;
                                                                    *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                    t37 = t40;
                                                                    FUN_0c0200aa(t37);
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t841 = t34;
                                                                    t842 = t35;
                                                                    t843 = t36;
                                                                    t844 = t37;
                                                                    t845 = t38;
                                                                    t846 = t39;
                                                                    u847 = u42;
                                                                    u848 = u43;
                                                                    u849 = u44;
                                                                }
                                                                t852 = t841;
                                                                t853 = t842;
                                                                t854 = t843;
                                                                t855 = t844;
                                                                t856 = t845;
                                                                t857 = t846;
                                                                u858 = u847;
                                                                u859 = u848;
                                                                u860 = u849;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t852 = t34;
                                                                t853 = t35;
                                                                t854 = t36;
                                                                t855 = t37;
                                                                t856 = t38;
                                                                t857 = t39;
                                                                u858 = u42;
                                                                u859 = u43;
                                                                u860 = u44;
                                                            }
                                                            t863 = t852;
                                                            t864 = t853;
                                                            t865 = t854;
                                                            t866 = t855;
                                                            t867 = t856;
                                                            t868 = t857;
                                                            u869 = u858;
                                                            u870 = u859;
                                                            u871 = u860;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t863 = t34;
                                                            t864 = t35;
                                                            t865 = t36;
                                                            t866 = t37;
                                                            t867 = t38;
                                                            t868 = t39;
                                                            u869 = u42;
                                                            u870 = u43;
                                                            u871 = u44;
                                                        }
                                                        t874 = t863;
                                                        t875 = t864;
                                                        t876 = t865;
                                                        t877 = t866;
                                                        t878 = t867;
                                                        t879 = t868;
                                                        u880 = u869;
                                                        u881 = u870;
                                                        u882 = u871;
                                                    }
                                                    t923 = t874;
                                                    t924 = t875;
                                                    t925 = t876;
                                                    t926 = t877;
                                                    t927 = t878;
                                                    t928 = t879;
                                                    u929 = u880;
                                                    u930 = u881;
                                                    u931 = u882;
                                                } else {
                                                    t884 = *(int *)0xC1EE20C;
                                                    if (t884 != 2) {
                                                        t35 = 0xC179828;
                                                        t885 = *(int *)((t35 + 0x0));
                                                        t36 = t885;
                                                        if (t36 == 0) {
                                                            t36 = 0xC1EE7EC;
                                                            t886 = *(int *)((t36 + 0x0));
                                                            if (t886 != 2) {
                                                                t37 = 0x2A9;
                                                                t36 = 0xC072168;
                                                                t34 = 0x4;
                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                t38 = 0x0;
                                                                Sound_Request(t37, t38);
                                                                t35 = 0xC179828;
                                                                t36 = 0xC0200AA;
                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                t37 = t40;
                                                                FUN_0c0200aa(t37);
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t890 = t34;
                                                                t891 = t35;
                                                                t892 = t36;
                                                                t893 = t37;
                                                                t894 = t38;
                                                                t895 = t39;
                                                                u896 = u42;
                                                                u897 = u43;
                                                                u898 = u44;
                                                            }
                                                            t901 = t890;
                                                            t902 = t891;
                                                            t903 = t892;
                                                            t904 = t893;
                                                            t905 = t894;
                                                            t906 = t895;
                                                            u907 = u896;
                                                            u908 = u897;
                                                            u909 = u898;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t901 = t34;
                                                            t902 = t35;
                                                            t903 = t36;
                                                            t904 = t37;
                                                            t905 = t38;
                                                            t906 = t39;
                                                            u907 = u42;
                                                            u908 = u43;
                                                            u909 = u44;
                                                        }
                                                        t912 = t901;
                                                        t913 = t902;
                                                        t914 = t903;
                                                        t915 = t904;
                                                        t916 = t905;
                                                        t917 = t906;
                                                        u918 = u907;
                                                        u919 = u908;
                                                        u920 = u909;
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t912 = t34;
                                                        t913 = t35;
                                                        t914 = t36;
                                                        t915 = t37;
                                                        t916 = t38;
                                                        t917 = t39;
                                                        u918 = u42;
                                                        u919 = u43;
                                                        u920 = u44;
                                                    }
                                                    t923 = t912;
                                                    t924 = t913;
                                                    t925 = t914;
                                                    t926 = t915;
                                                    t927 = t916;
                                                    t928 = t917;
                                                    u929 = u918;
                                                    u930 = u919;
                                                    u931 = u920;
                                                }
                                                t972 = t923;
                                                t973 = t924;
                                                t974 = t925;
                                                t975 = t926;
                                                t976 = t927;
                                                t977 = t928;
                                                u978 = u929;
                                                u979 = u930;
                                                u980 = u931;
                                            } else {
                                                t933 = *(int *)0xC1EE20C;
                                                if (t933 != 2) {
                                                    t35 = 0xC179828;
                                                    t934 = *(int *)((t35 + 0x0));
                                                    t36 = t934;
                                                    if (t36 == 0) {
                                                        t36 = 0xC1EE7EC;
                                                        t935 = *(int *)((t36 + 0x0));
                                                        if (t935 != 2) {
                                                            t37 = 0x2A9;
                                                            t36 = 0xC072168;
                                                            t34 = 0x4;
                                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                                            *(unsigned int *)0xC179120 = 0x0;
                                                            t38 = 0x0;
                                                            Sound_Request(t37, t38);
                                                            t35 = 0xC179828;
                                                            t36 = 0xC0200AA;
                                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                            t37 = t40;
                                                            FUN_0c0200aa(t37);
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t939 = t34;
                                                            t940 = t35;
                                                            t941 = t36;
                                                            t942 = t37;
                                                            t943 = t38;
                                                            t944 = t39;
                                                            u945 = u42;
                                                            u946 = u43;
                                                            u947 = u44;
                                                        }
                                                        t950 = t939;
                                                        t951 = t940;
                                                        t952 = t941;
                                                        t953 = t942;
                                                        t954 = t943;
                                                        t955 = t944;
                                                        u956 = u945;
                                                        u957 = u946;
                                                        u958 = u947;
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t950 = t34;
                                                        t951 = t35;
                                                        t952 = t36;
                                                        t953 = t37;
                                                        t954 = t38;
                                                        t955 = t39;
                                                        u956 = u42;
                                                        u957 = u43;
                                                        u958 = u44;
                                                    }
                                                    t961 = t950;
                                                    t962 = t951;
                                                    t963 = t952;
                                                    t964 = t953;
                                                    t965 = t954;
                                                    t966 = t955;
                                                    u967 = u956;
                                                    u968 = u957;
                                                    u969 = u958;
                                                } else {
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t961 = t34;
                                                    t962 = t35;
                                                    t963 = t36;
                                                    t964 = t37;
                                                    t965 = t38;
                                                    t966 = t39;
                                                    u967 = u42;
                                                    u968 = u43;
                                                    u969 = u44;
                                                }
                                                t972 = t961;
                                                t973 = t962;
                                                t974 = t963;
                                                t975 = t964;
                                                t976 = t965;
                                                t977 = t966;
                                                u978 = u967;
                                                u979 = u968;
                                                u980 = u969;
                                            }
                                            t985 = t972;
                                            t986 = t973;
                                            t987 = t974;
                                            t988 = t975;
                                            t989 = t976;
                                            t990 = t977;
                                            u991 = u978;
                                            u992 = u979;
                                            u993 = u980;
                                        } else {
                                            t37 = 0x2A9;
                                            t36 = 0xC072168;
                                            t34 = 0x4;
                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                            *(unsigned int *)0xC179120 = 0x0;
                                            t38 = 0x0;
                                            Sound_Request(t37, t38);
                                            t35 = 0xC179828;
                                            t36 = 0xC0200AA;
                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                            t37 = t40;
                                            FUN_0c0200aa(t37);
                                        }
                                        t996 = t985;
                                        t997 = t986;
                                        t998 = t987;
                                        t999 = t988;
                                        t1000 = t989;
                                        t1001 = t990;
                                        u1002 = u991;
                                        u1003 = u992;
                                        u1004 = u993;
                                    }
                                    t1323 = t996;
                                    t1324 = t997;
                                    t1325 = t998;
                                    t1326 = t999;
                                    t1327 = t1000;
                                    t1328 = t1001;
                                    u1329 = u1002;
                                    u1330 = u1003;
                                    u1331 = u1004;
                                } else {
                                    t36 = 0xC1EE7EC;
                                    t1006 = *(int *)((t36 + 0x0));
                                    if (t1006 == 2) {
                                        t1007 = *(int *)0xC1EE20C;
                                        if (t1007 == 2) {
                                            t35 = 0xC1EE214;
                                            t1008 = *(int *)((t35 + 0x0));
                                            if (t1008 != 10) {
                                                t34 = 0xC1EE214;
                                                t1009 = *(int *)((t34 + 0x0));
                                                if (t1009 != 11) {
                                                    t35 = 0xC1EE214;
                                                    t1010 = *(int *)((t35 + 0x0));
                                                    if (t1010 != 14) {
                                                        t36 = 0xC179828;
                                                        t1011 = *(int *)((t36 + 0x0));
                                                        t34 = t1011;
                                                        if (t34 == 0) {
                                                            t34 = 0xC1EE7EC;
                                                            t1012 = *(int *)((t34 + 0x0));
                                                            if (t1012 == 2) {
                                                                t1013 = *(int *)0xC1EE20C;
                                                                if (t1013 != 2) {
                                                                    t35 = 0xC179828;
                                                                    t1014 = *(int *)((t35 + 0x0));
                                                                    t36 = t1014;
                                                                    if (t36 == 0) {
                                                                        t36 = 0xC1EE7EC;
                                                                        t1015 = *(int *)((t36 + 0x0));
                                                                        if (t1015 != 2) {
                                                                            t37 = 0x2A9;
                                                                            t36 = 0xC072168;
                                                                            t34 = 0x4;
                                                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                                                            *(unsigned int *)0xC179120 = 0x0;
                                                                            t38 = 0x0;
                                                                            Sound_Request(t37, t38);
                                                                            t35 = 0xC179828;
                                                                            t36 = 0xC0200AA;
                                                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                            t37 = t40;
                                                                            FUN_0c0200aa(t37);
                                                                        } else {
                                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                            t1019 = t34;
                                                                            t1020 = t35;
                                                                            t1021 = t36;
                                                                            t1022 = t37;
                                                                            t1023 = t38;
                                                                            t1024 = t39;
                                                                            u1025 = u42;
                                                                            u1026 = u43;
                                                                            u1027 = u44;
                                                                        }
                                                                        t1030 = t1019;
                                                                        t1031 = t1020;
                                                                        t1032 = t1021;
                                                                        t1033 = t1022;
                                                                        t1034 = t1023;
                                                                        t1035 = t1024;
                                                                        u1036 = u1025;
                                                                        u1037 = u1026;
                                                                        u1038 = u1027;
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t1030 = t34;
                                                                        t1031 = t35;
                                                                        t1032 = t36;
                                                                        t1033 = t37;
                                                                        t1034 = t38;
                                                                        t1035 = t39;
                                                                        u1036 = u42;
                                                                        u1037 = u43;
                                                                        u1038 = u44;
                                                                    }
                                                                    t1041 = t1030;
                                                                    t1042 = t1031;
                                                                    t1043 = t1032;
                                                                    t1044 = t1033;
                                                                    t1045 = t1034;
                                                                    t1046 = t1035;
                                                                    u1047 = u1036;
                                                                    u1048 = u1037;
                                                                    u1049 = u1038;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t1041 = t34;
                                                                    t1042 = t35;
                                                                    t1043 = t36;
                                                                    t1044 = t37;
                                                                    t1045 = t38;
                                                                    t1046 = t39;
                                                                    u1047 = u42;
                                                                    u1048 = u43;
                                                                    u1049 = u44;
                                                                }
                                                                t1054 = t1041;
                                                                t1055 = t1042;
                                                                t1056 = t1043;
                                                                t1057 = t1044;
                                                                t1058 = t1045;
                                                                t1059 = t1046;
                                                                u1060 = u1047;
                                                                u1061 = u1048;
                                                                u1062 = u1049;
                                                            } else {
                                                                t37 = 0x2A9;
                                                                t36 = 0xC072168;
                                                                t34 = 0x4;
                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                t38 = 0x0;
                                                                Sound_Request(t37, t38);
                                                                t35 = 0xC179828;
                                                                t36 = 0xC0200AA;
                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                t37 = t40;
                                                                FUN_0c0200aa(t37);
                                                            }
                                                            t1103 = t1054;
                                                            t1104 = t1055;
                                                            t1105 = t1056;
                                                            t1106 = t1057;
                                                            t1107 = t1058;
                                                            t1108 = t1059;
                                                            u1109 = u1060;
                                                            u1110 = u1061;
                                                            u1111 = u1062;
                                                        } else {
                                                            t1064 = *(int *)0xC1EE20C;
                                                            if (t1064 != 2) {
                                                                t35 = 0xC179828;
                                                                t1065 = *(int *)((t35 + 0x0));
                                                                t36 = t1065;
                                                                if (t36 == 0) {
                                                                    t36 = 0xC1EE7EC;
                                                                    t1066 = *(int *)((t36 + 0x0));
                                                                    if (t1066 != 2) {
                                                                        t37 = 0x2A9;
                                                                        t36 = 0xC072168;
                                                                        t34 = 0x4;
                                                                        *(unsigned int *)((t41 + 0x0)) = t34;
                                                                        *(unsigned int *)0xC179120 = 0x0;
                                                                        t38 = 0x0;
                                                                        Sound_Request(t37, t38);
                                                                        t35 = 0xC179828;
                                                                        t36 = 0xC0200AA;
                                                                        *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                        t37 = t40;
                                                                        FUN_0c0200aa(t37);
                                                                    } else {
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t1070 = t34;
                                                                        t1071 = t35;
                                                                        t1072 = t36;
                                                                        t1073 = t37;
                                                                        t1074 = t38;
                                                                        t1075 = t39;
                                                                        u1076 = u42;
                                                                        u1077 = u43;
                                                                        u1078 = u44;
                                                                    }
                                                                    t1081 = t1070;
                                                                    t1082 = t1071;
                                                                    t1083 = t1072;
                                                                    t1084 = t1073;
                                                                    t1085 = t1074;
                                                                    t1086 = t1075;
                                                                    u1087 = u1076;
                                                                    u1088 = u1077;
                                                                    u1089 = u1078;
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t1081 = t34;
                                                                    t1082 = t35;
                                                                    t1083 = t36;
                                                                    t1084 = t37;
                                                                    t1085 = t38;
                                                                    t1086 = t39;
                                                                    u1087 = u42;
                                                                    u1088 = u43;
                                                                    u1089 = u44;
                                                                }
                                                                t1092 = t1081;
                                                                t1093 = t1082;
                                                                t1094 = t1083;
                                                                t1095 = t1084;
                                                                t1096 = t1085;
                                                                t1097 = t1086;
                                                                u1098 = u1087;
                                                                u1099 = u1088;
                                                                u1100 = u1089;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t1092 = t34;
                                                                t1093 = t35;
                                                                t1094 = t36;
                                                                t1095 = t37;
                                                                t1096 = t38;
                                                                t1097 = t39;
                                                                u1098 = u42;
                                                                u1099 = u43;
                                                                u1100 = u44;
                                                            }
                                                            t1103 = t1092;
                                                            t1104 = t1093;
                                                            t1105 = t1094;
                                                            t1106 = t1095;
                                                            t1107 = t1096;
                                                            t1108 = t1097;
                                                            u1109 = u1098;
                                                            u1110 = u1099;
                                                            u1111 = u1100;
                                                        }
                                                        t1152 = t1103;
                                                        t1153 = t1104;
                                                        t1154 = t1105;
                                                        t1155 = t1106;
                                                        t1156 = t1107;
                                                        t1157 = t1108;
                                                        u1158 = u1109;
                                                        u1159 = u1110;
                                                        u1160 = u1111;
                                                    } else {
                                                        t1113 = *(int *)0xC1EE20C;
                                                        if (t1113 != 2) {
                                                            t35 = 0xC179828;
                                                            t1114 = *(int *)((t35 + 0x0));
                                                            t36 = t1114;
                                                            if (t36 == 0) {
                                                                t36 = 0xC1EE7EC;
                                                                t1115 = *(int *)((t36 + 0x0));
                                                                if (t1115 != 2) {
                                                                    t37 = 0x2A9;
                                                                    t36 = 0xC072168;
                                                                    t34 = 0x4;
                                                                    *(unsigned int *)((t41 + 0x0)) = t34;
                                                                    *(unsigned int *)0xC179120 = 0x0;
                                                                    t38 = 0x0;
                                                                    Sound_Request(t37, t38);
                                                                    t35 = 0xC179828;
                                                                    t36 = 0xC0200AA;
                                                                    *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                    t37 = t40;
                                                                    FUN_0c0200aa(t37);
                                                                } else {
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t1119 = t34;
                                                                    t1120 = t35;
                                                                    t1121 = t36;
                                                                    t1122 = t37;
                                                                    t1123 = t38;
                                                                    t1124 = t39;
                                                                    u1125 = u42;
                                                                    u1126 = u43;
                                                                    u1127 = u44;
                                                                }
                                                                t1130 = t1119;
                                                                t1131 = t1120;
                                                                t1132 = t1121;
                                                                t1133 = t1122;
                                                                t1134 = t1123;
                                                                t1135 = t1124;
                                                                u1136 = u1125;
                                                                u1137 = u1126;
                                                                u1138 = u1127;
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t1130 = t34;
                                                                t1131 = t35;
                                                                t1132 = t36;
                                                                t1133 = t37;
                                                                t1134 = t38;
                                                                t1135 = t39;
                                                                u1136 = u42;
                                                                u1137 = u43;
                                                                u1138 = u44;
                                                            }
                                                            t1141 = t1130;
                                                            t1142 = t1131;
                                                            t1143 = t1132;
                                                            t1144 = t1133;
                                                            t1145 = t1134;
                                                            t1146 = t1135;
                                                            u1147 = u1136;
                                                            u1148 = u1137;
                                                            u1149 = u1138;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t1141 = t34;
                                                            t1142 = t35;
                                                            t1143 = t36;
                                                            t1144 = t37;
                                                            t1145 = t38;
                                                            t1146 = t39;
                                                            u1147 = u42;
                                                            u1148 = u43;
                                                            u1149 = u44;
                                                        }
                                                        t1152 = t1141;
                                                        t1153 = t1142;
                                                        t1154 = t1143;
                                                        t1155 = t1144;
                                                        t1156 = t1145;
                                                        t1157 = t1146;
                                                        u1158 = u1147;
                                                        u1159 = u1148;
                                                        u1160 = u1149;
                                                    }
                                                    t1201 = t1152;
                                                    t1202 = t1153;
                                                    t1203 = t1154;
                                                    t1204 = t1155;
                                                    t1205 = t1156;
                                                    t1206 = t1157;
                                                    u1207 = u1158;
                                                    u1208 = u1159;
                                                    u1209 = u1160;
                                                } else {
                                                    t1162 = *(int *)0xC1EE20C;
                                                    if (t1162 != 2) {
                                                        t35 = 0xC179828;
                                                        t1163 = *(int *)((t35 + 0x0));
                                                        t36 = t1163;
                                                        if (t36 == 0) {
                                                            t36 = 0xC1EE7EC;
                                                            t1164 = *(int *)((t36 + 0x0));
                                                            if (t1164 != 2) {
                                                                t37 = 0x2A9;
                                                                t36 = 0xC072168;
                                                                t34 = 0x4;
                                                                *(unsigned int *)((t41 + 0x0)) = t34;
                                                                *(unsigned int *)0xC179120 = 0x0;
                                                                t38 = 0x0;
                                                                Sound_Request(t37, t38);
                                                                t35 = 0xC179828;
                                                                t36 = 0xC0200AA;
                                                                *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                                t37 = t40;
                                                                FUN_0c0200aa(t37);
                                                            } else {
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t1168 = t34;
                                                                t1169 = t35;
                                                                t1170 = t36;
                                                                t1171 = t37;
                                                                t1172 = t38;
                                                                t1173 = t39;
                                                                u1174 = u42;
                                                                u1175 = u43;
                                                                u1176 = u44;
                                                            }
                                                            t1179 = t1168;
                                                            t1180 = t1169;
                                                            t1181 = t1170;
                                                            t1182 = t1171;
                                                            t1183 = t1172;
                                                            t1184 = t1173;
                                                            u1185 = u1174;
                                                            u1186 = u1175;
                                                            u1187 = u1176;
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t1179 = t34;
                                                            t1180 = t35;
                                                            t1181 = t36;
                                                            t1182 = t37;
                                                            t1183 = t38;
                                                            t1184 = t39;
                                                            u1185 = u42;
                                                            u1186 = u43;
                                                            u1187 = u44;
                                                        }
                                                        t1190 = t1179;
                                                        t1191 = t1180;
                                                        t1192 = t1181;
                                                        t1193 = t1182;
                                                        t1194 = t1183;
                                                        t1195 = t1184;
                                                        u1196 = u1185;
                                                        u1197 = u1186;
                                                        u1198 = u1187;
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t1190 = t34;
                                                        t1191 = t35;
                                                        t1192 = t36;
                                                        t1193 = t37;
                                                        t1194 = t38;
                                                        t1195 = t39;
                                                        u1196 = u42;
                                                        u1197 = u43;
                                                        u1198 = u44;
                                                    }
                                                    t1201 = t1190;
                                                    t1202 = t1191;
                                                    t1203 = t1192;
                                                    t1204 = t1193;
                                                    t1205 = t1194;
                                                    t1206 = t1195;
                                                    u1207 = u1196;
                                                    u1208 = u1197;
                                                    u1209 = u1198;
                                                }
                                                t1250 = t1201;
                                                t1251 = t1202;
                                                t1252 = t1203;
                                                t1253 = t1204;
                                                t1254 = t1205;
                                                t1255 = t1206;
                                                u1256 = u1207;
                                                u1257 = u1208;
                                                u1258 = u1209;
                                            } else {
                                                t1211 = *(int *)0xC1EE20C;
                                                if (t1211 != 2) {
                                                    t35 = 0xC179828;
                                                    t1212 = *(int *)((t35 + 0x0));
                                                    t36 = t1212;
                                                    if (t36 == 0) {
                                                        t36 = 0xC1EE7EC;
                                                        t1213 = *(int *)((t36 + 0x0));
                                                        if (t1213 != 2) {
                                                            t37 = 0x2A9;
                                                            t36 = 0xC072168;
                                                            t34 = 0x4;
                                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                                            *(unsigned int *)0xC179120 = 0x0;
                                                            t38 = 0x0;
                                                            Sound_Request(t37, t38);
                                                            t35 = 0xC179828;
                                                            t36 = 0xC0200AA;
                                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                            t37 = t40;
                                                            FUN_0c0200aa(t37);
                                                        } else {
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t1217 = t34;
                                                            t1218 = t35;
                                                            t1219 = t36;
                                                            t1220 = t37;
                                                            t1221 = t38;
                                                            t1222 = t39;
                                                            u1223 = u42;
                                                            u1224 = u43;
                                                            u1225 = u44;
                                                        }
                                                        t1228 = t1217;
                                                        t1229 = t1218;
                                                        t1230 = t1219;
                                                        t1231 = t1220;
                                                        t1232 = t1221;
                                                        t1233 = t1222;
                                                        u1234 = u1223;
                                                        u1235 = u1224;
                                                        u1236 = u1225;
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t1228 = t34;
                                                        t1229 = t35;
                                                        t1230 = t36;
                                                        t1231 = t37;
                                                        t1232 = t38;
                                                        t1233 = t39;
                                                        u1234 = u42;
                                                        u1235 = u43;
                                                        u1236 = u44;
                                                    }
                                                    t1239 = t1228;
                                                    t1240 = t1229;
                                                    t1241 = t1230;
                                                    t1242 = t1231;
                                                    t1243 = t1232;
                                                    t1244 = t1233;
                                                    u1245 = u1234;
                                                    u1246 = u1235;
                                                    u1247 = u1236;
                                                } else {
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t1239 = t34;
                                                    t1240 = t35;
                                                    t1241 = t36;
                                                    t1242 = t37;
                                                    t1243 = t38;
                                                    t1244 = t39;
                                                    u1245 = u42;
                                                    u1246 = u43;
                                                    u1247 = u44;
                                                }
                                                t1250 = t1239;
                                                t1251 = t1240;
                                                t1252 = t1241;
                                                t1253 = t1242;
                                                t1254 = t1243;
                                                t1255 = t1244;
                                                u1256 = u1245;
                                                u1257 = u1246;
                                                u1258 = u1247;
                                            }
                                            t1299 = t1250;
                                            t1300 = t1251;
                                            t1301 = t1252;
                                            t1302 = t1253;
                                            t1303 = t1254;
                                            t1304 = t1255;
                                            u1305 = u1256;
                                            u1306 = u1257;
                                            u1307 = u1258;
                                        } else {
                                            t1260 = *(int *)0xC1EE20C;
                                            if (t1260 != 2) {
                                                t35 = 0xC179828;
                                                t1261 = *(int *)((t35 + 0x0));
                                                t36 = t1261;
                                                if (t36 == 0) {
                                                    t36 = 0xC1EE7EC;
                                                    t1262 = *(int *)((t36 + 0x0));
                                                    if (t1262 != 2) {
                                                        t37 = 0x2A9;
                                                        t36 = 0xC072168;
                                                        t34 = 0x4;
                                                        *(unsigned int *)((t41 + 0x0)) = t34;
                                                        *(unsigned int *)0xC179120 = 0x0;
                                                        t38 = 0x0;
                                                        Sound_Request(t37, t38);
                                                        t35 = 0xC179828;
                                                        t36 = 0xC0200AA;
                                                        *(unsigned int *)((t35 + 0x0)) = 0x1;
                                                        t37 = t40;
                                                        FUN_0c0200aa(t37);
                                                    } else {
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t1266 = t34;
                                                        t1267 = t35;
                                                        t1268 = t36;
                                                        t1269 = t37;
                                                        t1270 = t38;
                                                        t1271 = t39;
                                                        u1272 = u42;
                                                        u1273 = u43;
                                                        u1274 = u44;
                                                    }
                                                    t1277 = t1266;
                                                    t1278 = t1267;
                                                    t1279 = t1268;
                                                    t1280 = t1269;
                                                    t1281 = t1270;
                                                    t1282 = t1271;
                                                    u1283 = u1272;
                                                    u1284 = u1273;
                                                    u1285 = u1274;
                                                } else {
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t1277 = t34;
                                                    t1278 = t35;
                                                    t1279 = t36;
                                                    t1280 = t37;
                                                    t1281 = t38;
                                                    t1282 = t39;
                                                    u1283 = u42;
                                                    u1284 = u43;
                                                    u1285 = u44;
                                                }
                                                t1288 = t1277;
                                                t1289 = t1278;
                                                t1290 = t1279;
                                                t1291 = t1280;
                                                t1292 = t1281;
                                                t1293 = t1282;
                                                u1294 = u1283;
                                                u1295 = u1284;
                                                u1296 = u1285;
                                            } else {
                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                t1288 = t34;
                                                t1289 = t35;
                                                t1290 = t36;
                                                t1291 = t37;
                                                t1292 = t38;
                                                t1293 = t39;
                                                u1294 = u42;
                                                u1295 = u43;
                                                u1296 = u44;
                                            }
                                            t1299 = t1288;
                                            t1300 = t1289;
                                            t1301 = t1290;
                                            t1302 = t1291;
                                            t1303 = t1292;
                                            t1304 = t1293;
                                            u1305 = u1294;
                                            u1306 = u1295;
                                            u1307 = u1296;
                                        }
                                        t1312 = t1299;
                                        t1313 = t1300;
                                        t1314 = t1301;
                                        t1315 = t1302;
                                        t1316 = t1303;
                                        t1317 = t1304;
                                        u1318 = u1305;
                                        u1319 = u1306;
                                        u1320 = u1307;
                                    } else {
                                        t37 = 0x2A9;
                                        t36 = 0xC072168;
                                        t34 = 0x4;
                                        *(unsigned int *)((t41 + 0x0)) = t34;
                                        *(unsigned int *)0xC179120 = 0x0;
                                        t38 = 0x0;
                                        Sound_Request(t37, t38);
                                        t35 = 0xC179828;
                                        t36 = 0xC0200AA;
                                        *(unsigned int *)((t35 + 0x0)) = 0x1;
                                        t37 = t40;
                                        FUN_0c0200aa(t37);
                                    }
                                    t1323 = t1312;
                                    t1324 = t1313;
                                    t1325 = t1314;
                                    t1326 = t1315;
                                    t1327 = t1316;
                                    t1328 = t1317;
                                    u1329 = u1318;
                                    u1330 = u1319;
                                    u1331 = u1320;
                                }
                                t1372 = t1323;
                                t1373 = t1324;
                                t1374 = t1325;
                                t1375 = t1326;
                                t1376 = t1327;
                                t1377 = t1328;
                                u1378 = u1329;
                                u1379 = u1330;
                                u1380 = u1331;
                            } else {
                                t1333 = *(int *)0xC1EE20C;
                                if (t1333 != 2) {
                                    t35 = 0xC179828;
                                    t1334 = *(int *)((t35 + 0x0));
                                    t36 = t1334;
                                    if (t36 == 0) {
                                        t36 = 0xC1EE7EC;
                                        t1335 = *(int *)((t36 + 0x0));
                                        if (t1335 != 2) {
                                            t37 = 0x2A9;
                                            t36 = 0xC072168;
                                            t34 = 0x4;
                                            *(unsigned int *)((t41 + 0x0)) = t34;
                                            *(unsigned int *)0xC179120 = 0x0;
                                            t38 = 0x0;
                                            Sound_Request(t37, t38);
                                            t35 = 0xC179828;
                                            t36 = 0xC0200AA;
                                            *(unsigned int *)((t35 + 0x0)) = 0x1;
                                            t37 = t40;
                                            FUN_0c0200aa(t37);
                                        } else {
                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                            t1339 = t34;
                                            t1340 = t35;
                                            t1341 = t36;
                                            t1342 = t37;
                                            t1343 = t38;
                                            t1344 = t39;
                                            u1345 = u42;
                                            u1346 = u43;
                                            u1347 = u44;
                                        }
                                        t1350 = t1339;
                                        t1351 = t1340;
                                        t1352 = t1341;
                                        t1353 = t1342;
                                        t1354 = t1343;
                                        t1355 = t1344;
                                        u1356 = u1345;
                                        u1357 = u1346;
                                        u1358 = u1347;
                                    } else {
                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                        t1350 = t34;
                                        t1351 = t35;
                                        t1352 = t36;
                                        t1353 = t37;
                                        t1354 = t38;
                                        t1355 = t39;
                                        u1356 = u42;
                                        u1357 = u43;
                                        u1358 = u44;
                                    }
                                    t1361 = t1350;
                                    t1362 = t1351;
                                    t1363 = t1352;
                                    t1364 = t1353;
                                    t1365 = t1354;
                                    t1366 = t1355;
                                    u1367 = u1356;
                                    u1368 = u1357;
                                    u1369 = u1358;
                                } else {
                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                    t1361 = t34;
                                    t1362 = t35;
                                    t1363 = t36;
                                    t1364 = t37;
                                    t1365 = t38;
                                    t1366 = t39;
                                    u1367 = u42;
                                    u1368 = u43;
                                    u1369 = u44;
                                }
                                t1372 = t1361;
                                t1373 = t1362;
                                t1374 = t1363;
                                t1375 = t1364;
                                t1376 = t1365;
                                t1377 = t1366;
                                u1378 = u1367;
                                u1379 = u1368;
                                u1380 = u1369;
                            }
                            t1439 = t1372;
                            t1440 = t1373;
                            t1441 = t1374;
                            t1442 = t1375;
                            t1443 = t1376;
                            t1444 = t1377;
                            u1445 = u1378;
                            u1446 = u1379;
                            u1447 = u1380;
                        } else {
                            if (t45 == 4) {
                                t36 = 0xC1789DF;
                                t1382 = *(signed char *)((t36 + 0x0));
                                if ((unsigned char)t1382 == 1) {
                                    t34 = 0xC0769A0;
                                    t38 = 0x1;
                                    t37 = 0x2;
                                    nlLocate(t37, t38);
                                    t36 = 0xC076A30;
                                    t37 = 0xFFFFFF00;
                                    nlPrintColor(t37);
                                    t36 = 0xC076A40;
                                    t35 = 0xC08AA48;
                                    nlPrintf(t35, t40);
                                    t35 = 0xC076A30;
                                    t37 = 0xFFFFFFFF;
                                    nlPrintColor(t37);
                                } else {
                                    t1388 = t34;
                                    t1389 = t35;
                                    t1390 = t36;
                                    t1391 = t37;
                                    t1392 = t38;
                                    t1393 = t39;
                                    u1394 = u42;
                                    u1395 = u43;
                                    u1396 = u44;
                                }
                                t1428 = t1388;
                                t1429 = t1389;
                                t1430 = t1390;
                                t1431 = t1391;
                                t1432 = t1392;
                                t1433 = t1393;
                                u1434 = u1394;
                                u1435 = u1395;
                                u1436 = u1396;
                            } else {
                                if (t45 == 5) {
                                    t36 = 0xC1789DF;
                                    t1398 = *(signed char *)((t36 + 0x0));
                                    if ((unsigned char)t1398 == 1) {
                                        t38 = 0x1;
                                        t37 = 0x2;
                                        nlLocate(t37, t38);
                                        t36 = 0xC076A30;
                                        t37 = 0xFFFFFF00;
                                        nlPrintColor(t37);
                                        t36 = 0xC076A40;
                                        t35 = 0xC08AA48;
                                        nlPrintf(t35, t40);
                                        t37 = 0xFFFFFFFF;
                                        nlPrintColor(t37);
                                    } else {
                                        t1404 = t34;
                                        t1405 = t35;
                                        t1406 = t36;
                                        t1407 = t37;
                                        t1408 = t38;
                                        t1409 = t39;
                                        u1410 = u42;
                                        u1411 = u43;
                                        u1412 = u44;
                                    }
                                    t1417 = t1404;
                                    t1418 = t1405;
                                    t1419 = t1406;
                                    t1420 = t1407;
                                    t1421 = t1408;
                                    t1422 = t1409;
                                    u1423 = u1410;
                                    u1424 = u1411;
                                    u1425 = u1412;
                                } else {
                                    if (t45 == 6) {
                                        t35 = 0xC179828;
                                        t36 = 0x7;
                                        *(unsigned int *)((t35 + 0x0)) = 0x0;
                                        *(unsigned int *)((t41 + 0x0)) = t36;
                                    }
                                    t1417 = t34;
                                    t1418 = t35;
                                    t1419 = t36;
                                    t1420 = t37;
                                    t1421 = t38;
                                    t1422 = t39;
                                    u1423 = u42;
                                    u1424 = u43;
                                    u1425 = u44;
                                }
                                t1428 = t1417;
                                t1429 = t1418;
                                t1430 = t1419;
                                t1431 = t1420;
                                t1432 = t1421;
                                t1433 = t1422;
                                u1434 = u1423;
                                u1435 = u1424;
                                u1436 = u1425;
                            }
                            t1439 = t1428;
                            t1440 = t1429;
                            t1441 = t1430;
                            t1442 = t1431;
                            t1443 = t1432;
                            t1444 = t1433;
                            u1445 = u1434;
                            u1446 = u1435;
                            u1447 = u1436;
                        }
                        t1450 = t1439;
                        t1451 = t1440;
                        t1452 = t1441;
                        t1453 = t1442;
                        t1454 = t1443;
                        t1455 = t1444;
                        u1456 = u1445;
                        u1457 = u1446;
                        u1458 = u1447;
                    }
                    t2408 = t1450;
                    t2409 = t1451;
                    t2410 = t1452;
                    t2411 = t1453;
                    t2412 = t1454;
                    t2413 = t1455;
                    u2414 = u1456;
                    u2415 = u1457;
                    u2416 = u1458;
                } else {
                    t1460 = *(int *)0xC1EE20C;
                    if (t1460 != 1) {
                        t35 = 0xC2A1B2C;
                        t1461 = *(int *)0xC17912C;
                        t37 = t1461;
                        t34 = 0x0;
                        t1462 = *(int *)((t41 + 0x14));
                        t36 = t1462;
                        t1463 = *(int *)((t35 + 0x0));
                        t38 = t1463;
                        t37 = (t37 - t36);
                        t36 = t38;
                        t1464 = (int)((unsigned int)t36 + (unsigned int)t34);
                        t1465 = (int)((unsigned int)t1464 + ((((int)t34 > (int)t36)) ? 1u : 0u));
                        t36 = t1465;
                        t36 = (t36 >> 1);
                        if ((int)t37 > (int)t36) {
                            t37 = (t37 - t38);
                        } else {
                            t34 = 0x0;
                            t36 = t38;
                            t1467 = (int)((unsigned int)t36 + (unsigned int)t34);
                            t1468 = (int)((unsigned int)t1467 + ((((int)t34 > (int)t36)) ? 1u : 0u));
                            t36 = t1468;
                            t36 = (t36 >> 1);
                            t36 = (-t36);
                            if ((int)t37 < (int)t36) {
                                t37 = (t37 + t38);
                            }
                        }
                        t36 = 0x8;
                        t1634 = t35;
                        t1635 = t36;
                        u1639 = u42;
                        u1640 = u43;
                        u1641 = u44;
                        if ((int)t37 >= (int)t36) {
                            t1633 = t34;
                            t1636 = t37;
                            t1637 = t38;
                            t1638 = t39;
                        } else {
                            t35 = t41;
                            t36 = 0xC081324;
                            t34 = ((int)stk + 12);
                            t35 = (t35 + 0x8);
                            t34 = (t34 + 0xC);
                            t1472 = *(int *)((t35 + 0x8));
                            *(unsigned int *)((t34 + 0x8)) = t1472;
                            t1473 = *(int *)((t35 + 0x4));
                            *(unsigned int *)((t34 + 0x4)) = t1473;
                            t1474 = *(int *)((t35 + 0x0));
                            *(unsigned int *)((t34 + 0x0)) = t1474;
                            t35 = 0xC1790CC;
                            t34 = ((int)stk + 12);
                            t35 = (t35 + 0x78);
                            t1475 = *(int *)((t35 + 0x8));
                            *(unsigned int *)((t34 + 0x8)) = t1475;
                            t1476 = *(int *)((t35 + 0x4));
                            *(unsigned int *)((t34 + 0x4)) = t1476;
                            t1477 = *(int *)((t35 + 0x0));
                            *(unsigned int *)((t34 + 0x0)) = t1477;
                            t36 = 0xC078AE0;
                            *(float *)(((int)stk + 16)) = 0.0f;
                            t37 = ((int)stk + 12);
                            *(float *)(((int)stk + 28)) = 0.0f;
                            t38 = ((int)stk + 12);
                            t37 = (t37 + 0xC);
                            t1478 = nlLength(t37, t38);
                            t1479 = *(int *)0xC1EE20C;
                            u42 = t1478;
                            u44 = t1478;
                            if (t1479 == 2) {
                                t36 = 0xC1EE214;
                                t1480 = *(int *)((t36 + 0x0));
                                if (t1480 == 8) {
                                    u43 = 1500.0f;
                                    if (!(u43 > u44)) {
                                        t1481 = *(int *)0xC1EE20C;
                                        if (t1481 == 2) {
                                            t35 = 0xC1EE214;
                                            t1482 = *(int *)((t35 + 0x0));
                                            if (t1482 == 8) {
                                                t1483 = *(int *)0xC1EE20C;
                                                t1494 = t35;
                                                t1495 = t36;
                                                u1496 = u42;
                                                u1497 = u43;
                                                u1498 = u44;
                                                if (t1483 == 2) {
                                                } else {
                                                    t36 = 0xC179820;
                                                    u1484 = *(float *)((t36 + 0x0));
                                                    u43 = u1484;
                                                    if (!(u43 > u44)) {
                                                        t1487 = t35;
                                                        t1488 = t36;
                                                        u1489 = u42;
                                                        u1490 = u43;
                                                        u1491 = u44;
                                                    } else {
                                                        t36 = 0xC0246E4;
                                                        t38 = 0xC1790CC;
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t39 = t40;
                                                        t37 = t41;
                                                        kyakuTaskStart(t37, t38);
                                                    }
                                                    t1494 = t1487;
                                                    t1495 = t1488;
                                                    u1496 = u1489;
                                                    u1497 = u1490;
                                                    u1498 = u1491;
                                                }
                                                t1510 = t1494;
                                                t1511 = t1495;
                                                u1512 = u1496;
                                                u1513 = u1497;
                                                u1514 = u1498;
                                            } else {
                                                t36 = 0xC179820;
                                                u1500 = *(float *)((t36 + 0x0));
                                                u43 = u1500;
                                                if (!(u43 > u44)) {
                                                    t1503 = t35;
                                                    t1504 = t36;
                                                    u1505 = u42;
                                                    u1506 = u43;
                                                    u1507 = u44;
                                                } else {
                                                    t38 = 0xC1790CC;
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t39 = t40;
                                                    t37 = t41;
                                                    kyakuTaskStart(t37, t38);
                                                }
                                                t1510 = t1503;
                                                t1511 = t1504;
                                                u1512 = u1505;
                                                u1513 = u1506;
                                                u1514 = u1507;
                                            }
                                            t1532 = t1510;
                                            t1533 = t1511;
                                            u1534 = u1512;
                                            u1535 = u1513;
                                            u1536 = u1514;
                                        } else {
                                            t1516 = *(int *)0xC1EE20C;
                                            t1526 = t36;
                                            u1527 = u42;
                                            u1528 = u43;
                                            u1529 = u44;
                                            if (t1516 == 2) {
                                            } else {
                                                t36 = 0xC179820;
                                                u1517 = *(float *)((t36 + 0x0));
                                                u43 = u1517;
                                                if (!(u43 > u44)) {
                                                    t1520 = t36;
                                                    u1521 = u42;
                                                    u1522 = u43;
                                                    u1523 = u44;
                                                } else {
                                                    t38 = 0xC1790CC;
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t39 = t40;
                                                    t37 = t41;
                                                    kyakuTaskStart(t37, t38);
                                                }
                                                t1526 = t1520;
                                                u1527 = u1521;
                                                u1528 = u1522;
                                                u1529 = u1523;
                                            }
                                            t1533 = t1526;
                                            u1534 = u1527;
                                            u1535 = u1528;
                                            u1536 = u1529;
                                        }
                                        t1540 = t1532;
                                        t1541 = t1533;
                                        u1542 = u1534;
                                        u1543 = u1535;
                                        u1544 = u1536;
                                    } else {
                                        t38 = 0xC1790CC;
                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                        t39 = t40;
                                        t37 = t41;
                                        kyakuTaskStart(t37, t38);
                                    }
                                    t1604 = t1540;
                                    t1605 = t1541;
                                    u1606 = u1542;
                                    u1607 = u1543;
                                    u1608 = u1544;
                                } else {
                                    t1546 = *(int *)0xC1EE20C;
                                    if (t1546 == 2) {
                                        t35 = 0xC1EE214;
                                        t1547 = *(int *)((t35 + 0x0));
                                        if (t1547 == 8) {
                                            t1548 = *(int *)0xC1EE20C;
                                            t1559 = t35;
                                            t1560 = t36;
                                            u1561 = u42;
                                            u1563 = u44;
                                            if (t1548 == 2) {
                                            } else {
                                                t36 = 0xC179820;
                                                u1549 = *(float *)((t36 + 0x0));
                                                u43 = u1549;
                                                if (!(u43 > u44)) {
                                                    t1552 = t35;
                                                    t1553 = t36;
                                                    u1554 = u42;
                                                    u1555 = u43;
                                                    u1556 = u44;
                                                } else {
                                                    t38 = 0xC1790CC;
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t39 = t40;
                                                    t37 = t41;
                                                    kyakuTaskStart(t37, t38);
                                                }
                                                t1559 = t1552;
                                                t1560 = t1553;
                                                u1561 = u1554;
                                                u1562 = u1555;
                                                u1563 = u1556;
                                            }
                                            t1575 = t1559;
                                            t1576 = t1560;
                                            u1577 = u1561;
                                            u1578 = u1562;
                                            u1579 = u1563;
                                        } else {
                                            t36 = 0xC179820;
                                            u1565 = *(float *)((t36 + 0x0));
                                            u43 = u1565;
                                            if (!(u43 > u44)) {
                                                t1568 = t35;
                                                t1569 = t36;
                                                u1570 = u42;
                                                u1571 = u43;
                                                u1572 = u44;
                                            } else {
                                                t38 = 0xC1790CC;
                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                t39 = t40;
                                                t37 = t41;
                                                kyakuTaskStart(t37, t38);
                                            }
                                            t1575 = t1568;
                                            t1576 = t1569;
                                            u1577 = u1570;
                                            u1578 = u1571;
                                            u1579 = u1572;
                                        }
                                        t1597 = t1575;
                                        t1598 = t1576;
                                        u1599 = u1577;
                                        u1600 = u1578;
                                        u1601 = u1579;
                                    } else {
                                        t1581 = *(int *)0xC1EE20C;
                                        t1591 = t36;
                                        u1592 = u42;
                                        u1594 = u44;
                                        if (t1581 == 2) {
                                        } else {
                                            t36 = 0xC179820;
                                            u1582 = *(float *)((t36 + 0x0));
                                            u43 = u1582;
                                            if (!(u43 > u44)) {
                                                t1585 = t36;
                                                u1586 = u42;
                                                u1587 = u43;
                                                u1588 = u44;
                                            } else {
                                                t38 = 0xC1790CC;
                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                t39 = t40;
                                                t37 = t41;
                                                kyakuTaskStart(t37, t38);
                                            }
                                            t1591 = t1585;
                                            u1592 = u1586;
                                            u1593 = u1587;
                                            u1594 = u1588;
                                        }
                                        t1598 = t1591;
                                        u1599 = u1592;
                                        u1600 = u1593;
                                        u1601 = u1594;
                                    }
                                    t1604 = t1597;
                                    t1605 = t1598;
                                    u1606 = u1599;
                                    u1607 = u1600;
                                    u1608 = u1601;
                                }
                                t1626 = t1604;
                                t1627 = t1605;
                                u1628 = u1606;
                                u1629 = u1607;
                                u1630 = u1608;
                            } else {
                                t1610 = *(int *)0xC1EE20C;
                                u1621 = u42;
                                u1623 = u44;
                                if (t1610 == 2) {
                                } else {
                                    t36 = 0xC179820;
                                    u1611 = *(float *)((t36 + 0x0));
                                    u43 = u1611;
                                    if (!(u43 > u44)) {
                                        t1614 = t36;
                                        u1615 = u42;
                                        u1616 = u43;
                                        u1617 = u44;
                                    } else {
                                        t38 = 0xC1790CC;
                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                        t39 = t40;
                                        t37 = t41;
                                        kyakuTaskStart(t37, t38);
                                    }
                                    t1620 = t1614;
                                    u1621 = u1615;
                                    u1622 = u1616;
                                    u1623 = u1617;
                                }
                                t1627 = t1620;
                                u1628 = u1621;
                                u1629 = u1622;
                                u1630 = u1623;
                            }
                            t1634 = t1626;
                            t1635 = t1627;
                            u1639 = u1628;
                            u1640 = u1629;
                            u1641 = u1630;
                        }
                        t2397 = t1633;
                        t2398 = t1634;
                        t2399 = t1635;
                        t2400 = t1636;
                        t2401 = t1637;
                        t2402 = t1638;
                        u2403 = u1639;
                        u2404 = u1640;
                        u2405 = u1641;
                    } else {
                        t37 = t40;
                        t37 = (t37 & 0x1);
                        if (t37 != 0) {
                            t36 = 0xC179838;
                            t1643 = *(int *)((t36 + 0x0));
                            t35 = t1643;
                            t2010 = t34;
                            t2011 = t35;
                            t2012 = t36;
                            t2013 = t37;
                            t2014 = t38;
                            t2015 = t39;
                            u2016 = u42;
                            u2017 = u43;
                            u2018 = u44;
                            if ((t35 & 0x1) != 0) {
                            } else {
                                if (t37 == 0) {
                                    t1644 = *(int *)0xC179838;
                                    t34 = t1644;
                                    t1817 = t34;
                                    t1818 = t35;
                                    t1819 = t36;
                                    t1820 = t37;
                                    t1821 = t38;
                                    t1822 = t39;
                                    u1823 = u42;
                                    u1824 = u43;
                                    u1825 = u44;
                                    if ((t34 & 0x1) == 0) {
                                    } else {
                                        t37 = 0x4;
                                        t36 = 0x8;
                                        t1807 = t35;
                                        t1808 = t36;
                                        u1812 = u42;
                                        u1813 = u43;
                                        u1814 = u44;
                                        if ((int)t37 >= (int)t36) {
                                            t1806 = t34;
                                            t1809 = t37;
                                            t1810 = t38;
                                            t1811 = t39;
                                        } else {
                                            t35 = t41;
                                            t36 = 0xC081324;
                                            t34 = ((int)stk + 12);
                                            t35 = (t35 + 0x8);
                                            t34 = (t34 + 0xC);
                                            t1645 = *(int *)((t35 + 0x8));
                                            *(unsigned int *)((t34 + 0x8)) = t1645;
                                            t1646 = *(int *)((t35 + 0x4));
                                            *(unsigned int *)((t34 + 0x4)) = t1646;
                                            t1647 = *(int *)((t35 + 0x0));
                                            *(unsigned int *)((t34 + 0x0)) = t1647;
                                            t35 = 0xC1790CC;
                                            t34 = ((int)stk + 12);
                                            t35 = (t35 + 0x78);
                                            t1648 = *(int *)((t35 + 0x8));
                                            *(unsigned int *)((t34 + 0x8)) = t1648;
                                            t1649 = *(int *)((t35 + 0x4));
                                            *(unsigned int *)((t34 + 0x4)) = t1649;
                                            t1650 = *(int *)((t35 + 0x0));
                                            *(unsigned int *)((t34 + 0x0)) = t1650;
                                            t36 = 0xC078AE0;
                                            *(float *)(((int)stk + 16)) = 0.0f;
                                            t37 = ((int)stk + 12);
                                            *(float *)(((int)stk + 28)) = 0.0f;
                                            t38 = ((int)stk + 12);
                                            t37 = (t37 + 0xC);
                                            t1651 = nlLength(t37, t38);
                                            u42 = t1651;
                                            t1652 = *(int *)0xC1EE20C;
                                            u44 = u42;
                                            if (t1652 == 2) {
                                                t36 = 0xC1EE214;
                                                t1653 = *(int *)((t36 + 0x0));
                                                if (t1653 == 8) {
                                                    u43 = 1500.0f;
                                                    if (!(u43 > u44)) {
                                                        t1654 = *(int *)0xC1EE20C;
                                                        if (t1654 == 2) {
                                                            t35 = 0xC1EE214;
                                                            t1655 = *(int *)((t35 + 0x0));
                                                            if (t1655 == 8) {
                                                                t1656 = *(int *)0xC1EE20C;
                                                                t1667 = t35;
                                                                t1668 = t36;
                                                                u1669 = u42;
                                                                u1670 = u43;
                                                                u1671 = u44;
                                                                if (t1656 == 2) {
                                                                } else {
                                                                    t36 = 0xC179820;
                                                                    u1657 = *(float *)((t36 + 0x0));
                                                                    u43 = u1657;
                                                                    if (!(u43 > u44)) {
                                                                        t1660 = t35;
                                                                        t1661 = t36;
                                                                        u1662 = u42;
                                                                        u1663 = u43;
                                                                        u1664 = u44;
                                                                    } else {
                                                                        t36 = 0xC0246E4;
                                                                        t38 = 0xC1790CC;
                                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                        t39 = t40;
                                                                        t37 = t41;
                                                                        kyakuTaskStart(t37, t38);
                                                                    }
                                                                    t1667 = t1660;
                                                                    t1668 = t1661;
                                                                    u1669 = u1662;
                                                                    u1670 = u1663;
                                                                    u1671 = u1664;
                                                                }
                                                                t1683 = t1667;
                                                                t1684 = t1668;
                                                                u1685 = u1669;
                                                                u1686 = u1670;
                                                                u1687 = u1671;
                                                            } else {
                                                                t36 = 0xC179820;
                                                                u1673 = *(float *)((t36 + 0x0));
                                                                u43 = u1673;
                                                                if (!(u43 > u44)) {
                                                                    t1676 = t35;
                                                                    t1677 = t36;
                                                                    u1678 = u42;
                                                                    u1679 = u43;
                                                                    u1680 = u44;
                                                                } else {
                                                                    t38 = 0xC1790CC;
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t39 = t40;
                                                                    t37 = t41;
                                                                    kyakuTaskStart(t37, t38);
                                                                }
                                                                t1683 = t1676;
                                                                t1684 = t1677;
                                                                u1685 = u1678;
                                                                u1686 = u1679;
                                                                u1687 = u1680;
                                                            }
                                                            t1705 = t1683;
                                                            t1706 = t1684;
                                                            u1707 = u1685;
                                                            u1708 = u1686;
                                                            u1709 = u1687;
                                                        } else {
                                                            t1689 = *(int *)0xC1EE20C;
                                                            t1699 = t36;
                                                            u1700 = u42;
                                                            u1701 = u43;
                                                            u1702 = u44;
                                                            if (t1689 == 2) {
                                                            } else {
                                                                t36 = 0xC179820;
                                                                u1690 = *(float *)((t36 + 0x0));
                                                                u43 = u1690;
                                                                if (!(u43 > u44)) {
                                                                    t1693 = t36;
                                                                    u1694 = u42;
                                                                    u1695 = u43;
                                                                    u1696 = u44;
                                                                } else {
                                                                    t38 = 0xC1790CC;
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t39 = t40;
                                                                    t37 = t41;
                                                                    kyakuTaskStart(t37, t38);
                                                                }
                                                                t1699 = t1693;
                                                                u1700 = u1694;
                                                                u1701 = u1695;
                                                                u1702 = u1696;
                                                            }
                                                            t1706 = t1699;
                                                            u1707 = u1700;
                                                            u1708 = u1701;
                                                            u1709 = u1702;
                                                        }
                                                        t1713 = t1705;
                                                        t1714 = t1706;
                                                        u1715 = u1707;
                                                        u1716 = u1708;
                                                        u1717 = u1709;
                                                    } else {
                                                        t38 = 0xC1790CC;
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t39 = t40;
                                                        t37 = t41;
                                                        kyakuTaskStart(t37, t38);
                                                    }
                                                    t1777 = t1713;
                                                    t1778 = t1714;
                                                    u1779 = u1715;
                                                    u1780 = u1716;
                                                    u1781 = u1717;
                                                } else {
                                                    t1719 = *(int *)0xC1EE20C;
                                                    if (t1719 == 2) {
                                                        t35 = 0xC1EE214;
                                                        t1720 = *(int *)((t35 + 0x0));
                                                        if (t1720 == 8) {
                                                            t1721 = *(int *)0xC1EE20C;
                                                            t1732 = t35;
                                                            t1733 = t36;
                                                            u1734 = u42;
                                                            u1736 = u44;
                                                            if (t1721 == 2) {
                                                            } else {
                                                                t36 = 0xC179820;
                                                                u1722 = *(float *)((t36 + 0x0));
                                                                u43 = u1722;
                                                                if (!(u43 > u44)) {
                                                                    t1725 = t35;
                                                                    t1726 = t36;
                                                                    u1727 = u42;
                                                                    u1728 = u43;
                                                                    u1729 = u44;
                                                                } else {
                                                                    t38 = 0xC1790CC;
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t39 = t40;
                                                                    t37 = t41;
                                                                    kyakuTaskStart(t37, t38);
                                                                }
                                                                t1732 = t1725;
                                                                t1733 = t1726;
                                                                u1734 = u1727;
                                                                u1735 = u1728;
                                                                u1736 = u1729;
                                                            }
                                                            t1748 = t1732;
                                                            t1749 = t1733;
                                                            u1750 = u1734;
                                                            u1751 = u1735;
                                                            u1752 = u1736;
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u1738 = *(float *)((t36 + 0x0));
                                                            u43 = u1738;
                                                            if (!(u43 > u44)) {
                                                                t1741 = t35;
                                                                t1742 = t36;
                                                                u1743 = u42;
                                                                u1744 = u43;
                                                                u1745 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t1748 = t1741;
                                                            t1749 = t1742;
                                                            u1750 = u1743;
                                                            u1751 = u1744;
                                                            u1752 = u1745;
                                                        }
                                                        t1770 = t1748;
                                                        t1771 = t1749;
                                                        u1772 = u1750;
                                                        u1773 = u1751;
                                                        u1774 = u1752;
                                                    } else {
                                                        t1754 = *(int *)0xC1EE20C;
                                                        t1764 = t36;
                                                        u1765 = u42;
                                                        u1767 = u44;
                                                        if (t1754 == 2) {
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u1755 = *(float *)((t36 + 0x0));
                                                            u43 = u1755;
                                                            if (!(u43 > u44)) {
                                                                t1758 = t36;
                                                                u1759 = u42;
                                                                u1760 = u43;
                                                                u1761 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t1764 = t1758;
                                                            u1765 = u1759;
                                                            u1766 = u1760;
                                                            u1767 = u1761;
                                                        }
                                                        t1771 = t1764;
                                                        u1772 = u1765;
                                                        u1773 = u1766;
                                                        u1774 = u1767;
                                                    }
                                                    t1777 = t1770;
                                                    t1778 = t1771;
                                                    u1779 = u1772;
                                                    u1780 = u1773;
                                                    u1781 = u1774;
                                                }
                                                t1799 = t1777;
                                                t1800 = t1778;
                                                u1801 = u1779;
                                                u1802 = u1780;
                                                u1803 = u1781;
                                            } else {
                                                t1783 = *(int *)0xC1EE20C;
                                                u1794 = u42;
                                                u1796 = u44;
                                                if (t1783 == 2) {
                                                } else {
                                                    t36 = 0xC179820;
                                                    u1784 = *(float *)((t36 + 0x0));
                                                    u43 = u1784;
                                                    if (!(u43 > u44)) {
                                                        t1787 = t36;
                                                        u1788 = u42;
                                                        u1789 = u43;
                                                        u1790 = u44;
                                                    } else {
                                                        t38 = 0xC1790CC;
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t39 = t40;
                                                        t37 = t41;
                                                        kyakuTaskStart(t37, t38);
                                                    }
                                                    t1793 = t1787;
                                                    u1794 = u1788;
                                                    u1795 = u1789;
                                                    u1796 = u1790;
                                                }
                                                t1800 = t1793;
                                                u1801 = u1794;
                                                u1802 = u1795;
                                                u1803 = u1796;
                                            }
                                            t1807 = t1799;
                                            t1808 = t1800;
                                            u1812 = u1801;
                                            u1813 = u1802;
                                            u1814 = u1803;
                                        }
                                        t1817 = t1806;
                                        t1818 = t1807;
                                        t1819 = t1808;
                                        t1820 = t1809;
                                        t1821 = t1810;
                                        t1822 = t1811;
                                        u1823 = u1812;
                                        u1824 = u1813;
                                        u1825 = u1814;
                                    }
                                    t1999 = t1817;
                                    t2000 = t1818;
                                    t2001 = t1819;
                                    t2002 = t1820;
                                    t2003 = t1821;
                                    t2004 = t1822;
                                    u2005 = u1823;
                                    u2006 = u1824;
                                    u2007 = u1825;
                                } else {
                                    t37 = 0x4;
                                    t36 = 0x8;
                                    t1989 = t35;
                                    t1990 = t36;
                                    u1994 = u42;
                                    u1995 = u43;
                                    u1996 = u44;
                                    if ((int)t37 >= (int)t36) {
                                        t1988 = t34;
                                        t1991 = t37;
                                        t1992 = t38;
                                        t1993 = t39;
                                    } else {
                                        t35 = t41;
                                        t36 = 0xC081324;
                                        t34 = ((int)stk + 12);
                                        t35 = (t35 + 0x8);
                                        t34 = (t34 + 0xC);
                                        t1827 = *(int *)((t35 + 0x8));
                                        *(unsigned int *)((t34 + 0x8)) = t1827;
                                        t1828 = *(int *)((t35 + 0x4));
                                        *(unsigned int *)((t34 + 0x4)) = t1828;
                                        t1829 = *(int *)((t35 + 0x0));
                                        *(unsigned int *)((t34 + 0x0)) = t1829;
                                        t35 = 0xC1790CC;
                                        t34 = ((int)stk + 12);
                                        t35 = (t35 + 0x78);
                                        t1830 = *(int *)((t35 + 0x8));
                                        *(unsigned int *)((t34 + 0x8)) = t1830;
                                        t1831 = *(int *)((t35 + 0x4));
                                        *(unsigned int *)((t34 + 0x4)) = t1831;
                                        t1832 = *(int *)((t35 + 0x0));
                                        *(unsigned int *)((t34 + 0x0)) = t1832;
                                        t36 = 0xC078AE0;
                                        *(float *)(((int)stk + 16)) = 0.0f;
                                        t37 = ((int)stk + 12);
                                        *(float *)(((int)stk + 28)) = 0.0f;
                                        t38 = ((int)stk + 12);
                                        t37 = (t37 + 0xC);
                                        t1833 = nlLength(t37, t38);
                                        u42 = t1833;
                                        t1834 = *(int *)0xC1EE20C;
                                        u44 = u42;
                                        if (t1834 == 2) {
                                            t36 = 0xC1EE214;
                                            t1835 = *(int *)((t36 + 0x0));
                                            if (t1835 == 8) {
                                                u43 = 1500.0f;
                                                if (!(u43 > u44)) {
                                                    t1836 = *(int *)0xC1EE20C;
                                                    if (t1836 == 2) {
                                                        t35 = 0xC1EE214;
                                                        t1837 = *(int *)((t35 + 0x0));
                                                        if (t1837 == 8) {
                                                            t1838 = *(int *)0xC1EE20C;
                                                            t1849 = t35;
                                                            t1850 = t36;
                                                            u1851 = u42;
                                                            u1852 = u43;
                                                            u1853 = u44;
                                                            if (t1838 == 2) {
                                                            } else {
                                                                t36 = 0xC179820;
                                                                u1839 = *(float *)((t36 + 0x0));
                                                                u43 = u1839;
                                                                if (!(u43 > u44)) {
                                                                    t1842 = t35;
                                                                    t1843 = t36;
                                                                    u1844 = u42;
                                                                    u1845 = u43;
                                                                    u1846 = u44;
                                                                } else {
                                                                    t36 = 0xC0246E4;
                                                                    t38 = 0xC1790CC;
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t39 = t40;
                                                                    t37 = t41;
                                                                    kyakuTaskStart(t37, t38);
                                                                }
                                                                t1849 = t1842;
                                                                t1850 = t1843;
                                                                u1851 = u1844;
                                                                u1852 = u1845;
                                                                u1853 = u1846;
                                                            }
                                                            t1865 = t1849;
                                                            t1866 = t1850;
                                                            u1867 = u1851;
                                                            u1868 = u1852;
                                                            u1869 = u1853;
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u1855 = *(float *)((t36 + 0x0));
                                                            u43 = u1855;
                                                            if (!(u43 > u44)) {
                                                                t1858 = t35;
                                                                t1859 = t36;
                                                                u1860 = u42;
                                                                u1861 = u43;
                                                                u1862 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t1865 = t1858;
                                                            t1866 = t1859;
                                                            u1867 = u1860;
                                                            u1868 = u1861;
                                                            u1869 = u1862;
                                                        }
                                                        t1887 = t1865;
                                                        t1888 = t1866;
                                                        u1889 = u1867;
                                                        u1890 = u1868;
                                                        u1891 = u1869;
                                                    } else {
                                                        t1871 = *(int *)0xC1EE20C;
                                                        t1881 = t36;
                                                        u1882 = u42;
                                                        u1883 = u43;
                                                        u1884 = u44;
                                                        if (t1871 == 2) {
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u1872 = *(float *)((t36 + 0x0));
                                                            u43 = u1872;
                                                            if (!(u43 > u44)) {
                                                                t1875 = t36;
                                                                u1876 = u42;
                                                                u1877 = u43;
                                                                u1878 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t1881 = t1875;
                                                            u1882 = u1876;
                                                            u1883 = u1877;
                                                            u1884 = u1878;
                                                        }
                                                        t1888 = t1881;
                                                        u1889 = u1882;
                                                        u1890 = u1883;
                                                        u1891 = u1884;
                                                    }
                                                    t1895 = t1887;
                                                    t1896 = t1888;
                                                    u1897 = u1889;
                                                    u1898 = u1890;
                                                    u1899 = u1891;
                                                } else {
                                                    t38 = 0xC1790CC;
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t39 = t40;
                                                    t37 = t41;
                                                    kyakuTaskStart(t37, t38);
                                                }
                                                t1959 = t1895;
                                                t1960 = t1896;
                                                u1961 = u1897;
                                                u1962 = u1898;
                                                u1963 = u1899;
                                            } else {
                                                t1901 = *(int *)0xC1EE20C;
                                                if (t1901 == 2) {
                                                    t35 = 0xC1EE214;
                                                    t1902 = *(int *)((t35 + 0x0));
                                                    if (t1902 == 8) {
                                                        t1903 = *(int *)0xC1EE20C;
                                                        t1914 = t35;
                                                        t1915 = t36;
                                                        u1916 = u42;
                                                        u1918 = u44;
                                                        if (t1903 == 2) {
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u1904 = *(float *)((t36 + 0x0));
                                                            u43 = u1904;
                                                            if (!(u43 > u44)) {
                                                                t1907 = t35;
                                                                t1908 = t36;
                                                                u1909 = u42;
                                                                u1910 = u43;
                                                                u1911 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t1914 = t1907;
                                                            t1915 = t1908;
                                                            u1916 = u1909;
                                                            u1917 = u1910;
                                                            u1918 = u1911;
                                                        }
                                                        t1930 = t1914;
                                                        t1931 = t1915;
                                                        u1932 = u1916;
                                                        u1933 = u1917;
                                                        u1934 = u1918;
                                                    } else {
                                                        t36 = 0xC179820;
                                                        u1920 = *(float *)((t36 + 0x0));
                                                        u43 = u1920;
                                                        if (!(u43 > u44)) {
                                                            t1923 = t35;
                                                            t1924 = t36;
                                                            u1925 = u42;
                                                            u1926 = u43;
                                                            u1927 = u44;
                                                        } else {
                                                            t38 = 0xC1790CC;
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t39 = t40;
                                                            t37 = t41;
                                                            kyakuTaskStart(t37, t38);
                                                        }
                                                        t1930 = t1923;
                                                        t1931 = t1924;
                                                        u1932 = u1925;
                                                        u1933 = u1926;
                                                        u1934 = u1927;
                                                    }
                                                    t1952 = t1930;
                                                    t1953 = t1931;
                                                    u1954 = u1932;
                                                    u1955 = u1933;
                                                    u1956 = u1934;
                                                } else {
                                                    t1936 = *(int *)0xC1EE20C;
                                                    t1946 = t36;
                                                    u1947 = u42;
                                                    u1949 = u44;
                                                    if (t1936 == 2) {
                                                    } else {
                                                        t36 = 0xC179820;
                                                        u1937 = *(float *)((t36 + 0x0));
                                                        u43 = u1937;
                                                        if (!(u43 > u44)) {
                                                            t1940 = t36;
                                                            u1941 = u42;
                                                            u1942 = u43;
                                                            u1943 = u44;
                                                        } else {
                                                            t38 = 0xC1790CC;
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t39 = t40;
                                                            t37 = t41;
                                                            kyakuTaskStart(t37, t38);
                                                        }
                                                        t1946 = t1940;
                                                        u1947 = u1941;
                                                        u1948 = u1942;
                                                        u1949 = u1943;
                                                    }
                                                    t1953 = t1946;
                                                    u1954 = u1947;
                                                    u1955 = u1948;
                                                    u1956 = u1949;
                                                }
                                                t1959 = t1952;
                                                t1960 = t1953;
                                                u1961 = u1954;
                                                u1962 = u1955;
                                                u1963 = u1956;
                                            }
                                            t1981 = t1959;
                                            t1982 = t1960;
                                            u1983 = u1961;
                                            u1984 = u1962;
                                            u1985 = u1963;
                                        } else {
                                            t1965 = *(int *)0xC1EE20C;
                                            u1976 = u42;
                                            u1978 = u44;
                                            if (t1965 == 2) {
                                            } else {
                                                t36 = 0xC179820;
                                                u1966 = *(float *)((t36 + 0x0));
                                                u43 = u1966;
                                                if (!(u43 > u44)) {
                                                    t1969 = t36;
                                                    u1970 = u42;
                                                    u1971 = u43;
                                                    u1972 = u44;
                                                } else {
                                                    t38 = 0xC1790CC;
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t39 = t40;
                                                    t37 = t41;
                                                    kyakuTaskStart(t37, t38);
                                                }
                                                t1975 = t1969;
                                                u1976 = u1970;
                                                u1977 = u1971;
                                                u1978 = u1972;
                                            }
                                            t1982 = t1975;
                                            u1983 = u1976;
                                            u1984 = u1977;
                                            u1985 = u1978;
                                        }
                                        t1989 = t1981;
                                        t1990 = t1982;
                                        u1994 = u1983;
                                        u1995 = u1984;
                                        u1996 = u1985;
                                    }
                                    t1999 = t1988;
                                    t2000 = t1989;
                                    t2001 = t1990;
                                    t2002 = t1991;
                                    t2003 = t1992;
                                    t2004 = t1993;
                                    u2005 = u1994;
                                    u2006 = u1995;
                                    u2007 = u1996;
                                }
                                t2010 = t1999;
                                t2011 = t2000;
                                t2012 = t2001;
                                t2013 = t2002;
                                t2014 = t2003;
                                t2015 = t2004;
                                u2016 = u2005;
                                u2017 = u2006;
                                u2018 = u2007;
                            }
                            t2386 = t2010;
                            t2387 = t2011;
                            t2388 = t2012;
                            t2389 = t2013;
                            t2390 = t2014;
                            t2391 = t2015;
                            u2392 = u2016;
                            u2393 = u2017;
                            u2394 = u2018;
                        } else {
                            if (t37 == 0) {
                                t2020 = *(int *)0xC179838;
                                t34 = t2020;
                                t2193 = t34;
                                t2194 = t35;
                                t2195 = t36;
                                t2196 = t37;
                                t2197 = t38;
                                t2198 = t39;
                                u2199 = u42;
                                u2200 = u43;
                                u2201 = u44;
                                if ((t34 & 0x1) == 0) {
                                } else {
                                    t37 = 0x4;
                                    t36 = 0x8;
                                    t2183 = t35;
                                    t2184 = t36;
                                    u2188 = u42;
                                    u2189 = u43;
                                    u2190 = u44;
                                    if ((int)t37 >= (int)t36) {
                                        t2182 = t34;
                                        t2185 = t37;
                                        t2186 = t38;
                                        t2187 = t39;
                                    } else {
                                        t35 = t41;
                                        t36 = 0xC081324;
                                        t34 = ((int)stk + 12);
                                        t35 = (t35 + 0x8);
                                        t34 = (t34 + 0xC);
                                        t2021 = *(int *)((t35 + 0x8));
                                        *(unsigned int *)((t34 + 0x8)) = t2021;
                                        t2022 = *(int *)((t35 + 0x4));
                                        *(unsigned int *)((t34 + 0x4)) = t2022;
                                        t2023 = *(int *)((t35 + 0x0));
                                        *(unsigned int *)((t34 + 0x0)) = t2023;
                                        t35 = 0xC1790CC;
                                        t34 = ((int)stk + 12);
                                        t35 = (t35 + 0x78);
                                        t2024 = *(int *)((t35 + 0x8));
                                        *(unsigned int *)((t34 + 0x8)) = t2024;
                                        t2025 = *(int *)((t35 + 0x4));
                                        *(unsigned int *)((t34 + 0x4)) = t2025;
                                        t2026 = *(int *)((t35 + 0x0));
                                        *(unsigned int *)((t34 + 0x0)) = t2026;
                                        t36 = 0xC078AE0;
                                        *(float *)(((int)stk + 16)) = 0.0f;
                                        t37 = ((int)stk + 12);
                                        *(float *)(((int)stk + 28)) = 0.0f;
                                        t38 = ((int)stk + 12);
                                        t37 = (t37 + 0xC);
                                        t2027 = nlLength(t37, t38);
                                        u42 = t2027;
                                        t2028 = *(int *)0xC1EE20C;
                                        u44 = u42;
                                        if (t2028 == 2) {
                                            t36 = 0xC1EE214;
                                            t2029 = *(int *)((t36 + 0x0));
                                            if (t2029 == 8) {
                                                u43 = 1500.0f;
                                                if (!(u43 > u44)) {
                                                    t2030 = *(int *)0xC1EE20C;
                                                    if (t2030 == 2) {
                                                        t35 = 0xC1EE214;
                                                        t2031 = *(int *)((t35 + 0x0));
                                                        if (t2031 == 8) {
                                                            t2032 = *(int *)0xC1EE20C;
                                                            t2043 = t35;
                                                            t2044 = t36;
                                                            u2045 = u42;
                                                            u2046 = u43;
                                                            u2047 = u44;
                                                            if (t2032 == 2) {
                                                            } else {
                                                                t36 = 0xC179820;
                                                                u2033 = *(float *)((t36 + 0x0));
                                                                u43 = u2033;
                                                                if (!(u43 > u44)) {
                                                                    t2036 = t35;
                                                                    t2037 = t36;
                                                                    u2038 = u42;
                                                                    u2039 = u43;
                                                                    u2040 = u44;
                                                                } else {
                                                                    t36 = 0xC0246E4;
                                                                    t38 = 0xC1790CC;
                                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                    t39 = t40;
                                                                    t37 = t41;
                                                                    kyakuTaskStart(t37, t38);
                                                                }
                                                                t2043 = t2036;
                                                                t2044 = t2037;
                                                                u2045 = u2038;
                                                                u2046 = u2039;
                                                                u2047 = u2040;
                                                            }
                                                            t2059 = t2043;
                                                            t2060 = t2044;
                                                            u2061 = u2045;
                                                            u2062 = u2046;
                                                            u2063 = u2047;
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u2049 = *(float *)((t36 + 0x0));
                                                            u43 = u2049;
                                                            if (!(u43 > u44)) {
                                                                t2052 = t35;
                                                                t2053 = t36;
                                                                u2054 = u42;
                                                                u2055 = u43;
                                                                u2056 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t2059 = t2052;
                                                            t2060 = t2053;
                                                            u2061 = u2054;
                                                            u2062 = u2055;
                                                            u2063 = u2056;
                                                        }
                                                        t2081 = t2059;
                                                        t2082 = t2060;
                                                        u2083 = u2061;
                                                        u2084 = u2062;
                                                        u2085 = u2063;
                                                    } else {
                                                        t2065 = *(int *)0xC1EE20C;
                                                        t2075 = t36;
                                                        u2076 = u42;
                                                        u2077 = u43;
                                                        u2078 = u44;
                                                        if (t2065 == 2) {
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u2066 = *(float *)((t36 + 0x0));
                                                            u43 = u2066;
                                                            if (!(u43 > u44)) {
                                                                t2069 = t36;
                                                                u2070 = u42;
                                                                u2071 = u43;
                                                                u2072 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t2075 = t2069;
                                                            u2076 = u2070;
                                                            u2077 = u2071;
                                                            u2078 = u2072;
                                                        }
                                                        t2082 = t2075;
                                                        u2083 = u2076;
                                                        u2084 = u2077;
                                                        u2085 = u2078;
                                                    }
                                                    t2089 = t2081;
                                                    t2090 = t2082;
                                                    u2091 = u2083;
                                                    u2092 = u2084;
                                                    u2093 = u2085;
                                                } else {
                                                    t38 = 0xC1790CC;
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t39 = t40;
                                                    t37 = t41;
                                                    kyakuTaskStart(t37, t38);
                                                }
                                                t2153 = t2089;
                                                t2154 = t2090;
                                                u2155 = u2091;
                                                u2156 = u2092;
                                                u2157 = u2093;
                                            } else {
                                                t2095 = *(int *)0xC1EE20C;
                                                if (t2095 == 2) {
                                                    t35 = 0xC1EE214;
                                                    t2096 = *(int *)((t35 + 0x0));
                                                    if (t2096 == 8) {
                                                        t2097 = *(int *)0xC1EE20C;
                                                        t2108 = t35;
                                                        t2109 = t36;
                                                        u2110 = u42;
                                                        u2112 = u44;
                                                        if (t2097 == 2) {
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u2098 = *(float *)((t36 + 0x0));
                                                            u43 = u2098;
                                                            if (!(u43 > u44)) {
                                                                t2101 = t35;
                                                                t2102 = t36;
                                                                u2103 = u42;
                                                                u2104 = u43;
                                                                u2105 = u44;
                                                            } else {
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t2108 = t2101;
                                                            t2109 = t2102;
                                                            u2110 = u2103;
                                                            u2111 = u2104;
                                                            u2112 = u2105;
                                                        }
                                                        t2124 = t2108;
                                                        t2125 = t2109;
                                                        u2126 = u2110;
                                                        u2127 = u2111;
                                                        u2128 = u2112;
                                                    } else {
                                                        t36 = 0xC179820;
                                                        u2114 = *(float *)((t36 + 0x0));
                                                        u43 = u2114;
                                                        if (!(u43 > u44)) {
                                                            t2117 = t35;
                                                            t2118 = t36;
                                                            u2119 = u42;
                                                            u2120 = u43;
                                                            u2121 = u44;
                                                        } else {
                                                            t38 = 0xC1790CC;
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t39 = t40;
                                                            t37 = t41;
                                                            kyakuTaskStart(t37, t38);
                                                        }
                                                        t2124 = t2117;
                                                        t2125 = t2118;
                                                        u2126 = u2119;
                                                        u2127 = u2120;
                                                        u2128 = u2121;
                                                    }
                                                    t2146 = t2124;
                                                    t2147 = t2125;
                                                    u2148 = u2126;
                                                    u2149 = u2127;
                                                    u2150 = u2128;
                                                } else {
                                                    t2130 = *(int *)0xC1EE20C;
                                                    t2140 = t36;
                                                    u2141 = u42;
                                                    u2143 = u44;
                                                    if (t2130 == 2) {
                                                    } else {
                                                        t36 = 0xC179820;
                                                        u2131 = *(float *)((t36 + 0x0));
                                                        u43 = u2131;
                                                        if (!(u43 > u44)) {
                                                            t2134 = t36;
                                                            u2135 = u42;
                                                            u2136 = u43;
                                                            u2137 = u44;
                                                        } else {
                                                            t38 = 0xC1790CC;
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t39 = t40;
                                                            t37 = t41;
                                                            kyakuTaskStart(t37, t38);
                                                        }
                                                        t2140 = t2134;
                                                        u2141 = u2135;
                                                        u2142 = u2136;
                                                        u2143 = u2137;
                                                    }
                                                    t2147 = t2140;
                                                    u2148 = u2141;
                                                    u2149 = u2142;
                                                    u2150 = u2143;
                                                }
                                                t2153 = t2146;
                                                t2154 = t2147;
                                                u2155 = u2148;
                                                u2156 = u2149;
                                                u2157 = u2150;
                                            }
                                            t2175 = t2153;
                                            t2176 = t2154;
                                            u2177 = u2155;
                                            u2178 = u2156;
                                            u2179 = u2157;
                                        } else {
                                            t2159 = *(int *)0xC1EE20C;
                                            u2170 = u42;
                                            u2172 = u44;
                                            if (t2159 == 2) {
                                            } else {
                                                t36 = 0xC179820;
                                                u2160 = *(float *)((t36 + 0x0));
                                                u43 = u2160;
                                                if (!(u43 > u44)) {
                                                    t2163 = t36;
                                                    u2164 = u42;
                                                    u2165 = u43;
                                                    u2166 = u44;
                                                } else {
                                                    t38 = 0xC1790CC;
                                                    *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                    t39 = t40;
                                                    t37 = t41;
                                                    kyakuTaskStart(t37, t38);
                                                }
                                                t2169 = t2163;
                                                u2170 = u2164;
                                                u2171 = u2165;
                                                u2172 = u2166;
                                            }
                                            t2176 = t2169;
                                            u2177 = u2170;
                                            u2178 = u2171;
                                            u2179 = u2172;
                                        }
                                        t2183 = t2175;
                                        t2184 = t2176;
                                        u2188 = u2177;
                                        u2189 = u2178;
                                        u2190 = u2179;
                                    }
                                    t2193 = t2182;
                                    t2194 = t2183;
                                    t2195 = t2184;
                                    t2196 = t2185;
                                    t2197 = t2186;
                                    t2198 = t2187;
                                    u2199 = u2188;
                                    u2200 = u2189;
                                    u2201 = u2190;
                                }
                                t2375 = t2193;
                                t2376 = t2194;
                                t2377 = t2195;
                                t2378 = t2196;
                                t2379 = t2197;
                                t2380 = t2198;
                                u2381 = u2199;
                                u2382 = u2200;
                                u2383 = u2201;
                            } else {
                                t37 = 0x4;
                                t36 = 0x8;
                                t2365 = t35;
                                t2366 = t36;
                                u2370 = u42;
                                u2371 = u43;
                                u2372 = u44;
                                if ((int)t37 >= (int)t36) {
                                    t2364 = t34;
                                    t2367 = t37;
                                    t2368 = t38;
                                    t2369 = t39;
                                } else {
                                    t35 = t41;
                                    t36 = 0xC081324;
                                    t34 = ((int)stk + 12);
                                    t35 = (t35 + 0x8);
                                    t34 = (t34 + 0xC);
                                    t2203 = *(int *)((t35 + 0x8));
                                    *(unsigned int *)((t34 + 0x8)) = t2203;
                                    t2204 = *(int *)((t35 + 0x4));
                                    *(unsigned int *)((t34 + 0x4)) = t2204;
                                    t2205 = *(int *)((t35 + 0x0));
                                    *(unsigned int *)((t34 + 0x0)) = t2205;
                                    t35 = 0xC1790CC;
                                    t34 = ((int)stk + 12);
                                    t35 = (t35 + 0x78);
                                    t2206 = *(int *)((t35 + 0x8));
                                    *(unsigned int *)((t34 + 0x8)) = t2206;
                                    t2207 = *(int *)((t35 + 0x4));
                                    *(unsigned int *)((t34 + 0x4)) = t2207;
                                    t2208 = *(int *)((t35 + 0x0));
                                    *(unsigned int *)((t34 + 0x0)) = t2208;
                                    t36 = 0xC078AE0;
                                    *(float *)(((int)stk + 16)) = 0.0f;
                                    t37 = ((int)stk + 12);
                                    *(float *)(((int)stk + 28)) = 0.0f;
                                    t38 = ((int)stk + 12);
                                    t37 = (t37 + 0xC);
                                    t2209 = nlLength(t37, t38);
                                    u42 = t2209;
                                    t2210 = *(int *)0xC1EE20C;
                                    u44 = u42;
                                    if (t2210 == 2) {
                                        t36 = 0xC1EE214;
                                        t2211 = *(int *)((t36 + 0x0));
                                        if (t2211 == 8) {
                                            u43 = 1500.0f;
                                            if (!(u43 > u44)) {
                                                t2212 = *(int *)0xC1EE20C;
                                                if (t2212 == 2) {
                                                    t35 = 0xC1EE214;
                                                    t2213 = *(int *)((t35 + 0x0));
                                                    if (t2213 == 8) {
                                                        t2214 = *(int *)0xC1EE20C;
                                                        t2225 = t35;
                                                        t2226 = t36;
                                                        u2227 = u42;
                                                        u2228 = u43;
                                                        u2229 = u44;
                                                        if (t2214 == 2) {
                                                        } else {
                                                            t36 = 0xC179820;
                                                            u2215 = *(float *)((t36 + 0x0));
                                                            u43 = u2215;
                                                            if (!(u43 > u44)) {
                                                                t2218 = t35;
                                                                t2219 = t36;
                                                                u2220 = u42;
                                                                u2221 = u43;
                                                                u2222 = u44;
                                                            } else {
                                                                t36 = 0xC0246E4;
                                                                t38 = 0xC1790CC;
                                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                                t39 = t40;
                                                                t37 = t41;
                                                                kyakuTaskStart(t37, t38);
                                                            }
                                                            t2225 = t2218;
                                                            t2226 = t2219;
                                                            u2227 = u2220;
                                                            u2228 = u2221;
                                                            u2229 = u2222;
                                                        }
                                                        t2241 = t2225;
                                                        t2242 = t2226;
                                                        u2243 = u2227;
                                                        u2244 = u2228;
                                                        u2245 = u2229;
                                                    } else {
                                                        t36 = 0xC179820;
                                                        u2231 = *(float *)((t36 + 0x0));
                                                        u43 = u2231;
                                                        if (!(u43 > u44)) {
                                                            t2234 = t35;
                                                            t2235 = t36;
                                                            u2236 = u42;
                                                            u2237 = u43;
                                                            u2238 = u44;
                                                        } else {
                                                            t38 = 0xC1790CC;
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t39 = t40;
                                                            t37 = t41;
                                                            kyakuTaskStart(t37, t38);
                                                        }
                                                        t2241 = t2234;
                                                        t2242 = t2235;
                                                        u2243 = u2236;
                                                        u2244 = u2237;
                                                        u2245 = u2238;
                                                    }
                                                    t2263 = t2241;
                                                    t2264 = t2242;
                                                    u2265 = u2243;
                                                    u2266 = u2244;
                                                    u2267 = u2245;
                                                } else {
                                                    t2247 = *(int *)0xC1EE20C;
                                                    t2257 = t36;
                                                    u2258 = u42;
                                                    u2259 = u43;
                                                    u2260 = u44;
                                                    if (t2247 == 2) {
                                                    } else {
                                                        t36 = 0xC179820;
                                                        u2248 = *(float *)((t36 + 0x0));
                                                        u43 = u2248;
                                                        if (!(u43 > u44)) {
                                                            t2251 = t36;
                                                            u2252 = u42;
                                                            u2253 = u43;
                                                            u2254 = u44;
                                                        } else {
                                                            t38 = 0xC1790CC;
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t39 = t40;
                                                            t37 = t41;
                                                            kyakuTaskStart(t37, t38);
                                                        }
                                                        t2257 = t2251;
                                                        u2258 = u2252;
                                                        u2259 = u2253;
                                                        u2260 = u2254;
                                                    }
                                                    t2264 = t2257;
                                                    u2265 = u2258;
                                                    u2266 = u2259;
                                                    u2267 = u2260;
                                                }
                                                t2271 = t2263;
                                                t2272 = t2264;
                                                u2273 = u2265;
                                                u2274 = u2266;
                                                u2275 = u2267;
                                            } else {
                                                t38 = 0xC1790CC;
                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                t39 = t40;
                                                t37 = t41;
                                                kyakuTaskStart(t37, t38);
                                            }
                                            t2335 = t2271;
                                            t2336 = t2272;
                                            u2337 = u2273;
                                            u2338 = u2274;
                                            u2339 = u2275;
                                        } else {
                                            t2277 = *(int *)0xC1EE20C;
                                            if (t2277 == 2) {
                                                t35 = 0xC1EE214;
                                                t2278 = *(int *)((t35 + 0x0));
                                                if (t2278 == 8) {
                                                    t2279 = *(int *)0xC1EE20C;
                                                    t2290 = t35;
                                                    t2291 = t36;
                                                    u2292 = u42;
                                                    u2294 = u44;
                                                    if (t2279 == 2) {
                                                    } else {
                                                        t36 = 0xC179820;
                                                        u2280 = *(float *)((t36 + 0x0));
                                                        u43 = u2280;
                                                        if (!(u43 > u44)) {
                                                            t2283 = t35;
                                                            t2284 = t36;
                                                            u2285 = u42;
                                                            u2286 = u43;
                                                            u2287 = u44;
                                                        } else {
                                                            t38 = 0xC1790CC;
                                                            *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                            t39 = t40;
                                                            t37 = t41;
                                                            kyakuTaskStart(t37, t38);
                                                        }
                                                        t2290 = t2283;
                                                        t2291 = t2284;
                                                        u2292 = u2285;
                                                        u2293 = u2286;
                                                        u2294 = u2287;
                                                    }
                                                    t2306 = t2290;
                                                    t2307 = t2291;
                                                    u2308 = u2292;
                                                    u2309 = u2293;
                                                    u2310 = u2294;
                                                } else {
                                                    t36 = 0xC179820;
                                                    u2296 = *(float *)((t36 + 0x0));
                                                    u43 = u2296;
                                                    if (!(u43 > u44)) {
                                                        t2299 = t35;
                                                        t2300 = t36;
                                                        u2301 = u42;
                                                        u2302 = u43;
                                                        u2303 = u44;
                                                    } else {
                                                        t38 = 0xC1790CC;
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t39 = t40;
                                                        t37 = t41;
                                                        kyakuTaskStart(t37, t38);
                                                    }
                                                    t2306 = t2299;
                                                    t2307 = t2300;
                                                    u2308 = u2301;
                                                    u2309 = u2302;
                                                    u2310 = u2303;
                                                }
                                                t2328 = t2306;
                                                t2329 = t2307;
                                                u2330 = u2308;
                                                u2331 = u2309;
                                                u2332 = u2310;
                                            } else {
                                                t2312 = *(int *)0xC1EE20C;
                                                t2322 = t36;
                                                u2323 = u42;
                                                u2325 = u44;
                                                if (t2312 == 2) {
                                                } else {
                                                    t36 = 0xC179820;
                                                    u2313 = *(float *)((t36 + 0x0));
                                                    u43 = u2313;
                                                    if (!(u43 > u44)) {
                                                        t2316 = t36;
                                                        u2317 = u42;
                                                        u2318 = u43;
                                                        u2319 = u44;
                                                    } else {
                                                        t38 = 0xC1790CC;
                                                        *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                        t39 = t40;
                                                        t37 = t41;
                                                        kyakuTaskStart(t37, t38);
                                                    }
                                                    t2322 = t2316;
                                                    u2323 = u2317;
                                                    u2324 = u2318;
                                                    u2325 = u2319;
                                                }
                                                t2329 = t2322;
                                                u2330 = u2323;
                                                u2331 = u2324;
                                                u2332 = u2325;
                                            }
                                            t2335 = t2328;
                                            t2336 = t2329;
                                            u2337 = u2330;
                                            u2338 = u2331;
                                            u2339 = u2332;
                                        }
                                        t2357 = t2335;
                                        t2358 = t2336;
                                        u2359 = u2337;
                                        u2360 = u2338;
                                        u2361 = u2339;
                                    } else {
                                        t2341 = *(int *)0xC1EE20C;
                                        u2352 = u42;
                                        u2354 = u44;
                                        if (t2341 == 2) {
                                        } else {
                                            t36 = 0xC179820;
                                            u2342 = *(float *)((t36 + 0x0));
                                            u43 = u2342;
                                            if (!(u43 > u44)) {
                                                t2345 = t36;
                                                u2346 = u42;
                                                u2347 = u43;
                                                u2348 = u44;
                                            } else {
                                                t38 = 0xC1790CC;
                                                *(unsigned int *)((t41 + 0x0)) = 0x1;
                                                t39 = t40;
                                                t37 = t41;
                                                kyakuTaskStart(t37, t38);
                                            }
                                            t2351 = t2345;
                                            u2352 = u2346;
                                            u2353 = u2347;
                                            u2354 = u2348;
                                        }
                                        t2358 = t2351;
                                        u2359 = u2352;
                                        u2360 = u2353;
                                        u2361 = u2354;
                                    }
                                    t2365 = t2357;
                                    t2366 = t2358;
                                    u2370 = u2359;
                                    u2371 = u2360;
                                    u2372 = u2361;
                                }
                                t2375 = t2364;
                                t2376 = t2365;
                                t2377 = t2366;
                                t2378 = t2367;
                                t2379 = t2368;
                                t2380 = t2369;
                                u2381 = u2370;
                                u2382 = u2371;
                                u2383 = u2372;
                            }
                            t2386 = t2375;
                            t2387 = t2376;
                            t2388 = t2377;
                            t2389 = t2378;
                            t2390 = t2379;
                            t2391 = t2380;
                            u2392 = u2381;
                            u2393 = u2382;
                            u2394 = u2383;
                        }
                        t2397 = t2386;
                        t2398 = t2387;
                        t2399 = t2388;
                        t2400 = t2389;
                        t2401 = t2390;
                        t2402 = t2391;
                        u2403 = u2392;
                        u2404 = u2393;
                        u2405 = u2394;
                    }
                    t2408 = t2397;
                    t2409 = t2398;
                    t2410 = t2399;
                    t2411 = t2400;
                    t2412 = t2401;
                    t2413 = t2402;
                    u2414 = u2403;
                    u2415 = u2404;
                    u2416 = u2405;
                }
                t2419 = t2408;
                t2420 = t2409;
                t2421 = t2410;
                t2422 = t2411;
                t2423 = t2412;
                t2424 = t2413;
                u2425 = u2414;
                u2426 = u2415;
                u2427 = u2416;
            }
            u42 = u2425;
            u43 = u2426;
            u44 = u2427;
            t34 = t2419;
            t40 = (t40 + 0x1);
            t35 = t2420;
            t36 = t2421;
            t37 = t2422;
            t38 = t2423;
            t39 = t2424;
            t41 = (t41 + 0x28);
            if ((int)t40 < (int)t31) continue;
            break;
        }
    }
    t2441 = *(int *)0xC1794EC;
    *(unsigned int *)0xC1794EC = (t2441 + 0x1);
    t2442 = *(int *)0xC179838;
    *(unsigned int *)0xC179838 = (t2442 + 0x1);
    t2443 = *(int *)0xC0E49DC;
    t2444 = nd_CarSelMain(t2443);
    t2445 = *(int *)0xC0E49E0;
    *(unsigned int *)0xC0E49E0 = (t2445 + 0x1);
    return t2444;
}

int kmiStartRenderTextureEntry(int a4)
{
    int t0;
    int t1;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t20;
    int t22;
    int t24;
    int t47;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t33;
    int t35;
    int t37;
    int t39;
    int t40;
    int t42;
    int t44;
    int t49;
    int t51;
    int t53;
    int t55;
    int t57;
    int t58;
    int t60;
    int t62;

    *(unsigned int *)0xC2EA888 = 0x1;
    t0 = *(int *)0xC2EA9E4;
    t1 = *(int *)0xC2EA684;
    if ((t1 & 16) != 0) {
        kmiWriteRegister(0x8, 0x2);
        kmiWriteRegister(0x8, 0x0);
    }
    t10 = *(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC2EAAF0));
    kmiWriteRegister(0x2C, t10);
    t12 = *(int *)(((0xC2EAAEC + ((((t0 & 0x1) << 2) << 2) << 1)) + 0x18));
    kmiWriteRegister(0x20, t12);
    t14 = *(int *)((a4 + 0x8));
    kmiWriteRegister(0x60, t14);
    t16 = *(int *)((a4 + 0x0));
    kmiWriteRegister(0x48, t16);
    t18 = *(int *)((a4 + 0x4));
    kmiWriteRegister(0x4C, t18);
    t20 = *(int *)((a4 + 0xC));
    kmiWriteRegister(0x68, t20);
    t22 = *(int *)((a4 + 0x10));
    kmiWriteRegister(0x6C, t22);
    *(unsigned int *)0xC2EA9F0 = 0x0;
    t24 = *(int *)0xC2EA88C;
    t47 = 0x0;
    if (t24 != 0) {
        for (;;) {
            t25 = *(int *)0xC2EA8E8;
            t26 = *(int *)0xC2EA8EC;
            t27 = ((int (*)(int))(t25))(t26);
            t28 = *(int *)0xC2EA8A8;
            t29 = *(int *)0xC2EA9F0;
            if ((unsigned int)t29 > (unsigned int)t28) {
                break;
            }
            t30 = *(int *)0xC2EA88C;
            if (t30 == 0) {
                if (0x0 != 0) {
                    t31 = *(int *)0xC2EA94C;
                    kmiWriteRegister(0x48, t31);
                    t33 = *(int *)0xC2EA944;
                    kmiWriteRegister(0x4C, t33);
                    t35 = *(int *)0xC2EA934;
                    kmiWriteRegister(0x68, t35);
                    t37 = *(int *)0xC2EA938;
                    kmiWriteRegister(0x6C, t37);
                    *(unsigned int *)0xC2EA88C = 0x0;
                    *(unsigned int *)0xC2EA9F8 = 0x0;
                    t39 = *(int *)0xC178274;
                    return kmiFlipVertexBuffer(t39);
                }
                t40 = *(int *)0xC2EA834;
                kmiWriteRegister(0x8C, t40);
                t42 = *(int *)0xC2EA830;
                kmiWriteRegister(0x88, (t42 & 0xFFFFFFF0));
                t44 = kmiWriteRegister(0x14, 0xFFFFFFFF);
                return t44;
            }
        }
        t47 = 0x1;
    }
    if (t47 != 0) {
        t49 = *(int *)0xC2EA94C;
        kmiWriteRegister(0x48, t49);
        t51 = *(int *)0xC2EA944;
        kmiWriteRegister(0x4C, t51);
        t53 = *(int *)0xC2EA934;
        kmiWriteRegister(0x68, t53);
        t55 = *(int *)0xC2EA938;
        kmiWriteRegister(0x6C, t55);
        *(unsigned int *)0xC2EA88C = 0x0;
        *(unsigned int *)0xC2EA9F8 = 0x0;
        t57 = *(int *)0xC178274;
        return kmiFlipVertexBuffer(t57);
    }
    t58 = *(int *)0xC2EA834;
    kmiWriteRegister(0x8C, t58);
    t60 = *(int *)0xC2EA830;
    kmiWriteRegister(0x88, (t60 & 0xFFFFFFF0));
    t62 = kmiWriteRegister(0x14, 0xFFFFFFFF);
    return t62;
}

float psgRunToPoint(int a4, int a5)
{
    float t1;
    float u17;
    float u12;
    float u7;
    float u4;
    float u2;
    float u21;
    float u22;
    int t23;
    int t24;
    int t25;
    float u26;
    float u27;
    float u28;
    float u29;
    int t36;
    float u39;
    int stk[13] = {0};

    nlSubVector3op((((int)stk + 4) + 0x10), a5, (a4 + 0x4));
    *(float *)(((int)stk + 24)) = 0.0f;
    t1 = nlUnitVector((((int)stk + 4) + 0x10));
    u17 = 0.0f;
    if (50.0f > t1) {
    } else {
        u12 = 0.849999964f;
        if (70.5f > t1) {
        } else {
            u7 = 0.875f;
            if (100.0f > t1) {
            } else {
                u4 = 0.924999952f;
                if (125.0f > t1) {
                } else {
                    u2 = *(float *)0xC071438;
                    u4 = u2;
                }
                u7 = u4;
            }
            u12 = u7;
        }
        u17 = u12;
    }
    u21 = *(float *)(((int)stk + 28));
    u22 = *(float *)(((int)stk + 20));
    t23 = nlArcTan2(u22, u21);
    *(unsigned int *)(((int)stk + 4)) = t23;
    t24 = *(int *)((a4 + 0x10));
    t25 = GetAverageAngle(t24, t23, u17);
    *(unsigned int *)((a4 + 0x10)) = (short)t25;
    u26 = *(float *)0xC071444;
    u27 = *(float *)((a4 + 0x11C));
    if (u26 > u27) {
        u28 = *(float *)0xC071448;
        u29 = *(float *)((a4 + 0x11C));
        Psg_SetMoveSpeed(a4, (u29 + u28));
    }
    nlPushUnitMatrix();
    t36 = *(int *)((a4 + 0x10));
    nlRotateAY((t36 + 0x8000));
    FUN_0c077210(0xC0D5578, (((int)stk + 4) + 0x10));
    u39 = *(float *)((a4 + 0x11C));
    nlGetAverageVector((a4 + 0x4), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 1.0f, u39);
    Psg_SetPosPtr(a4, (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    return t1;
}
