/* Straight-line functions with calls and guards (batch gen_lt): generated from the code and checked by tests. Calls are
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
    int t89;
    float u90;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t114;
    int t119;
    int t120;
    float u121;
    float u122;
    int t133;
    int t135;
    int t136;
    int t138;
    int t139;
    int t141;
    int t142;
    int t144;
    int t145;
    int t148;
    float u149;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t173;
    int t183;
    float u184;
    int t190;
    float u191;
    float u197;
    int t200;
    int t202;
    int t203;
    int t205;
    int t206;
    int t209;
    int t210;
    int t213;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t226;
    float u227;
    int t233;
    float u234;
    int t240;
    int t244;
    int t248;
    int t252;
    int t256;
    int t260;
    int t271;
    int t275;
    int t279;
    int t283;
    int t287;
    int t291;
    int t302;
    int t303;
    int t308;
    int t309;
    int t314;
    int t315;
    int t320;
    int t321;
    int t326;
    int t330;
    int t334;
    int t337;
    int t335;
    int t339;
    int t347;
    int t348;
    int t349;
    int t350;
    float u351;
    int t357;
    float u358;
    int t364;
    int t368;
    int t372;
    int t376;
    int t380;
    int t384;
    int t395;
    int t399;
    int t403;
    int t407;
    int t411;
    int t415;
    int t426;
    int t427;
    int t432;
    int t433;
    int t438;
    int t439;
    int t444;
    int t445;
    int t450;
    int t454;
    int t458;
    int t461;
    int t459;
    int t463;
    int t472;
    int t474;
    float u479;
    int t480;
    int t489;
    int t490;
    int t495;
    int t496;
    int t501;
    int t502;
    int t507;
    int t508;
    int t513;
    float u514;
    int t519;
    float u520;
    float u525;
    int t528;
    int t536;
    int t529;
    int t532;
    int t530;
    int t538;
    int t539;
    int t540;
    int t541;
    int t543;
    int t544;
    int t545;
    int t547;
    int t548;
    int t550;
    int t551;
    int t574;
    int t576;
    int t578;
    int t588;
    int t597;
    int t598;
    int t603;
    int t604;
    int t609;
    int t610;
    int t615;
    int t616;
    int t621;
    float u622;
    int t627;
    float u628;
    float u633;
    int t636;
    int t644;
    int t637;
    int t640;
    int t638;
    int t646;
    int t647;
    int t648;
    int t649;
    int t651;
    int t652;
    int t653;
    int t655;
    int t656;
    int t658;
    int t659;
    int t682;
    int t684;
    int t686;
    int t696;
    int t697;
    int t698;
    float t700;
    int t701;
    float u702;
    int t706;
    int t707;
    float t708;
    float u709;
    float u710;
    int t711;
    int t715;
    int t716;
    int t717;
    float u727;
    float u731;
    float u733;
    float u734;
    float u735;
    int t736;
    int t737;
    float u738;
    float u739;
    float u740;
    int t741;
    int t742;
    int t743;
    float t744;
    float u745;
    float u746;
    int t747;
    int t752;
    float u753;
    float u754;
    float u758;
    float u760;
    float u761;
    float u762;
    int t764;
    int t777;
    float t779;
    int t780;
    int t781;
    int t782;
    float t783;
    int t784;
    int t785;
    float t786;
    int t788;
    int t789;
    float u792;
    int t793;
    int t794;
    int t795;
    int t796;
    int t797;
    int t798;
    int t799;
    int t800;
    float t801;
    float u802;
    int t803;
    int t804;
    int t805;
    int t806;
    int t807;
    int t808;
    int t813;
    int t814;
    int t815;
    float u818;
    int t819;
    int t820;
    int t821;
    int t822;
    int t823;
    int t824;
    int t825;
    float t826;
    float u827;
    int t828;
    int t829;
    int t830;
    int t831;
    int t832;
    int t833;
    int t838;
    int t840;
    float t841;
    float u842;
    float u860;
    int t866;
    int t867;
    float u868;
    float u870;
    int t871;
    int t872;
    int t873;
    float t874;
    float u875;
    float u876;
    int t877;
    int t881;
    int t882;
    int t883;
    int t893;
    int t894;
    int t895;
    float u896;
    float u898;
    int t899;
    int t900;
    int t901;
    float t902;
    float u903;
    float u904;
    int t905;
    int t909;
    int t910;
    int t911;
    int t919;
    int t920;
    float u921;
    int t922;
    float u923;
    float u924;
    float u925;
    int t926;
    int t927;
    float t928;
    float u929;
    float u930;
    int t931;
    int t935;
    int t936;
    int t937;
    int t945;
    int t946;
    float u947;
    float u948;
    float u949;
    int t950;
    int t951;
    float t952;
    float u953;
    float u954;
    int t955;
    int t959;
    int t960;
    int t961;
    float u1001;
    float u1005;
    float u1007;
    float u1008;
    float u1009;
    int t1010;
    int t1011;
    int t1012;
    int t1013;
    float t1014;
    int t1015;
    int t1016;
    float t1017;
    int t1019;
    int t1020;
    float u1023;
    int t1024;
    int t1025;
    int t1026;
    int t1027;
    int t1028;
    int t1029;
    int t1030;
    int t1031;
    float t1032;
    float u1033;
    int t1034;
    int t1035;
    int t1036;
    int t1037;
    int t1038;
    int t1039;
    int t1044;
    int t1045;
    int t1046;
    float u1049;
    int t1050;
    int t1051;
    int t1052;
    int t1053;
    int t1054;
    int t1055;
    int t1056;
    float t1057;
    float u1058;
    int t1059;
    int t1060;
    int t1061;
    int t1062;
    int t1063;
    int t1064;
    int t1069;
    int t1071;
    float t1072;
    float u1073;
    float u1091;
    int t1093;
    int t1115;
    float t1117;
    int t1118;
    int t1119;
    int t1120;
    float t1121;
    int t1122;
    int t1123;
    float t1124;
    int t1126;
    int t1127;
    float u1130;
    int t1131;
    int t1132;
    int t1133;
    int t1134;
    int t1135;
    int t1136;
    int t1137;
    int t1138;
    float t1139;
    float u1140;
    int t1141;
    int t1142;
    int t1143;
    int t1144;
    int t1145;
    int t1146;
    int t1151;
    int t1152;
    int t1153;
    float u1156;
    int t1157;
    int t1158;
    int t1159;
    int t1160;
    int t1161;
    int t1162;
    int t1163;
    float t1164;
    float u1165;
    int t1166;
    int t1167;
    int t1168;
    int t1169;
    int t1170;
    int t1171;
    int t1176;
    int t1178;
    float t1179;
    float u1180;
    float u1198;
    int t1204;
    int t1205;
    float u1206;
    float u1208;
    int t1209;
    int t1210;
    int t1211;
    float t1212;
    float u1213;
    float u1214;
    int t1215;
    int t1219;
    int t1220;
    int t1221;
    int t1231;
    int t1232;
    int t1233;
    float u1234;
    float u1236;
    int t1237;
    int t1238;
    int t1239;
    float t1240;
    float u1241;
    float u1242;
    int t1243;
    int t1247;
    int t1248;
    int t1249;
    int t1257;
    int t1258;
    float u1259;
    int t1260;
    float u1261;
    float u1262;
    float u1263;
    int t1264;
    int t1265;
    float t1266;
    float u1267;
    float u1268;
    int t1269;
    int t1273;
    int t1274;
    int t1275;
    int t1283;
    int t1284;
    float u1285;
    float u1286;
    float u1287;
    int t1288;
    int t1289;
    float t1290;
    float u1291;
    float u1292;
    int t1293;
    int t1297;
    int t1298;
    int t1299;
    float u1339;
    float u1343;
    float u1345;
    float u1346;
    float u1347;
    int t1348;
    int t1349;
    int t1350;
    int t1351;
    float t1352;
    int t1353;
    int t1354;
    float t1355;
    int t1357;
    int t1358;
    float u1361;
    int t1362;
    int t1363;
    int t1364;
    int t1365;
    int t1366;
    int t1367;
    int t1368;
    int t1369;
    float t1370;
    float u1371;
    int t1372;
    int t1373;
    int t1374;
    int t1375;
    int t1376;
    int t1377;
    int t1382;
    int t1383;
    int t1384;
    float u1387;
    int t1388;
    int t1389;
    int t1390;
    int t1391;
    int t1392;
    int t1393;
    int t1394;
    float t1395;
    float u1396;
    int t1397;
    int t1398;
    int t1399;
    int t1400;
    int t1401;
    int t1402;
    int t1407;
    int t1409;
    float t1410;
    float u1411;
    float u1429;
    int t1431;
    int t1530;
    int t1531;
    int t1532;
    int t1533;
    int t1534;
    int t1535;
    int t1536;
    int t1537;
    int t1538;
    int t1539;
    int t1540;
    int t1541;
    int t1542;
    int t1543;
    int t1546;
    int t1548;
    int t1550;
    int t1562;
    int t1563;
    int t1565;
    int t1566;
    float u1567;
    int t1568;
    float u1569;
    int t1570;
    int t1571;
    float u1589;
    float u1592;
    int t1601;
    float u1602;
    int t1603;
    float u1604;
    int t1605;
    int t1607;
    float u1609;
    int t1610;
    int t1611;
    int t1613;
    float u1614;
    int t1615;
    int t1616;
    int t1617;
    int t1618;
    int t1619;
    int t1624;
    int t1625;
    float u1646;
    int t1647;
    int t1648;
    int t1650;
    float u1651;
    int t1652;
    int t1653;
    int t1654;
    int t1655;
    int t1656;
    int t1661;
    int t1662;
    int t1683;
    float u1684;
    int t1686;
    int t1687;
    float u1689;
    int t1690;
    int t1691;
    int t1692;
    int t1693;
    float u1694;
    int t1704;
    int t1705;
    int t1706;
    float u1707;
    int t1731;
    int t1732;
    float u1733;
    int t1734;
    float u1735;
    float u1739;
    float u1740;
    float u1741;
    float u1742;
    int t1743;
    float u1744;
    int t1745;
    float u1746;
    float u1750;
    float u1751;
    float u1752;
    float u1753;
    float u1754;
    float u1755;
    float u1756;
    int t1765;
    float u1766;
    float u1767;
    float u1768;
    int t1770;
    int t1772;
    int t1774;
    float u1775;
    float u1776;
    int t1778;
    float u1779;
    float u1780;
    float u1781;
    float u1782;
    float u1783;
    float u1784;
    int t1792;
    float u1793;
    float u1794;
    float u1795;
    float u1796;
    float u1797;
    float u1798;
    float u1799;
    float u1800;
    float u1801;
    float u1802;
    float u1803;
    float u1804;
    int t1817;
    int t1818;
    int t1825;
    int t1832;
    int t1833;
    int t1847;
    int t1848;
    float u1851;
    float u1852;
    int t1855;
    int t1858;
    int t1863;
    int t1864;
    int t1865;
    int t1866;
    int t1867;
    int t1868;
    float t1869;
    int t1873;
    int t1875;
    int t1877;
    float u1879;
    int t1886;
    int t1887;
    int t1888;
    int t1893;
    int t1895;
    int t1897;
    float u1900;
    int t1921;
    int t1923;
    int t1925;
    float u1928;
    int t1941;
    int t1942;
    int t1943;
    float u1948;
    int t1949;
    float u66;
    float u125;
    float u703;
    float u704;
    int t748;
    float u863;
    float u864;
    float u790;
    float u791;
    int t809;
    float u816;
    float u817;
    int t834;
    float u869;
    float u897;
    float u915;
    float u916;
    float u917;
    float u941;
    float u942;
    float u943;
    float u1021;
    float u1022;
    int t1040;
    float u1047;
    float u1048;
    int t1065;
    float u1201;
    float u1202;
    float u1128;
    float u1129;
    int t1147;
    float u1154;
    float u1155;
    int t1172;
    float u1207;
    float u1235;
    float u1253;
    float u1254;
    float u1255;
    float u1279;
    float u1280;
    float u1281;
    float u1359;
    float u1360;
    int t1378;
    float u1385;
    float u1386;
    int t1403;
    float u1789;
    float u1822;
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
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(((signed char)(((t86 << 1) + t86) << 2) + 0xC0E4D54)); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(0xC0E4D84); }
            }
            t89 = *(int *)0xC179860;
            if (t89 == 2) {
                u90 = *(float *)(((int)stk + 100));
                *(float *)(((int)stk + 100)) = (-u90);
            }
            nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
            t95 = *(int *)0xC179860;
            if (t95 == 2) {
                t96 = *(int *)(((int)stk + 88));
                t97 = *(short *)((t96 + 0x88));
                t98 = *(int *)(((int)stk + 88));
                t99 = *(short *)((t98 + 0x86));
                t100 = *(int *)(((int)stk + 88));
                t101 = *(short *)((t100 + 0x84));
                camSetAngles(((unsigned short)t101 + 0xFE00), (unsigned short)t99, (unsigned short)t97, 0x2);
            } else {
                t103 = *(int *)(((int)stk + 88));
                t104 = *(short *)((t103 + 0x88));
                t105 = *(int *)(((int)stk + 88));
                t106 = *(short *)((t105 + 0x86));
                t107 = *(int *)(((int)stk + 88));
                t108 = *(short *)((t107 + 0x84));
                camSetAngles(((-(unsigned short)t108) + 0xFE00), ((unsigned short)t106 + 0x8000), (-(unsigned short)t104), 0x2);
            }
            camSetTarget((((int)stk + 8) + 0x54), 0x2);
            SetCameraMode(0x2);
        } else {
            if (t54 == 2) {
                *(float *)0xC1798A4 = 40.0f;
                t114 = *(int *)0xC0E4A14;
                if (t114 != 0) {
                    SetCameraAngleRatio(0.949999988f, 0.099999994f);
                    SetCameraTargetRatio(1.0f, 0.099999994f);
                    FUN_0c0288e0(120.0f);
                    SetCameraMode(0x2);
                    t119 = *(int *)0xC179488;
                    if ((int)t119 < (int)0x4) {
                        t120 = *(int *)0xC179488;
                        u121 = *(float *)(((t120 << 2) + 0xC08AA64));
                        u125 = u121;
                    } else {
                        u122 = *(float *)0xC08AA74;
                        u125 = u122;
                    }
                    *(float *)0xC0E4A04 = u125;
                }
                t133 = *(int *)(((int)stk + 88));
                nlTranslateV((t133 + 0x78));
                t135 = *(int *)(((int)stk + 88));
                t136 = *(short *)((t135 + 0x86));
                nlRotateAY((unsigned short)t136);
                t138 = *(int *)(((int)stk + 88));
                t139 = *(short *)((t138 + 0x84));
                nlRotateAX((unsigned short)t139);
                t141 = *(int *)(((int)stk + 88));
                t142 = *(short *)((t141 + 0x88));
                nlRotateAZ((unsigned short)t142);
                t144 = *(int *)0xC179488;
                if ((int)t144 < (int)0x4) {
                    t145 = *(signed char *)0xC179488;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(((signed char)(((t145 << 1) + t145) << 2) + 0xC0E4D54)); }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(0xC0E4D84); }
                }
                t148 = *(int *)0xC179860;
                if (t148 == 2) {
                    u149 = *(float *)(((int)stk + 100));
                    *(float *)(((int)stk + 100)) = (-u149);
                }
                nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
                t154 = *(int *)0xC179860;
                if (t154 == 2) {
                    t155 = *(int *)(((int)stk + 88));
                    t156 = *(short *)((t155 + 0x88));
                    t157 = *(int *)(((int)stk + 88));
                    t158 = *(short *)((t157 + 0x86));
                    t159 = *(int *)(((int)stk + 88));
                    t160 = *(short *)((t159 + 0x84));
                    camSetAngles(((unsigned short)t160 + 0xFE00), (unsigned short)t158, (unsigned short)t156, 0x2);
                } else {
                    t162 = *(int *)(((int)stk + 88));
                    t163 = *(short *)((t162 + 0x88));
                    t164 = *(int *)(((int)stk + 88));
                    t165 = *(short *)((t164 + 0x86));
                    t166 = *(int *)(((int)stk + 88));
                    t167 = *(short *)((t166 + 0x84));
                    camSetAngles(((-(unsigned short)t167) + 0xFE00), ((unsigned short)t165 + 0x8000), (-(unsigned short)t163), 0x2);
                }
                camSetTarget((((int)stk + 8) + 0x54), 0x2);
                SetCameraMode(0x2);
            } else {
                if (t54 == 3) {
                    t173 = *(int *)0xC0E4A14;
                    if (t173 != 0) {
                        *(float *)0xC1798A4 = 60.0f;
                        SetCameraAngleRatio(0.599999964f, 0.099999994f);
                        SetCameraTargetRatio(0.799999952f, 0.099999994f);
                        FUN_0c0288e0(600.0f);
                        SetCameraMode(0x2);
                    }
                    t183 = *(int *)0xC1EE2B4;
                    if ((t183 & 4) != 0) {
                        u184 = *(float *)0xC0E4A04;
                        *(float *)0xC0E4A04 = (u184 - 5.0f);
                    }
                    t190 = *(int *)0xC1EE2B4;
                    if ((t190 & 2) != 0) {
                        u191 = *(float *)0xC0E4A04;
                        *(float *)0xC0E4A04 = (u191 + 5.0f);
                    }
                    u197 = *(float *)0xC0E4A04;
                    if (300.0f > u197) {
                        *(float *)0xC0E4A04 = 300.0f;
                    }
                    t200 = *(int *)(((int)stk + 88));
                    nlTranslateV((t200 + 0x78));
                    t202 = *(int *)(((int)stk + 88));
                    t203 = *(short *)((t202 + 0x86));
                    nlRotateAY((unsigned short)t203);
                    t205 = *(int *)(((int)stk + 88));
                    t206 = *(short *)((t205 + 0x84));
                    nlRotateAX((unsigned short)t206);
                    *(float *)(((int)stk + 92)) = 0.0f;
                    *(float *)(((int)stk + 96)) = 0.0f;
                    *(float *)(((int)stk + 100)) = 120.0f;
                    nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
                    t209 = *(int *)(((int)stk + 88));
                    t210 = *(short *)((t209 + 0x86));
                    camSetAngles(0xCC00, ((unsigned short)t210 + 0x8000), 0x0, 0x2);
                    camSetTarget((((int)stk + 8) + 0x54), 0x2);
                } else {
                    if (t54 == 4) {
                        t213 = *(int *)0xC0E4A14;
                        if (t213 != 0) {
                            FUN_0c0288e0(60.0f);
                        }
                        SetCameraMode(0x4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x44)) = *(struct mv3 *)(0xC08AA78); }
                        t221 = *(short *)0xC179858;
                        *(unsigned short *)0xC179858 = (t221 & 0xFF00);
                        t222 = *(short *)0xC17985A;
                        *(unsigned short *)0xC17985A = (t222 & 0xFF00);
                        *(unsigned short *)0xC17985C = 0x0;
                        t223 = *(int *)0xC1EE280;
                        if ((t223 & 2) != 0) {
                            t224 = *(int *)0xC1EE280;
                            if ((t224 & 0x400) != 0) {
                                t225 = *(int *)0xC1EE280;
                                if ((t225 & 0x200) != 0) {
                                    t226 = *(int *)0xC1EE280;
                                    if ((t226 & 16) != 0) {
                                        u227 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u227 + 0.199999988f);
                                    }
                                    t233 = *(int *)0xC1EE280;
                                    if ((t233 & 32) == 0) {
                                    } else {
                                        u234 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u234 - 0.199999988f);
                                    }
                                } else {
                                    t240 = *(int *)0xC1EE280;
                                    if ((t240 & 128) != 0) {
                                        *(float *)(((int)stk + 76)) = 1.0f;
                                    }
                                    t244 = *(int *)0xC1EE280;
                                    if ((t244 & 64) != 0) {
                                        *(float *)(((int)stk + 76)) = (-1.0f);
                                    }
                                    t248 = *(int *)0xC1EE280;
                                    if ((t248 & 16) != 0) {
                                        *(float *)(((int)stk + 80)) = 1.0f;
                                    }
                                    t252 = *(int *)0xC1EE280;
                                    if ((t252 & 32) != 0) {
                                        *(float *)(((int)stk + 80)) = (-1.0f);
                                    }
                                    t256 = *(int *)0xC1EE280;
                                    if ((t256 & 0x400) != 0) {
                                        *(float *)(((int)stk + 84)) = (-1.0f);
                                    }
                                    t260 = *(int *)0xC1EE280;
                                    if ((t260 & 0x200) != 0) {
                                        *(float *)(((int)stk + 84)) = 1.0f;
                                    }
                                }
                            } else {
                                t271 = *(int *)0xC1EE280;
                                if ((t271 & 128) != 0) {
                                    *(float *)(((int)stk + 76)) = 1.0f;
                                }
                                t275 = *(int *)0xC1EE280;
                                if ((t275 & 64) != 0) {
                                    *(float *)(((int)stk + 76)) = (-1.0f);
                                }
                                t279 = *(int *)0xC1EE280;
                                if ((t279 & 16) != 0) {
                                    *(float *)(((int)stk + 80)) = 1.0f;
                                }
                                t283 = *(int *)0xC1EE280;
                                if ((t283 & 32) != 0) {
                                    *(float *)(((int)stk + 80)) = (-1.0f);
                                }
                                t287 = *(int *)0xC1EE280;
                                if ((t287 & 0x400) != 0) {
                                    *(float *)(((int)stk + 84)) = (-1.0f);
                                }
                                t291 = *(int *)0xC1EE280;
                                if ((t291 & 0x200) != 0) {
                                    *(float *)(((int)stk + 84)) = 1.0f;
                                }
                            }
                        } else {
                            t302 = *(int *)0xC1EE280;
                            if ((t302 & 16) != 0) {
                                t303 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t303 + 0x100);
                            }
                            t308 = *(int *)0xC1EE280;
                            if ((t308 & 32) != 0) {
                                t309 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t309 - 0x100);
                            }
                            t314 = *(int *)0xC1EE280;
                            if ((t314 & 128) != 0) {
                                t315 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t315 - 0x100);
                            }
                            t320 = *(int *)0xC1EE280;
                            if ((t320 & 64) != 0) {
                                t321 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t321 + 0x100);
                            }
                            t326 = *(int *)0xC1EE280;
                            if ((t326 & 0x400) != 0) {
                                *(float *)(((int)stk + 84)) = -10.0f;
                            }
                            t330 = *(int *)0xC1EE280;
                            if ((t330 & 0x200) != 0) {
                                *(float *)(((int)stk + 84)) = 10.0f;
                            }
                            t334 = *(short *)0xC179858;
                            *(unsigned int *)(((int)stk + 72)) = t334;
                            t337 = 0xFFFFC000;
                            if ((int)t334 < (int)0xFFFFC000) {
                            } else {
                                t335 = t334;
                                if ((int)t334 > (int)0x4000) {
                                    t335 = 0x4000;
                                }
                                t337 = t335;
                            }
                            *(unsigned int *)(((int)stk + 72)) = t337;
                            t339 = *(short *)(((int)stk + 72));
                            *(unsigned short *)0xC179858 = t339;
                        }
                        t347 = *(int *)0xC1EE280;
                        if ((t347 & 0x400) != 0) {
                            t348 = *(int *)0xC1EE280;
                            if ((t348 & 0x10000) != 0) {
                                t349 = *(int *)0xC1EE280;
                                if ((t349 & 0x20000) != 0) {
                                    t350 = *(int *)0xC1EE280;
                                    if ((t350 & 16) != 0) {
                                        u351 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u351 + 0.199999988f);
                                    }
                                    t357 = *(int *)0xC1EE280;
                                    if ((t357 & 32) == 0) {
                                    } else {
                                        u358 = *(float *)0xC0E4E34;
                                        *(float *)0xC0E4E34 = (u358 - 0.199999988f);
                                    }
                                } else {
                                    t364 = *(int *)0xC1EE280;
                                    if ((t364 & 128) != 0) {
                                        *(float *)(((int)stk + 76)) = 1.0f;
                                    }
                                    t368 = *(int *)0xC1EE280;
                                    if ((t368 & 64) != 0) {
                                        *(float *)(((int)stk + 76)) = (-1.0f);
                                    }
                                    t372 = *(int *)0xC1EE280;
                                    if ((t372 & 16) != 0) {
                                        *(float *)(((int)stk + 80)) = 1.0f;
                                    }
                                    t376 = *(int *)0xC1EE280;
                                    if ((t376 & 32) != 0) {
                                        *(float *)(((int)stk + 80)) = (-1.0f);
                                    }
                                    t380 = *(int *)0xC1EE280;
                                    if ((t380 & 0x10000) != 0) {
                                        *(float *)(((int)stk + 84)) = (-1.0f);
                                    }
                                    t384 = *(int *)0xC1EE280;
                                    if ((t384 & 0x20000) != 0) {
                                        *(float *)(((int)stk + 84)) = 1.0f;
                                    }
                                }
                            } else {
                                t395 = *(int *)0xC1EE280;
                                if ((t395 & 128) != 0) {
                                    *(float *)(((int)stk + 76)) = 1.0f;
                                }
                                t399 = *(int *)0xC1EE280;
                                if ((t399 & 64) != 0) {
                                    *(float *)(((int)stk + 76)) = (-1.0f);
                                }
                                t403 = *(int *)0xC1EE280;
                                if ((t403 & 16) != 0) {
                                    *(float *)(((int)stk + 80)) = 1.0f;
                                }
                                t407 = *(int *)0xC1EE280;
                                if ((t407 & 32) != 0) {
                                    *(float *)(((int)stk + 80)) = (-1.0f);
                                }
                                t411 = *(int *)0xC1EE280;
                                if ((t411 & 0x10000) != 0) {
                                    *(float *)(((int)stk + 84)) = (-1.0f);
                                }
                                t415 = *(int *)0xC1EE280;
                                if ((t415 & 0x20000) != 0) {
                                    *(float *)(((int)stk + 84)) = 1.0f;
                                }
                            }
                        } else {
                            t426 = *(int *)0xC1EE280;
                            if ((t426 & 16) != 0) {
                                t427 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t427 + 0x100);
                            }
                            t432 = *(int *)0xC1EE280;
                            if ((t432 & 32) != 0) {
                                t433 = *(short *)0xC179858;
                                *(unsigned short *)0xC179858 = (t433 - 0x100);
                            }
                            t438 = *(int *)0xC1EE280;
                            if ((t438 & 128) != 0) {
                                t439 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t439 - 0x100);
                            }
                            t444 = *(int *)0xC1EE280;
                            if ((t444 & 64) != 0) {
                                t445 = *(short *)0xC17985A;
                                *(unsigned short *)0xC17985A = (t445 + 0x100);
                            }
                            t450 = *(int *)0xC1EE280;
                            if ((t450 & 0x10000) != 0) {
                                *(float *)(((int)stk + 84)) = -10.0f;
                            }
                            t454 = *(int *)0xC1EE280;
                            if ((t454 & 0x20000) != 0) {
                                *(float *)(((int)stk + 84)) = 10.0f;
                            }
                            t458 = *(short *)0xC179858;
                            *(unsigned int *)(((int)stk + 72)) = t458;
                            t461 = 0xFFFFC000;
                            if ((int)t458 < (int)0xFFFFC000) {
                            } else {
                                t459 = t458;
                                if ((int)t458 > (int)0x4000) {
                                    t459 = 0x4000;
                                }
                                t461 = t459;
                            }
                            *(unsigned int *)(((int)stk + 72)) = t461;
                            t463 = *(short *)(((int)stk + 72));
                            *(unsigned short *)0xC179858 = t463;
                        }
                        nlPushUnitMatrix();
                        t472 = *(short *)0xC17985A;
                        nlRotateAY((unsigned short)t472);
                        t474 = *(short *)0xC179858;
                        nlRotateAX((unsigned short)t474);
                        FUN_0c077210((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x44));
                        nlPopMatrix(0x1);
                        nlAddVector(0xC179840, (((int)stk + 8) + 0x44));
                        u479 = *(float *)0xC0E4E34;
                        *(float *)0xC1798A4 = u479;
                    } else {
                        if (t54 == 5) {
                            t480 = *(int *)0xC0E4A14;
                            if (t480 != 0) {
                                *(float *)0xC1798A4 = 60.0f;
                                SetCameraAngleRatio(0.399999976f, 0.099999994f);
                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                FUN_0c0288e0(60.0f);
                                SetCameraMode(0x2);
                            }
                            t489 = *(int *)0xC1EE2B4;
                            if ((t489 & 16) != 0) {
                                t490 = *(int *)0xC0E4A08;
                                *(unsigned int *)0xC0E4A08 = (t490 - 0x100);
                            }
                            t495 = *(int *)0xC1EE2B4;
                            if ((t495 & 32) != 0) {
                                t496 = *(int *)0xC0E4A08;
                                *(unsigned int *)0xC0E4A08 = (t496 + 0x100);
                            }
                            t501 = *(int *)0xC1EE2B4;
                            if ((t501 & 128) != 0) {
                                t502 = *(int *)0xC0E4A0C;
                                *(unsigned int *)0xC0E4A0C = (t502 - 0x100);
                            }
                            t507 = *(int *)0xC1EE2B4;
                            if ((t507 & 64) != 0) {
                                t508 = *(int *)0xC0E4A0C;
                                *(unsigned int *)0xC0E4A0C = (t508 + 0x100);
                            }
                            t513 = *(int *)0xC1EE2B4;
                            if ((t513 & 4) != 0) {
                                u514 = *(float *)0xC0E4A04;
                                *(float *)0xC0E4A04 = (u514 - 1.0f);
                            }
                            t519 = *(int *)0xC1EE2B4;
                            if ((t519 & 2) != 0) {
                                u520 = *(float *)0xC0E4A04;
                                *(float *)0xC0E4A04 = (u520 + 1.0f);
                            }
                            u525 = *(float *)0xC0E4A04;
                            if (1.0f > u525) {
                                *(float *)0xC0E4A04 = 1.0f;
                            }
                            t528 = *(int *)0xC0E4A08;
                            t536 = 0xFFFFC000;
                            if ((int)t528 < (int)0xFFFFC000) {
                            } else {
                                t529 = *(int *)0xC0E4A08;
                                t532 = 0x4000;
                                if ((int)t529 > (int)0x4000) {
                                } else {
                                    t530 = *(int *)0xC0E4A08;
                                    t532 = t530;
                                }
                                t536 = t532;
                            }
                            *(unsigned int *)0xC0E4A08 = t536;
                            t538 = *(int *)0xC0E49F8;
                            if (t538 != 0) {
                                t539 = *(int *)0xC179860;
                                if (t539 == 6) {
                                    t540 = *(int *)0xC0E4A00;
                                    if (t540 != 0) {
                                        t541 = *(int *)0xC0E4A00;
                                        SetCameraPosVelocity(t541);
                                    } else {
                                        t543 = *(int *)0xC0E49FC;
                                        if (t543 != 0) {
                                            t544 = *(int *)0xC0E49FC;
                                            t545 = *(short *)((t544 + 0x2));
                                            nlRotateAY((unsigned short)t545);
                                            t547 = *(int *)0xC0E49FC;
                                            t548 = *(short *)((t547 + 0x0));
                                            nlRotateAX((unsigned short)t548);
                                            t550 = *(int *)0xC0E49FC;
                                            t551 = *(short *)((t550 + 0x4));
                                            nlRotateAZ((unsigned short)t551);
                                        }
                                    }
                                }
                                t574 = *(int *)0xC0E4A0C;
                                nlRotateAY(t574);
                                t576 = *(int *)0xC0E4A08;
                                nlRotateAX(t576);
                                t578 = *(int *)0xC0E49F8;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179914) = *(struct mv3 *)(t578); }
                                nlAddVector(0xC179914, 0xC1798BC);
                                GetAng4Mat(0xC179940);
                            }
                            *(float *)0xC1798BC = 0.0f;
                            *(float *)0xC1798C0 = 5.0f;
                            *(float *)0xC1798C4 = 0.0f;
                        } else {
                            if (t54 == 6) {
                                t588 = *(int *)0xC0E4A14;
                                if (t588 != 0) {
                                    *(float *)0xC1798A4 = 60.0f;
                                    SetCameraAngleRatio(0.399999976f, 0.099999994f);
                                    SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                    FUN_0c0288e0(60.0f);
                                    SetCameraMode(0x2);
                                }
                                t597 = *(int *)0xC1EE2B4;
                                if ((t597 & 16) != 0) {
                                    t598 = *(int *)0xC0E4A08;
                                    *(unsigned int *)0xC0E4A08 = (t598 - 0x100);
                                }
                                t603 = *(int *)0xC1EE2B4;
                                if ((t603 & 32) != 0) {
                                    t604 = *(int *)0xC0E4A08;
                                    *(unsigned int *)0xC0E4A08 = (t604 + 0x100);
                                }
                                t609 = *(int *)0xC1EE2B4;
                                if ((t609 & 128) != 0) {
                                    t610 = *(int *)0xC0E4A0C;
                                    *(unsigned int *)0xC0E4A0C = (t610 - 0x100);
                                }
                                t615 = *(int *)0xC1EE2B4;
                                if ((t615 & 64) != 0) {
                                    t616 = *(int *)0xC0E4A0C;
                                    *(unsigned int *)0xC0E4A0C = (t616 + 0x100);
                                }
                                t621 = *(int *)0xC1EE2B4;
                                if ((t621 & 4) != 0) {
                                    u622 = *(float *)0xC0E4A04;
                                    *(float *)0xC0E4A04 = (u622 - 1.0f);
                                }
                                t627 = *(int *)0xC1EE2B4;
                                if ((t627 & 2) != 0) {
                                    u628 = *(float *)0xC0E4A04;
                                    *(float *)0xC0E4A04 = (u628 + 1.0f);
                                }
                                u633 = *(float *)0xC0E4A04;
                                if (1.0f > u633) {
                                    *(float *)0xC0E4A04 = 1.0f;
                                }
                                t636 = *(int *)0xC0E4A08;
                                t644 = 0xFFFFC000;
                                if ((int)t636 < (int)0xFFFFC000) {
                                } else {
                                    t637 = *(int *)0xC0E4A08;
                                    t640 = 0x4000;
                                    if ((int)t637 > (int)0x4000) {
                                    } else {
                                        t638 = *(int *)0xC0E4A08;
                                        t640 = t638;
                                    }
                                    t644 = t640;
                                }
                                *(unsigned int *)0xC0E4A08 = t644;
                                t646 = *(int *)0xC0E49F8;
                                if (t646 != 0) {
                                    t647 = *(int *)0xC179860;
                                    if (t647 == 6) {
                                        t648 = *(int *)0xC0E4A00;
                                        if (t648 != 0) {
                                            t649 = *(int *)0xC0E4A00;
                                            SetCameraPosVelocity(t649);
                                        } else {
                                            t651 = *(int *)0xC0E49FC;
                                            if (t651 != 0) {
                                                t652 = *(int *)0xC0E49FC;
                                                t653 = *(short *)((t652 + 0x2));
                                                nlRotateAY((unsigned short)t653);
                                                t655 = *(int *)0xC0E49FC;
                                                t656 = *(short *)((t655 + 0x0));
                                                nlRotateAX((unsigned short)t656);
                                                t658 = *(int *)0xC0E49FC;
                                                t659 = *(short *)((t658 + 0x4));
                                                nlRotateAZ((unsigned short)t659);
                                            }
                                        }
                                    }
                                    t682 = *(int *)0xC0E4A0C;
                                    nlRotateAY(t682);
                                    t684 = *(int *)0xC0E4A08;
                                    nlRotateAX(t684);
                                    t686 = *(int *)0xC0E49F8;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179914) = *(struct mv3 *)(t686); }
                                    nlAddVector(0xC179914, 0xC1798BC);
                                    GetAng4Mat(0xC179940);
                                }
                                *(float *)0xC1798BC = 0.0f;
                                *(float *)0xC1798C0 = 5.0f;
                                *(float *)0xC1798C4 = 0.0f;
                            } else {
                                if (t54 == 7) {
                                    *(unsigned int *)0xC179930 = 0x0;
                                    t696 = *(int *)0xC1EE20C;
                                    if (t696 == 2) {
                                        t697 = *(int *)0xC1EE214;
                                        if (t697 == 3) {
                                            t698 = *(int *)(((int)stk + 88));
                                            camSetTarget((t698 + 0x78), 0x2);
                                            t700 = nlLength(0xC1798D0, 0xC1798FC);
                                            *(float *)(((int)stk + 48)) = t700;
                                            *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                            t701 = 0x0;
                                            u702 = t700;
                                            for (;;) {
                                                *(unsigned int *)(((int)stk + 84)) = t701;
                                                if ((int)t701 >= (int)0x9) {
                                                    break;
                                                }
                                                t701 = 0xC078AE0;
                                                t706 = *(int *)(((int)stk + 88));
                                                t707 = *(signed char *)(((int)stk + 84));
                                                t708 = nlLength(((signed char)(((t707 << 1) + t707) << 2) + 0xC0E4CE8), (t706 + 0x78));
                                                u702 = t708;
                                                u704 = 1.19999993f;
                                                u702 = (u702 * u704);
                                                *(float *)(((int)stk + 44)) = u702;
                                                u709 = *(float *)(((int)stk + 48));
                                                u703 = u709;
                                                if (u703 > u702) {
                                                    u710 = *(float *)(((int)stk + 44));
                                                    u703 = u710;
                                                    *(float *)(((int)stk + 48)) = u703;
                                                    t711 = *(int *)(((int)stk + 84));
                                                    *(unsigned int *)(((int)stk + 80)) = t711;
                                                }
                                                t715 = *(int *)(((int)stk + 84));
                                                t701 = t715;
                                                t701 = (t701 + 0x1);
                                            }
                                            t716 = *(int *)(((int)stk + 80));
                                            if (t716 != -1) {
                                                t717 = *(signed char *)(((int)stk + 80));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((signed char)(((t717 << 1) + t717) << 2) + 0xC0E4CE8)); }
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                            u727 = *(float *)(((int)stk + 48));
                                            *(float *)(((int)stk + 48)) = (u727 - 50.0f);
                                            if ((u727 - 50.0f) > 550.0f) {
                                                *(float *)(((int)stk + 48)) = 550.0f;
                                            }
                                            u731 = *(float *)(((int)stk + 48));
                                            if (0.0f > u731) {
                                                *(float *)(((int)stk + 48)) = 0.0f;
                                            }
                                            u733 = *(float *)(((int)stk + 48));
                                            u734 = *(float *)(((int)stk + 48));
                                            u735 = 6.0f;
                                            u735 = u735 + 45.0f * (((550.0f - u733) / 550.0f) * ((550.0f - u734) / 550.0f));
                                            *(float *)0xC1798A4 = u735;
                                            t736 = *(int *)0xC0E4A14;
                                            if (t736 == 0) {
                                            } else {
                                                *(float *)(((int)stk + 40)) = 99999.0f;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t737 = 0xC0E4A14;
                                                u738 = 45.0f;
                                                u739 = u735;
                                                u740 = 99999.0f;
                                                for (;;) {
                                                    t741 = *(int *)(((int)stk + 84));
                                                    if ((int)t741 >= (int)0x9) {
                                                        break;
                                                    }
                                                    t742 = *(int *)(((int)stk + 88));
                                                    t743 = *(signed char *)(((int)stk + 84));
                                                    t744 = nlLength(((signed char)(((t743 << 1) + t743) << 2) + 0xC0E4CE8), (t742 + 0x78));
                                                    u738 = t744;
                                                    u740 = 1.0f;
                                                    u738 = (u738 * u740);
                                                    *(float *)(((int)stk + 48)) = u738;
                                                    u745 = *(float *)(((int)stk + 40));
                                                    u739 = u745;
                                                    if (u739 > u738) {
                                                        t737 = ((int)stk + 8);
                                                        u746 = *(float *)(((int)stk + 48));
                                                        u739 = u746;
                                                        t737 = (t737 + 0x38);
                                                        *(float *)(((int)stk + 40)) = u739;
                                                        t747 = *(signed char *)(((int)stk + 80));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t737) = *(struct mv3 *)(((signed char)(((t747 << 1) + t747) << 2) + 0xC0E4CE8)); }
                                                        t748 = t737;
                                                    }
                                                    t737 = t748;
                                                    t752 = *(int *)(((int)stk + 84));
                                                    t737 = t752;
                                                    t737 = (t737 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t737;
                                                }
                                                u753 = *(float *)(((int)stk + 40));
                                                *(float *)(((int)stk + 48)) = u753;
                                                u754 = *(float *)(((int)stk + 48));
                                                *(float *)(((int)stk + 48)) = (u754 - 50.0f);
                                                if ((u754 - 50.0f) > 550.0f) {
                                                    *(float *)(((int)stk + 48)) = 550.0f;
                                                }
                                                u758 = *(float *)(((int)stk + 48));
                                                if (0.0f > u758) {
                                                    *(float *)(((int)stk + 48)) = 0.0f;
                                                }
                                                u760 = *(float *)(((int)stk + 48));
                                                u761 = *(float *)(((int)stk + 48));
                                                u762 = 6.0f;
                                                u762 = u762 + 45.0f * (((550.0f - u760) / 550.0f) * ((550.0f - u761) / 550.0f));
                                                *(float *)0xC1798A4 = u762;
                                                camSetEye((((int)stk + 8) + 0x38), 0x0);
                                                t764 = *(int *)(((int)stk + 88));
                                                camSetTarget((t764 + 0x78), 0x0);
                                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                                SetCameraMode(0x1);
                                            }
                                        } else {
                                            t777 = *(int *)(((int)stk + 88));
                                            camSetTarget((t777 + 0x78), 0x2);
                                            t779 = nlLength(0xC1798D0, 0xC1798FC);
                                            *(float *)(((int)stk + 48)) = t779;
                                            if (!(t779 > 980.0f)) {
                                                u863 = t779;
                                                u864 = 980.0f;
                                            } else {
                                                t780 = *(int *)(((int)stk + 88));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((t780 + 0x78)); }
                                                t781 = *(int *)(((int)stk + 88));
                                                t782 = *(short *)((t781 + 0xF4));
                                                t783 = FUN_0c089de0((unsigned short)t782);
                                                *(float *)(((int)stk + 52)) = (t783 * 950.0f);
                                                *(float *)(((int)stk + 56)) = 0.0f;
                                                t784 = *(int *)(((int)stk + 88));
                                                t785 = *(short *)((t784 + 0xF4));
                                                t786 = FUN_0c089de8((unsigned short)t785);
                                                *(float *)(((int)stk + 60)) = (t786 * 950.0f);
                                                GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                                t788 = *(int *)0xC179490;
                                                if ((int)t788 >= (int)0x11) {
                                                    *(float *)(((int)stk + 32)) = 99999.8984f;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t789 = (((int)stk + 8) + 0xC);
                                                    u792 = 99999.8984f;
                                                    for (;;) {
                                                        t793 = *(int *)(((int)stk + 84));
                                                        if ((int)t793 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t789 = ((int)stk + 8);
                                                        t789 = (t789 + 0xC);
                                                        t794 = t789;
                                                        t795 = *(int *)(((int)stk + 84));
                                                        t789 = 0xC2A6690;
                                                        t796 = *(int *)((t789 + 0x0));
                                                        t797 = *(int *)((((((t795 << 1) + t795) << 2) + t796) + 0xEE0));
                                                        t798 = *(int *)(((int)stk + 84));
                                                        t799 = *(int *)((t797 + 0x0));
                                                        t800 = *(int *)((((((t798 << 1) + t798) << 2) + t796) + 0xEDC));
                                                        t801 = getNearLineIndex(0x0, t800, t799, (((int)stk + 4) + 0x24), t794);
                                                        u790 = t801;
                                                        u791 = u790;
                                                        *(float *)(((int)stk + 36)) = u790;
                                                        u802 = *(float *)(((int)stk + 32));
                                                        u792 = u802;
                                                        if (u792 > u791) {
                                                            *(float *)(((int)stk + 32)) = u791;
                                                            t803 = *(int *)(((int)stk + 84));
                                                            t804 = *(int *)(((int)stk + 40));
                                                            t805 = *(int *)0xC2A6690;
                                                            t789 = t805;
                                                            t806 = ((((t803 << 1) + t803) << 2) + t789);
                                                            t789 = t804;
                                                            t807 = ((t804 << 1) + t789);
                                                            t789 = 0xEDC;
                                                            t789 = (t789 + t806);
                                                            t808 = *(int *)((t789 + 0x0));
                                                            t789 = ((int)stk + 8);
                                                            t789 = (t789 + 0x38);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t789) = *(struct mv3 *)((t808 + (t807 << 2))); }
                                                            t809 = t789;
                                                        }
                                                        t789 = t809;
                                                        t813 = *(int *)(((int)stk + 84));
                                                        t789 = t813;
                                                        t789 = (t789 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t789;
                                                    }
                                                } else {
                                                    t814 = *(int *)0xC1EE20C;
                                                    if (t814 == 1) {
                                                        *(float *)(((int)stk + 8)) = 99999.8984f;
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t815 = 0xC1EE20C;
                                                        u818 = 99999.8984f;
                                                        for (;;) {
                                                            t819 = *(int *)(((int)stk + 84));
                                                            if ((int)t819 >= (int)0x2) {
                                                                break;
                                                            }
                                                            t815 = ((int)stk + 8);
                                                            t815 = (t815 + 0x14);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t815) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                            t820 = *(int *)(((int)stk + 84));
                                                            t815 = 0xC2A6690;
                                                            t821 = *(int *)((t815 + 0x0));
                                                            t822 = *(int *)((((((t820 << 1) + t820) << 2) + t821) + 0xEC8));
                                                            t823 = *(int *)(((int)stk + 84));
                                                            t824 = *(int *)((t822 + 0x0));
                                                            t825 = *(int *)((((((t823 << 1) + t823) << 2) + t821) + 0xEC4));
                                                            t826 = getNearLineIndex(0x0, t825, t824, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                            u816 = t826;
                                                            u817 = u816;
                                                            *(float *)(((int)stk + 12)) = u816;
                                                            u827 = *(float *)(((int)stk + 8));
                                                            u818 = u827;
                                                            if (u818 > u817) {
                                                                *(float *)(((int)stk + 8)) = u817;
                                                                t828 = *(int *)(((int)stk + 84));
                                                                t829 = *(int *)(((int)stk + 40));
                                                                t830 = *(int *)0xC2A6690;
                                                                t815 = t830;
                                                                t831 = ((((t828 << 1) + t828) << 2) + t815);
                                                                t815 = t829;
                                                                t832 = ((t829 << 1) + t815);
                                                                t815 = 0xEC4;
                                                                t815 = (t815 + t831);
                                                                t833 = *(int *)((t815 + 0x0));
                                                                t815 = ((int)stk + 8);
                                                                t815 = (t815 + 0x8);
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t815) = *(struct mv3 *)((t833 + (t832 << 2))); }
                                                                t834 = t815;
                                                            }
                                                            t815 = t834;
                                                            t838 = *(int *)(((int)stk + 84));
                                                            t815 = t838;
                                                            t815 = (t815 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t815;
                                                        }
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                        t840 = *(int *)(((int)stk + 88));
                                                        t841 = nlLength((((int)stk + 8) + 0x38), (t840 + 0x78));
                                                        u842 = *(float *)(((int)stk + 8));
                                                        if (t841 > u842) {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((((int)stk + 8) + 0x8)); }
                                                        }
                                                    } else {
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    }
                                                }
                                                u860 = *(float *)(((int)stk + 68));
                                                *(float *)(((int)stk + 68)) = (u860 + 20.0f);
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                            t866 = *(int *)0xC1EE20C;
                                            if (t866 == 0) {
                                                *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t867 = 0xFFFFFFFF;
                                                u868 = u863;
                                                u870 = u864;
                                                for (;;) {
                                                    t871 = *(int *)(((int)stk + 84));
                                                    if ((int)t871 >= (int)0xB) {
                                                        break;
                                                    }
                                                    t872 = *(int *)(((int)stk + 88));
                                                    t873 = *(signed char *)(((int)stk + 84));
                                                    t874 = nlLength(((unsigned char)(((t873 << 1) + t873) << 2) + 0xC0E4A18), (t872 + 0x78));
                                                    u868 = t874;
                                                    u870 = 1.0f;
                                                    u868 = (u868 * u870);
                                                    *(float *)(((int)stk + 44)) = u868;
                                                    u875 = *(float *)(((int)stk + 48));
                                                    u869 = u875;
                                                    if (u869 > u868) {
                                                        u876 = *(float *)(((int)stk + 44));
                                                        u869 = u876;
                                                        *(float *)(((int)stk + 48)) = u869;
                                                        t877 = *(int *)(((int)stk + 84));
                                                        *(unsigned int *)(((int)stk + 80)) = t877;
                                                    }
                                                    t881 = *(int *)(((int)stk + 84));
                                                    t867 = t881;
                                                    t867 = (t867 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t867;
                                                }
                                                t882 = *(int *)(((int)stk + 80));
                                                if (t882 == -1) {
                                                } else {
                                                    t883 = *(signed char *)(((int)stk + 80));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((unsigned char)(((t883 << 1) + t883) << 2) + 0xC0E4A18)); }
                                                    camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                }
                                            } else {
                                                t893 = *(int *)0xC1EE20C;
                                                if (t893 != 1) {
                                                } else {
                                                    *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                    t894 = *(int *)0xC179490;
                                                    if ((int)t894 >= (int)0x11) {
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t895 = t894;
                                                        u896 = u863;
                                                        u898 = u864;
                                                        for (;;) {
                                                            t899 = *(int *)(((int)stk + 84));
                                                            if ((int)t899 >= (int)0xA) {
                                                                break;
                                                            }
                                                            t900 = *(int *)(((int)stk + 88));
                                                            t901 = *(signed char *)(((int)stk + 84));
                                                            t902 = nlLength(((signed char)(((t901 << 1) + t901) << 2) + 0xC0E4C70), (t900 + 0x78));
                                                            u896 = t902;
                                                            u898 = 1.0f;
                                                            u896 = (u896 * u898);
                                                            *(float *)(((int)stk + 44)) = u896;
                                                            u903 = *(float *)(((int)stk + 48));
                                                            u897 = u903;
                                                            if (u897 > u896) {
                                                                u904 = *(float *)(((int)stk + 44));
                                                                u897 = u904;
                                                                *(float *)(((int)stk + 48)) = u897;
                                                                t905 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t905;
                                                            }
                                                            t909 = *(int *)(((int)stk + 80));
                                                            if (t909 != -1) {
                                                                t910 = *(signed char *)(((int)stk + 80));
                                                                t895 = t910;
                                                                t911 = t895;
                                                                t895 = (t895 << 1);
                                                                t895 = (t895 + t911);
                                                                t895 = (t895 << 2);
                                                                t895 = (signed char)t895;
                                                                t895 = (t895 + 0xC0E4C70);
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(t895); }
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            } else {
                                                                u915 = u896;
                                                                u916 = u897;
                                                                u917 = u898;
                                                            }
                                                            u896 = u915;
                                                            u897 = u916;
                                                            u898 = u917;
                                                            t919 = *(int *)(((int)stk + 84));
                                                            t895 = t919;
                                                            t895 = (t895 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t895;
                                                        }
                                                    } else {
                                                        t920 = *(int *)(((int)stk + 88));
                                                        u921 = *(float *)((t920 + 0x7C));
                                                        if (-40.0f > u921) {
                                                            t922 = 0x0;
                                                            u923 = u863;
                                                            u924 = u921;
                                                            u925 = -40.0f;
                                                            for (;;) {
                                                                *(unsigned int *)(((int)stk + 84)) = t922;
                                                                if ((int)t922 >= (int)0x1C) {
                                                                    break;
                                                                }
                                                                t926 = *(int *)(((int)stk + 88));
                                                                t927 = *(short *)(((int)stk + 84));
                                                                t928 = nlLength(((short)(((t927 << 1) + t927) << 2) + 0xC0E4B20), (t926 + 0x78));
                                                                u923 = t928;
                                                                u925 = 1.0f;
                                                                u923 = (u923 * u925);
                                                                *(float *)(((int)stk + 44)) = u923;
                                                                u929 = *(float *)(((int)stk + 48));
                                                                u924 = u929;
                                                                if (u924 > u923) {
                                                                    u930 = *(float *)(((int)stk + 44));
                                                                    u924 = u930;
                                                                    *(float *)(((int)stk + 48)) = u924;
                                                                    t931 = *(int *)(((int)stk + 84));
                                                                    *(unsigned int *)(((int)stk + 80)) = t931;
                                                                }
                                                                t935 = *(int *)(((int)stk + 80));
                                                                if (t935 != -1) {
                                                                    t936 = *(short *)(((int)stk + 80));
                                                                    t922 = t936;
                                                                    t937 = t922;
                                                                    t922 = (t922 << 1);
                                                                    t922 = (t922 + t937);
                                                                    t922 = (t922 << 2);
                                                                    t922 = (short)t922;
                                                                    t922 = (t922 + 0xC0E4B20);
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(t922); }
                                                                    camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                                } else {
                                                                    u941 = u923;
                                                                    u942 = u924;
                                                                    u943 = u925;
                                                                }
                                                                u923 = u941;
                                                                u924 = u942;
                                                                u925 = u943;
                                                                t945 = *(int *)(((int)stk + 84));
                                                                t922 = t945;
                                                                t922 = (t922 + 0x1);
                                                            }
                                                        } else {
                                                            t946 = 0x0;
                                                            u947 = u863;
                                                            u948 = u921;
                                                            u949 = -40.0f;
                                                            for (;;) {
                                                                *(unsigned int *)(((int)stk + 84)) = t946;
                                                                if ((int)t946 >= (int)0xB) {
                                                                    break;
                                                                }
                                                                t950 = *(int *)(((int)stk + 88));
                                                                t951 = *(signed char *)(((int)stk + 84));
                                                                t952 = nlLength(((unsigned char)(((t951 << 1) + t951) << 2) + 0xC0E4A9C), (t950 + 0x78));
                                                                u947 = t952;
                                                                u949 = 1.0f;
                                                                u947 = (u947 * u949);
                                                                *(float *)(((int)stk + 44)) = u947;
                                                                u953 = *(float *)(((int)stk + 48));
                                                                u948 = u953;
                                                                if (u948 > u947) {
                                                                    u954 = *(float *)(((int)stk + 44));
                                                                    u948 = u954;
                                                                    *(float *)(((int)stk + 48)) = u948;
                                                                    t955 = *(int *)(((int)stk + 84));
                                                                    *(unsigned int *)(((int)stk + 80)) = t955;
                                                                }
                                                                t959 = *(int *)(((int)stk + 84));
                                                                t946 = t959;
                                                                t946 = (t946 + 0x1);
                                                            }
                                                            t960 = *(int *)(((int)stk + 80));
                                                            if (t960 != -1) {
                                                                t961 = *(signed char *)(((int)stk + 80));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((unsigned char)(((t961 << 1) + t961) << 2) + 0xC0E4A9C)); }
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            u1001 = *(float *)(((int)stk + 48));
                                            *(float *)(((int)stk + 48)) = (u1001 - 50.0f);
                                            if ((u1001 - 50.0f) > 550.0f) {
                                                *(float *)(((int)stk + 48)) = 550.0f;
                                            }
                                            u1005 = *(float *)(((int)stk + 48));
                                            if (0.0f > u1005) {
                                                *(float *)(((int)stk + 48)) = 0.0f;
                                            }
                                            u1007 = *(float *)(((int)stk + 48));
                                            u1008 = *(float *)(((int)stk + 48));
                                            u1009 = 6.0f;
                                            u1009 = u1009 + 45.0f * (((550.0f - u1007) / 550.0f) * ((550.0f - u1008) / 550.0f));
                                            *(float *)0xC1798A4 = u1009;
                                            t1010 = *(int *)0xC0E4A14;
                                            if (t1010 == 0) {
                                            } else {
                                                *(float *)0xC1798A4 = 60.0f;
                                                t1011 = *(int *)(((int)stk + 88));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((t1011 + 0x78)); }
                                                t1012 = *(int *)(((int)stk + 88));
                                                t1013 = *(short *)((t1012 + 0xF4));
                                                t1014 = FUN_0c089de0((unsigned short)t1013);
                                                *(float *)(((int)stk + 52)) = (t1014 * 300.0f);
                                                *(float *)(((int)stk + 56)) = 0.0f;
                                                t1015 = *(int *)(((int)stk + 88));
                                                t1016 = *(short *)((t1015 + 0xF4));
                                                t1017 = FUN_0c089de8((unsigned short)t1016);
                                                *(float *)(((int)stk + 60)) = (t1017 * 300.0f);
                                                GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                                t1019 = *(int *)0xC179490;
                                                if ((int)t1019 >= (int)0x14) {
                                                    *(float *)(((int)stk + 32)) = 99999.8984f;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1020 = (((int)stk + 8) + 0xC);
                                                    u1023 = 99999.8984f;
                                                    for (;;) {
                                                        t1024 = *(int *)(((int)stk + 84));
                                                        if ((int)t1024 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1020 = ((int)stk + 8);
                                                        t1020 = (t1020 + 0xC);
                                                        t1025 = t1020;
                                                        t1026 = *(int *)(((int)stk + 84));
                                                        t1020 = 0xC2A6690;
                                                        t1027 = *(int *)((t1020 + 0x0));
                                                        t1028 = *(int *)((((((t1026 << 1) + t1026) << 2) + t1027) + 0xEE0));
                                                        t1029 = *(int *)(((int)stk + 84));
                                                        t1030 = *(int *)((t1028 + 0x0));
                                                        t1031 = *(int *)((((((t1029 << 1) + t1029) << 2) + t1027) + 0xED0));
                                                        t1032 = getNearLineIndex(0x0, t1031, t1030, (((int)stk + 4) + 0x24), t1025);
                                                        u1021 = t1032;
                                                        u1022 = u1021;
                                                        *(float *)(((int)stk + 36)) = u1021;
                                                        u1033 = *(float *)(((int)stk + 32));
                                                        u1023 = u1033;
                                                        if (u1023 > u1022) {
                                                            *(float *)(((int)stk + 32)) = u1022;
                                                            t1034 = *(int *)(((int)stk + 84));
                                                            t1035 = *(int *)(((int)stk + 40));
                                                            t1036 = *(int *)0xC2A6690;
                                                            t1020 = t1036;
                                                            t1037 = ((((t1034 << 1) + t1034) << 2) + t1020);
                                                            t1020 = t1035;
                                                            t1038 = ((t1035 << 1) + t1020);
                                                            t1020 = 0xEDC;
                                                            t1020 = (t1020 + t1037);
                                                            t1039 = *(int *)((t1020 + 0x0));
                                                            t1020 = ((int)stk + 8);
                                                            t1020 = (t1020 + 0x38);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1020) = *(struct mv3 *)((t1039 + (t1038 << 2))); }
                                                            t1040 = t1020;
                                                        }
                                                        t1020 = t1040;
                                                        t1044 = *(int *)(((int)stk + 84));
                                                        t1020 = t1044;
                                                        t1020 = (t1020 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1020;
                                                    }
                                                } else {
                                                    t1045 = *(int *)0xC1EE20C;
                                                    if (t1045 == 1) {
                                                        *(float *)(((int)stk + 8)) = 99999.8984f;
                                                        *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                        t1046 = 0xC1EE20C;
                                                        u1049 = 99999.8984f;
                                                        for (;;) {
                                                            t1050 = *(int *)(((int)stk + 84));
                                                            if ((int)t1050 >= (int)0x2) {
                                                                break;
                                                            }
                                                            t1046 = ((int)stk + 8);
                                                            t1046 = (t1046 + 0x14);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1046) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                            t1051 = *(int *)(((int)stk + 84));
                                                            t1046 = 0xC2A6690;
                                                            t1052 = *(int *)((t1046 + 0x0));
                                                            t1053 = *(int *)((((((t1051 << 1) + t1051) << 2) + t1052) + 0xEC8));
                                                            t1054 = *(int *)(((int)stk + 84));
                                                            t1055 = *(int *)((t1053 + 0x0));
                                                            t1056 = *(int *)((((((t1054 << 1) + t1054) << 2) + t1052) + 0xEC4));
                                                            t1057 = getNearLineIndex(0x0, t1056, t1055, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                            u1047 = t1057;
                                                            u1048 = u1047;
                                                            *(float *)(((int)stk + 12)) = u1047;
                                                            u1058 = *(float *)(((int)stk + 8));
                                                            u1049 = u1058;
                                                            if (u1049 > u1048) {
                                                                *(float *)(((int)stk + 8)) = u1048;
                                                                t1059 = *(int *)(((int)stk + 84));
                                                                t1060 = *(int *)(((int)stk + 40));
                                                                t1061 = *(int *)0xC2A6690;
                                                                t1046 = t1061;
                                                                t1062 = ((((t1059 << 1) + t1059) << 2) + t1046);
                                                                t1046 = t1060;
                                                                t1063 = ((t1060 << 1) + t1046);
                                                                t1046 = 0xEC4;
                                                                t1046 = (t1046 + t1062);
                                                                t1064 = *(int *)((t1046 + 0x0));
                                                                t1046 = ((int)stk + 8);
                                                                t1046 = (t1046 + 0x8);
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t1046) = *(struct mv3 *)((t1064 + (t1063 << 2))); }
                                                                t1065 = t1046;
                                                            }
                                                            t1046 = t1065;
                                                            t1069 = *(int *)(((int)stk + 84));
                                                            t1046 = t1069;
                                                            t1046 = (t1046 + 0x1);
                                                            *(unsigned int *)(((int)stk + 84)) = t1046;
                                                        }
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                        t1071 = *(int *)(((int)stk + 88));
                                                        t1072 = nlLength((((int)stk + 8) + 0x38), (t1071 + 0x78));
                                                        u1073 = *(float *)(((int)stk + 8));
                                                        if (t1072 > u1073) {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((((int)stk + 8) + 0x8)); }
                                                        }
                                                    } else {
                                                        getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    }
                                                }
                                                u1091 = *(float *)(((int)stk + 68));
                                                *(float *)(((int)stk + 68)) = (u1091 + 20.0f);
                                                camSetEye((((int)stk + 8) + 0x38), 0x0);
                                                t1093 = *(int *)(((int)stk + 88));
                                                camSetTarget((t1093 + 0x78), 0x0);
                                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                                SetCameraMode(0x1);
                                            }
                                        }
                                    } else {
                                        t1115 = *(int *)(((int)stk + 88));
                                        camSetTarget((t1115 + 0x78), 0x2);
                                        t1117 = nlLength(0xC1798D0, 0xC1798FC);
                                        *(float *)(((int)stk + 48)) = t1117;
                                        if (!(t1117 > 980.0f)) {
                                            u1201 = t1117;
                                            u1202 = 980.0f;
                                        } else {
                                            t1118 = *(int *)(((int)stk + 88));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((t1118 + 0x78)); }
                                            t1119 = *(int *)(((int)stk + 88));
                                            t1120 = *(short *)((t1119 + 0xF4));
                                            t1121 = FUN_0c089de0((unsigned short)t1120);
                                            *(float *)(((int)stk + 52)) = (t1121 * 950.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            t1122 = *(int *)(((int)stk + 88));
                                            t1123 = *(short *)((t1122 + 0xF4));
                                            t1124 = FUN_0c089de8((unsigned short)t1123);
                                            *(float *)(((int)stk + 60)) = (t1124 * 950.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            t1126 = *(int *)0xC179490;
                                            if ((int)t1126 >= (int)0x11) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t1127 = (((int)stk + 8) + 0xC);
                                                u1130 = 99999.8984f;
                                                for (;;) {
                                                    t1131 = *(int *)(((int)stk + 84));
                                                    if ((int)t1131 >= (int)0x2) {
                                                        break;
                                                    }
                                                    t1127 = ((int)stk + 8);
                                                    t1127 = (t1127 + 0xC);
                                                    t1132 = t1127;
                                                    t1133 = *(int *)(((int)stk + 84));
                                                    t1127 = 0xC2A6690;
                                                    t1134 = *(int *)((t1127 + 0x0));
                                                    t1135 = *(int *)((((((t1133 << 1) + t1133) << 2) + t1134) + 0xEE0));
                                                    t1136 = *(int *)(((int)stk + 84));
                                                    t1137 = *(int *)((t1135 + 0x0));
                                                    t1138 = *(int *)((((((t1136 << 1) + t1136) << 2) + t1134) + 0xEDC));
                                                    t1139 = getNearLineIndex(0x0, t1138, t1137, (((int)stk + 4) + 0x24), t1132);
                                                    u1128 = t1139;
                                                    u1129 = u1128;
                                                    *(float *)(((int)stk + 36)) = u1128;
                                                    u1140 = *(float *)(((int)stk + 32));
                                                    u1130 = u1140;
                                                    if (u1130 > u1129) {
                                                        *(float *)(((int)stk + 32)) = u1129;
                                                        t1141 = *(int *)(((int)stk + 84));
                                                        t1142 = *(int *)(((int)stk + 40));
                                                        t1143 = *(int *)0xC2A6690;
                                                        t1127 = t1143;
                                                        t1144 = ((((t1141 << 1) + t1141) << 2) + t1127);
                                                        t1127 = t1142;
                                                        t1145 = ((t1142 << 1) + t1127);
                                                        t1127 = 0xEDC;
                                                        t1127 = (t1127 + t1144);
                                                        t1146 = *(int *)((t1127 + 0x0));
                                                        t1127 = ((int)stk + 8);
                                                        t1127 = (t1127 + 0x38);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1127) = *(struct mv3 *)((t1146 + (t1145 << 2))); }
                                                        t1147 = t1127;
                                                    }
                                                    t1127 = t1147;
                                                    t1151 = *(int *)(((int)stk + 84));
                                                    t1127 = t1151;
                                                    t1127 = (t1127 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t1127;
                                                }
                                            } else {
                                                t1152 = *(int *)0xC1EE20C;
                                                if (t1152 == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1153 = 0xC1EE20C;
                                                    u1156 = 99999.8984f;
                                                    for (;;) {
                                                        t1157 = *(int *)(((int)stk + 84));
                                                        if ((int)t1157 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1153 = ((int)stk + 8);
                                                        t1153 = (t1153 + 0x14);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1153) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                        t1158 = *(int *)(((int)stk + 84));
                                                        t1153 = 0xC2A6690;
                                                        t1159 = *(int *)((t1153 + 0x0));
                                                        t1160 = *(int *)((((((t1158 << 1) + t1158) << 2) + t1159) + 0xEC8));
                                                        t1161 = *(int *)(((int)stk + 84));
                                                        t1162 = *(int *)((t1160 + 0x0));
                                                        t1163 = *(int *)((((((t1161 << 1) + t1161) << 2) + t1159) + 0xEC4));
                                                        t1164 = getNearLineIndex(0x0, t1163, t1162, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                        u1154 = t1164;
                                                        u1155 = u1154;
                                                        *(float *)(((int)stk + 12)) = u1154;
                                                        u1165 = *(float *)(((int)stk + 8));
                                                        u1156 = u1165;
                                                        if (u1156 > u1155) {
                                                            *(float *)(((int)stk + 8)) = u1155;
                                                            t1166 = *(int *)(((int)stk + 84));
                                                            t1167 = *(int *)(((int)stk + 40));
                                                            t1168 = *(int *)0xC2A6690;
                                                            t1153 = t1168;
                                                            t1169 = ((((t1166 << 1) + t1166) << 2) + t1153);
                                                            t1153 = t1167;
                                                            t1170 = ((t1167 << 1) + t1153);
                                                            t1153 = 0xEC4;
                                                            t1153 = (t1153 + t1169);
                                                            t1171 = *(int *)((t1153 + 0x0));
                                                            t1153 = ((int)stk + 8);
                                                            t1153 = (t1153 + 0x8);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1153) = *(struct mv3 *)((t1171 + (t1170 << 2))); }
                                                            t1172 = t1153;
                                                        }
                                                        t1153 = t1172;
                                                        t1176 = *(int *)(((int)stk + 84));
                                                        t1153 = t1176;
                                                        t1153 = (t1153 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1153;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    t1178 = *(int *)(((int)stk + 88));
                                                    t1179 = nlLength((((int)stk + 8) + 0x38), (t1178 + 0x78));
                                                    u1180 = *(float *)(((int)stk + 8));
                                                    if (t1179 > u1180) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((((int)stk + 8) + 0x8)); }
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            u1198 = *(float *)(((int)stk + 68));
                                            *(float *)(((int)stk + 68)) = (u1198 + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                        }
                                        t1204 = *(int *)0xC1EE20C;
                                        if (t1204 == 0) {
                                            *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((int)stk + 84)) = 0x0;
                                            t1205 = 0xFFFFFFFF;
                                            u1206 = u1201;
                                            u1208 = u1202;
                                            for (;;) {
                                                t1209 = *(int *)(((int)stk + 84));
                                                if ((int)t1209 >= (int)0xB) {
                                                    break;
                                                }
                                                t1210 = *(int *)(((int)stk + 88));
                                                t1211 = *(signed char *)(((int)stk + 84));
                                                t1212 = nlLength(((unsigned char)(((t1211 << 1) + t1211) << 2) + 0xC0E4A18), (t1210 + 0x78));
                                                u1206 = t1212;
                                                u1208 = 1.0f;
                                                u1206 = (u1206 * u1208);
                                                *(float *)(((int)stk + 44)) = u1206;
                                                u1213 = *(float *)(((int)stk + 48));
                                                u1207 = u1213;
                                                if (u1207 > u1206) {
                                                    u1214 = *(float *)(((int)stk + 44));
                                                    u1207 = u1214;
                                                    *(float *)(((int)stk + 48)) = u1207;
                                                    t1215 = *(int *)(((int)stk + 84));
                                                    *(unsigned int *)(((int)stk + 80)) = t1215;
                                                }
                                                t1219 = *(int *)(((int)stk + 84));
                                                t1205 = t1219;
                                                t1205 = (t1205 + 0x1);
                                                *(unsigned int *)(((int)stk + 84)) = t1205;
                                            }
                                            t1220 = *(int *)(((int)stk + 80));
                                            if (t1220 == -1) {
                                            } else {
                                                t1221 = *(signed char *)(((int)stk + 80));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((unsigned char)(((t1221 << 1) + t1221) << 2) + 0xC0E4A18)); }
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                        } else {
                                            t1231 = *(int *)0xC1EE20C;
                                            if (t1231 != 1) {
                                            } else {
                                                *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                t1232 = *(int *)0xC179490;
                                                if ((int)t1232 >= (int)0x11) {
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1233 = t1232;
                                                    u1234 = u1201;
                                                    u1236 = u1202;
                                                    for (;;) {
                                                        t1237 = *(int *)(((int)stk + 84));
                                                        if ((int)t1237 >= (int)0xA) {
                                                            break;
                                                        }
                                                        t1238 = *(int *)(((int)stk + 88));
                                                        t1239 = *(signed char *)(((int)stk + 84));
                                                        t1240 = nlLength(((signed char)(((t1239 << 1) + t1239) << 2) + 0xC0E4C70), (t1238 + 0x78));
                                                        u1234 = t1240;
                                                        u1236 = 1.0f;
                                                        u1234 = (u1234 * u1236);
                                                        *(float *)(((int)stk + 44)) = u1234;
                                                        u1241 = *(float *)(((int)stk + 48));
                                                        u1235 = u1241;
                                                        if (u1235 > u1234) {
                                                            u1242 = *(float *)(((int)stk + 44));
                                                            u1235 = u1242;
                                                            *(float *)(((int)stk + 48)) = u1235;
                                                            t1243 = *(int *)(((int)stk + 84));
                                                            *(unsigned int *)(((int)stk + 80)) = t1243;
                                                        }
                                                        t1247 = *(int *)(((int)stk + 80));
                                                        if (t1247 != -1) {
                                                            t1248 = *(signed char *)(((int)stk + 80));
                                                            t1233 = t1248;
                                                            t1249 = t1233;
                                                            t1233 = (t1233 << 1);
                                                            t1233 = (t1233 + t1249);
                                                            t1233 = (t1233 << 2);
                                                            t1233 = (signed char)t1233;
                                                            t1233 = (t1233 + 0xC0E4C70);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(t1233); }
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        } else {
                                                            u1253 = u1234;
                                                            u1254 = u1235;
                                                            u1255 = u1236;
                                                        }
                                                        u1234 = u1253;
                                                        u1235 = u1254;
                                                        u1236 = u1255;
                                                        t1257 = *(int *)(((int)stk + 84));
                                                        t1233 = t1257;
                                                        t1233 = (t1233 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1233;
                                                    }
                                                } else {
                                                    t1258 = *(int *)(((int)stk + 88));
                                                    u1259 = *(float *)((t1258 + 0x7C));
                                                    if (-40.0f > u1259) {
                                                        t1260 = 0x0;
                                                        u1261 = u1201;
                                                        u1262 = u1259;
                                                        u1263 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t1260;
                                                            if ((int)t1260 >= (int)0x1C) {
                                                                break;
                                                            }
                                                            t1264 = *(int *)(((int)stk + 88));
                                                            t1265 = *(short *)(((int)stk + 84));
                                                            t1266 = nlLength(((short)(((t1265 << 1) + t1265) << 2) + 0xC0E4B20), (t1264 + 0x78));
                                                            u1261 = t1266;
                                                            u1263 = 1.0f;
                                                            u1261 = (u1261 * u1263);
                                                            *(float *)(((int)stk + 44)) = u1261;
                                                            u1267 = *(float *)(((int)stk + 48));
                                                            u1262 = u1267;
                                                            if (u1262 > u1261) {
                                                                u1268 = *(float *)(((int)stk + 44));
                                                                u1262 = u1268;
                                                                *(float *)(((int)stk + 48)) = u1262;
                                                                t1269 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t1269;
                                                            }
                                                            t1273 = *(int *)(((int)stk + 80));
                                                            if (t1273 != -1) {
                                                                t1274 = *(short *)(((int)stk + 80));
                                                                t1260 = t1274;
                                                                t1275 = t1260;
                                                                t1260 = (t1260 << 1);
                                                                t1260 = (t1260 + t1275);
                                                                t1260 = (t1260 << 2);
                                                                t1260 = (short)t1260;
                                                                t1260 = (t1260 + 0xC0E4B20);
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(t1260); }
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            } else {
                                                                u1279 = u1261;
                                                                u1280 = u1262;
                                                                u1281 = u1263;
                                                            }
                                                            u1261 = u1279;
                                                            u1262 = u1280;
                                                            u1263 = u1281;
                                                            t1283 = *(int *)(((int)stk + 84));
                                                            t1260 = t1283;
                                                            t1260 = (t1260 + 0x1);
                                                        }
                                                    } else {
                                                        t1284 = 0x0;
                                                        u1285 = u1201;
                                                        u1286 = u1259;
                                                        u1287 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t1284;
                                                            if ((int)t1284 >= (int)0xB) {
                                                                break;
                                                            }
                                                            t1288 = *(int *)(((int)stk + 88));
                                                            t1289 = *(signed char *)(((int)stk + 84));
                                                            t1290 = nlLength(((unsigned char)(((t1289 << 1) + t1289) << 2) + 0xC0E4A9C), (t1288 + 0x78));
                                                            u1285 = t1290;
                                                            u1287 = 1.0f;
                                                            u1285 = (u1285 * u1287);
                                                            *(float *)(((int)stk + 44)) = u1285;
                                                            u1291 = *(float *)(((int)stk + 48));
                                                            u1286 = u1291;
                                                            if (u1286 > u1285) {
                                                                u1292 = *(float *)(((int)stk + 44));
                                                                u1286 = u1292;
                                                                *(float *)(((int)stk + 48)) = u1286;
                                                                t1293 = *(int *)(((int)stk + 84));
                                                                *(unsigned int *)(((int)stk + 80)) = t1293;
                                                            }
                                                            t1297 = *(int *)(((int)stk + 84));
                                                            t1284 = t1297;
                                                            t1284 = (t1284 + 0x1);
                                                        }
                                                        t1298 = *(int *)(((int)stk + 80));
                                                        if (t1298 != -1) {
                                                            t1299 = *(signed char *)(((int)stk + 80));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((unsigned char)(((t1299 << 1) + t1299) << 2) + 0xC0E4A9C)); }
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        u1339 = *(float *)(((int)stk + 48));
                                        *(float *)(((int)stk + 48)) = (u1339 - 50.0f);
                                        if ((u1339 - 50.0f) > 550.0f) {
                                            *(float *)(((int)stk + 48)) = 550.0f;
                                        }
                                        u1343 = *(float *)(((int)stk + 48));
                                        if (0.0f > u1343) {
                                            *(float *)(((int)stk + 48)) = 0.0f;
                                        }
                                        u1345 = *(float *)(((int)stk + 48));
                                        u1346 = *(float *)(((int)stk + 48));
                                        u1347 = 6.0f;
                                        u1347 = u1347 + 45.0f * (((550.0f - u1345) / 550.0f) * ((550.0f - u1346) / 550.0f));
                                        *(float *)0xC1798A4 = u1347;
                                        t1348 = *(int *)0xC0E4A14;
                                        if (t1348 == 0) {
                                        } else {
                                            *(float *)0xC1798A4 = 60.0f;
                                            t1349 = *(int *)(((int)stk + 88));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((t1349 + 0x78)); }
                                            t1350 = *(int *)(((int)stk + 88));
                                            t1351 = *(short *)((t1350 + 0xF4));
                                            t1352 = FUN_0c089de0((unsigned short)t1351);
                                            *(float *)(((int)stk + 52)) = (t1352 * 300.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            t1353 = *(int *)(((int)stk + 88));
                                            t1354 = *(short *)((t1353 + 0xF4));
                                            t1355 = FUN_0c089de8((unsigned short)t1354);
                                            *(float *)(((int)stk + 60)) = (t1355 * 300.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            t1357 = *(int *)0xC179490;
                                            if ((int)t1357 >= (int)0x14) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t1358 = (((int)stk + 8) + 0xC);
                                                u1361 = 99999.8984f;
                                                for (;;) {
                                                    t1362 = *(int *)(((int)stk + 84));
                                                    if ((int)t1362 >= (int)0x2) {
                                                        break;
                                                    }
                                                    t1358 = ((int)stk + 8);
                                                    t1358 = (t1358 + 0xC);
                                                    t1363 = t1358;
                                                    t1364 = *(int *)(((int)stk + 84));
                                                    t1358 = 0xC2A6690;
                                                    t1365 = *(int *)((t1358 + 0x0));
                                                    t1366 = *(int *)((((((t1364 << 1) + t1364) << 2) + t1365) + 0xEE0));
                                                    t1367 = *(int *)(((int)stk + 84));
                                                    t1368 = *(int *)((t1366 + 0x0));
                                                    t1369 = *(int *)((((((t1367 << 1) + t1367) << 2) + t1365) + 0xED0));
                                                    t1370 = getNearLineIndex(0x0, t1369, t1368, (((int)stk + 4) + 0x24), t1363);
                                                    u1359 = t1370;
                                                    u1360 = u1359;
                                                    *(float *)(((int)stk + 36)) = u1359;
                                                    u1371 = *(float *)(((int)stk + 32));
                                                    u1361 = u1371;
                                                    if (u1361 > u1360) {
                                                        *(float *)(((int)stk + 32)) = u1360;
                                                        t1372 = *(int *)(((int)stk + 84));
                                                        t1373 = *(int *)(((int)stk + 40));
                                                        t1374 = *(int *)0xC2A6690;
                                                        t1358 = t1374;
                                                        t1375 = ((((t1372 << 1) + t1372) << 2) + t1358);
                                                        t1358 = t1373;
                                                        t1376 = ((t1373 << 1) + t1358);
                                                        t1358 = 0xEDC;
                                                        t1358 = (t1358 + t1375);
                                                        t1377 = *(int *)((t1358 + 0x0));
                                                        t1358 = ((int)stk + 8);
                                                        t1358 = (t1358 + 0x38);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1358) = *(struct mv3 *)((t1377 + (t1376 << 2))); }
                                                        t1378 = t1358;
                                                    }
                                                    t1358 = t1378;
                                                    t1382 = *(int *)(((int)stk + 84));
                                                    t1358 = t1382;
                                                    t1358 = (t1358 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t1358;
                                                }
                                            } else {
                                                t1383 = *(int *)0xC1EE20C;
                                                if (t1383 == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1384 = 0xC1EE20C;
                                                    u1387 = 99999.8984f;
                                                    for (;;) {
                                                        t1388 = *(int *)(((int)stk + 84));
                                                        if ((int)t1388 >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1384 = ((int)stk + 8);
                                                        t1384 = (t1384 + 0x14);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1384) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                        t1389 = *(int *)(((int)stk + 84));
                                                        t1384 = 0xC2A6690;
                                                        t1390 = *(int *)((t1384 + 0x0));
                                                        t1391 = *(int *)((((((t1389 << 1) + t1389) << 2) + t1390) + 0xEC8));
                                                        t1392 = *(int *)(((int)stk + 84));
                                                        t1393 = *(int *)((t1391 + 0x0));
                                                        t1394 = *(int *)((((((t1392 << 1) + t1392) << 2) + t1390) + 0xEC4));
                                                        t1395 = getNearLineIndex(0x0, t1394, t1393, (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
                                                        u1385 = t1395;
                                                        u1386 = u1385;
                                                        *(float *)(((int)stk + 12)) = u1385;
                                                        u1396 = *(float *)(((int)stk + 8));
                                                        u1387 = u1396;
                                                        if (u1387 > u1386) {
                                                            *(float *)(((int)stk + 8)) = u1386;
                                                            t1397 = *(int *)(((int)stk + 84));
                                                            t1398 = *(int *)(((int)stk + 40));
                                                            t1399 = *(int *)0xC2A6690;
                                                            t1384 = t1399;
                                                            t1400 = ((((t1397 << 1) + t1397) << 2) + t1384);
                                                            t1384 = t1398;
                                                            t1401 = ((t1398 << 1) + t1384);
                                                            t1384 = 0xEC4;
                                                            t1384 = (t1384 + t1400);
                                                            t1402 = *(int *)((t1384 + 0x0));
                                                            t1384 = ((int)stk + 8);
                                                            t1384 = (t1384 + 0x8);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1384) = *(struct mv3 *)((t1402 + (t1401 << 2))); }
                                                            t1403 = t1384;
                                                        }
                                                        t1384 = t1403;
                                                        t1407 = *(int *)(((int)stk + 84));
                                                        t1384 = t1407;
                                                        t1384 = (t1384 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1384;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    t1409 = *(int *)(((int)stk + 88));
                                                    t1410 = nlLength((((int)stk + 8) + 0x38), (t1409 + 0x78));
                                                    u1411 = *(float *)(((int)stk + 8));
                                                    if (t1410 > u1411) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((((int)stk + 8) + 0x8)); }
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            u1429 = *(float *)(((int)stk + 68));
                                            *(float *)(((int)stk + 68)) = (u1429 + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x0);
                                            t1431 = *(int *)(((int)stk + 88));
                                            camSetTarget((t1431 + 0x78), 0x0);
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
        t1530 = *(int *)0xC0E4A14;
        if (t1530 != 0) {
            *(float *)0xC1798A4 = 60.0f;
            t1531 = *(int *)(((int)stk + 88));
            t1532 = *(signed char *)(((t1531 + 0x84) + 0x0));
            *(unsigned char *)0xC1798AC = t1532;
            t1533 = *(signed char *)(((t1531 + 0x84) + 0x1));
            *(unsigned char *)0xC1798AD = t1533;
            t1534 = *(signed char *)(((t1531 + 0x84) + 0x2));
            *(unsigned char *)0xC1798AE = t1534;
            t1535 = *(signed char *)(((t1531 + 0x84) + 0x3));
            *(unsigned char *)0xC1798AF = t1535;
            t1536 = *(signed char *)(((t1531 + 0x84) + 0x4));
            *(unsigned char *)0xC1798B0 = t1536;
            t1537 = *(signed char *)(((t1531 + 0x84) + 0x5));
            *(unsigned char *)0xC1798B1 = t1537;
            t1538 = *(int *)(((int)stk + 88));
            t1539 = *(short *)((t1538 + 0x88));
            t1540 = *(int *)(((int)stk + 88));
            t1541 = *(short *)((t1540 + 0x86));
            t1542 = *(int *)(((int)stk + 88));
            t1543 = *(short *)((t1542 + 0x84));
            camSetAngles((unsigned short)t1543, (unsigned short)t1541, (unsigned short)t1539, 0x0);
            nlPushUnitMatrix();
            t1546 = *(int *)(((int)stk + 88));
            nlTranslateV((t1546 + 0x78));
            t1548 = *(short *)0xC1798AE;
            nlRotateAY((unsigned short)t1548);
            t1550 = *(short *)0xC1798AC;
            nlRotateAX((unsigned short)t1550);
            *(float *)(((int)stk + 92)) = 0.0f;
            *(float *)(((int)stk + 96)) = 5.0f;
            *(float *)(((int)stk + 100)) = 17.0f;
            nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
            camSetTarget((((int)stk + 8) + 0x54), 0x0);
            SetCameraMode(0x1);
            nlPopMatrix(0x1);
            *(unsigned int *)0xC179954 = 0x28;
        }
        t1562 = *(int *)(((int)stk + 88));
        t1563 = *(short *)((t1562 + 0x86));
        FUN_0c02bb60(t1563, 0xC1798AE, 0.149999991f);
        t1565 = *(int *)(((int)stk + 88));
        t1566 = *(int *)((0x3B0 + t1565));
        if (t1566 == 4) {
            u1567 = *(float *)0xC179958;
            if (u1567 == 0.0f) {
                t1568 = *(int *)(((int)stk + 88));
                u1569 = *(float *)((0x15C + t1568));
                if (u1569 > -0.099999994f) {
                    t1570 = *(int *)(((int)stk + 88));
                    t1571 = *(int *)((0x120 + t1570));
                    if (t1571 != 0) {
                        *(unsigned int *)0xC179964 = 0x1;
                    } else {
                        *(unsigned int *)0xC179964 = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC179964 = 0x0;
                }
            }
            u1589 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1589 + 0.00999999978f);
            if ((u1589 + 0.00999999978f) > 0.149999991f) {
                *(float *)0xC179958 = 0.149999991f;
            }
        } else {
            u1592 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1592 - 0.00999999978f);
            if (0.0f > (u1592 - 0.00999999978f)) {
                *(float *)0xC179958 = 0.0f;
            }
        }
        t1601 = *(int *)(((int)stk + 88));
        u1602 = *(float *)((t1601 + 0x15C));
        if (u1602 > -0.099999994f) {
            t1603 = *(int *)(((int)stk + 88));
            u1604 = *(float *)((t1603 + 0x15C));
            if (0.099999994f > u1604) {
                t1605 = *(int *)(((int)stk + 88));
                *(volatile float *)((t1605 + 0x15C));
                t1607 = *(short *)((t1605 + 0xF4));
                FUN_0c02bb60(t1607, 0xC17995C, 0.149999991f);
            } else {
                u1609 = *(float *)0xC179958;
                if (u1609 == 0.0f) {
                    t1610 = *(int *)(((int)stk + 88));
                    t1611 = *(short *)((t1610 + 0xF4));
                    FUN_0c02bb60(t1611, 0xC17995C, 0.149999991f);
                } else {
                    t1613 = *(int *)(((int)stk + 88));
                    u1614 = *(float *)((t1613 + 0x15C));
                    if (0.0f > u1614) {
                        t1615 = *(int *)0xC179964;
                        if (t1615 != 0) {
                            t1616 = *(int *)(((int)stk + 88));
                            t1617 = *(short *)((t1616 + 0xF4));
                            *(unsigned short *)0xC17995C = (t1617 + 0x8000);
                        } else {
                            t1618 = *(int *)(((int)stk + 88));
                            t1619 = *(short *)((0xF4 + t1618));
                            *(unsigned short *)0xC17995C = t1619;
                        }
                    } else {
                        t1624 = *(int *)(((int)stk + 88));
                        t1625 = *(short *)((0xF4 + t1624));
                        *(unsigned short *)0xC17995C = t1625;
                    }
                }
            }
        } else {
            u1646 = *(float *)0xC179958;
            if (u1646 == 0.0f) {
                t1647 = *(int *)(((int)stk + 88));
                t1648 = *(short *)((t1647 + 0xF4));
                FUN_0c02bb60(t1648, 0xC17995C, 0.149999991f);
            } else {
                t1650 = *(int *)(((int)stk + 88));
                u1651 = *(float *)((t1650 + 0x15C));
                if (0.0f > u1651) {
                    t1652 = *(int *)0xC179964;
                    if (t1652 != 0) {
                        t1653 = *(int *)(((int)stk + 88));
                        t1654 = *(short *)((t1653 + 0xF4));
                        *(unsigned short *)0xC17995C = (t1654 + 0x8000);
                    } else {
                        t1655 = *(int *)(((int)stk + 88));
                        t1656 = *(short *)((0xF4 + t1655));
                        *(unsigned short *)0xC17995C = t1656;
                    }
                } else {
                    t1661 = *(int *)(((int)stk + 88));
                    t1662 = *(short *)((0xF4 + t1661));
                    *(unsigned short *)0xC17995C = t1662;
                }
            }
        }
        t1683 = *(short *)0xC17995C;
        u1684 = *(float *)0xC179958;
        FUN_0c02bb60(t1683, 0xC1798AE, u1684);
        t1686 = *(int *)(((int)stk + 88));
        t1687 = *(short *)((t1686 + 0x84));
        FUN_0c02bb60(t1687, 0xC1798AC, 0.099999994f);
        u1689 = *(float *)0xC179958;
        if (u1689 == 0.0f) {
            t1690 = *(int *)0xC179960;
            if (t1690 != 0) {
                t1691 = *(int *)(((int)stk + 88));
                t1692 = *(int *)((t1691 + 0x120));
                if (t1692 != 0) {
                    t1693 = *(int *)(((int)stk + 88));
                    u1694 = *(float *)((t1693 + 0x15C));
                    if (!(-0.099999994f > u1694)) {
                        *(unsigned int *)0xC179960 = 0x0;
                    }
                }
            } else {
                t1704 = *(int *)(((int)stk + 88));
                t1705 = *(int *)((0x120 + t1704));
                if (t1705 == 0) {
                    t1706 = *(int *)(((int)stk + 88));
                    u1707 = *(float *)((t1706 + 0x15C));
                    if (0.099999994f > u1707) {
                        *(unsigned int *)0xC179960 = 0x1;
                    }
                }
            }
        }
        t1731 = *(int *)0xC179960;
        if (t1731 != 0) {
            t1732 = *(int *)(((int)stk + 88));
            u1733 = *(float *)((t1732 + 0x15C));
            if (u1733 > 0.0f) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                t1734 = *(int *)(((int)stk + 88));
                u1735 = *(float *)((t1734 + 0x15C));
                *(float *)0xC0E4DD8 = u1735;
            }
            u1739 = *(float *)0xC0E4DD8;
            u1740 = *(float *)0xC1798B4;
            u1741 = *(float *)0xC1798B4;
            u1742 = u1741;
            u1742 = u1742 + 0.199999988f * ((5.0f - (u1739 * 5.0f)) - u1740);
            *(float *)0xC1798B4 = u1742;
        } else {
            t1743 = *(int *)(((int)stk + 88));
            u1744 = *(float *)((t1743 + 0x15C));
            if (0.0f > u1744) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                t1745 = *(int *)(((int)stk + 88));
                u1746 = *(float *)((t1745 + 0x15C));
                *(float *)0xC0E4DD8 = u1746;
            }
            u1750 = *(float *)0xC1798B4;
            u1751 = *(float *)0xC0E4DD8;
            u1752 = *(float *)0xC0E4D9C;
            u1753 = *(float *)0xC0E4E30;
            u1754 = *(float *)0xC0E4DA0;
            u1755 = (u1752 * u1753);
            u1755 = u1755 + u1754 * (u1751 - u1750);
            *(float *)0xC0E4E30 = u1755;
            u1756 = *(float *)0xC1798B4;
            *(float *)0xC1798B4 = (u1756 + u1755);
        }
        t1765 = *(int *)(((int)stk + 88));
        u1766 = *(float *)((t1765 + 0x80));
        u1767 = *(float *)((t1765 + 0x7C));
        u1768 = *(float *)((t1765 + 0x78));
        nlTranslate(u1768, u1767, u1766);
        t1770 = *(short *)0xC1798AE;
        nlRotateAY((unsigned short)t1770);
        t1772 = *(short *)0xC1798AC;
        nlRotateAX((unsigned short)t1772);
        t1774 = *(int *)(((int)stk + 88));
        u1775 = *(float *)((t1774 + 0x100));
        *(float *)0xC0E4DDC = u1775;
        u1776 = *(float *)0xC0E4DDC;
        if (u1776 > 0.0f) {
            *(float *)0xC0E4DDC = 0.0f;
        }
        *(float *)(((int)stk + 92)) = 0.0f;
        t1778 = *(int *)0xC179960;
        if (t1778 != 0) {
            *(float *)(((int)stk + 96)) = 5.0f;
            u1779 = *(float *)0xC0E4DD8;
            u1780 = *(float *)0xC0E4DA8;
            u1781 = 17.0f;
            u1781 = u1781 + u1780 * u1779;
            u1789 = u1781;
        } else {
            u1782 = *(float *)0xC0E4DDC;
            u1783 = *(float *)0xC0E4D98;
            u1784 = 5.0f;
            u1784 = u1784 + u1783 * u1782;
            *(float *)(((int)stk + 96)) = u1784;
            u1789 = 17.0f;
        }
        *(float *)(((int)stk + 100)) = u1789;
        nlSqrt((((int)stk + 8) + 0x54), 0xC179914);
        t1792 = *(int *)0xC179960;
        if (t1792 != 0) {
            u1793 = *(float *)0xC1798B4;
            u1794 = 15.0f;
            u1794 = u1794 + 0.466666609f * u1793;
            *(float *)(((int)stk + 96)) = u1794;
            u1795 = *(float *)0xC0E4DD8;
            u1796 = *(float *)0xC0E4DA4;
            u1797 = *(float *)0xC1798B4;
            *(float *)(((int)stk + 100)) = (((u1795 * u1796) - u1797) + -60.0f);
        } else {
            u1798 = *(float *)0xC1798B4;
            u1799 = *(float *)0xC0E4DDC;
            u1800 = *(float *)0xC0E4D90;
            u1801 = (u1798 * 0.333333313f);
            u1801 = u1801 + u1800 * u1799;
            *(float *)(((int)stk + 96)) = (u1801 + 15.0f);
            u1802 = *(float *)0xC0E4DDC;
            u1803 = *(float *)0xC0E4D94;
            u1804 = *(float *)0xC1798B4;
            *(float *)(((int)stk + 100)) = (((u1802 * u1803) - u1804) + -60.0f);
        }
        nlSqrt((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
        nlSubVector3op((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x54), 0xC179914);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(0xC179914); }
        GetCollision((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x44), 0.0f, 5.0f);
        camSetEye((((int)stk + 8) + 0x54), 0x2);
        t1817 = *(int *)0xC179954;
        if ((int)t1817 > 0) {
            t1818 = *(int *)0xC179954;
            if ((int)t1818 < (int)0xA) {
                SetCameraPosRatio(0.199999988f, 0.0f);
                u1822 = 0.199999988f;
            } else {
                SetCameraPosRatio(0.099999994f, 0.0f);
                u1822 = 0.099999994f;
            }
            SetCameraTargetRatio(u1822, 0.0f);
            t1825 = *(int *)0xC179954;
            *(unsigned int *)0xC179954 = (t1825 - 1);
        } else {
            SetCameraPosRatio(0.5f, 0.099999994f);
            SetCameraTargetRatio(0.799999952f, 0.299999982f);
        }
        t1832 = *(int *)(((int)stk + 88));
        t1833 = *(short *)((t1832 + 0x88));
        *(unsigned int *)0xC179948 = (int)((float)t1833 * 0.25f);
        SetCameraAngleRatio(0.125f, 0.125f);
        FUN_0c036378(0xC179928);
        SetCameraMode(0x1);
    }
    nlPopMatrix(0x1);
    t1847 = *(int *)(((int)stk + 88));
    *(unsigned int *)0xC0E49F8 = (t1847 + 0x78);
    t1848 = *(int *)(((int)stk + 88));
    *(unsigned int *)0xC0E49FC = (0x84 + t1848);
    *(unsigned int *)0xC0E4A00 = 0x0;
    *(unsigned int *)0xC0E4A14 = 0x0;
    FUN_0c077df0(0x3);
    nlUnitMatrix();
    u1851 = *(float *)0xC1798A4;
    u1852 = *(float *)0xC0E49F4;
    FUN_0c0792b0(((int)(((u1851 * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), u1852, 0.299999982f, 300.0f);
    *(float *)0xC0E49F4 = 1.33333325f;
    nlPushUnitMatrix();
    t1855 = *(int *)0xC1798B8;
    if (t1855 != 0) {
        if (t1855 == 1) {
            CalcHomingVector(0xC1798D0);
            CalcHomingVector(0xC1798FC);
            t1858 = *(int *)0xC179930;
            FUN_0c077890(0xC1798D0, 0xC1798FC, t1858);
            nlGetMatrix(0xC179864);
            nlInvertMatrix(0x0);
            GetAng4Mat((((int)stk + 8) + 0x44));
            t1863 = *(int *)(((int)stk + 76));
            t1864 = *(int *)0xC179928;
            *(unsigned int *)0xC179934 = (t1863 - t1864);
            t1865 = *(int *)0xC17992C;
            t1866 = *(int *)(((int)stk + 80));
            *(unsigned int *)0xC179938 = (t1866 - t1865);
            t1867 = *(int *)(((int)stk + 76));
            *(unsigned int *)0xC179928 = t1867;
            t1868 = *(int *)(((int)stk + 80));
            *(unsigned int *)0xC17992C = t1868;
            t1869 = nlLength(0xC1798D0, 0xC1798FC);
            *(float *)0xC0E4A04 = t1869;
        } else {
            if (t1855 == 2) {
                CalcHomingVector(0xC1798FC);
                FUN_0c036378(0xC179928);
                nlTranslateV(0xC1798FC);
                t1873 = *(int *)0xC17992C;
                nlRotateAY(t1873);
                t1875 = *(int *)0xC179928;
                nlRotateAX(t1875);
                t1877 = *(int *)0xC179930;
                nlRotateAZ(t1877);
                u1879 = *(float *)0xC0E4A04;
                nlTranslate(0.0f, 0.0f, u1879);
                nlGetTranslate((((int)stk + 8) + 0x44));
                nlSubVector3op(0xC1798DC, (((int)stk + 8) + 0x44), 0xC1798D0);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798D0) = *(struct mv3 *)((((int)stk + 8) + 0x44)); }
                nlInvertMatrix(0x0);
                nlGetMatrix(0xC179864);
            } else {
                if (t1855 != 4) {
                } else {
                    camSetEye(0xC179840, 0x0);
                    t1886 = *(short *)0xC17985A;
                    t1887 = *(short *)0xC17985C;
                    t1888 = *(short *)0xC179858;
                    camSetAngles((unsigned short)t1888, (unsigned short)t1886, (unsigned short)t1887, 0x0);
                    CalcHomingVector(0xC1798D0);
                    FUN_0c036378(0xC179928);
                    nlTranslateV(0xC1798D0);
                    t1893 = *(int *)0xC17992C;
                    nlRotateAY(t1893);
                    t1895 = *(int *)0xC179928;
                    nlRotateAX(t1895);
                    t1897 = *(int *)0xC179930;
                    nlRotateAZ(t1897);
                    nlPushMatrix(0x0);
                    u1900 = *(float *)0xC0E4A04;
                    nlTranslate(0.0f, 0.0f, (-u1900));
                    nlGetTranslate((((int)stk + 8) + 0x44));
                    nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798FC) = *(struct mv3 *)((((int)stk + 8) + 0x44)); }
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
        t1921 = *(int *)0xC17992C;
        nlRotateAY(t1921);
        t1923 = *(int *)0xC179928;
        nlRotateAX(t1923);
        t1925 = *(int *)0xC179930;
        nlRotateAZ(t1925);
        nlPushMatrix(0x0);
        u1928 = *(float *)0xC0E4A04;
        nlTranslate(0.0f, 0.0f, (-u1928));
        nlGetTranslate((((int)stk + 8) + 0x44));
        nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798FC) = *(struct mv3 *)((((int)stk + 8) + 0x44)); }
        nlPopMatrix(0x1);
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC179864);
    }
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179840) = *(struct mv3 *)(0xC1798D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC17984C) = *(struct mv3 *)(0xC1798FC); }
    t1941 = *(short *)0xC179928;
    *(unsigned short *)0xC179858 = t1941;
    t1942 = *(short *)0xC17992C;
    *(unsigned short *)0xC17985A = t1942;
    t1943 = *(short *)0xC179930;
    *(unsigned short *)0xC17985C = t1943;
    FUN_0c077df0(0x2);
    nlLoadMatrix(0xC179864);
    FUN_0c077df0(0x1);
    FUN_0c078ff0();
    u1948 = *(float *)0xC1798A4;
    t1949 = FUN_0c06b028(u1948);
    return t1949;
}
