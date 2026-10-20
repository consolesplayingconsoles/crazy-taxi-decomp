/* Straight-line functions with calls and guards (batch gen_bg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FUN_0c031492(int);
int FUN_0c05d6e0(void);
int FUN_0c05d852(void);
int FUN_0c0618da(void);
int FUN_0c070ede(int);
int FUN_0c0714f2(void);
int FUN_0c07159c(void);
int IsBoyFriend(int, int);
int Psg_SetPosPtr(int, int);
int Start_Proposal(int, int);
int camPlayScript(int);
int camRestore(void);
float drvAccelDot(void);
int nlProjectScreen3D(int);
int psgCallEnter(int, int, int);
int psgEnterState3(int);
int psgFrame(int);
int psgSetCurrent(int);
int psgSetState(int, int, int, int);
int Psg_Execute(int a4, float f4);

int Psg_Execute(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t15;
    int t18;
    int t21;
    int t22;
    int t25;
    int t26;
    float u27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t34;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t45;
    int t48;
    int t50;
    int t55;
    int t56;
    float t57;
    int t58;
    int t61;
    int t65;
    int t68;
    int t69;
    int t74;
    int t78;
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
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t106;
    int t108;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t124;
    int t126;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t138;
    int t140;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;
    int t181;
    int t183;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t199;
    int t201;
    int t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t213;
    int t215;
    int t236;
    int t237;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t245;
    int t246;
    int t247;
    int t248;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t256;
    int t260;
    int t262;
    int t271;
    int t272;
    int t273;
    int t274;
    int t275;
    int t278;
    int t280;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t292;
    int t294;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t320;
    int t321;
    int t322;
    int t323;
    int t324;
    int t325;
    int t326;
    int t327;
    int t328;
    int t329;
    int t330;
    int t331;
    int t335;
    int t337;
    int t346;
    int t347;
    int t348;
    int t349;
    int t350;
    int t353;
    int t355;
    int t360;
    int t361;
    int t362;
    int t363;
    int t364;
    int t367;
    int t369;
    int t392;
    int t410;
    int t411;
    int t412;
    int t413;
    int t414;
    int t421;
    float u422;
    int t423;
    int t424;
    int t425;
    int t426;
    int t430;
    int t431;
    int t432;
    int t435;
    int t437;
    int t438;
    int t444;
    int t448;
    int t457;
    float u459;
    int t460;
    int t461;
    int t463;
    int t464;
    int t465;
    int t466;
    int t467;
    int t468;
    int t469;
    int t470;
    int t471;
    int t472;
    int t473;
    int t474;
    int t475;
    int t476;
    int t483;
    int t484;
    int t485;
    int t486;
    int t487;
    int t488;
    int t489;
    int t492;
    int t493;
    int t494;
    int t495;
    int t496;
    int t497;
    int t498;
    int t499;
    int t500;
    int t501;
    int t502;
    int t504;
    int t505;
    int t506;
    int t507;
    int t508;
    int t527;
    int t528;
    int t529;
    int t530;
    int t531;
    int t542;
    int t543;
    int t544;
    int t545;
    int t546;
    int t561;
    int t562;
    int t563;
    int t564;
    int t565;
    int t580;
    int t581;
    int t582;
    int t583;
    int t584;
    int t601;
    int t602;
    int t603;
    int t606;
    int t607;
    int t608;
    int t615;
    int t616;
    int t617;
    int t618;
    int t619;
    int t620;
    int t621;
    int t622;
    int t623;
    int t624;
    int t625;
    int t626;
    int t627;
    int t628;
    int t629;
    int t630;
    int t631;
    int t632;
    int t633;
    int t634;
    int t635;
    int t636;
    int t637;
    int t638;
    int t639;
    int t640;
    float u641;
    int t642;
    float u644;
    int t645;
    int t646;
    int t647;
    float u650;
    int t651;
    int t652;
    int t653;
    float u656;
    int t657;
    int t658;
    int t659;
    float u669;
    int t670;
    float u672;
    int t673;
    int t674;
    int t675;
    float u678;
    int t679;
    int t680;
    int t681;
    float u684;
    int t685;
    int t686;
    int t687;
    int t695;
    int t696;
    int t697;
    int t698;
    float u699;
    int t700;
    float u702;
    int t703;
    int t704;
    int t705;
    float u708;
    int t709;
    int t710;
    int t711;
    float u714;
    int t715;
    int t716;
    int t717;
    int t728;
    int t729;
    int t730;
    int t731;
    int t732;
    int t733;
    int t734;
    int t737;
    int t738;
    int t739;
    int t740;
    int t741;
    int t742;
    int t743;
    int t744;
    int t745;
    int t746;
    int t747;
    int t749;
    int t750;
    int t751;
    int t752;
    int t753;
    int t772;
    int t773;
    int t774;
    int t775;
    int t776;
    int t787;
    int t788;
    int t789;
    int t790;
    int t791;
    int t806;
    int t807;
    int t808;
    int t809;
    int t810;
    int t825;
    int t826;
    int t827;
    int t828;
    int t829;
    int t846;
    int t847;
    int t848;
    int t851;
    int t852;
    int t853;
    int t860;
    int t862;
    int t863;
    int t864;
    int t865;
    int t866;
    int t867;
    int t868;
    float u869;
    int t870;
    float u872;
    int t873;
    int t874;
    int t875;
    float u878;
    int t879;
    int t880;
    int t881;
    float u884;
    int t885;
    int t886;
    int t887;
    float u897;
    int t898;
    float u900;
    int t901;
    int t902;
    int t903;
    float u906;
    int t907;
    int t908;
    int t909;
    float u912;
    int t913;
    int t914;
    int t915;
    int t923;
    int t924;
    int t925;
    int t926;
    float u927;
    int t928;
    float u930;
    int t931;
    int t932;
    int t933;
    float u936;
    int t937;
    int t938;
    int t939;
    float u942;
    int t943;
    int t944;
    int t945;
    int t956;
    int t957;
    int t958;
    int t959;
    int t960;
    int t961;
    int t962;
    int t965;
    int t966;
    int t967;
    int t968;
    int t969;
    int t970;
    int t971;
    int t972;
    int t973;
    int t974;
    int t975;
    int t977;
    int t978;
    int t979;
    int t980;
    int t981;
    int t1000;
    int t1001;
    int t1002;
    int t1003;
    int t1004;
    int t1015;
    int t1016;
    int t1017;
    int t1018;
    int t1019;
    int t1034;
    int t1035;
    int t1036;
    int t1037;
    int t1038;
    int t1053;
    int t1054;
    int t1055;
    int t1056;
    int t1057;
    int t1074;
    int t1075;
    int t1076;
    int t1079;
    int t1080;
    int t1081;
    int t1088;
    int t1090;
    int t1091;
    int t1092;
    int t1093;
    int t1094;
    int t1095;
    int t1096;
    float u1097;
    int t1098;
    float u1100;
    int t1101;
    int t1102;
    int t1103;
    float u1106;
    int t1107;
    int t1108;
    int t1109;
    float u1112;
    int t1113;
    int t1114;
    int t1115;
    float u1125;
    int t1126;
    float u1128;
    int t1129;
    int t1130;
    int t1131;
    float u1134;
    int t1135;
    int t1136;
    int t1137;
    float u1140;
    int t1141;
    int t1142;
    int t1143;
    int t1151;
    int t1152;
    int t1153;
    int t1154;
    float u1155;
    int t1156;
    float u1158;
    int t1159;
    int t1160;
    int t1161;
    float u1164;
    int t1165;
    int t1166;
    int t1167;
    float u1170;
    int t1171;
    int t1172;
    int t1173;
    int t1184;
    int t1185;
    int t1186;
    int t1187;
    int t1188;
    int t1189;
    int t1190;
    int t1193;
    int t1194;
    int t1195;
    int t1196;
    int t1197;
    int t1198;
    int t1199;
    int t1200;
    int t1201;
    int t1202;
    int t1203;
    int t1205;
    int t1206;
    int t1207;
    int t1208;
    int t1209;
    int t1228;
    int t1229;
    int t1230;
    int t1231;
    int t1232;
    int t1243;
    int t1244;
    int t1245;
    int t1246;
    int t1247;
    int t1262;
    int t1263;
    int t1264;
    int t1265;
    int t1266;
    int t1281;
    int t1282;
    int t1283;
    int t1284;
    int t1285;
    int t1302;
    int t1303;
    int t1304;
    int t1307;
    int t1308;
    int t1309;
    int t1316;
    int t1318;
    int t1319;
    int t1320;
    int t1321;
    int t1322;
    int t1323;
    int t1324;
    float u1325;
    int t1326;
    float u1328;
    int t1329;
    int t1330;
    int t1331;
    float u1334;
    int t1335;
    int t1336;
    int t1337;
    float u1340;
    int t1341;
    int t1342;
    int t1343;
    float u1353;
    int t1354;
    float u1356;
    int t1357;
    int t1358;
    int t1359;
    float u1362;
    int t1363;
    int t1364;
    int t1365;
    float u1368;
    int t1369;
    int t1370;
    int t1371;
    int t1379;
    int t1380;
    int t1381;
    int t1382;
    float u1383;
    int t1384;
    float u1386;
    int t1387;
    int t1388;
    int t1389;
    float u1392;
    int t1393;
    int t1394;
    int t1395;
    float u1398;
    int t1399;
    int t1400;
    int t1401;
    int t1412;
    int t1413;
    int t1414;
    int t1415;
    int t1416;
    int t1417;
    int t1418;
    int t1421;
    int t1422;
    int t1423;
    int t1424;
    int t1425;
    int t1426;
    int t1427;
    int t1428;
    int t1429;
    int t1430;
    int t1431;
    int t1433;
    int t1434;
    int t1435;
    int t1436;
    int t1437;
    int t1456;
    int t1457;
    int t1458;
    int t1459;
    int t1460;
    int t1471;
    int t1472;
    int t1473;
    int t1474;
    int t1475;
    int t1490;
    int t1491;
    int t1492;
    int t1493;
    int t1494;
    int t1509;
    int t1510;
    int t1511;
    int t1512;
    int t1513;
    int t1530;
    int t1531;
    int t1532;
    int t1535;
    int t1536;
    int t1537;
    int t1544;
    int t1546;
    int t1547;
    int t1548;
    int t1549;
    int t1550;
    int t1551;
    int t1552;
    float u1553;
    int t1554;
    float u1556;
    int t1557;
    int t1558;
    int t1559;
    float u1562;
    int t1563;
    int t1564;
    int t1565;
    float u1568;
    int t1569;
    int t1570;
    int t1571;
    float u1581;
    int t1582;
    float u1584;
    int t1585;
    int t1586;
    int t1587;
    float u1590;
    int t1591;
    int t1592;
    int t1593;
    float u1596;
    int t1597;
    int t1598;
    int t1599;
    int t1607;
    int t1608;
    int t1609;
    int t1610;
    float u1611;
    int t1612;
    float u1614;
    int t1615;
    int t1616;
    int t1617;
    float u1620;
    int t1621;
    int t1622;
    int t1623;
    float u1626;
    int t1627;
    int t1628;
    int t1629;
    int t1640;
    int t1641;
    int t1642;
    int t1643;
    int t1644;
    int t1645;
    int t1646;
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
    int t1661;
    int t1662;
    int t1663;
    int t1664;
    int t1665;
    int t1684;
    int t1685;
    int t1686;
    int t1687;
    int t1688;
    int t1699;
    int t1700;
    int t1701;
    int t1702;
    int t1703;
    int t1718;
    int t1719;
    int t1720;
    int t1721;
    int t1722;
    int t1737;
    int t1738;
    int t1739;
    int t1740;
    int t1741;
    int t1758;
    int t1759;
    int t1760;
    int t1763;
    int t1764;
    int t1765;
    int t1772;
    int t1778;
    int t1780;
    int t1783;
    int t1784;
    int t1775;
    int t1774;
    int t1773;
    int t1545;
    int t1317;
    int t1089;
    int t861;
    int stk[21];

    t0 = *(int *)((a4 + 0x174));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = *(int *)(((a4 + 0x1C) + 0x20));
                if (t1 != 3) {
                    *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                    t2 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                    *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t2 | 0x1);
                    t3 = *(signed char *)0xC2AD1DF;
                    *(unsigned char *)0xC2AD1DF = (t3 | 0x4);
                    t4 = *(signed char *)(((a4 + 0x1C) + 0x154));
                    *(float *)((((unsigned char)((unsigned short)t4 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)) = 0.0f;
                    t5 = *(signed char *)(((a4 + 0x1C) + 0x154));
                    *(unsigned int *)((((unsigned char)((unsigned short)t5 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = 0x0;
                    t6 = *(signed char *)(((a4 + 0x1C) + 0x154));
                    *(unsigned int *)((((unsigned char)((unsigned short)t6 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = 0x0;
                    *(unsigned int *)((((unsigned char)((unsigned short)t6 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = 0x0;
                    *(unsigned int *)((((unsigned char)((unsigned short)t6 * (unsigned short)0x1C) + 0xC2AE278) + 0x8)) = 0x0;
                    t7 = *(signed char *)(((a4 + 0x1C) + 0x154));
                    *(unsigned int *)((((unsigned char)((unsigned short)t7 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = 0x0;
                    *(unsigned int *)((((unsigned char)((unsigned short)t7 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = 0x0;
                    psgSetState((a4 + 0x1C), 0x3, 0xC2AE344, 0x0);
                    FUN_0c031492(0x1);
                    t10 = *(int *)0xC1EE20C;
                    if (t10 == 2) {
                        t11 = *(int *)0xC1EE214;
                        if (t11 == 14) {
                            FUN_0c05d6e0();
                        }
                    }
                    t15 = *(int *)0xC1EE234;
                    if (t15 == 1) {
                        FUN_0c0714f2();
                    }
                } else {
                    t18 = *(int *)0xC1EE234;
                    if (t18 == 1) {
                        FUN_0c07159c();
                    }
                    t21 = *(int *)0xC1EE7CC;
                    if ((int)t21 <= 0) {
                        t22 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                        *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t22 | 0x8);
                    }
                    t25 = *(signed char *)(((a4 + 0x1C) + 0x149));
                    if ((t25 & 8) != 0) {
                        t26 = *(int *)((a4 + 0x198));
                        u27 = *(float *)((t26 + 0x14));
                        if (!((u27 + 120.0f) > f4)) {
                            t28 = *(int *)0xC1EE794;
                            if ((int)t28 > 0) {
                                t29 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t29 | 0x10);
                                *(unsigned int *)0xC2AD1D8 = 0x0;
                                t30 = *(int *)0xC1EE7CC;
                                if ((int)t30 <= (int)0x1) {
                                    t31 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                    *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t31 & 0xFE);
                                    FUN_0c031492(0x3);
                                }
                            } else {
                                t34 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t34 & 0xEF);
                            }
                        } else {
                            t36 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                            *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t36 & 0xEF);
                        }
                    } else {
                        t38 = *(int *)0xC1EE7CC;
                        t39 = *(int *)0xC1EE7D4;
                        if ((int)t38 < (int)t39) {
                            t40 = *(int *)0xC1EE7D4;
                            t41 = *(int *)0xC1EE7CC;
                            if ((int)t41 <= (int)(t40 - 1)) {
                                t42 = *(int *)(((a4 + 0x1C) + 0x24));
                                if ((int)t42 >= (int)0x4) {
                                    if ((int)t42 > (int)0xA) {
                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x4;
                                        *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                        t43 = *(int *)(((a4 + 0x1C) + 0x24));
                                        psgEnterState3((a4 + 0x1C));
                                        t45 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                        *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t45 & 0xFE);
                                        *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x4;
                                    *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                    t48 = *(int *)(((a4 + 0x1C) + 0x24));
                                    psgEnterState3((a4 + 0x1C));
                                    t50 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                    *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t50 & 0xFE);
                                    *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                }
                            }
                        } else {
                            t55 = *(int *)(((a4 + 0x1C) + 0x24));
                            if (t55 != 13) {
                                if (t55 != 14) {
                                    t56 = *(int *)0xC1790EC;
                                    if (t56 != 0) {
                                        t57 = drvAccelDot();
                                        *(unsigned int *)(((int)stk + 16)) = 0xC1790CC;
                                        t58 = *(int *)0xC1790EC;
                                        if ((0x7FFE & t58) == 0) {
                                            if ((0x80000000 & t58) != 0) {
                                                if (-6.0f > t57) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xD;
                                                    psgEnterState3((a4 + 0x1C));
                                                    FUN_0c0618da();
                                                } else if (-4.0f > t57) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xD;
                                                    t61 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    psgEnterState3((a4 + 0x1C));
                                                    FUN_0c0618da();
                                                } else if (-2.0f > t57) {
                                                    FUN_0c0618da();
                                                }
                                            } else {
                                                t65 = *(int *)0xC1790EC;
                                                if ((t65 & 0x1F0000) != 0) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xE;
                                                    psgEnterState3((a4 + 0x1C));
                                                    FUN_0c0618da();
                                                } else {
                                                    t68 = *(int *)0xC1790EC;
                                                    if ((t68 & 0x20000) != 0) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xE;
                                                        t69 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgEnterState3((a4 + 0x1C));
                                                        FUN_0c0618da();
                                                    }
                                                }
                                            }
                                        } else if (-6.0f > t57) {
                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xD;
                                            psgEnterState3((a4 + 0x1C));
                                            FUN_0c0618da();
                                        } else if (-4.0f > t57) {
                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xD;
                                            t74 = *(int *)(((a4 + 0x1C) + 0x24));
                                            psgEnterState3((a4 + 0x1C));
                                            FUN_0c0618da();
                                        } else if (-2.0f > t57) {
                                            FUN_0c0618da();
                                        }
                                    } else {
                                        t78 = *(int *)(((a4 + 0x1C) + 0x24));
                                        if (t78 != 12) {
                                            t79 = *(int *)(((a4 + 0x1C) + 0x24));
                                            if (t79 != 11) {
                                                t80 = *(int *)0xC2AD010;
                                                if (t80 == 1) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xB;
                                                    psgEnterState3((a4 + 0x1C));
                                                } else {
                                                    t82 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t82 == 11) {
                                                        t83 = *(int *)0xC2AD010;
                                                        if (t83 != 1) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xC;
                                                            psgEnterState3((a4 + 0x1C));
                                                        } else {
                                                            t85 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t85 != 15) {
                                                                t86 = *(signed char *)(((a4 + 0x1C) + 0x14A));
                                                                if ((t86 & 1) == 0) {
                                                                    t87 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    if (t87 != 11) {
                                                                        t88 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        if (t88 != 12) {
                                                                            t89 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                            if (t89 != 1) {
                                                                                t90 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                if (t90 != 2) {
                                                                                    t91 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                    if (t91 != 3) {
                                                                                        t92 = *(int *)(((a4 + 0x1C) + 0x130));
                                                                                        t93 = (int)((int)t92 % (int)0x1A4);
                                                                                        if (t93 != 0x1A3) {
                                                                                            t94 = *(signed char *)(((a4 + 0x1C) + 0x14B));
                                                                                            if ((t94 & 1) == 0) {
                                                                                                t95 = *(int *)0xC1EE20C;
                                                                                                if (t95 != 2) {
                                                                                                    t96 = *(int *)0xC1EE234;
                                                                                                    if (t96 == 1) {
                                                                                                        t97 = *(signed char *)0xC1EE26D;
                                                                                                        if (t97 != 0) {
                                                                                                            t98 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                                            if ((t98 & 64) != 0) {
                                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                                t99 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                                t100 = *(signed char *)0xC1794E8;
                                                                                                                *(unsigned char *)0xC1794E8 = (t100 & (~(((int)t99 >= 0) ? (0x1 << (t99 & 31)) : ((-(int)t99 & 31) ? ((int)0x1 >> (-(int)t99 & 31)) : ((int)0x1 >> 31)))));
                                                                                                                if (f4 > 1500.0f) {
                                                                                                                    t101 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t101 & 0x7F);
                                                                                                                } else {
                                                                                                                    t102 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t102 | 0x80);
                                                                                                                }
                                                                                                                t106 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                                psgEnterState3((a4 + 0x1C));
                                                                                                                t108 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                                *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t108 & 0xFE);
                                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                t117 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                                if ((t117 & 64) != 0) {
                                                                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                    t118 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                    t119 = *(signed char *)0xC1794E8;
                                                                                                    *(unsigned char *)0xC1794E8 = (t119 & (~(((int)t118 >= 0) ? (0x1 << (t118 & 31)) : ((-(int)t118 & 31) ? ((int)0x1 >> (-(int)t118 & 31)) : ((int)0x1 >> 31)))));
                                                                                                    if (f4 > 1500.0f) {
                                                                                                        t120 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                        *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t120 & 0x7F);
                                                                                                    } else {
                                                                                                        t121 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                        *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t121 | 0x80);
                                                                                                    }
                                                                                                    t124 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                    psgEnterState3((a4 + 0x1C));
                                                                                                    t126 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                    *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t126 & 0xFE);
                                                                                                    *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            t131 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                            if ((t131 & 64) != 0) {
                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                t132 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                t133 = *(signed char *)0xC1794E8;
                                                                                                *(unsigned char *)0xC1794E8 = (t133 & (~(((int)t132 >= 0) ? (0x1 << (t132 & 31)) : ((-(int)t132 & 31) ? ((int)0x1 >> (-(int)t132 & 31)) : ((int)0x1 >> 31)))));
                                                                                                if (f4 > 1500.0f) {
                                                                                                    t134 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t134 & 0x7F);
                                                                                                } else {
                                                                                                    t135 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t135 | 0x80);
                                                                                                }
                                                                                                t138 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                psgEnterState3((a4 + 0x1C));
                                                                                                t140 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t140 & 0xFE);
                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
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
                                                        t160 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t160 != 15) {
                                                            t161 = *(signed char *)(((a4 + 0x1C) + 0x14A));
                                                            if ((t161 & 1) == 0) {
                                                                t162 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t162 != 11) {
                                                                    t163 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    if (t163 != 12) {
                                                                        t164 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        if (t164 != 1) {
                                                                            t165 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                            if (t165 != 2) {
                                                                                t166 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                if (t166 != 3) {
                                                                                    t167 = *(int *)(((a4 + 0x1C) + 0x130));
                                                                                    t168 = (int)((int)t167 % (int)0x1A4);
                                                                                    if (t168 != 0x1A3) {
                                                                                        t169 = *(signed char *)(((a4 + 0x1C) + 0x14B));
                                                                                        if ((t169 & 1) == 0) {
                                                                                            t170 = *(int *)0xC1EE20C;
                                                                                            if (t170 != 2) {
                                                                                                t171 = *(int *)0xC1EE234;
                                                                                                if (t171 == 1) {
                                                                                                    t172 = *(signed char *)0xC1EE26D;
                                                                                                    if (t172 != 0) {
                                                                                                        t173 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                                        if ((t173 & 64) != 0) {
                                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                            t174 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                            t175 = *(signed char *)0xC1794E8;
                                                                                                            *(unsigned char *)0xC1794E8 = (t175 & (~(((int)t174 >= 0) ? (0x1 << (t174 & 31)) : ((-(int)t174 & 31) ? ((int)0x1 >> (-(int)t174 & 31)) : ((int)0x1 >> 31)))));
                                                                                                            if (f4 > 1500.0f) {
                                                                                                                t176 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t176 & 0x7F);
                                                                                                            } else {
                                                                                                                t177 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t177 | 0x80);
                                                                                                            }
                                                                                                            t181 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                            psgEnterState3((a4 + 0x1C));
                                                                                                            t183 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                            *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t183 & 0xFE);
                                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            t192 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                            if ((t192 & 64) != 0) {
                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                t193 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                t194 = *(signed char *)0xC1794E8;
                                                                                                *(unsigned char *)0xC1794E8 = (t194 & (~(((int)t193 >= 0) ? (0x1 << (t193 & 31)) : ((-(int)t193 & 31) ? ((int)0x1 >> (-(int)t193 & 31)) : ((int)0x1 >> 31)))));
                                                                                                if (f4 > 1500.0f) {
                                                                                                    t195 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t195 & 0x7F);
                                                                                                } else {
                                                                                                    t196 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t196 | 0x80);
                                                                                                }
                                                                                                t199 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                psgEnterState3((a4 + 0x1C));
                                                                                                t201 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t201 & 0xFE);
                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        t206 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                        if ((t206 & 64) != 0) {
                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                            t207 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                            t208 = *(signed char *)0xC1794E8;
                                                                                            *(unsigned char *)0xC1794E8 = (t208 & (~(((int)t207 >= 0) ? (0x1 << (t207 & 31)) : ((-(int)t207 & 31) ? ((int)0x1 >> (-(int)t207 & 31)) : ((int)0x1 >> 31)))));
                                                                                            if (f4 > 1500.0f) {
                                                                                                t209 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t209 & 0x7F);
                                                                                            } else {
                                                                                                t210 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t210 | 0x80);
                                                                                            }
                                                                                            t213 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                            psgEnterState3((a4 + 0x1C));
                                                                                            t215 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                            *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t215 & 0xFE);
                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
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
                                                }
                                            } else {
                                                t236 = *(int *)(((a4 + 0x1C) + 0x24));
                                                if (t236 == 11) {
                                                    t237 = *(int *)0xC2AD010;
                                                    if (t237 != 1) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0xC;
                                                        psgEnterState3((a4 + 0x1C));
                                                    } else {
                                                        t239 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t239 != 15) {
                                                            t240 = *(signed char *)(((a4 + 0x1C) + 0x14A));
                                                            if ((t240 & 1) == 0) {
                                                                t241 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t241 != 11) {
                                                                    t242 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    if (t242 != 12) {
                                                                        t243 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        if (t243 != 1) {
                                                                            t244 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                            if (t244 != 2) {
                                                                                t245 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                if (t245 != 3) {
                                                                                    t246 = *(int *)(((a4 + 0x1C) + 0x130));
                                                                                    t247 = (int)((int)t246 % (int)0x1A4);
                                                                                    if (t247 != 0x1A3) {
                                                                                        t248 = *(signed char *)(((a4 + 0x1C) + 0x14B));
                                                                                        if ((t248 & 1) == 0) {
                                                                                            t249 = *(int *)0xC1EE20C;
                                                                                            if (t249 != 2) {
                                                                                                t250 = *(int *)0xC1EE234;
                                                                                                if (t250 == 1) {
                                                                                                    t251 = *(signed char *)0xC1EE26D;
                                                                                                    if (t251 != 0) {
                                                                                                        t252 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                                        if ((t252 & 64) != 0) {
                                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                            t253 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                            t254 = *(signed char *)0xC1794E8;
                                                                                                            *(unsigned char *)0xC1794E8 = (t254 & (~(((int)t253 >= 0) ? (0x1 << (t253 & 31)) : ((-(int)t253 & 31) ? ((int)0x1 >> (-(int)t253 & 31)) : ((int)0x1 >> 31)))));
                                                                                                            if (f4 > 1500.0f) {
                                                                                                                t255 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t255 & 0x7F);
                                                                                                            } else {
                                                                                                                t256 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t256 | 0x80);
                                                                                                            }
                                                                                                            t260 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                            psgEnterState3((a4 + 0x1C));
                                                                                                            t262 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                            *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t262 & 0xFE);
                                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            t271 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                            if ((t271 & 64) != 0) {
                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                t272 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                t273 = *(signed char *)0xC1794E8;
                                                                                                *(unsigned char *)0xC1794E8 = (t273 & (~(((int)t272 >= 0) ? (0x1 << (t272 & 31)) : ((-(int)t272 & 31) ? ((int)0x1 >> (-(int)t272 & 31)) : ((int)0x1 >> 31)))));
                                                                                                if (f4 > 1500.0f) {
                                                                                                    t274 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t274 & 0x7F);
                                                                                                } else {
                                                                                                    t275 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                    *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t275 | 0x80);
                                                                                                }
                                                                                                t278 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                psgEnterState3((a4 + 0x1C));
                                                                                                t280 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t280 & 0xFE);
                                                                                                *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        t285 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                        if ((t285 & 64) != 0) {
                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                            t286 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                            t287 = *(signed char *)0xC1794E8;
                                                                                            *(unsigned char *)0xC1794E8 = (t287 & (~(((int)t286 >= 0) ? (0x1 << (t286 & 31)) : ((-(int)t286 & 31) ? ((int)0x1 >> (-(int)t286 & 31)) : ((int)0x1 >> 31)))));
                                                                                            if (f4 > 1500.0f) {
                                                                                                t288 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t288 & 0x7F);
                                                                                            } else {
                                                                                                t289 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t289 | 0x80);
                                                                                            }
                                                                                            t292 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                            psgEnterState3((a4 + 0x1C));
                                                                                            t294 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                            *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t294 & 0xFE);
                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
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
                                                    t314 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t314 != 15) {
                                                        t315 = *(signed char *)(((a4 + 0x1C) + 0x14A));
                                                        if ((t315 & 1) == 0) {
                                                            t316 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t316 != 11) {
                                                                t317 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t317 != 12) {
                                                                    t318 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    if (t318 != 1) {
                                                                        t319 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        if (t319 != 2) {
                                                                            t320 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                            if (t320 != 3) {
                                                                                t321 = *(int *)(((a4 + 0x1C) + 0x130));
                                                                                t322 = (int)((int)t321 % (int)0x1A4);
                                                                                if (t322 != 0x1A3) {
                                                                                    t323 = *(signed char *)(((a4 + 0x1C) + 0x14B));
                                                                                    if ((t323 & 1) == 0) {
                                                                                        t324 = *(int *)0xC1EE20C;
                                                                                        if (t324 != 2) {
                                                                                            t325 = *(int *)0xC1EE234;
                                                                                            if (t325 == 1) {
                                                                                                t326 = *(signed char *)0xC1EE26D;
                                                                                                if (t326 != 0) {
                                                                                                    t327 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                                    if ((t327 & 64) != 0) {
                                                                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                                        t328 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                        t329 = *(signed char *)0xC1794E8;
                                                                                                        *(unsigned char *)0xC1794E8 = (t329 & (~(((int)t328 >= 0) ? (0x1 << (t328 & 31)) : ((-(int)t328 & 31) ? ((int)0x1 >> (-(int)t328 & 31)) : ((int)0x1 >> 31)))));
                                                                                                        if (f4 > 1500.0f) {
                                                                                                            t330 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                            *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t330 & 0x7F);
                                                                                                        } else {
                                                                                                            t331 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                            *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t331 | 0x80);
                                                                                                        }
                                                                                                        t335 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                                        psgEnterState3((a4 + 0x1C));
                                                                                                        t337 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                                        *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t337 & 0xFE);
                                                                                                        *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        t346 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                        if ((t346 & 64) != 0) {
                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                            t347 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                            t348 = *(signed char *)0xC1794E8;
                                                                                            *(unsigned char *)0xC1794E8 = (t348 & (~(((int)t347 >= 0) ? (0x1 << (t347 & 31)) : ((-(int)t347 & 31) ? ((int)0x1 >> (-(int)t347 & 31)) : ((int)0x1 >> 31)))));
                                                                                            if (f4 > 1500.0f) {
                                                                                                t349 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t349 & 0x7F);
                                                                                            } else {
                                                                                                t350 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t350 | 0x80);
                                                                                            }
                                                                                            t353 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                            psgEnterState3((a4 + 0x1C));
                                                                                            t355 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                            *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t355 & 0xFE);
                                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    t360 = *(signed char *)(((a4 + 0x1C) + 0x149));
                                                                                    if ((t360 & 64) != 0) {
                                                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                                        t361 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                        t362 = *(signed char *)0xC1794E8;
                                                                                        *(unsigned char *)0xC1794E8 = (t362 & (~(((int)t361 >= 0) ? (0x1 << (t361 & 31)) : ((-(int)t361 & 31) ? ((int)0x1 >> (-(int)t361 & 31)) : ((int)0x1 >> 31)))));
                                                                                        if (f4 > 1500.0f) {
                                                                                            t363 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                            *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t363 & 0x7F);
                                                                                        } else {
                                                                                            t364 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                                                                                            *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t364 | 0x80);
                                                                                        }
                                                                                        t367 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                                        psgEnterState3((a4 + 0x1C));
                                                                                        t369 = *(signed char *)(((0x14B + (a4 + 0x1C)) + 0x0));
                                                                                        *(unsigned char *)(((0x14B + (a4 + 0x1C)) + 0x0)) = (t369 & 0xFE);
                                                                                        *(unsigned int *)(((a4 + 0x1C) + 0x130)) = 0x0;
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
                                            }
                                        }
                                    }
                                    t392 = *(int *)(((a4 + 0x1C) + 0x130));
                                    *(unsigned int *)(((a4 + 0x1C) + 0x130)) = (t392 + 0x1);
                                }
                            }
                        }
                    }
                }
            } else {
                if (t0 == 3) {
                    t410 = *(int *)0xC1EE7CC;
                    t411 = *(int *)0xC1EE7D4;
                    if ((int)t410 <= (int)t411) {
                        t412 = *(int *)(((a4 + 0x1C) + 0x20));
                        if (t412 != 3) {
                            t413 = *(int *)(((a4 + 0x1C) + 0x20));
                            if (t413 != 5) {
                                t414 = *(int *)0xC1EE234;
                                if (t414 == 1) {
                                    FUN_0c07159c();
                                }
                                psgSetState((a4 + 0x1C), 0x5, 0xC2AE344, 0x0);
                            }
                        }
                    }
                    t421 = *(int *)((a4 + 0x198));
                    u422 = *(float *)((t421 + 0x14));
                    if ((u422 + 120.0f) > f4) {
                        t423 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                        *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t423 & 0xEF);
                    } else {
                        t424 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                        *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t424 | 0x10);
                        *(unsigned int *)0xC2AD1D8 = 0x0;
                        t425 = *(int *)0xC1EE7CC;
                        if ((int)t425 <= (int)0x1) {
                            t426 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                            *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t426 & 0xFE);
                            FUN_0c031492(0x3);
                        }
                    }
                } else {
                    if (t0 == 4) {
                        t430 = *(int *)(((a4 + 0x1C) + 0x20));
                        if (t430 != 4) {
                            t431 = *(int *)0xC2AD590;
                            *(unsigned int *)0xC2AD590 = (t431 | 0x2);
                            t432 = *(int *)((a4 + 0x198));
                            psgSetState((a4 + 0x1C), 0x4, (t432 + 0x4), 0x0);
                            Drv_StartAction(0x4, (a4 + 0x1C), 0x0);
                            t435 = *(int *)0xC1EE234;
                            if (t435 == 1) {
                                FUN_0c05d852();
                                t437 = *(int *)0xC1EE20C;
                                if (t437 == 2) {
                                    t438 = *(int *)0xC1EE214;
                                    if (t438 != 10) {
                                        camPlayScript((a4 + 0x1C));
                                    }
                                } else {
                                    camPlayScript((a4 + 0x1C));
                                }
                            }
                            t444 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                            *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t444 & 0xFE);
                            FUN_0c031492(0x2);
                            *(unsigned int *)0xC2AD1D8 = 0x0;
                        }
                    } else {
                        if (t0 != 5) {
                            if (t0 == 6) {
                                FUN_0c070ede((a4 + 0x1C));
                                t448 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t448 & 0xFE);
                            }
                        }
                    }
                }
            }
            psgSetCurrent((a4 + 0x1C));
            t457 = psgFrame((a4 + 0x1C));
            t1775 = t457;
        } else {
            nlProjectScreen3D(((a4 + 0x1C) + 0x4));
            u459 = *(float *)(((int)stk + 28));
            if (u459 > 0.0f) {
                t460 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t460 & 0xEF);
            } else {
                t461 = *(signed char *)(((0x14A + (a4 + 0x1C)) + 0x0));
                *(unsigned char *)(((0x14A + (a4 + 0x1C)) + 0x0)) = (t461 | 0x10);
            }
            t463 = *(int *)(((a4 + 0x1C) + 0x20));
            if (t463 != 0) {
                if (t463 == 1) {
                    t464 = *(int *)0xC1EE20C;
                    if (t464 == 2) {
                        t465 = *(int *)0xC1EE214;
                        if (t465 == 8) {
                            t466 = *(int *)(((a4 + 0x1C) + 0x0));
                            t467 = IsBoyFriend(t466, 0x0);
                            if (t467 == 0) {
                                t468 = *(int *)(((a4 + 0x1C) + 0x154));
                                t469 = (int)((int)t468 % (int)0x5);
                                t470 = *(int *)((0xC1794D4 + (t469 << 2)));
                                t471 = *(int *)((t470 + 0x3C));
                                if (t471 == 4) {
                                    t472 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                    *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t472 | 0x20);
                                    t473 = *(int *)((((a4 + 0x1C) + 0x4) + 0x8));
                                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t473;
                                    t474 = *(int *)((((a4 + 0x1C) + 0x4) + 0x4));
                                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t474;
                                    t475 = *(int *)((((a4 + 0x1C) + 0x4) + 0x0));
                                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t475;
                                    t476 = *(int *)(((a4 + 0x1C) + 0x154));
                                    Start_Proposal(t476, 0x1);
                                }
                            }
                        }
                    }
                }
                t483 = *(int *)((a4 + 0x14));
                t484 = *(int *)((t483 + 0x0));
                if (t484 == 5) {
                    t485 = *(int *)0xC2AD010;
                    if (t485 != 2) {
                        t486 = *(int *)0xC1EE234;
                        if (t486 == 1) {
                            t487 = *(int *)0xC179860;
                            if (t487 != 10) {
                                t488 = *(int *)0xC2A4E50;
                                if (t488 == 0) {
                                    t489 = *(int *)0xC179860;
                                    if (t489 == 11) {
                                        camRestore();
                                    }
                                    t492 = *(signed char *)0xC1794E8;
                                    if (t492 == 0) {
                                        t493 = *(int *)0xC1EE20C;
                                        if (t493 == 2) {
                                            t494 = *(int *)0xC1EE214;
                                            if (t494 != 10) {
                                                t495 = *(int *)0xC1EE20C;
                                                if (t495 == 2) {
                                                    t496 = *(int *)0xC1EE214;
                                                    if (t496 != 11) {
                                                        t497 = *(int *)0xC1EE20C;
                                                        if (t497 == 2) {
                                                            t498 = *(int *)0xC1EE214;
                                                            if (t498 == 8) {
                                                                t499 = *(int *)0xC1EE20C;
                                                                if (t499 == 2) {
                                                                    t500 = *(int *)0xC1EE214;
                                                                    if (t500 == 8) {
                                                                        t501 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        t502 = *(int *)((0xC2A9908 + (t501 << 2)));
                                                                        if (t502 == 0) {
                                                                            camPlayScript((a4 + 0x1C));
                                                                            t504 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                            t505 = *(signed char *)0xC1794E8;
                                                                            *(unsigned char *)0xC1794E8 = (t505 | (((int)t504 >= 0) ? (0x1 << (t504 & 31)) : ((-(int)t504 & 31) ? ((int)0x1 >> (-(int)t504 & 31)) : ((int)0x1 >> 31))));
                                                                            t506 = *(int *)0xC1EE20C;
                                                                            if (t506 == 2) {
                                                                                t507 = *(int *)0xC1EE214;
                                                                                if (t507 == 8) {
                                                                                    t508 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                    *(unsigned int *)(((t508 << 2) + 0xC2A9908)) = 0x1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                camPlayScript((a4 + 0x1C));
                                                                t527 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                t528 = *(signed char *)0xC1794E8;
                                                                *(unsigned char *)0xC1794E8 = (t528 | (((int)t527 >= 0) ? (0x1 << (t527 & 31)) : ((-(int)t527 & 31) ? ((int)0x1 >> (-(int)t527 & 31)) : ((int)0x1 >> 31))));
                                                                t529 = *(int *)0xC1EE20C;
                                                                if (t529 == 2) {
                                                                    t530 = *(int *)0xC1EE214;
                                                                    if (t530 == 8) {
                                                                        t531 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        *(unsigned int *)(((t531 << 2) + 0xC2A9908)) = 0x1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            camPlayScript((a4 + 0x1C));
                                                            t542 = *(int *)(((a4 + 0x1C) + 0x154));
                                                            t543 = *(signed char *)0xC1794E8;
                                                            *(unsigned char *)0xC1794E8 = (t543 | (((int)t542 >= 0) ? (0x1 << (t542 & 31)) : ((-(int)t542 & 31) ? ((int)0x1 >> (-(int)t542 & 31)) : ((int)0x1 >> 31))));
                                                            t544 = *(int *)0xC1EE20C;
                                                            if (t544 == 2) {
                                                                t545 = *(int *)0xC1EE214;
                                                                if (t545 == 8) {
                                                                    t546 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                    *(unsigned int *)(((t546 << 2) + 0xC2A9908)) = 0x1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    camPlayScript((a4 + 0x1C));
                                                    t561 = *(int *)(((a4 + 0x1C) + 0x154));
                                                    t562 = *(signed char *)0xC1794E8;
                                                    *(unsigned char *)0xC1794E8 = (t562 | (((int)t561 >= 0) ? (0x1 << (t561 & 31)) : ((-(int)t561 & 31) ? ((int)0x1 >> (-(int)t561 & 31)) : ((int)0x1 >> 31))));
                                                    t563 = *(int *)0xC1EE20C;
                                                    if (t563 == 2) {
                                                        t564 = *(int *)0xC1EE214;
                                                        if (t564 == 8) {
                                                            t565 = *(int *)(((a4 + 0x1C) + 0x154));
                                                            *(unsigned int *)(((t565 << 2) + 0xC2A9908)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            camPlayScript((a4 + 0x1C));
                                            t580 = *(int *)(((a4 + 0x1C) + 0x154));
                                            t581 = *(signed char *)0xC1794E8;
                                            *(unsigned char *)0xC1794E8 = (t581 | (((int)t580 >= 0) ? (0x1 << (t580 & 31)) : ((-(int)t580 & 31) ? ((int)0x1 >> (-(int)t580 & 31)) : ((int)0x1 >> 31))));
                                            t582 = *(int *)0xC1EE20C;
                                            if (t582 == 2) {
                                                t583 = *(int *)0xC1EE214;
                                                if (t583 == 8) {
                                                    t584 = *(int *)(((a4 + 0x1C) + 0x154));
                                                    *(unsigned int *)(((t584 << 2) + 0xC2A9908)) = 0x1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    t601 = *(int *)(((a4 + 0x1C) + 0x20));
                    if (t601 != 2) {
                        t602 = *(int *)0xC2AD590;
                        *(unsigned int *)0xC2AD590 = (t602 | 0x1);
                        t603 = *(int *)(((a4 + 0x1C) + 0x24));
                        if (t603 != 2) {
                            psgSetState((a4 + 0x1C), 0x2, 0x0, 0x0);
                            Drv_StartAction(0x2, (a4 + 0x1C), 0x0);
                            *(unsigned int *)0xC2AD1D8 = (a4 + 0x1C);
                            t606 = *(int *)0xC1EE234;
                            if (t606 == 1) {
                                t607 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t607 | 0x1);
                                t608 = *(int *)(((a4 + 0x1C) + 0x140));
                                *(unsigned int *)0xC0E49DC = t608;
                                FUN_0c031492(0x0);
                            }
                        }
                    }
                }
                psgSetCurrent((a4 + 0x1C));
                t615 = psgFrame((a4 + 0x1C));
                t1774 = t615;
            } else {
                t616 = *(int *)0xC1EE20C;
                if (t616 == 2) {
                    t617 = *(int *)0xC1EE214;
                    if (t617 == 8) {
                        t618 = *(int *)(((a4 + 0x1C) + 0x0));
                        t619 = IsBoyFriend(t618, 0x0);
                        if (t619 == 0) {
                            t620 = *(int *)(((a4 + 0x1C) + 0x154));
                            t621 = (int)((int)t620 % (int)0x5);
                            t622 = *(int *)((0xC1794D4 + (t621 << 2)));
                            t623 = *(int *)((t622 + 0x3C));
                            if (t623 == 4) {
                                t624 = *(int *)(((a4 + 0x1C) + 0x154));
                                t625 = (int)((int)t624 % (int)0x5);
                                t626 = *(int *)((0xC1794D4 + (t625 << 2)));
                                t627 = *(int *)((0x40 + t626));
                                if (t627 == 2) {
                                    t628 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                    *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t628 | 0x20);
                                    t629 = *(int *)((((a4 + 0x1C) + 0x4) + 0x8));
                                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t629;
                                    t630 = *(int *)((((a4 + 0x1C) + 0x4) + 0x4));
                                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t630;
                                    t631 = *(int *)((((a4 + 0x1C) + 0x4) + 0x0));
                                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t631;
                                    t632 = *(int *)(((a4 + 0x1C) + 0x154));
                                    t633 = Start_Proposal(t632, 0x1);
                                    t861 = t633;
                                } else {
                                    t634 = *(int *)((a4 + 0x14));
                                    *(unsigned int *)(((int)stk + 20)) = t634;
                                    t635 = *(int *)((t634 + 0x0));
                                    *(unsigned int *)(((int)stk + 24)) = t635;
                                    if (t635 != 4) {
                                        t636 = *(int *)(((int)stk + 24));
                                        if (t636 == 5) {
                                            t637 = *(int *)0xC1EE20C;
                                            if (t637 == 2) {
                                                t638 = *(int *)0xC1EE214;
                                                if (t638 == 8) {
                                                    t639 = *(int *)(((a4 + 0x1C) + 0x0));
                                                    t640 = IsBoyFriend(t639, 0x0);
                                                    if (t640 == 0) {
                                                        u641 = *(float *)0xC13EEE0;
                                                        if (u641 > f4) {
                                                            t642 = *(int *)((a4 + 0x14));
                                                            psgSetState((a4 + 0x1C), 0x1, (t642 + 0x8), 0x0);
                                                        } else {
                                                            u644 = *(float *)0xC13EEDC;
                                                            if (u644 > f4) {
                                                                t645 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t645 != 2) {
                                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                                    t646 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                    t647 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    psgCallEnter((a4 + 0x1C), t646, t647);
                                                                }
                                                            } else {
                                                                u650 = *(float *)0xC13EED8;
                                                                if (u650 > f4) {
                                                                    t651 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    if (t651 != 1) {
                                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                        t652 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                        t653 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        psgCallEnter((a4 + 0x1C), t652, t653);
                                                                    }
                                                                } else {
                                                                    u656 = *(float *)0xC13EED4;
                                                                    if (u656 > f4) {
                                                                        t657 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        if (t657 != 0) {
                                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                            t658 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                            t659 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                            psgCallEnter((a4 + 0x1C), t658, t659);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            u669 = *(float *)0xC13EEE0;
                                            if (u669 > f4) {
                                                t670 = *(int *)((a4 + 0x14));
                                                psgSetState((a4 + 0x1C), 0x1, (t670 + 0x8), 0x0);
                                            } else {
                                                u672 = *(float *)0xC13EEDC;
                                                if (u672 > f4) {
                                                    t673 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t673 != 2) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                        t674 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t675 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t674, t675);
                                                    }
                                                } else {
                                                    u678 = *(float *)0xC13EED8;
                                                    if (u678 > f4) {
                                                        t679 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t679 != 1) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                            t680 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t681 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t680, t681);
                                                        }
                                                    } else {
                                                        u684 = *(float *)0xC13EED4;
                                                        if (u684 > f4) {
                                                            t685 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t685 != 0) {
                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                t686 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                t687 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                psgCallEnter((a4 + 0x1C), t686, t687);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        t695 = *(int *)0xC1EE20C;
                                        if (t695 == 2) {
                                            t696 = *(int *)0xC1EE214;
                                            if (t696 == 8) {
                                                t697 = *(int *)(((a4 + 0x1C) + 0x0));
                                                t698 = IsBoyFriend(t697, 0x0);
                                                if (t698 == 0) {
                                                    u699 = *(float *)0xC13EEE0;
                                                    if (u699 > f4) {
                                                        t700 = *(int *)((a4 + 0x14));
                                                        psgSetState((a4 + 0x1C), 0x1, (t700 + 0x8), 0x0);
                                                    } else {
                                                        u702 = *(float *)0xC13EEDC;
                                                        if (u702 > f4) {
                                                            t703 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t703 != 2) {
                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                                t704 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                t705 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                psgCallEnter((a4 + 0x1C), t704, t705);
                                                            }
                                                        } else {
                                                            u708 = *(float *)0xC13EED8;
                                                            if (u708 > f4) {
                                                                t709 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t709 != 1) {
                                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                    t710 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                    t711 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    psgCallEnter((a4 + 0x1C), t710, t711);
                                                                }
                                                            } else {
                                                                u714 = *(float *)0xC13EED4;
                                                                if (u714 > f4) {
                                                                    t715 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    if (t715 != 0) {
                                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                        t716 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                        t717 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        psgCallEnter((a4 + 0x1C), t716, t717);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    t728 = *(int *)((a4 + 0x14));
                                    t729 = *(int *)((t728 + 0x0));
                                    if (t729 == 5) {
                                        t730 = *(int *)0xC2AD010;
                                        if (t730 != 2) {
                                            t731 = *(int *)0xC1EE234;
                                            if (t731 == 1) {
                                                t732 = *(int *)0xC179860;
                                                if (t732 != 10) {
                                                    t733 = *(int *)0xC2A4E50;
                                                    if (t733 == 0) {
                                                        t734 = *(int *)0xC179860;
                                                        if (t734 == 11) {
                                                            camRestore();
                                                        }
                                                        t737 = *(signed char *)0xC1794E8;
                                                        if (t737 == 0) {
                                                            t738 = *(int *)0xC1EE20C;
                                                            if (t738 == 2) {
                                                                t739 = *(int *)0xC1EE214;
                                                                if (t739 != 10) {
                                                                    t740 = *(int *)0xC1EE20C;
                                                                    if (t740 == 2) {
                                                                        t741 = *(int *)0xC1EE214;
                                                                        if (t741 != 11) {
                                                                            t742 = *(int *)0xC1EE20C;
                                                                            if (t742 == 2) {
                                                                                t743 = *(int *)0xC1EE214;
                                                                                if (t743 == 8) {
                                                                                    t744 = *(int *)0xC1EE20C;
                                                                                    if (t744 == 2) {
                                                                                        t745 = *(int *)0xC1EE214;
                                                                                        if (t745 == 8) {
                                                                                            t746 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                            t747 = *(int *)((0xC2A9908 + (t746 << 2)));
                                                                                            if (t747 == 0) {
                                                                                                camPlayScript((a4 + 0x1C));
                                                                                                t749 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                t750 = *(signed char *)0xC1794E8;
                                                                                                *(unsigned char *)0xC1794E8 = (t750 | (((int)t749 >= 0) ? (0x1 << (t749 & 31)) : ((-(int)t749 & 31) ? ((int)0x1 >> (-(int)t749 & 31)) : ((int)0x1 >> 31))));
                                                                                                t751 = *(int *)0xC1EE20C;
                                                                                                if (t751 == 2) {
                                                                                                    t752 = *(int *)0xC1EE214;
                                                                                                    if (t752 == 8) {
                                                                                                        t753 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                        *(unsigned int *)(((t753 << 2) + 0xC2A9908)) = 0x1;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    camPlayScript((a4 + 0x1C));
                                                                                    t772 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                    t773 = *(signed char *)0xC1794E8;
                                                                                    *(unsigned char *)0xC1794E8 = (t773 | (((int)t772 >= 0) ? (0x1 << (t772 & 31)) : ((-(int)t772 & 31) ? ((int)0x1 >> (-(int)t772 & 31)) : ((int)0x1 >> 31))));
                                                                                    t774 = *(int *)0xC1EE20C;
                                                                                    if (t774 == 2) {
                                                                                        t775 = *(int *)0xC1EE214;
                                                                                        if (t775 == 8) {
                                                                                            t776 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                            *(unsigned int *)(((t776 << 2) + 0xC2A9908)) = 0x1;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                camPlayScript((a4 + 0x1C));
                                                                                t787 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                t788 = *(signed char *)0xC1794E8;
                                                                                *(unsigned char *)0xC1794E8 = (t788 | (((int)t787 >= 0) ? (0x1 << (t787 & 31)) : ((-(int)t787 & 31) ? ((int)0x1 >> (-(int)t787 & 31)) : ((int)0x1 >> 31))));
                                                                                t789 = *(int *)0xC1EE20C;
                                                                                if (t789 == 2) {
                                                                                    t790 = *(int *)0xC1EE214;
                                                                                    if (t790 == 8) {
                                                                                        t791 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                        *(unsigned int *)(((t791 << 2) + 0xC2A9908)) = 0x1;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        camPlayScript((a4 + 0x1C));
                                                                        t806 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        t807 = *(signed char *)0xC1794E8;
                                                                        *(unsigned char *)0xC1794E8 = (t807 | (((int)t806 >= 0) ? (0x1 << (t806 & 31)) : ((-(int)t806 & 31) ? ((int)0x1 >> (-(int)t806 & 31)) : ((int)0x1 >> 31))));
                                                                        t808 = *(int *)0xC1EE20C;
                                                                        if (t808 == 2) {
                                                                            t809 = *(int *)0xC1EE214;
                                                                            if (t809 == 8) {
                                                                                t810 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                *(unsigned int *)(((t810 << 2) + 0xC2A9908)) = 0x1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                camPlayScript((a4 + 0x1C));
                                                                t825 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                t826 = *(signed char *)0xC1794E8;
                                                                *(unsigned char *)0xC1794E8 = (t826 | (((int)t825 >= 0) ? (0x1 << (t825 & 31)) : ((-(int)t825 & 31) ? ((int)0x1 >> (-(int)t825 & 31)) : ((int)0x1 >> 31))));
                                                                t827 = *(int *)0xC1EE20C;
                                                                if (t827 == 2) {
                                                                    t828 = *(int *)0xC1EE214;
                                                                    if (t828 == 8) {
                                                                        t829 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        *(unsigned int *)(((t829 << 2) + 0xC2A9908)) = 0x1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        t846 = *(int *)(((a4 + 0x1C) + 0x20));
                                        if (t846 != 2) {
                                            t847 = *(int *)0xC2AD590;
                                            *(unsigned int *)0xC2AD590 = (t847 | 0x1);
                                            t848 = *(int *)(((a4 + 0x1C) + 0x24));
                                            if (t848 != 2) {
                                                psgSetState((a4 + 0x1C), 0x2, 0x0, 0x0);
                                                Drv_StartAction(0x2, (a4 + 0x1C), 0x0);
                                                *(unsigned int *)0xC2AD1D8 = (a4 + 0x1C);
                                                t851 = *(int *)0xC1EE234;
                                                if (t851 == 1) {
                                                    t852 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                                    *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t852 | 0x1);
                                                    t853 = *(int *)(((a4 + 0x1C) + 0x140));
                                                    *(unsigned int *)0xC0E49DC = t853;
                                                    FUN_0c031492(0x0);
                                                }
                                            }
                                        }
                                    }
                                    psgSetCurrent((a4 + 0x1C));
                                    t860 = psgFrame((a4 + 0x1C));
                                    t861 = t860;
                                }
                                t1089 = t861;
                            } else {
                                t862 = *(int *)((a4 + 0x14));
                                *(unsigned int *)(((int)stk + 20)) = t862;
                                t863 = *(int *)((t862 + 0x0));
                                *(unsigned int *)(((int)stk + 24)) = t863;
                                if (t863 != 4) {
                                    t864 = *(int *)(((int)stk + 24));
                                    if (t864 == 5) {
                                        t865 = *(int *)0xC1EE20C;
                                        if (t865 == 2) {
                                            t866 = *(int *)0xC1EE214;
                                            if (t866 == 8) {
                                                t867 = *(int *)(((a4 + 0x1C) + 0x0));
                                                t868 = IsBoyFriend(t867, 0x0);
                                                if (t868 == 0) {
                                                    u869 = *(float *)0xC13EEE0;
                                                    if (u869 > f4) {
                                                        t870 = *(int *)((a4 + 0x14));
                                                        psgSetState((a4 + 0x1C), 0x1, (t870 + 0x8), 0x0);
                                                    } else {
                                                        u872 = *(float *)0xC13EEDC;
                                                        if (u872 > f4) {
                                                            t873 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t873 != 2) {
                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                                t874 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                t875 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                psgCallEnter((a4 + 0x1C), t874, t875);
                                                            }
                                                        } else {
                                                            u878 = *(float *)0xC13EED8;
                                                            if (u878 > f4) {
                                                                t879 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t879 != 1) {
                                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                    t880 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                    t881 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    psgCallEnter((a4 + 0x1C), t880, t881);
                                                                }
                                                            } else {
                                                                u884 = *(float *)0xC13EED4;
                                                                if (u884 > f4) {
                                                                    t885 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    if (t885 != 0) {
                                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                        t886 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                        t887 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                        psgCallEnter((a4 + 0x1C), t886, t887);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        u897 = *(float *)0xC13EEE0;
                                        if (u897 > f4) {
                                            t898 = *(int *)((a4 + 0x14));
                                            psgSetState((a4 + 0x1C), 0x1, (t898 + 0x8), 0x0);
                                        } else {
                                            u900 = *(float *)0xC13EEDC;
                                            if (u900 > f4) {
                                                t901 = *(int *)(((a4 + 0x1C) + 0x24));
                                                if (t901 != 2) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                    t902 = *(int *)(((a4 + 0x1C) + 0x20));
                                                    t903 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    psgCallEnter((a4 + 0x1C), t902, t903);
                                                }
                                            } else {
                                                u906 = *(float *)0xC13EED8;
                                                if (u906 > f4) {
                                                    t907 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t907 != 1) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                        t908 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t909 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t908, t909);
                                                    }
                                                } else {
                                                    u912 = *(float *)0xC13EED4;
                                                    if (u912 > f4) {
                                                        t913 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t913 != 0) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                            t914 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t915 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t914, t915);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t923 = *(int *)0xC1EE20C;
                                    if (t923 == 2) {
                                        t924 = *(int *)0xC1EE214;
                                        if (t924 == 8) {
                                            t925 = *(int *)(((a4 + 0x1C) + 0x0));
                                            t926 = IsBoyFriend(t925, 0x0);
                                            if (t926 == 0) {
                                                u927 = *(float *)0xC13EEE0;
                                                if (u927 > f4) {
                                                    t928 = *(int *)((a4 + 0x14));
                                                    psgSetState((a4 + 0x1C), 0x1, (t928 + 0x8), 0x0);
                                                } else {
                                                    u930 = *(float *)0xC13EEDC;
                                                    if (u930 > f4) {
                                                        t931 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t931 != 2) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                            t932 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t933 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t932, t933);
                                                        }
                                                    } else {
                                                        u936 = *(float *)0xC13EED8;
                                                        if (u936 > f4) {
                                                            t937 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t937 != 1) {
                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                t938 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                t939 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                psgCallEnter((a4 + 0x1C), t938, t939);
                                                            }
                                                        } else {
                                                            u942 = *(float *)0xC13EED4;
                                                            if (u942 > f4) {
                                                                t943 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t943 != 0) {
                                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                    t944 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                    t945 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    psgCallEnter((a4 + 0x1C), t944, t945);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                t956 = *(int *)((a4 + 0x14));
                                t957 = *(int *)((t956 + 0x0));
                                if (t957 == 5) {
                                    t958 = *(int *)0xC2AD010;
                                    if (t958 != 2) {
                                        t959 = *(int *)0xC1EE234;
                                        if (t959 == 1) {
                                            t960 = *(int *)0xC179860;
                                            if (t960 != 10) {
                                                t961 = *(int *)0xC2A4E50;
                                                if (t961 == 0) {
                                                    t962 = *(int *)0xC179860;
                                                    if (t962 == 11) {
                                                        camRestore();
                                                    }
                                                    t965 = *(signed char *)0xC1794E8;
                                                    if (t965 == 0) {
                                                        t966 = *(int *)0xC1EE20C;
                                                        if (t966 == 2) {
                                                            t967 = *(int *)0xC1EE214;
                                                            if (t967 != 10) {
                                                                t968 = *(int *)0xC1EE20C;
                                                                if (t968 == 2) {
                                                                    t969 = *(int *)0xC1EE214;
                                                                    if (t969 != 11) {
                                                                        t970 = *(int *)0xC1EE20C;
                                                                        if (t970 == 2) {
                                                                            t971 = *(int *)0xC1EE214;
                                                                            if (t971 == 8) {
                                                                                t972 = *(int *)0xC1EE20C;
                                                                                if (t972 == 2) {
                                                                                    t973 = *(int *)0xC1EE214;
                                                                                    if (t973 == 8) {
                                                                                        t974 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                        t975 = *(int *)((0xC2A9908 + (t974 << 2)));
                                                                                        if (t975 == 0) {
                                                                                            camPlayScript((a4 + 0x1C));
                                                                                            t977 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                            t978 = *(signed char *)0xC1794E8;
                                                                                            *(unsigned char *)0xC1794E8 = (t978 | (((int)t977 >= 0) ? (0x1 << (t977 & 31)) : ((-(int)t977 & 31) ? ((int)0x1 >> (-(int)t977 & 31)) : ((int)0x1 >> 31))));
                                                                                            t979 = *(int *)0xC1EE20C;
                                                                                            if (t979 == 2) {
                                                                                                t980 = *(int *)0xC1EE214;
                                                                                                if (t980 == 8) {
                                                                                                    t981 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                    *(unsigned int *)(((t981 << 2) + 0xC2A9908)) = 0x1;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                camPlayScript((a4 + 0x1C));
                                                                                t1000 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                t1001 = *(signed char *)0xC1794E8;
                                                                                *(unsigned char *)0xC1794E8 = (t1001 | (((int)t1000 >= 0) ? (0x1 << (t1000 & 31)) : ((-(int)t1000 & 31) ? ((int)0x1 >> (-(int)t1000 & 31)) : ((int)0x1 >> 31))));
                                                                                t1002 = *(int *)0xC1EE20C;
                                                                                if (t1002 == 2) {
                                                                                    t1003 = *(int *)0xC1EE214;
                                                                                    if (t1003 == 8) {
                                                                                        t1004 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                        *(unsigned int *)(((t1004 << 2) + 0xC2A9908)) = 0x1;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            camPlayScript((a4 + 0x1C));
                                                                            t1015 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                            t1016 = *(signed char *)0xC1794E8;
                                                                            *(unsigned char *)0xC1794E8 = (t1016 | (((int)t1015 >= 0) ? (0x1 << (t1015 & 31)) : ((-(int)t1015 & 31) ? ((int)0x1 >> (-(int)t1015 & 31)) : ((int)0x1 >> 31))));
                                                                            t1017 = *(int *)0xC1EE20C;
                                                                            if (t1017 == 2) {
                                                                                t1018 = *(int *)0xC1EE214;
                                                                                if (t1018 == 8) {
                                                                                    t1019 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                    *(unsigned int *)(((t1019 << 2) + 0xC2A9908)) = 0x1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    camPlayScript((a4 + 0x1C));
                                                                    t1034 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                    t1035 = *(signed char *)0xC1794E8;
                                                                    *(unsigned char *)0xC1794E8 = (t1035 | (((int)t1034 >= 0) ? (0x1 << (t1034 & 31)) : ((-(int)t1034 & 31) ? ((int)0x1 >> (-(int)t1034 & 31)) : ((int)0x1 >> 31))));
                                                                    t1036 = *(int *)0xC1EE20C;
                                                                    if (t1036 == 2) {
                                                                        t1037 = *(int *)0xC1EE214;
                                                                        if (t1037 == 8) {
                                                                            t1038 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                            *(unsigned int *)(((t1038 << 2) + 0xC2A9908)) = 0x1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            camPlayScript((a4 + 0x1C));
                                                            t1053 = *(int *)(((a4 + 0x1C) + 0x154));
                                                            t1054 = *(signed char *)0xC1794E8;
                                                            *(unsigned char *)0xC1794E8 = (t1054 | (((int)t1053 >= 0) ? (0x1 << (t1053 & 31)) : ((-(int)t1053 & 31) ? ((int)0x1 >> (-(int)t1053 & 31)) : ((int)0x1 >> 31))));
                                                            t1055 = *(int *)0xC1EE20C;
                                                            if (t1055 == 2) {
                                                                t1056 = *(int *)0xC1EE214;
                                                                if (t1056 == 8) {
                                                                    t1057 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                    *(unsigned int *)(((t1057 << 2) + 0xC2A9908)) = 0x1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    t1074 = *(int *)(((a4 + 0x1C) + 0x20));
                                    if (t1074 != 2) {
                                        t1075 = *(int *)0xC2AD590;
                                        *(unsigned int *)0xC2AD590 = (t1075 | 0x1);
                                        t1076 = *(int *)(((a4 + 0x1C) + 0x24));
                                        if (t1076 != 2) {
                                            psgSetState((a4 + 0x1C), 0x2, 0x0, 0x0);
                                            Drv_StartAction(0x2, (a4 + 0x1C), 0x0);
                                            *(unsigned int *)0xC2AD1D8 = (a4 + 0x1C);
                                            t1079 = *(int *)0xC1EE234;
                                            if (t1079 == 1) {
                                                t1080 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                                *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t1080 | 0x1);
                                                t1081 = *(int *)(((a4 + 0x1C) + 0x140));
                                                *(unsigned int *)0xC0E49DC = t1081;
                                                FUN_0c031492(0x0);
                                            }
                                        }
                                    }
                                }
                                psgSetCurrent((a4 + 0x1C));
                                t1088 = psgFrame((a4 + 0x1C));
                                t1089 = t1088;
                            }
                            t1317 = t1089;
                        } else {
                            t1090 = *(int *)((a4 + 0x14));
                            *(unsigned int *)(((int)stk + 20)) = t1090;
                            t1091 = *(int *)((t1090 + 0x0));
                            *(unsigned int *)(((int)stk + 24)) = t1091;
                            if (t1091 != 4) {
                                t1092 = *(int *)(((int)stk + 24));
                                if (t1092 == 5) {
                                    t1093 = *(int *)0xC1EE20C;
                                    if (t1093 == 2) {
                                        t1094 = *(int *)0xC1EE214;
                                        if (t1094 == 8) {
                                            t1095 = *(int *)(((a4 + 0x1C) + 0x0));
                                            t1096 = IsBoyFriend(t1095, 0x0);
                                            if (t1096 == 0) {
                                                u1097 = *(float *)0xC13EEE0;
                                                if (u1097 > f4) {
                                                    t1098 = *(int *)((a4 + 0x14));
                                                    psgSetState((a4 + 0x1C), 0x1, (t1098 + 0x8), 0x0);
                                                } else {
                                                    u1100 = *(float *)0xC13EEDC;
                                                    if (u1100 > f4) {
                                                        t1101 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t1101 != 2) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                            t1102 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t1103 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t1102, t1103);
                                                        }
                                                    } else {
                                                        u1106 = *(float *)0xC13EED8;
                                                        if (u1106 > f4) {
                                                            t1107 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t1107 != 1) {
                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                                t1108 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                t1109 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                psgCallEnter((a4 + 0x1C), t1108, t1109);
                                                            }
                                                        } else {
                                                            u1112 = *(float *)0xC13EED4;
                                                            if (u1112 > f4) {
                                                                t1113 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                if (t1113 != 0) {
                                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                    t1114 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                    t1115 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                    psgCallEnter((a4 + 0x1C), t1114, t1115);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    u1125 = *(float *)0xC13EEE0;
                                    if (u1125 > f4) {
                                        t1126 = *(int *)((a4 + 0x14));
                                        psgSetState((a4 + 0x1C), 0x1, (t1126 + 0x8), 0x0);
                                    } else {
                                        u1128 = *(float *)0xC13EEDC;
                                        if (u1128 > f4) {
                                            t1129 = *(int *)(((a4 + 0x1C) + 0x24));
                                            if (t1129 != 2) {
                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                t1130 = *(int *)(((a4 + 0x1C) + 0x20));
                                                t1131 = *(int *)(((a4 + 0x1C) + 0x24));
                                                psgCallEnter((a4 + 0x1C), t1130, t1131);
                                            }
                                        } else {
                                            u1134 = *(float *)0xC13EED8;
                                            if (u1134 > f4) {
                                                t1135 = *(int *)(((a4 + 0x1C) + 0x24));
                                                if (t1135 != 1) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                    t1136 = *(int *)(((a4 + 0x1C) + 0x20));
                                                    t1137 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    psgCallEnter((a4 + 0x1C), t1136, t1137);
                                                }
                                            } else {
                                                u1140 = *(float *)0xC13EED4;
                                                if (u1140 > f4) {
                                                    t1141 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t1141 != 0) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                        t1142 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t1143 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t1142, t1143);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t1151 = *(int *)0xC1EE20C;
                                if (t1151 == 2) {
                                    t1152 = *(int *)0xC1EE214;
                                    if (t1152 == 8) {
                                        t1153 = *(int *)(((a4 + 0x1C) + 0x0));
                                        t1154 = IsBoyFriend(t1153, 0x0);
                                        if (t1154 == 0) {
                                            u1155 = *(float *)0xC13EEE0;
                                            if (u1155 > f4) {
                                                t1156 = *(int *)((a4 + 0x14));
                                                psgSetState((a4 + 0x1C), 0x1, (t1156 + 0x8), 0x0);
                                            } else {
                                                u1158 = *(float *)0xC13EEDC;
                                                if (u1158 > f4) {
                                                    t1159 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t1159 != 2) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                        t1160 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t1161 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t1160, t1161);
                                                    }
                                                } else {
                                                    u1164 = *(float *)0xC13EED8;
                                                    if (u1164 > f4) {
                                                        t1165 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t1165 != 1) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                            t1166 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t1167 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t1166, t1167);
                                                        }
                                                    } else {
                                                        u1170 = *(float *)0xC13EED4;
                                                        if (u1170 > f4) {
                                                            t1171 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t1171 != 0) {
                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                t1172 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                t1173 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                psgCallEnter((a4 + 0x1C), t1172, t1173);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            t1184 = *(int *)((a4 + 0x14));
                            t1185 = *(int *)((t1184 + 0x0));
                            if (t1185 == 5) {
                                t1186 = *(int *)0xC2AD010;
                                if (t1186 != 2) {
                                    t1187 = *(int *)0xC1EE234;
                                    if (t1187 == 1) {
                                        t1188 = *(int *)0xC179860;
                                        if (t1188 != 10) {
                                            t1189 = *(int *)0xC2A4E50;
                                            if (t1189 == 0) {
                                                t1190 = *(int *)0xC179860;
                                                if (t1190 == 11) {
                                                    camRestore();
                                                }
                                                t1193 = *(signed char *)0xC1794E8;
                                                if (t1193 == 0) {
                                                    t1194 = *(int *)0xC1EE20C;
                                                    if (t1194 == 2) {
                                                        t1195 = *(int *)0xC1EE214;
                                                        if (t1195 != 10) {
                                                            t1196 = *(int *)0xC1EE20C;
                                                            if (t1196 == 2) {
                                                                t1197 = *(int *)0xC1EE214;
                                                                if (t1197 != 11) {
                                                                    t1198 = *(int *)0xC1EE20C;
                                                                    if (t1198 == 2) {
                                                                        t1199 = *(int *)0xC1EE214;
                                                                        if (t1199 == 8) {
                                                                            t1200 = *(int *)0xC1EE20C;
                                                                            if (t1200 == 2) {
                                                                                t1201 = *(int *)0xC1EE214;
                                                                                if (t1201 == 8) {
                                                                                    t1202 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                    t1203 = *(int *)((0xC2A9908 + (t1202 << 2)));
                                                                                    if (t1203 == 0) {
                                                                                        camPlayScript((a4 + 0x1C));
                                                                                        t1205 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                        t1206 = *(signed char *)0xC1794E8;
                                                                                        *(unsigned char *)0xC1794E8 = (t1206 | (((int)t1205 >= 0) ? (0x1 << (t1205 & 31)) : ((-(int)t1205 & 31) ? ((int)0x1 >> (-(int)t1205 & 31)) : ((int)0x1 >> 31))));
                                                                                        t1207 = *(int *)0xC1EE20C;
                                                                                        if (t1207 == 2) {
                                                                                            t1208 = *(int *)0xC1EE214;
                                                                                            if (t1208 == 8) {
                                                                                                t1209 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                                *(unsigned int *)(((t1209 << 2) + 0xC2A9908)) = 0x1;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            camPlayScript((a4 + 0x1C));
                                                                            t1228 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                            t1229 = *(signed char *)0xC1794E8;
                                                                            *(unsigned char *)0xC1794E8 = (t1229 | (((int)t1228 >= 0) ? (0x1 << (t1228 & 31)) : ((-(int)t1228 & 31) ? ((int)0x1 >> (-(int)t1228 & 31)) : ((int)0x1 >> 31))));
                                                                            t1230 = *(int *)0xC1EE20C;
                                                                            if (t1230 == 2) {
                                                                                t1231 = *(int *)0xC1EE214;
                                                                                if (t1231 == 8) {
                                                                                    t1232 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                    *(unsigned int *)(((t1232 << 2) + 0xC2A9908)) = 0x1;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        camPlayScript((a4 + 0x1C));
                                                                        t1243 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        t1244 = *(signed char *)0xC1794E8;
                                                                        *(unsigned char *)0xC1794E8 = (t1244 | (((int)t1243 >= 0) ? (0x1 << (t1243 & 31)) : ((-(int)t1243 & 31) ? ((int)0x1 >> (-(int)t1243 & 31)) : ((int)0x1 >> 31))));
                                                                        t1245 = *(int *)0xC1EE20C;
                                                                        if (t1245 == 2) {
                                                                            t1246 = *(int *)0xC1EE214;
                                                                            if (t1246 == 8) {
                                                                                t1247 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                *(unsigned int *)(((t1247 << 2) + 0xC2A9908)) = 0x1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                camPlayScript((a4 + 0x1C));
                                                                t1262 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                t1263 = *(signed char *)0xC1794E8;
                                                                *(unsigned char *)0xC1794E8 = (t1263 | (((int)t1262 >= 0) ? (0x1 << (t1262 & 31)) : ((-(int)t1262 & 31) ? ((int)0x1 >> (-(int)t1262 & 31)) : ((int)0x1 >> 31))));
                                                                t1264 = *(int *)0xC1EE20C;
                                                                if (t1264 == 2) {
                                                                    t1265 = *(int *)0xC1EE214;
                                                                    if (t1265 == 8) {
                                                                        t1266 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        *(unsigned int *)(((t1266 << 2) + 0xC2A9908)) = 0x1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        camPlayScript((a4 + 0x1C));
                                                        t1281 = *(int *)(((a4 + 0x1C) + 0x154));
                                                        t1282 = *(signed char *)0xC1794E8;
                                                        *(unsigned char *)0xC1794E8 = (t1282 | (((int)t1281 >= 0) ? (0x1 << (t1281 & 31)) : ((-(int)t1281 & 31) ? ((int)0x1 >> (-(int)t1281 & 31)) : ((int)0x1 >> 31))));
                                                        t1283 = *(int *)0xC1EE20C;
                                                        if (t1283 == 2) {
                                                            t1284 = *(int *)0xC1EE214;
                                                            if (t1284 == 8) {
                                                                t1285 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                *(unsigned int *)(((t1285 << 2) + 0xC2A9908)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                t1302 = *(int *)(((a4 + 0x1C) + 0x20));
                                if (t1302 != 2) {
                                    t1303 = *(int *)0xC2AD590;
                                    *(unsigned int *)0xC2AD590 = (t1303 | 0x1);
                                    t1304 = *(int *)(((a4 + 0x1C) + 0x24));
                                    if (t1304 != 2) {
                                        psgSetState((a4 + 0x1C), 0x2, 0x0, 0x0);
                                        Drv_StartAction(0x2, (a4 + 0x1C), 0x0);
                                        *(unsigned int *)0xC2AD1D8 = (a4 + 0x1C);
                                        t1307 = *(int *)0xC1EE234;
                                        if (t1307 == 1) {
                                            t1308 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                            *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t1308 | 0x1);
                                            t1309 = *(int *)(((a4 + 0x1C) + 0x140));
                                            *(unsigned int *)0xC0E49DC = t1309;
                                            FUN_0c031492(0x0);
                                        }
                                    }
                                }
                            }
                            psgSetCurrent((a4 + 0x1C));
                            t1316 = psgFrame((a4 + 0x1C));
                            t1317 = t1316;
                        }
                        t1545 = t1317;
                    } else {
                        t1318 = *(int *)((a4 + 0x14));
                        *(unsigned int *)(((int)stk + 20)) = t1318;
                        t1319 = *(int *)((t1318 + 0x0));
                        *(unsigned int *)(((int)stk + 24)) = t1319;
                        if (t1319 != 4) {
                            t1320 = *(int *)(((int)stk + 24));
                            if (t1320 == 5) {
                                t1321 = *(int *)0xC1EE20C;
                                if (t1321 == 2) {
                                    t1322 = *(int *)0xC1EE214;
                                    if (t1322 == 8) {
                                        t1323 = *(int *)(((a4 + 0x1C) + 0x0));
                                        t1324 = IsBoyFriend(t1323, 0x0);
                                        if (t1324 == 0) {
                                            u1325 = *(float *)0xC13EEE0;
                                            if (u1325 > f4) {
                                                t1326 = *(int *)((a4 + 0x14));
                                                psgSetState((a4 + 0x1C), 0x1, (t1326 + 0x8), 0x0);
                                            } else {
                                                u1328 = *(float *)0xC13EEDC;
                                                if (u1328 > f4) {
                                                    t1329 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t1329 != 2) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                        t1330 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t1331 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t1330, t1331);
                                                    }
                                                } else {
                                                    u1334 = *(float *)0xC13EED8;
                                                    if (u1334 > f4) {
                                                        t1335 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t1335 != 1) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                            t1336 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t1337 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t1336, t1337);
                                                        }
                                                    } else {
                                                        u1340 = *(float *)0xC13EED4;
                                                        if (u1340 > f4) {
                                                            t1341 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            if (t1341 != 0) {
                                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                                t1342 = *(int *)(((a4 + 0x1C) + 0x20));
                                                                t1343 = *(int *)(((a4 + 0x1C) + 0x24));
                                                                psgCallEnter((a4 + 0x1C), t1342, t1343);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                u1353 = *(float *)0xC13EEE0;
                                if (u1353 > f4) {
                                    t1354 = *(int *)((a4 + 0x14));
                                    psgSetState((a4 + 0x1C), 0x1, (t1354 + 0x8), 0x0);
                                } else {
                                    u1356 = *(float *)0xC13EEDC;
                                    if (u1356 > f4) {
                                        t1357 = *(int *)(((a4 + 0x1C) + 0x24));
                                        if (t1357 != 2) {
                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                            t1358 = *(int *)(((a4 + 0x1C) + 0x20));
                                            t1359 = *(int *)(((a4 + 0x1C) + 0x24));
                                            psgCallEnter((a4 + 0x1C), t1358, t1359);
                                        }
                                    } else {
                                        u1362 = *(float *)0xC13EED8;
                                        if (u1362 > f4) {
                                            t1363 = *(int *)(((a4 + 0x1C) + 0x24));
                                            if (t1363 != 1) {
                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                t1364 = *(int *)(((a4 + 0x1C) + 0x20));
                                                t1365 = *(int *)(((a4 + 0x1C) + 0x24));
                                                psgCallEnter((a4 + 0x1C), t1364, t1365);
                                            }
                                        } else {
                                            u1368 = *(float *)0xC13EED4;
                                            if (u1368 > f4) {
                                                t1369 = *(int *)(((a4 + 0x1C) + 0x24));
                                                if (t1369 != 0) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                    t1370 = *(int *)(((a4 + 0x1C) + 0x20));
                                                    t1371 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    psgCallEnter((a4 + 0x1C), t1370, t1371);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            t1379 = *(int *)0xC1EE20C;
                            if (t1379 == 2) {
                                t1380 = *(int *)0xC1EE214;
                                if (t1380 == 8) {
                                    t1381 = *(int *)(((a4 + 0x1C) + 0x0));
                                    t1382 = IsBoyFriend(t1381, 0x0);
                                    if (t1382 == 0) {
                                        u1383 = *(float *)0xC13EEE0;
                                        if (u1383 > f4) {
                                            t1384 = *(int *)((a4 + 0x14));
                                            psgSetState((a4 + 0x1C), 0x1, (t1384 + 0x8), 0x0);
                                        } else {
                                            u1386 = *(float *)0xC13EEDC;
                                            if (u1386 > f4) {
                                                t1387 = *(int *)(((a4 + 0x1C) + 0x24));
                                                if (t1387 != 2) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                    t1388 = *(int *)(((a4 + 0x1C) + 0x20));
                                                    t1389 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    psgCallEnter((a4 + 0x1C), t1388, t1389);
                                                }
                                            } else {
                                                u1392 = *(float *)0xC13EED8;
                                                if (u1392 > f4) {
                                                    t1393 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t1393 != 1) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                        t1394 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t1395 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t1394, t1395);
                                                    }
                                                } else {
                                                    u1398 = *(float *)0xC13EED4;
                                                    if (u1398 > f4) {
                                                        t1399 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t1399 != 0) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                            t1400 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t1401 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t1400, t1401);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        t1412 = *(int *)((a4 + 0x14));
                        t1413 = *(int *)((t1412 + 0x0));
                        if (t1413 == 5) {
                            t1414 = *(int *)0xC2AD010;
                            if (t1414 != 2) {
                                t1415 = *(int *)0xC1EE234;
                                if (t1415 == 1) {
                                    t1416 = *(int *)0xC179860;
                                    if (t1416 != 10) {
                                        t1417 = *(int *)0xC2A4E50;
                                        if (t1417 == 0) {
                                            t1418 = *(int *)0xC179860;
                                            if (t1418 == 11) {
                                                camRestore();
                                            }
                                            t1421 = *(signed char *)0xC1794E8;
                                            if (t1421 == 0) {
                                                t1422 = *(int *)0xC1EE20C;
                                                if (t1422 == 2) {
                                                    t1423 = *(int *)0xC1EE214;
                                                    if (t1423 != 10) {
                                                        t1424 = *(int *)0xC1EE20C;
                                                        if (t1424 == 2) {
                                                            t1425 = *(int *)0xC1EE214;
                                                            if (t1425 != 11) {
                                                                t1426 = *(int *)0xC1EE20C;
                                                                if (t1426 == 2) {
                                                                    t1427 = *(int *)0xC1EE214;
                                                                    if (t1427 == 8) {
                                                                        t1428 = *(int *)0xC1EE20C;
                                                                        if (t1428 == 2) {
                                                                            t1429 = *(int *)0xC1EE214;
                                                                            if (t1429 == 8) {
                                                                                t1430 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                t1431 = *(int *)((0xC2A9908 + (t1430 << 2)));
                                                                                if (t1431 == 0) {
                                                                                    camPlayScript((a4 + 0x1C));
                                                                                    t1433 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                    t1434 = *(signed char *)0xC1794E8;
                                                                                    *(unsigned char *)0xC1794E8 = (t1434 | (((int)t1433 >= 0) ? (0x1 << (t1433 & 31)) : ((-(int)t1433 & 31) ? ((int)0x1 >> (-(int)t1433 & 31)) : ((int)0x1 >> 31))));
                                                                                    t1435 = *(int *)0xC1EE20C;
                                                                                    if (t1435 == 2) {
                                                                                        t1436 = *(int *)0xC1EE214;
                                                                                        if (t1436 == 8) {
                                                                                            t1437 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                            *(unsigned int *)(((t1437 << 2) + 0xC2A9908)) = 0x1;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        camPlayScript((a4 + 0x1C));
                                                                        t1456 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        t1457 = *(signed char *)0xC1794E8;
                                                                        *(unsigned char *)0xC1794E8 = (t1457 | (((int)t1456 >= 0) ? (0x1 << (t1456 & 31)) : ((-(int)t1456 & 31) ? ((int)0x1 >> (-(int)t1456 & 31)) : ((int)0x1 >> 31))));
                                                                        t1458 = *(int *)0xC1EE20C;
                                                                        if (t1458 == 2) {
                                                                            t1459 = *(int *)0xC1EE214;
                                                                            if (t1459 == 8) {
                                                                                t1460 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                *(unsigned int *)(((t1460 << 2) + 0xC2A9908)) = 0x1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    camPlayScript((a4 + 0x1C));
                                                                    t1471 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                    t1472 = *(signed char *)0xC1794E8;
                                                                    *(unsigned char *)0xC1794E8 = (t1472 | (((int)t1471 >= 0) ? (0x1 << (t1471 & 31)) : ((-(int)t1471 & 31) ? ((int)0x1 >> (-(int)t1471 & 31)) : ((int)0x1 >> 31))));
                                                                    t1473 = *(int *)0xC1EE20C;
                                                                    if (t1473 == 2) {
                                                                        t1474 = *(int *)0xC1EE214;
                                                                        if (t1474 == 8) {
                                                                            t1475 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                            *(unsigned int *)(((t1475 << 2) + 0xC2A9908)) = 0x1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            camPlayScript((a4 + 0x1C));
                                                            t1490 = *(int *)(((a4 + 0x1C) + 0x154));
                                                            t1491 = *(signed char *)0xC1794E8;
                                                            *(unsigned char *)0xC1794E8 = (t1491 | (((int)t1490 >= 0) ? (0x1 << (t1490 & 31)) : ((-(int)t1490 & 31) ? ((int)0x1 >> (-(int)t1490 & 31)) : ((int)0x1 >> 31))));
                                                            t1492 = *(int *)0xC1EE20C;
                                                            if (t1492 == 2) {
                                                                t1493 = *(int *)0xC1EE214;
                                                                if (t1493 == 8) {
                                                                    t1494 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                    *(unsigned int *)(((t1494 << 2) + 0xC2A9908)) = 0x1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    camPlayScript((a4 + 0x1C));
                                                    t1509 = *(int *)(((a4 + 0x1C) + 0x154));
                                                    t1510 = *(signed char *)0xC1794E8;
                                                    *(unsigned char *)0xC1794E8 = (t1510 | (((int)t1509 >= 0) ? (0x1 << (t1509 & 31)) : ((-(int)t1509 & 31) ? ((int)0x1 >> (-(int)t1509 & 31)) : ((int)0x1 >> 31))));
                                                    t1511 = *(int *)0xC1EE20C;
                                                    if (t1511 == 2) {
                                                        t1512 = *(int *)0xC1EE214;
                                                        if (t1512 == 8) {
                                                            t1513 = *(int *)(((a4 + 0x1C) + 0x154));
                                                            *(unsigned int *)(((t1513 << 2) + 0xC2A9908)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            t1530 = *(int *)(((a4 + 0x1C) + 0x20));
                            if (t1530 != 2) {
                                t1531 = *(int *)0xC2AD590;
                                *(unsigned int *)0xC2AD590 = (t1531 | 0x1);
                                t1532 = *(int *)(((a4 + 0x1C) + 0x24));
                                if (t1532 != 2) {
                                    psgSetState((a4 + 0x1C), 0x2, 0x0, 0x0);
                                    Drv_StartAction(0x2, (a4 + 0x1C), 0x0);
                                    *(unsigned int *)0xC2AD1D8 = (a4 + 0x1C);
                                    t1535 = *(int *)0xC1EE234;
                                    if (t1535 == 1) {
                                        t1536 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                        *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t1536 | 0x1);
                                        t1537 = *(int *)(((a4 + 0x1C) + 0x140));
                                        *(unsigned int *)0xC0E49DC = t1537;
                                        FUN_0c031492(0x0);
                                    }
                                }
                            }
                        }
                        psgSetCurrent((a4 + 0x1C));
                        t1544 = psgFrame((a4 + 0x1C));
                        t1545 = t1544;
                    }
                    t1773 = t1545;
                } else {
                    t1546 = *(int *)((a4 + 0x14));
                    *(unsigned int *)(((int)stk + 20)) = t1546;
                    t1547 = *(int *)((t1546 + 0x0));
                    *(unsigned int *)(((int)stk + 24)) = t1547;
                    if (t1547 != 4) {
                        t1548 = *(int *)(((int)stk + 24));
                        if (t1548 == 5) {
                            t1549 = *(int *)0xC1EE20C;
                            if (t1549 == 2) {
                                t1550 = *(int *)0xC1EE214;
                                if (t1550 == 8) {
                                    t1551 = *(int *)(((a4 + 0x1C) + 0x0));
                                    t1552 = IsBoyFriend(t1551, 0x0);
                                    if (t1552 == 0) {
                                        u1553 = *(float *)0xC13EEE0;
                                        if (u1553 > f4) {
                                            t1554 = *(int *)((a4 + 0x14));
                                            psgSetState((a4 + 0x1C), 0x1, (t1554 + 0x8), 0x0);
                                        } else {
                                            u1556 = *(float *)0xC13EEDC;
                                            if (u1556 > f4) {
                                                t1557 = *(int *)(((a4 + 0x1C) + 0x24));
                                                if (t1557 != 2) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                    t1558 = *(int *)(((a4 + 0x1C) + 0x20));
                                                    t1559 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    psgCallEnter((a4 + 0x1C), t1558, t1559);
                                                }
                                            } else {
                                                u1562 = *(float *)0xC13EED8;
                                                if (u1562 > f4) {
                                                    t1563 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t1563 != 1) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                        t1564 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t1565 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t1564, t1565);
                                                    }
                                                } else {
                                                    u1568 = *(float *)0xC13EED4;
                                                    if (u1568 > f4) {
                                                        t1569 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        if (t1569 != 0) {
                                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                            t1570 = *(int *)(((a4 + 0x1C) + 0x20));
                                                            t1571 = *(int *)(((a4 + 0x1C) + 0x24));
                                                            psgCallEnter((a4 + 0x1C), t1570, t1571);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            u1581 = *(float *)0xC13EEE0;
                            if (u1581 > f4) {
                                t1582 = *(int *)((a4 + 0x14));
                                psgSetState((a4 + 0x1C), 0x1, (t1582 + 0x8), 0x0);
                            } else {
                                u1584 = *(float *)0xC13EEDC;
                                if (u1584 > f4) {
                                    t1585 = *(int *)(((a4 + 0x1C) + 0x24));
                                    if (t1585 != 2) {
                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                        t1586 = *(int *)(((a4 + 0x1C) + 0x20));
                                        t1587 = *(int *)(((a4 + 0x1C) + 0x24));
                                        psgCallEnter((a4 + 0x1C), t1586, t1587);
                                    }
                                } else {
                                    u1590 = *(float *)0xC13EED8;
                                    if (u1590 > f4) {
                                        t1591 = *(int *)(((a4 + 0x1C) + 0x24));
                                        if (t1591 != 1) {
                                            *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                            t1592 = *(int *)(((a4 + 0x1C) + 0x20));
                                            t1593 = *(int *)(((a4 + 0x1C) + 0x24));
                                            psgCallEnter((a4 + 0x1C), t1592, t1593);
                                        }
                                    } else {
                                        u1596 = *(float *)0xC13EED4;
                                        if (u1596 > f4) {
                                            t1597 = *(int *)(((a4 + 0x1C) + 0x24));
                                            if (t1597 != 0) {
                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                t1598 = *(int *)(((a4 + 0x1C) + 0x20));
                                                t1599 = *(int *)(((a4 + 0x1C) + 0x24));
                                                psgCallEnter((a4 + 0x1C), t1598, t1599);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        t1607 = *(int *)0xC1EE20C;
                        if (t1607 == 2) {
                            t1608 = *(int *)0xC1EE214;
                            if (t1608 == 8) {
                                t1609 = *(int *)(((a4 + 0x1C) + 0x0));
                                t1610 = IsBoyFriend(t1609, 0x0);
                                if (t1610 == 0) {
                                    u1611 = *(float *)0xC13EEE0;
                                    if (u1611 > f4) {
                                        t1612 = *(int *)((a4 + 0x14));
                                        psgSetState((a4 + 0x1C), 0x1, (t1612 + 0x8), 0x0);
                                    } else {
                                        u1614 = *(float *)0xC13EEDC;
                                        if (u1614 > f4) {
                                            t1615 = *(int *)(((a4 + 0x1C) + 0x24));
                                            if (t1615 != 2) {
                                                *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x2;
                                                t1616 = *(int *)(((a4 + 0x1C) + 0x20));
                                                t1617 = *(int *)(((a4 + 0x1C) + 0x24));
                                                psgCallEnter((a4 + 0x1C), t1616, t1617);
                                            }
                                        } else {
                                            u1620 = *(float *)0xC13EED8;
                                            if (u1620 > f4) {
                                                t1621 = *(int *)(((a4 + 0x1C) + 0x24));
                                                if (t1621 != 1) {
                                                    *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x1;
                                                    t1622 = *(int *)(((a4 + 0x1C) + 0x20));
                                                    t1623 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    psgCallEnter((a4 + 0x1C), t1622, t1623);
                                                }
                                            } else {
                                                u1626 = *(float *)0xC13EED4;
                                                if (u1626 > f4) {
                                                    t1627 = *(int *)(((a4 + 0x1C) + 0x24));
                                                    if (t1627 != 0) {
                                                        *(unsigned int *)(((a4 + 0x1C) + 0x24)) = 0x0;
                                                        t1628 = *(int *)(((a4 + 0x1C) + 0x20));
                                                        t1629 = *(int *)(((a4 + 0x1C) + 0x24));
                                                        psgCallEnter((a4 + 0x1C), t1628, t1629);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    t1640 = *(int *)((a4 + 0x14));
                    t1641 = *(int *)((t1640 + 0x0));
                    if (t1641 == 5) {
                        t1642 = *(int *)0xC2AD010;
                        if (t1642 != 2) {
                            t1643 = *(int *)0xC1EE234;
                            if (t1643 == 1) {
                                t1644 = *(int *)0xC179860;
                                if (t1644 != 10) {
                                    t1645 = *(int *)0xC2A4E50;
                                    if (t1645 == 0) {
                                        t1646 = *(int *)0xC179860;
                                        if (t1646 == 11) {
                                            camRestore();
                                        }
                                        t1649 = *(signed char *)0xC1794E8;
                                        if (t1649 == 0) {
                                            t1650 = *(int *)0xC1EE20C;
                                            if (t1650 == 2) {
                                                t1651 = *(int *)0xC1EE214;
                                                if (t1651 != 10) {
                                                    t1652 = *(int *)0xC1EE20C;
                                                    if (t1652 == 2) {
                                                        t1653 = *(int *)0xC1EE214;
                                                        if (t1653 != 11) {
                                                            t1654 = *(int *)0xC1EE20C;
                                                            if (t1654 == 2) {
                                                                t1655 = *(int *)0xC1EE214;
                                                                if (t1655 == 8) {
                                                                    t1656 = *(int *)0xC1EE20C;
                                                                    if (t1656 == 2) {
                                                                        t1657 = *(int *)0xC1EE214;
                                                                        if (t1657 == 8) {
                                                                            t1658 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                            t1659 = *(int *)((0xC2A9908 + (t1658 << 2)));
                                                                            if (t1659 == 0) {
                                                                                camPlayScript((a4 + 0x1C));
                                                                                t1661 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                t1662 = *(signed char *)0xC1794E8;
                                                                                *(unsigned char *)0xC1794E8 = (t1662 | (((int)t1661 >= 0) ? (0x1 << (t1661 & 31)) : ((-(int)t1661 & 31) ? ((int)0x1 >> (-(int)t1661 & 31)) : ((int)0x1 >> 31))));
                                                                                t1663 = *(int *)0xC1EE20C;
                                                                                if (t1663 == 2) {
                                                                                    t1664 = *(int *)0xC1EE214;
                                                                                    if (t1664 == 8) {
                                                                                        t1665 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                                        *(unsigned int *)(((t1665 << 2) + 0xC2A9908)) = 0x1;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    camPlayScript((a4 + 0x1C));
                                                                    t1684 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                    t1685 = *(signed char *)0xC1794E8;
                                                                    *(unsigned char *)0xC1794E8 = (t1685 | (((int)t1684 >= 0) ? (0x1 << (t1684 & 31)) : ((-(int)t1684 & 31) ? ((int)0x1 >> (-(int)t1684 & 31)) : ((int)0x1 >> 31))));
                                                                    t1686 = *(int *)0xC1EE20C;
                                                                    if (t1686 == 2) {
                                                                        t1687 = *(int *)0xC1EE214;
                                                                        if (t1687 == 8) {
                                                                            t1688 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                            *(unsigned int *)(((t1688 << 2) + 0xC2A9908)) = 0x1;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                camPlayScript((a4 + 0x1C));
                                                                t1699 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                t1700 = *(signed char *)0xC1794E8;
                                                                *(unsigned char *)0xC1794E8 = (t1700 | (((int)t1699 >= 0) ? (0x1 << (t1699 & 31)) : ((-(int)t1699 & 31) ? ((int)0x1 >> (-(int)t1699 & 31)) : ((int)0x1 >> 31))));
                                                                t1701 = *(int *)0xC1EE20C;
                                                                if (t1701 == 2) {
                                                                    t1702 = *(int *)0xC1EE214;
                                                                    if (t1702 == 8) {
                                                                        t1703 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                        *(unsigned int *)(((t1703 << 2) + 0xC2A9908)) = 0x1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        camPlayScript((a4 + 0x1C));
                                                        t1718 = *(int *)(((a4 + 0x1C) + 0x154));
                                                        t1719 = *(signed char *)0xC1794E8;
                                                        *(unsigned char *)0xC1794E8 = (t1719 | (((int)t1718 >= 0) ? (0x1 << (t1718 & 31)) : ((-(int)t1718 & 31) ? ((int)0x1 >> (-(int)t1718 & 31)) : ((int)0x1 >> 31))));
                                                        t1720 = *(int *)0xC1EE20C;
                                                        if (t1720 == 2) {
                                                            t1721 = *(int *)0xC1EE214;
                                                            if (t1721 == 8) {
                                                                t1722 = *(int *)(((a4 + 0x1C) + 0x154));
                                                                *(unsigned int *)(((t1722 << 2) + 0xC2A9908)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                camPlayScript((a4 + 0x1C));
                                                t1737 = *(int *)(((a4 + 0x1C) + 0x154));
                                                t1738 = *(signed char *)0xC1794E8;
                                                *(unsigned char *)0xC1794E8 = (t1738 | (((int)t1737 >= 0) ? (0x1 << (t1737 & 31)) : ((-(int)t1737 & 31) ? ((int)0x1 >> (-(int)t1737 & 31)) : ((int)0x1 >> 31))));
                                                t1739 = *(int *)0xC1EE20C;
                                                if (t1739 == 2) {
                                                    t1740 = *(int *)0xC1EE214;
                                                    if (t1740 == 8) {
                                                        t1741 = *(int *)(((a4 + 0x1C) + 0x154));
                                                        *(unsigned int *)(((t1741 << 2) + 0xC2A9908)) = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        t1758 = *(int *)(((a4 + 0x1C) + 0x20));
                        if (t1758 != 2) {
                            t1759 = *(int *)0xC2AD590;
                            *(unsigned int *)0xC2AD590 = (t1759 | 0x1);
                            t1760 = *(int *)(((a4 + 0x1C) + 0x24));
                            if (t1760 != 2) {
                                psgSetState((a4 + 0x1C), 0x2, 0x0, 0x0);
                                Drv_StartAction(0x2, (a4 + 0x1C), 0x0);
                                *(unsigned int *)0xC2AD1D8 = (a4 + 0x1C);
                                t1763 = *(int *)0xC1EE234;
                                if (t1763 == 1) {
                                    t1764 = *(signed char *)(((0x149 + (a4 + 0x1C)) + 0x0));
                                    *(unsigned char *)(((0x149 + (a4 + 0x1C)) + 0x0)) = (t1764 | 0x1);
                                    t1765 = *(int *)(((a4 + 0x1C) + 0x140));
                                    *(unsigned int *)0xC0E49DC = t1765;
                                    FUN_0c031492(0x0);
                                }
                            }
                        }
                    }
                    psgSetCurrent((a4 + 0x1C));
                    t1772 = psgFrame((a4 + 0x1C));
                    t1773 = t1772;
                }
                t1774 = t1773;
            }
            t1775 = t1774;
        }
        t1784 = t1775;
    } else {
        t1778 = *(int *)(((a4 + 0x1C) + 0x144));
        if (t1778 == 0) {
            *(unsigned int *)(((a4 + 0x1C) + 0x144)) = a4;
        }
        psgSetState((a4 + 0x1C), 0x0, 0x0, 0x0);
        t1780 = *(int *)((a4 + 0x14));
        Psg_SetPosPtr((a4 + 0x1C), (t1780 + 0x8));
        psgSetCurrent((a4 + 0x1C));
        t1783 = psgFrame((a4 + 0x1C));
        t1784 = t1783;
    }
    return t1784;
}
