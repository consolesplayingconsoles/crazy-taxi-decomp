/* Straight-line functions with calls and guards (batch gen_jd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcHomingVector(int);
int FUN_0c0288e0(float);
int FUN_0c02bb60(int, int, float);
int FUN_0c036378(int);
int FUN_0c06468e(void);
int FUN_0c06b028(float);
int FUN_0c077210(int, int);
int FUN_0c077890(int, int, int);
int FUN_0c077df0(int);
int FUN_0c078ff0(void);
int FUN_0c0792b0(int, float, float, float);
float FUN_0c089de0(int);
float FUN_0c089de8(int);
int GetAng4Mat(int);
int GetCollision(int, int, float, float);
int ResetSpark(void);
int SetCameraAngleRatio(float, float);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int SetCameraPosVelocity(int);
int SetCameraTargetRatio(float, float);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetTarget(int, int);
int camSnapToCar(int);
float getNearLineIndex(int, int, int, int, int);
int getNearLineIndexAll(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlGetTranslate(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSqrt(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int camUpdate(int a4);

int camUpdate(int a4)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int t15;
    int t16;
    int t20;
    int t54;
    int t55;
    int t60;
    int t61;
    float u62;
    float u63;
    int t74;
    int t76;
    int t77;
    int t79;
    int t80;
    int t82;
    int t83;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t95;
    float u96;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t120;
    int t125;
    int t126;
    float u127;
    float u128;
    int t139;
    int t141;
    int t142;
    int t144;
    int t145;
    int t147;
    int t148;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t160;
    float u161;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t174;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    int t185;
    int t195;
    float u196;
    int t202;
    float u203;
    float u209;
    int t212;
    int t214;
    int t215;
    int t217;
    int t218;
    int t221;
    int t222;
    int t225;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t241;
    float u242;
    int t248;
    float u249;
    int t255;
    int t259;
    int t263;
    int t267;
    int t271;
    int t275;
    int t286;
    int t290;
    int t294;
    int t298;
    int t302;
    int t306;
    int t317;
    int t318;
    int t323;
    int t324;
    int t329;
    int t330;
    int t335;
    int t336;
    int t341;
    int t345;
    int t349;
    int t352;
    int t350;
    int t354;
    int t362;
    int t363;
    int t364;
    int t365;
    float u366;
    int t372;
    float u373;
    int t379;
    int t383;
    int t387;
    int t391;
    int t395;
    int t399;
    int t410;
    int t414;
    int t418;
    int t422;
    int t426;
    int t430;
    int t441;
    int t442;
    int t447;
    int t448;
    int t453;
    int t454;
    int t459;
    int t460;
    int t465;
    int t469;
    int t473;
    int t476;
    int t474;
    int t478;
    int t487;
    int t489;
    float u494;
    int t495;
    int t504;
    int t505;
    int t510;
    int t511;
    int t516;
    int t517;
    int t522;
    int t523;
    int t528;
    float u529;
    int t534;
    float u535;
    float u540;
    int t543;
    int t551;
    int t544;
    int t547;
    int t545;
    int t553;
    int t554;
    int t555;
    int t556;
    int t558;
    int t559;
    int t560;
    int t562;
    int t563;
    int t565;
    int t566;
    int t589;
    int t591;
    int t593;
    int t594;
    int t595;
    int t596;
    int t606;
    int t615;
    int t616;
    int t621;
    int t622;
    int t627;
    int t628;
    int t633;
    int t634;
    int t639;
    float u640;
    int t645;
    float u646;
    float u651;
    int t654;
    int t662;
    int t655;
    int t658;
    int t656;
    int t664;
    int t665;
    int t666;
    int t667;
    int t669;
    int t670;
    int t671;
    int t673;
    int t674;
    int t676;
    int t677;
    int t700;
    int t702;
    int t704;
    int t705;
    int t706;
    int t707;
    int t717;
    int t718;
    int t719;
    float t721;
    int t722;
    float u723;
    int t727;
    int t728;
    float t729;
    float u730;
    float u731;
    int t732;
    int t736;
    int t737;
    int t738;
    int t739;
    int t740;
    int t741;
    float u751;
    float u755;
    float u757;
    float u758;
    float u759;
    int t760;
    int t761;
    float u762;
    float u763;
    float u764;
    int t765;
    int t766;
    int t767;
    float t768;
    float u769;
    float u770;
    int t771;
    int t772;
    int t773;
    int t774;
    int t779;
    float u780;
    float u781;
    float u785;
    float u787;
    float u788;
    float u789;
    int t791;
    int t804;
    float t806;
    int t807;
    int t808;
    int t809;
    int t810;
    int t811;
    int t812;
    float t813;
    int t814;
    int t815;
    float t816;
    int t818;
    int t819;
    int t820;
    int t821;
    int t822;
    float u825;
    int t826;
    int t827;
    int t828;
    int t829;
    int t830;
    int t831;
    int t832;
    int t833;
    float t834;
    float u835;
    int t836;
    int t837;
    int t838;
    int t839;
    int t840;
    int t841;
    int t842;
    int t843;
    int t844;
    int t849;
    int t850;
    int t851;
    float u854;
    int t855;
    int t856;
    int t857;
    int t858;
    int t859;
    int t860;
    int t861;
    int t862;
    int t863;
    int t864;
    float t865;
    float u866;
    int t867;
    int t868;
    int t869;
    int t870;
    int t871;
    int t872;
    int t873;
    int t874;
    int t875;
    int t880;
    int t882;
    float t883;
    float u884;
    int t885;
    int t886;
    int t887;
    float u905;
    int t911;
    int t912;
    float u913;
    float u915;
    int t916;
    int t917;
    int t918;
    float t919;
    float u920;
    float u921;
    int t922;
    int t926;
    int t927;
    int t928;
    int t929;
    int t930;
    int t931;
    int t941;
    int t942;
    int t943;
    float u944;
    float u946;
    int t947;
    int t948;
    int t949;
    float t950;
    float u951;
    float u952;
    int t953;
    int t957;
    int t958;
    int t959;
    int t960;
    int t961;
    int t962;
    int t970;
    int t971;
    float u972;
    int t973;
    float u974;
    float u975;
    float u976;
    int t977;
    int t978;
    float t979;
    float u980;
    float u981;
    int t982;
    int t986;
    int t987;
    int t988;
    int t989;
    int t990;
    int t991;
    int t999;
    int t1000;
    float u1001;
    float u1002;
    float u1003;
    int t1004;
    int t1005;
    float t1006;
    float u1007;
    float u1008;
    int t1009;
    int t1013;
    int t1014;
    int t1015;
    int t1016;
    int t1017;
    int t1018;
    float u1058;
    float u1062;
    float u1064;
    float u1065;
    float u1066;
    int t1067;
    int t1068;
    int t1069;
    int t1070;
    int t1071;
    int t1072;
    int t1073;
    float t1074;
    int t1075;
    int t1076;
    float t1077;
    int t1079;
    int t1080;
    int t1081;
    int t1082;
    int t1083;
    float u1086;
    int t1087;
    int t1088;
    int t1089;
    int t1090;
    int t1091;
    int t1092;
    int t1093;
    int t1094;
    float t1095;
    float u1096;
    int t1097;
    int t1098;
    int t1099;
    int t1100;
    int t1101;
    int t1102;
    int t1103;
    int t1104;
    int t1105;
    int t1110;
    int t1111;
    int t1112;
    float u1115;
    int t1116;
    int t1117;
    int t1118;
    int t1119;
    int t1120;
    int t1121;
    int t1122;
    int t1123;
    int t1124;
    int t1125;
    float t1126;
    float u1127;
    int t1128;
    int t1129;
    int t1130;
    int t1131;
    int t1132;
    int t1133;
    int t1134;
    int t1135;
    int t1136;
    int t1141;
    int t1143;
    float t1144;
    float u1145;
    int t1146;
    int t1147;
    int t1148;
    float u1166;
    int t1168;
    int t1190;
    float t1192;
    int t1193;
    int t1194;
    int t1195;
    int t1196;
    int t1197;
    int t1198;
    float t1199;
    int t1200;
    int t1201;
    float t1202;
    int t1204;
    int t1205;
    int t1206;
    int t1207;
    int t1208;
    float u1211;
    int t1212;
    int t1213;
    int t1214;
    int t1215;
    int t1216;
    int t1217;
    int t1218;
    int t1219;
    float t1220;
    float u1221;
    int t1222;
    int t1223;
    int t1224;
    int t1225;
    int t1226;
    int t1227;
    int t1228;
    int t1229;
    int t1230;
    int t1235;
    int t1236;
    int t1237;
    float u1240;
    int t1241;
    int t1242;
    int t1243;
    int t1244;
    int t1245;
    int t1246;
    int t1247;
    int t1248;
    int t1249;
    int t1250;
    float t1251;
    float u1252;
    int t1253;
    int t1254;
    int t1255;
    int t1256;
    int t1257;
    int t1258;
    int t1259;
    int t1260;
    int t1261;
    int t1266;
    int t1268;
    float t1269;
    float u1270;
    int t1271;
    int t1272;
    int t1273;
    float u1291;
    int t1297;
    int t1298;
    float u1299;
    float u1301;
    int t1302;
    int t1303;
    int t1304;
    float t1305;
    float u1306;
    float u1307;
    int t1308;
    int t1312;
    int t1313;
    int t1314;
    int t1315;
    int t1316;
    int t1317;
    int t1327;
    int t1328;
    int t1329;
    float u1330;
    float u1332;
    int t1333;
    int t1334;
    int t1335;
    float t1336;
    float u1337;
    float u1338;
    int t1339;
    int t1343;
    int t1344;
    int t1345;
    int t1346;
    int t1347;
    int t1348;
    int t1356;
    int t1357;
    float u1358;
    int t1359;
    float u1360;
    float u1361;
    float u1362;
    int t1363;
    int t1364;
    float t1365;
    float u1366;
    float u1367;
    int t1368;
    int t1372;
    int t1373;
    int t1374;
    int t1375;
    int t1376;
    int t1377;
    int t1385;
    int t1386;
    float u1387;
    float u1388;
    float u1389;
    int t1390;
    int t1391;
    float t1392;
    float u1393;
    float u1394;
    int t1395;
    int t1399;
    int t1400;
    int t1401;
    int t1402;
    int t1403;
    int t1404;
    float u1444;
    float u1448;
    float u1450;
    float u1451;
    float u1452;
    int t1453;
    int t1454;
    int t1455;
    int t1456;
    int t1457;
    int t1458;
    int t1459;
    float t1460;
    int t1461;
    int t1462;
    float t1463;
    int t1465;
    int t1466;
    int t1467;
    int t1468;
    int t1469;
    float u1472;
    int t1473;
    int t1474;
    int t1475;
    int t1476;
    int t1477;
    int t1478;
    int t1479;
    int t1480;
    float t1481;
    float u1482;
    int t1483;
    int t1484;
    int t1485;
    int t1486;
    int t1487;
    int t1488;
    int t1489;
    int t1490;
    int t1491;
    int t1496;
    int t1497;
    int t1498;
    float u1501;
    int t1502;
    int t1503;
    int t1504;
    int t1505;
    int t1506;
    int t1507;
    int t1508;
    int t1509;
    int t1510;
    int t1511;
    float t1512;
    float u1513;
    int t1514;
    int t1515;
    int t1516;
    int t1517;
    int t1518;
    int t1519;
    int t1520;
    int t1521;
    int t1522;
    int t1527;
    int t1529;
    float t1530;
    float u1531;
    int t1532;
    int t1533;
    int t1534;
    float u1552;
    int t1554;
    int t1653;
    int t1654;
    int t1655;
    int t1656;
    int t1657;
    int t1658;
    int t1659;
    int t1660;
    int t1661;
    int t1662;
    int t1663;
    int t1664;
    int t1665;
    int t1666;
    int t1669;
    int t1671;
    int t1673;
    int t1685;
    int t1686;
    int t1688;
    int t1689;
    float u1690;
    int t1691;
    float u1692;
    int t1693;
    int t1694;
    float u1712;
    float u1715;
    int t1724;
    float u1725;
    int t1726;
    float u1727;
    int t1728;
    int t1730;
    float u1732;
    int t1733;
    int t1734;
    int t1736;
    float u1737;
    int t1738;
    int t1739;
    int t1740;
    int t1741;
    int t1742;
    int t1747;
    int t1748;
    float u1769;
    int t1770;
    int t1771;
    int t1773;
    float u1774;
    int t1775;
    int t1776;
    int t1777;
    int t1778;
    int t1779;
    int t1784;
    int t1785;
    int t1806;
    float u1807;
    int t1809;
    int t1810;
    float u1812;
    int t1813;
    int t1814;
    int t1815;
    int t1816;
    float u1817;
    int t1827;
    int t1828;
    int t1829;
    float u1830;
    int t1854;
    int t1855;
    float u1856;
    int t1857;
    float u1858;
    float u1862;
    float u1863;
    float u1864;
    float u1865;
    int t1866;
    float u1867;
    int t1868;
    float u1869;
    float u1873;
    float u1874;
    float u1875;
    float u1876;
    float u1877;
    float u1878;
    float u1879;
    int t1888;
    float u1889;
    float u1890;
    float u1891;
    int t1893;
    int t1895;
    int t1897;
    float u1898;
    float u1899;
    int t1901;
    float u1902;
    float u1903;
    float u1904;
    float u1905;
    float u1906;
    float u1907;
    int t1915;
    float u1916;
    float u1917;
    float u1918;
    float u1919;
    float u1920;
    float u1921;
    float u1922;
    float u1923;
    float u1924;
    float u1925;
    float u1926;
    float u1927;
    int t1938;
    int t1939;
    int t1940;
    int t1943;
    int t1944;
    int t1951;
    int t1958;
    int t1959;
    int t1973;
    int t1974;
    float u1977;
    float u1978;
    int t1981;
    int t1984;
    int t1989;
    int t1990;
    int t1991;
    int t1992;
    int t1993;
    int t1994;
    float t1995;
    int t1999;
    int t2001;
    int t2003;
    float u2005;
    int t2009;
    int t2010;
    int t2011;
    int t2015;
    int t2016;
    int t2017;
    int t2022;
    int t2024;
    int t2026;
    float u2029;
    int t2033;
    int t2034;
    int t2035;
    int t2053;
    int t2055;
    int t2057;
    float u2060;
    int t2064;
    int t2065;
    int t2066;
    int t2076;
    int t2077;
    int t2078;
    int t2079;
    int t2080;
    int t2081;
    int t2082;
    int t2083;
    int t2084;
    float u2089;
    int t2090;
    float u66;
    float u131;
    float u724;
    float u725;
    int t775;
    float u908;
    float u909;
    float u823;
    float u824;
    int t845;
    float u852;
    float u853;
    int t876;
    float u914;
    float u945;
    float u966;
    float u967;
    float u968;
    float u995;
    float u996;
    float u997;
    float u1084;
    float u1085;
    int t1106;
    float u1113;
    float u1114;
    int t1137;
    float u1294;
    float u1295;
    float u1209;
    float u1210;
    int t1231;
    float u1238;
    float u1239;
    int t1262;
    float u1300;
    float u1331;
    float u1352;
    float u1353;
    float u1354;
    float u1381;
    float u1382;
    float u1383;
    float u1470;
    float u1471;
    int t1492;
    float u1499;
    float u1500;
    int t1523;
    float u1912;
    float u1948;
    int stk[29] = {0};

    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0x0)) = a4;
    t0 = *(short *)(((int)stk + 104));
    *(unsigned int *)(((int)stk + 88)) = ((short)((short)t0 * (short)0x3BC) + 0xC1790CC);
    t1 = *(int *)0xC1EE2B4;
    if ((t1 & 8) != 0) {
        *(unsigned int *)0xC0E49F0 = 0x1;
    }
    t5 = *(int *)0xC1EE234;
    if (t5 == 1) {
        t6 = *(int *)0xC0E49F0;
        if (t6 != 0) {
            t7 = *(int *)0xC1EE2B8;
            if ((t7 & 4) != 0) {
                *(unsigned int *)0xC179860 = 0x0;
                t8 = *(int *)(((int)stk + 104));
                camSnapToCar(t8);
                ResetSpark();
                *(unsigned int *)0xC0E4A14 = 0x1;
            } else {
                t11 = *(int *)0xC1EE2B8;
                if ((t11 & 0x200) != 0) {
                    *(unsigned int *)0xC179860 = 0x7;
                    t12 = *(int *)(((int)stk + 104));
                    camSnapToCar(t12);
                    ResetSpark();
                    *(unsigned int *)0xC0E4A14 = 0x1;
                } else {
                    t15 = *(int *)0xC1EE2B8;
                    if ((t15 & 2) != 0) {
                        t16 = *(int *)0xC179860;
                        if (t16 == 1) {
                            *(unsigned int *)0xC179860 = 0x2;
                        } else {
                            *(unsigned int *)0xC179860 = 0x1;
                        }
                        t20 = *(int *)(((int)stk + 104));
                        camSnapToCar(t20);
                        ResetSpark();
                        *(unsigned int *)0xC0E4A14 = 0x1;
                    }
                }
            }
        }
    }
    nlPushUnitMatrix();
    t54 = *(int *)0xC179860;
    if (t54 != 0) {
        if (t54 == 1) {
            *(float *)0xC1798A4 = 40.0f;
            t55 = *(int *)0xC0E4A14;
            if (t55 != 0) {
                SetCameraAngleRatio(0.949999988f, 0.099999994f);
                SetCameraTargetRatio(1.0f, 0.099999994f);
                FUN_0c0288e0(120.0f);
                SetCameraMode(0x2);
                t60 = *(int *)0xC179488;
                if ((int)t60 < (int)0x4) {
                    t61 = *(int *)0xC179488;
                    u62 = *(float *)(((t61 << 2) + 0xC08AA64));
                    u66 = u62;
                } else {
                    u63 = *(float *)0xC08AA74;
                    u66 = u63;
                }
                *(float *)0xC0E4A04 = u66;
            }
            t74 = *(int *)(((int)stk + 88));
            nlTranslateV((t74 + 0x78));
            t76 = *(int *)(((int)stk + 88));
            t77 = *(short *)((t76 + 0x86));
            nlRotateAY((unsigned short)t77);
            t79 = *(int *)(((int)stk + 88));
            t80 = *(short *)((t79 + 0x84));
            nlRotateAX((unsigned short)t80);
            t82 = *(int *)(((int)stk + 88));
            t83 = *(short *)((t82 + 0x88));
            nlRotateAZ((unsigned short)t83);
            t85 = *(int *)0xC179488;
            if ((int)t85 < (int)0x4) {
                t86 = *(signed char *)0xC179488;
                t87 = *(int *)((((signed char)(((t86 << 1) + t86) << 2) + 0xC0E4D54) + 0x8));
                t88 = *(int *)((((signed char)(((t86 << 1) + t86) << 2) + 0xC0E4D54) + 0x4));
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t87;
                t89 = *(int *)((((signed char)(((t86 << 1) + t86) << 2) + 0xC0E4D54) + 0x0));
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t88;
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t89;
            } else {
                t90 = *(int *)0xC0E4D8C;
                t91 = *(int *)0xC0E4D88;
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t90;
                t92 = *(int *)0xC0E4D84;
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t91;
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t92;
            }
            t95 = *(int *)0xC179860;
            if (t95 == 2) {
                u96 = *(float *)(((int)stk + 100));
                *(float *)(((int)stk + 100)) = (-u96);
            }
            nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
            t101 = *(int *)0xC179860;
            if (t101 == 2) {
                t102 = *(int *)(((int)stk + 88));
                t103 = *(short *)((t102 + 0x88));
                t104 = *(int *)(((int)stk + 88));
                t105 = *(short *)((t104 + 0x86));
                t106 = *(int *)(((int)stk + 88));
                t107 = *(short *)((t106 + 0x84));
                camSetAngles(((unsigned short)t107 + 0xFE00), (unsigned short)t105, (unsigned short)t103, 0x2);
            } else {
                t109 = *(int *)(((int)stk + 88));
                t110 = *(short *)((t109 + 0x88));
                t111 = *(int *)(((int)stk + 88));
                t112 = *(short *)((t111 + 0x86));
                t113 = *(int *)(((int)stk + 88));
                t114 = *(short *)((t113 + 0x84));
                camSetAngles(((-(unsigned short)t114) + 0xFE00), ((unsigned short)t112 + 0x8000), (-(unsigned short)t110), 0x2);
            }
            camSetTarget((((int)stk + 8) + 0x54), 0x2);
            SetCameraMode(0x2);
        } else {
            if (t54 == 2) {
                *(float *)0xC1798A4 = 40.0f;
                t120 = *(int *)0xC0E4A14;
                if (t120 != 0) {
                    SetCameraAngleRatio(0.949999988f, 0.099999994f);
                    SetCameraTargetRatio(1.0f, 0.099999994f);
                    FUN_0c0288e0(120.0f);
                    SetCameraMode(0x2);
                    t125 = *(int *)0xC179488;
                    if ((int)t125 < (int)0x4) {
                        t126 = *(int *)0xC179488;
                        u127 = *(float *)(((t126 << 2) + 0xC08AA64));
                        u131 = u127;
                    } else {
                        u128 = *(float *)0xC08AA74;
                        u131 = u128;
                    }
                    *(float *)0xC0E4A04 = u131;
                }
                t139 = *(int *)(((int)stk + 88));
                nlTranslateV((t139 + 0x78));
                t141 = *(int *)(((int)stk + 88));
                t142 = *(short *)((t141 + 0x86));
                nlRotateAY((unsigned short)t142);
                t144 = *(int *)(((int)stk + 88));
                t145 = *(short *)((t144 + 0x84));
                nlRotateAX((unsigned short)t145);
                t147 = *(int *)(((int)stk + 88));
                t148 = *(short *)((t147 + 0x88));
                nlRotateAZ((unsigned short)t148);
                t150 = *(int *)0xC179488;
                if ((int)t150 < (int)0x4) {
                    t151 = *(signed char *)0xC179488;
                    t152 = *(int *)((((signed char)(((t151 << 1) + t151) << 2) + 0xC0E4D54) + 0x8));
                    t153 = *(int *)((((signed char)(((t151 << 1) + t151) << 2) + 0xC0E4D54) + 0x4));
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t152;
                    t154 = *(int *)((((signed char)(((t151 << 1) + t151) << 2) + 0xC0E4D54) + 0x0));
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t153;
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t154;
                } else {
                    t155 = *(int *)0xC0E4D8C;
                    t156 = *(int *)0xC0E4D88;
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t155;
                    t157 = *(int *)0xC0E4D84;
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t156;
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t157;
                }
                t160 = *(int *)0xC179860;
                if (t160 == 2) {
                    u161 = *(float *)(((int)stk + 100));
                    *(float *)(((int)stk + 100)) = (-u161);
                }
                nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
                t166 = *(int *)0xC179860;
                if (t166 == 2) {
                    t167 = *(int *)(((int)stk + 88));
                    t168 = *(short *)((t167 + 0x88));
                    t169 = *(int *)(((int)stk + 88));
                    t170 = *(short *)((t169 + 0x86));
                    t171 = *(int *)(((int)stk + 88));
                    t172 = *(short *)((t171 + 0x84));
                    camSetAngles(((unsigned short)t172 + 0xFE00), (unsigned short)t170, (unsigned short)t168, 0x2);
                } else {
                    t174 = *(int *)(((int)stk + 88));
                    t175 = *(short *)((t174 + 0x88));
                    t176 = *(int *)(((int)stk + 88));
                    t177 = *(short *)((t176 + 0x86));
                    t178 = *(int *)(((int)stk + 88));
                    t179 = *(short *)((t178 + 0x84));
                    camSetAngles(((-(unsigned short)t179) + 0xFE00), ((unsigned short)t177 + 0x8000), (-(unsigned short)t175), 0x2);
                }
                camSetTarget((((int)stk + 8) + 0x54), 0x2);
                SetCameraMode(0x2);
            } else {
                if (t54 == 3) {
                    t185 = *(int *)0xC0E4A14;
                    if (t185 != 0) {
                        *(float *)0xC1798A4 = 60.0f;
                        SetCameraAngleRatio(0.599999964f, 0.099999994f);
                        SetCameraTargetRatio(0.799999952f, 0.099999994f);
                        FUN_0c0288e0(600.0f);
                        SetCameraMode(0x2);
                    }
                    t195 = *(int *)0xC1EE2B4;
                    if ((t195 & 4) != 0) {
                        u196 = *(float *)0xC0E4A04;
                        *(float *)0xC0E4A04 = (u196 - 5.0f);
                    }
                    t202 = *(int *)0xC1EE2B4;
                    if ((t202 & 2) != 0) {
                        u203 = *(float *)0xC0E4A04;
                        *(float *)0xC0E4A04 = (u203 + 5.0f);
                    }
                    u209 = *(float *)0xC0E4A04;
                    if (300.0f > u209) {
                        *(float *)0xC0E4A04 = 300.0f;
                    }
                    t212 = *(int *)(((int)stk + 88));
                    nlTranslateV((t212 + 0x78));
                    t214 = *(int *)(((int)stk + 88));
                    t215 = *(short *)((t214 + 0x86));
                    nlRotateAY((unsigned short)t215);
                    t217 = *(int *)(((int)stk + 88));
                    t218 = *(short *)((t217 + 0x84));
                    nlRotateAX((unsigned short)t218);
                    *(float *)(((int)stk + 92)) = 0.0f;
                    *(float *)(((int)stk + 96)) = 0.0f;
                    *(float *)(((int)stk + 100)) = 120.0f;
                    nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
                    t221 = *(int *)(((int)stk + 88));
                    t222 = *(short *)((t221 + 0x86));
                    camSetAngles(0xCC00, ((unsigned short)t222 + 0x8000), 0x0, 0x2);
                    camSetTarget((((int)stk + 8) + 0x54), 0x2);
                } else {
                    if (t54 == 4) {
                        t225 = *(int *)0xC0E4A14;
                        if (t225 != 0) {
                            FUN_0c0288e0(60.0f);
                        }
                        SetCameraMode(0x4);
                        t233 = *(int *)0xC08AA80;
                        t234 = *(int *)0xC08AA7C;
                        *(unsigned int *)(((((int)stk + 8) + 0x44) + 0x8)) = t233;
                        t235 = *(int *)0xC08AA78;
                        *(unsigned int *)(((((int)stk + 8) + 0x44) + 0x4)) = t234;
                        *(unsigned int *)(((((int)stk + 8) + 0x44) + 0x0)) = t235;
                        t236 = *(short *)0xC179858;
                        *(unsigned short *)0xC179858 = (t236 & 0xFF00);
                        t237 = *(short *)0xC17985A;
                        *(unsigned short *)0xC17985A = (t237 & 0xFF00);
                        *(unsigned short *)0xC17985C = 0x0;
                        t238 = *(int *)0xC1EE280;
                        if ((t238 & 2) != 0) {
                            t239 = *(int *)0xC1EE280;
                            if ((t239 & 0x400) != 0) {
                                t240 = *(int *)0xC1EE280;
                                if ((t240 & 0x200) != 0) {
                                    t241 = *(int *)0xC1EE280;
                                    if ((t241 & 16) != 0) {
                                        u242 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u242 + 0.199999988f);
                                    }
                                    t248 = *(int *)0xC1EE280;
                                    if ((t248 & 32) == 0) {
                                    } else {
                                        u249 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u249 - 0.199999988f);
                                    }
                                } else {
                                    t255 = *(int *)0xC1EE280;
                                    if ((t255 & 128) != 0) {
                                        *(float *)(((int)stk + 76)) = 1.0f;
                                    }
                                    t259 = *(int *)0xC1EE280;
                                    if ((t259 & 64) != 0) {
                                        *(float *)(((int)stk + 76)) = (-1.0f);
                                    }
                                    t263 = *(int *)0xC1EE280;
                                    if ((t263 & 16) != 0) {
                                        *(float *)(((int)stk + 80)) = 1.0f;
                                    }
                                    t267 = *(int *)0xC1EE280;
                                    if ((t267 & 32) != 0) {
                                        *(float *)(((int)stk + 80)) = (-1.0f);
                                    }
                                    t271 = *(int *)0xC1EE280;
                                    if ((t271 & 0x400) != 0) {
                                        *(float *)(((int)stk + 84)) = (-1.0f);
                                    }
                                    t275 = *(int *)0xC1EE280;
                                    if ((t275 & 0x200) != 0) {
                                        *(float *)(((int)stk + 84)) = 1.0f;
                                    }
                                }
                            } else {
                                t286 = *(int *)0xC1EE280;
                                if ((t286 & 128) != 0) {
                                    *(float *)(((int)stk + 76)) = 1.0f;
                                }
                                t290 = *(int *)0xC1EE280;
                                if ((t290 & 64) != 0) {
                                    *(float *)(((int)stk + 76)) = (-1.0f);
                                }
                                t294 = *(int *)0xC1EE280;
                                if ((t294 & 16) != 0) {
                                    *(float *)(((int)stk + 80)) = 1.0f;
                                }
                                t298 = *(int *)0xC1EE280;
                                if ((t298 & 32) != 0) {
                                    *(float *)(((int)stk + 80)) = (-1.0f);
                                }
                                t302 = *(int *)0xC1EE280;
                                if ((t302 & 0x400) != 0) {
                                    *(float *)(((int)stk + 84)) = (-1.0f);
                                }
                                t306 = *(int *)0xC1EE280;
                                if ((t306 & 0x200) != 0) {
                                    *(float *)(((int)stk + 84)) = 1.0f;
                                }
                            }
                        } else {
                            t317 = *(int *)0xC1EE280;
                            if ((t317 & 16) != 0) {
                                t318 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t318 + 0x100);
                            }
                            t323 = *(int *)0xC1EE280;
                            if ((t323 & 32) != 0) {
                                t324 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t324 - 0x100);
                            }
                            t329 = *(int *)0xC1EE280;
                            if ((t329 & 128) != 0) {
                                t330 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t330 - 0x100);
                            }
                            t335 = *(int *)0xC1EE280;
                            if ((t335 & 64) != 0) {
                                t336 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t336 + 0x100);
                            }
                            t341 = *(int *)0xC1EE280;
                            if ((t341 & 0x400) != 0) {
                                *(float *)(((int)stk + 84)) = -10.0f;
                            }
                            t345 = *(int *)0xC1EE280;
                            if ((t345 & 0x200) != 0) {
                                *(float *)(((int)stk + 84)) = 10.0f;
                            }
                            t349 = *(short *)0xC179858;
                            *(unsigned int *)(((int)stk + 72)) = t349;
                            t352 = 0xFFFFC000;
                            if ((int)t349 < (int)0xFFFFC000) {
                            } else {
                                t350 = t349;
                                if ((int)t349 > (int)0x4000) {
                                    t350 = 0x4000;
                                }
                                t352 = t350;
                            }
                            *(unsigned int *)(((int)stk + 72)) = t352;
                            t354 = *(short *)(((int)stk + 72));
                            *(unsigned short *)0xC179858 = t354;
                        }
                        t362 = *(int *)0xC1EE280;
                        if ((t362 & 0x400) != 0) {
                            t363 = *(int *)0xC1EE280;
                            if ((t363 & 0x10000) != 0) {
                                t364 = *(int *)0xC1EE280;
                                if ((t364 & 0x20000) != 0) {
                                    t365 = *(int *)0xC1EE280;
                                    if ((t365 & 16) != 0) {
                                        u366 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u366 + 0.199999988f);
                                    }
                                    t372 = *(int *)0xC1EE280;
                                    if ((t372 & 32) == 0) {
                                    } else {
                                        u373 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u373 - 0.199999988f);
                                    }
                                } else {
                                    t379 = *(int *)0xC1EE280;
                                    if ((t379 & 128) != 0) {
                                        *(float *)(((int)stk + 76)) = 1.0f;
                                    }
                                    t383 = *(int *)0xC1EE280;
                                    if ((t383 & 64) != 0) {
                                        *(float *)(((int)stk + 76)) = (-1.0f);
                                    }
                                    t387 = *(int *)0xC1EE280;
                                    if ((t387 & 16) != 0) {
                                        *(float *)(((int)stk + 80)) = 1.0f;
                                    }
                                    t391 = *(int *)0xC1EE280;
                                    if ((t391 & 32) != 0) {
                                        *(float *)(((int)stk + 80)) = (-1.0f);
                                    }
                                    t395 = *(int *)0xC1EE280;
                                    if ((t395 & 0x10000) != 0) {
                                        *(float *)(((int)stk + 84)) = (-1.0f);
                                    }
                                    t399 = *(int *)0xC1EE280;
                                    if ((t399 & 0x20000) != 0) {
                                        *(float *)(((int)stk + 84)) = 1.0f;
                                    }
                                }
                            } else {
                                t410 = *(int *)0xC1EE280;
                                if ((t410 & 128) != 0) {
                                    *(float *)(((int)stk + 76)) = 1.0f;
                                }
                                t414 = *(int *)0xC1EE280;
                                if ((t414 & 64) != 0) {
                                    *(float *)(((int)stk + 76)) = (-1.0f);
                                }
                                t418 = *(int *)0xC1EE280;
                                if ((t418 & 16) != 0) {
                                    *(float *)(((int)stk + 80)) = 1.0f;
                                }
                                t422 = *(int *)0xC1EE280;
                                if ((t422 & 32) != 0) {
                                    *(float *)(((int)stk + 80)) = (-1.0f);
                                }
                                t426 = *(int *)0xC1EE280;
                                if ((t426 & 0x10000) != 0) {
                                    *(float *)(((int)stk + 84)) = (-1.0f);
                                }
                                t430 = *(int *)0xC1EE280;
                                if ((t430 & 0x20000) != 0) {
                                    *(float *)(((int)stk + 84)) = 1.0f;
                                }
                            }
                        } else {
                            t441 = *(int *)0xC1EE280;
                            if ((t441 & 16) != 0) {
                                t442 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t442 + 0x100);
                            }
                            t447 = *(int *)0xC1EE280;
                            if ((t447 & 32) != 0) {
                                t448 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t448 - 0x100);
                            }
                            t453 = *(int *)0xC1EE280;
                            if ((t453 & 128) != 0) {
                                t454 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t454 - 0x100);
                            }
                            t459 = *(int *)0xC1EE280;
                            if ((t459 & 64) != 0) {
                                t460 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t460 + 0x100);
                            }
                            t465 = *(int *)0xC1EE280;
                            if ((t465 & 0x10000) != 0) {
                                *(float *)(((int)stk + 84)) = -10.0f;
                            }
                            t469 = *(int *)0xC1EE280;
                            if ((t469 & 0x20000) != 0) {
                                *(float *)(((int)stk + 84)) = 10.0f;
                            }
                            t473 = *(short *)0xC179858;
                            *(unsigned int *)(((int)stk + 72)) = t473;
                            t476 = 0xFFFFC000;
                            if ((int)t473 < (int)0xFFFFC000) {
                            } else {
                                t474 = t473;
                                if ((int)t473 > (int)0x4000) {
                                    t474 = 0x4000;
                                }
                                t476 = t474;
                            }
                            *(unsigned int *)(((int)stk + 72)) = t476;
                            t478 = *(short *)(((int)stk + 72));
                            *(unsigned short *)0xC179858 = t478;
                        }
                        nlPushUnitMatrix();
                        t487 = *(short *)0xC17985A;
                        nlRotateAY((unsigned short)t487);
                        t489 = *(short *)0xC179858;
                        nlRotateAX((unsigned short)t489);
                        FUN_0c077210((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x44));
                        nlPopMatrix(0x1);
                        nlAddVector(0xC179840, (((int)stk + 8) + 0x44));
                        u494 = *(float *)0xC0E4E34;
                        *(float *)0xC1798A4 = u494;
                    } else {
                        if (t54 == 5) {
                            t495 = *(int *)0xC0E4A14;
                            if (t495 != 0) {
                                *(float *)0xC1798A4 = 60.0f;
                                SetCameraAngleRatio(0.399999976f, 0.099999994f);
                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                FUN_0c0288e0(60.0f);
                                SetCameraMode(0x2);
                            }
                            t504 = *(int *)0xC1EE2B4;
                            if ((t504 & 16) != 0) {
                                t505 = *(int *)0xC0E4A08;
                                *(unsigned int *)0xC0E4A08 = (t505 - 0x100);
                            }
                            t510 = *(int *)0xC1EE2B4;
                            if ((t510 & 32) != 0) {
                                t511 = *(int *)0xC0E4A08;
                                *(unsigned int *)0xC0E4A08 = (t511 + 0x100);
                            }
                            t516 = *(int *)0xC1EE2B4;
                            if ((t516 & 128) != 0) {
                                t517 = *(int *)0xC0E4A0C;
                                *(unsigned int *)0xC0E4A0C = (t517 - 0x100);
                            }
                            t522 = *(int *)0xC1EE2B4;
                            if ((t522 & 64) != 0) {
                                t523 = *(int *)0xC0E4A0C;
                                *(unsigned int *)0xC0E4A0C = (t523 + 0x100);
                            }
                            t528 = *(int *)0xC1EE2B4;
                            if ((t528 & 4) != 0) {
                                u529 = *(float *)0xC0E4A04;
                                *(float *)0xC0E4A04 = (u529 - 1.0f);
                            }
                            t534 = *(int *)0xC1EE2B4;
                            if ((t534 & 2) != 0) {
                                u535 = *(float *)0xC0E4A04;
                                *(float *)0xC0E4A04 = (u535 + 1.0f);
                            }
                            u540 = *(float *)0xC0E4A04;
                            if (1.0f > u540) {
                                *(float *)0xC0E4A04 = 1.0f;
                            }
                            t543 = *(int *)0xC0E4A08;
                            t551 = 0xFFFFC000;
                            if ((int)t543 < (int)0xFFFFC000) {
                            } else {
                                t544 = *(int *)0xC0E4A08;
                                t547 = 0x4000;
                                if ((int)t544 > (int)0x4000) {
                                } else {
                                    t545 = *(int *)0xC0E4A08;
                                    t547 = t545;
                                }
                                t551 = t547;
                            }
                            *(unsigned int *)0xC0E4A08 = t551;
                            t553 = *(int *)0xC0E49F8;
                            if (t553 != 0) {
                                t554 = *(int *)0xC179860;
                                if (t554 == 6) {
                                    t555 = *(int *)0xC0E4A00;
                                    if (t555 != 0) {
                                        t556 = *(int *)0xC0E4A00;
                                        SetCameraPosVelocity(t556);
                                    } else {
                                        t558 = *(int *)0xC0E49FC;
                                        if (t558 != 0) {
                                            t559 = *(int *)0xC0E49FC;
                                            t560 = *(short *)((t559 + 0x2));
                                            nlRotateAY((unsigned short)t560);
                                            t562 = *(int *)0xC0E49FC;
                                            t563 = *(short *)((t562 + 0x0));
                                            nlRotateAX((unsigned short)t563);
                                            t565 = *(int *)0xC0E49FC;
                                            t566 = *(short *)((t565 + 0x4));
                                            nlRotateAZ((unsigned short)t566);
                                        }
                                    }
                                }
                                t589 = *(int *)0xC0E4A0C;
                                nlRotateAY(t589);
                                t591 = *(int *)0xC0E4A08;
                                nlRotateAX(t591);
                                t593 = *(int *)0xC0E49F8;
                                t594 = *(int *)((t593 + 0x8));
                                t595 = *(int *)((t593 + 0x4));
                                *(unsigned int *)0xC17991C = t594;
                                t596 = *(int *)((t593 + 0x0));
                                *(unsigned int *)0xC179918 = t595;
                                *(unsigned int *)0xC179914 = t596;
                                nlAddVector(0xC179914, 0xC1798BC);
                                GetAng4Mat(0xC179940);
                            }
                            *(float *)0xC1798BC = 0.0f;
                            *(float *)0xC1798C0 = 5.0f;
                            *(float *)0xC1798C4 = 0.0f;
                        } else {
                            if (t54 == 6) {
                                t606 = *(int *)0xC0E4A14;
                                if (t606 != 0) {
                                    *(float *)0xC1798A4 = 60.0f;
                                    SetCameraAngleRatio(0.399999976f, 0.099999994f);
                                    SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                    FUN_0c0288e0(60.0f);
                                    SetCameraMode(0x2);
                                }
                                t615 = *(int *)0xC1EE2B4;
                                if ((t615 & 16) != 0) {
                                    t616 = *(int *)0xC0E4A08;
                                    *(unsigned int *)0xC0E4A08 = (t616 - 0x100);
                                }
                                t621 = *(int *)0xC1EE2B4;
                                if ((t621 & 32) != 0) {
                                    t622 = *(int *)0xC0E4A08;
                                    *(unsigned int *)0xC0E4A08 = (t622 + 0x100);
                                }
                                t627 = *(int *)0xC1EE2B4;
                                if ((t627 & 128) != 0) {
                                    t628 = *(int *)0xC0E4A0C;
                                    *(unsigned int *)0xC0E4A0C = (t628 - 0x100);
                                }
                                t633 = *(int *)0xC1EE2B4;
                                if ((t633 & 64) != 0) {
                                    t634 = *(int *)0xC0E4A0C;
                                    *(unsigned int *)0xC0E4A0C = (t634 + 0x100);
                                }
                                t639 = *(int *)0xC1EE2B4;
                                if ((t639 & 4) != 0) {
                                    u640 = *(float *)0xC0E4A04;
                                    *(float *)0xC0E4A04 = (u640 - 1.0f);
                                }
                                t645 = *(int *)0xC1EE2B4;
                                if ((t645 & 2) != 0) {
                                    u646 = *(float *)0xC0E4A04;
                                    *(float *)0xC0E4A04 = (u646 + 1.0f);
                                }
                                u651 = *(float *)0xC0E4A04;
                                if (1.0f > u651) {
                                    *(float *)0xC0E4A04 = 1.0f;
                                }
                                t654 = *(int *)0xC0E4A08;
                                t662 = 0xFFFFC000;
                                if ((int)t654 < (int)0xFFFFC000) {
                                } else {
                                    t655 = *(int *)0xC0E4A08;
                                    t658 = 0x4000;
                                    if ((int)t655 > (int)0x4000) {
                                    } else {
                                        t656 = *(int *)0xC0E4A08;
                                        t658 = t656;
                                    }
                                    t662 = t658;
                                }
                                *(unsigned int *)0xC0E4A08 = t662;
                                t664 = *(int *)0xC0E49F8;
                                if (t664 != 0) {
                                    t665 = *(int *)0xC179860;
                                    if (t665 == 6) {
                                        t666 = *(int *)0xC0E4A00;
                                        if (t666 != 0) {
                                            t667 = *(int *)0xC0E4A00;
                                            SetCameraPosVelocity(t667);
                                        } else {
                                            t669 = *(int *)0xC0E49FC;
                                            if (t669 != 0) {
                                                t670 = *(int *)0xC0E49FC;
                                                t671 = *(short *)((t670 + 0x2));
                                                nlRotateAY((unsigned short)t671);
                                                t673 = *(int *)0xC0E49FC;
                                                t674 = *(short *)((t673 + 0x0));
                                                nlRotateAX((unsigned short)t674);
                                                t676 = *(int *)0xC0E49FC;
                                                t677 = *(short *)((t676 + 0x4));
                                                nlRotateAZ((unsigned short)t677);
                                            }
                                        }
                                    }
                                    t700 = *(int *)0xC0E4A0C;
                                    nlRotateAY(t700);
                                    t702 = *(int *)0xC0E4A08;
                                    nlRotateAX(t702);
                                    t704 = *(int *)0xC0E49F8;
                                    t705 = *(int *)((t704 + 0x8));
                                    t706 = *(int *)((t704 + 0x4));
                                    *(unsigned int *)0xC17991C = t705;
                                    t707 = *(int *)((t704 + 0x0));
                                    *(unsigned int *)0xC179918 = t706;
                                    *(unsigned int *)0xC179914 = t707;
                                    nlAddVector(0xC179914, 0xC1798BC);
                                    GetAng4Mat(0xC179940);
                                }
                                *(float *)0xC1798BC = 0.0f;
                                *(float *)0xC1798C0 = 5.0f;
                                *(float *)0xC1798C4 = 0.0f;
                            } else {
                                if (t54 == 7) {
                                    *(unsigned int *)0xC179930 = 0x0;
                                    t717 = *(int *)0xC1EE20C;
                                    if (t717 == 2) {
                                        t718 = *(int *)0xC1EE214;
                                        if (t718 == 3) {
                                            t719 = *(int *)(((int)stk + 88));
                                            camSetTarget((t719 + 0x78), 0x2);
                                            t721 = nlLength(0xC1798D0, 0xC1798FC);
                                            *(float *)(((int)stk + 48)) = t721;
                                            *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                            t722 = 0x0;
                                            u723 = t721;
                                            for (;;) {
                                                *(unsigned int *)(((int)stk + 84)) = t722;
                                                if ((int)t722 >= (int)0x9) {
                                                    break;
                                                }
                                                t722 = 0xC078AE0;
                                                t727 = *(int *)(((int)stk + 88));
                                                t728 = *(signed char *)(((int)stk + 84));
                                                t729 = nlLength(((signed char)(((t728 << 1) + t728) << 2) + 0xC0E4CE8), (t727 + 0x78));
                                                u723 = t729;
                                                u725 = 1.19999993f;
                                                u723 = (u723 * u725);
                                                *(float *)(((int)stk + 44)) = u723;
                                                u730 = *(float *)(((int)stk + 48));
                                                u724 = u730;
                                                if (u724 > u723) {
                                                    u731 = *(float *)(((int)stk + 44));
                                                    u724 = u731;
                                                    *(float *)(((int)stk + 48)) = u724;
                                                    t732 = *(int *)(((int)stk + 84));
                                                    *(unsigned int *)(((int)stk + 80)) = t732;
                                                }
                                                t736 = *(int *)(((int)stk + 84));
                                                t722 = t736;
                                                t722 = (t722 + 0x1);
                                            }
                                            t737 = *(int *)(((int)stk + 80));
                                            if (t737 != -1) {
                                                t738 = *(signed char *)(((int)stk + 80));
                                                t739 = *(int *)((((signed char)(((t738 << 1) + t738) << 2) + 0xC0E4CE8) + 0x8));
                                                t740 = *(int *)((((signed char)(((t738 << 1) + t738) << 2) + 0xC0E4CE8) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t739;
                                                t741 = *(int *)((((signed char)(((t738 << 1) + t738) << 2) + 0xC0E4CE8) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t740;
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t741;
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                            u751 = *(float *)(((int)stk + 48));
                                            *(float *)(((int)stk + 48)) = (u751 - 50.0f);
                                            if ((u751 - 50.0f) > 550.0f) {
                                                *(float *)(((int)stk + 48)) = 550.0f;
                                            }
                                            u755 = *(float *)(((int)stk + 48));
                                            if (0.0f > u755) {
                                                *(float *)(((int)stk + 48)) = 0.0f;
                                            }
                                            u757 = *(float *)(((int)stk + 48));
                                            u758 = *(float *)(((int)stk + 48));
                                            u759 = 6.0f;
                                            u759 = u759 + 45.0f * (((550.0f - u757) / 550.0f) * ((550.0f - u758) / 550.0f));
                                            *(float *)0xC1798A4 = u759;
                                            t760 = *(int *)0xC0E4A14;
                                            if (t760 == 0) {
                                            } else {
                                                *(float *)(((int)stk + 40)) = 99999.0f;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t761 = 0xC0E4A14;
                                                u762 = 45.0f;
                                                u763 = u759;
                                                u764 = 99999.0f;
                                                for (;;) {
                                                    t765 = *(int *)(((int)stk + 84));
                                                    if ((int)t765 >= (int)0x9) {
                                                        break;
                                                    }
                                                    t766 = *(int *)(((int)stk + 88));
                                                    t767 = *(signed char *)(((int)stk + 84));
                                                    t768 = nlLength(((signed char)(((t767 << 1) + t767) << 2) + 0xC0E4CE8), (t766 + 0x78));
                                                    u762 = t768;
                                                    u764 = 1.0f;
                                                    u762 = (u762 * u764);
                                                    *(float *)(((int)stk + 48)) = u762;
                                                    u769 = *(float *)(((int)stk + 40));
                                                    u763 = u769;
                                                    if (u763 > u762) {
                                                        t761 = ((int)stk + 8);
                                                        u770 = *(float *)(((int)stk + 48));
                                                        u763 = u770;
                                                        t761 = (t761 + 0x38);
                                                        *(float *)(((int)stk + 40)) = u763;
                                                        t771 = *(signed char *)(((int)stk + 80));
                                                        t772 = *(int *)((((signed char)(((t771 << 1) + t771) << 2) + 0xC0E4CE8) + 0x8));
                                                        t773 = *(int *)((((signed char)(((t771 << 1) + t771) << 2) + 0xC0E4CE8) + 0x4));
                                                        *(unsigned int *)((t761 + 0x8)) = t772;
                                                        t774 = *(int *)((((signed char)(((t771 << 1) + t771) << 2) + 0xC0E4CE8) + 0x0));
                                                        *(unsigned int *)((t761 + 0x4)) = t773;
                                                        *(unsigned int *)((t761 + 0x0)) = t774;
                                                        t775 = t761;
                                                    }
                                                    t761 = t775;
                                                    t779 = *(int *)(((int)stk + 84));
                                                    t761 = t779;
                                                    t761 = (t761 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t761;
                                                }
                                                u780 = *(float *)(((int)stk + 40));
                                                *(float *)(((int)stk + 48)) = u780;
                                                u781 = *(float *)(((int)stk + 48));
                                                *(float *)(((int)stk + 48)) = (u781 - 50.0f);
                                                if ((u781 - 50.0f) > 550.0f) {
                                                    *(float *)(((int)stk + 48)) = 550.0f;
                                                }
                                                u785 = *(float *)(((int)stk + 48));
                                                if (0.0f > u785) {
                                                    *(float *)(((int)stk + 48)) = 0.0f;
                                                }
                                                u787 = *(float *)(((int)stk + 48));
                                                u788 = *(float *)(((int)stk + 48));
                                                u789 = 6.0f;
                                                u789 = u789 + 45.0f * (((550.0f - u787) / 550.0f) * ((550.0f - u788) / 550.0f));
                                                *(float *)0xC1798A4 = u789;
                                                camSetEye((((int)stk + 8) + 0x38), 0x0);
                                                t791 = *(int *)(((int)stk + 88));
                                                camSetTarget((t791 + 0x78), 0x0);
                                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                                SetCameraMode(0x1);
                                            }
                                        } else {
                                            t804 = *(int *)(((int)stk + 88));
                                            camSetTarget((t804 + 0x78), 0x2);
                                            t806 = nlLength(0xC1798D0, 0xC1798FC);
                                            *(float *)(((int)stk + 48)) = t806;
                                            if (!(t806 > 980.0f)) {
                                                u908 = t806;
                                                u909 = 980.0f;
                                            } else {
                                                t807 = *(int *)(((int)stk + 88));
                                                t808 = *(int *)(((t807 + 0x78) + 0x8));
                                                t809 = *(int *)(((t807 + 0x78) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t808;
                                                t810 = *(int *)(((t807 + 0x78) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t809;
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t810;
                                                t811 = *(int *)(((int)stk + 88));
                                                t812 = *(short *)((t811 + 0xF4));
                                                t813 = FUN_0c089de0((unsigned short)t812);
                                                *(float *)(((int)stk + 52)) = (t813 * 950.0f);
                                                *(float *)(((int)stk + 56)) = 0.0f;
                                                t814 = *(int *)(((int)stk + 88));
                                                t815 = *(short *)((t814 + 0xF4));
                                                t816 = FUN_0c089de8((unsigned short)t815);
                                                *(float *)(((int)stk + 60)) = (t816 * 950.0f);
                                                GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                                t818 = *(int *)0xC179490;
                                                if ((int)t818 >= (int)0x11) {
                                                    *(float *)(((int)stk + 32)) = 99999.8984f;
                                                    t819 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                    t820 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t819;
                                                    t821 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t820;
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t821;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t822 = (((int)stk + 8) + 0xC);
                                                    u825 = 99999.8984f;
                                                    for (;;) {
                                                        t826 = *(int *)(((int)stk + 84));
                                                        if ((int)t826 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t822 = ((int)stk + 8);
                                                        t822 = (t822 + 0xC);
                                                        t827 = t822;
                                                        t828 = *(int *)(((int)stk + 84));
                                                        t822 = 0xC2A6690;
                                                        t829 = *(int *)((t822 + 0x0));
                                                        t830 = *(int *)((((((t828 << 1) + t828) << 2) + t829) + 0xEE0));
                                                        t831 = *(int *)(((int)stk + 84));
                                                        t832 = *(int *)((t830 + 0x0));
                                                        t833 = *(int *)((((((t831 << 1) + t831) << 2) + t829) + 0xEDC));
                                                        t834 = getNearLineIndex(0x0, t833, t832, (((int)stk + 4) + 0x24), t827);
                                                        u823 = t834;
                                                        u824 = u823;
                                                        *(float *)(((int)stk + 36)) = u823;
                                                        u835 = *(float *)(((int)stk + 32));
                                                        u825 = u835;
                                                        if (u825 > u824) {
                                                            *(float *)(((int)stk + 32)) = u824;
                                                            t836 = *(int *)(((int)stk + 84));
                                                            t837 = *(int *)(((int)stk + 40));
                                                            t838 = *(int *)0xC2A6690;
                                                            t822 = t838;
                                                            t839 = ((((t836 << 1) + t836) << 2) + t822);
                                                            t822 = t837;
                                                            t840 = ((t837 << 1) + t822);
                                                            t822 = 0xEDC;
                                                            t822 = (t822 + t839);
                                                            t841 = *(int *)((t822 + 0x0));
                                                            t822 = ((int)stk + 8);
                                                            t822 = (t822 + 0x38);
                                                            t842 = *(int *)(((t841 + (t840 << 2)) + 0x8));
                                                            t843 = *(int *)(((t841 + (t840 << 2)) + 0x4));
                                                            *(unsigned int *)((t822 + 0x8)) = t842;
                                                            t844 = *(int *)(((t841 + (t840 << 2)) + 0x0));
                                                            *(unsigned int *)((t822 + 0x4)) = t843;
                                                            *(unsigned int *)((t822 + 0x0)) = t844;
                                                            t845 = t822;
                                                        }
                                                        t822 = t845;
                                                        t849 = *(int *)(((int)stk + 84));
                                                        t822 = t849;
                                                        t822 = (t822 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t822;
                                                    }
                                                } else {
                                                    t850 = *(int *)0xC1EE20C;
                                                    if (t850 == 1) {
                                                        *(float *)(((int)stk + 8)) = 99999.8984f;
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t851 = 0xC1EE20C;
                                                        u854 = 99999.8984f;
                                                        for (;;) {
                                                            t855 = *(int *)(((int)stk + 84));
                                                            if ((int)t855 >= (int)0x2) {
                                                                break;
                                                            }
                                                            t851 = ((int)stk + 8);
                                                            t851 = (t851 + 0x14);
                                                            t856 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                            t857 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                            *(unsigned int *)((t851 + 0x8)) = t856;
                                                            t858 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                            *(unsigned int *)((t851 + 0x4)) = t857;
                                                            *(unsigned int *)((t851 + 0x0)) = t858;
                                                            t859 = *(int *)(((int)stk + 84));
                                                            t851 = 0xC2A6690;
                                                            t860 = *(int *)((t851 + 0x0));
                                                            t861 = *(int *)((((((t859 << 1) + t859) << 2) + t860) + 0xEC8));
                                                            t862 = *(int *)(((int)stk + 84));
                                                            t863 = *(int *)((t861 + 0x0));
                                                            t864 = *(int *)((((((t862 << 1) + t862) << 2) + t860) + 0xEC4));
                                                            t865 = getNearLineIndex(0x0, t864, t863, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                            u852 = t865;
                                                            u853 = u852;
                                                            *(float *)(((int)stk + 12)) = u852;
                                                            u866 = *(float *)(((int)stk + 8));
                                                            u854 = u866;
                                                            if (u854 > u853) {
                                                                *(float *)(((int)stk + 8)) = u853;
                                                                t867 = *(int *)(((int)stk + 84));
                                                                t868 = *(int *)(((int)stk + 40));
                                                                t869 = *(int *)0xC2A6690;
                                                                t851 = t869;
                                                                t870 = ((((t867 << 1) + t867) << 2) + t851);
                                                                t851 = t868;
                                                                t871 = ((t868 << 1) + t851);
                                                                t851 = 0xEC4;
                                                                t851 = (t851 + t870);
                                                                t872 = *(int *)((t851 + 0x0));
                                                                t851 = ((int)stk + 8);
                                                                t851 = (t851 + 0x8);
                                                                t873 = *(int *)(((t872 + (t871 << 2)) + 0x8));
                                                                t874 = *(int *)(((t872 + (t871 << 2)) + 0x4));
                                                                *(unsigned int *)((t851 + 0x8)) = t873;
                                                                t875 = *(int *)(((t872 + (t871 << 2)) + 0x0));
                                                                *(unsigned int *)((t851 + 0x4)) = t874;
                                                                *(unsigned int *)((t851 + 0x0)) = t875;
                                                                t876 = t851;
                                                            }
                                                            t851 = t876;
                                                            t880 = *(int *)(((int)stk + 84));
                                                            t851 = t880;
                                                            t851 = (t851 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t851;
                                                        }
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                        t882 = *(int *)(((int)stk + 88));
                                                        t883 = nlLength((((int)stk + 8) + 0x38), (t882 + 0x78));
                                                        u884 = *(float *)(((int)stk + 8));
                                                        if (t883 > u884) {
                                                            t885 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                            t886 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t885;
                                                            t887 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t886;
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t887;
                                                        }
                                                    } else {
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    }
                                                }
                                                u905 = *(float *)(((int)stk + 68));
                                                *(float *)(((int)stk + 68)) = (u905 + 20.0f);
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                            t911 = *(int *)0xC1EE20C;
                                            if (t911 == 0) {
                                                *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t912 = 0xFFFFFFFF;
                                                u913 = u908;
                                                u915 = u909;
                                                for (;;) {
                                                    t916 = *(int *)(((int)stk + 84));
                                                    if ((int)t916 >= (int)0xB) {
                                                        break;
                                                    }
                                                    t917 = *(int *)(((int)stk + 88));
                                                    t918 = *(signed char *)(((int)stk + 84));
                                                    t919 = nlLength(((unsigned char)(((t918 << 1) + t918) << 2) + 0xC0E4A18), (t917 + 0x78));
                                                    u913 = t919;
                                                    u915 = 1.0f;
                                                    u913 = (u913 * u915);
                                                    *(float *)(((int)stk + 44)) = u913;
                                                    u920 = *(float *)(((int)stk + 48));
                                                    u914 = u920;
                                                    if (u914 > u913) {
                                                        u921 = *(float *)(((int)stk + 44));
                                                        u914 = u921;
                                                        *(float *)(((int)stk + 48)) = u914;
                                                        t922 = *(int *)(((int)stk + 84));
                                                        *(unsigned int *)(((int)stk + 80)) = t922;
                                                    }
                                                    t926 = *(int *)(((int)stk + 84));
                                                    t912 = t926;
                                                    t912 = (t912 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t912;
                                                }
                                                t927 = *(int *)(((int)stk + 80));
                                                if (t927 == -1) {
                                                } else {
                                                    t928 = *(signed char *)(((int)stk + 80));
                                                    t929 = *(int *)((((unsigned char)(((t928 << 1) + t928) << 2) + 0xC0E4A18) + 0x8));
                                                    t930 = *(int *)((((unsigned char)(((t928 << 1) + t928) << 2) + 0xC0E4A18) + 0x4));
                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t929;
                                                    t931 = *(int *)((((unsigned char)(((t928 << 1) + t928) << 2) + 0xC0E4A18) + 0x0));
                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t930;
                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t931;
                                                    camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                }
                                            } else {
                                                t941 = *(int *)0xC1EE20C;
                                                if (t941 != 1) {
                                                } else {
                                                    *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                    t942 = *(int *)0xC179490;
                                                    if ((int)t942 >= (int)0x11) {
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t943 = t942;
                                                        u944 = u908;
                                                        u946 = u909;
                                                        for (;;) {
                                                            t947 = *(int *)(((int)stk + 84));
                                                            if ((int)t947 >= (int)0xA) {
                                                                break;
                                                            }
                                                            t948 = *(int *)(((int)stk + 88));
                                                            t949 = *(signed char *)(((int)stk + 84));
                                                            t950 = nlLength(((signed char)(((t949 << 1) + t949) << 2) + 0xC0E4C70), (t948 + 0x78));
                                                            u944 = t950;
                                                            u946 = 1.0f;
                                                            u944 = (u944 * u946);
                                                            *(float *)(((int)stk + 44)) = u944;
                                                            u951 = *(float *)(((int)stk + 48));
                                                            u945 = u951;
                                                            if (u945 > u944) {
                                                                u952 = *(float *)(((int)stk + 44));
                                                                u945 = u952;
                                                                *(float *)(((int)stk + 48)) = u945;
                                                                t953 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t953;
                                                            }
                                                            t957 = *(int *)(((int)stk + 80));
                                                            if (t957 != -1) {
                                                                t958 = *(signed char *)(((int)stk + 80));
                                                                t943 = t958;
                                                                t959 = t943;
                                                                t943 = (t943 << 1);
                                                                t943 = (t943 + t959);
                                                                t943 = (t943 << 2);
                                                                t943 = (signed char)t943;
                                                                t943 = (t943 + 0xC0E4C70);
                                                                t960 = *(int *)((t943 + 0x8));
                                                                t961 = *(int *)((t943 + 0x4));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t960;
                                                                t962 = *(int *)((t943 + 0x0));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t961;
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t962;
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            } else {
                                                                u966 = u944;
                                                                u967 = u945;
                                                                u968 = u946;
                                                            }
                                                            u944 = u966;
                                                            u945 = u967;
                                                            u946 = u968;
                                                            t970 = *(int *)(((int)stk + 84));
                                                            t943 = t970;
                                                            t943 = (t943 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t943;
                                                        }
                                                    } else {
                                                        t971 = *(int *)(((int)stk + 88));
                                                        u972 = *(float *)((t971 + 0x7C));
                                                        if (-40.0f > u972) {
                                                            t973 = 0x0;
                                                            u974 = u908;
                                                            u975 = u972;
                                                            u976 = -40.0f;
                                                            for (;;) {
                                                                *(unsigned int *)(((int)stk + 84)) = t973;
                                                                if ((int)t973 >= (int)0x1C) {
                                                                    break;
                                                                }
                                                                t977 = *(int *)(((int)stk + 88));
                                                                t978 = *(short *)(((int)stk + 84));
                                                                t979 = nlLength(((short)(((t978 << 1) + t978) << 2) + 0xC0E4B20), (t977 + 0x78));
                                                                u974 = t979;
                                                                u976 = 1.0f;
                                                                u974 = (u974 * u976);
                                                                *(float *)(((int)stk + 44)) = u974;
                                                                u980 = *(float *)(((int)stk + 48));
                                                                u975 = u980;
                                                                if (u975 > u974) {
                                                                    u981 = *(float *)(((int)stk + 44));
                                                                    u975 = u981;
                                                                    *(float *)(((int)stk + 48)) = u975;
                                                                    t982 = *(int *)(((int)stk + 84));
                                                                    *(unsigned int *)(((int)stk + 80)) = t982;
                                                                }
                                                                t986 = *(int *)(((int)stk + 80));
                                                                if (t986 != -1) {
                                                                    t987 = *(short *)(((int)stk + 80));
                                                                    t973 = t987;
                                                                    t988 = t973;
                                                                    t973 = (t973 << 1);
                                                                    t973 = (t973 + t988);
                                                                    t973 = (t973 << 2);
                                                                    t973 = (short)t973;
                                                                    t973 = (t973 + 0xC0E4B20);
                                                                    t989 = *(int *)((t973 + 0x8));
                                                                    t990 = *(int *)((t973 + 0x4));
                                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t989;
                                                                    t991 = *(int *)((t973 + 0x0));
                                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t990;
                                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t991;
                                                                    camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                                } else {
                                                                    u995 = u974;
                                                                    u996 = u975;
                                                                    u997 = u976;
                                                                }
                                                                u974 = u995;
                                                                u975 = u996;
                                                                u976 = u997;
                                                                t999 = *(int *)(((int)stk + 84));
                                                                t973 = t999;
                                                                t973 = (t973 + 0x1);
                                                            }
                                                        } else {
                                                            t1000 = 0x0;
                                                            u1001 = u908;
                                                            u1002 = u972;
                                                            u1003 = -40.0f;
                                                            for (;;) {
                                                                *(unsigned int *)(((int)stk + 84)) = t1000;
                                                                if ((int)t1000 >= (int)0xB) {
                                                                    break;
                                                                }
                                                                t1004 = *(int *)(((int)stk + 88));
                                                                t1005 = *(signed char *)(((int)stk + 84));
                                                                t1006 = nlLength(((unsigned char)(((t1005 << 1) + t1005) << 2) + 0xC0E4A9C), (t1004 + 0x78));
                                                                u1001 = t1006;
                                                                u1003 = 1.0f;
                                                                u1001 = (u1001 * u1003);
                                                                *(float *)(((int)stk + 44)) = u1001;
                                                                u1007 = *(float *)(((int)stk + 48));
                                                                u1002 = u1007;
                                                                if (u1002 > u1001) {
                                                                    u1008 = *(float *)(((int)stk + 44));
                                                                    u1002 = u1008;
                                                                    *(float *)(((int)stk + 48)) = u1002;
                                                                    t1009 = *(int *)(((int)stk + 84));
                                                                    *(unsigned int *)(((int)stk + 80)) = t1009;
                                                                }
                                                                t1013 = *(int *)(((int)stk + 84));
                                                                t1000 = t1013;
                                                                t1000 = (t1000 + 0x1);
                                                            }
                                                            t1014 = *(int *)(((int)stk + 80));
                                                            if (t1014 != -1) {
                                                                t1015 = *(signed char *)(((int)stk + 80));
                                                                t1016 = *(int *)((((unsigned char)(((t1015 << 1) + t1015) << 2) + 0xC0E4A9C) + 0x8));
                                                                t1017 = *(int *)((((unsigned char)(((t1015 << 1) + t1015) << 2) + 0xC0E4A9C) + 0x4));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1016;
                                                                t1018 = *(int *)((((unsigned char)(((t1015 << 1) + t1015) << 2) + 0xC0E4A9C) + 0x0));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1017;
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1018;
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            u1058 = *(float *)(((int)stk + 48));
                                            *(float *)(((int)stk + 48)) = (u1058 - 50.0f);
                                            if ((u1058 - 50.0f) > 550.0f) {
                                                *(float *)(((int)stk + 48)) = 550.0f;
                                            }
                                            u1062 = *(float *)(((int)stk + 48));
                                            if (0.0f > u1062) {
                                                *(float *)(((int)stk + 48)) = 0.0f;
                                            }
                                            u1064 = *(float *)(((int)stk + 48));
                                            u1065 = *(float *)(((int)stk + 48));
                                            u1066 = 6.0f;
                                            u1066 = u1066 + 45.0f * (((550.0f - u1064) / 550.0f) * ((550.0f - u1065) / 550.0f));
                                            *(float *)0xC1798A4 = u1066;
                                            t1067 = *(int *)0xC0E4A14;
                                            if (t1067 == 0) {
                                            } else {
                                                *(float *)0xC1798A4 = 60.0f;
                                                t1068 = *(int *)(((int)stk + 88));
                                                t1069 = *(int *)(((t1068 + 0x78) + 0x8));
                                                t1070 = *(int *)(((t1068 + 0x78) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1069;
                                                t1071 = *(int *)(((t1068 + 0x78) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1070;
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1071;
                                                t1072 = *(int *)(((int)stk + 88));
                                                t1073 = *(short *)((t1072 + 0xF4));
                                                t1074 = FUN_0c089de0((unsigned short)t1073);
                                                *(float *)(((int)stk + 52)) = (t1074 * 300.0f);
                                                *(float *)(((int)stk + 56)) = 0.0f;
                                                t1075 = *(int *)(((int)stk + 88));
                                                t1076 = *(short *)((t1075 + 0xF4));
                                                t1077 = FUN_0c089de8((unsigned short)t1076);
                                                *(float *)(((int)stk + 60)) = (t1077 * 300.0f);
                                                GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                                t1079 = *(int *)0xC179490;
                                                if ((int)t1079 >= (int)0x14) {
                                                    *(float *)(((int)stk + 32)) = 99999.8984f;
                                                    t1080 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                    t1081 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t1080;
                                                    t1082 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t1081;
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t1082;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1083 = (((int)stk + 8) + 0xC);
                                                    u1086 = 99999.8984f;
                                                    for (;;) {
                                                        t1087 = *(int *)(((int)stk + 84));
                                                        if ((int)t1087 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1083 = ((int)stk + 8);
                                                        t1083 = (t1083 + 0xC);
                                                        t1088 = t1083;
                                                        t1089 = *(int *)(((int)stk + 84));
                                                        t1083 = 0xC2A6690;
                                                        t1090 = *(int *)((t1083 + 0x0));
                                                        t1091 = *(int *)((((((t1089 << 1) + t1089) << 2) + t1090) + 0xEE0));
                                                        t1092 = *(int *)(((int)stk + 84));
                                                        t1093 = *(int *)((t1091 + 0x0));
                                                        t1094 = *(int *)((((((t1092 << 1) + t1092) << 2) + t1090) + 0xED0));
                                                        t1095 = getNearLineIndex(0x0, t1094, t1093, (((int)stk + 4) + 0x24), t1088);
                                                        u1084 = t1095;
                                                        u1085 = u1084;
                                                        *(float *)(((int)stk + 36)) = u1084;
                                                        u1096 = *(float *)(((int)stk + 32));
                                                        u1086 = u1096;
                                                        if (u1086 > u1085) {
                                                            *(float *)(((int)stk + 32)) = u1085;
                                                            t1097 = *(int *)(((int)stk + 84));
                                                            t1098 = *(int *)(((int)stk + 40));
                                                            t1099 = *(int *)0xC2A6690;
                                                            t1083 = t1099;
                                                            t1100 = ((((t1097 << 1) + t1097) << 2) + t1083);
                                                            t1083 = t1098;
                                                            t1101 = ((t1098 << 1) + t1083);
                                                            t1083 = 0xEDC;
                                                            t1083 = (t1083 + t1100);
                                                            t1102 = *(int *)((t1083 + 0x0));
                                                            t1083 = ((int)stk + 8);
                                                            t1083 = (t1083 + 0x38);
                                                            t1103 = *(int *)(((t1102 + (t1101 << 2)) + 0x8));
                                                            t1104 = *(int *)(((t1102 + (t1101 << 2)) + 0x4));
                                                            *(unsigned int *)((t1083 + 0x8)) = t1103;
                                                            t1105 = *(int *)(((t1102 + (t1101 << 2)) + 0x0));
                                                            *(unsigned int *)((t1083 + 0x4)) = t1104;
                                                            *(unsigned int *)((t1083 + 0x0)) = t1105;
                                                            t1106 = t1083;
                                                        }
                                                        t1083 = t1106;
                                                        t1110 = *(int *)(((int)stk + 84));
                                                        t1083 = t1110;
                                                        t1083 = (t1083 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1083;
                                                    }
                                                } else {
                                                    t1111 = *(int *)0xC1EE20C;
                                                    if (t1111 == 1) {
                                                        *(float *)(((int)stk + 8)) = 99999.8984f;
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t1112 = 0xC1EE20C;
                                                        u1115 = 99999.8984f;
                                                        for (;;) {
                                                            t1116 = *(int *)(((int)stk + 84));
                                                            if ((int)t1116 >= (int)0x2) {
                                                                break;
                                                            }
                                                            t1112 = ((int)stk + 8);
                                                            t1112 = (t1112 + 0x14);
                                                            t1117 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                            t1118 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                            *(unsigned int *)((t1112 + 0x8)) = t1117;
                                                            t1119 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                            *(unsigned int *)((t1112 + 0x4)) = t1118;
                                                            *(unsigned int *)((t1112 + 0x0)) = t1119;
                                                            t1120 = *(int *)(((int)stk + 84));
                                                            t1112 = 0xC2A6690;
                                                            t1121 = *(int *)((t1112 + 0x0));
                                                            t1122 = *(int *)((((((t1120 << 1) + t1120) << 2) + t1121) + 0xEC8));
                                                            t1123 = *(int *)(((int)stk + 84));
                                                            t1124 = *(int *)((t1122 + 0x0));
                                                            t1125 = *(int *)((((((t1123 << 1) + t1123) << 2) + t1121) + 0xEC4));
                                                            t1126 = getNearLineIndex(0x0, t1125, t1124, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                            u1113 = t1126;
                                                            u1114 = u1113;
                                                            *(float *)(((int)stk + 12)) = u1113;
                                                            u1127 = *(float *)(((int)stk + 8));
                                                            u1115 = u1127;
                                                            if (u1115 > u1114) {
                                                                *(float *)(((int)stk + 8)) = u1114;
                                                                t1128 = *(int *)(((int)stk + 84));
                                                                t1129 = *(int *)(((int)stk + 40));
                                                                t1130 = *(int *)0xC2A6690;
                                                                t1112 = t1130;
                                                                t1131 = ((((t1128 << 1) + t1128) << 2) + t1112);
                                                                t1112 = t1129;
                                                                t1132 = ((t1129 << 1) + t1112);
                                                                t1112 = 0xEC4;
                                                                t1112 = (t1112 + t1131);
                                                                t1133 = *(int *)((t1112 + 0x0));
                                                                t1112 = ((int)stk + 8);
                                                                t1112 = (t1112 + 0x8);
                                                                t1134 = *(int *)(((t1133 + (t1132 << 2)) + 0x8));
                                                                t1135 = *(int *)(((t1133 + (t1132 << 2)) + 0x4));
                                                                *(unsigned int *)((t1112 + 0x8)) = t1134;
                                                                t1136 = *(int *)(((t1133 + (t1132 << 2)) + 0x0));
                                                                *(unsigned int *)((t1112 + 0x4)) = t1135;
                                                                *(unsigned int *)((t1112 + 0x0)) = t1136;
                                                                t1137 = t1112;
                                                            }
                                                            t1112 = t1137;
                                                            t1141 = *(int *)(((int)stk + 84));
                                                            t1112 = t1141;
                                                            t1112 = (t1112 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t1112;
                                                        }
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                        t1143 = *(int *)(((int)stk + 88));
                                                        t1144 = nlLength((((int)stk + 8) + 0x38), (t1143 + 0x78));
                                                        u1145 = *(float *)(((int)stk + 8));
                                                        if (t1144 > u1145) {
                                                            t1146 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                            t1147 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1146;
                                                            t1148 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1147;
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1148;
                                                        }
                                                    } else {
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    }
                                                }
                                                u1166 = *(float *)(((int)stk + 68));
                                                *(float *)(((int)stk + 68)) = (u1166 + 20.0f);
                                                camSetEye((((int)stk + 8) + 0x38), 0x0);
                                                t1168 = *(int *)(((int)stk + 88));
                                                camSetTarget((t1168 + 0x78), 0x0);
                                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                                SetCameraMode(0x1);
                                            }
                                        }
                                    } else {
                                        t1190 = *(int *)(((int)stk + 88));
                                        camSetTarget((t1190 + 0x78), 0x2);
                                        t1192 = nlLength(0xC1798D0, 0xC1798FC);
                                        *(float *)(((int)stk + 48)) = t1192;
                                        if (!(t1192 > 980.0f)) {
                                            u1294 = t1192;
                                            u1295 = 980.0f;
                                        } else {
                                            t1193 = *(int *)(((int)stk + 88));
                                            t1194 = *(int *)(((t1193 + 0x78) + 0x8));
                                            t1195 = *(int *)(((t1193 + 0x78) + 0x4));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1194;
                                            t1196 = *(int *)(((t1193 + 0x78) + 0x0));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1195;
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1196;
                                            t1197 = *(int *)(((int)stk + 88));
                                            t1198 = *(short *)((t1197 + 0xF4));
                                            t1199 = FUN_0c089de0((unsigned short)t1198);
                                            *(float *)(((int)stk + 52)) = (t1199 * 950.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            t1200 = *(int *)(((int)stk + 88));
                                            t1201 = *(short *)((t1200 + 0xF4));
                                            t1202 = FUN_0c089de8((unsigned short)t1201);
                                            *(float *)(((int)stk + 60)) = (t1202 * 950.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            t1204 = *(int *)0xC179490;
                                            if ((int)t1204 >= (int)0x11) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                t1205 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                t1206 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t1205;
                                                t1207 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t1206;
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t1207;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t1208 = (((int)stk + 8) + 0xC);
                                                u1211 = 99999.8984f;
                                                for (;;) {
                                                    t1212 = *(int *)(((int)stk + 84));
                                                    if ((int)t1212 >= (int)0x2) {
                                                        break;
                                                    }
                                                    t1208 = ((int)stk + 8);
                                                    t1208 = (t1208 + 0xC);
                                                    t1213 = t1208;
                                                    t1214 = *(int *)(((int)stk + 84));
                                                    t1208 = 0xC2A6690;
                                                    t1215 = *(int *)((t1208 + 0x0));
                                                    t1216 = *(int *)((((((t1214 << 1) + t1214) << 2) + t1215) + 0xEE0));
                                                    t1217 = *(int *)(((int)stk + 84));
                                                    t1218 = *(int *)((t1216 + 0x0));
                                                    t1219 = *(int *)((((((t1217 << 1) + t1217) << 2) + t1215) + 0xEDC));
                                                    t1220 = getNearLineIndex(0x0, t1219, t1218, (((int)stk + 4) + 0x24), t1213);
                                                    u1209 = t1220;
                                                    u1210 = u1209;
                                                    *(float *)(((int)stk + 36)) = u1209;
                                                    u1221 = *(float *)(((int)stk + 32));
                                                    u1211 = u1221;
                                                    if (u1211 > u1210) {
                                                        *(float *)(((int)stk + 32)) = u1210;
                                                        t1222 = *(int *)(((int)stk + 84));
                                                        t1223 = *(int *)(((int)stk + 40));
                                                        t1224 = *(int *)0xC2A6690;
                                                        t1208 = t1224;
                                                        t1225 = ((((t1222 << 1) + t1222) << 2) + t1208);
                                                        t1208 = t1223;
                                                        t1226 = ((t1223 << 1) + t1208);
                                                        t1208 = 0xEDC;
                                                        t1208 = (t1208 + t1225);
                                                        t1227 = *(int *)((t1208 + 0x0));
                                                        t1208 = ((int)stk + 8);
                                                        t1208 = (t1208 + 0x38);
                                                        t1228 = *(int *)(((t1227 + (t1226 << 2)) + 0x8));
                                                        t1229 = *(int *)(((t1227 + (t1226 << 2)) + 0x4));
                                                        *(unsigned int *)((t1208 + 0x8)) = t1228;
                                                        t1230 = *(int *)(((t1227 + (t1226 << 2)) + 0x0));
                                                        *(unsigned int *)((t1208 + 0x4)) = t1229;
                                                        *(unsigned int *)((t1208 + 0x0)) = t1230;
                                                        t1231 = t1208;
                                                    }
                                                    t1208 = t1231;
                                                    t1235 = *(int *)(((int)stk + 84));
                                                    t1208 = t1235;
                                                    t1208 = (t1208 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t1208;
                                                }
                                            } else {
                                                t1236 = *(int *)0xC1EE20C;
                                                if (t1236 == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1237 = 0xC1EE20C;
                                                    u1240 = 99999.8984f;
                                                    for (;;) {
                                                        t1241 = *(int *)(((int)stk + 84));
                                                        if ((int)t1241 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1237 = ((int)stk + 8);
                                                        t1237 = (t1237 + 0x14);
                                                        t1242 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                        t1243 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                        *(unsigned int *)((t1237 + 0x8)) = t1242;
                                                        t1244 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                        *(unsigned int *)((t1237 + 0x4)) = t1243;
                                                        *(unsigned int *)((t1237 + 0x0)) = t1244;
                                                        t1245 = *(int *)(((int)stk + 84));
                                                        t1237 = 0xC2A6690;
                                                        t1246 = *(int *)((t1237 + 0x0));
                                                        t1247 = *(int *)((((((t1245 << 1) + t1245) << 2) + t1246) + 0xEC8));
                                                        t1248 = *(int *)(((int)stk + 84));
                                                        t1249 = *(int *)((t1247 + 0x0));
                                                        t1250 = *(int *)((((((t1248 << 1) + t1248) << 2) + t1246) + 0xEC4));
                                                        t1251 = getNearLineIndex(0x0, t1250, t1249, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                        u1238 = t1251;
                                                        u1239 = u1238;
                                                        *(float *)(((int)stk + 12)) = u1238;
                                                        u1252 = *(float *)(((int)stk + 8));
                                                        u1240 = u1252;
                                                        if (u1240 > u1239) {
                                                            *(float *)(((int)stk + 8)) = u1239;
                                                            t1253 = *(int *)(((int)stk + 84));
                                                            t1254 = *(int *)(((int)stk + 40));
                                                            t1255 = *(int *)0xC2A6690;
                                                            t1237 = t1255;
                                                            t1256 = ((((t1253 << 1) + t1253) << 2) + t1237);
                                                            t1237 = t1254;
                                                            t1257 = ((t1254 << 1) + t1237);
                                                            t1237 = 0xEC4;
                                                            t1237 = (t1237 + t1256);
                                                            t1258 = *(int *)((t1237 + 0x0));
                                                            t1237 = ((int)stk + 8);
                                                            t1237 = (t1237 + 0x8);
                                                            t1259 = *(int *)(((t1258 + (t1257 << 2)) + 0x8));
                                                            t1260 = *(int *)(((t1258 + (t1257 << 2)) + 0x4));
                                                            *(unsigned int *)((t1237 + 0x8)) = t1259;
                                                            t1261 = *(int *)(((t1258 + (t1257 << 2)) + 0x0));
                                                            *(unsigned int *)((t1237 + 0x4)) = t1260;
                                                            *(unsigned int *)((t1237 + 0x0)) = t1261;
                                                            t1262 = t1237;
                                                        }
                                                        t1237 = t1262;
                                                        t1266 = *(int *)(((int)stk + 84));
                                                        t1237 = t1266;
                                                        t1237 = (t1237 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1237;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    t1268 = *(int *)(((int)stk + 88));
                                                    t1269 = nlLength((((int)stk + 8) + 0x38), (t1268 + 0x78));
                                                    u1270 = *(float *)(((int)stk + 8));
                                                    if (t1269 > u1270) {
                                                        t1271 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                        t1272 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1271;
                                                        t1273 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1272;
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1273;
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            u1291 = *(float *)(((int)stk + 68));
                                            *(float *)(((int)stk + 68)) = (u1291 + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                        }
                                        t1297 = *(int *)0xC1EE20C;
                                        if (t1297 == 0) {
                                            *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((int)stk + 84)) = 0x0;
                                            t1298 = 0xFFFFFFFF;
                                            u1299 = u1294;
                                            u1301 = u1295;
                                            for (;;) {
                                                t1302 = *(int *)(((int)stk + 84));
                                                if ((int)t1302 >= (int)0xB) {
                                                    break;
                                                }
                                                t1303 = *(int *)(((int)stk + 88));
                                                t1304 = *(signed char *)(((int)stk + 84));
                                                t1305 = nlLength(((unsigned char)(((t1304 << 1) + t1304) << 2) + 0xC0E4A18), (t1303 + 0x78));
                                                u1299 = t1305;
                                                u1301 = 1.0f;
                                                u1299 = (u1299 * u1301);
                                                *(float *)(((int)stk + 44)) = u1299;
                                                u1306 = *(float *)(((int)stk + 48));
                                                u1300 = u1306;
                                                if (u1300 > u1299) {
                                                    u1307 = *(float *)(((int)stk + 44));
                                                    u1300 = u1307;
                                                    *(float *)(((int)stk + 48)) = u1300;
                                                    t1308 = *(int *)(((int)stk + 84));
                                                    *(unsigned int *)(((int)stk + 80)) = t1308;
                                                }
                                                t1312 = *(int *)(((int)stk + 84));
                                                t1298 = t1312;
                                                t1298 = (t1298 + 0x1);
                                                *(unsigned int *)(((int)stk + 84)) = t1298;
                                            }
                                            t1313 = *(int *)(((int)stk + 80));
                                            if (t1313 == -1) {
                                            } else {
                                                t1314 = *(signed char *)(((int)stk + 80));
                                                t1315 = *(int *)((((unsigned char)(((t1314 << 1) + t1314) << 2) + 0xC0E4A18) + 0x8));
                                                t1316 = *(int *)((((unsigned char)(((t1314 << 1) + t1314) << 2) + 0xC0E4A18) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1315;
                                                t1317 = *(int *)((((unsigned char)(((t1314 << 1) + t1314) << 2) + 0xC0E4A18) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1316;
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1317;
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                        } else {
                                            t1327 = *(int *)0xC1EE20C;
                                            if (t1327 != 1) {
                                            } else {
                                                *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                t1328 = *(int *)0xC179490;
                                                if ((int)t1328 >= (int)0x11) {
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1329 = t1328;
                                                    u1330 = u1294;
                                                    u1332 = u1295;
                                                    for (;;) {
                                                        t1333 = *(int *)(((int)stk + 84));
                                                        if ((int)t1333 >= (int)0xA) {
                                                            break;
                                                        }
                                                        t1334 = *(int *)(((int)stk + 88));
                                                        t1335 = *(signed char *)(((int)stk + 84));
                                                        t1336 = nlLength(((signed char)(((t1335 << 1) + t1335) << 2) + 0xC0E4C70), (t1334 + 0x78));
                                                        u1330 = t1336;
                                                        u1332 = 1.0f;
                                                        u1330 = (u1330 * u1332);
                                                        *(float *)(((int)stk + 44)) = u1330;
                                                        u1337 = *(float *)(((int)stk + 48));
                                                        u1331 = u1337;
                                                        if (u1331 > u1330) {
                                                            u1338 = *(float *)(((int)stk + 44));
                                                            u1331 = u1338;
                                                            *(float *)(((int)stk + 48)) = u1331;
                                                            t1339 = *(int *)(((int)stk + 84));
                                                            *(unsigned int *)(((int)stk + 80)) = t1339;
                                                        }
                                                        t1343 = *(int *)(((int)stk + 80));
                                                        if (t1343 != -1) {
                                                            t1344 = *(signed char *)(((int)stk + 80));
                                                            t1329 = t1344;
                                                            t1345 = t1329;
                                                            t1329 = (t1329 << 1);
                                                            t1329 = (t1329 + t1345);
                                                            t1329 = (t1329 << 2);
                                                            t1329 = (signed char)t1329;
                                                            t1329 = (t1329 + 0xC0E4C70);
                                                            t1346 = *(int *)((t1329 + 0x8));
                                                            t1347 = *(int *)((t1329 + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1346;
                                                            t1348 = *(int *)((t1329 + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1347;
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1348;
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        } else {
                                                            u1352 = u1330;
                                                            u1353 = u1331;
                                                            u1354 = u1332;
                                                        }
                                                        u1330 = u1352;
                                                        u1331 = u1353;
                                                        u1332 = u1354;
                                                        t1356 = *(int *)(((int)stk + 84));
                                                        t1329 = t1356;
                                                        t1329 = (t1329 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1329;
                                                    }
                                                } else {
                                                    t1357 = *(int *)(((int)stk + 88));
                                                    u1358 = *(float *)((t1357 + 0x7C));
                                                    if (-40.0f > u1358) {
                                                        t1359 = 0x0;
                                                        u1360 = u1294;
                                                        u1361 = u1358;
                                                        u1362 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t1359;
                                                            if ((int)t1359 >= (int)0x1C) {
                                                                break;
                                                            }
                                                            t1363 = *(int *)(((int)stk + 88));
                                                            t1364 = *(short *)(((int)stk + 84));
                                                            t1365 = nlLength(((short)(((t1364 << 1) + t1364) << 2) + 0xC0E4B20), (t1363 + 0x78));
                                                            u1360 = t1365;
                                                            u1362 = 1.0f;
                                                            u1360 = (u1360 * u1362);
                                                            *(float *)(((int)stk + 44)) = u1360;
                                                            u1366 = *(float *)(((int)stk + 48));
                                                            u1361 = u1366;
                                                            if (u1361 > u1360) {
                                                                u1367 = *(float *)(((int)stk + 44));
                                                                u1361 = u1367;
                                                                *(float *)(((int)stk + 48)) = u1361;
                                                                t1368 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t1368;
                                                            }
                                                            t1372 = *(int *)(((int)stk + 80));
                                                            if (t1372 != -1) {
                                                                t1373 = *(short *)(((int)stk + 80));
                                                                t1359 = t1373;
                                                                t1374 = t1359;
                                                                t1359 = (t1359 << 1);
                                                                t1359 = (t1359 + t1374);
                                                                t1359 = (t1359 << 2);
                                                                t1359 = (short)t1359;
                                                                t1359 = (t1359 + 0xC0E4B20);
                                                                t1375 = *(int *)((t1359 + 0x8));
                                                                t1376 = *(int *)((t1359 + 0x4));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1375;
                                                                t1377 = *(int *)((t1359 + 0x0));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1376;
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1377;
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            } else {
                                                                u1381 = u1360;
                                                                u1382 = u1361;
                                                                u1383 = u1362;
                                                            }
                                                            u1360 = u1381;
                                                            u1361 = u1382;
                                                            u1362 = u1383;
                                                            t1385 = *(int *)(((int)stk + 84));
                                                            t1359 = t1385;
                                                            t1359 = (t1359 + 0x1);
                                                        }
                                                    } else {
                                                        t1386 = 0x0;
                                                        u1387 = u1294;
                                                        u1388 = u1358;
                                                        u1389 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t1386;
                                                            if ((int)t1386 >= (int)0xB) {
                                                                break;
                                                            }
                                                            t1390 = *(int *)(((int)stk + 88));
                                                            t1391 = *(signed char *)(((int)stk + 84));
                                                            t1392 = nlLength(((unsigned char)(((t1391 << 1) + t1391) << 2) + 0xC0E4A9C), (t1390 + 0x78));
                                                            u1387 = t1392;
                                                            u1389 = 1.0f;
                                                            u1387 = (u1387 * u1389);
                                                            *(float *)(((int)stk + 44)) = u1387;
                                                            u1393 = *(float *)(((int)stk + 48));
                                                            u1388 = u1393;
                                                            if (u1388 > u1387) {
                                                                u1394 = *(float *)(((int)stk + 44));
                                                                u1388 = u1394;
                                                                *(float *)(((int)stk + 48)) = u1388;
                                                                t1395 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t1395;
                                                            }
                                                            t1399 = *(int *)(((int)stk + 84));
                                                            t1386 = t1399;
                                                            t1386 = (t1386 + 0x1);
                                                        }
                                                        t1400 = *(int *)(((int)stk + 80));
                                                        if (t1400 != -1) {
                                                            t1401 = *(signed char *)(((int)stk + 80));
                                                            t1402 = *(int *)((((unsigned char)(((t1401 << 1) + t1401) << 2) + 0xC0E4A9C) + 0x8));
                                                            t1403 = *(int *)((((unsigned char)(((t1401 << 1) + t1401) << 2) + 0xC0E4A9C) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1402;
                                                            t1404 = *(int *)((((unsigned char)(((t1401 << 1) + t1401) << 2) + 0xC0E4A9C) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1403;
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1404;
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        u1444 = *(float *)(((int)stk + 48));
                                        *(float *)(((int)stk + 48)) = (u1444 - 50.0f);
                                        if ((u1444 - 50.0f) > 550.0f) {
                                            *(float *)(((int)stk + 48)) = 550.0f;
                                        }
                                        u1448 = *(float *)(((int)stk + 48));
                                        if (0.0f > u1448) {
                                            *(float *)(((int)stk + 48)) = 0.0f;
                                        }
                                        u1450 = *(float *)(((int)stk + 48));
                                        u1451 = *(float *)(((int)stk + 48));
                                        u1452 = 6.0f;
                                        u1452 = u1452 + 45.0f * (((550.0f - u1450) / 550.0f) * ((550.0f - u1451) / 550.0f));
                                        *(float *)0xC1798A4 = u1452;
                                        t1453 = *(int *)0xC0E4A14;
                                        if (t1453 == 0) {
                                        } else {
                                            *(float *)0xC1798A4 = 60.0f;
                                            t1454 = *(int *)(((int)stk + 88));
                                            t1455 = *(int *)(((t1454 + 0x78) + 0x8));
                                            t1456 = *(int *)(((t1454 + 0x78) + 0x4));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1455;
                                            t1457 = *(int *)(((t1454 + 0x78) + 0x0));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1456;
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1457;
                                            t1458 = *(int *)(((int)stk + 88));
                                            t1459 = *(short *)((t1458 + 0xF4));
                                            t1460 = FUN_0c089de0((unsigned short)t1459);
                                            *(float *)(((int)stk + 52)) = (t1460 * 300.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            t1461 = *(int *)(((int)stk + 88));
                                            t1462 = *(short *)((t1461 + 0xF4));
                                            t1463 = FUN_0c089de8((unsigned short)t1462);
                                            *(float *)(((int)stk + 60)) = (t1463 * 300.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            t1465 = *(int *)0xC179490;
                                            if ((int)t1465 >= (int)0x14) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                t1466 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                t1467 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t1466;
                                                t1468 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t1467;
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t1468;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t1469 = (((int)stk + 8) + 0xC);
                                                u1472 = 99999.8984f;
                                                for (;;) {
                                                    t1473 = *(int *)(((int)stk + 84));
                                                    if ((int)t1473 >= (int)0x2) {
                                                        break;
                                                    }
                                                    t1469 = ((int)stk + 8);
                                                    t1469 = (t1469 + 0xC);
                                                    t1474 = t1469;
                                                    t1475 = *(int *)(((int)stk + 84));
                                                    t1469 = 0xC2A6690;
                                                    t1476 = *(int *)((t1469 + 0x0));
                                                    t1477 = *(int *)((((((t1475 << 1) + t1475) << 2) + t1476) + 0xEE0));
                                                    t1478 = *(int *)(((int)stk + 84));
                                                    t1479 = *(int *)((t1477 + 0x0));
                                                    t1480 = *(int *)((((((t1478 << 1) + t1478) << 2) + t1476) + 0xED0));
                                                    t1481 = getNearLineIndex(0x0, t1480, t1479, (((int)stk + 4) + 0x24), t1474);
                                                    u1470 = t1481;
                                                    u1471 = u1470;
                                                    *(float *)(((int)stk + 36)) = u1470;
                                                    u1482 = *(float *)(((int)stk + 32));
                                                    u1472 = u1482;
                                                    if (u1472 > u1471) {
                                                        *(float *)(((int)stk + 32)) = u1471;
                                                        t1483 = *(int *)(((int)stk + 84));
                                                        t1484 = *(int *)(((int)stk + 40));
                                                        t1485 = *(int *)0xC2A6690;
                                                        t1469 = t1485;
                                                        t1486 = ((((t1483 << 1) + t1483) << 2) + t1469);
                                                        t1469 = t1484;
                                                        t1487 = ((t1484 << 1) + t1469);
                                                        t1469 = 0xEDC;
                                                        t1469 = (t1469 + t1486);
                                                        t1488 = *(int *)((t1469 + 0x0));
                                                        t1469 = ((int)stk + 8);
                                                        t1469 = (t1469 + 0x38);
                                                        t1489 = *(int *)(((t1488 + (t1487 << 2)) + 0x8));
                                                        t1490 = *(int *)(((t1488 + (t1487 << 2)) + 0x4));
                                                        *(unsigned int *)((t1469 + 0x8)) = t1489;
                                                        t1491 = *(int *)(((t1488 + (t1487 << 2)) + 0x0));
                                                        *(unsigned int *)((t1469 + 0x4)) = t1490;
                                                        *(unsigned int *)((t1469 + 0x0)) = t1491;
                                                        t1492 = t1469;
                                                    }
                                                    t1469 = t1492;
                                                    t1496 = *(int *)(((int)stk + 84));
                                                    t1469 = t1496;
                                                    t1469 = (t1469 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t1469;
                                                }
                                            } else {
                                                t1497 = *(int *)0xC1EE20C;
                                                if (t1497 == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1498 = 0xC1EE20C;
                                                    u1501 = 99999.8984f;
                                                    for (;;) {
                                                        t1502 = *(int *)(((int)stk + 84));
                                                        if ((int)t1502 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1498 = ((int)stk + 8);
                                                        t1498 = (t1498 + 0x14);
                                                        t1503 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                        t1504 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                        *(unsigned int *)((t1498 + 0x8)) = t1503;
                                                        t1505 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                        *(unsigned int *)((t1498 + 0x4)) = t1504;
                                                        *(unsigned int *)((t1498 + 0x0)) = t1505;
                                                        t1506 = *(int *)(((int)stk + 84));
                                                        t1498 = 0xC2A6690;
                                                        t1507 = *(int *)((t1498 + 0x0));
                                                        t1508 = *(int *)((((((t1506 << 1) + t1506) << 2) + t1507) + 0xEC8));
                                                        t1509 = *(int *)(((int)stk + 84));
                                                        t1510 = *(int *)((t1508 + 0x0));
                                                        t1511 = *(int *)((((((t1509 << 1) + t1509) << 2) + t1507) + 0xEC4));
                                                        t1512 = getNearLineIndex(0x0, t1511, t1510, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                        u1499 = t1512;
                                                        u1500 = u1499;
                                                        *(float *)(((int)stk + 12)) = u1499;
                                                        u1513 = *(float *)(((int)stk + 8));
                                                        u1501 = u1513;
                                                        if (u1501 > u1500) {
                                                            *(float *)(((int)stk + 8)) = u1500;
                                                            t1514 = *(int *)(((int)stk + 84));
                                                            t1515 = *(int *)(((int)stk + 40));
                                                            t1516 = *(int *)0xC2A6690;
                                                            t1498 = t1516;
                                                            t1517 = ((((t1514 << 1) + t1514) << 2) + t1498);
                                                            t1498 = t1515;
                                                            t1518 = ((t1515 << 1) + t1498);
                                                            t1498 = 0xEC4;
                                                            t1498 = (t1498 + t1517);
                                                            t1519 = *(int *)((t1498 + 0x0));
                                                            t1498 = ((int)stk + 8);
                                                            t1498 = (t1498 + 0x8);
                                                            t1520 = *(int *)(((t1519 + (t1518 << 2)) + 0x8));
                                                            t1521 = *(int *)(((t1519 + (t1518 << 2)) + 0x4));
                                                            *(unsigned int *)((t1498 + 0x8)) = t1520;
                                                            t1522 = *(int *)(((t1519 + (t1518 << 2)) + 0x0));
                                                            *(unsigned int *)((t1498 + 0x4)) = t1521;
                                                            *(unsigned int *)((t1498 + 0x0)) = t1522;
                                                            t1523 = t1498;
                                                        }
                                                        t1498 = t1523;
                                                        t1527 = *(int *)(((int)stk + 84));
                                                        t1498 = t1527;
                                                        t1498 = (t1498 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1498;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    t1529 = *(int *)(((int)stk + 88));
                                                    t1530 = nlLength((((int)stk + 8) + 0x38), (t1529 + 0x78));
                                                    u1531 = *(float *)(((int)stk + 8));
                                                    if (t1530 > u1531) {
                                                        t1532 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                        t1533 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1532;
                                                        t1534 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1533;
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1534;
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            u1552 = *(float *)(((int)stk + 68));
                                            *(float *)(((int)stk + 68)) = (u1552 + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x0);
                                            t1554 = *(int *)(((int)stk + 88));
                                            camSetTarget((t1554 + 0x78), 0x0);
                                            SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                            SetCameraMode(0x1);
                                        }
                                    }
                                } else {
                                    if (t54 == 8) {
                                    } else {
                                        if (t54 == 10) {
                                            FUN_0c06468e();
                                        } else {
                                            if (t54 == 11) {
                                                FUN_0c06468e();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        *(float *)0xC1798A4 = 60.0f;
        t1653 = *(int *)0xC0E4A14;
        if (t1653 != 0) {
            *(float *)0xC1798A4 = 60.0f;
            t1654 = *(int *)(((int)stk + 88));
            t1655 = *(signed char *)(((t1654 + 0x84) + 0x0));
            *(unsigned char *)0xC1798AC = t1655;
            t1656 = *(signed char *)(((t1654 + 0x84) + 0x1));
            *(unsigned char *)0xC1798AD = t1656;
            t1657 = *(signed char *)(((t1654 + 0x84) + 0x2));
            *(unsigned char *)0xC1798AE = t1657;
            t1658 = *(signed char *)(((t1654 + 0x84) + 0x3));
            *(unsigned char *)0xC1798AF = t1658;
            t1659 = *(signed char *)(((t1654 + 0x84) + 0x4));
            *(unsigned char *)0xC1798B0 = t1659;
            t1660 = *(signed char *)(((t1654 + 0x84) + 0x5));
            *(unsigned char *)0xC1798B1 = t1660;
            t1661 = *(int *)(((int)stk + 88));
            t1662 = *(short *)((t1661 + 0x88));
            t1663 = *(int *)(((int)stk + 88));
            t1664 = *(short *)((t1663 + 0x86));
            t1665 = *(int *)(((int)stk + 88));
            t1666 = *(short *)((t1665 + 0x84));
            camSetAngles((unsigned short)t1666, (unsigned short)t1664, (unsigned short)t1662, 0x0);
            nlPushUnitMatrix();
            t1669 = *(int *)(((int)stk + 88));
            nlTranslateV((t1669 + 0x78));
            t1671 = *(short *)0xC1798AE;
            nlRotateAY((unsigned short)t1671);
            t1673 = *(short *)0xC1798AC;
            nlRotateAX((unsigned short)t1673);
            *(float *)(((int)stk + 92)) = 0.0f;
            *(float *)(((int)stk + 96)) = 5.0f;
            *(float *)(((int)stk + 100)) = 17.0f;
            nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
            camSetTarget((((int)stk + 8) + 0x54), 0x0);
            SetCameraMode(0x1);
            nlPopMatrix(0x1);
            *(unsigned int *)0xC179954 = 0x28;
        }
        t1685 = *(int *)(((int)stk + 88));
        t1686 = *(short *)((t1685 + 0x86));
        FUN_0c02bb60(t1686, 0xC1798AE, 0.149999991f);
        t1688 = *(int *)(((int)stk + 88));
        t1689 = *(int *)((0x3B0 + t1688));
        if (t1689 == 4) {
            u1690 = *(float *)0xC179958;
            if (u1690 == 0.0f) {
                t1691 = *(int *)(((int)stk + 88));
                u1692 = *(float *)((0x15C + t1691));
                if (u1692 > -0.099999994f) {
                    t1693 = *(int *)(((int)stk + 88));
                    t1694 = *(int *)((0x120 + t1693));
                    if (t1694 != 0) {
                        *(unsigned int *)0xC179964 = 0x1;
                    } else {
                        *(unsigned int *)0xC179964 = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC179964 = 0x0;
                }
            }
            u1712 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1712 + 0.00999999978f);
            if ((u1712 + 0.00999999978f) > 0.149999991f) {
                *(float *)0xC179958 = 0.149999991f;
            }
        } else {
            u1715 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1715 - 0.00999999978f);
            if (0.0f > (u1715 - 0.00999999978f)) {
                *(float *)0xC179958 = 0.0f;
            }
        }
        t1724 = *(int *)(((int)stk + 88));
        u1725 = *(float *)((t1724 + 0x15C));
        if (u1725 > -0.099999994f) {
            t1726 = *(int *)(((int)stk + 88));
            u1727 = *(float *)((t1726 + 0x15C));
            if (0.099999994f > u1727) {
                t1728 = *(int *)(((int)stk + 88));
                *(volatile float *)((t1728 + 0x15C));
                t1730 = *(short *)((t1728 + 0xF4));
                FUN_0c02bb60(t1730, 0xC17995C, 0.149999991f);
            } else {
                u1732 = *(float *)0xC179958;
                if (u1732 == 0.0f) {
                    t1733 = *(int *)(((int)stk + 88));
                    t1734 = *(short *)((t1733 + 0xF4));
                    FUN_0c02bb60(t1734, 0xC17995C, 0.149999991f);
                } else {
                    t1736 = *(int *)(((int)stk + 88));
                    u1737 = *(float *)((t1736 + 0x15C));
                    if (0.0f > u1737) {
                        t1738 = *(int *)0xC179964;
                        if (t1738 != 0) {
                            t1739 = *(int *)(((int)stk + 88));
                            t1740 = *(short *)((t1739 + 0xF4));
                            *(unsigned short *)0xC17995C = (t1740 + 0x8000);
                        } else {
                            t1741 = *(int *)(((int)stk + 88));
                            t1742 = *(short *)((0xF4 + t1741));
                            *(unsigned short *)0xC17995C = t1742;
                        }
                    } else {
                        t1747 = *(int *)(((int)stk + 88));
                        t1748 = *(short *)((0xF4 + t1747));
                        *(unsigned short *)0xC17995C = t1748;
                    }
                }
            }
        } else {
            u1769 = *(float *)0xC179958;
            if (u1769 == 0.0f) {
                t1770 = *(int *)(((int)stk + 88));
                t1771 = *(short *)((t1770 + 0xF4));
                FUN_0c02bb60(t1771, 0xC17995C, 0.149999991f);
            } else {
                t1773 = *(int *)(((int)stk + 88));
                u1774 = *(float *)((t1773 + 0x15C));
                if (0.0f > u1774) {
                    t1775 = *(int *)0xC179964;
                    if (t1775 != 0) {
                        t1776 = *(int *)(((int)stk + 88));
                        t1777 = *(short *)((t1776 + 0xF4));
                        *(unsigned short *)0xC17995C = (t1777 + 0x8000);
                    } else {
                        t1778 = *(int *)(((int)stk + 88));
                        t1779 = *(short *)((0xF4 + t1778));
                        *(unsigned short *)0xC17995C = t1779;
                    }
                } else {
                    t1784 = *(int *)(((int)stk + 88));
                    t1785 = *(short *)((0xF4 + t1784));
                    *(unsigned short *)0xC17995C = t1785;
                }
            }
        }
        t1806 = *(short *)0xC17995C;
        u1807 = *(float *)0xC179958;
        FUN_0c02bb60(t1806, 0xC1798AE, u1807);
        t1809 = *(int *)(((int)stk + 88));
        t1810 = *(short *)((t1809 + 0x84));
        FUN_0c02bb60(t1810, 0xC1798AC, 0.099999994f);
        u1812 = *(float *)0xC179958;
        if (u1812 == 0.0f) {
            t1813 = *(int *)0xC179960;
            if (t1813 != 0) {
                t1814 = *(int *)(((int)stk + 88));
                t1815 = *(int *)((t1814 + 0x120));
                if (t1815 != 0) {
                    t1816 = *(int *)(((int)stk + 88));
                    u1817 = *(float *)((t1816 + 0x15C));
                    if (!(-0.099999994f > u1817)) {
                        *(unsigned int *)0xC179960 = 0x0;
                    }
                }
            } else {
                t1827 = *(int *)(((int)stk + 88));
                t1828 = *(int *)((0x120 + t1827));
                if (t1828 == 0) {
                    t1829 = *(int *)(((int)stk + 88));
                    u1830 = *(float *)((t1829 + 0x15C));
                    if (0.099999994f > u1830) {
                        *(unsigned int *)0xC179960 = 0x1;
                    }
                }
            }
        }
        t1854 = *(int *)0xC179960;
        if (t1854 != 0) {
            t1855 = *(int *)(((int)stk + 88));
            u1856 = *(float *)((t1855 + 0x15C));
            if (u1856 > 0.0f) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                t1857 = *(int *)(((int)stk + 88));
                u1858 = *(float *)((t1857 + 0x15C));
                *(float *)0xC0E4DD8 = u1858;
            }
            u1862 = *(float *)0xC0E4DD8;
            u1863 = *(float *)0xC1798B4;
            u1864 = *(float *)0xC1798B4;
            u1865 = u1864;
            u1865 = u1865 + 0.199999988f * ((5.0f - (u1862 * 5.0f)) - u1863);
            *(float *)0xC1798B4 = u1865;
        } else {
            t1866 = *(int *)(((int)stk + 88));
            u1867 = *(float *)((t1866 + 0x15C));
            if (0.0f > u1867) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                t1868 = *(int *)(((int)stk + 88));
                u1869 = *(float *)((t1868 + 0x15C));
                *(float *)0xC0E4DD8 = u1869;
            }
            u1873 = *(float *)0xC1798B4;
            u1874 = *(float *)0xC0E4DD8;
            u1875 = *(float *)0xC0E4D9C;
            u1876 = *(float *)0xC0E4E30;
            u1877 = *(float *)0xC0E4DA0;
            u1878 = (u1875 * u1876);
            u1878 = u1878 + u1877 * (u1874 - u1873);
            *(float *)0xC0E4E30 = u1878;
            u1879 = *(float *)0xC1798B4;
            *(float *)0xC1798B4 = (u1879 + u1878);
        }
        t1888 = *(int *)(((int)stk + 88));
        u1889 = *(float *)((t1888 + 0x80));
        u1890 = *(float *)((t1888 + 0x7C));
        u1891 = *(float *)((t1888 + 0x78));
        nlTranslate(u1891, u1890, u1889);
        t1893 = *(short *)0xC1798AE;
        nlRotateAY((unsigned short)t1893);
        t1895 = *(short *)0xC1798AC;
        nlRotateAX((unsigned short)t1895);
        t1897 = *(int *)(((int)stk + 88));
        u1898 = *(float *)((t1897 + 0x100));
        *(float *)0xC0E4DDC = u1898;
        u1899 = *(float *)0xC0E4DDC;
        if (u1899 > 0.0f) {
            *(float *)0xC0E4DDC = 0.0f;
        }
        *(float *)(((int)stk + 92)) = 0.0f;
        t1901 = *(int *)0xC179960;
        if (t1901 != 0) {
            *(float *)(((int)stk + 96)) = 5.0f;
            u1902 = *(float *)0xC0E4DD8;
            u1903 = *(float *)0xC0E4DA8;
            u1904 = 17.0f;
            u1904 = u1904 + u1903 * u1902;
            u1912 = u1904;
        } else {
            u1905 = *(float *)0xC0E4DDC;
            u1906 = *(float *)0xC0E4D98;
            u1907 = 5.0f;
            u1907 = u1907 + u1906 * u1905;
            *(float *)(((int)stk + 96)) = u1907;
            u1912 = 17.0f;
        }
        *(float *)(((int)stk + 100)) = u1912;
        nlSqrt((((int)stk + 8) + 0x54), 0xC179914);
        t1915 = *(int *)0xC179960;
        if (t1915 != 0) {
            u1916 = *(float *)0xC1798B4;
            u1917 = 15.0f;
            u1917 = u1917 + 0.466666609f * u1916;
            *(float *)(((int)stk + 96)) = u1917;
            u1918 = *(float *)0xC0E4DD8;
            u1919 = *(float *)0xC0E4DA4;
            u1920 = *(float *)0xC1798B4;
            *(float *)(((int)stk + 100)) = (((u1918 * u1919) - u1920) + -60.0f);
        } else {
            u1921 = *(float *)0xC1798B4;
            u1922 = *(float *)0xC0E4DDC;
            u1923 = *(float *)0xC0E4D90;
            u1924 = (u1921 * 0.333333313f);
            u1924 = u1924 + u1923 * u1922;
            *(float *)(((int)stk + 96)) = (u1924 + 15.0f);
            u1925 = *(float *)0xC0E4DDC;
            u1926 = *(float *)0xC0E4D94;
            u1927 = *(float *)0xC1798B4;
            *(float *)(((int)stk + 100)) = (((u1925 * u1926) - u1927) + -60.0f);
        }
        nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
        nlSubVector3op((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x54), 0xC179914);
        t1938 = *(int *)0xC17991C;
        t1939 = *(int *)0xC179918;
        *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t1938;
        t1940 = *(int *)0xC179914;
        *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t1939;
        *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t1940;
        GetCollision((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x44), 0.0f, 5.0f);
        camSetEye((((int)stk + 8) + 0x54), 0x2);
        t1943 = *(int *)0xC179954;
        if ((int)t1943 > 0) {
            t1944 = *(int *)0xC179954;
            if ((int)t1944 < (int)0xA) {
                SetCameraPosRatio(0.199999988f, 0.0f);
                u1948 = 0.199999988f;
            } else {
                SetCameraPosRatio(0.099999994f, 0.0f);
                u1948 = 0.099999994f;
            }
            SetCameraTargetRatio(u1948, 0.0f);
            t1951 = *(int *)0xC179954;
            *(unsigned int *)0xC179954 = (t1951 - 1);
        } else {
            SetCameraPosRatio(0.5f, 0.099999994f);
            SetCameraTargetRatio(0.799999952f, 0.299999982f);
        }
        t1958 = *(int *)(((int)stk + 88));
        t1959 = *(short *)((t1958 + 0x88));
        *(unsigned int *)0xC179948 = (int)((float)t1959 * 0.25f);
        SetCameraAngleRatio(0.125f, 0.125f);
        FUN_0c036378(0xC179928);
        SetCameraMode(0x1);
    }
    nlPopMatrix(0x1);
    t1973 = *(int *)(((int)stk + 88));
    *(unsigned int *)0xC0E49F8 = (t1973 + 0x78);
    t1974 = *(int *)(((int)stk + 88));
    *(unsigned int *)0xC0E49FC = (0x84 + t1974);
    *(unsigned int *)0xC0E4A00 = 0x0;
    *(unsigned int *)0xC0E4A14 = 0x0;
    FUN_0c077df0(0x3);
    nlUnitMatrix();
    u1977 = *(float *)0xC1798A4;
    u1978 = *(float *)0xC0E49F4;
    FUN_0c0792b0(((int)(((u1977 * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), u1978, 0.299999982f, 300.0f);
    *(float *)0xC0E49F4 = 1.33333325f;
    nlPushUnitMatrix();
    t1981 = *(int *)0xC1798B8;
    if (t1981 != 0) {
        if (t1981 == 1) {
            CalcHomingVector(0xC1798D0);
            CalcHomingVector(0xC1798FC);
            t1984 = *(int *)0xC179930;
            FUN_0c077890(0xC1798D0, 0xC1798FC, t1984);
            nlGetMatrix(0xC179864);
            nlInvertMatrix(0x0);
            GetAng4Mat((((int)stk + 8) + 0x44));
            t1989 = *(int *)(((int)stk + 76));
            t1990 = *(int *)0xC179928;
            *(unsigned int *)0xC179934 = (t1989 - t1990);
            t1991 = *(int *)0xC17992C;
            t1992 = *(int *)(((int)stk + 80));
            *(unsigned int *)0xC179938 = (t1992 - t1991);
            t1993 = *(int *)(((int)stk + 76));
            *(unsigned int *)0xC179928 = t1993;
            t1994 = *(int *)(((int)stk + 80));
            *(unsigned int *)0xC17992C = t1994;
            t1995 = nlLength(0xC1798D0, 0xC1798FC);
            *(float *)0xC0E4A04 = t1995;
        } else {
            if (t1981 == 2) {
                CalcHomingVector(0xC1798FC);
                FUN_0c036378(0xC179928);
                nlTranslateV(0xC1798FC);
                t1999 = *(int *)0xC17992C;
                nlRotateAY(t1999);
                t2001 = *(int *)0xC179928;
                nlRotateAX(t2001);
                t2003 = *(int *)0xC179930;
                nlRotateAZ(t2003);
                u2005 = *(float *)0xC0E4A04;
                nlTranslate(0.0f, 0.0f, u2005);
                nlGetTranslate((((int)stk + 8) + 0x44));
                nlSubVector3op(0xC1798DC, (((int)stk + 8) + 0x44), 0xC1798D0);
                t2009 = *(int *)(((((int)stk + 8) + 0x44) + 0x8));
                t2010 = *(int *)(((((int)stk + 8) + 0x44) + 0x4));
                *(unsigned int *)0xC1798D8 = t2009;
                t2011 = *(int *)(((((int)stk + 8) + 0x44) + 0x0));
                *(unsigned int *)0xC1798D4 = t2010;
                *(unsigned int *)0xC1798D0 = t2011;
                nlInvertMatrix(0x0);
                nlGetMatrix(0xC179864);
            } else {
                if (t1981 != 4) {
                } else {
                    camSetEye(0xC179840, 0x0);
                    t2015 = *(short *)0xC17985A;
                    t2016 = *(short *)0xC17985C;
                    t2017 = *(short *)0xC179858;
                    camSetAngles((unsigned short)t2017, (unsigned short)t2015, (unsigned short)t2016, 0x0);
                    CalcHomingVector(0xC1798D0);
                    FUN_0c036378(0xC179928);
                    nlTranslateV(0xC1798D0);
                    t2022 = *(int *)0xC17992C;
                    nlRotateAY(t2022);
                    t2024 = *(int *)0xC179928;
                    nlRotateAX(t2024);
                    t2026 = *(int *)0xC179930;
                    nlRotateAZ(t2026);
                    nlPushMatrix(0x0);
                    u2029 = *(float *)0xC0E4A04;
                    nlTranslate(0.0f, 0.0f, (-u2029));
                    nlGetTranslate((((int)stk + 8) + 0x44));
                    nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
                    t2033 = *(int *)(((((int)stk + 8) + 0x44) + 0x8));
                    t2034 = *(int *)(((((int)stk + 8) + 0x44) + 0x4));
                    *(unsigned int *)0xC179904 = t2033;
                    t2035 = *(int *)(((((int)stk + 8) + 0x44) + 0x0));
                    *(unsigned int *)0xC179900 = t2034;
                    *(unsigned int *)0xC1798FC = t2035;
                    nlPopMatrix(0x1);
                    nlInvertMatrix(0x0);
                    nlGetMatrix(0xC179864);
                }
            }
        }
    } else {
        CalcHomingVector(0xC1798D0);
        FUN_0c036378(0xC179928);
        nlTranslateV(0xC1798D0);
        t2053 = *(int *)0xC17992C;
        nlRotateAY(t2053);
        t2055 = *(int *)0xC179928;
        nlRotateAX(t2055);
        t2057 = *(int *)0xC179930;
        nlRotateAZ(t2057);
        nlPushMatrix(0x0);
        u2060 = *(float *)0xC0E4A04;
        nlTranslate(0.0f, 0.0f, (-u2060));
        nlGetTranslate((((int)stk + 8) + 0x44));
        nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
        t2064 = *(int *)(((((int)stk + 8) + 0x44) + 0x8));
        t2065 = *(int *)(((((int)stk + 8) + 0x44) + 0x4));
        *(unsigned int *)0xC179904 = t2064;
        t2066 = *(int *)(((((int)stk + 8) + 0x44) + 0x0));
        *(unsigned int *)0xC179900 = t2065;
        *(unsigned int *)0xC1798FC = t2066;
        nlPopMatrix(0x1);
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC179864);
    }
    nlPopMatrix(0x1);
    t2076 = *(int *)0xC1798D8;
    t2077 = *(int *)0xC1798D4;
    *(unsigned int *)0xC179848 = t2076;
    t2078 = *(int *)0xC1798D0;
    *(unsigned int *)0xC179844 = t2077;
    *(unsigned int *)0xC179840 = t2078;
    t2079 = *(int *)0xC179904;
    t2080 = *(int *)0xC179900;
    *(unsigned int *)0xC179854 = t2079;
    t2081 = *(int *)0xC1798FC;
    *(unsigned int *)0xC179850 = t2080;
    *(unsigned int *)0xC17984C = t2081;
    t2082 = *(short *)0xC179928;
    *(unsigned short *)0xC179858 = t2082;
    t2083 = *(short *)0xC17992C;
    *(unsigned short *)0xC17985A = t2083;
    t2084 = *(short *)0xC179930;
    *(unsigned short *)0xC17985C = t2084;
    FUN_0c077df0(0x2);
    nlLoadMatrix(0xC179864);
    FUN_0c077df0(0x1);
    FUN_0c078ff0();
    u2089 = *(float *)0xC1798A4;
    t2090 = FUN_0c06b028(u2089);
    return t2090;
}
