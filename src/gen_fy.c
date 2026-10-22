/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcHomingVector(int);
int FUN_0c0288d4(float, float);
int FUN_0c0288e0(float);
int FUN_0c02bb60(int, int, float);
int FUN_0c036378(int);
int FUN_0c06468e(void);
int FUN_0c06b028(float);
int FUN_0c0771b0(int, int);
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
extern int nlPushUnitMatrix();
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
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
    int t51;
    int t6;
    int t45;
    int t7;
    int t8;
    int t11;
    int t12;
    int t15;
    int t16;
    int t20;
    int t53;
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
    int t486;
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
    float t833;
    float u834;
    int t835;
    int t836;
    int t837;
    int t838;
    int t839;
    int t840;
    int t841;
    int t842;
    int t843;
    int t848;
    int t849;
    int t850;
    float u853;
    int t854;
    int t855;
    int t856;
    int t857;
    int t858;
    int t859;
    int t860;
    int t861;
    int t862;
    int t863;
    float t864;
    float u865;
    int t866;
    int t867;
    int t868;
    int t869;
    int t870;
    int t871;
    int t872;
    int t873;
    int t874;
    int t879;
    int t881;
    float t882;
    float u883;
    int t884;
    int t885;
    int t886;
    float u904;
    int t910;
    int t911;
    float u912;
    float u914;
    int t915;
    int t916;
    int t917;
    float t918;
    float u919;
    float u920;
    int t921;
    int t925;
    int t926;
    int t927;
    int t928;
    int t929;
    int t930;
    int t940;
    int t941;
    int t942;
    float u943;
    float u945;
    int t946;
    int t947;
    int t948;
    float t949;
    float u950;
    float u951;
    int t952;
    int t956;
    int t957;
    int t958;
    int t959;
    int t960;
    int t961;
    int t969;
    int t970;
    float u971;
    int t972;
    float u973;
    float u974;
    float u975;
    int t976;
    int t977;
    float t978;
    float u979;
    float u980;
    int t981;
    int t985;
    int t986;
    int t987;
    int t988;
    int t989;
    int t990;
    int t998;
    int t999;
    float u1000;
    float u1001;
    float u1002;
    int t1003;
    int t1004;
    float t1005;
    float u1006;
    float u1007;
    int t1008;
    int t1012;
    int t1013;
    int t1014;
    int t1015;
    int t1016;
    int t1017;
    float u1057;
    float u1061;
    float u1063;
    float u1064;
    float u1065;
    int t1066;
    int t1067;
    int t1068;
    int t1069;
    int t1070;
    int t1071;
    int t1072;
    float t1073;
    int t1074;
    int t1075;
    float t1076;
    int t1078;
    int t1079;
    int t1080;
    int t1081;
    int t1082;
    float u1085;
    int t1086;
    int t1087;
    int t1088;
    int t1089;
    int t1090;
    int t1091;
    int t1092;
    float t1093;
    float u1094;
    int t1095;
    int t1096;
    int t1097;
    int t1098;
    int t1099;
    int t1100;
    int t1101;
    int t1102;
    int t1103;
    int t1108;
    int t1109;
    int t1110;
    float u1113;
    int t1114;
    int t1115;
    int t1116;
    int t1117;
    int t1118;
    int t1119;
    int t1120;
    int t1121;
    int t1122;
    int t1123;
    float t1124;
    float u1125;
    int t1126;
    int t1127;
    int t1128;
    int t1129;
    int t1130;
    int t1131;
    int t1132;
    int t1133;
    int t1134;
    int t1139;
    int t1141;
    float t1142;
    float u1143;
    int t1144;
    int t1145;
    int t1146;
    float u1164;
    int t1166;
    int t1188;
    float t1190;
    int t1191;
    int t1192;
    int t1193;
    int t1194;
    int t1195;
    int t1196;
    float t1197;
    int t1198;
    int t1199;
    float t1200;
    int t1202;
    int t1203;
    int t1204;
    int t1205;
    int t1206;
    float u1209;
    int t1210;
    int t1211;
    int t1212;
    int t1213;
    int t1214;
    int t1215;
    int t1216;
    float t1217;
    float u1218;
    int t1219;
    int t1220;
    int t1221;
    int t1222;
    int t1223;
    int t1224;
    int t1225;
    int t1226;
    int t1227;
    int t1232;
    int t1233;
    int t1234;
    float u1237;
    int t1238;
    int t1239;
    int t1240;
    int t1241;
    int t1242;
    int t1243;
    int t1244;
    int t1245;
    int t1246;
    int t1247;
    float t1248;
    float u1249;
    int t1250;
    int t1251;
    int t1252;
    int t1253;
    int t1254;
    int t1255;
    int t1256;
    int t1257;
    int t1258;
    int t1263;
    int t1265;
    float t1266;
    float u1267;
    int t1268;
    int t1269;
    int t1270;
    float u1288;
    int t1294;
    int t1295;
    float u1296;
    float u1298;
    int t1299;
    int t1300;
    int t1301;
    float t1302;
    float u1303;
    float u1304;
    int t1305;
    int t1309;
    int t1310;
    int t1311;
    int t1312;
    int t1313;
    int t1314;
    int t1324;
    int t1325;
    int t1326;
    float u1327;
    float u1329;
    int t1330;
    int t1331;
    int t1332;
    float t1333;
    float u1334;
    float u1335;
    int t1336;
    int t1340;
    int t1341;
    int t1342;
    int t1343;
    int t1344;
    int t1345;
    int t1353;
    int t1354;
    float u1355;
    int t1356;
    float u1357;
    float u1358;
    float u1359;
    int t1360;
    int t1361;
    float t1362;
    float u1363;
    float u1364;
    int t1365;
    int t1369;
    int t1370;
    int t1371;
    int t1372;
    int t1373;
    int t1374;
    int t1382;
    int t1383;
    float u1384;
    float u1385;
    float u1386;
    int t1387;
    int t1388;
    float t1389;
    float u1390;
    float u1391;
    int t1392;
    int t1396;
    int t1397;
    int t1398;
    int t1399;
    int t1400;
    int t1401;
    float u1441;
    float u1445;
    float u1447;
    float u1448;
    float u1449;
    int t1450;
    int t1451;
    int t1452;
    int t1453;
    int t1454;
    int t1455;
    int t1456;
    float t1457;
    int t1458;
    int t1459;
    float t1460;
    int t1462;
    int t1463;
    int t1464;
    int t1465;
    int t1466;
    float u1469;
    int t1470;
    int t1471;
    int t1472;
    int t1473;
    int t1474;
    int t1475;
    int t1476;
    float t1477;
    float u1478;
    int t1479;
    int t1480;
    int t1481;
    int t1482;
    int t1483;
    int t1484;
    int t1485;
    int t1486;
    int t1487;
    int t1492;
    int t1493;
    int t1494;
    float u1497;
    int t1498;
    int t1499;
    int t1500;
    int t1501;
    int t1502;
    int t1503;
    int t1504;
    int t1505;
    int t1506;
    int t1507;
    float t1508;
    float u1509;
    int t1510;
    int t1511;
    int t1512;
    int t1513;
    int t1514;
    int t1515;
    int t1516;
    int t1517;
    int t1518;
    int t1523;
    int t1525;
    float t1526;
    float u1527;
    int t1528;
    int t1529;
    int t1530;
    float u1548;
    int t1550;
    int t1649;
    int t1650;
    int t1651;
    int t1652;
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
    int t1664;
    int t1665;
    int t1667;
    int t1669;
    int t1681;
    int t1682;
    int t1684;
    int t1685;
    float u1686;
    int t1687;
    float u1688;
    int t1689;
    int t1690;
    float u1708;
    float u1711;
    int t1720;
    float u1721;
    int t1722;
    float u1723;
    int t1724;
    int t1726;
    float u1728;
    int t1729;
    int t1730;
    int t1732;
    float u1733;
    int t1734;
    int t1735;
    int t1736;
    int t1737;
    int t1738;
    int t1743;
    int t1744;
    float u1765;
    int t1766;
    int t1767;
    int t1769;
    float u1770;
    int t1771;
    int t1772;
    int t1773;
    int t1774;
    int t1775;
    int t1780;
    int t1781;
    int t1802;
    float u1803;
    int t1805;
    int t1806;
    float u1808;
    int t1809;
    int t1810;
    int t1811;
    int t1812;
    float u1813;
    int t1823;
    int t1824;
    int t1825;
    float u1826;
    int t1850;
    int t1851;
    float u1852;
    int t1853;
    float u1854;
    float u1858;
    float u1859;
    float u1860;
    float u1861;
    int t1862;
    float u1863;
    int t1864;
    float u1865;
    float u1869;
    float u1870;
    float u1871;
    float u1872;
    float u1873;
    float u1874;
    float u1875;
    int t1884;
    float u1885;
    float u1886;
    float u1887;
    int t1889;
    int t1891;
    int t1893;
    float u1894;
    float u1895;
    int t1897;
    float u1898;
    float u1899;
    float u1900;
    float u1901;
    float u1902;
    float u1903;
    int t1911;
    float u1912;
    float u1913;
    float u1914;
    float u1915;
    float u1916;
    float u1917;
    float u1918;
    float u1919;
    float u1920;
    float u1921;
    float u1922;
    float u1923;
    int t1934;
    int t1935;
    int t1936;
    int t1939;
    int t1940;
    int t1947;
    int t1954;
    int t1955;
    int t1969;
    int t1970;
    float u1973;
    float u1974;
    int t1976;
    int t1977;
    int t1980;
    int t1985;
    int t1986;
    int t1987;
    int t1988;
    int t1989;
    int t1990;
    float t1991;
    int t1995;
    int t1997;
    int t1999;
    float u2001;
    int t2005;
    int t2006;
    int t2007;
    int t2011;
    int t2012;
    int t2013;
    int t2018;
    int t2020;
    int t2022;
    float u2025;
    int t2029;
    int t2030;
    int t2031;
    int t2049;
    int t2051;
    int t2053;
    float u2056;
    int t2060;
    int t2061;
    int t2062;
    int t2072;
    int t2073;
    int t2074;
    int t2075;
    int t2076;
    int t2077;
    int t2078;
    int t2079;
    int t2080;
    float u2085;
    int t2086;
    int t39;
    int t33;
    int t27;
    float u66;
    float u131;
    float u724;
    float u725;
    int t775;
    float u907;
    float u908;
    float u823;
    float u824;
    int t844;
    float u851;
    float u852;
    int t875;
    float u913;
    float u944;
    float u965;
    float u966;
    float u967;
    float u994;
    float u995;
    float u996;
    float u1083;
    float u1084;
    int t1104;
    float u1111;
    float u1112;
    int t1135;
    float u1291;
    float u1292;
    float u1207;
    float u1208;
    int t1228;
    float u1235;
    float u1236;
    int t1259;
    float u1297;
    float u1328;
    float u1349;
    float u1350;
    float u1351;
    float u1378;
    float u1379;
    float u1380;
    float u1467;
    float u1468;
    int t1488;
    float u1495;
    float u1496;
    int t1519;
    float u1908;
    float u1944;
    int stk[29] = {0};

    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0x0)) = a4;
    t0 = *(short *)(((int)stk + 104));
    *(unsigned int *)(((int)stk + 88)) = ((short)((short)t0 * (short)0x3BC) + 0xC1790CC);
    t1 = *(int *)0xC1EE2B4;
    if ((t1 & 8) != 0) {
        *(unsigned int *)0xC0E49F0 = 0x1;
    }
    t5 = *(int *)0xC1EE234;
    t51 = a4;
    if (t5 == 1) {
        t6 = *(int *)0xC0E49F0;
        t45 = a4;
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
                    } else {
                        t27 = a4;
                    }
                    t33 = t27;
                }
                t39 = t33;
            }
            t45 = t39;
        }
        t51 = t45;
    }
    t53 = ((int (*)(int))(nlPushUnitMatrix))(t51);
    t54 = *(int *)0xC179860;
    if (t54 != 0) {
        if (t54 == 1) {
            *(float *)0xC1798A4 = 40.0f;
            t55 = *(int *)0xC0E4A14;
            if (t55 != 0) {
                FUN_0c0288d4(0.949999988f, 0.099999994f);
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
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t87;
                t88 = *(int *)((((signed char)(((t86 << 1) + t86) << 2) + 0xC0E4D54) + 0x4));
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t88;
                t89 = *(int *)((((signed char)(((t86 << 1) + t86) << 2) + 0xC0E4D54) + 0x0));
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t89;
            } else {
                t90 = *(int *)0xC0E4D8C;
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t90;
                t91 = *(int *)0xC0E4D88;
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t91;
                t92 = *(int *)0xC0E4D84;
                *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t92;
            }
            t95 = *(int *)0xC179860;
            if (t95 == 2) {
                u96 = *(float *)(((int)stk + 100));
                *(float *)(((int)stk + 100)) = (-u96);
            }
            FUN_0c0771b0((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
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
                    FUN_0c0288d4(0.949999988f, 0.099999994f);
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
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t152;
                    t153 = *(int *)((((signed char)(((t151 << 1) + t151) << 2) + 0xC0E4D54) + 0x4));
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t153;
                    t154 = *(int *)((((signed char)(((t151 << 1) + t151) << 2) + 0xC0E4D54) + 0x0));
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t154;
                } else {
                    t155 = *(int *)0xC0E4D8C;
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t155;
                    t156 = *(int *)0xC0E4D88;
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t156;
                    t157 = *(int *)0xC0E4D84;
                    *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t157;
                }
                t160 = *(int *)0xC179860;
                if (t160 == 2) {
                    u161 = *(float *)(((int)stk + 100));
                    *(float *)(((int)stk + 100)) = (-u161);
                }
                FUN_0c0771b0((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
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
                        FUN_0c0288d4(0.599999964f, 0.099999994f);
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
                    FUN_0c0771b0((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
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
                        *(unsigned int *)(((((int)stk + 8) + 0x44) + 0x8)) = t233;
                        t234 = *(int *)0xC08AA7C;
                        *(unsigned int *)(((((int)stk + 8) + 0x44) + 0x4)) = t234;
                        t235 = *(int *)0xC08AA78;
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
                        t486 = ((int (*)(void))(nlPushUnitMatrix))();
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
                                FUN_0c0288d4(0.399999976f, 0.099999994f);
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
                                *(unsigned int *)0xC17991C = t594;
                                t595 = *(int *)((t593 + 0x4));
                                *(unsigned int *)0xC179918 = t595;
                                t596 = *(int *)((t593 + 0x0));
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
                                    FUN_0c0288d4(0.399999976f, 0.099999994f);
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
                                    *(unsigned int *)0xC17991C = t705;
                                    t706 = *(int *)((t704 + 0x4));
                                    *(unsigned int *)0xC179918 = t706;
                                    t707 = *(int *)((t704 + 0x0));
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
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t739;
                                                t740 = *(int *)((((signed char)(((t738 << 1) + t738) << 2) + 0xC0E4CE8) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t740;
                                                t741 = *(int *)((((signed char)(((t738 << 1) + t738) << 2) + 0xC0E4CE8) + 0x0));
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
                                                        *(unsigned int *)((t761 + 0x8)) = t772;
                                                        t773 = *(int *)((((signed char)(((t771 << 1) + t771) << 2) + 0xC0E4CE8) + 0x4));
                                                        *(unsigned int *)((t761 + 0x4)) = t773;
                                                        t774 = *(int *)((((signed char)(((t771 << 1) + t771) << 2) + 0xC0E4CE8) + 0x0));
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
                                                u907 = t806;
                                                u908 = 980.0f;
                                            } else {
                                                t807 = *(int *)(((int)stk + 88));
                                                t808 = *(int *)(((t807 + 0x78) + 0x8));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t808;
                                                t809 = *(int *)(((t807 + 0x78) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t809;
                                                t810 = *(int *)(((t807 + 0x78) + 0x0));
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
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t819;
                                                    t820 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t820;
                                                    t821 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
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
                                                        t827 = *(int *)(((int)stk + 84));
                                                        t822 = 0xC2A6690;
                                                        t828 = *(int *)((t822 + 0x0));
                                                        t829 = *(int *)((((((t827 << 1) + t827) << 2) + t828) + 0xEE0));
                                                        t830 = *(int *)(((int)stk + 84));
                                                        t831 = *(int *)((t829 + 0x0));
                                                        t832 = *(int *)((((((t830 << 1) + t830) << 2) + t828) + 0xEDC));
                                                        t833 = getNearLineIndex(0x0, t832, t831, (((int)stk + 4) + 0x24), t822);
                                                        u823 = t833;
                                                        u824 = t833;
                                                        *(float *)(((int)stk + 36)) = u823;
                                                        u834 = *(float *)(((int)stk + 32));
                                                        u825 = u834;
                                                        if (u825 > u824) {
                                                            *(float *)(((int)stk + 32)) = u824;
                                                            t835 = *(int *)(((int)stk + 84));
                                                            t836 = *(int *)(((int)stk + 40));
                                                            t837 = *(int *)0xC2A6690;
                                                            t822 = t837;
                                                            t838 = ((((t835 << 1) + t835) << 2) + t822);
                                                            t822 = t836;
                                                            t839 = ((t836 << 1) + t822);
                                                            t822 = 0xEDC;
                                                            t822 = (t822 + t838);
                                                            t840 = *(int *)((t822 + 0x0));
                                                            t822 = ((int)stk + 8);
                                                            t822 = (t822 + 0x38);
                                                            t841 = *(int *)(((t840 + (t839 << 2)) + 0x8));
                                                            *(unsigned int *)((t822 + 0x8)) = t841;
                                                            t842 = *(int *)(((t840 + (t839 << 2)) + 0x4));
                                                            *(unsigned int *)((t822 + 0x4)) = t842;
                                                            t843 = *(int *)(((t840 + (t839 << 2)) + 0x0));
                                                            *(unsigned int *)((t822 + 0x0)) = t843;
                                                            t844 = t822;
                                                        }
                                                        t822 = t844;
                                                        t848 = *(int *)(((int)stk + 84));
                                                        t822 = t848;
                                                        t822 = (t822 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t822;
                                                    }
                                                } else {
                                                    t849 = *(int *)0xC1EE20C;
                                                    if (t849 == 1) {
                                                        *(float *)(((int)stk + 8)) = 99999.8984f;
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t850 = 0xC1EE20C;
                                                        u853 = 99999.8984f;
                                                        for (;;) {
                                                            t854 = *(int *)(((int)stk + 84));
                                                            if ((int)t854 >= (int)0x2) {
                                                                break;
                                                            }
                                                            t850 = ((int)stk + 8);
                                                            t850 = (t850 + 0x14);
                                                            t855 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                            *(unsigned int *)((t850 + 0x8)) = t855;
                                                            t856 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                            *(unsigned int *)((t850 + 0x4)) = t856;
                                                            t857 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                            *(unsigned int *)((t850 + 0x0)) = t857;
                                                            t858 = *(int *)(((int)stk + 84));
                                                            t850 = 0xC2A6690;
                                                            t859 = *(int *)((t850 + 0x0));
                                                            t860 = *(int *)((((((t858 << 1) + t858) << 2) + t859) + 0xEC8));
                                                            t861 = *(int *)(((int)stk + 84));
                                                            t862 = *(int *)((t860 + 0x0));
                                                            t863 = *(int *)((((((t861 << 1) + t861) << 2) + t859) + 0xEC4));
                                                            t864 = getNearLineIndex(0x0, t863, t862, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                            u851 = t864;
                                                            u852 = u851;
                                                            *(float *)(((int)stk + 12)) = u851;
                                                            u865 = *(float *)(((int)stk + 8));
                                                            u853 = u865;
                                                            if (u853 > u852) {
                                                                *(float *)(((int)stk + 8)) = u852;
                                                                t866 = *(int *)(((int)stk + 84));
                                                                t867 = *(int *)(((int)stk + 40));
                                                                t868 = *(int *)0xC2A6690;
                                                                t850 = t868;
                                                                t869 = ((((t866 << 1) + t866) << 2) + t850);
                                                                t850 = t867;
                                                                t870 = ((t867 << 1) + t850);
                                                                t850 = 0xEC4;
                                                                t850 = (t850 + t869);
                                                                t871 = *(int *)((t850 + 0x0));
                                                                t850 = ((int)stk + 8);
                                                                t850 = (t850 + 0x8);
                                                                t872 = *(int *)(((t871 + (t870 << 2)) + 0x8));
                                                                *(unsigned int *)((t850 + 0x8)) = t872;
                                                                t873 = *(int *)(((t871 + (t870 << 2)) + 0x4));
                                                                *(unsigned int *)((t850 + 0x4)) = t873;
                                                                t874 = *(int *)(((t871 + (t870 << 2)) + 0x0));
                                                                *(unsigned int *)((t850 + 0x0)) = t874;
                                                                t875 = t850;
                                                            }
                                                            t850 = t875;
                                                            t879 = *(int *)(((int)stk + 84));
                                                            t850 = t879;
                                                            t850 = (t850 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t850;
                                                        }
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                        t881 = *(int *)(((int)stk + 88));
                                                        t882 = nlLength((((int)stk + 8) + 0x38), (t881 + 0x78));
                                                        u883 = *(float *)(((int)stk + 8));
                                                        if (t882 > u883) {
                                                            t884 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t884;
                                                            t885 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t885;
                                                            t886 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t886;
                                                        }
                                                    } else {
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    }
                                                }
                                                u904 = *(float *)(((int)stk + 68));
                                                *(float *)(((int)stk + 68)) = (u904 + 20.0f);
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                            t910 = *(int *)0xC1EE20C;
                                            if (t910 == 0) {
                                                *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t911 = 0xFFFFFFFF;
                                                u912 = u907;
                                                u914 = u908;
                                                for (;;) {
                                                    t915 = *(int *)(((int)stk + 84));
                                                    if ((int)t915 >= (int)0xB) {
                                                        break;
                                                    }
                                                    t916 = *(int *)(((int)stk + 88));
                                                    t917 = *(signed char *)(((int)stk + 84));
                                                    t918 = nlLength(((unsigned char)(((t917 << 1) + t917) << 2) + 0xC0E4A18), (t916 + 0x78));
                                                    u912 = t918;
                                                    u914 = 1.0f;
                                                    u912 = (u912 * u914);
                                                    *(float *)(((int)stk + 44)) = u912;
                                                    u919 = *(float *)(((int)stk + 48));
                                                    u913 = u919;
                                                    if (u913 > u912) {
                                                        u920 = *(float *)(((int)stk + 44));
                                                        u913 = u920;
                                                        *(float *)(((int)stk + 48)) = u913;
                                                        t921 = *(int *)(((int)stk + 84));
                                                        *(unsigned int *)(((int)stk + 80)) = t921;
                                                    }
                                                    t925 = *(int *)(((int)stk + 84));
                                                    t911 = t925;
                                                    t911 = (t911 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t911;
                                                }
                                                t926 = *(int *)(((int)stk + 80));
                                                if (t926 == -1) {
                                                } else {
                                                    t927 = *(signed char *)(((int)stk + 80));
                                                    t928 = *(int *)((((unsigned char)(((t927 << 1) + t927) << 2) + 0xC0E4A18) + 0x8));
                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t928;
                                                    t929 = *(int *)((((unsigned char)(((t927 << 1) + t927) << 2) + 0xC0E4A18) + 0x4));
                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t929;
                                                    t930 = *(int *)((((unsigned char)(((t927 << 1) + t927) << 2) + 0xC0E4A18) + 0x0));
                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t930;
                                                    camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                }
                                            } else {
                                                t940 = *(int *)0xC1EE20C;
                                                if (t940 != 1) {
                                                } else {
                                                    *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                    t941 = *(int *)0xC179490;
                                                    if ((int)t941 >= (int)0x11) {
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t942 = t941;
                                                        u943 = u907;
                                                        u945 = u908;
                                                        for (;;) {
                                                            t946 = *(int *)(((int)stk + 84));
                                                            if ((int)t946 >= (int)0xA) {
                                                                break;
                                                            }
                                                            t947 = *(int *)(((int)stk + 88));
                                                            t948 = *(signed char *)(((int)stk + 84));
                                                            t949 = nlLength(((signed char)(((t948 << 1) + t948) << 2) + 0xC0E4C70), (t947 + 0x78));
                                                            u943 = t949;
                                                            u945 = 1.0f;
                                                            u943 = (u943 * u945);
                                                            *(float *)(((int)stk + 44)) = u943;
                                                            u950 = *(float *)(((int)stk + 48));
                                                            u944 = u950;
                                                            if (u944 > u943) {
                                                                u951 = *(float *)(((int)stk + 44));
                                                                u944 = u951;
                                                                *(float *)(((int)stk + 48)) = u944;
                                                                t952 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t952;
                                                            }
                                                            t956 = *(int *)(((int)stk + 80));
                                                            if (t956 != -1) {
                                                                t957 = *(signed char *)(((int)stk + 80));
                                                                t942 = t957;
                                                                t958 = t942;
                                                                t942 = (t942 << 1);
                                                                t942 = (t942 + t958);
                                                                t942 = (t942 << 2);
                                                                t942 = (signed char)t942;
                                                                t942 = (t942 + 0xC0E4C70);
                                                                t959 = *(int *)((t942 + 0x8));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t959;
                                                                t960 = *(int *)((t942 + 0x4));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t960;
                                                                t961 = *(int *)((t942 + 0x0));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t961;
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            } else {
                                                                u965 = u943;
                                                                u966 = u944;
                                                                u967 = u945;
                                                            }
                                                            u943 = u965;
                                                            u944 = u966;
                                                            u945 = u967;
                                                            t969 = *(int *)(((int)stk + 84));
                                                            t942 = t969;
                                                            t942 = (t942 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t942;
                                                        }
                                                    } else {
                                                        t970 = *(int *)(((int)stk + 88));
                                                        u971 = *(float *)((t970 + 0x7C));
                                                        if (-40.0f > u971) {
                                                            t972 = 0x0;
                                                            u973 = u907;
                                                            u974 = u971;
                                                            u975 = -40.0f;
                                                            for (;;) {
                                                                *(unsigned int *)(((int)stk + 84)) = t972;
                                                                if ((int)t972 >= (int)0x1C) {
                                                                    break;
                                                                }
                                                                t976 = *(int *)(((int)stk + 88));
                                                                t977 = *(short *)(((int)stk + 84));
                                                                t978 = nlLength(((short)(((t977 << 1) + t977) << 2) + 0xC0E4B20), (t976 + 0x78));
                                                                u973 = t978;
                                                                u975 = 1.0f;
                                                                u973 = (u973 * u975);
                                                                *(float *)(((int)stk + 44)) = u973;
                                                                u979 = *(float *)(((int)stk + 48));
                                                                u974 = u979;
                                                                if (u974 > u973) {
                                                                    u980 = *(float *)(((int)stk + 44));
                                                                    u974 = u980;
                                                                    *(float *)(((int)stk + 48)) = u974;
                                                                    t981 = *(int *)(((int)stk + 84));
                                                                    *(unsigned int *)(((int)stk + 80)) = t981;
                                                                }
                                                                t985 = *(int *)(((int)stk + 80));
                                                                if (t985 != -1) {
                                                                    t986 = *(short *)(((int)stk + 80));
                                                                    t972 = t986;
                                                                    t987 = t972;
                                                                    t972 = (t972 << 1);
                                                                    t972 = (t972 + t987);
                                                                    t972 = (t972 << 2);
                                                                    t972 = (short)t972;
                                                                    t972 = (t972 + 0xC0E4B20);
                                                                    t988 = *(int *)((t972 + 0x8));
                                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t988;
                                                                    t989 = *(int *)((t972 + 0x4));
                                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t989;
                                                                    t990 = *(int *)((t972 + 0x0));
                                                                    *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t990;
                                                                    camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                                } else {
                                                                    u994 = u973;
                                                                    u995 = u974;
                                                                    u996 = u975;
                                                                }
                                                                u973 = u994;
                                                                u974 = u995;
                                                                u975 = u996;
                                                                t998 = *(int *)(((int)stk + 84));
                                                                t972 = t998;
                                                                t972 = (t972 + 0x1);
                                                            }
                                                        } else {
                                                            t999 = 0x0;
                                                            u1000 = u907;
                                                            u1001 = u971;
                                                            u1002 = -40.0f;
                                                            for (;;) {
                                                                *(unsigned int *)(((int)stk + 84)) = t999;
                                                                if ((int)t999 >= (int)0xB) {
                                                                    break;
                                                                }
                                                                t1003 = *(int *)(((int)stk + 88));
                                                                t1004 = *(signed char *)(((int)stk + 84));
                                                                t1005 = nlLength(((unsigned char)(((t1004 << 1) + t1004) << 2) + 0xC0E4A9C), (t1003 + 0x78));
                                                                u1000 = t1005;
                                                                u1002 = 1.0f;
                                                                u1000 = (u1000 * u1002);
                                                                *(float *)(((int)stk + 44)) = u1000;
                                                                u1006 = *(float *)(((int)stk + 48));
                                                                u1001 = u1006;
                                                                if (u1001 > u1000) {
                                                                    u1007 = *(float *)(((int)stk + 44));
                                                                    u1001 = u1007;
                                                                    *(float *)(((int)stk + 48)) = u1001;
                                                                    t1008 = *(int *)(((int)stk + 84));
                                                                    *(unsigned int *)(((int)stk + 80)) = t1008;
                                                                }
                                                                t1012 = *(int *)(((int)stk + 84));
                                                                t999 = t1012;
                                                                t999 = (t999 + 0x1);
                                                            }
                                                            t1013 = *(int *)(((int)stk + 80));
                                                            if (t1013 != -1) {
                                                                t1014 = *(signed char *)(((int)stk + 80));
                                                                t1015 = *(int *)((((unsigned char)(((t1014 << 1) + t1014) << 2) + 0xC0E4A9C) + 0x8));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1015;
                                                                t1016 = *(int *)((((unsigned char)(((t1014 << 1) + t1014) << 2) + 0xC0E4A9C) + 0x4));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1016;
                                                                t1017 = *(int *)((((unsigned char)(((t1014 << 1) + t1014) << 2) + 0xC0E4A9C) + 0x0));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1017;
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            u1057 = *(float *)(((int)stk + 48));
                                            *(float *)(((int)stk + 48)) = (u1057 - 50.0f);
                                            if ((u1057 - 50.0f) > 550.0f) {
                                                *(float *)(((int)stk + 48)) = 550.0f;
                                            }
                                            u1061 = *(float *)(((int)stk + 48));
                                            if (0.0f > u1061) {
                                                *(float *)(((int)stk + 48)) = 0.0f;
                                            }
                                            u1063 = *(float *)(((int)stk + 48));
                                            u1064 = *(float *)(((int)stk + 48));
                                            u1065 = 6.0f;
                                            u1065 = u1065 + 45.0f * (((550.0f - u1063) / 550.0f) * ((550.0f - u1064) / 550.0f));
                                            *(float *)0xC1798A4 = u1065;
                                            t1066 = *(int *)0xC0E4A14;
                                            if (t1066 == 0) {
                                            } else {
                                                *(float *)0xC1798A4 = 60.0f;
                                                t1067 = *(int *)(((int)stk + 88));
                                                t1068 = *(int *)(((t1067 + 0x78) + 0x8));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1068;
                                                t1069 = *(int *)(((t1067 + 0x78) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1069;
                                                t1070 = *(int *)(((t1067 + 0x78) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1070;
                                                t1071 = *(int *)(((int)stk + 88));
                                                t1072 = *(short *)((t1071 + 0xF4));
                                                t1073 = FUN_0c089de0((unsigned short)t1072);
                                                *(float *)(((int)stk + 52)) = (t1073 * 300.0f);
                                                *(float *)(((int)stk + 56)) = 0.0f;
                                                t1074 = *(int *)(((int)stk + 88));
                                                t1075 = *(short *)((t1074 + 0xF4));
                                                t1076 = FUN_0c089de8((unsigned short)t1075);
                                                *(float *)(((int)stk + 60)) = (t1076 * 300.0f);
                                                GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                                t1078 = *(int *)0xC179490;
                                                if ((int)t1078 >= (int)0x14) {
                                                    *(float *)(((int)stk + 32)) = 99999.8984f;
                                                    t1079 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t1079;
                                                    t1080 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t1080;
                                                    t1081 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                    *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t1081;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1082 = (((int)stk + 8) + 0xC);
                                                    u1085 = 99999.8984f;
                                                    for (;;) {
                                                        t1086 = *(int *)(((int)stk + 84));
                                                        if ((int)t1086 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1082 = ((int)stk + 8);
                                                        t1082 = (t1082 + 0xC);
                                                        t1087 = *(int *)(((int)stk + 84));
                                                        t1082 = 0xC2A6690;
                                                        t1088 = *(int *)((t1082 + 0x0));
                                                        t1089 = *(int *)((((((t1087 << 1) + t1087) << 2) + t1088) + 0xEE0));
                                                        t1090 = *(int *)(((int)stk + 84));
                                                        t1091 = *(int *)((t1089 + 0x0));
                                                        t1092 = *(int *)((((((t1090 << 1) + t1090) << 2) + t1088) + 0xED0));
                                                        t1093 = getNearLineIndex(0x0, t1092, t1091, (((int)stk + 4) + 0x24), t1082);
                                                        u1083 = t1093;
                                                        u1084 = u1083;
                                                        *(float *)(((int)stk + 36)) = u1083;
                                                        u1094 = *(float *)(((int)stk + 32));
                                                        u1085 = u1094;
                                                        if (u1085 > u1084) {
                                                            *(float *)(((int)stk + 32)) = u1084;
                                                            t1095 = *(int *)(((int)stk + 84));
                                                            t1096 = *(int *)(((int)stk + 40));
                                                            t1097 = *(int *)0xC2A6690;
                                                            t1082 = t1097;
                                                            t1098 = ((((t1095 << 1) + t1095) << 2) + t1082);
                                                            t1082 = t1096;
                                                            t1099 = ((t1096 << 1) + t1082);
                                                            t1082 = 0xEDC;
                                                            t1082 = (t1082 + t1098);
                                                            t1100 = *(int *)((t1082 + 0x0));
                                                            t1082 = ((int)stk + 8);
                                                            t1082 = (t1082 + 0x38);
                                                            t1101 = *(int *)(((t1100 + (t1099 << 2)) + 0x8));
                                                            *(unsigned int *)((t1082 + 0x8)) = t1101;
                                                            t1102 = *(int *)(((t1100 + (t1099 << 2)) + 0x4));
                                                            *(unsigned int *)((t1082 + 0x4)) = t1102;
                                                            t1103 = *(int *)(((t1100 + (t1099 << 2)) + 0x0));
                                                            *(unsigned int *)((t1082 + 0x0)) = t1103;
                                                            t1104 = t1082;
                                                        }
                                                        t1082 = t1104;
                                                        t1108 = *(int *)(((int)stk + 84));
                                                        t1082 = t1108;
                                                        t1082 = (t1082 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1082;
                                                    }
                                                } else {
                                                    t1109 = *(int *)0xC1EE20C;
                                                    if (t1109 == 1) {
                                                        *(float *)(((int)stk + 8)) = 99999.8984f;
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t1110 = 0xC1EE20C;
                                                        u1113 = 99999.8984f;
                                                        for (;;) {
                                                            t1114 = *(int *)(((int)stk + 84));
                                                            if ((int)t1114 >= (int)0x2) {
                                                                break;
                                                            }
                                                            t1110 = ((int)stk + 8);
                                                            t1110 = (t1110 + 0x14);
                                                            t1115 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                            *(unsigned int *)((t1110 + 0x8)) = t1115;
                                                            t1116 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                            *(unsigned int *)((t1110 + 0x4)) = t1116;
                                                            t1117 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                            *(unsigned int *)((t1110 + 0x0)) = t1117;
                                                            t1118 = *(int *)(((int)stk + 84));
                                                            t1110 = 0xC2A6690;
                                                            t1119 = *(int *)((t1110 + 0x0));
                                                            t1120 = *(int *)((((((t1118 << 1) + t1118) << 2) + t1119) + 0xEC8));
                                                            t1121 = *(int *)(((int)stk + 84));
                                                            t1122 = *(int *)((t1120 + 0x0));
                                                            t1123 = *(int *)((((((t1121 << 1) + t1121) << 2) + t1119) + 0xEC4));
                                                            t1124 = getNearLineIndex(0x0, t1123, t1122, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                            u1111 = t1124;
                                                            u1112 = u1111;
                                                            *(float *)(((int)stk + 12)) = u1111;
                                                            u1125 = *(float *)(((int)stk + 8));
                                                            u1113 = u1125;
                                                            if (u1113 > u1112) {
                                                                *(float *)(((int)stk + 8)) = u1112;
                                                                t1126 = *(int *)(((int)stk + 84));
                                                                t1127 = *(int *)(((int)stk + 40));
                                                                t1128 = *(int *)0xC2A6690;
                                                                t1110 = t1128;
                                                                t1129 = ((((t1126 << 1) + t1126) << 2) + t1110);
                                                                t1110 = t1127;
                                                                t1130 = ((t1127 << 1) + t1110);
                                                                t1110 = 0xEC4;
                                                                t1110 = (t1110 + t1129);
                                                                t1131 = *(int *)((t1110 + 0x0));
                                                                t1110 = ((int)stk + 8);
                                                                t1110 = (t1110 + 0x8);
                                                                t1132 = *(int *)(((t1131 + (t1130 << 2)) + 0x8));
                                                                *(unsigned int *)((t1110 + 0x8)) = t1132;
                                                                t1133 = *(int *)(((t1131 + (t1130 << 2)) + 0x4));
                                                                *(unsigned int *)((t1110 + 0x4)) = t1133;
                                                                t1134 = *(int *)(((t1131 + (t1130 << 2)) + 0x0));
                                                                *(unsigned int *)((t1110 + 0x0)) = t1134;
                                                                t1135 = t1110;
                                                            }
                                                            t1110 = t1135;
                                                            t1139 = *(int *)(((int)stk + 84));
                                                            t1110 = t1139;
                                                            t1110 = (t1110 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t1110;
                                                        }
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                        t1141 = *(int *)(((int)stk + 88));
                                                        t1142 = nlLength((((int)stk + 8) + 0x38), (t1141 + 0x78));
                                                        u1143 = *(float *)(((int)stk + 8));
                                                        if (t1142 > u1143) {
                                                            t1144 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1144;
                                                            t1145 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1145;
                                                            t1146 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1146;
                                                        }
                                                    } else {
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    }
                                                }
                                                u1164 = *(float *)(((int)stk + 68));
                                                *(float *)(((int)stk + 68)) = (u1164 + 20.0f);
                                                camSetEye((((int)stk + 8) + 0x38), 0x0);
                                                t1166 = *(int *)(((int)stk + 88));
                                                camSetTarget((t1166 + 0x78), 0x0);
                                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                                SetCameraMode(0x1);
                                            }
                                        }
                                    } else {
                                        t1188 = *(int *)(((int)stk + 88));
                                        camSetTarget((t1188 + 0x78), 0x2);
                                        t1190 = nlLength(0xC1798D0, 0xC1798FC);
                                        *(float *)(((int)stk + 48)) = t1190;
                                        if (!(t1190 > 980.0f)) {
                                            u1291 = t1190;
                                            u1292 = 980.0f;
                                        } else {
                                            t1191 = *(int *)(((int)stk + 88));
                                            t1192 = *(int *)(((t1191 + 0x78) + 0x8));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1192;
                                            t1193 = *(int *)(((t1191 + 0x78) + 0x4));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1193;
                                            t1194 = *(int *)(((t1191 + 0x78) + 0x0));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1194;
                                            t1195 = *(int *)(((int)stk + 88));
                                            t1196 = *(short *)((t1195 + 0xF4));
                                            t1197 = FUN_0c089de0((unsigned short)t1196);
                                            *(float *)(((int)stk + 52)) = (t1197 * 950.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            t1198 = *(int *)(((int)stk + 88));
                                            t1199 = *(short *)((t1198 + 0xF4));
                                            t1200 = FUN_0c089de8((unsigned short)t1199);
                                            *(float *)(((int)stk + 60)) = (t1200 * 950.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            t1202 = *(int *)0xC179490;
                                            if ((int)t1202 >= (int)0x11) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                t1203 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t1203;
                                                t1204 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t1204;
                                                t1205 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t1205;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t1206 = (((int)stk + 8) + 0xC);
                                                u1209 = 99999.8984f;
                                                for (;;) {
                                                    t1210 = *(int *)(((int)stk + 84));
                                                    if ((int)t1210 >= (int)0x2) {
                                                        break;
                                                    }
                                                    t1206 = ((int)stk + 8);
                                                    t1206 = (t1206 + 0xC);
                                                    t1211 = *(int *)(((int)stk + 84));
                                                    t1206 = 0xC2A6690;
                                                    t1212 = *(int *)((t1206 + 0x0));
                                                    t1213 = *(int *)((((((t1211 << 1) + t1211) << 2) + t1212) + 0xEE0));
                                                    t1214 = *(int *)(((int)stk + 84));
                                                    t1215 = *(int *)((t1213 + 0x0));
                                                    t1216 = *(int *)((((((t1214 << 1) + t1214) << 2) + t1212) + 0xEDC));
                                                    t1217 = getNearLineIndex(0x0, t1216, t1215, (((int)stk + 4) + 0x24), t1206);
                                                    u1207 = t1217;
                                                    u1208 = u1207;
                                                    *(float *)(((int)stk + 36)) = u1207;
                                                    u1218 = *(float *)(((int)stk + 32));
                                                    u1209 = u1218;
                                                    if (u1209 > u1208) {
                                                        *(float *)(((int)stk + 32)) = u1208;
                                                        t1219 = *(int *)(((int)stk + 84));
                                                        t1220 = *(int *)(((int)stk + 40));
                                                        t1221 = *(int *)0xC2A6690;
                                                        t1206 = t1221;
                                                        t1222 = ((((t1219 << 1) + t1219) << 2) + t1206);
                                                        t1206 = t1220;
                                                        t1223 = ((t1220 << 1) + t1206);
                                                        t1206 = 0xEDC;
                                                        t1206 = (t1206 + t1222);
                                                        t1224 = *(int *)((t1206 + 0x0));
                                                        t1206 = ((int)stk + 8);
                                                        t1206 = (t1206 + 0x38);
                                                        t1225 = *(int *)(((t1224 + (t1223 << 2)) + 0x8));
                                                        *(unsigned int *)((t1206 + 0x8)) = t1225;
                                                        t1226 = *(int *)(((t1224 + (t1223 << 2)) + 0x4));
                                                        *(unsigned int *)((t1206 + 0x4)) = t1226;
                                                        t1227 = *(int *)(((t1224 + (t1223 << 2)) + 0x0));
                                                        *(unsigned int *)((t1206 + 0x0)) = t1227;
                                                        t1228 = t1206;
                                                    }
                                                    t1206 = t1228;
                                                    t1232 = *(int *)(((int)stk + 84));
                                                    t1206 = t1232;
                                                    t1206 = (t1206 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t1206;
                                                }
                                            } else {
                                                t1233 = *(int *)0xC1EE20C;
                                                if (t1233 == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1234 = 0xC1EE20C;
                                                    u1237 = 99999.8984f;
                                                    for (;;) {
                                                        t1238 = *(int *)(((int)stk + 84));
                                                        if ((int)t1238 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1234 = ((int)stk + 8);
                                                        t1234 = (t1234 + 0x14);
                                                        t1239 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                        *(unsigned int *)((t1234 + 0x8)) = t1239;
                                                        t1240 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                        *(unsigned int *)((t1234 + 0x4)) = t1240;
                                                        t1241 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                        *(unsigned int *)((t1234 + 0x0)) = t1241;
                                                        t1242 = *(int *)(((int)stk + 84));
                                                        t1234 = 0xC2A6690;
                                                        t1243 = *(int *)((t1234 + 0x0));
                                                        t1244 = *(int *)((((((t1242 << 1) + t1242) << 2) + t1243) + 0xEC8));
                                                        t1245 = *(int *)(((int)stk + 84));
                                                        t1246 = *(int *)((t1244 + 0x0));
                                                        t1247 = *(int *)((((((t1245 << 1) + t1245) << 2) + t1243) + 0xEC4));
                                                        t1248 = getNearLineIndex(0x0, t1247, t1246, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                        u1235 = t1248;
                                                        u1236 = u1235;
                                                        *(float *)(((int)stk + 12)) = u1235;
                                                        u1249 = *(float *)(((int)stk + 8));
                                                        u1237 = u1249;
                                                        if (u1237 > u1236) {
                                                            *(float *)(((int)stk + 8)) = u1236;
                                                            t1250 = *(int *)(((int)stk + 84));
                                                            t1251 = *(int *)(((int)stk + 40));
                                                            t1252 = *(int *)0xC2A6690;
                                                            t1234 = t1252;
                                                            t1253 = ((((t1250 << 1) + t1250) << 2) + t1234);
                                                            t1234 = t1251;
                                                            t1254 = ((t1251 << 1) + t1234);
                                                            t1234 = 0xEC4;
                                                            t1234 = (t1234 + t1253);
                                                            t1255 = *(int *)((t1234 + 0x0));
                                                            t1234 = ((int)stk + 8);
                                                            t1234 = (t1234 + 0x8);
                                                            t1256 = *(int *)(((t1255 + (t1254 << 2)) + 0x8));
                                                            *(unsigned int *)((t1234 + 0x8)) = t1256;
                                                            t1257 = *(int *)(((t1255 + (t1254 << 2)) + 0x4));
                                                            *(unsigned int *)((t1234 + 0x4)) = t1257;
                                                            t1258 = *(int *)(((t1255 + (t1254 << 2)) + 0x0));
                                                            *(unsigned int *)((t1234 + 0x0)) = t1258;
                                                            t1259 = t1234;
                                                        }
                                                        t1234 = t1259;
                                                        t1263 = *(int *)(((int)stk + 84));
                                                        t1234 = t1263;
                                                        t1234 = (t1234 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1234;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    t1265 = *(int *)(((int)stk + 88));
                                                    t1266 = nlLength((((int)stk + 8) + 0x38), (t1265 + 0x78));
                                                    u1267 = *(float *)(((int)stk + 8));
                                                    if (t1266 > u1267) {
                                                        t1268 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1268;
                                                        t1269 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1269;
                                                        t1270 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1270;
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            u1288 = *(float *)(((int)stk + 68));
                                            *(float *)(((int)stk + 68)) = (u1288 + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                        }
                                        t1294 = *(int *)0xC1EE20C;
                                        if (t1294 == 0) {
                                            *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((int)stk + 84)) = 0x0;
                                            t1295 = 0xFFFFFFFF;
                                            u1296 = u1291;
                                            u1298 = u1292;
                                            for (;;) {
                                                t1299 = *(int *)(((int)stk + 84));
                                                if ((int)t1299 >= (int)0xB) {
                                                    break;
                                                }
                                                t1300 = *(int *)(((int)stk + 88));
                                                t1301 = *(signed char *)(((int)stk + 84));
                                                t1302 = nlLength(((unsigned char)(((t1301 << 1) + t1301) << 2) + 0xC0E4A18), (t1300 + 0x78));
                                                u1296 = t1302;
                                                u1298 = 1.0f;
                                                u1296 = (u1296 * u1298);
                                                *(float *)(((int)stk + 44)) = u1296;
                                                u1303 = *(float *)(((int)stk + 48));
                                                u1297 = u1303;
                                                if (u1297 > u1296) {
                                                    u1304 = *(float *)(((int)stk + 44));
                                                    u1297 = u1304;
                                                    *(float *)(((int)stk + 48)) = u1297;
                                                    t1305 = *(int *)(((int)stk + 84));
                                                    *(unsigned int *)(((int)stk + 80)) = t1305;
                                                }
                                                t1309 = *(int *)(((int)stk + 84));
                                                t1295 = t1309;
                                                t1295 = (t1295 + 0x1);
                                                *(unsigned int *)(((int)stk + 84)) = t1295;
                                            }
                                            t1310 = *(int *)(((int)stk + 80));
                                            if (t1310 == -1) {
                                            } else {
                                                t1311 = *(signed char *)(((int)stk + 80));
                                                t1312 = *(int *)((((unsigned char)(((t1311 << 1) + t1311) << 2) + 0xC0E4A18) + 0x8));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1312;
                                                t1313 = *(int *)((((unsigned char)(((t1311 << 1) + t1311) << 2) + 0xC0E4A18) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1313;
                                                t1314 = *(int *)((((unsigned char)(((t1311 << 1) + t1311) << 2) + 0xC0E4A18) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1314;
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                        } else {
                                            t1324 = *(int *)0xC1EE20C;
                                            if (t1324 != 1) {
                                            } else {
                                                *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                t1325 = *(int *)0xC179490;
                                                if ((int)t1325 >= (int)0x11) {
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1326 = t1325;
                                                    u1327 = u1291;
                                                    u1329 = u1292;
                                                    for (;;) {
                                                        t1330 = *(int *)(((int)stk + 84));
                                                        if ((int)t1330 >= (int)0xA) {
                                                            break;
                                                        }
                                                        t1331 = *(int *)(((int)stk + 88));
                                                        t1332 = *(signed char *)(((int)stk + 84));
                                                        t1333 = nlLength(((signed char)(((t1332 << 1) + t1332) << 2) + 0xC0E4C70), (t1331 + 0x78));
                                                        u1327 = t1333;
                                                        u1329 = 1.0f;
                                                        u1327 = (u1327 * u1329);
                                                        *(float *)(((int)stk + 44)) = u1327;
                                                        u1334 = *(float *)(((int)stk + 48));
                                                        u1328 = u1334;
                                                        if (u1328 > u1327) {
                                                            u1335 = *(float *)(((int)stk + 44));
                                                            u1328 = u1335;
                                                            *(float *)(((int)stk + 48)) = u1328;
                                                            t1336 = *(int *)(((int)stk + 84));
                                                            *(unsigned int *)(((int)stk + 80)) = t1336;
                                                        }
                                                        t1340 = *(int *)(((int)stk + 80));
                                                        if (t1340 != -1) {
                                                            t1341 = *(signed char *)(((int)stk + 80));
                                                            t1326 = t1341;
                                                            t1342 = t1326;
                                                            t1326 = (t1326 << 1);
                                                            t1326 = (t1326 + t1342);
                                                            t1326 = (t1326 << 2);
                                                            t1326 = (signed char)t1326;
                                                            t1326 = (t1326 + 0xC0E4C70);
                                                            t1343 = *(int *)((t1326 + 0x8));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1343;
                                                            t1344 = *(int *)((t1326 + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1344;
                                                            t1345 = *(int *)((t1326 + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1345;
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        } else {
                                                            u1349 = u1327;
                                                            u1350 = u1328;
                                                            u1351 = u1329;
                                                        }
                                                        u1327 = u1349;
                                                        u1328 = u1350;
                                                        u1329 = u1351;
                                                        t1353 = *(int *)(((int)stk + 84));
                                                        t1326 = t1353;
                                                        t1326 = (t1326 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1326;
                                                    }
                                                } else {
                                                    t1354 = *(int *)(((int)stk + 88));
                                                    u1355 = *(float *)((t1354 + 0x7C));
                                                    if (-40.0f > u1355) {
                                                        t1356 = 0x0;
                                                        u1357 = u1291;
                                                        u1358 = u1355;
                                                        u1359 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t1356;
                                                            if ((int)t1356 >= (int)0x1C) {
                                                                break;
                                                            }
                                                            t1360 = *(int *)(((int)stk + 88));
                                                            t1361 = *(short *)(((int)stk + 84));
                                                            t1362 = nlLength(((short)(((t1361 << 1) + t1361) << 2) + 0xC0E4B20), (t1360 + 0x78));
                                                            u1357 = t1362;
                                                            u1359 = 1.0f;
                                                            u1357 = (u1357 * u1359);
                                                            *(float *)(((int)stk + 44)) = u1357;
                                                            u1363 = *(float *)(((int)stk + 48));
                                                            u1358 = u1363;
                                                            if (u1358 > u1357) {
                                                                u1364 = *(float *)(((int)stk + 44));
                                                                u1358 = u1364;
                                                                *(float *)(((int)stk + 48)) = u1358;
                                                                t1365 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t1365;
                                                            }
                                                            t1369 = *(int *)(((int)stk + 80));
                                                            if (t1369 != -1) {
                                                                t1370 = *(short *)(((int)stk + 80));
                                                                t1356 = t1370;
                                                                t1371 = t1356;
                                                                t1356 = (t1356 << 1);
                                                                t1356 = (t1356 + t1371);
                                                                t1356 = (t1356 << 2);
                                                                t1356 = (short)t1356;
                                                                t1356 = (t1356 + 0xC0E4B20);
                                                                t1372 = *(int *)((t1356 + 0x8));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1372;
                                                                t1373 = *(int *)((t1356 + 0x4));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1373;
                                                                t1374 = *(int *)((t1356 + 0x0));
                                                                *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1374;
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            } else {
                                                                u1378 = u1357;
                                                                u1379 = u1358;
                                                                u1380 = u1359;
                                                            }
                                                            u1357 = u1378;
                                                            u1358 = u1379;
                                                            u1359 = u1380;
                                                            t1382 = *(int *)(((int)stk + 84));
                                                            t1356 = t1382;
                                                            t1356 = (t1356 + 0x1);
                                                        }
                                                    } else {
                                                        t1383 = 0x0;
                                                        u1384 = u1291;
                                                        u1385 = u1355;
                                                        u1386 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t1383;
                                                            if ((int)t1383 >= (int)0xB) {
                                                                break;
                                                            }
                                                            t1387 = *(int *)(((int)stk + 88));
                                                            t1388 = *(signed char *)(((int)stk + 84));
                                                            t1389 = nlLength(((unsigned char)(((t1388 << 1) + t1388) << 2) + 0xC0E4A9C), (t1387 + 0x78));
                                                            u1384 = t1389;
                                                            u1386 = 1.0f;
                                                            u1384 = (u1384 * u1386);
                                                            *(float *)(((int)stk + 44)) = u1384;
                                                            u1390 = *(float *)(((int)stk + 48));
                                                            u1385 = u1390;
                                                            if (u1385 > u1384) {
                                                                u1391 = *(float *)(((int)stk + 44));
                                                                u1385 = u1391;
                                                                *(float *)(((int)stk + 48)) = u1385;
                                                                t1392 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t1392;
                                                            }
                                                            t1396 = *(int *)(((int)stk + 84));
                                                            t1383 = t1396;
                                                            t1383 = (t1383 + 0x1);
                                                        }
                                                        t1397 = *(int *)(((int)stk + 80));
                                                        if (t1397 != -1) {
                                                            t1398 = *(signed char *)(((int)stk + 80));
                                                            t1399 = *(int *)((((unsigned char)(((t1398 << 1) + t1398) << 2) + 0xC0E4A9C) + 0x8));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1399;
                                                            t1400 = *(int *)((((unsigned char)(((t1398 << 1) + t1398) << 2) + 0xC0E4A9C) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1400;
                                                            t1401 = *(int *)((((unsigned char)(((t1398 << 1) + t1398) << 2) + 0xC0E4A9C) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1401;
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        u1441 = *(float *)(((int)stk + 48));
                                        *(float *)(((int)stk + 48)) = (u1441 - 50.0f);
                                        if ((u1441 - 50.0f) > 550.0f) {
                                            *(float *)(((int)stk + 48)) = 550.0f;
                                        }
                                        u1445 = *(float *)(((int)stk + 48));
                                        if (0.0f > u1445) {
                                            *(float *)(((int)stk + 48)) = 0.0f;
                                        }
                                        u1447 = *(float *)(((int)stk + 48));
                                        u1448 = *(float *)(((int)stk + 48));
                                        u1449 = 6.0f;
                                        u1449 = u1449 + 45.0f * (((550.0f - u1447) / 550.0f) * ((550.0f - u1448) / 550.0f));
                                        *(float *)0xC1798A4 = u1449;
                                        t1450 = *(int *)0xC0E4A14;
                                        if (t1450 == 0) {
                                        } else {
                                            *(float *)0xC1798A4 = 60.0f;
                                            t1451 = *(int *)(((int)stk + 88));
                                            t1452 = *(int *)(((t1451 + 0x78) + 0x8));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1452;
                                            t1453 = *(int *)(((t1451 + 0x78) + 0x4));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1453;
                                            t1454 = *(int *)(((t1451 + 0x78) + 0x0));
                                            *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1454;
                                            t1455 = *(int *)(((int)stk + 88));
                                            t1456 = *(short *)((t1455 + 0xF4));
                                            t1457 = FUN_0c089de0((unsigned short)t1456);
                                            *(float *)(((int)stk + 52)) = (t1457 * 300.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            t1458 = *(int *)(((int)stk + 88));
                                            t1459 = *(short *)((t1458 + 0xF4));
                                            t1460 = FUN_0c089de8((unsigned short)t1459);
                                            *(float *)(((int)stk + 60)) = (t1460 * 300.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            t1462 = *(int *)0xC179490;
                                            if ((int)t1462 >= (int)0x14) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                t1463 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t1463;
                                                t1464 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t1464;
                                                t1465 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t1465;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t1466 = (((int)stk + 8) + 0xC);
                                                u1469 = 99999.8984f;
                                                for (;;) {
                                                    t1470 = *(int *)(((int)stk + 84));
                                                    if ((int)t1470 >= (int)0x2) {
                                                        break;
                                                    }
                                                    t1466 = ((int)stk + 8);
                                                    t1466 = (t1466 + 0xC);
                                                    t1471 = *(int *)(((int)stk + 84));
                                                    t1466 = 0xC2A6690;
                                                    t1472 = *(int *)((t1466 + 0x0));
                                                    t1473 = *(int *)((((((t1471 << 1) + t1471) << 2) + t1472) + 0xEE0));
                                                    t1474 = *(int *)(((int)stk + 84));
                                                    t1475 = *(int *)((t1473 + 0x0));
                                                    t1476 = *(int *)((((((t1474 << 1) + t1474) << 2) + t1472) + 0xED0));
                                                    t1477 = getNearLineIndex(0x0, t1476, t1475, (((int)stk + 4) + 0x24), t1466);
                                                    u1467 = t1477;
                                                    u1468 = u1467;
                                                    *(float *)(((int)stk + 36)) = u1467;
                                                    u1478 = *(float *)(((int)stk + 32));
                                                    u1469 = u1478;
                                                    if (u1469 > u1468) {
                                                        *(float *)(((int)stk + 32)) = u1468;
                                                        t1479 = *(int *)(((int)stk + 84));
                                                        t1480 = *(int *)(((int)stk + 40));
                                                        t1481 = *(int *)0xC2A6690;
                                                        t1466 = t1481;
                                                        t1482 = ((((t1479 << 1) + t1479) << 2) + t1466);
                                                        t1466 = t1480;
                                                        t1483 = ((t1480 << 1) + t1466);
                                                        t1466 = 0xEDC;
                                                        t1466 = (t1466 + t1482);
                                                        t1484 = *(int *)((t1466 + 0x0));
                                                        t1466 = ((int)stk + 8);
                                                        t1466 = (t1466 + 0x38);
                                                        t1485 = *(int *)(((t1484 + (t1483 << 2)) + 0x8));
                                                        *(unsigned int *)((t1466 + 0x8)) = t1485;
                                                        t1486 = *(int *)(((t1484 + (t1483 << 2)) + 0x4));
                                                        *(unsigned int *)((t1466 + 0x4)) = t1486;
                                                        t1487 = *(int *)(((t1484 + (t1483 << 2)) + 0x0));
                                                        *(unsigned int *)((t1466 + 0x0)) = t1487;
                                                        t1488 = t1466;
                                                    }
                                                    t1466 = t1488;
                                                    t1492 = *(int *)(((int)stk + 84));
                                                    t1466 = t1492;
                                                    t1466 = (t1466 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t1466;
                                                }
                                            } else {
                                                t1493 = *(int *)0xC1EE20C;
                                                if (t1493 == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1494 = 0xC1EE20C;
                                                    u1497 = 99999.8984f;
                                                    for (;;) {
                                                        t1498 = *(int *)(((int)stk + 84));
                                                        if ((int)t1498 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1494 = ((int)stk + 8);
                                                        t1494 = (t1494 + 0x14);
                                                        t1499 = *(int *)(((((int)stk + 8) + 0x38) + 0x8));
                                                        *(unsigned int *)((t1494 + 0x8)) = t1499;
                                                        t1500 = *(int *)(((((int)stk + 8) + 0x38) + 0x4));
                                                        *(unsigned int *)((t1494 + 0x4)) = t1500;
                                                        t1501 = *(int *)(((((int)stk + 8) + 0x38) + 0x0));
                                                        *(unsigned int *)((t1494 + 0x0)) = t1501;
                                                        t1502 = *(int *)(((int)stk + 84));
                                                        t1494 = 0xC2A6690;
                                                        t1503 = *(int *)((t1494 + 0x0));
                                                        t1504 = *(int *)((((((t1502 << 1) + t1502) << 2) + t1503) + 0xEC8));
                                                        t1505 = *(int *)(((int)stk + 84));
                                                        t1506 = *(int *)((t1504 + 0x0));
                                                        t1507 = *(int *)((((((t1505 << 1) + t1505) << 2) + t1503) + 0xEC4));
                                                        t1508 = getNearLineIndex(0x0, t1507, t1506, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                        u1495 = t1508;
                                                        u1496 = u1495;
                                                        *(float *)(((int)stk + 12)) = u1495;
                                                        u1509 = *(float *)(((int)stk + 8));
                                                        u1497 = u1509;
                                                        if (u1497 > u1496) {
                                                            *(float *)(((int)stk + 8)) = u1496;
                                                            t1510 = *(int *)(((int)stk + 84));
                                                            t1511 = *(int *)(((int)stk + 40));
                                                            t1512 = *(int *)0xC2A6690;
                                                            t1494 = t1512;
                                                            t1513 = ((((t1510 << 1) + t1510) << 2) + t1494);
                                                            t1494 = t1511;
                                                            t1514 = ((t1511 << 1) + t1494);
                                                            t1494 = 0xEC4;
                                                            t1494 = (t1494 + t1513);
                                                            t1515 = *(int *)((t1494 + 0x0));
                                                            t1494 = ((int)stk + 8);
                                                            t1494 = (t1494 + 0x8);
                                                            t1516 = *(int *)(((t1515 + (t1514 << 2)) + 0x8));
                                                            *(unsigned int *)((t1494 + 0x8)) = t1516;
                                                            t1517 = *(int *)(((t1515 + (t1514 << 2)) + 0x4));
                                                            *(unsigned int *)((t1494 + 0x4)) = t1517;
                                                            t1518 = *(int *)(((t1515 + (t1514 << 2)) + 0x0));
                                                            *(unsigned int *)((t1494 + 0x0)) = t1518;
                                                            t1519 = t1494;
                                                        }
                                                        t1494 = t1519;
                                                        t1523 = *(int *)(((int)stk + 84));
                                                        t1494 = t1523;
                                                        t1494 = (t1494 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1494;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    t1525 = *(int *)(((int)stk + 88));
                                                    t1526 = nlLength((((int)stk + 8) + 0x38), (t1525 + 0x78));
                                                    u1527 = *(float *)(((int)stk + 8));
                                                    if (t1526 > u1527) {
                                                        t1528 = *(int *)(((((int)stk + 8) + 0x8) + 0x8));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x8)) = t1528;
                                                        t1529 = *(int *)(((((int)stk + 8) + 0x8) + 0x4));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x4)) = t1529;
                                                        t1530 = *(int *)(((((int)stk + 8) + 0x8) + 0x0));
                                                        *(unsigned int *)(((((int)stk + 8) + 0x38) + 0x0)) = t1530;
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            u1548 = *(float *)(((int)stk + 68));
                                            *(float *)(((int)stk + 68)) = (u1548 + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x0);
                                            t1550 = *(int *)(((int)stk + 88));
                                            camSetTarget((t1550 + 0x78), 0x0);
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
        t1649 = *(int *)0xC0E4A14;
        if (t1649 != 0) {
            *(float *)0xC1798A4 = 60.0f;
            t1650 = *(int *)(((int)stk + 88));
            t1651 = *(signed char *)(((t1650 + 0x84) + 0x0));
            *(unsigned char *)0xC1798AC = t1651;
            t1652 = *(signed char *)(((t1650 + 0x84) + 0x1));
            *(unsigned char *)0xC1798AD = t1652;
            t1653 = *(signed char *)(((t1650 + 0x84) + 0x2));
            *(unsigned char *)0xC1798AE = t1653;
            t1654 = *(signed char *)(((t1650 + 0x84) + 0x3));
            *(unsigned char *)0xC1798AF = t1654;
            t1655 = *(signed char *)(((t1650 + 0x84) + 0x4));
            *(unsigned char *)0xC1798B0 = t1655;
            t1656 = *(signed char *)(((t1650 + 0x84) + 0x5));
            *(unsigned char *)0xC1798B1 = t1656;
            t1657 = *(int *)(((int)stk + 88));
            t1658 = *(short *)((t1657 + 0x88));
            t1659 = *(int *)(((int)stk + 88));
            t1660 = *(short *)((t1659 + 0x86));
            t1661 = *(int *)(((int)stk + 88));
            t1662 = *(short *)((t1661 + 0x84));
            camSetAngles((unsigned short)t1662, (unsigned short)t1660, (unsigned short)t1658, 0x0);
            t1664 = ((int (*)(void))(nlPushUnitMatrix))();
            t1665 = *(int *)(((int)stk + 88));
            nlTranslateV((t1665 + 0x78));
            t1667 = *(short *)0xC1798AE;
            nlRotateAY((unsigned short)t1667);
            t1669 = *(short *)0xC1798AC;
            nlRotateAX((unsigned short)t1669);
            *(float *)(((int)stk + 92)) = 0.0f;
            *(float *)(((int)stk + 96)) = 5.0f;
            *(float *)(((int)stk + 100)) = 17.0f;
            FUN_0c0771b0((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
            camSetTarget((((int)stk + 8) + 0x54), 0x0);
            SetCameraMode(0x1);
            nlPopMatrix(0x1);
            *(unsigned int *)0xC179954 = 0x28;
        }
        t1681 = *(int *)(((int)stk + 88));
        t1682 = *(short *)((t1681 + 0x86));
        FUN_0c02bb60(t1682, 0xC1798AE, 0.149999991f);
        t1684 = *(int *)(((int)stk + 88));
        t1685 = *(int *)((0x3B0 + t1684));
        if (t1685 == 4) {
            u1686 = *(float *)0xC179958;
            if (u1686 == 0.0f) {
                t1687 = *(int *)(((int)stk + 88));
                u1688 = *(float *)((0x15C + t1687));
                if (u1688 > -0.099999994f) {
                    t1689 = *(int *)(((int)stk + 88));
                    t1690 = *(int *)((0x120 + t1689));
                    if (t1690 != 0) {
                        *(unsigned int *)0xC179964 = 0x1;
                    } else {
                        *(unsigned int *)0xC179964 = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC179964 = 0x0;
                }
            }
            u1708 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1708 + 0.00999999978f);
            if ((u1708 + 0.00999999978f) > 0.149999991f) {
                *(float *)0xC179958 = 0.149999991f;
            }
        } else {
            u1711 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1711 - 0.00999999978f);
            if (0.0f > (u1711 - 0.00999999978f)) {
                *(float *)0xC179958 = 0.0f;
            }
        }
        t1720 = *(int *)(((int)stk + 88));
        u1721 = *(float *)((t1720 + 0x15C));
        if (u1721 > -0.099999994f) {
            t1722 = *(int *)(((int)stk + 88));
            u1723 = *(float *)((t1722 + 0x15C));
            if (0.099999994f > u1723) {
                t1724 = *(int *)(((int)stk + 88));
                *(volatile float *)((t1724 + 0x15C));
                t1726 = *(short *)((t1724 + 0xF4));
                FUN_0c02bb60(t1726, 0xC17995C, 0.149999991f);
            } else {
                u1728 = *(float *)0xC179958;
                if (u1728 == 0.0f) {
                    t1729 = *(int *)(((int)stk + 88));
                    t1730 = *(short *)((t1729 + 0xF4));
                    FUN_0c02bb60(t1730, 0xC17995C, 0.149999991f);
                } else {
                    t1732 = *(int *)(((int)stk + 88));
                    u1733 = *(float *)((t1732 + 0x15C));
                    if (0.0f > u1733) {
                        t1734 = *(int *)0xC179964;
                        if (t1734 != 0) {
                            t1735 = *(int *)(((int)stk + 88));
                            t1736 = *(short *)((t1735 + 0xF4));
                            *(unsigned short *)0xC17995C = (t1736 + 0x8000);
                        } else {
                            t1737 = *(int *)(((int)stk + 88));
                            t1738 = *(short *)((0xF4 + t1737));
                            *(unsigned short *)0xC17995C = t1738;
                        }
                    } else {
                        t1743 = *(int *)(((int)stk + 88));
                        t1744 = *(short *)((0xF4 + t1743));
                        *(unsigned short *)0xC17995C = t1744;
                    }
                }
            }
        } else {
            u1765 = *(float *)0xC179958;
            if (u1765 == 0.0f) {
                t1766 = *(int *)(((int)stk + 88));
                t1767 = *(short *)((t1766 + 0xF4));
                FUN_0c02bb60(t1767, 0xC17995C, 0.149999991f);
            } else {
                t1769 = *(int *)(((int)stk + 88));
                u1770 = *(float *)((t1769 + 0x15C));
                if (0.0f > u1770) {
                    t1771 = *(int *)0xC179964;
                    if (t1771 != 0) {
                        t1772 = *(int *)(((int)stk + 88));
                        t1773 = *(short *)((t1772 + 0xF4));
                        *(unsigned short *)0xC17995C = (t1773 + 0x8000);
                    } else {
                        t1774 = *(int *)(((int)stk + 88));
                        t1775 = *(short *)((0xF4 + t1774));
                        *(unsigned short *)0xC17995C = t1775;
                    }
                } else {
                    t1780 = *(int *)(((int)stk + 88));
                    t1781 = *(short *)((0xF4 + t1780));
                    *(unsigned short *)0xC17995C = t1781;
                }
            }
        }
        t1802 = *(short *)0xC17995C;
        u1803 = *(float *)0xC179958;
        FUN_0c02bb60(t1802, 0xC1798AE, u1803);
        t1805 = *(int *)(((int)stk + 88));
        t1806 = *(short *)((t1805 + 0x84));
        FUN_0c02bb60(t1806, 0xC1798AC, 0.099999994f);
        u1808 = *(float *)0xC179958;
        if (u1808 == 0.0f) {
            t1809 = *(int *)0xC179960;
            if (t1809 != 0) {
                t1810 = *(int *)(((int)stk + 88));
                t1811 = *(int *)((t1810 + 0x120));
                if (t1811 != 0) {
                    t1812 = *(int *)(((int)stk + 88));
                    u1813 = *(float *)((t1812 + 0x15C));
                    if (!(-0.099999994f > u1813)) {
                        *(unsigned int *)0xC179960 = 0x0;
                    }
                }
            } else {
                t1823 = *(int *)(((int)stk + 88));
                t1824 = *(int *)((0x120 + t1823));
                if (t1824 == 0) {
                    t1825 = *(int *)(((int)stk + 88));
                    u1826 = *(float *)((t1825 + 0x15C));
                    if (0.099999994f > u1826) {
                        *(unsigned int *)0xC179960 = 0x1;
                    }
                }
            }
        }
        t1850 = *(int *)0xC179960;
        if (t1850 != 0) {
            t1851 = *(int *)(((int)stk + 88));
            u1852 = *(float *)((t1851 + 0x15C));
            if (u1852 > 0.0f) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                t1853 = *(int *)(((int)stk + 88));
                u1854 = *(float *)((t1853 + 0x15C));
                *(float *)0xC0E4DD8 = u1854;
            }
            u1858 = *(float *)0xC0E4DD8;
            u1859 = *(float *)0xC1798B4;
            u1860 = *(float *)0xC1798B4;
            u1861 = u1860;
            u1861 = u1861 + 0.199999988f * ((5.0f - (u1858 * 5.0f)) - u1859);
            *(float *)0xC1798B4 = u1861;
        } else {
            t1862 = *(int *)(((int)stk + 88));
            u1863 = *(float *)((t1862 + 0x15C));
            if (0.0f > u1863) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                t1864 = *(int *)(((int)stk + 88));
                u1865 = *(float *)((t1864 + 0x15C));
                *(float *)0xC0E4DD8 = u1865;
            }
            u1869 = *(float *)0xC1798B4;
            u1870 = *(float *)0xC0E4DD8;
            u1871 = *(float *)0xC0E4D9C;
            u1872 = *(float *)0xC0E4E30;
            u1873 = *(float *)0xC0E4DA0;
            u1874 = (u1871 * u1872);
            u1874 = u1874 + u1873 * (u1870 - u1869);
            *(float *)0xC0E4E30 = u1874;
            u1875 = *(float *)0xC1798B4;
            *(float *)0xC1798B4 = (u1875 + u1874);
        }
        t1884 = *(int *)(((int)stk + 88));
        u1885 = *(float *)((t1884 + 0x80));
        u1886 = *(float *)((t1884 + 0x7C));
        u1887 = *(float *)((t1884 + 0x78));
        nlTranslate(u1887, u1886, u1885);
        t1889 = *(short *)0xC1798AE;
        nlRotateAY((unsigned short)t1889);
        t1891 = *(short *)0xC1798AC;
        nlRotateAX((unsigned short)t1891);
        t1893 = *(int *)(((int)stk + 88));
        u1894 = *(float *)((t1893 + 0x100));
        *(float *)0xC0E4DDC = u1894;
        u1895 = *(float *)0xC0E4DDC;
        if (u1895 > 0.0f) {
            *(float *)0xC0E4DDC = 0.0f;
        }
        *(float *)(((int)stk + 92)) = 0.0f;
        t1897 = *(int *)0xC179960;
        if (t1897 != 0) {
            *(float *)(((int)stk + 96)) = 5.0f;
            u1898 = *(float *)0xC0E4DD8;
            u1899 = *(float *)0xC0E4DA8;
            u1900 = 17.0f;
            u1900 = u1900 + u1899 * u1898;
            u1908 = u1900;
        } else {
            u1901 = *(float *)0xC0E4DDC;
            u1902 = *(float *)0xC0E4D98;
            u1903 = 5.0f;
            u1903 = u1903 + u1902 * u1901;
            *(float *)(((int)stk + 96)) = u1903;
            u1908 = 17.0f;
        }
        *(float *)(((int)stk + 100)) = u1908;
        FUN_0c0771b0((((int)stk + 8) + 0x54), 0xC179914);
        t1911 = *(int *)0xC179960;
        if (t1911 != 0) {
            u1912 = *(float *)0xC1798B4;
            u1913 = 15.0f;
            u1913 = u1913 + 0.466666609f * u1912;
            *(float *)(((int)stk + 96)) = u1913;
            u1914 = *(float *)0xC0E4DD8;
            u1915 = *(float *)0xC0E4DA4;
            u1916 = *(float *)0xC1798B4;
            *(float *)(((int)stk + 100)) = (((u1914 * u1915) - u1916) + -60.0f);
        } else {
            u1917 = *(float *)0xC1798B4;
            u1918 = *(float *)0xC0E4DDC;
            u1919 = *(float *)0xC0E4D90;
            u1920 = (u1917 * 0.333333313f);
            u1920 = u1920 + u1919 * u1918;
            *(float *)(((int)stk + 96)) = (u1920 + 15.0f);
            u1921 = *(float *)0xC0E4DDC;
            u1922 = *(float *)0xC0E4D94;
            u1923 = *(float *)0xC1798B4;
            *(float *)(((int)stk + 100)) = (((u1921 * u1922) - u1923) + -60.0f);
        }
        FUN_0c0771b0((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
        nlSubVector3op((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x54), 0xC179914);
        t1934 = *(int *)0xC17991C;
        *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x8)) = t1934;
        t1935 = *(int *)0xC179918;
        *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x4)) = t1935;
        t1936 = *(int *)0xC179914;
        *(unsigned int *)(((((int)stk + 8) + 0x54) + 0x0)) = t1936;
        GetCollision((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x44), 0.0f, 5.0f);
        camSetEye((((int)stk + 8) + 0x54), 0x2);
        t1939 = *(int *)0xC179954;
        if ((int)t1939 > 0) {
            t1940 = *(int *)0xC179954;
            if ((int)t1940 < (int)0xA) {
                SetCameraPosRatio(0.199999988f, 0.0f);
                u1944 = 0.199999988f;
            } else {
                SetCameraPosRatio(0.099999994f, 0.0f);
                u1944 = 0.099999994f;
            }
            SetCameraTargetRatio(u1944, 0.0f);
            t1947 = *(int *)0xC179954;
            *(unsigned int *)0xC179954 = (t1947 - 1);
        } else {
            SetCameraPosRatio(0.5f, 0.099999994f);
            SetCameraTargetRatio(0.799999952f, 0.299999982f);
        }
        t1954 = *(int *)(((int)stk + 88));
        t1955 = *(short *)((t1954 + 0x88));
        *(unsigned int *)0xC179948 = (int)((float)t1955 * 0.25f);
        FUN_0c0288d4(0.125f, 0.125f);
        FUN_0c036378(0xC179928);
        SetCameraMode(0x1);
    }
    nlPopMatrix(0x1);
    t1969 = *(int *)(((int)stk + 88));
    *(unsigned int *)0xC0E49F8 = (t1969 + 0x78);
    t1970 = *(int *)(((int)stk + 88));
    *(unsigned int *)0xC0E49FC = (0x84 + t1970);
    *(unsigned int *)0xC0E4A00 = 0x0;
    *(unsigned int *)0xC0E4A14 = 0x0;
    FUN_0c077df0(0x3);
    nlUnitMatrix();
    u1973 = *(float *)0xC1798A4;
    u1974 = *(float *)0xC0E49F4;
    FUN_0c0792b0(((int)(((u1973 * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), u1974, 0.299999982f, 300.0f);
    *(float *)0xC0E49F4 = 1.33333325f;
    t1976 = ((int (*)(void))(nlPushUnitMatrix))();
    t1977 = *(int *)0xC1798B8;
    if (t1977 != 0) {
        if (t1977 == 1) {
            CalcHomingVector(0xC1798D0);
            CalcHomingVector(0xC1798FC);
            t1980 = *(int *)0xC179930;
            FUN_0c077890(0xC1798D0, 0xC1798FC, t1980);
            nlGetMatrix(0xC179864);
            nlInvertMatrix(0x0);
            GetAng4Mat((((int)stk + 8) + 0x44));
            t1985 = *(int *)(((int)stk + 76));
            t1986 = *(int *)0xC179928;
            *(unsigned int *)0xC179934 = (t1985 - t1986);
            t1987 = *(int *)0xC17992C;
            t1988 = *(int *)(((int)stk + 80));
            *(unsigned int *)0xC179938 = (t1988 - t1987);
            t1989 = *(int *)(((int)stk + 76));
            *(unsigned int *)0xC179928 = t1989;
            t1990 = *(int *)(((int)stk + 80));
            *(unsigned int *)0xC17992C = t1990;
            t1991 = nlLength(0xC1798D0, 0xC1798FC);
            *(float *)0xC0E4A04 = t1991;
        } else {
            if (t1977 == 2) {
                CalcHomingVector(0xC1798FC);
                FUN_0c036378(0xC179928);
                nlTranslateV(0xC1798FC);
                t1995 = *(int *)0xC17992C;
                nlRotateAY(t1995);
                t1997 = *(int *)0xC179928;
                nlRotateAX(t1997);
                t1999 = *(int *)0xC179930;
                nlRotateAZ(t1999);
                u2001 = *(float *)0xC0E4A04;
                nlTranslate(0.0f, 0.0f, u2001);
                nlGetTranslate((((int)stk + 8) + 0x44));
                nlSubVector3op(0xC1798DC, (((int)stk + 8) + 0x44), 0xC1798D0);
                t2005 = *(int *)(((((int)stk + 8) + 0x44) + 0x8));
                *(unsigned int *)0xC1798D8 = t2005;
                t2006 = *(int *)(((((int)stk + 8) + 0x44) + 0x4));
                *(unsigned int *)0xC1798D4 = t2006;
                t2007 = *(int *)(((((int)stk + 8) + 0x44) + 0x0));
                *(unsigned int *)0xC1798D0 = t2007;
                nlInvertMatrix(0x0);
                nlGetMatrix(0xC179864);
            } else {
                if (t1977 != 4) {
                } else {
                    camSetEye(0xC179840, 0x0);
                    t2011 = *(short *)0xC17985A;
                    t2012 = *(short *)0xC17985C;
                    t2013 = *(short *)0xC179858;
                    camSetAngles((unsigned short)t2013, (unsigned short)t2011, (unsigned short)t2012, 0x0);
                    CalcHomingVector(0xC1798D0);
                    FUN_0c036378(0xC179928);
                    nlTranslateV(0xC1798D0);
                    t2018 = *(int *)0xC17992C;
                    nlRotateAY(t2018);
                    t2020 = *(int *)0xC179928;
                    nlRotateAX(t2020);
                    t2022 = *(int *)0xC179930;
                    nlRotateAZ(t2022);
                    nlPushMatrix(0x0);
                    u2025 = *(float *)0xC0E4A04;
                    nlTranslate(0.0f, 0.0f, (-u2025));
                    nlGetTranslate((((int)stk + 8) + 0x44));
                    nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
                    t2029 = *(int *)(((((int)stk + 8) + 0x44) + 0x8));
                    *(unsigned int *)0xC179904 = t2029;
                    t2030 = *(int *)(((((int)stk + 8) + 0x44) + 0x4));
                    *(unsigned int *)0xC179900 = t2030;
                    t2031 = *(int *)(((((int)stk + 8) + 0x44) + 0x0));
                    *(unsigned int *)0xC1798FC = t2031;
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
        t2049 = *(int *)0xC17992C;
        nlRotateAY(t2049);
        t2051 = *(int *)0xC179928;
        nlRotateAX(t2051);
        t2053 = *(int *)0xC179930;
        nlRotateAZ(t2053);
        nlPushMatrix(0x0);
        u2056 = *(float *)0xC0E4A04;
        nlTranslate(0.0f, 0.0f, (-u2056));
        nlGetTranslate((((int)stk + 8) + 0x44));
        nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
        t2060 = *(int *)(((((int)stk + 8) + 0x44) + 0x8));
        *(unsigned int *)0xC179904 = t2060;
        t2061 = *(int *)(((((int)stk + 8) + 0x44) + 0x4));
        *(unsigned int *)0xC179900 = t2061;
        t2062 = *(int *)(((((int)stk + 8) + 0x44) + 0x0));
        *(unsigned int *)0xC1798FC = t2062;
        nlPopMatrix(0x1);
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC179864);
    }
    nlPopMatrix(0x1);
    t2072 = *(int *)0xC1798D8;
    *(unsigned int *)0xC179848 = t2072;
    t2073 = *(int *)0xC1798D4;
    *(unsigned int *)0xC179844 = t2073;
    t2074 = *(int *)0xC1798D0;
    *(unsigned int *)0xC179840 = t2074;
    t2075 = *(int *)0xC179904;
    *(unsigned int *)0xC179854 = t2075;
    t2076 = *(int *)0xC179900;
    *(unsigned int *)0xC179850 = t2076;
    t2077 = *(int *)0xC1798FC;
    *(unsigned int *)0xC17984C = t2077;
    t2078 = *(short *)0xC179928;
    *(unsigned short *)0xC179858 = t2078;
    t2079 = *(short *)0xC17992C;
    *(unsigned short *)0xC17985A = t2079;
    t2080 = *(short *)0xC179930;
    *(unsigned short *)0xC17985C = t2080;
    FUN_0c077df0(0x2);
    nlLoadMatrix(0xC179864);
    FUN_0c077df0(0x1);
    FUN_0c078ff0();
    u2085 = *(float *)0xC1798A4;
    t2086 = FUN_0c06b028(u2085);
    return t2086;
}
