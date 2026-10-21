/* Straight-line functions with calls and guards (batch gen_dt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWallBox(int, int, float);
int FUN_0c030b68(int);
int FUN_0c030e34(int, int);
int FUN_0c05a0f0(void);
int FUN_0c07c6b0(int, int);
int FUN_0c07c9b0(int, int);
int FUN_0c07ca80(int, int, int);
int FUN_0c07cc00(int, int, int, int);
int FUN_0c07d240(int, int);
int FUN_0c07d540(void);
int FUN_0c07d5c0(int);
int FUN_0c07d5f0(int);
int FUN_0c07f5c0(void);
int Sound_Request(int, int);
int adxf_ChkPrmGfr(int);
extern float getNearLineIndex();
int kmiCopyFromFrameBuffer(int, int, int);
int kmtex_GetTextureLevel(int, int);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetVtxColorMode(int);
int nlSprPut(int);
int FUN_0c15ca40(int a4, int a5, int a6, int a7);
int FUN_0c060740(int a4, int a5, int a6, int a7, int a8);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);
int FUN_0c050a12(void);
int menuCursor(int a4, int a5, int a6);
int FUN_0c07c870(int a4, int a5);
int FUN_0c059f44(void);
int menuCursorBox(int a4, int a5, int a6);
int FUN_0c038ff8(void);
int kmiFBgetfreemem(int a4, int a5, int a6, int a7);
float navi_GetRouteTbl(int a4, int a5, int a6);
float ExecColliObj(int a4, int a5, float f4);
void FUN_0c02b2d6(int a4);

int FUN_0c15ca40(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 1) != 0) {
        t1 = *(int *)(((t0 << 2) + 0xC175DE0));
        t2 = *(int *)(((t0 << 2) + 0xC175ED8));
        t6 = (t2 + 0xA);
        t7 = t1;
    } else {
        t3 = *(int *)(((t0 << 2) + 0xC175DC4));
        t4 = *(int *)(((t0 << 2) + 0xC175EAC));
        t6 = t4;
        t7 = t3;
    }
    kmiCopyFromFrameBuffer(a4, a5, t7);
    return kmiCopyFromFrameBuffer((a4 + t7), (a5 + 0x800), t6);
}

int FUN_0c060740(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t12;

    t0 = (int)((unsigned int)a8 / (unsigned int)0x6);
    t1 = (int)((unsigned int)a8 % (unsigned int)0x6);
    t2 = *(signed char *)((a4 + 0x1));
    t3 = *(signed char *)((a4 + 0x0));
    t4 = *(signed char *)((a4 + 0x2));
    t5 = *(signed char *)((a4 + 0x3));
    t6 = (unsigned char)t5;
    t7 = 0xC2A9FF8;
    t8 = (((unsigned char)t3 << 8) + (unsigned char)t2);
    t9 = (a4 + 0x4);
    t10 = a6;
    t11 = a6;
    for (;;) {
        if ((int)t11 >= (int)(a6 + (((unsigned char)t4 << 8) + (unsigned char)t5))) {
            break;
        }
        t12 = t11;
        t12 = (t12 << 1);
        t8 = t11;
        t12 = (t12 + t8);
        t10 = a5;
        t12 = (t12 << 2);
        t12 = (t12 << 2);
        if ((int)t10 < (int)(a5 + (((unsigned char)t3 << 8) + (unsigned char)t2))) {
            for (;;) {
                if ((int)t10 >= 0) {
                    t7 = 0x30;
                    if ((int)t10 < (int)t7) {
                        if ((int)t11 >= 0) {
                            t8 = 0x20;
                            if ((int)t11 < (int)t8) {
                                t6 = t12;
                                t13 = *(signed char *)((t9 + 0x0));
                                t8 = t13;
                                t6 = (t6 + t10);
                                *(unsigned char *)((((short)(((((((t0 << 1) + t1) - 1) << 1) + (((t0 << 1) + t1) - 1)) << 8) << 1) + 0xC2A9FF8) + t6)) = t8;
                            }
                        }
                    }
                }
                t10 = (t10 + 0x1);
                t9 = (t9 + 0x1);
                if ((int)t10 >= (int)(a5 + (((unsigned char)t3 << 8) + (unsigned char)t2))) {
                    break;
                }
            }
        }
        t11 = (t11 + 0x1);
    }
    return t6;
}

int ADXF_GetFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t14;

    t0 = adxf_ChkPrmGfr(a4);
    if ((int)t0 < 0) {
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((a4 << 2) + 0xC2B9F38));
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            if (t2 == 0) {
                t3 = *(short *)(((t1 + 0x14) + 0x0));
                if ((int)a5 > 0) {
                    t4 = (0x0 + ((t1 + 0x14) + 0x2));
                    t5 = 0x0;
                    t6 = (unsigned short)t3;
                    for (;;) {
                        t7 = *(short *)((t4 + 0x0));
                        t4 = (t4 + 0x2);
                        t5 = (t5 + 0x1);
                        t6 = (t6 + (unsigned short)t7);
                        if ((int)t5 >= (int)a5) {
                            break;
                        }
                    }
                    t8 = *(int *)((t1 + 0x8));
                    *(unsigned int *)((a6 + 0x0)) = (t6 + t8);
                    t9 = *(short *)((((t1 + 0x14) + 0x2) + (a5 << 1)));
                    *(unsigned int *)((a7 + 0x0)) = (unsigned short)t9;
                    return t0;
                }
                t10 = *(int *)((t1 + 0x8));
                *(unsigned int *)((a6 + 0x0)) = ((unsigned short)t3 + t10);
                t11 = *(short *)((((t1 + 0x14) + 0x2) + (a5 << 1)));
                *(unsigned int *)((a7 + 0x0)) = (unsigned short)t11;
                return t0;
            }
            t12 = (t1 + 0x14);
            t13 = t2;
            t15 = t1;
            t16 = a5;
            t17 = 0x0;
            for (;;) {
                t18 = *(short *)((t15 + 0x10));
                if ((int)t17 >= (int)(unsigned short)t18) {
                    t19 = *(int *)((t15 + 0x0));
                    t15 = t19;
                    t20 = *(int *)((t15 + 0x0));
                    t13 = t20;
                    if (t13 == 0) {
                        t16 = t15;
                        t16 = (t16 + 0x14);
                        t21 = *(short *)((t16 + 0x0));
                        t17 = t21;
                        t12 = t16;
                        t16 = 0x0;
                        t17 = (unsigned short)t17;
                        t12 = (t12 + 0x2);
                        if ((int)a5 > 0) {
                            t22 = (0x0 + t12);
                            for (;;) {
                                t23 = *(short *)((t22 + 0x0));
                                t22 = (t22 + 0x2);
                                t14 = t23;
                                t16 = (t16 + 0x1);
                                t14 = (unsigned short)t14;
                                t17 = (t17 + t14);
                                if ((int)t16 >= (int)a5) {
                                    break;
                                }
                            }
                            t24 = *(int *)((t15 + 0x8));
                            t14 = t24;
                            t17 = (t17 + t14);
                            *(unsigned int *)((a6 + 0x0)) = t17;
                            t25 = *(short *)((t12 + (a5 << 1)));
                            t14 = t25;
                            t14 = (unsigned short)t14;
                            *(unsigned int *)((a7 + 0x0)) = t14;
                            return t0;
                        }
                        t26 = *(int *)((t15 + 0x8));
                        t14 = t26;
                        t17 = (t17 + t14);
                        *(unsigned int *)((a6 + 0x0)) = t17;
                        t27 = *(short *)((t12 + (a5 << 1)));
                        t14 = t27;
                        t14 = (unsigned short)t14;
                        *(unsigned int *)((a7 + 0x0)) = t14;
                        return t0;
                    }
                    t12 = t15;
                    t12 = (t12 + 0x14);
                    t17 = 0x0;
                    continue;
                }
                t16 = t17;
                t16 = (t16 << 2);
                t16 = (t16 << 1);
                t16 = (t16 + t12);
                t28 = *(short *)((t16 + 0x0));
                t14 = t28;
                t14 = (unsigned short)t14;
                if (t14 == a5) {
                    break;
                }
                t17 = (t17 + 0x1);
            }
            break;
        }
        t29 = *(int *)((t15 + 0x8));
        t30 = *(int *)((t16 + 0x4));
        *(unsigned int *)((a6 + 0x0)) = (t29 + t30);
        t31 = *(short *)((t16 + 0x2));
        *(unsigned int *)((a7 + 0x0)) = (unsigned short)t31;
    }
    return t0;
}

int FUN_0c050a12(void)
{
    int t0;
    int t6;
    int t7;
    int t8;
    int t9;
    float u13;
    float u15;
    int t17;
    int t18;
    int t43;
    float u47;
    float u49;
    int t51;
    int t52;

    t0 = *(int *)0xC1EE244;
    if (t0 == 0) {
        *(unsigned int *)0xC2A7314 = 0x1D2;
    } else {
        *(unsigned int *)0xC2A7314 = 0x1D9;
    }
    *(float *)0xC2A7318 = 320.0f;
    *(float *)0xC2A731C = 160.0f;
    nlSprPut(0xC2A7314);
    nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
    t6 = *(int *)0xC2A7208;
    if ((int)t6 > (int)0x32) {
        t7 = *(int *)0xC2A7208;
        if ((int)t7 >= (int)0x78) {
            t8 = *(int *)0xC2A7208;
            if ((int)t8 <= (int)0xAA) {
                t9 = *(int *)0xC1EE244;
                if (t9 == 0) {
                    *(unsigned int *)0xC2A7314 = 0x1D1;
                } else {
                    *(unsigned int *)0xC2A7314 = 0x1D8;
                }
                u13 = *(float *)0xC2A72CC;
                u15 = 500.0f;
                if (0.0f > u13) {
                    u15 = 140.0f;
                }
                *(float *)0xC2A7318 = u15;
                *(float *)0xC2A731C = 210.0f;
                t17 = *(int *)0xC2A72B8;
                t18 = (int)((int)(t17 + 0x1) % (int)0x1E);
                *(unsigned int *)0xC2A72B8 = t18;
                if ((int)t18 < (int)0x14) {
                    nlSprPut(0xC2A7314);
                }
            }
        }
    } else {
        t43 = *(int *)0xC1EE244;
        if (t43 == 0) {
            *(unsigned int *)0xC2A7314 = 0x1D1;
        } else {
            *(unsigned int *)0xC2A7314 = 0x1D8;
        }
        u47 = *(float *)0xC2A72CC;
        u49 = 500.0f;
        if (0.0f > u47) {
            u49 = 140.0f;
        }
        *(float *)0xC2A7318 = u49;
        *(float *)0xC2A731C = 210.0f;
        t51 = *(int *)0xC2A72B8;
        t52 = (int)((int)(t51 + 0x1) % (int)0x1E);
        *(unsigned int *)0xC2A72B8 = t52;
        if ((int)t52 < (int)0x14) {
            nlSprPut(0xC2A7314);
        }
    }
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}

int menuCursor(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t1562;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t17;
    int t18;
    int t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t36;
    int t47;
    int t48;
    int t49;
    int t60;
    int t71;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t89;
    int t90;
    int t91;
    int t92;
    int t95;
    int t96;
    int t97;
    int t108;
    int t119;
    int t120;
    int t121;
    int t132;
    int t143;
    int t161;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t170;
    int t171;
    int t172;
    int t173;
    int t176;
    int t177;
    int t178;
    int t189;
    int t200;
    int t201;
    int t202;
    int t213;
    int t224;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t246;
    int t247;
    int t248;
    int t249;
    int t252;
    int t253;
    int t254;
    int t265;
    int t276;
    int t277;
    int t278;
    int t289;
    int t300;
    int t311;
    int t312;
    int t313;
    int t314;
    int t315;
    int t318;
    int t319;
    int t320;
    int t321;
    int t324;
    int t325;
    int t326;
    int t337;
    int t348;
    int t349;
    int t350;
    int t361;
    int t372;
    int t388;
    int t389;
    int t390;
    int t391;
    int t392;
    int t393;
    int t394;
    int t397;
    int t398;
    int t399;
    int t400;
    int t403;
    int t404;
    int t405;
    int t416;
    int t427;
    int t428;
    int t429;
    int t440;
    int t451;
    int t462;
    int t463;
    int t464;
    int t465;
    int t468;
    int t469;
    int t470;
    int t471;
    int t474;
    int t475;
    int t476;
    int t487;
    int t498;
    int t499;
    int t500;
    int t511;
    int t522;
    int t537;
    int t538;
    int t539;
    int t540;
    int t543;
    int t544;
    int t545;
    int t546;
    int t549;
    int t550;
    int t551;
    int t562;
    int t573;
    int t574;
    int t575;
    int t586;
    int t597;
    int t612;
    int t613;
    int t614;
    int t615;
    int t618;
    int t619;
    int t620;
    int t621;
    int t624;
    int t625;
    int t626;
    int t637;
    int t648;
    int t649;
    int t650;
    int t661;
    int t672;
    int t687;
    int t688;
    int t689;
    int t690;
    int t691;
    int t694;
    int t695;
    int t696;
    int t697;
    int t700;
    int t701;
    int t702;
    int t713;
    int t724;
    int t725;
    int t726;
    int t737;
    int t748;
    int t759;
    int t760;
    int t761;
    int t762;
    int t765;
    int t766;
    int t767;
    int t768;
    int t771;
    int t772;
    int t773;
    int t784;
    int t795;
    int t796;
    int t797;
    int t808;
    int t819;
    int t845;
    int t846;
    int t847;
    int t848;
    int t849;
    int t850;
    int t851;
    int t854;
    int t855;
    int t856;
    int t857;
    int t860;
    int t861;
    int t862;
    int t873;
    int t884;
    int t885;
    int t886;
    int t897;
    int t908;
    int t919;
    int t920;
    int t921;
    int t922;
    int t925;
    int t926;
    int t927;
    int t928;
    int t931;
    int t932;
    int t933;
    int t944;
    int t955;
    int t956;
    int t957;
    int t968;
    int t979;
    int t994;
    int t995;
    int t996;
    int t997;
    int t1000;
    int t1001;
    int t1002;
    int t1003;
    int t1006;
    int t1007;
    int t1008;
    int t1019;
    int t1030;
    int t1031;
    int t1032;
    int t1043;
    int t1054;
    int t1069;
    int t1070;
    int t1071;
    int t1072;
    int t1075;
    int t1076;
    int t1077;
    int t1078;
    int t1081;
    int t1082;
    int t1083;
    int t1094;
    int t1105;
    int t1106;
    int t1107;
    int t1118;
    int t1129;
    int t1144;
    int t1145;
    int t1146;
    int t1147;
    int t1148;
    int t1151;
    int t1152;
    int t1153;
    int t1154;
    int t1157;
    int t1158;
    int t1159;
    int t1170;
    int t1181;
    int t1182;
    int t1183;
    int t1194;
    int t1205;
    int t1216;
    int t1217;
    int t1218;
    int t1219;
    int t1222;
    int t1223;
    int t1224;
    int t1225;
    int t1228;
    int t1229;
    int t1230;
    int t1241;
    int t1252;
    int t1253;
    int t1254;
    int t1265;
    int t1276;
    int t1302;
    int t1303;
    int t1304;
    int t1305;
    int t1306;
    int t1307;
    int t1310;
    int t1311;
    int t1312;
    int t1313;
    int t1316;
    int t1317;
    int t1318;
    int t1329;
    int t1340;
    int t1341;
    int t1342;
    int t1353;
    int t1364;
    int t1375;
    int t1376;
    int t1377;
    int t1378;
    int t1379;
    int t1382;
    int t1383;
    int t1384;
    int t1385;
    int t1388;
    int t1389;
    int t1390;
    int t1401;
    int t1412;
    int t1413;
    int t1414;
    int t1425;
    int t1436;
    int t1473;
    int t1474;
    int t1475;
    int t1476;
    int t1477;
    int t1480;
    int t1481;
    int t1482;
    int t1483;
    int t1486;
    int t1487;
    int t1488;
    int t1499;
    int t1510;
    int t1511;
    int t1512;
    int t1523;
    int t1534;
    int t1552;
    int t1554;
    int t1574;
    int t1575;
    int t1576;
    int t1577;
    int t1578;
    int t1579;
    int t1581;
    int t1582;
    int t1583;
    int t1584;
    int t1585;
    int t1588;
    int t1589;
    int t1590;
    int t1591;
    int t1594;
    int t1595;
    int t1596;
    int t1607;
    int t1618;
    int t1619;
    int t1620;
    int t1631;
    int t1642;
    int t1653;
    int t1654;
    int t1655;
    int t1656;
    int t1657;
    int t1660;
    int t1661;
    int t1662;
    int t1663;
    int t1666;
    int t1667;
    int t1668;
    int t1679;
    int t1690;
    int t1691;
    int t1692;
    int t1703;
    int t1714;
    int t1732;
    int t1734;
    int t1735;
    int t1736;
    int t1737;
    int t1738;
    int t1741;
    int t1742;
    int t1743;
    int t1744;
    int t1747;
    int t1748;
    int t1749;
    int t1760;
    int t1771;
    int t1772;
    int t1773;
    int t1784;
    int t1795;
    int t1806;
    int t1807;
    int t1808;
    int t1809;
    int t1810;
    int t1811;
    int t1812;
    int t1813;
    int t1814;
    int t1817;
    int t1818;
    int t1819;
    int t1820;
    int t1823;
    int t1824;
    int t1825;
    int t1836;
    int t1847;
    int t1848;
    int t1849;
    int t1860;
    int t1871;
    int t1882;
    int t1883;
    int t1884;
    int t1885;
    int t1886;
    int t1889;
    int t1890;
    int t1891;
    int t1892;
    int t1895;
    int t1896;
    int t1897;
    int t1908;
    int t1919;
    int t1920;
    int t1921;
    int t1932;
    int t1943;
    int t1959;
    int t1960;
    int t1961;
    int t1962;
    int t1963;
    int t1964;
    int t1965;
    int t1968;
    int t1969;
    int t1970;
    int t1971;
    int t1974;
    int t1975;
    int t1976;
    int t1987;
    int t1998;
    int t1999;
    int t2000;
    int t2011;
    int t2022;
    int t2033;
    int t2034;
    int t2035;
    int t2036;
    int t2039;
    int t2040;
    int t2041;
    int t2042;
    int t2045;
    int t2046;
    int t2047;
    int t2058;
    int t2069;
    int t2070;
    int t2071;
    int t2082;
    int t2093;
    int t2108;
    int t2109;
    int t2110;
    int t2111;
    int t2114;
    int t2115;
    int t2116;
    int t2117;
    int t2120;
    int t2121;
    int t2122;
    int t2133;
    int t2144;
    int t2145;
    int t2146;
    int t2157;
    int t2168;
    int t2183;
    int t2184;
    int t2185;
    int t2186;
    int t2189;
    int t2190;
    int t2191;
    int t2192;
    int t2195;
    int t2196;
    int t2197;
    int t2208;
    int t2219;
    int t2220;
    int t2221;
    int t2232;
    int t2243;
    int t2258;
    int t2259;
    int t2260;
    int t2261;
    int t2262;
    int t2265;
    int t2266;
    int t2267;
    int t2268;
    int t2271;
    int t2272;
    int t2273;
    int t2284;
    int t2295;
    int t2296;
    int t2297;
    int t2308;
    int t2319;
    int t2330;
    int t2331;
    int t2332;
    int t2333;
    int t2336;
    int t2337;
    int t2338;
    int t2339;
    int t2342;
    int t2343;
    int t2344;
    int t2355;
    int t2366;
    int t2367;
    int t2368;
    int t2379;
    int t2390;
    int t2416;
    int t2417;
    int t2418;
    int t2419;
    int t2420;
    int t2421;
    int t2422;
    int t2425;
    int t2426;
    int t2427;
    int t2428;
    int t2431;
    int t2432;
    int t2433;
    int t2444;
    int t2455;
    int t2456;
    int t2457;
    int t2468;
    int t2479;
    int t2490;
    int t2491;
    int t2492;
    int t2493;
    int t2496;
    int t2497;
    int t2498;
    int t2499;
    int t2502;
    int t2503;
    int t2504;
    int t2515;
    int t2526;
    int t2527;
    int t2528;
    int t2539;
    int t2550;
    int t2565;
    int t2566;
    int t2567;
    int t2568;
    int t2571;
    int t2572;
    int t2573;
    int t2574;
    int t2577;
    int t2578;
    int t2579;
    int t2590;
    int t2601;
    int t2602;
    int t2603;
    int t2614;
    int t2625;
    int t2640;
    int t2641;
    int t2642;
    int t2643;
    int t2646;
    int t2647;
    int t2648;
    int t2649;
    int t2652;
    int t2653;
    int t2654;
    int t2665;
    int t2676;
    int t2677;
    int t2678;
    int t2689;
    int t2700;
    int t2715;
    int t2716;
    int t2717;
    int t2718;
    int t2719;
    int t2722;
    int t2723;
    int t2724;
    int t2725;
    int t2728;
    int t2729;
    int t2730;
    int t2741;
    int t2752;
    int t2753;
    int t2754;
    int t2765;
    int t2776;
    int t2787;
    int t2788;
    int t2789;
    int t2790;
    int t2793;
    int t2794;
    int t2795;
    int t2796;
    int t2799;
    int t2800;
    int t2801;
    int t2812;
    int t2823;
    int t2824;
    int t2825;
    int t2836;
    int t2847;
    int t2873;
    int t2874;
    int t2875;
    int t2876;
    int t2877;
    int t2878;
    int t2881;
    int t2882;
    int t2883;
    int t2884;
    int t2887;
    int t2888;
    int t2889;
    int t2900;
    int t2911;
    int t2912;
    int t2913;
    int t2924;
    int t2935;
    int t2946;
    int t2947;
    int t2948;
    int t2949;
    int t2950;
    int t2953;
    int t2954;
    int t2955;
    int t2956;
    int t2959;
    int t2960;
    int t2961;
    int t2972;
    int t2983;
    int t2984;
    int t2985;
    int t2996;
    int t3007;
    int t3044;
    int t3045;
    int t3046;
    int t3047;
    int t3048;
    int t3051;
    int t3052;
    int t3053;
    int t3054;
    int t3057;
    int t3058;
    int t3059;
    int t3070;
    int t3081;
    int t3082;
    int t3083;
    int t3094;
    int t3105;
    int t3123;
    int t3125;
    int t3133;

    t0 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x0));
    t1 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
    t2 = *(int *)0xC2A1214;
    if (t2 == 1) {
        t1562 = 0x0;
        if (a4 != 0) {
            t3 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
            t4 = *(int *)0xC2A11CC;
            if ((t3 & 0x4) != 0) {
                if ((0x2 & t4) != 0) {
                    t5 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    t6 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x18));
                    t7 = *(int *)(((((t5 << 2) << 1) + t6) + 0x8));
                    if (t7 != 0) {
                        t8 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                        *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t8 | 0x8);
                        FUN_0c07f5c0();
                        t10 = a4;
                        t11 = a5;
                        t12 = 0x0;
                        for (;;) {
                            t13 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            if (((((int)t13 >= 0) ? (0x1 << (t13 & 31)) : ((-(int)t13 & 31) ? ((int)0x1 >> (-(int)t13 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                if (t12 == 0) {
                                    t14 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t14 + 0x1);
                                    if ((int)(t14 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    }
                                } else {
                                    t17 = *(int *)0xC2A11CC;
                                    t10 = t17;
                                    if ((t10 & 0x8) == 0) {
                                        t18 = *(int *)0xC2A11D4;
                                        if (t18 == 0) {
                                            t19 = *(int *)0xC2A11D0;
                                            if ((t19 & 0x8) != 0) {
                                                t20 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t12 = 0xFFFFFFFF;
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t20 - 1);
                                                if ((int)(t20 - 1) < 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                }
                                            } else {
                                                t11 = 0x10;
                                                if ((t10 & t11) == 0) {
                                                    t23 = *(int *)0xC2A11D4;
                                                    if (t23 == 0) {
                                                        t24 = *(int *)0xC2A11D0;
                                                        if ((t24 & t11) != 0) {
                                                            t12 = 0x1;
                                                            t25 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t25 + 0x1);
                                                            if ((int)(t25 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t12 = 0x1;
                                                    t36 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t36 + 0x1);
                                                    if ((int)(t36 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t11 = 0x10;
                                            if ((t10 & t11) == 0) {
                                                t47 = *(int *)0xC2A11D4;
                                                if (t47 == 0) {
                                                    t48 = *(int *)0xC2A11D0;
                                                    if ((t48 & t11) != 0) {
                                                        t12 = 0x1;
                                                        t49 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t49 + 0x1);
                                                        if ((int)(t49 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t12 = 0x1;
                                                t60 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t60 + 0x1);
                                                if ((int)(t60 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t71 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t12 = 0xFFFFFFFF;
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t71 - 1);
                                        if ((int)(t71 - 1) < 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                        }
                                    }
                                }
                                continue;
                            }
                            break;
                        }
                    } else {
                        t82 = t7;
                        t83 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                        t84 = 0x0;
                        for (;;) {
                            t85 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            if (((((int)t85 >= 0) ? (0x1 << (t85 & 31)) : ((-(int)t85 & 31) ? ((int)0x1 >> (-(int)t85 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                if (t84 == 0) {
                                    t86 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t86 + 0x1);
                                    if ((int)(t86 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    }
                                } else {
                                    t89 = *(int *)0xC2A11CC;
                                    t82 = t89;
                                    if ((t82 & 0x8) == 0) {
                                        t90 = *(int *)0xC2A11D4;
                                        if (t90 == 0) {
                                            t91 = *(int *)0xC2A11D0;
                                            if ((t91 & 0x8) != 0) {
                                                t92 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t84 = 0xFFFFFFFF;
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t92 - 1);
                                                if ((int)(t92 - 1) < 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                }
                                            } else {
                                                t83 = 0x10;
                                                if ((t82 & t83) == 0) {
                                                    t95 = *(int *)0xC2A11D4;
                                                    if (t95 == 0) {
                                                        t96 = *(int *)0xC2A11D0;
                                                        if ((t96 & t83) != 0) {
                                                            t84 = 0x1;
                                                            t97 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t97 + 0x1);
                                                            if ((int)(t97 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t84 = 0x1;
                                                    t108 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t108 + 0x1);
                                                    if ((int)(t108 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t83 = 0x10;
                                            if ((t82 & t83) == 0) {
                                                t119 = *(int *)0xC2A11D4;
                                                if (t119 == 0) {
                                                    t120 = *(int *)0xC2A11D0;
                                                    if ((t120 & t83) != 0) {
                                                        t84 = 0x1;
                                                        t121 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t121 + 0x1);
                                                        if ((int)(t121 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t84 = 0x1;
                                                t132 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t132 + 0x1);
                                                if ((int)(t132 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t143 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t84 = 0xFFFFFFFF;
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t143 - 1);
                                        if ((int)(t143 - 1) < 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                        }
                                    }
                                }
                                continue;
                            }
                            break;
                        }
                    }
                } else {
                    if ((t4 & 0x4) != 0) {
                        t161 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                        *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t161 | 0x9);
                        FUN_0c07f5c0();
                        t163 = a4;
                        t164 = a5;
                        t165 = 0x0;
                        for (;;) {
                            t166 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            if (((((int)t166 >= 0) ? (0x1 << (t166 & 31)) : ((-(int)t166 & 31) ? ((int)0x1 >> (-(int)t166 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                if (t165 == 0) {
                                    t167 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t167 + 0x1);
                                    if ((int)(t167 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    }
                                } else {
                                    t170 = *(int *)0xC2A11CC;
                                    t163 = t170;
                                    if ((t163 & 0x8) == 0) {
                                        t171 = *(int *)0xC2A11D4;
                                        if (t171 == 0) {
                                            t172 = *(int *)0xC2A11D0;
                                            if ((t172 & 0x8) != 0) {
                                                t173 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t165 = 0xFFFFFFFF;
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t173 - 1);
                                                if ((int)(t173 - 1) < 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                }
                                            } else {
                                                t164 = 0x10;
                                                if ((t163 & t164) == 0) {
                                                    t176 = *(int *)0xC2A11D4;
                                                    if (t176 == 0) {
                                                        t177 = *(int *)0xC2A11D0;
                                                        if ((t177 & t164) != 0) {
                                                            t165 = 0x1;
                                                            t178 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t178 + 0x1);
                                                            if ((int)(t178 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t165 = 0x1;
                                                    t189 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t189 + 0x1);
                                                    if ((int)(t189 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t164 = 0x10;
                                            if ((t163 & t164) == 0) {
                                                t200 = *(int *)0xC2A11D4;
                                                if (t200 == 0) {
                                                    t201 = *(int *)0xC2A11D0;
                                                    if ((t201 & t164) != 0) {
                                                        t165 = 0x1;
                                                        t202 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t202 + 0x1);
                                                        if ((int)(t202 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t165 = 0x1;
                                                t213 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t213 + 0x1);
                                                if ((int)(t213 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t224 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t165 = 0xFFFFFFFF;
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t224 - 1);
                                        if ((int)(t224 - 1) < 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                        }
                                    }
                                }
                                continue;
                            }
                            break;
                        }
                    } else {
                        t235 = *(int *)0xC2A11CC;
                        if ((t235 & 0x8) == 0) {
                            t236 = *(int *)0xC2A11D4;
                            if (t236 == 0) {
                                t237 = *(int *)0xC2A11D0;
                                if ((t237 & 0x8) != 0) {
                                    t238 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t238 - 1);
                                    if ((int)(t238 - 1) < 0) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                        t239 = t235;
                                        t240 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                                        t241 = 0xFFFFFFFF;
                                        for (;;) {
                                            t242 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t242 >= 0) ? (0x1 << (t242 & 31)) : ((-(int)t242 & 31) ? ((int)0x1 >> (-(int)t242 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t241 == 0) {
                                                    t243 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t243 + 0x1);
                                                    if ((int)(t243 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t246 = *(int *)0xC2A11CC;
                                                    t239 = t246;
                                                    if ((t239 & 0x8) == 0) {
                                                        t247 = *(int *)0xC2A11D4;
                                                        if (t247 == 0) {
                                                            t248 = *(int *)0xC2A11D0;
                                                            if ((t248 & 0x8) != 0) {
                                                                t249 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t241 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t249 - 1);
                                                                if ((int)(t249 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                t240 = 0x10;
                                                                if ((t239 & t240) == 0) {
                                                                    t252 = *(int *)0xC2A11D4;
                                                                    if (t252 == 0) {
                                                                        t253 = *(int *)0xC2A11D0;
                                                                        if ((t253 & t240) != 0) {
                                                                            t241 = 0x1;
                                                                            t254 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t254 + 0x1);
                                                                            if ((int)(t254 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t241 = 0x1;
                                                                    t265 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t265 + 0x1);
                                                                    if ((int)(t265 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t240 = 0x10;
                                                            if ((t239 & t240) == 0) {
                                                                t276 = *(int *)0xC2A11D4;
                                                                if (t276 == 0) {
                                                                    t277 = *(int *)0xC2A11D0;
                                                                    if ((t277 & t240) != 0) {
                                                                        t241 = 0x1;
                                                                        t278 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t278 + 0x1);
                                                                        if ((int)(t278 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t241 = 0x1;
                                                                t289 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t289 + 0x1);
                                                                if ((int)(t289 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t300 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t241 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t300 - 1);
                                                        if ((int)(t300 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    } else {
                                        t311 = t235;
                                        t312 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                                        t313 = 0xFFFFFFFF;
                                        for (;;) {
                                            t314 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t314 >= 0) ? (0x1 << (t314 & 31)) : ((-(int)t314 & 31) ? ((int)0x1 >> (-(int)t314 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t313 == 0) {
                                                    t315 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t315 + 0x1);
                                                    if ((int)(t315 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t318 = *(int *)0xC2A11CC;
                                                    t311 = t318;
                                                    if ((t311 & 0x8) == 0) {
                                                        t319 = *(int *)0xC2A11D4;
                                                        if (t319 == 0) {
                                                            t320 = *(int *)0xC2A11D0;
                                                            if ((t320 & 0x8) != 0) {
                                                                t321 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t313 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t321 - 1);
                                                                if ((int)(t321 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                t312 = 0x10;
                                                                if ((t311 & t312) == 0) {
                                                                    t324 = *(int *)0xC2A11D4;
                                                                    if (t324 == 0) {
                                                                        t325 = *(int *)0xC2A11D0;
                                                                        if ((t325 & t312) != 0) {
                                                                            t313 = 0x1;
                                                                            t326 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t326 + 0x1);
                                                                            if ((int)(t326 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t313 = 0x1;
                                                                    t337 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t337 + 0x1);
                                                                    if ((int)(t337 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t312 = 0x10;
                                                            if ((t311 & t312) == 0) {
                                                                t348 = *(int *)0xC2A11D4;
                                                                if (t348 == 0) {
                                                                    t349 = *(int *)0xC2A11D0;
                                                                    if ((t349 & t312) != 0) {
                                                                        t313 = 0x1;
                                                                        t350 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t350 + 0x1);
                                                                        if ((int)(t350 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t313 = 0x1;
                                                                t361 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t361 + 0x1);
                                                                if ((int)(t361 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t372 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t313 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t372 - 1);
                                                        if ((int)(t372 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    }
                                } else {
                                    if ((t235 & 0x10) == 0) {
                                        t388 = *(int *)0xC2A11D4;
                                        if (t388 == 0) {
                                            t389 = *(int *)0xC2A11D0;
                                            if ((t389 & 0x10) != 0) {
                                                t390 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t390 + 0x1);
                                                if ((int)(t390 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    t391 = t235;
                                                    t392 = 0x1;
                                                    for (;;) {
                                                        t393 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        if (((((int)t393 >= 0) ? (0x1 << (t393 & 31)) : ((-(int)t393 & 31) ? ((int)0x1 >> (-(int)t393 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                            if (t392 == 0) {
                                                                t394 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t394 + 0x1);
                                                                if ((int)(t394 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            } else {
                                                                t397 = *(int *)0xC2A11CC;
                                                                t391 = t397;
                                                                if ((t391 & 0x8) == 0) {
                                                                    t398 = *(int *)0xC2A11D4;
                                                                    if (t398 == 0) {
                                                                        t399 = *(int *)0xC2A11D0;
                                                                        if ((t399 & 0x8) != 0) {
                                                                            t400 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            t392 = 0xFFFFFFFF;
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t400 - 1);
                                                                            if ((int)(t400 - 1) < 0) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                            }
                                                                        } else {
                                                                            if ((t391 & 0x10) == 0) {
                                                                                t403 = *(int *)0xC2A11D4;
                                                                                if (t403 == 0) {
                                                                                    t404 = *(int *)0xC2A11D0;
                                                                                    if ((t404 & 0x10) != 0) {
                                                                                        t392 = 0x1;
                                                                                        t405 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t405 + 0x1);
                                                                                        if ((int)(t405 + 0x1) >= (int)a5) {
                                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t392 = 0x1;
                                                                                t416 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t416 + 0x1);
                                                                                if ((int)(t416 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if ((t391 & 0x10) == 0) {
                                                                            t427 = *(int *)0xC2A11D4;
                                                                            if (t427 == 0) {
                                                                                t428 = *(int *)0xC2A11D0;
                                                                                if ((t428 & 0x10) != 0) {
                                                                                    t392 = 0x1;
                                                                                    t429 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t429 + 0x1);
                                                                                    if ((int)(t429 + 0x1) >= (int)a5) {
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t392 = 0x1;
                                                                            t440 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t440 + 0x1);
                                                                            if ((int)(t440 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t451 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t392 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t451 - 1);
                                                                    if ((int)(t451 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                }
                                                            }
                                                            continue;
                                                        }
                                                        break;
                                                    }
                                                } else {
                                                    t462 = t235;
                                                    t463 = 0x1;
                                                    for (;;) {
                                                        t464 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        if (((((int)t464 >= 0) ? (0x1 << (t464 & 31)) : ((-(int)t464 & 31) ? ((int)0x1 >> (-(int)t464 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                            if (t463 == 0) {
                                                                t465 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t465 + 0x1);
                                                                if ((int)(t465 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            } else {
                                                                t468 = *(int *)0xC2A11CC;
                                                                t462 = t468;
                                                                if ((t462 & 0x8) == 0) {
                                                                    t469 = *(int *)0xC2A11D4;
                                                                    if (t469 == 0) {
                                                                        t470 = *(int *)0xC2A11D0;
                                                                        if ((t470 & 0x8) != 0) {
                                                                            t471 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            t463 = 0xFFFFFFFF;
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t471 - 1);
                                                                            if ((int)(t471 - 1) < 0) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                            }
                                                                        } else {
                                                                            if ((t462 & 0x10) == 0) {
                                                                                t474 = *(int *)0xC2A11D4;
                                                                                if (t474 == 0) {
                                                                                    t475 = *(int *)0xC2A11D0;
                                                                                    if ((t475 & 0x10) != 0) {
                                                                                        t463 = 0x1;
                                                                                        t476 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t476 + 0x1);
                                                                                        if ((int)(t476 + 0x1) >= (int)a5) {
                                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t463 = 0x1;
                                                                                t487 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t487 + 0x1);
                                                                                if ((int)(t487 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if ((t462 & 0x10) == 0) {
                                                                            t498 = *(int *)0xC2A11D4;
                                                                            if (t498 == 0) {
                                                                                t499 = *(int *)0xC2A11D0;
                                                                                if ((t499 & 0x10) != 0) {
                                                                                    t463 = 0x1;
                                                                                    t500 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t500 + 0x1);
                                                                                    if ((int)(t500 + 0x1) >= (int)a5) {
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t463 = 0x1;
                                                                            t511 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t511 + 0x1);
                                                                            if ((int)(t511 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t522 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t463 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t522 - 1);
                                                                    if ((int)(t522 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                }
                                                            }
                                                            continue;
                                                        }
                                                        break;
                                                    }
                                                }
                                            } else {
                                                t537 = t235;
                                                t538 = 0x0;
                                                for (;;) {
                                                    t539 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    if (((((int)t539 >= 0) ? (0x1 << (t539 & 31)) : ((-(int)t539 & 31) ? ((int)0x1 >> (-(int)t539 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                        if (t538 == 0) {
                                                            t540 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t540 + 0x1);
                                                            if ((int)(t540 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        } else {
                                                            t543 = *(int *)0xC2A11CC;
                                                            t537 = t543;
                                                            if ((t537 & 0x8) == 0) {
                                                                t544 = *(int *)0xC2A11D4;
                                                                if (t544 == 0) {
                                                                    t545 = *(int *)0xC2A11D0;
                                                                    if ((t545 & 0x8) != 0) {
                                                                        t546 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        t538 = 0xFFFFFFFF;
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t546 - 1);
                                                                        if ((int)(t546 - 1) < 0) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                        }
                                                                    } else {
                                                                        if ((t537 & 0x10) == 0) {
                                                                            t549 = *(int *)0xC2A11D4;
                                                                            if (t549 == 0) {
                                                                                t550 = *(int *)0xC2A11D0;
                                                                                if ((t550 & 0x10) != 0) {
                                                                                    t538 = 0x1;
                                                                                    t551 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t551 + 0x1);
                                                                                    if ((int)(t551 + 0x1) >= (int)a5) {
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t538 = 0x1;
                                                                            t562 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t562 + 0x1);
                                                                            if ((int)(t562 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((t537 & 0x10) == 0) {
                                                                        t573 = *(int *)0xC2A11D4;
                                                                        if (t573 == 0) {
                                                                            t574 = *(int *)0xC2A11D0;
                                                                            if ((t574 & 0x10) != 0) {
                                                                                t538 = 0x1;
                                                                                t575 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t575 + 0x1);
                                                                                if ((int)(t575 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t538 = 0x1;
                                                                        t586 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t586 + 0x1);
                                                                        if ((int)(t586 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t597 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t538 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t597 - 1);
                                                                if ((int)(t597 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            }
                                                        }
                                                        continue;
                                                    }
                                                    break;
                                                }
                                            }
                                        } else {
                                            t612 = t235;
                                            t613 = 0x0;
                                            for (;;) {
                                                t614 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                if (((((int)t614 >= 0) ? (0x1 << (t614 & 31)) : ((-(int)t614 & 31) ? ((int)0x1 >> (-(int)t614 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                    if (t613 == 0) {
                                                        t615 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t615 + 0x1);
                                                        if ((int)(t615 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    } else {
                                                        t618 = *(int *)0xC2A11CC;
                                                        t612 = t618;
                                                        if ((t612 & 0x8) == 0) {
                                                            t619 = *(int *)0xC2A11D4;
                                                            if (t619 == 0) {
                                                                t620 = *(int *)0xC2A11D0;
                                                                if ((t620 & 0x8) != 0) {
                                                                    t621 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t613 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t621 - 1);
                                                                    if ((int)(t621 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                } else {
                                                                    if ((t612 & 0x10) == 0) {
                                                                        t624 = *(int *)0xC2A11D4;
                                                                        if (t624 == 0) {
                                                                            t625 = *(int *)0xC2A11D0;
                                                                            if ((t625 & 0x10) != 0) {
                                                                                t613 = 0x1;
                                                                                t626 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t626 + 0x1);
                                                                                if ((int)(t626 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t613 = 0x1;
                                                                        t637 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t637 + 0x1);
                                                                        if ((int)(t637 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((t612 & 0x10) == 0) {
                                                                    t648 = *(int *)0xC2A11D4;
                                                                    if (t648 == 0) {
                                                                        t649 = *(int *)0xC2A11D0;
                                                                        if ((t649 & 0x10) != 0) {
                                                                            t613 = 0x1;
                                                                            t650 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t650 + 0x1);
                                                                            if ((int)(t650 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t613 = 0x1;
                                                                    t661 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t661 + 0x1);
                                                                    if ((int)(t661 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t672 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t613 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t672 - 1);
                                                            if ((int)(t672 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        }
                                                    }
                                                    continue;
                                                }
                                                break;
                                            }
                                        }
                                    } else {
                                        t687 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t687 + 0x1);
                                        if ((int)(t687 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            t688 = t235;
                                            t689 = 0x1;
                                            for (;;) {
                                                t690 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                if (((((int)t690 >= 0) ? (0x1 << (t690 & 31)) : ((-(int)t690 & 31) ? ((int)0x1 >> (-(int)t690 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                    if (t689 == 0) {
                                                        t691 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t691 + 0x1);
                                                        if ((int)(t691 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    } else {
                                                        t694 = *(int *)0xC2A11CC;
                                                        t688 = t694;
                                                        if ((t688 & 0x8) == 0) {
                                                            t695 = *(int *)0xC2A11D4;
                                                            if (t695 == 0) {
                                                                t696 = *(int *)0xC2A11D0;
                                                                if ((t696 & 0x8) != 0) {
                                                                    t697 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t689 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t697 - 1);
                                                                    if ((int)(t697 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                } else {
                                                                    if ((t688 & 0x10) == 0) {
                                                                        t700 = *(int *)0xC2A11D4;
                                                                        if (t700 == 0) {
                                                                            t701 = *(int *)0xC2A11D0;
                                                                            if ((t701 & 0x10) != 0) {
                                                                                t689 = 0x1;
                                                                                t702 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t702 + 0x1);
                                                                                if ((int)(t702 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t689 = 0x1;
                                                                        t713 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t713 + 0x1);
                                                                        if ((int)(t713 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((t688 & 0x10) == 0) {
                                                                    t724 = *(int *)0xC2A11D4;
                                                                    if (t724 == 0) {
                                                                        t725 = *(int *)0xC2A11D0;
                                                                        if ((t725 & 0x10) != 0) {
                                                                            t689 = 0x1;
                                                                            t726 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t726 + 0x1);
                                                                            if ((int)(t726 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t689 = 0x1;
                                                                    t737 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t737 + 0x1);
                                                                    if ((int)(t737 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t748 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t689 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t748 - 1);
                                                            if ((int)(t748 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        }
                                                    }
                                                    continue;
                                                }
                                                break;
                                            }
                                        } else {
                                            t759 = t235;
                                            t760 = 0x1;
                                            for (;;) {
                                                t761 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                if (((((int)t761 >= 0) ? (0x1 << (t761 & 31)) : ((-(int)t761 & 31) ? ((int)0x1 >> (-(int)t761 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                    if (t760 == 0) {
                                                        t762 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t762 + 0x1);
                                                        if ((int)(t762 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    } else {
                                                        t765 = *(int *)0xC2A11CC;
                                                        t759 = t765;
                                                        if ((t759 & 0x8) == 0) {
                                                            t766 = *(int *)0xC2A11D4;
                                                            if (t766 == 0) {
                                                                t767 = *(int *)0xC2A11D0;
                                                                if ((t767 & 0x8) != 0) {
                                                                    t768 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t760 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t768 - 1);
                                                                    if ((int)(t768 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                } else {
                                                                    if ((t759 & 0x10) == 0) {
                                                                        t771 = *(int *)0xC2A11D4;
                                                                        if (t771 == 0) {
                                                                            t772 = *(int *)0xC2A11D0;
                                                                            if ((t772 & 0x10) != 0) {
                                                                                t760 = 0x1;
                                                                                t773 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t773 + 0x1);
                                                                                if ((int)(t773 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t760 = 0x1;
                                                                        t784 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t784 + 0x1);
                                                                        if ((int)(t784 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((t759 & 0x10) == 0) {
                                                                    t795 = *(int *)0xC2A11D4;
                                                                    if (t795 == 0) {
                                                                        t796 = *(int *)0xC2A11D0;
                                                                        if ((t796 & 0x10) != 0) {
                                                                            t760 = 0x1;
                                                                            t797 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t797 + 0x1);
                                                                            if ((int)(t797 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t760 = 0x1;
                                                                    t808 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t808 + 0x1);
                                                                    if ((int)(t808 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t819 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t760 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t819 - 1);
                                                            if ((int)(t819 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        }
                                                    }
                                                    continue;
                                                }
                                                break;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((t235 & 0x10) == 0) {
                                    t845 = *(int *)0xC2A11D4;
                                    if (t845 == 0) {
                                        t846 = *(int *)0xC2A11D0;
                                        if ((t846 & 0x10) != 0) {
                                            t847 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t847 + 0x1);
                                            if ((int)(t847 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                t848 = t235;
                                                t849 = 0x1;
                                                for (;;) {
                                                    t850 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    if (((((int)t850 >= 0) ? (0x1 << (t850 & 31)) : ((-(int)t850 & 31) ? ((int)0x1 >> (-(int)t850 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                        if (t849 == 0) {
                                                            t851 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t851 + 0x1);
                                                            if ((int)(t851 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        } else {
                                                            t854 = *(int *)0xC2A11CC;
                                                            t848 = t854;
                                                            if ((t848 & 0x8) == 0) {
                                                                t855 = *(int *)0xC2A11D4;
                                                                if (t855 == 0) {
                                                                    t856 = *(int *)0xC2A11D0;
                                                                    if ((t856 & 0x8) != 0) {
                                                                        t857 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        t849 = 0xFFFFFFFF;
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t857 - 1);
                                                                        if ((int)(t857 - 1) < 0) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                        }
                                                                    } else {
                                                                        if ((t848 & 0x10) == 0) {
                                                                            t860 = *(int *)0xC2A11D4;
                                                                            if (t860 == 0) {
                                                                                t861 = *(int *)0xC2A11D0;
                                                                                if ((t861 & 0x10) != 0) {
                                                                                    t849 = 0x1;
                                                                                    t862 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t862 + 0x1);
                                                                                    if ((int)(t862 + 0x1) >= (int)a5) {
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t849 = 0x1;
                                                                            t873 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t873 + 0x1);
                                                                            if ((int)(t873 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((t848 & 0x10) == 0) {
                                                                        t884 = *(int *)0xC2A11D4;
                                                                        if (t884 == 0) {
                                                                            t885 = *(int *)0xC2A11D0;
                                                                            if ((t885 & 0x10) != 0) {
                                                                                t849 = 0x1;
                                                                                t886 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t886 + 0x1);
                                                                                if ((int)(t886 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t849 = 0x1;
                                                                        t897 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t897 + 0x1);
                                                                        if ((int)(t897 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t908 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t849 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t908 - 1);
                                                                if ((int)(t908 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            }
                                                        }
                                                        continue;
                                                    }
                                                    break;
                                                }
                                            } else {
                                                t919 = t235;
                                                t920 = 0x1;
                                                for (;;) {
                                                    t921 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    if (((((int)t921 >= 0) ? (0x1 << (t921 & 31)) : ((-(int)t921 & 31) ? ((int)0x1 >> (-(int)t921 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                        if (t920 == 0) {
                                                            t922 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t922 + 0x1);
                                                            if ((int)(t922 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        } else {
                                                            t925 = *(int *)0xC2A11CC;
                                                            t919 = t925;
                                                            if ((t919 & 0x8) == 0) {
                                                                t926 = *(int *)0xC2A11D4;
                                                                if (t926 == 0) {
                                                                    t927 = *(int *)0xC2A11D0;
                                                                    if ((t927 & 0x8) != 0) {
                                                                        t928 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        t920 = 0xFFFFFFFF;
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t928 - 1);
                                                                        if ((int)(t928 - 1) < 0) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                        }
                                                                    } else {
                                                                        if ((t919 & 0x10) == 0) {
                                                                            t931 = *(int *)0xC2A11D4;
                                                                            if (t931 == 0) {
                                                                                t932 = *(int *)0xC2A11D0;
                                                                                if ((t932 & 0x10) != 0) {
                                                                                    t920 = 0x1;
                                                                                    t933 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t933 + 0x1);
                                                                                    if ((int)(t933 + 0x1) >= (int)a5) {
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t920 = 0x1;
                                                                            t944 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t944 + 0x1);
                                                                            if ((int)(t944 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((t919 & 0x10) == 0) {
                                                                        t955 = *(int *)0xC2A11D4;
                                                                        if (t955 == 0) {
                                                                            t956 = *(int *)0xC2A11D0;
                                                                            if ((t956 & 0x10) != 0) {
                                                                                t920 = 0x1;
                                                                                t957 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t957 + 0x1);
                                                                                if ((int)(t957 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t920 = 0x1;
                                                                        t968 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t968 + 0x1);
                                                                        if ((int)(t968 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t979 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t920 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t979 - 1);
                                                                if ((int)(t979 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            }
                                                        }
                                                        continue;
                                                    }
                                                    break;
                                                }
                                            }
                                        } else {
                                            t994 = t235;
                                            t995 = 0x0;
                                            for (;;) {
                                                t996 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                if (((((int)t996 >= 0) ? (0x1 << (t996 & 31)) : ((-(int)t996 & 31) ? ((int)0x1 >> (-(int)t996 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                    if (t995 == 0) {
                                                        t997 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t997 + 0x1);
                                                        if ((int)(t997 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    } else {
                                                        t1000 = *(int *)0xC2A11CC;
                                                        t994 = t1000;
                                                        if ((t994 & 0x8) == 0) {
                                                            t1001 = *(int *)0xC2A11D4;
                                                            if (t1001 == 0) {
                                                                t1002 = *(int *)0xC2A11D0;
                                                                if ((t1002 & 0x8) != 0) {
                                                                    t1003 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t995 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1003 - 1);
                                                                    if ((int)(t1003 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                } else {
                                                                    if ((t994 & 0x10) == 0) {
                                                                        t1006 = *(int *)0xC2A11D4;
                                                                        if (t1006 == 0) {
                                                                            t1007 = *(int *)0xC2A11D0;
                                                                            if ((t1007 & 0x10) != 0) {
                                                                                t995 = 0x1;
                                                                                t1008 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1008 + 0x1);
                                                                                if ((int)(t1008 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t995 = 0x1;
                                                                        t1019 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1019 + 0x1);
                                                                        if ((int)(t1019 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((t994 & 0x10) == 0) {
                                                                    t1030 = *(int *)0xC2A11D4;
                                                                    if (t1030 == 0) {
                                                                        t1031 = *(int *)0xC2A11D0;
                                                                        if ((t1031 & 0x10) != 0) {
                                                                            t995 = 0x1;
                                                                            t1032 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1032 + 0x1);
                                                                            if ((int)(t1032 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t995 = 0x1;
                                                                    t1043 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1043 + 0x1);
                                                                    if ((int)(t1043 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t1054 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t995 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1054 - 1);
                                                            if ((int)(t1054 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        }
                                                    }
                                                    continue;
                                                }
                                                break;
                                            }
                                        }
                                    } else {
                                        t1069 = t235;
                                        t1070 = 0x0;
                                        for (;;) {
                                            t1071 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t1071 >= 0) ? (0x1 << (t1071 & 31)) : ((-(int)t1071 & 31) ? ((int)0x1 >> (-(int)t1071 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t1070 == 0) {
                                                    t1072 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1072 + 0x1);
                                                    if ((int)(t1072 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t1075 = *(int *)0xC2A11CC;
                                                    t1069 = t1075;
                                                    if ((t1069 & 0x8) == 0) {
                                                        t1076 = *(int *)0xC2A11D4;
                                                        if (t1076 == 0) {
                                                            t1077 = *(int *)0xC2A11D0;
                                                            if ((t1077 & 0x8) != 0) {
                                                                t1078 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t1070 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1078 - 1);
                                                                if ((int)(t1078 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                if ((t1069 & 0x10) == 0) {
                                                                    t1081 = *(int *)0xC2A11D4;
                                                                    if (t1081 == 0) {
                                                                        t1082 = *(int *)0xC2A11D0;
                                                                        if ((t1082 & 0x10) != 0) {
                                                                            t1070 = 0x1;
                                                                            t1083 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1083 + 0x1);
                                                                            if ((int)(t1083 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t1070 = 0x1;
                                                                    t1094 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1094 + 0x1);
                                                                    if ((int)(t1094 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((t1069 & 0x10) == 0) {
                                                                t1105 = *(int *)0xC2A11D4;
                                                                if (t1105 == 0) {
                                                                    t1106 = *(int *)0xC2A11D0;
                                                                    if ((t1106 & 0x10) != 0) {
                                                                        t1070 = 0x1;
                                                                        t1107 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1107 + 0x1);
                                                                        if ((int)(t1107 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1070 = 0x1;
                                                                t1118 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1118 + 0x1);
                                                                if ((int)(t1118 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1129 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t1070 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1129 - 1);
                                                        if ((int)(t1129 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    }
                                } else {
                                    t1144 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1144 + 0x1);
                                    if ((int)(t1144 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        t1145 = t235;
                                        t1146 = 0x1;
                                        for (;;) {
                                            t1147 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t1147 >= 0) ? (0x1 << (t1147 & 31)) : ((-(int)t1147 & 31) ? ((int)0x1 >> (-(int)t1147 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t1146 == 0) {
                                                    t1148 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1148 + 0x1);
                                                    if ((int)(t1148 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t1151 = *(int *)0xC2A11CC;
                                                    t1145 = t1151;
                                                    if ((t1145 & 0x8) == 0) {
                                                        t1152 = *(int *)0xC2A11D4;
                                                        if (t1152 == 0) {
                                                            t1153 = *(int *)0xC2A11D0;
                                                            if ((t1153 & 0x8) != 0) {
                                                                t1154 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t1146 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1154 - 1);
                                                                if ((int)(t1154 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                if ((t1145 & 0x10) == 0) {
                                                                    t1157 = *(int *)0xC2A11D4;
                                                                    if (t1157 == 0) {
                                                                        t1158 = *(int *)0xC2A11D0;
                                                                        if ((t1158 & 0x10) != 0) {
                                                                            t1146 = 0x1;
                                                                            t1159 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1159 + 0x1);
                                                                            if ((int)(t1159 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t1146 = 0x1;
                                                                    t1170 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1170 + 0x1);
                                                                    if ((int)(t1170 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((t1145 & 0x10) == 0) {
                                                                t1181 = *(int *)0xC2A11D4;
                                                                if (t1181 == 0) {
                                                                    t1182 = *(int *)0xC2A11D0;
                                                                    if ((t1182 & 0x10) != 0) {
                                                                        t1146 = 0x1;
                                                                        t1183 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1183 + 0x1);
                                                                        if ((int)(t1183 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1146 = 0x1;
                                                                t1194 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1194 + 0x1);
                                                                if ((int)(t1194 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1205 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t1146 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1205 - 1);
                                                        if ((int)(t1205 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    } else {
                                        t1216 = t235;
                                        t1217 = 0x1;
                                        for (;;) {
                                            t1218 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t1218 >= 0) ? (0x1 << (t1218 & 31)) : ((-(int)t1218 & 31) ? ((int)0x1 >> (-(int)t1218 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t1217 == 0) {
                                                    t1219 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1219 + 0x1);
                                                    if ((int)(t1219 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t1222 = *(int *)0xC2A11CC;
                                                    t1216 = t1222;
                                                    if ((t1216 & 0x8) == 0) {
                                                        t1223 = *(int *)0xC2A11D4;
                                                        if (t1223 == 0) {
                                                            t1224 = *(int *)0xC2A11D0;
                                                            if ((t1224 & 0x8) != 0) {
                                                                t1225 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t1217 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1225 - 1);
                                                                if ((int)(t1225 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                if ((t1216 & 0x10) == 0) {
                                                                    t1228 = *(int *)0xC2A11D4;
                                                                    if (t1228 == 0) {
                                                                        t1229 = *(int *)0xC2A11D0;
                                                                        if ((t1229 & 0x10) != 0) {
                                                                            t1217 = 0x1;
                                                                            t1230 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1230 + 0x1);
                                                                            if ((int)(t1230 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t1217 = 0x1;
                                                                    t1241 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1241 + 0x1);
                                                                    if ((int)(t1241 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((t1216 & 0x10) == 0) {
                                                                t1252 = *(int *)0xC2A11D4;
                                                                if (t1252 == 0) {
                                                                    t1253 = *(int *)0xC2A11D0;
                                                                    if ((t1253 & 0x10) != 0) {
                                                                        t1217 = 0x1;
                                                                        t1254 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1254 + 0x1);
                                                                        if ((int)(t1254 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1217 = 0x1;
                                                                t1265 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1265 + 0x1);
                                                                if ((int)(t1265 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1276 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t1217 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1276 - 1);
                                                        if ((int)(t1276 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                        } else {
                            t1302 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1302 - 1);
                            if ((int)(t1302 - 1) < 0) {
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                t1303 = t235;
                                t1304 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                                t1305 = 0xFFFFFFFF;
                                for (;;) {
                                    t1306 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (((((int)t1306 >= 0) ? (0x1 << (t1306 & 31)) : ((-(int)t1306 & 31) ? ((int)0x1 >> (-(int)t1306 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                        if (t1305 == 0) {
                                            t1307 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1307 + 0x1);
                                            if ((int)(t1307 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        } else {
                                            t1310 = *(int *)0xC2A11CC;
                                            t1303 = t1310;
                                            if ((t1303 & 0x8) == 0) {
                                                t1311 = *(int *)0xC2A11D4;
                                                if (t1311 == 0) {
                                                    t1312 = *(int *)0xC2A11D0;
                                                    if ((t1312 & 0x8) != 0) {
                                                        t1313 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t1305 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1313 - 1);
                                                        if ((int)(t1313 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    } else {
                                                        t1304 = 0x10;
                                                        if ((t1303 & t1304) == 0) {
                                                            t1316 = *(int *)0xC2A11D4;
                                                            if (t1316 == 0) {
                                                                t1317 = *(int *)0xC2A11D0;
                                                                if ((t1317 & t1304) != 0) {
                                                                    t1305 = 0x1;
                                                                    t1318 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1318 + 0x1);
                                                                    if ((int)(t1318 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t1305 = 0x1;
                                                            t1329 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1329 + 0x1);
                                                            if ((int)(t1329 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t1304 = 0x10;
                                                    if ((t1303 & t1304) == 0) {
                                                        t1340 = *(int *)0xC2A11D4;
                                                        if (t1340 == 0) {
                                                            t1341 = *(int *)0xC2A11D0;
                                                            if ((t1341 & t1304) != 0) {
                                                                t1305 = 0x1;
                                                                t1342 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1342 + 0x1);
                                                                if ((int)(t1342 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1305 = 0x1;
                                                        t1353 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1353 + 0x1);
                                                        if ((int)(t1353 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t1364 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t1305 = 0xFFFFFFFF;
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1364 - 1);
                                                if ((int)(t1364 - 1) < 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                }
                                            }
                                        }
                                        continue;
                                    }
                                    break;
                                }
                            } else {
                                t1375 = t235;
                                t1376 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                                t1377 = 0xFFFFFFFF;
                                for (;;) {
                                    t1378 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (((((int)t1378 >= 0) ? (0x1 << (t1378 & 31)) : ((-(int)t1378 & 31) ? ((int)0x1 >> (-(int)t1378 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                        if (t1377 == 0) {
                                            t1379 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1379 + 0x1);
                                            if ((int)(t1379 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        } else {
                                            t1382 = *(int *)0xC2A11CC;
                                            t1375 = t1382;
                                            if ((t1375 & 0x8) == 0) {
                                                t1383 = *(int *)0xC2A11D4;
                                                if (t1383 == 0) {
                                                    t1384 = *(int *)0xC2A11D0;
                                                    if ((t1384 & 0x8) != 0) {
                                                        t1385 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t1377 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1385 - 1);
                                                        if ((int)(t1385 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    } else {
                                                        t1376 = 0x10;
                                                        if ((t1375 & t1376) == 0) {
                                                            t1388 = *(int *)0xC2A11D4;
                                                            if (t1388 == 0) {
                                                                t1389 = *(int *)0xC2A11D0;
                                                                if ((t1389 & t1376) != 0) {
                                                                    t1377 = 0x1;
                                                                    t1390 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1390 + 0x1);
                                                                    if ((int)(t1390 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t1377 = 0x1;
                                                            t1401 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1401 + 0x1);
                                                            if ((int)(t1401 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t1376 = 0x10;
                                                    if ((t1375 & t1376) == 0) {
                                                        t1412 = *(int *)0xC2A11D4;
                                                        if (t1412 == 0) {
                                                            t1413 = *(int *)0xC2A11D0;
                                                            if ((t1413 & t1376) != 0) {
                                                                t1377 = 0x1;
                                                                t1414 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1414 + 0x1);
                                                                if ((int)(t1414 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1377 = 0x1;
                                                        t1425 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1425 + 0x1);
                                                        if ((int)(t1425 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t1436 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t1377 = 0xFFFFFFFF;
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1436 - 1);
                                                if ((int)(t1436 - 1) < 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                }
                                            }
                                        }
                                        continue;
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
            } else {
                t1473 = t4;
                t1474 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                t1475 = 0x0;
                for (;;) {
                    t1476 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    if (((((int)t1476 >= 0) ? (0x1 << (t1476 & 31)) : ((-(int)t1476 & 31) ? ((int)0x1 >> (-(int)t1476 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                        if (t1475 == 0) {
                            t1477 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1477 + 0x1);
                            if ((int)(t1477 + 0x1) >= (int)a5) {
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                            }
                        } else {
                            t1480 = *(int *)0xC2A11CC;
                            t1473 = t1480;
                            if ((t1473 & 0x8) == 0) {
                                t1481 = *(int *)0xC2A11D4;
                                if (t1481 == 0) {
                                    t1482 = *(int *)0xC2A11D0;
                                    if ((t1482 & 0x8) != 0) {
                                        t1483 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1475 = 0xFFFFFFFF;
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1483 - 1);
                                        if ((int)(t1483 - 1) < 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                        }
                                    } else {
                                        t1474 = 0x10;
                                        if ((t1473 & t1474) == 0) {
                                            t1486 = *(int *)0xC2A11D4;
                                            if (t1486 == 0) {
                                                t1487 = *(int *)0xC2A11D0;
                                                if ((t1487 & t1474) != 0) {
                                                    t1475 = 0x1;
                                                    t1488 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1488 + 0x1);
                                                    if ((int)(t1488 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t1475 = 0x1;
                                            t1499 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1499 + 0x1);
                                            if ((int)(t1499 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t1474 = 0x10;
                                    if ((t1473 & t1474) == 0) {
                                        t1510 = *(int *)0xC2A11D4;
                                        if (t1510 == 0) {
                                            t1511 = *(int *)0xC2A11D0;
                                            if ((t1511 & t1474) != 0) {
                                                t1475 = 0x1;
                                                t1512 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1512 + 0x1);
                                                if ((int)(t1512 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t1475 = 0x1;
                                        t1523 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1523 + 0x1);
                                        if ((int)(t1523 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    }
                                }
                            } else {
                                t1534 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t1475 = 0xFFFFFFFF;
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1534 - 1);
                                if ((int)(t1534 - 1) < 0) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                }
                            }
                        }
                        continue;
                    }
                    break;
                }
            }
            t1552 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
            t1554 = 0x0;
            if (t1552 != t1) {
                FUN_0c07f5c0();
                t1554 = 0x1;
            }
            t1562 = t1554;
        }
        t3133 = t1562;
    } else {
        t1574 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
        t1575 = *(int *)0xC2A11CC;
        if ((t1574 & 0x4) != 0) {
            if ((0x2 & t1575) != 0) {
                t1576 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                t1577 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x18));
                t1578 = *(int *)(((((t1576 << 2) << 1) + t1577) + 0x8));
                if (t1578 != 0) {
                    t1579 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                    *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t1579 | 0x8);
                    FUN_0c07f5c0();
                    t1581 = a4;
                    t1582 = a5;
                    t1583 = 0x0;
                    for (;;) {
                        t1584 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (((((int)t1584 >= 0) ? (0x1 << (t1584 & 31)) : ((-(int)t1584 & 31) ? ((int)0x1 >> (-(int)t1584 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                            if (t1583 == 0) {
                                t1585 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1585 + 0x1);
                                if ((int)(t1585 + 0x1) >= (int)a5) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                }
                            } else {
                                t1588 = *(int *)0xC2A11CC;
                                t1581 = t1588;
                                if ((t1581 & 0x8) == 0) {
                                    t1589 = *(int *)0xC2A11D4;
                                    if (t1589 == 0) {
                                        t1590 = *(int *)0xC2A11D0;
                                        if ((t1590 & 0x8) != 0) {
                                            t1591 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1583 = 0xFFFFFFFF;
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1591 - 1);
                                            if ((int)(t1591 - 1) < 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                            }
                                        } else {
                                            t1582 = 0x10;
                                            if ((t1581 & t1582) == 0) {
                                                t1594 = *(int *)0xC2A11D4;
                                                if (t1594 == 0) {
                                                    t1595 = *(int *)0xC2A11D0;
                                                    if ((t1595 & t1582) != 0) {
                                                        t1583 = 0x1;
                                                        t1596 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1596 + 0x1);
                                                        if ((int)(t1596 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t1583 = 0x1;
                                                t1607 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1607 + 0x1);
                                                if ((int)(t1607 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t1582 = 0x10;
                                        if ((t1581 & t1582) == 0) {
                                            t1618 = *(int *)0xC2A11D4;
                                            if (t1618 == 0) {
                                                t1619 = *(int *)0xC2A11D0;
                                                if ((t1619 & t1582) != 0) {
                                                    t1583 = 0x1;
                                                    t1620 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1620 + 0x1);
                                                    if ((int)(t1620 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t1583 = 0x1;
                                            t1631 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1631 + 0x1);
                                            if ((int)(t1631 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t1642 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1583 = 0xFFFFFFFF;
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1642 - 1);
                                    if ((int)(t1642 - 1) < 0) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                    }
                                }
                            }
                            continue;
                        }
                        break;
                    }
                } else {
                    t1653 = t1578;
                    t1654 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                    t1655 = 0x0;
                    for (;;) {
                        t1656 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (((((int)t1656 >= 0) ? (0x1 << (t1656 & 31)) : ((-(int)t1656 & 31) ? ((int)0x1 >> (-(int)t1656 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                            if (t1655 == 0) {
                                t1657 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1657 + 0x1);
                                if ((int)(t1657 + 0x1) >= (int)a5) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                }
                            } else {
                                t1660 = *(int *)0xC2A11CC;
                                t1653 = t1660;
                                if ((t1653 & 0x8) == 0) {
                                    t1661 = *(int *)0xC2A11D4;
                                    if (t1661 == 0) {
                                        t1662 = *(int *)0xC2A11D0;
                                        if ((t1662 & 0x8) != 0) {
                                            t1663 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1655 = 0xFFFFFFFF;
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1663 - 1);
                                            if ((int)(t1663 - 1) < 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                            }
                                        } else {
                                            t1654 = 0x10;
                                            if ((t1653 & t1654) == 0) {
                                                t1666 = *(int *)0xC2A11D4;
                                                if (t1666 == 0) {
                                                    t1667 = *(int *)0xC2A11D0;
                                                    if ((t1667 & t1654) != 0) {
                                                        t1655 = 0x1;
                                                        t1668 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1668 + 0x1);
                                                        if ((int)(t1668 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t1655 = 0x1;
                                                t1679 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1679 + 0x1);
                                                if ((int)(t1679 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t1654 = 0x10;
                                        if ((t1653 & t1654) == 0) {
                                            t1690 = *(int *)0xC2A11D4;
                                            if (t1690 == 0) {
                                                t1691 = *(int *)0xC2A11D0;
                                                if ((t1691 & t1654) != 0) {
                                                    t1655 = 0x1;
                                                    t1692 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1692 + 0x1);
                                                    if ((int)(t1692 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t1655 = 0x1;
                                            t1703 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1703 + 0x1);
                                            if ((int)(t1703 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t1714 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1655 = 0xFFFFFFFF;
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1714 - 1);
                                    if ((int)(t1714 - 1) < 0) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                    }
                                }
                            }
                            continue;
                        }
                        break;
                    }
                }
            } else {
                if ((t1575 & 0x4) != 0) {
                    t1732 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                    *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t1732 | 0x9);
                    FUN_0c07f5c0();
                    t1734 = a4;
                    t1735 = a5;
                    t1736 = 0x0;
                    for (;;) {
                        t1737 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (((((int)t1737 >= 0) ? (0x1 << (t1737 & 31)) : ((-(int)t1737 & 31) ? ((int)0x1 >> (-(int)t1737 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                            if (t1736 == 0) {
                                t1738 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1738 + 0x1);
                                if ((int)(t1738 + 0x1) >= (int)a5) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                }
                            } else {
                                t1741 = *(int *)0xC2A11CC;
                                t1734 = t1741;
                                if ((t1734 & 0x8) == 0) {
                                    t1742 = *(int *)0xC2A11D4;
                                    if (t1742 == 0) {
                                        t1743 = *(int *)0xC2A11D0;
                                        if ((t1743 & 0x8) != 0) {
                                            t1744 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1736 = 0xFFFFFFFF;
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1744 - 1);
                                            if ((int)(t1744 - 1) < 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                            }
                                        } else {
                                            t1735 = 0x10;
                                            if ((t1734 & t1735) == 0) {
                                                t1747 = *(int *)0xC2A11D4;
                                                if (t1747 == 0) {
                                                    t1748 = *(int *)0xC2A11D0;
                                                    if ((t1748 & t1735) != 0) {
                                                        t1736 = 0x1;
                                                        t1749 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1749 + 0x1);
                                                        if ((int)(t1749 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t1736 = 0x1;
                                                t1760 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1760 + 0x1);
                                                if ((int)(t1760 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t1735 = 0x10;
                                        if ((t1734 & t1735) == 0) {
                                            t1771 = *(int *)0xC2A11D4;
                                            if (t1771 == 0) {
                                                t1772 = *(int *)0xC2A11D0;
                                                if ((t1772 & t1735) != 0) {
                                                    t1736 = 0x1;
                                                    t1773 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1773 + 0x1);
                                                    if ((int)(t1773 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t1736 = 0x1;
                                            t1784 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1784 + 0x1);
                                            if ((int)(t1784 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t1795 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1736 = 0xFFFFFFFF;
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1795 - 1);
                                    if ((int)(t1795 - 1) < 0) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                    }
                                }
                            }
                            continue;
                        }
                        break;
                    }
                } else {
                    t1806 = *(int *)0xC2A11CC;
                    if ((t1806 & 0x8) == 0) {
                        t1807 = *(int *)0xC2A11D4;
                        if (t1807 == 0) {
                            t1808 = *(int *)0xC2A11D0;
                            if ((t1808 & 0x8) != 0) {
                                t1809 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1809 - 1);
                                if ((int)(t1809 - 1) < 0) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                    t1810 = t1806;
                                    t1811 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                                    t1812 = 0xFFFFFFFF;
                                    for (;;) {
                                        t1813 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (((((int)t1813 >= 0) ? (0x1 << (t1813 & 31)) : ((-(int)t1813 & 31) ? ((int)0x1 >> (-(int)t1813 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                            if (t1812 == 0) {
                                                t1814 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1814 + 0x1);
                                                if ((int)(t1814 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            } else {
                                                t1817 = *(int *)0xC2A11CC;
                                                t1810 = t1817;
                                                if ((t1810 & 0x8) == 0) {
                                                    t1818 = *(int *)0xC2A11D4;
                                                    if (t1818 == 0) {
                                                        t1819 = *(int *)0xC2A11D0;
                                                        if ((t1819 & 0x8) != 0) {
                                                            t1820 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t1812 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1820 - 1);
                                                            if ((int)(t1820 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        } else {
                                                            t1811 = 0x10;
                                                            if ((t1810 & t1811) == 0) {
                                                                t1823 = *(int *)0xC2A11D4;
                                                                if (t1823 == 0) {
                                                                    t1824 = *(int *)0xC2A11D0;
                                                                    if ((t1824 & t1811) != 0) {
                                                                        t1812 = 0x1;
                                                                        t1825 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1825 + 0x1);
                                                                        if ((int)(t1825 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1812 = 0x1;
                                                                t1836 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1836 + 0x1);
                                                                if ((int)(t1836 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1811 = 0x10;
                                                        if ((t1810 & t1811) == 0) {
                                                            t1847 = *(int *)0xC2A11D4;
                                                            if (t1847 == 0) {
                                                                t1848 = *(int *)0xC2A11D0;
                                                                if ((t1848 & t1811) != 0) {
                                                                    t1812 = 0x1;
                                                                    t1849 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1849 + 0x1);
                                                                    if ((int)(t1849 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t1812 = 0x1;
                                                            t1860 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1860 + 0x1);
                                                            if ((int)(t1860 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t1871 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t1812 = 0xFFFFFFFF;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1871 - 1);
                                                    if ((int)(t1871 - 1) < 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                    }
                                                }
                                            }
                                            continue;
                                        }
                                        break;
                                    }
                                } else {
                                    t1882 = t1806;
                                    t1883 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                                    t1884 = 0xFFFFFFFF;
                                    for (;;) {
                                        t1885 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (((((int)t1885 >= 0) ? (0x1 << (t1885 & 31)) : ((-(int)t1885 & 31) ? ((int)0x1 >> (-(int)t1885 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                            if (t1884 == 0) {
                                                t1886 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1886 + 0x1);
                                                if ((int)(t1886 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            } else {
                                                t1889 = *(int *)0xC2A11CC;
                                                t1882 = t1889;
                                                if ((t1882 & 0x8) == 0) {
                                                    t1890 = *(int *)0xC2A11D4;
                                                    if (t1890 == 0) {
                                                        t1891 = *(int *)0xC2A11D0;
                                                        if ((t1891 & 0x8) != 0) {
                                                            t1892 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t1884 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1892 - 1);
                                                            if ((int)(t1892 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        } else {
                                                            t1883 = 0x10;
                                                            if ((t1882 & t1883) == 0) {
                                                                t1895 = *(int *)0xC2A11D4;
                                                                if (t1895 == 0) {
                                                                    t1896 = *(int *)0xC2A11D0;
                                                                    if ((t1896 & t1883) != 0) {
                                                                        t1884 = 0x1;
                                                                        t1897 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1897 + 0x1);
                                                                        if ((int)(t1897 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1884 = 0x1;
                                                                t1908 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1908 + 0x1);
                                                                if ((int)(t1908 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1883 = 0x10;
                                                        if ((t1882 & t1883) == 0) {
                                                            t1919 = *(int *)0xC2A11D4;
                                                            if (t1919 == 0) {
                                                                t1920 = *(int *)0xC2A11D0;
                                                                if ((t1920 & t1883) != 0) {
                                                                    t1884 = 0x1;
                                                                    t1921 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1921 + 0x1);
                                                                    if ((int)(t1921 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t1884 = 0x1;
                                                            t1932 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1932 + 0x1);
                                                            if ((int)(t1932 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t1943 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t1884 = 0xFFFFFFFF;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1943 - 1);
                                                    if ((int)(t1943 - 1) < 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                    }
                                                }
                                            }
                                            continue;
                                        }
                                        break;
                                    }
                                }
                            } else {
                                if ((t1806 & 0x10) == 0) {
                                    t1959 = *(int *)0xC2A11D4;
                                    if (t1959 == 0) {
                                        t1960 = *(int *)0xC2A11D0;
                                        if ((t1960 & 0x10) != 0) {
                                            t1961 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1961 + 0x1);
                                            if ((int)(t1961 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                t1962 = t1806;
                                                t1963 = 0x1;
                                                for (;;) {
                                                    t1964 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    if (((((int)t1964 >= 0) ? (0x1 << (t1964 & 31)) : ((-(int)t1964 & 31) ? ((int)0x1 >> (-(int)t1964 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                        if (t1963 == 0) {
                                                            t1965 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1965 + 0x1);
                                                            if ((int)(t1965 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        } else {
                                                            t1968 = *(int *)0xC2A11CC;
                                                            t1962 = t1968;
                                                            if ((t1962 & 0x8) == 0) {
                                                                t1969 = *(int *)0xC2A11D4;
                                                                if (t1969 == 0) {
                                                                    t1970 = *(int *)0xC2A11D0;
                                                                    if ((t1970 & 0x8) != 0) {
                                                                        t1971 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        t1963 = 0xFFFFFFFF;
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1971 - 1);
                                                                        if ((int)(t1971 - 1) < 0) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                        }
                                                                    } else {
                                                                        if ((t1962 & 0x10) == 0) {
                                                                            t1974 = *(int *)0xC2A11D4;
                                                                            if (t1974 == 0) {
                                                                                t1975 = *(int *)0xC2A11D0;
                                                                                if ((t1975 & 0x10) != 0) {
                                                                                    t1963 = 0x1;
                                                                                    t1976 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1976 + 0x1);
                                                                                    if ((int)(t1976 + 0x1) >= (int)a5) {
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t1963 = 0x1;
                                                                            t1987 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1987 + 0x1);
                                                                            if ((int)(t1987 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((t1962 & 0x10) == 0) {
                                                                        t1998 = *(int *)0xC2A11D4;
                                                                        if (t1998 == 0) {
                                                                            t1999 = *(int *)0xC2A11D0;
                                                                            if ((t1999 & 0x10) != 0) {
                                                                                t1963 = 0x1;
                                                                                t2000 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2000 + 0x1);
                                                                                if ((int)(t2000 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t1963 = 0x1;
                                                                        t2011 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2011 + 0x1);
                                                                        if ((int)(t2011 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2022 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t1963 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2022 - 1);
                                                                if ((int)(t2022 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            }
                                                        }
                                                        continue;
                                                    }
                                                    break;
                                                }
                                            } else {
                                                t2033 = t1806;
                                                t2034 = 0x1;
                                                for (;;) {
                                                    t2035 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    if (((((int)t2035 >= 0) ? (0x1 << (t2035 & 31)) : ((-(int)t2035 & 31) ? ((int)0x1 >> (-(int)t2035 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                        if (t2034 == 0) {
                                                            t2036 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2036 + 0x1);
                                                            if ((int)(t2036 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        } else {
                                                            t2039 = *(int *)0xC2A11CC;
                                                            t2033 = t2039;
                                                            if ((t2033 & 0x8) == 0) {
                                                                t2040 = *(int *)0xC2A11D4;
                                                                if (t2040 == 0) {
                                                                    t2041 = *(int *)0xC2A11D0;
                                                                    if ((t2041 & 0x8) != 0) {
                                                                        t2042 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        t2034 = 0xFFFFFFFF;
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2042 - 1);
                                                                        if ((int)(t2042 - 1) < 0) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                        }
                                                                    } else {
                                                                        if ((t2033 & 0x10) == 0) {
                                                                            t2045 = *(int *)0xC2A11D4;
                                                                            if (t2045 == 0) {
                                                                                t2046 = *(int *)0xC2A11D0;
                                                                                if ((t2046 & 0x10) != 0) {
                                                                                    t2034 = 0x1;
                                                                                    t2047 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2047 + 0x1);
                                                                                    if ((int)(t2047 + 0x1) >= (int)a5) {
                                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t2034 = 0x1;
                                                                            t2058 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2058 + 0x1);
                                                                            if ((int)(t2058 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if ((t2033 & 0x10) == 0) {
                                                                        t2069 = *(int *)0xC2A11D4;
                                                                        if (t2069 == 0) {
                                                                            t2070 = *(int *)0xC2A11D0;
                                                                            if ((t2070 & 0x10) != 0) {
                                                                                t2034 = 0x1;
                                                                                t2071 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2071 + 0x1);
                                                                                if ((int)(t2071 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t2034 = 0x1;
                                                                        t2082 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2082 + 0x1);
                                                                        if ((int)(t2082 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2093 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t2034 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2093 - 1);
                                                                if ((int)(t2093 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            }
                                                        }
                                                        continue;
                                                    }
                                                    break;
                                                }
                                            }
                                        } else {
                                            t2108 = t1806;
                                            t2109 = 0x0;
                                            for (;;) {
                                                t2110 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                if (((((int)t2110 >= 0) ? (0x1 << (t2110 & 31)) : ((-(int)t2110 & 31) ? ((int)0x1 >> (-(int)t2110 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                    if (t2109 == 0) {
                                                        t2111 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2111 + 0x1);
                                                        if ((int)(t2111 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    } else {
                                                        t2114 = *(int *)0xC2A11CC;
                                                        t2108 = t2114;
                                                        if ((t2108 & 0x8) == 0) {
                                                            t2115 = *(int *)0xC2A11D4;
                                                            if (t2115 == 0) {
                                                                t2116 = *(int *)0xC2A11D0;
                                                                if ((t2116 & 0x8) != 0) {
                                                                    t2117 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t2109 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2117 - 1);
                                                                    if ((int)(t2117 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                } else {
                                                                    if ((t2108 & 0x10) == 0) {
                                                                        t2120 = *(int *)0xC2A11D4;
                                                                        if (t2120 == 0) {
                                                                            t2121 = *(int *)0xC2A11D0;
                                                                            if ((t2121 & 0x10) != 0) {
                                                                                t2109 = 0x1;
                                                                                t2122 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2122 + 0x1);
                                                                                if ((int)(t2122 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t2109 = 0x1;
                                                                        t2133 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2133 + 0x1);
                                                                        if ((int)(t2133 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((t2108 & 0x10) == 0) {
                                                                    t2144 = *(int *)0xC2A11D4;
                                                                    if (t2144 == 0) {
                                                                        t2145 = *(int *)0xC2A11D0;
                                                                        if ((t2145 & 0x10) != 0) {
                                                                            t2109 = 0x1;
                                                                            t2146 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2146 + 0x1);
                                                                            if ((int)(t2146 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2109 = 0x1;
                                                                    t2157 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2157 + 0x1);
                                                                    if ((int)(t2157 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t2168 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t2109 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2168 - 1);
                                                            if ((int)(t2168 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        }
                                                    }
                                                    continue;
                                                }
                                                break;
                                            }
                                        }
                                    } else {
                                        t2183 = t1806;
                                        t2184 = 0x0;
                                        for (;;) {
                                            t2185 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t2185 >= 0) ? (0x1 << (t2185 & 31)) : ((-(int)t2185 & 31) ? ((int)0x1 >> (-(int)t2185 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t2184 == 0) {
                                                    t2186 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2186 + 0x1);
                                                    if ((int)(t2186 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t2189 = *(int *)0xC2A11CC;
                                                    t2183 = t2189;
                                                    if ((t2183 & 0x8) == 0) {
                                                        t2190 = *(int *)0xC2A11D4;
                                                        if (t2190 == 0) {
                                                            t2191 = *(int *)0xC2A11D0;
                                                            if ((t2191 & 0x8) != 0) {
                                                                t2192 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t2184 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2192 - 1);
                                                                if ((int)(t2192 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                if ((t2183 & 0x10) == 0) {
                                                                    t2195 = *(int *)0xC2A11D4;
                                                                    if (t2195 == 0) {
                                                                        t2196 = *(int *)0xC2A11D0;
                                                                        if ((t2196 & 0x10) != 0) {
                                                                            t2184 = 0x1;
                                                                            t2197 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2197 + 0x1);
                                                                            if ((int)(t2197 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2184 = 0x1;
                                                                    t2208 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2208 + 0x1);
                                                                    if ((int)(t2208 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((t2183 & 0x10) == 0) {
                                                                t2219 = *(int *)0xC2A11D4;
                                                                if (t2219 == 0) {
                                                                    t2220 = *(int *)0xC2A11D0;
                                                                    if ((t2220 & 0x10) != 0) {
                                                                        t2184 = 0x1;
                                                                        t2221 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2221 + 0x1);
                                                                        if ((int)(t2221 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2184 = 0x1;
                                                                t2232 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2232 + 0x1);
                                                                if ((int)(t2232 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t2243 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t2184 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2243 - 1);
                                                        if ((int)(t2243 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    }
                                } else {
                                    t2258 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2258 + 0x1);
                                    if ((int)(t2258 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        t2259 = t1806;
                                        t2260 = 0x1;
                                        for (;;) {
                                            t2261 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t2261 >= 0) ? (0x1 << (t2261 & 31)) : ((-(int)t2261 & 31) ? ((int)0x1 >> (-(int)t2261 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t2260 == 0) {
                                                    t2262 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2262 + 0x1);
                                                    if ((int)(t2262 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t2265 = *(int *)0xC2A11CC;
                                                    t2259 = t2265;
                                                    if ((t2259 & 0x8) == 0) {
                                                        t2266 = *(int *)0xC2A11D4;
                                                        if (t2266 == 0) {
                                                            t2267 = *(int *)0xC2A11D0;
                                                            if ((t2267 & 0x8) != 0) {
                                                                t2268 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t2260 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2268 - 1);
                                                                if ((int)(t2268 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                if ((t2259 & 0x10) == 0) {
                                                                    t2271 = *(int *)0xC2A11D4;
                                                                    if (t2271 == 0) {
                                                                        t2272 = *(int *)0xC2A11D0;
                                                                        if ((t2272 & 0x10) != 0) {
                                                                            t2260 = 0x1;
                                                                            t2273 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2273 + 0x1);
                                                                            if ((int)(t2273 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2260 = 0x1;
                                                                    t2284 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2284 + 0x1);
                                                                    if ((int)(t2284 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((t2259 & 0x10) == 0) {
                                                                t2295 = *(int *)0xC2A11D4;
                                                                if (t2295 == 0) {
                                                                    t2296 = *(int *)0xC2A11D0;
                                                                    if ((t2296 & 0x10) != 0) {
                                                                        t2260 = 0x1;
                                                                        t2297 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2297 + 0x1);
                                                                        if ((int)(t2297 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2260 = 0x1;
                                                                t2308 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2308 + 0x1);
                                                                if ((int)(t2308 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t2319 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t2260 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2319 - 1);
                                                        if ((int)(t2319 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    } else {
                                        t2330 = t1806;
                                        t2331 = 0x1;
                                        for (;;) {
                                            t2332 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t2332 >= 0) ? (0x1 << (t2332 & 31)) : ((-(int)t2332 & 31) ? ((int)0x1 >> (-(int)t2332 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t2331 == 0) {
                                                    t2333 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2333 + 0x1);
                                                    if ((int)(t2333 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t2336 = *(int *)0xC2A11CC;
                                                    t2330 = t2336;
                                                    if ((t2330 & 0x8) == 0) {
                                                        t2337 = *(int *)0xC2A11D4;
                                                        if (t2337 == 0) {
                                                            t2338 = *(int *)0xC2A11D0;
                                                            if ((t2338 & 0x8) != 0) {
                                                                t2339 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t2331 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2339 - 1);
                                                                if ((int)(t2339 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                if ((t2330 & 0x10) == 0) {
                                                                    t2342 = *(int *)0xC2A11D4;
                                                                    if (t2342 == 0) {
                                                                        t2343 = *(int *)0xC2A11D0;
                                                                        if ((t2343 & 0x10) != 0) {
                                                                            t2331 = 0x1;
                                                                            t2344 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2344 + 0x1);
                                                                            if ((int)(t2344 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2331 = 0x1;
                                                                    t2355 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2355 + 0x1);
                                                                    if ((int)(t2355 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((t2330 & 0x10) == 0) {
                                                                t2366 = *(int *)0xC2A11D4;
                                                                if (t2366 == 0) {
                                                                    t2367 = *(int *)0xC2A11D0;
                                                                    if ((t2367 & 0x10) != 0) {
                                                                        t2331 = 0x1;
                                                                        t2368 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2368 + 0x1);
                                                                        if ((int)(t2368 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2331 = 0x1;
                                                                t2379 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2379 + 0x1);
                                                                if ((int)(t2379 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t2390 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t2331 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2390 - 1);
                                                        if ((int)(t2390 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((t1806 & 0x10) == 0) {
                                t2416 = *(int *)0xC2A11D4;
                                if (t2416 == 0) {
                                    t2417 = *(int *)0xC2A11D0;
                                    if ((t2417 & 0x10) != 0) {
                                        t2418 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2418 + 0x1);
                                        if ((int)(t2418 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            t2419 = t1806;
                                            t2420 = 0x1;
                                            for (;;) {
                                                t2421 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                if (((((int)t2421 >= 0) ? (0x1 << (t2421 & 31)) : ((-(int)t2421 & 31) ? ((int)0x1 >> (-(int)t2421 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                    if (t2420 == 0) {
                                                        t2422 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2422 + 0x1);
                                                        if ((int)(t2422 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    } else {
                                                        t2425 = *(int *)0xC2A11CC;
                                                        t2419 = t2425;
                                                        if ((t2419 & 0x8) == 0) {
                                                            t2426 = *(int *)0xC2A11D4;
                                                            if (t2426 == 0) {
                                                                t2427 = *(int *)0xC2A11D0;
                                                                if ((t2427 & 0x8) != 0) {
                                                                    t2428 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t2420 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2428 - 1);
                                                                    if ((int)(t2428 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                } else {
                                                                    if ((t2419 & 0x10) == 0) {
                                                                        t2431 = *(int *)0xC2A11D4;
                                                                        if (t2431 == 0) {
                                                                            t2432 = *(int *)0xC2A11D0;
                                                                            if ((t2432 & 0x10) != 0) {
                                                                                t2420 = 0x1;
                                                                                t2433 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2433 + 0x1);
                                                                                if ((int)(t2433 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t2420 = 0x1;
                                                                        t2444 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2444 + 0x1);
                                                                        if ((int)(t2444 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((t2419 & 0x10) == 0) {
                                                                    t2455 = *(int *)0xC2A11D4;
                                                                    if (t2455 == 0) {
                                                                        t2456 = *(int *)0xC2A11D0;
                                                                        if ((t2456 & 0x10) != 0) {
                                                                            t2420 = 0x1;
                                                                            t2457 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2457 + 0x1);
                                                                            if ((int)(t2457 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2420 = 0x1;
                                                                    t2468 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2468 + 0x1);
                                                                    if ((int)(t2468 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t2479 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t2420 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2479 - 1);
                                                            if ((int)(t2479 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        }
                                                    }
                                                    continue;
                                                }
                                                break;
                                            }
                                        } else {
                                            t2490 = t1806;
                                            t2491 = 0x1;
                                            for (;;) {
                                                t2492 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                if (((((int)t2492 >= 0) ? (0x1 << (t2492 & 31)) : ((-(int)t2492 & 31) ? ((int)0x1 >> (-(int)t2492 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                    if (t2491 == 0) {
                                                        t2493 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2493 + 0x1);
                                                        if ((int)(t2493 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    } else {
                                                        t2496 = *(int *)0xC2A11CC;
                                                        t2490 = t2496;
                                                        if ((t2490 & 0x8) == 0) {
                                                            t2497 = *(int *)0xC2A11D4;
                                                            if (t2497 == 0) {
                                                                t2498 = *(int *)0xC2A11D0;
                                                                if ((t2498 & 0x8) != 0) {
                                                                    t2499 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    t2491 = 0xFFFFFFFF;
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2499 - 1);
                                                                    if ((int)(t2499 - 1) < 0) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                    }
                                                                } else {
                                                                    if ((t2490 & 0x10) == 0) {
                                                                        t2502 = *(int *)0xC2A11D4;
                                                                        if (t2502 == 0) {
                                                                            t2503 = *(int *)0xC2A11D0;
                                                                            if ((t2503 & 0x10) != 0) {
                                                                                t2491 = 0x1;
                                                                                t2504 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2504 + 0x1);
                                                                                if ((int)(t2504 + 0x1) >= (int)a5) {
                                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t2491 = 0x1;
                                                                        t2515 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2515 + 0x1);
                                                                        if ((int)(t2515 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((t2490 & 0x10) == 0) {
                                                                    t2526 = *(int *)0xC2A11D4;
                                                                    if (t2526 == 0) {
                                                                        t2527 = *(int *)0xC2A11D0;
                                                                        if ((t2527 & 0x10) != 0) {
                                                                            t2491 = 0x1;
                                                                            t2528 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2528 + 0x1);
                                                                            if ((int)(t2528 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2491 = 0x1;
                                                                    t2539 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2539 + 0x1);
                                                                    if ((int)(t2539 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t2550 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t2491 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2550 - 1);
                                                            if ((int)(t2550 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        }
                                                    }
                                                    continue;
                                                }
                                                break;
                                            }
                                        }
                                    } else {
                                        t2565 = t1806;
                                        t2566 = 0x0;
                                        for (;;) {
                                            t2567 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (((((int)t2567 >= 0) ? (0x1 << (t2567 & 31)) : ((-(int)t2567 & 31) ? ((int)0x1 >> (-(int)t2567 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                                if (t2566 == 0) {
                                                    t2568 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2568 + 0x1);
                                                    if ((int)(t2568 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                } else {
                                                    t2571 = *(int *)0xC2A11CC;
                                                    t2565 = t2571;
                                                    if ((t2565 & 0x8) == 0) {
                                                        t2572 = *(int *)0xC2A11D4;
                                                        if (t2572 == 0) {
                                                            t2573 = *(int *)0xC2A11D0;
                                                            if ((t2573 & 0x8) != 0) {
                                                                t2574 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                t2566 = 0xFFFFFFFF;
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2574 - 1);
                                                                if ((int)(t2574 - 1) < 0) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                                }
                                                            } else {
                                                                if ((t2565 & 0x10) == 0) {
                                                                    t2577 = *(int *)0xC2A11D4;
                                                                    if (t2577 == 0) {
                                                                        t2578 = *(int *)0xC2A11D0;
                                                                        if ((t2578 & 0x10) != 0) {
                                                                            t2566 = 0x1;
                                                                            t2579 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2579 + 0x1);
                                                                            if ((int)(t2579 + 0x1) >= (int)a5) {
                                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t2566 = 0x1;
                                                                    t2590 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2590 + 0x1);
                                                                    if ((int)(t2590 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((t2565 & 0x10) == 0) {
                                                                t2601 = *(int *)0xC2A11D4;
                                                                if (t2601 == 0) {
                                                                    t2602 = *(int *)0xC2A11D0;
                                                                    if ((t2602 & 0x10) != 0) {
                                                                        t2566 = 0x1;
                                                                        t2603 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2603 + 0x1);
                                                                        if ((int)(t2603 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2566 = 0x1;
                                                                t2614 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2614 + 0x1);
                                                                if ((int)(t2614 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t2625 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t2566 = 0xFFFFFFFF;
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2625 - 1);
                                                        if ((int)(t2625 - 1) < 0) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                        }
                                                    }
                                                }
                                                continue;
                                            }
                                            break;
                                        }
                                    }
                                } else {
                                    t2640 = t1806;
                                    t2641 = 0x0;
                                    for (;;) {
                                        t2642 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (((((int)t2642 >= 0) ? (0x1 << (t2642 & 31)) : ((-(int)t2642 & 31) ? ((int)0x1 >> (-(int)t2642 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                            if (t2641 == 0) {
                                                t2643 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2643 + 0x1);
                                                if ((int)(t2643 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            } else {
                                                t2646 = *(int *)0xC2A11CC;
                                                t2640 = t2646;
                                                if ((t2640 & 0x8) == 0) {
                                                    t2647 = *(int *)0xC2A11D4;
                                                    if (t2647 == 0) {
                                                        t2648 = *(int *)0xC2A11D0;
                                                        if ((t2648 & 0x8) != 0) {
                                                            t2649 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t2641 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2649 - 1);
                                                            if ((int)(t2649 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        } else {
                                                            if ((t2640 & 0x10) == 0) {
                                                                t2652 = *(int *)0xC2A11D4;
                                                                if (t2652 == 0) {
                                                                    t2653 = *(int *)0xC2A11D0;
                                                                    if ((t2653 & 0x10) != 0) {
                                                                        t2641 = 0x1;
                                                                        t2654 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2654 + 0x1);
                                                                        if ((int)(t2654 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2641 = 0x1;
                                                                t2665 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2665 + 0x1);
                                                                if ((int)(t2665 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((t2640 & 0x10) == 0) {
                                                            t2676 = *(int *)0xC2A11D4;
                                                            if (t2676 == 0) {
                                                                t2677 = *(int *)0xC2A11D0;
                                                                if ((t2677 & 0x10) != 0) {
                                                                    t2641 = 0x1;
                                                                    t2678 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2678 + 0x1);
                                                                    if ((int)(t2678 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t2641 = 0x1;
                                                            t2689 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2689 + 0x1);
                                                            if ((int)(t2689 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t2700 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t2641 = 0xFFFFFFFF;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2700 - 1);
                                                    if ((int)(t2700 - 1) < 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                    }
                                                }
                                            }
                                            continue;
                                        }
                                        break;
                                    }
                                }
                            } else {
                                t2715 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2715 + 0x1);
                                if ((int)(t2715 + 0x1) >= (int)a5) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    t2716 = t1806;
                                    t2717 = 0x1;
                                    for (;;) {
                                        t2718 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (((((int)t2718 >= 0) ? (0x1 << (t2718 & 31)) : ((-(int)t2718 & 31) ? ((int)0x1 >> (-(int)t2718 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                            if (t2717 == 0) {
                                                t2719 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2719 + 0x1);
                                                if ((int)(t2719 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            } else {
                                                t2722 = *(int *)0xC2A11CC;
                                                t2716 = t2722;
                                                if ((t2716 & 0x8) == 0) {
                                                    t2723 = *(int *)0xC2A11D4;
                                                    if (t2723 == 0) {
                                                        t2724 = *(int *)0xC2A11D0;
                                                        if ((t2724 & 0x8) != 0) {
                                                            t2725 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t2717 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2725 - 1);
                                                            if ((int)(t2725 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        } else {
                                                            if ((t2716 & 0x10) == 0) {
                                                                t2728 = *(int *)0xC2A11D4;
                                                                if (t2728 == 0) {
                                                                    t2729 = *(int *)0xC2A11D0;
                                                                    if ((t2729 & 0x10) != 0) {
                                                                        t2717 = 0x1;
                                                                        t2730 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2730 + 0x1);
                                                                        if ((int)(t2730 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2717 = 0x1;
                                                                t2741 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2741 + 0x1);
                                                                if ((int)(t2741 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((t2716 & 0x10) == 0) {
                                                            t2752 = *(int *)0xC2A11D4;
                                                            if (t2752 == 0) {
                                                                t2753 = *(int *)0xC2A11D0;
                                                                if ((t2753 & 0x10) != 0) {
                                                                    t2717 = 0x1;
                                                                    t2754 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2754 + 0x1);
                                                                    if ((int)(t2754 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t2717 = 0x1;
                                                            t2765 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2765 + 0x1);
                                                            if ((int)(t2765 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t2776 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t2717 = 0xFFFFFFFF;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2776 - 1);
                                                    if ((int)(t2776 - 1) < 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                    }
                                                }
                                            }
                                            continue;
                                        }
                                        break;
                                    }
                                } else {
                                    t2787 = t1806;
                                    t2788 = 0x1;
                                    for (;;) {
                                        t2789 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (((((int)t2789 >= 0) ? (0x1 << (t2789 & 31)) : ((-(int)t2789 & 31) ? ((int)0x1 >> (-(int)t2789 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                            if (t2788 == 0) {
                                                t2790 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2790 + 0x1);
                                                if ((int)(t2790 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            } else {
                                                t2793 = *(int *)0xC2A11CC;
                                                t2787 = t2793;
                                                if ((t2787 & 0x8) == 0) {
                                                    t2794 = *(int *)0xC2A11D4;
                                                    if (t2794 == 0) {
                                                        t2795 = *(int *)0xC2A11D0;
                                                        if ((t2795 & 0x8) != 0) {
                                                            t2796 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            t2788 = 0xFFFFFFFF;
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2796 - 1);
                                                            if ((int)(t2796 - 1) < 0) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                            }
                                                        } else {
                                                            if ((t2787 & 0x10) == 0) {
                                                                t2799 = *(int *)0xC2A11D4;
                                                                if (t2799 == 0) {
                                                                    t2800 = *(int *)0xC2A11D0;
                                                                    if ((t2800 & 0x10) != 0) {
                                                                        t2788 = 0x1;
                                                                        t2801 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2801 + 0x1);
                                                                        if ((int)(t2801 + 0x1) >= (int)a5) {
                                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2788 = 0x1;
                                                                t2812 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2812 + 0x1);
                                                                if ((int)(t2812 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((t2787 & 0x10) == 0) {
                                                            t2823 = *(int *)0xC2A11D4;
                                                            if (t2823 == 0) {
                                                                t2824 = *(int *)0xC2A11D0;
                                                                if ((t2824 & 0x10) != 0) {
                                                                    t2788 = 0x1;
                                                                    t2825 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2825 + 0x1);
                                                                    if ((int)(t2825 + 0x1) >= (int)a5) {
                                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t2788 = 0x1;
                                                            t2836 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2836 + 0x1);
                                                            if ((int)(t2836 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t2847 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t2788 = 0xFFFFFFFF;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2847 - 1);
                                                    if ((int)(t2847 - 1) < 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                    }
                                                }
                                            }
                                            continue;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                    } else {
                        t2873 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2873 - 1);
                        if ((int)(t2873 - 1) < 0) {
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                            t2874 = t1806;
                            t2875 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                            t2876 = 0xFFFFFFFF;
                            for (;;) {
                                t2877 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (((((int)t2877 >= 0) ? (0x1 << (t2877 & 31)) : ((-(int)t2877 & 31) ? ((int)0x1 >> (-(int)t2877 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                    if (t2876 == 0) {
                                        t2878 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2878 + 0x1);
                                        if ((int)(t2878 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    } else {
                                        t2881 = *(int *)0xC2A11CC;
                                        t2874 = t2881;
                                        if ((t2874 & 0x8) == 0) {
                                            t2882 = *(int *)0xC2A11D4;
                                            if (t2882 == 0) {
                                                t2883 = *(int *)0xC2A11D0;
                                                if ((t2883 & 0x8) != 0) {
                                                    t2884 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t2876 = 0xFFFFFFFF;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2884 - 1);
                                                    if ((int)(t2884 - 1) < 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                    }
                                                } else {
                                                    t2875 = 0x10;
                                                    if ((t2874 & t2875) == 0) {
                                                        t2887 = *(int *)0xC2A11D4;
                                                        if (t2887 == 0) {
                                                            t2888 = *(int *)0xC2A11D0;
                                                            if ((t2888 & t2875) != 0) {
                                                                t2876 = 0x1;
                                                                t2889 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2889 + 0x1);
                                                                if ((int)(t2889 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t2876 = 0x1;
                                                        t2900 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2900 + 0x1);
                                                        if ((int)(t2900 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t2875 = 0x10;
                                                if ((t2874 & t2875) == 0) {
                                                    t2911 = *(int *)0xC2A11D4;
                                                    if (t2911 == 0) {
                                                        t2912 = *(int *)0xC2A11D0;
                                                        if ((t2912 & t2875) != 0) {
                                                            t2876 = 0x1;
                                                            t2913 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2913 + 0x1);
                                                            if ((int)(t2913 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t2876 = 0x1;
                                                    t2924 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2924 + 0x1);
                                                    if ((int)(t2924 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t2935 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t2876 = 0xFFFFFFFF;
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2935 - 1);
                                            if ((int)(t2935 - 1) < 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                            }
                                        }
                                    }
                                    continue;
                                }
                                break;
                            }
                        } else {
                            t2946 = t1806;
                            t2947 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
                            t2948 = 0xFFFFFFFF;
                            for (;;) {
                                t2949 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (((((int)t2949 >= 0) ? (0x1 << (t2949 & 31)) : ((-(int)t2949 & 31) ? ((int)0x1 >> (-(int)t2949 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                                    if (t2948 == 0) {
                                        t2950 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2950 + 0x1);
                                        if ((int)(t2950 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    } else {
                                        t2953 = *(int *)0xC2A11CC;
                                        t2946 = t2953;
                                        if ((t2946 & 0x8) == 0) {
                                            t2954 = *(int *)0xC2A11D4;
                                            if (t2954 == 0) {
                                                t2955 = *(int *)0xC2A11D0;
                                                if ((t2955 & 0x8) != 0) {
                                                    t2956 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t2948 = 0xFFFFFFFF;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2956 - 1);
                                                    if ((int)(t2956 - 1) < 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                                    }
                                                } else {
                                                    t2947 = 0x10;
                                                    if ((t2946 & t2947) == 0) {
                                                        t2959 = *(int *)0xC2A11D4;
                                                        if (t2959 == 0) {
                                                            t2960 = *(int *)0xC2A11D0;
                                                            if ((t2960 & t2947) != 0) {
                                                                t2948 = 0x1;
                                                                t2961 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2961 + 0x1);
                                                                if ((int)(t2961 + 0x1) >= (int)a5) {
                                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t2948 = 0x1;
                                                        t2972 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2972 + 0x1);
                                                        if ((int)(t2972 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t2947 = 0x10;
                                                if ((t2946 & t2947) == 0) {
                                                    t2983 = *(int *)0xC2A11D4;
                                                    if (t2983 == 0) {
                                                        t2984 = *(int *)0xC2A11D0;
                                                        if ((t2984 & t2947) != 0) {
                                                            t2948 = 0x1;
                                                            t2985 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2985 + 0x1);
                                                            if ((int)(t2985 + 0x1) >= (int)a5) {
                                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t2948 = 0x1;
                                                    t2996 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t2996 + 0x1);
                                                    if ((int)(t2996 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            t3007 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t2948 = 0xFFFFFFFF;
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3007 - 1);
                                            if ((int)(t3007 - 1) < 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                            }
                                        }
                                    }
                                    continue;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        } else {
            t3044 = t1575;
            t3045 = ((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8);
            t3046 = 0x0;
            for (;;) {
                t3047 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                if (((((int)t3047 >= 0) ? (0x1 << (t3047 & 31)) : ((-(int)t3047 & 31) ? ((int)0x1 >> (-(int)t3047 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                    if (t3046 == 0) {
                        t3048 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3048 + 0x1);
                        if ((int)(t3048 + 0x1) >= (int)a5) {
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                        }
                    } else {
                        t3051 = *(int *)0xC2A11CC;
                        t3044 = t3051;
                        if ((t3044 & 0x8) == 0) {
                            t3052 = *(int *)0xC2A11D4;
                            if (t3052 == 0) {
                                t3053 = *(int *)0xC2A11D0;
                                if ((t3053 & 0x8) != 0) {
                                    t3054 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t3046 = 0xFFFFFFFF;
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3054 - 1);
                                    if ((int)(t3054 - 1) < 0) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                                    }
                                } else {
                                    t3045 = 0x10;
                                    if ((t3044 & t3045) == 0) {
                                        t3057 = *(int *)0xC2A11D4;
                                        if (t3057 == 0) {
                                            t3058 = *(int *)0xC2A11D0;
                                            if ((t3058 & t3045) != 0) {
                                                t3046 = 0x1;
                                                t3059 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3059 + 0x1);
                                                if ((int)(t3059 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    } else {
                                        t3046 = 0x1;
                                        t3070 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3070 + 0x1);
                                        if ((int)(t3070 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    }
                                }
                            } else {
                                t3045 = 0x10;
                                if ((t3044 & t3045) == 0) {
                                    t3081 = *(int *)0xC2A11D4;
                                    if (t3081 == 0) {
                                        t3082 = *(int *)0xC2A11D0;
                                        if ((t3082 & t3045) != 0) {
                                            t3046 = 0x1;
                                            t3083 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3083 + 0x1);
                                            if ((int)(t3083 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t3046 = 0x1;
                                    t3094 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3094 + 0x1);
                                    if ((int)(t3094 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    }
                                }
                            }
                        } else {
                            t3105 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t3046 = 0xFFFFFFFF;
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t3105 - 1);
                            if ((int)(t3105 - 1) < 0) {
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (a5 - 1);
                            }
                        }
                    }
                    continue;
                }
                break;
            }
        }
        t3123 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
        t3125 = 0x0;
        if (t3123 != t1) {
            FUN_0c07f5c0();
            t3125 = 0x1;
        }
        t3133 = t3125;
    }
    return t3133;
}

int FUN_0c07c870(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t27;
    float u28;
    float u29;
    float u30;
    int t31;
    int t32;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    float u25;
    float u26;

    t0 = *(short *)((a4 + 0xE));
    t1 = *(int *)0xC2B766C;
    t2 = ((unsigned int)t0 >> 2);
    if ((t0 & 0x3) != 0) {
        t2 = (((unsigned int)t0 >> 2) + 0x1);
    }
    if ((int)t2 > 0) {
        t4 = 0x0;
        t5 = t1;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned int *)((t5 + 0x0)) = 0x0;
            t5 = (t5 + 0x4);
            if ((int)t4 >= (int)t2) {
                break;
            }
        }
    }
    t8 = *(int *)((a5 + 0x0));
    if ((t8 & 1) == 0) {
        t9 = *(short *)((a4 + 0xC));
        t10 = *(int *)((a4 + 0x0));
        FUN_0c07c9b0(t10, t9);
    } else {
        u12 = *(float *)0xC2B768C;
        u13 = *(float *)0xC2B7690;
        t14 = *(short *)((a4 + 0x10));
        t15 = *(int *)((a4 + 0x8));
        t16 = *(int *)((a4 + 0x0));
        u17 = *(float *)0xC2B7688;
        t18 = *(int *)0xC2B7670;
        t19 = t14;
        t20 = (t14 + 0x1);
        t21 = 0xC2B7670;
        t22 = t18;
        t23 = t15;
        t24 = 0xC2B7688;
        for (;;) {
            t20 = (t20 - 0x1);
            if (t20 == 0) {
                break;
            }
            t27 = *(short *)((t23 + 0xC));
            t19 = t27;
            t24 = t16;
            u25 = u17;
            t23 = (t23 + 0x18);
            t21 = t19;
            t19 = (t19 << 1);
            t19 = (t19 + t21);
            t19 = (t19 << 2);
            t24 = (t24 + t19);
            u28 = *(float *)((t24 + 0x0));
            u26 = u28;
            t19 = 0x4;
            u25 = (u25 - u26);
            *(float *)((t22 + 0x0)) = u25;
            u29 = *(float *)((t24 + t19));
            u26 = u29;
            u25 = u12;
            u25 = (u25 - u26);
            *(float *)((t22 + t19)) = u25;
            t19 = 0x8;
            u30 = *(float *)((t24 + t19));
            u26 = u30;
            u25 = u13;
            u25 = (u25 - u26);
            *(float *)((t22 + t19)) = u25;
            t22 = (t22 + 0xC);
        }
        t31 = *(short *)((a4 + 0xC));
        t32 = *(int *)((a4 + 0x0));
        FUN_0c07ca80(t32, t31, a5);
    }
    t35 = *(short *)((a4 + 0x10));
    t36 = *(int *)((a4 + 0x4));
    t37 = *(int *)((a4 + 0x8));
    FUN_0c07cc00(t37, t35, t36, a5);
    t39 = *(short *)((a4 + 0xE));
    t40 = *(int *)((a4 + 0x4));
    FUN_0c07d240(t40, t39);
    return FUN_0c07d540();
}

int FUN_0c059f44(void)
{
    int t1;
    int t3;
    int t9;
    int t10;
    int t12;
    int t25;
    float u26;
    float u27;
    int t30;
    int t31;
    int t32;
    int t33;
    float u34;
    float u35;
    int t42;
    float u43;
    float u44;
    int t51;
    float u52;
    float u53;
    int t60;
    float u61;
    float u62;
    int t64;

    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    t1 = *(int *)0xC2A96F4;
    if ((int)t1 <= (int)0x58) {
    } else {
        if (t1 == 89) {
            Sound_Request(0x104A9, 0x0);
            t3 = *(int *)0xC130DF8;
            *(unsigned int *)0xC130DF8 = (t3 + 0x1);
        }
        t9 = *(int *)0xC2A9848;
        if (t9 == 1) {
            t10 = *(int *)0xC2A9858;
            if (t10 == 0) {
                Sound_Request(0x204A9, 0x0);
                t12 = *(int *)0xC130DFC;
                *(unsigned int *)0xC130DFC = (t12 + 0x1);
                *(unsigned int *)0xC2A9858 = 0x1;
            }
        }
        *(unsigned int *)0xC2A96F8 = 0xFB;
        *(unsigned int *)0xC2A972C = 0x200A;
        *(float *)0xC2A96FC = 80.0f;
        t25 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t25 + 0xD8);
        u26 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u26 + 1.0f);
        u27 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u27 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        nlSprPut(0xC2A96F8);
        FUN_0c05a0f0();
        *(unsigned int *)0xC2A972C = 0x200A;
        t30 = *(int *)0xC2A97C8;
        if (t30 == 0) {
            t31 = *(int *)0xC2A97C4;
            if (t31 == 0) {
                t32 = *(int *)0xC2A97C0;
                if (t32 != 0) {
                    *(unsigned int *)0xC2A96F8 = 0xFA;
                    *(float *)0xC2A96FC = 214.0f;
                    t33 = *(int *)0xC2A9748;
                    *(float *)0xC2A9700 = (float)(t33 + 0xEA);
                    u34 = *(float *)0xC2A9758;
                    *(float *)0xC2A9708 = (u34 + 1.0f);
                    u35 = *(float *)0xC2A9758;
                    *(float *)0xC2A970C = (u35 + 1.0f);
                    *(float *)0xC2A9714 = 0.0f;
                    *(float *)0xC2A971C = 1.0f;
                    *(unsigned int *)0xC2A9720 = 0x0;
                    nlSprPut(0xC2A96F8);
                }
            } else {
                *(unsigned int *)0xC2A96F8 = 0xFA;
                *(float *)0xC2A96FC = 214.0f;
                t42 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(t42 + 0xEA);
                u43 = *(float *)0xC2A9758;
                *(float *)0xC2A9708 = (u43 + 1.0f);
                u44 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u44 + 1.0f);
                *(float *)0xC2A9714 = 0.0f;
                *(float *)0xC2A971C = 1.0f;
                *(unsigned int *)0xC2A9720 = 0x0;
                nlSprPut(0xC2A96F8);
            }
        } else {
            *(unsigned int *)0xC2A96F8 = 0xFA;
            *(float *)0xC2A96FC = 214.0f;
            t51 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(t51 + 0xEA);
            u52 = *(float *)0xC2A9758;
            *(float *)0xC2A9708 = (u52 + 1.0f);
            u53 = *(float *)0xC2A9758;
            *(float *)0xC2A970C = (u53 + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A9720 = 0x0;
            nlSprPut(0xC2A96F8);
        }
        *(unsigned int *)0xC2A96F8 = 0xFC;
        *(float *)0xC2A96FC = 332.0f;
        t60 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t60 + 0xEA);
        u61 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u61 + 1.0f);
        u62 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u62 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        nlSprPut(0xC2A96F8);
        t64 = *(int *)0xC2A9788;
        *(unsigned int *)0xC2A9788 = (t64 + 0x1);
    }
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}

int menuCursorBox(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t827;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t9;
    int t14;
    int t15;
    int t16;
    int t17;
    int t25;
    int t26;
    int t37;
    int t42;
    int t43;
    int t72;
    int t44;
    int t67;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t54;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t84;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t112;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t139;
    int t153;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t171;
    int t168;
    int t173;
    int t174;
    int t175;
    int t176;
    int t184;
    int t185;
    int t196;
    int t201;
    int t202;
    int t231;
    int t203;
    int t226;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t213;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t243;
    int t259;
    int t260;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t271;
    int t289;
    int t290;
    int t291;
    int t292;
    int t293;
    int t298;
    int t312;
    int t320;
    int t322;
    int t323;
    int t324;
    int t325;
    int t329;
    int t326;
    int t331;
    int t332;
    int t333;
    int t334;
    int t342;
    int t343;
    int t354;
    int t359;
    int t360;
    int t389;
    int t361;
    int t384;
    int t362;
    int t363;
    int t364;
    int t365;
    int t366;
    int t371;
    int t392;
    int t393;
    int t394;
    int t395;
    int t396;
    int t401;
    int t417;
    int t418;
    int t419;
    int t420;
    int t421;
    int t422;
    int t423;
    int t424;
    int t429;
    int t447;
    int t448;
    int t449;
    int t450;
    int t451;
    int t456;
    int t470;
    int t485;
    int t487;
    int t488;
    int t489;
    int t490;
    int t494;
    int t491;
    int t496;
    int t497;
    int t498;
    int t499;
    int t507;
    int t508;
    int t519;
    int t524;
    int t525;
    int t554;
    int t526;
    int t549;
    int t527;
    int t528;
    int t529;
    int t530;
    int t531;
    int t536;
    int t557;
    int t558;
    int t559;
    int t560;
    int t561;
    int t566;
    int t582;
    int t583;
    int t584;
    int t585;
    int t586;
    int t587;
    int t588;
    int t589;
    int t594;
    int t612;
    int t613;
    int t614;
    int t615;
    int t616;
    int t621;
    int t635;
    int t643;
    int t644;
    int t645;
    int t646;
    int t649;
    int t647;
    int t651;
    int t652;
    int t653;
    int t654;
    int t660;
    int t661;
    int t670;
    int t675;
    int t676;
    int t704;
    int t705;
    int t677;
    int t699;
    int t700;
    int t678;
    int t679;
    int t680;
    int t681;
    int t682;
    int t687;
    int t708;
    int t709;
    int t710;
    int t711;
    int t712;
    int t717;
    int t733;
    int t734;
    int t760;
    int t735;
    int t756;
    int t736;
    int t737;
    int t738;
    int t739;
    int t740;
    int t745;
    int t763;
    int t764;
    int t765;
    int t766;
    int t767;
    int t772;
    int t786;
    int t811;
    int t816;
    int t818;
    int t842;
    int t843;
    int t844;
    int t845;
    int t846;
    int t847;
    int t851;
    int t848;
    int t853;
    int t854;
    int t855;
    int t856;
    int t864;
    int t865;
    int t876;
    int t881;
    int t882;
    int t911;
    int t883;
    int t906;
    int t884;
    int t885;
    int t886;
    int t887;
    int t888;
    int t893;
    int t914;
    int t915;
    int t916;
    int t917;
    int t918;
    int t923;
    int t939;
    int t940;
    int t941;
    int t942;
    int t943;
    int t944;
    int t945;
    int t946;
    int t951;
    int t969;
    int t970;
    int t971;
    int t972;
    int t973;
    int t978;
    int t992;
    int t1000;
    int t1001;
    int t1002;
    int t1003;
    int t1004;
    int t1005;
    int t1006;
    int t1010;
    int t1007;
    int t1012;
    int t1013;
    int t1014;
    int t1015;
    int t1023;
    int t1024;
    int t1035;
    int t1040;
    int t1041;
    int t1070;
    int t1042;
    int t1065;
    int t1043;
    int t1044;
    int t1045;
    int t1046;
    int t1047;
    int t1052;
    int t1073;
    int t1074;
    int t1075;
    int t1076;
    int t1077;
    int t1082;
    int t1098;
    int t1099;
    int t1100;
    int t1101;
    int t1102;
    int t1103;
    int t1104;
    int t1105;
    int t1110;
    int t1128;
    int t1129;
    int t1130;
    int t1131;
    int t1132;
    int t1137;
    int t1151;
    int t1159;
    int t1161;
    int t1162;
    int t1163;
    int t1164;
    int t1168;
    int t1165;
    int t1170;
    int t1171;
    int t1172;
    int t1173;
    int t1181;
    int t1182;
    int t1193;
    int t1198;
    int t1199;
    int t1228;
    int t1200;
    int t1223;
    int t1201;
    int t1202;
    int t1203;
    int t1204;
    int t1205;
    int t1210;
    int t1231;
    int t1232;
    int t1233;
    int t1234;
    int t1235;
    int t1240;
    int t1256;
    int t1257;
    int t1258;
    int t1259;
    int t1260;
    int t1261;
    int t1262;
    int t1263;
    int t1268;
    int t1286;
    int t1287;
    int t1288;
    int t1289;
    int t1290;
    int t1295;
    int t1309;
    int t1324;
    int t1326;
    int t1327;
    int t1328;
    int t1329;
    int t1333;
    int t1330;
    int t1335;
    int t1336;
    int t1337;
    int t1338;
    int t1346;
    int t1347;
    int t1358;
    int t1363;
    int t1364;
    int t1393;
    int t1365;
    int t1388;
    int t1366;
    int t1367;
    int t1368;
    int t1369;
    int t1370;
    int t1375;
    int t1396;
    int t1397;
    int t1398;
    int t1399;
    int t1400;
    int t1405;
    int t1421;
    int t1422;
    int t1423;
    int t1424;
    int t1425;
    int t1426;
    int t1427;
    int t1428;
    int t1433;
    int t1451;
    int t1452;
    int t1453;
    int t1454;
    int t1455;
    int t1460;
    int t1474;
    int t1482;
    int t1483;
    int t1484;
    int t1485;
    int t1488;
    int t1486;
    int t1490;
    int t1491;
    int t1492;
    int t1493;
    int t1499;
    int t1500;
    int t1509;
    int t1514;
    int t1515;
    int t1543;
    int t1544;
    int t1516;
    int t1538;
    int t1539;
    int t1517;
    int t1518;
    int t1519;
    int t1520;
    int t1521;
    int t1526;
    int t1547;
    int t1548;
    int t1549;
    int t1550;
    int t1551;
    int t1556;
    int t1572;
    int t1573;
    int t1599;
    int t1574;
    int t1595;
    int t1575;
    int t1576;
    int t1577;
    int t1578;
    int t1579;
    int t1584;
    int t1602;
    int t1603;
    int t1604;
    int t1605;
    int t1606;
    int t1611;
    int t1625;
    int t1650;
    int t1655;
    int t1657;
    int t1666;
    int t97;
    int t62;
    int t58;
    int t52;
    int t92;
    int t88;
    int t82;
    int t256;
    int t221;
    int t217;
    int t211;
    int t251;
    int t247;
    int t241;
    int t414;
    int t379;
    int t375;
    int t369;
    int t409;
    int t405;
    int t399;
    int t579;
    int t544;
    int t540;
    int t534;
    int t574;
    int t570;
    int t564;
    int t672;
    int t729;
    int t730;
    int t694;
    int t695;
    int t690;
    int t691;
    int t684;
    int t685;
    int t724;
    int t725;
    int t720;
    int t721;
    int t714;
    int t715;
    int t783;
    int t752;
    int t748;
    int t742;
    int t779;
    int t775;
    int t769;
    int t936;
    int t901;
    int t897;
    int t891;
    int t931;
    int t927;
    int t921;
    int t1095;
    int t1060;
    int t1056;
    int t1050;
    int t1090;
    int t1086;
    int t1080;
    int t1253;
    int t1218;
    int t1214;
    int t1208;
    int t1248;
    int t1244;
    int t1238;
    int t1418;
    int t1383;
    int t1379;
    int t1373;
    int t1413;
    int t1409;
    int t1403;
    int t1511;
    int t1568;
    int t1569;
    int t1533;
    int t1534;
    int t1529;
    int t1530;
    int t1523;
    int t1524;
    int t1563;
    int t1564;
    int t1559;
    int t1560;
    int t1553;
    int t1554;
    int t1622;
    int t1591;
    int t1587;
    int t1581;
    int t1618;
    int t1614;
    int t1608;

    t0 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x0));
    t1 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
    t2 = *(int *)0xC2A1214;
    if (t2 == 1) {
        t827 = 0x0;
        if (a4 == 0) {
        } else {
            t3 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
            t4 = *(int *)0xC2A11CC;
            if ((t3 & 0x4) == 0) {
                t5 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                if (((((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                    t6 = (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31)));
                    t7 = t4;
                    for (;;) {
                        t8 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        t12 = 0x0;
                        if ((int)t8 >= (int)0x2) {
                            t9 = 0x0;
                            if ((int)t8 < (int)0x12) {
                                t9 = 0x1;
                            }
                            t12 = t9;
                        }
                        t14 = *(int *)0xC2A11CC;
                        if (t12 == 1) {
                            t15 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t7 = t15;
                            t7 = (t7 - 2);
                            if ((0x20 & t14) == 0) {
                                t6 = 0xC2A11D4;
                                t16 = *(int *)((t6 + 0x0));
                                if (t16 == 0) {
                                    t17 = *(int *)0xC2A11D0;
                                    if ((t17 & 32) != 0) {
                                        t7 = (t7 - 4);
                                    }
                                }
                            } else {
                                t7 = (t7 - 4);
                            }
                            t6 = 0x40;
                            if ((t14 & t6) == 0) {
                                t25 = *(int *)0xC2A11D4;
                                if (t25 == 0) {
                                    t26 = *(int *)0xC2A11D0;
                                    if ((t6 & t26) != 0) {
                                        t7 = (t7 + 0x4);
                                    }
                                }
                            } else {
                                t7 = (t7 + 0x4);
                            }
                            if ((int)t7 < 0) {
                                t7 = (t7 + 0x10);
                            } else {
                                if ((int)t7 >= (int)0x10) {
                                    t7 = (t7 - 16);
                                }
                            }
                            t6 = t7;
                            t6 = (t6 + 0x2);
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                            t37 = (int)((int)t7 / (int)0x4);
                            *(unsigned int *)0xC2A1230 = t37;
                        }
                        t42 = *(int *)0xC2A11CC;
                        t6 = t42;
                        if ((t6 & 0x8) == 0) {
                            t43 = *(int *)0xC2A11D4;
                            t72 = t6;
                            if (t43 == 0) {
                                t44 = *(int *)0xC2A11D0;
                                t67 = t6;
                                if ((t44 & 0x8) != 0) {
                                    t45 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t45 == 18) {
                                        t46 = *(int *)0xC2A1230;
                                        t6 = 0x3;
                                        t6 = (t6 - t46);
                                        t47 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t6 = (t6 << 2);
                                        t6 = (t6 + 0x1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t47 - t6);
                                        t62 = t6;
                                    } else {
                                        if (t12 == 1) {
                                            t6 = 0xC08106C;
                                            t48 = (int)((int)t7 % (int)0x4);
                                            if (t48 == 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                t52 = 0xC08106C;
                                            } else {
                                                t49 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t6 = t49;
                                                t6 = (t6 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                                if ((int)t6 < 0) {
                                                    t6 = a5;
                                                    t6 = (t6 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                                }
                                                t52 = t6;
                                            }
                                            t58 = t52;
                                        } else {
                                            t54 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t6 = t54;
                                            t6 = (t6 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                            if ((int)t6 < 0) {
                                                t6 = a5;
                                                t6 = (t6 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                            }
                                            t58 = t6;
                                        }
                                        t62 = t58;
                                    }
                                    t67 = t62;
                                }
                                t72 = t67;
                            }
                            t97 = t72;
                        } else {
                            t75 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            if (t75 == 18) {
                                t76 = *(int *)0xC2A1230;
                                t6 = 0x3;
                                t6 = (t6 - t76);
                                t77 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t6 = (t6 << 2);
                                t6 = (t6 + 0x1);
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t77 - t6);
                                t92 = t6;
                            } else {
                                if (t12 == 1) {
                                    t78 = (int)((int)t7 % (int)0x4);
                                    if (t78 == 0) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                        t82 = 0xC08106C;
                                    } else {
                                        t79 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t6 = t79;
                                        t6 = (t6 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                        if ((int)t6 < 0) {
                                            t6 = a5;
                                            t6 = (t6 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                        }
                                        t82 = t6;
                                    }
                                    t88 = t82;
                                } else {
                                    t84 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t6 = t84;
                                    t6 = (t6 - 1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                    if ((int)t6 < 0) {
                                        t6 = a5;
                                        t6 = (t6 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                    }
                                    t88 = t6;
                                }
                                t92 = t88;
                            }
                            t97 = t92;
                        }
                        t100 = *(int *)0xC2A11CC;
                        t6 = t97;
                        if ((t100 & 0x10) == 0) {
                            t101 = *(int *)0xC2A11D4;
                            if (t101 == 0) {
                                t102 = *(int *)0xC2A11D0;
                                t6 = t102;
                                if ((t6 & 0x10) != 0) {
                                    t103 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t103 == 1) {
                                        t104 = *(int *)0xC2A1230;
                                        t105 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t6 = t105;
                                        t6 = (t6 + ((t104 << 2) + 0x1));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                                    } else {
                                        if (t12 == 1) {
                                            t106 = (int)((int)t7 % (int)0x4);
                                            if (t106 == 3) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                            } else {
                                                t107 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t107 + 0x1);
                                                if ((int)(t107 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        } else {
                                            t112 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t112 + 0x1);
                                            if ((int)(t112 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            t130 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            if (t130 == 1) {
                                t131 = *(int *)0xC2A1230;
                                t132 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t6 = t132;
                                t6 = (t6 + ((t131 << 2) + 0x1));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t6;
                            } else {
                                if (t12 == 1) {
                                    t133 = (int)((int)t7 % (int)0x4);
                                    if (t133 == 3) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                    } else {
                                        t134 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t134 + 0x1);
                                        if ((int)(t134 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    }
                                } else {
                                    t139 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t139 + 0x1);
                                    if ((int)(t139 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    }
                                }
                            }
                        }
                        t153 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        t6 = 0x1;
                        t6 = (((int)t153 >= 0) ? (t6 << (t153 & 31)) : ((-(int)t153 & 31) ? ((int)t6 >> (-(int)t153 & 31)) : ((int)t6 >> 31)));
                        if ((t6 & a6) != 0) continue;
                        break;
                    }
                }
            } else {
                if ((0x2 & t4) != 0) {
                    t161 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    t162 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x18));
                    t163 = *(int *)(((((t161 << 2) << 1) + t162) + 0x8));
                    if (t163 == 0) {
                        t164 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (((((int)t164 >= 0) ? (0x1 << (t164 & 31)) : ((-(int)t164 & 31) ? ((int)0x1 >> (-(int)t164 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                            t165 = (((int)t164 >= 0) ? (0x1 << (t164 & 31)) : ((-(int)t164 & 31) ? ((int)0x1 >> (-(int)t164 & 31)) : ((int)0x1 >> 31)));
                            t166 = t163;
                            for (;;) {
                                t167 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t171 = 0x0;
                                if ((int)t167 >= (int)0x2) {
                                    t168 = 0x0;
                                    if ((int)t167 < (int)0x12) {
                                        t168 = 0x1;
                                    }
                                    t171 = t168;
                                }
                                t173 = *(int *)0xC2A11CC;
                                if (t171 == 1) {
                                    t174 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t166 = t174;
                                    t166 = (t166 - 2);
                                    if ((0x20 & t173) == 0) {
                                        t165 = 0xC2A11D4;
                                        t175 = *(int *)((t165 + 0x0));
                                        if (t175 == 0) {
                                            t176 = *(int *)0xC2A11D0;
                                            if ((t176 & 32) != 0) {
                                                t166 = (t166 - 4);
                                            }
                                        }
                                    } else {
                                        t166 = (t166 - 4);
                                    }
                                    t165 = 0x40;
                                    if ((t173 & t165) == 0) {
                                        t184 = *(int *)0xC2A11D4;
                                        if (t184 == 0) {
                                            t185 = *(int *)0xC2A11D0;
                                            if ((t165 & t185) != 0) {
                                                t166 = (t166 + 0x4);
                                            }
                                        }
                                    } else {
                                        t166 = (t166 + 0x4);
                                    }
                                    if ((int)t166 < 0) {
                                        t166 = (t166 + 0x10);
                                    } else {
                                        if ((int)t166 >= (int)0x10) {
                                            t166 = (t166 - 16);
                                        }
                                    }
                                    t165 = t166;
                                    t165 = (t165 + 0x2);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                    t196 = (int)((int)t166 / (int)0x4);
                                    *(unsigned int *)0xC2A1230 = t196;
                                }
                                t201 = *(int *)0xC2A11CC;
                                t165 = t201;
                                if ((t165 & 0x8) == 0) {
                                    t202 = *(int *)0xC2A11D4;
                                    t231 = t165;
                                    if (t202 == 0) {
                                        t203 = *(int *)0xC2A11D0;
                                        t226 = t165;
                                        if ((t203 & 0x8) != 0) {
                                            t204 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (t204 == 18) {
                                                t205 = *(int *)0xC2A1230;
                                                t165 = 0x3;
                                                t165 = (t165 - t205);
                                                t206 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t165 = (t165 << 2);
                                                t165 = (t165 + 0x1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t206 - t165);
                                                t221 = t165;
                                            } else {
                                                if (t171 == 1) {
                                                    t207 = (int)((int)t166 % (int)0x4);
                                                    if (t207 == 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                        t211 = 0xC08106C;
                                                    } else {
                                                        t208 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t165 = t208;
                                                        t165 = (t165 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                                        if ((int)t165 < 0) {
                                                            t165 = a5;
                                                            t165 = (t165 - 1);
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                                        }
                                                        t211 = t165;
                                                    }
                                                    t217 = t211;
                                                } else {
                                                    t213 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t165 = t213;
                                                    t165 = (t165 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                                    if ((int)t165 < 0) {
                                                        t165 = a5;
                                                        t165 = (t165 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                                    }
                                                    t217 = t165;
                                                }
                                                t221 = t217;
                                            }
                                            t226 = t221;
                                        }
                                        t231 = t226;
                                    }
                                    t256 = t231;
                                } else {
                                    t234 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t234 == 18) {
                                        t235 = *(int *)0xC2A1230;
                                        t165 = 0x3;
                                        t165 = (t165 - t235);
                                        t236 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t165 = (t165 << 2);
                                        t165 = (t165 + 0x1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t236 - t165);
                                        t251 = t165;
                                    } else {
                                        if (t171 == 1) {
                                            t237 = (int)((int)t166 % (int)0x4);
                                            if (t237 == 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                t241 = 0xC08106C;
                                            } else {
                                                t238 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t165 = t238;
                                                t165 = (t165 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                                if ((int)t165 < 0) {
                                                    t165 = a5;
                                                    t165 = (t165 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                                }
                                                t241 = t165;
                                            }
                                            t247 = t241;
                                        } else {
                                            t243 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t165 = t243;
                                            t165 = (t165 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                            if ((int)t165 < 0) {
                                                t165 = a5;
                                                t165 = (t165 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                            }
                                            t247 = t165;
                                        }
                                        t251 = t247;
                                    }
                                    t256 = t251;
                                }
                                t259 = *(int *)0xC2A11CC;
                                t165 = t256;
                                if ((t259 & 0x10) == 0) {
                                    t260 = *(int *)0xC2A11D4;
                                    if (t260 == 0) {
                                        t261 = *(int *)0xC2A11D0;
                                        t165 = t261;
                                        if ((t165 & 0x10) != 0) {
                                            t262 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (t262 == 1) {
                                                t263 = *(int *)0xC2A1230;
                                                t264 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t165 = t264;
                                                t165 = (t165 + ((t263 << 2) + 0x1));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                            } else {
                                                if (t171 == 1) {
                                                    t265 = (int)((int)t166 % (int)0x4);
                                                    if (t265 == 3) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                                    } else {
                                                        t266 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t266 + 0x1);
                                                        if ((int)(t266 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    t271 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t271 + 0x1);
                                                    if ((int)(t271 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t289 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t289 == 1) {
                                        t290 = *(int *)0xC2A1230;
                                        t291 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t165 = t291;
                                        t165 = (t165 + ((t290 << 2) + 0x1));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t165;
                                    } else {
                                        if (t171 == 1) {
                                            t292 = (int)((int)t166 % (int)0x4);
                                            if (t292 == 3) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                            } else {
                                                t293 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t293 + 0x1);
                                                if ((int)(t293 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        } else {
                                            t298 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t298 + 0x1);
                                            if ((int)(t298 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                }
                                t312 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t165 = 0x1;
                                t165 = (((int)t312 >= 0) ? (t165 << (t312 & 31)) : ((-(int)t312 & 31) ? ((int)t165 >> (-(int)t312 & 31)) : ((int)t165 >> 31)));
                                if ((t165 & a6) != 0) continue;
                                break;
                            }
                        }
                    } else {
                        t320 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                        *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t320 | 0x8);
                        FUN_0c07f5c0();
                        t322 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (((((int)t322 >= 0) ? (0x1 << (t322 & 31)) : ((-(int)t322 & 31) ? ((int)0x1 >> (-(int)t322 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                            t323 = (((int)t322 >= 0) ? (0x1 << (t322 & 31)) : ((-(int)t322 & 31) ? ((int)0x1 >> (-(int)t322 & 31)) : ((int)0x1 >> 31)));
                            t324 = a4;
                            for (;;) {
                                t325 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t329 = 0x0;
                                if ((int)t325 >= (int)0x2) {
                                    t326 = 0x0;
                                    if ((int)t325 < (int)0x12) {
                                        t326 = 0x1;
                                    }
                                    t329 = t326;
                                }
                                t331 = *(int *)0xC2A11CC;
                                if (t329 == 1) {
                                    t332 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t324 = t332;
                                    t324 = (t324 - 2);
                                    if ((0x20 & t331) == 0) {
                                        t323 = 0xC2A11D4;
                                        t333 = *(int *)((t323 + 0x0));
                                        if (t333 == 0) {
                                            t334 = *(int *)0xC2A11D0;
                                            if ((t334 & 32) != 0) {
                                                t324 = (t324 - 4);
                                            }
                                        }
                                    } else {
                                        t324 = (t324 - 4);
                                    }
                                    t323 = 0x40;
                                    if ((t331 & t323) == 0) {
                                        t342 = *(int *)0xC2A11D4;
                                        if (t342 == 0) {
                                            t343 = *(int *)0xC2A11D0;
                                            if ((t323 & t343) != 0) {
                                                t324 = (t324 + 0x4);
                                            }
                                        }
                                    } else {
                                        t324 = (t324 + 0x4);
                                    }
                                    if ((int)t324 < 0) {
                                        t324 = (t324 + 0x10);
                                    } else {
                                        if ((int)t324 >= (int)0x10) {
                                            t324 = (t324 - 16);
                                        }
                                    }
                                    t323 = t324;
                                    t323 = (t323 + 0x2);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                    t354 = (int)((int)t324 / (int)0x4);
                                    *(unsigned int *)0xC2A1230 = t354;
                                }
                                t359 = *(int *)0xC2A11CC;
                                t323 = t359;
                                if ((t323 & 0x8) == 0) {
                                    t360 = *(int *)0xC2A11D4;
                                    t389 = t323;
                                    if (t360 == 0) {
                                        t361 = *(int *)0xC2A11D0;
                                        t384 = t323;
                                        if ((t361 & 0x8) != 0) {
                                            t362 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (t362 == 18) {
                                                t363 = *(int *)0xC2A1230;
                                                t323 = 0x3;
                                                t323 = (t323 - t363);
                                                t364 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t323 = (t323 << 2);
                                                t323 = (t323 + 0x1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t364 - t323);
                                                t379 = t323;
                                            } else {
                                                if (t329 == 1) {
                                                    t365 = (int)((int)t324 % (int)0x4);
                                                    if (t365 == 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                        t369 = 0xC08106C;
                                                    } else {
                                                        t366 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t323 = t366;
                                                        t323 = (t323 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                                        if ((int)t323 < 0) {
                                                            t323 = a5;
                                                            t323 = (t323 - 1);
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                                        }
                                                        t369 = t323;
                                                    }
                                                    t375 = t369;
                                                } else {
                                                    t371 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t323 = t371;
                                                    t323 = (t323 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                                    if ((int)t323 < 0) {
                                                        t323 = a5;
                                                        t323 = (t323 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                                    }
                                                    t375 = t323;
                                                }
                                                t379 = t375;
                                            }
                                            t384 = t379;
                                        }
                                        t389 = t384;
                                    }
                                    t414 = t389;
                                } else {
                                    t392 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t392 == 18) {
                                        t393 = *(int *)0xC2A1230;
                                        t323 = 0x3;
                                        t323 = (t323 - t393);
                                        t394 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t323 = (t323 << 2);
                                        t323 = (t323 + 0x1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t394 - t323);
                                        t409 = t323;
                                    } else {
                                        if (t329 == 1) {
                                            t395 = (int)((int)t324 % (int)0x4);
                                            if (t395 == 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                t399 = 0xC08106C;
                                            } else {
                                                t396 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t323 = t396;
                                                t323 = (t323 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                                if ((int)t323 < 0) {
                                                    t323 = a5;
                                                    t323 = (t323 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                                }
                                                t399 = t323;
                                            }
                                            t405 = t399;
                                        } else {
                                            t401 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t323 = t401;
                                            t323 = (t323 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                            if ((int)t323 < 0) {
                                                t323 = a5;
                                                t323 = (t323 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                            }
                                            t405 = t323;
                                        }
                                        t409 = t405;
                                    }
                                    t414 = t409;
                                }
                                t417 = *(int *)0xC2A11CC;
                                t323 = t414;
                                if ((t417 & 0x10) == 0) {
                                    t418 = *(int *)0xC2A11D4;
                                    if (t418 == 0) {
                                        t419 = *(int *)0xC2A11D0;
                                        t323 = t419;
                                        if ((t323 & 0x10) != 0) {
                                            t420 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (t420 == 1) {
                                                t421 = *(int *)0xC2A1230;
                                                t422 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t323 = t422;
                                                t323 = (t323 + ((t421 << 2) + 0x1));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                            } else {
                                                if (t329 == 1) {
                                                    t423 = (int)((int)t324 % (int)0x4);
                                                    if (t423 == 3) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                                    } else {
                                                        t424 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t424 + 0x1);
                                                        if ((int)(t424 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    t429 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t429 + 0x1);
                                                    if ((int)(t429 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t447 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t447 == 1) {
                                        t448 = *(int *)0xC2A1230;
                                        t449 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t323 = t449;
                                        t323 = (t323 + ((t448 << 2) + 0x1));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t323;
                                    } else {
                                        if (t329 == 1) {
                                            t450 = (int)((int)t324 % (int)0x4);
                                            if (t450 == 3) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                            } else {
                                                t451 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t451 + 0x1);
                                                if ((int)(t451 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        } else {
                                            t456 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t456 + 0x1);
                                            if ((int)(t456 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                }
                                t470 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t323 = 0x1;
                                t323 = (((int)t470 >= 0) ? (t323 << (t470 & 31)) : ((-(int)t470 & 31) ? ((int)t323 >> (-(int)t470 & 31)) : ((int)t323 >> 31)));
                                if ((t323 & a6) != 0) continue;
                                break;
                            }
                        }
                    }
                } else {
                    if ((t4 & 0x4) != 0) {
                        t485 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                        *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t485 | 0x9);
                        FUN_0c07f5c0();
                        t487 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (((((int)t487 >= 0) ? (0x1 << (t487 & 31)) : ((-(int)t487 & 31) ? ((int)0x1 >> (-(int)t487 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                            t488 = (((int)t487 >= 0) ? (0x1 << (t487 & 31)) : ((-(int)t487 & 31) ? ((int)0x1 >> (-(int)t487 & 31)) : ((int)0x1 >> 31)));
                            t489 = a4;
                            for (;;) {
                                t490 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t494 = 0x0;
                                if ((int)t490 >= (int)0x2) {
                                    t491 = 0x0;
                                    if ((int)t490 < (int)0x12) {
                                        t491 = 0x1;
                                    }
                                    t494 = t491;
                                }
                                t496 = *(int *)0xC2A11CC;
                                if (t494 == 1) {
                                    t497 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t489 = t497;
                                    t489 = (t489 - 2);
                                    if ((0x20 & t496) == 0) {
                                        t488 = 0xC2A11D4;
                                        t498 = *(int *)((t488 + 0x0));
                                        if (t498 == 0) {
                                            t499 = *(int *)0xC2A11D0;
                                            if ((t499 & 32) != 0) {
                                                t489 = (t489 - 4);
                                            }
                                        }
                                    } else {
                                        t489 = (t489 - 4);
                                    }
                                    t488 = 0x40;
                                    if ((t496 & t488) == 0) {
                                        t507 = *(int *)0xC2A11D4;
                                        if (t507 == 0) {
                                            t508 = *(int *)0xC2A11D0;
                                            if ((t488 & t508) != 0) {
                                                t489 = (t489 + 0x4);
                                            }
                                        }
                                    } else {
                                        t489 = (t489 + 0x4);
                                    }
                                    if ((int)t489 < 0) {
                                        t489 = (t489 + 0x10);
                                    } else {
                                        if ((int)t489 >= (int)0x10) {
                                            t489 = (t489 - 16);
                                        }
                                    }
                                    t488 = t489;
                                    t488 = (t488 + 0x2);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                    t519 = (int)((int)t489 / (int)0x4);
                                    *(unsigned int *)0xC2A1230 = t519;
                                }
                                t524 = *(int *)0xC2A11CC;
                                t488 = t524;
                                if ((t488 & 0x8) == 0) {
                                    t525 = *(int *)0xC2A11D4;
                                    t554 = t488;
                                    if (t525 == 0) {
                                        t526 = *(int *)0xC2A11D0;
                                        t549 = t488;
                                        if ((t526 & 0x8) != 0) {
                                            t527 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (t527 == 18) {
                                                t528 = *(int *)0xC2A1230;
                                                t488 = 0x3;
                                                t488 = (t488 - t528);
                                                t529 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t488 = (t488 << 2);
                                                t488 = (t488 + 0x1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t529 - t488);
                                                t544 = t488;
                                            } else {
                                                if (t494 == 1) {
                                                    t530 = (int)((int)t489 % (int)0x4);
                                                    if (t530 == 0) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                        t534 = 0xC08106C;
                                                    } else {
                                                        t531 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        t488 = t531;
                                                        t488 = (t488 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                                        if ((int)t488 < 0) {
                                                            t488 = a5;
                                                            t488 = (t488 - 1);
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                                        }
                                                        t534 = t488;
                                                    }
                                                    t540 = t534;
                                                } else {
                                                    t536 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t488 = t536;
                                                    t488 = (t488 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                                    if ((int)t488 < 0) {
                                                        t488 = a5;
                                                        t488 = (t488 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                                    }
                                                    t540 = t488;
                                                }
                                                t544 = t540;
                                            }
                                            t549 = t544;
                                        }
                                        t554 = t549;
                                    }
                                    t579 = t554;
                                } else {
                                    t557 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t557 == 18) {
                                        t558 = *(int *)0xC2A1230;
                                        t488 = 0x3;
                                        t488 = (t488 - t558);
                                        t559 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t488 = (t488 << 2);
                                        t488 = (t488 + 0x1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t559 - t488);
                                        t574 = t488;
                                    } else {
                                        if (t494 == 1) {
                                            t560 = (int)((int)t489 % (int)0x4);
                                            if (t560 == 0) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                t564 = 0xC08106C;
                                            } else {
                                                t561 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t488 = t561;
                                                t488 = (t488 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                                if ((int)t488 < 0) {
                                                    t488 = a5;
                                                    t488 = (t488 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                                }
                                                t564 = t488;
                                            }
                                            t570 = t564;
                                        } else {
                                            t566 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t488 = t566;
                                            t488 = (t488 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                            if ((int)t488 < 0) {
                                                t488 = a5;
                                                t488 = (t488 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                            }
                                            t570 = t488;
                                        }
                                        t574 = t570;
                                    }
                                    t579 = t574;
                                }
                                t582 = *(int *)0xC2A11CC;
                                t488 = t579;
                                if ((t582 & 0x10) == 0) {
                                    t583 = *(int *)0xC2A11D4;
                                    if (t583 == 0) {
                                        t584 = *(int *)0xC2A11D0;
                                        t488 = t584;
                                        if ((t488 & 0x10) != 0) {
                                            t585 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            if (t585 == 1) {
                                                t586 = *(int *)0xC2A1230;
                                                t587 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t488 = t587;
                                                t488 = (t488 + ((t586 << 2) + 0x1));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                            } else {
                                                if (t494 == 1) {
                                                    t588 = (int)((int)t489 % (int)0x4);
                                                    if (t588 == 3) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                                    } else {
                                                        t589 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t589 + 0x1);
                                                        if ((int)(t589 + 0x1) >= (int)a5) {
                                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                        }
                                                    }
                                                } else {
                                                    t594 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t594 + 0x1);
                                                    if ((int)(t594 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t612 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t612 == 1) {
                                        t613 = *(int *)0xC2A1230;
                                        t614 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t488 = t614;
                                        t488 = (t488 + ((t613 << 2) + 0x1));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t488;
                                    } else {
                                        if (t494 == 1) {
                                            t615 = (int)((int)t489 % (int)0x4);
                                            if (t615 == 3) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                            } else {
                                                t616 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t616 + 0x1);
                                                if ((int)(t616 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        } else {
                                            t621 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t621 + 0x1);
                                            if ((int)(t621 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    }
                                }
                                t635 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t488 = 0x1;
                                t488 = (((int)t635 >= 0) ? (t488 << (t635 & 31)) : ((-(int)t635 & 31) ? ((int)t488 >> (-(int)t635 & 31)) : ((int)t488 >> 31)));
                                if ((t488 & a6) != 0) continue;
                                break;
                            }
                        }
                    } else {
                        t643 = 0x2;
                        t644 = t3;
                        t645 = t4;
                        for (;;) {
                            t646 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t649 = 0x0;
                            if ((int)t646 >= (int)0x2) {
                                t643 = 0x12;
                                t647 = 0x0;
                                if ((int)t646 < (int)t643) {
                                    t647 = 0x1;
                                }
                                t649 = t647;
                            }
                            t651 = *(int *)0xC2A11CC;
                            if (t649 == 1) {
                                t652 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t645 = t652;
                                t645 = (t645 - 2);
                                if ((0x20 & t651) == 0) {
                                    t644 = 0xC2A11D4;
                                    t653 = *(int *)((t644 + 0x0));
                                    t643 = t653;
                                    if (t643 == 0) {
                                        t643 = 0xC2A11D0;
                                        t654 = *(int *)((t643 + 0x0));
                                        if ((t654 & 32) != 0) {
                                            t645 = (t645 - 4);
                                        }
                                    }
                                } else {
                                    t645 = (t645 - 4);
                                }
                                t644 = 0x40;
                                if ((t651 & t644) == 0) {
                                    t660 = *(int *)0xC2A11D4;
                                    t643 = t660;
                                    if (t643 == 0) {
                                        t661 = *(int *)0xC2A11D0;
                                        t643 = t661;
                                        if ((t644 & t643) != 0) {
                                            t645 = (t645 + 0x4);
                                        }
                                    }
                                } else {
                                    t645 = (t645 + 0x4);
                                }
                                if ((int)t645 < 0) {
                                    t645 = (t645 + 0x10);
                                } else {
                                    if ((int)t645 >= (int)0x10) {
                                        t645 = (t645 - 16);
                                    }
                                }
                                t644 = t645;
                                t644 = (t644 + 0x2);
                                t643 = t645;
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                t670 = (int)((int)t643 / (int)0x4);
                                *(unsigned int *)0xC2A1230 = t670;
                            } else {
                                t672 = t643;
                            }
                            t675 = *(int *)0xC2A11CC;
                            t643 = t672;
                            t644 = t675;
                            if ((t644 & 0x8) == 0) {
                                t676 = *(int *)0xC2A11D4;
                                t643 = t676;
                                t704 = t643;
                                t705 = t644;
                                if (t643 == 0) {
                                    t677 = *(int *)0xC2A11D0;
                                    t699 = t643;
                                    t700 = t644;
                                    if ((t677 & 0x8) != 0) {
                                        t678 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t678 == 18) {
                                            t679 = *(int *)0xC2A1230;
                                            t644 = 0x3;
                                            t644 = (t644 - t679);
                                            t680 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t644 = (t644 << 2);
                                            t644 = (t644 + 0x1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t680 - t644);
                                            t694 = t643;
                                            t695 = t644;
                                        } else {
                                            if (t649 == 1) {
                                                t643 = t645;
                                                t681 = (int)((int)t643 % (int)0x4);
                                                if (t681 == 0) {
                                                    t643 = 0x1;
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t643;
                                                    t684 = t643;
                                                    t685 = 0xC08106C;
                                                } else {
                                                    t682 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t644 = t682;
                                                    t644 = (t644 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                                    if ((int)t644 < 0) {
                                                        t644 = a5;
                                                        t644 = (t644 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                                    }
                                                    t685 = t644;
                                                }
                                                t690 = t684;
                                                t691 = t685;
                                            } else {
                                                t687 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t644 = t687;
                                                t644 = (t644 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                                if ((int)t644 < 0) {
                                                    t644 = a5;
                                                    t644 = (t644 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                                }
                                                t690 = t643;
                                                t691 = t644;
                                            }
                                            t694 = t690;
                                            t695 = t691;
                                        }
                                        t699 = t694;
                                        t700 = t695;
                                    }
                                    t704 = t699;
                                    t705 = t700;
                                }
                                t729 = t704;
                                t730 = t705;
                            } else {
                                t708 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t708 == 18) {
                                    t709 = *(int *)0xC2A1230;
                                    t644 = 0x3;
                                    t644 = (t644 - t709);
                                    t710 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t644 = (t644 << 2);
                                    t644 = (t644 + 0x1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t710 - t644);
                                    t724 = t643;
                                    t725 = t644;
                                } else {
                                    if (t649 == 1) {
                                        t643 = t645;
                                        t711 = (int)((int)t643 % (int)0x4);
                                        if (t711 == 0) {
                                            t643 = 0x1;
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t643;
                                            t714 = t643;
                                            t715 = 0xC08106C;
                                        } else {
                                            t712 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t644 = t712;
                                            t644 = (t644 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                            if ((int)t644 < 0) {
                                                t644 = a5;
                                                t644 = (t644 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                            }
                                            t715 = t644;
                                        }
                                        t720 = t714;
                                        t721 = t715;
                                    } else {
                                        t717 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t644 = t717;
                                        t644 = (t644 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                        if ((int)t644 < 0) {
                                            t644 = a5;
                                            t644 = (t644 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                        }
                                        t720 = t643;
                                        t721 = t644;
                                    }
                                    t724 = t720;
                                    t725 = t721;
                                }
                                t729 = t724;
                                t730 = t725;
                            }
                            t733 = *(int *)0xC2A11CC;
                            t643 = t729;
                            t644 = t730;
                            if ((t733 & 0x10) == 0) {
                                t734 = *(int *)0xC2A11D4;
                                t643 = t734;
                                t760 = t643;
                                if (t643 == 0) {
                                    t735 = *(int *)0xC2A11D0;
                                    t644 = t735;
                                    t756 = t643;
                                    if ((t644 & 0x10) != 0) {
                                        t736 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t736 == 1) {
                                            t737 = *(int *)0xC2A1230;
                                            t738 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t644 = t738;
                                            t644 = (t644 + ((t737 << 2) + 0x1));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                            t752 = t643;
                                        } else {
                                            if (t649 == 1) {
                                                t643 = t645;
                                                t739 = (int)((int)t643 % (int)0x4);
                                                if (t739 == 3) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                                } else {
                                                    t740 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t643 = t740;
                                                    t643 = (t643 + 0x1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t643;
                                                    if ((int)t643 >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                    t742 = t643;
                                                }
                                                t748 = t742;
                                            } else {
                                                t745 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t643 = t745;
                                                t643 = (t643 + 0x1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t643;
                                                if ((int)t643 >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                                t748 = t643;
                                            }
                                            t752 = t748;
                                        }
                                        t756 = t752;
                                    }
                                    t760 = t756;
                                }
                                t783 = t760;
                            } else {
                                t763 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t763 == 1) {
                                    t764 = *(int *)0xC2A1230;
                                    t765 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t644 = t765;
                                    t644 = (t644 + ((t764 << 2) + 0x1));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t644;
                                    t779 = t643;
                                } else {
                                    if (t649 == 1) {
                                        t643 = t645;
                                        t766 = (int)((int)t643 % (int)0x4);
                                        if (t766 == 3) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                        } else {
                                            t767 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t643 = t767;
                                            t643 = (t643 + 0x1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t643;
                                            if ((int)t643 >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                            t769 = t643;
                                        }
                                        t775 = t769;
                                    } else {
                                        t772 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t643 = t772;
                                        t643 = (t643 + 0x1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t643;
                                        if ((int)t643 >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                        t775 = t643;
                                    }
                                    t779 = t775;
                                }
                                t783 = t779;
                            }
                            t786 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t643 = t783;
                            t644 = 0x1;
                            t643 = a6;
                            t644 = (((int)t786 >= 0) ? (t644 << (t786 & 31)) : ((-(int)t786 & 31) ? ((int)t644 >> (-(int)t786 & 31)) : ((int)t644 >> 31)));
                            if ((t644 & t643) != 0) continue;
                            break;
                        }
                    }
                }
            }
            t811 = *(int *)0xC2A1230;
            if (t811 == 3) {
                if ((a6 & 0x3C000) == 0x3C000) {
                    *(unsigned int *)0xC2A1230 = 0x0;
                }
            }
            t816 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
            t818 = 0x0;
            if (t816 != t1) {
                FUN_0c07f5c0();
                t818 = 0x1;
            }
            t827 = t818;
        }
        t1666 = t827;
    } else {
        t842 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
        t843 = *(int *)0xC2A11CC;
        if ((t842 & 0x4) == 0) {
            t844 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
            if (((((int)t844 >= 0) ? (0x1 << (t844 & 31)) : ((-(int)t844 & 31) ? ((int)0x1 >> (-(int)t844 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                t845 = (((int)t844 >= 0) ? (0x1 << (t844 & 31)) : ((-(int)t844 & 31) ? ((int)0x1 >> (-(int)t844 & 31)) : ((int)0x1 >> 31)));
                t846 = t843;
                for (;;) {
                    t847 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    t851 = 0x0;
                    if ((int)t847 >= (int)0x2) {
                        t848 = 0x0;
                        if ((int)t847 < (int)0x12) {
                            t848 = 0x1;
                        }
                        t851 = t848;
                    }
                    t853 = *(int *)0xC2A11CC;
                    if (t851 == 1) {
                        t854 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        t846 = t854;
                        t846 = (t846 - 2);
                        if ((0x20 & t853) == 0) {
                            t845 = 0xC2A11D4;
                            t855 = *(int *)((t845 + 0x0));
                            if (t855 == 0) {
                                t856 = *(int *)0xC2A11D0;
                                if ((t856 & 32) != 0) {
                                    t846 = (t846 - 4);
                                }
                            }
                        } else {
                            t846 = (t846 - 4);
                        }
                        t845 = 0x40;
                        if ((t853 & t845) == 0) {
                            t864 = *(int *)0xC2A11D4;
                            if (t864 == 0) {
                                t865 = *(int *)0xC2A11D0;
                                if ((t845 & t865) != 0) {
                                    t846 = (t846 + 0x4);
                                }
                            }
                        } else {
                            t846 = (t846 + 0x4);
                        }
                        if ((int)t846 < 0) {
                            t846 = (t846 + 0x10);
                        } else {
                            if ((int)t846 >= (int)0x10) {
                                t846 = (t846 - 16);
                            }
                        }
                        t845 = t846;
                        t845 = (t845 + 0x2);
                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                        t876 = (int)((int)t846 / (int)0x4);
                        *(unsigned int *)0xC2A1230 = t876;
                    }
                    t881 = *(int *)0xC2A11CC;
                    t845 = t881;
                    if ((t845 & 0x8) == 0) {
                        t882 = *(int *)0xC2A11D4;
                        t911 = t845;
                        if (t882 == 0) {
                            t883 = *(int *)0xC2A11D0;
                            t906 = t845;
                            if ((t883 & 0x8) != 0) {
                                t884 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t884 == 18) {
                                    t885 = *(int *)0xC2A1230;
                                    t845 = 0x3;
                                    t845 = (t845 - t885);
                                    t886 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t845 = (t845 << 2);
                                    t845 = (t845 + 0x1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t886 - t845);
                                    t901 = t845;
                                } else {
                                    if (t851 == 1) {
                                        t887 = (int)((int)t846 % (int)0x4);
                                        if (t887 == 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                            t891 = 0xC08106C;
                                        } else {
                                            t888 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t845 = t888;
                                            t845 = (t845 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                            if ((int)t845 < 0) {
                                                t845 = a5;
                                                t845 = (t845 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                            }
                                            t891 = t845;
                                        }
                                        t897 = t891;
                                    } else {
                                        t893 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t845 = t893;
                                        t845 = (t845 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                        if ((int)t845 < 0) {
                                            t845 = a5;
                                            t845 = (t845 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                        }
                                        t897 = t845;
                                    }
                                    t901 = t897;
                                }
                                t906 = t901;
                            }
                            t911 = t906;
                        }
                        t936 = t911;
                    } else {
                        t914 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (t914 == 18) {
                            t915 = *(int *)0xC2A1230;
                            t845 = 0x3;
                            t845 = (t845 - t915);
                            t916 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t845 = (t845 << 2);
                            t845 = (t845 + 0x1);
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t916 - t845);
                            t931 = t845;
                        } else {
                            if (t851 == 1) {
                                t917 = (int)((int)t846 % (int)0x4);
                                if (t917 == 0) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                    t921 = 0xC08106C;
                                } else {
                                    t918 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t845 = t918;
                                    t845 = (t845 - 1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                    if ((int)t845 < 0) {
                                        t845 = a5;
                                        t845 = (t845 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                    }
                                    t921 = t845;
                                }
                                t927 = t921;
                            } else {
                                t923 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t845 = t923;
                                t845 = (t845 - 1);
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                if ((int)t845 < 0) {
                                    t845 = a5;
                                    t845 = (t845 - 1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                }
                                t927 = t845;
                            }
                            t931 = t927;
                        }
                        t936 = t931;
                    }
                    t939 = *(int *)0xC2A11CC;
                    t845 = t936;
                    if ((t939 & 0x10) == 0) {
                        t940 = *(int *)0xC2A11D4;
                        if (t940 == 0) {
                            t941 = *(int *)0xC2A11D0;
                            t845 = t941;
                            if ((t845 & 0x10) != 0) {
                                t942 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t942 == 1) {
                                    t943 = *(int *)0xC2A1230;
                                    t944 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t845 = t944;
                                    t845 = (t845 + ((t943 << 2) + 0x1));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                                } else {
                                    if (t851 == 1) {
                                        t945 = (int)((int)t846 % (int)0x4);
                                        if (t945 == 3) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                        } else {
                                            t946 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t946 + 0x1);
                                            if ((int)(t946 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    } else {
                                        t951 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t951 + 0x1);
                                        if ((int)(t951 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        t969 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        if (t969 == 1) {
                            t970 = *(int *)0xC2A1230;
                            t971 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t845 = t971;
                            t845 = (t845 + ((t970 << 2) + 0x1));
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t845;
                        } else {
                            if (t851 == 1) {
                                t972 = (int)((int)t846 % (int)0x4);
                                if (t972 == 3) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                } else {
                                    t973 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t973 + 0x1);
                                    if ((int)(t973 + 0x1) >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    }
                                }
                            } else {
                                t978 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t978 + 0x1);
                                if ((int)(t978 + 0x1) >= (int)a5) {
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                }
                            }
                        }
                    }
                    t992 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    t845 = 0x1;
                    t845 = (((int)t992 >= 0) ? (t845 << (t992 & 31)) : ((-(int)t992 & 31) ? ((int)t845 >> (-(int)t992 & 31)) : ((int)t845 >> 31)));
                    if ((t845 & a6) != 0) continue;
                    break;
                }
            }
        } else {
            if ((0x2 & t843) != 0) {
                t1000 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                t1001 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x18));
                t1002 = *(int *)(((((t1000 << 2) << 1) + t1001) + 0x8));
                if (t1002 == 0) {
                    t1003 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    if (((((int)t1003 >= 0) ? (0x1 << (t1003 & 31)) : ((-(int)t1003 & 31) ? ((int)0x1 >> (-(int)t1003 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                        t1004 = (((int)t1003 >= 0) ? (0x1 << (t1003 & 31)) : ((-(int)t1003 & 31) ? ((int)0x1 >> (-(int)t1003 & 31)) : ((int)0x1 >> 31)));
                        t1005 = t1002;
                        for (;;) {
                            t1006 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t1010 = 0x0;
                            if ((int)t1006 >= (int)0x2) {
                                t1007 = 0x0;
                                if ((int)t1006 < (int)0x12) {
                                    t1007 = 0x1;
                                }
                                t1010 = t1007;
                            }
                            t1012 = *(int *)0xC2A11CC;
                            if (t1010 == 1) {
                                t1013 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t1005 = t1013;
                                t1005 = (t1005 - 2);
                                if ((0x20 & t1012) == 0) {
                                    t1004 = 0xC2A11D4;
                                    t1014 = *(int *)((t1004 + 0x0));
                                    if (t1014 == 0) {
                                        t1015 = *(int *)0xC2A11D0;
                                        if ((t1015 & 32) != 0) {
                                            t1005 = (t1005 - 4);
                                        }
                                    }
                                } else {
                                    t1005 = (t1005 - 4);
                                }
                                t1004 = 0x40;
                                if ((t1012 & t1004) == 0) {
                                    t1023 = *(int *)0xC2A11D4;
                                    if (t1023 == 0) {
                                        t1024 = *(int *)0xC2A11D0;
                                        if ((t1004 & t1024) != 0) {
                                            t1005 = (t1005 + 0x4);
                                        }
                                    }
                                } else {
                                    t1005 = (t1005 + 0x4);
                                }
                                if ((int)t1005 < 0) {
                                    t1005 = (t1005 + 0x10);
                                } else {
                                    if ((int)t1005 >= (int)0x10) {
                                        t1005 = (t1005 - 16);
                                    }
                                }
                                t1004 = t1005;
                                t1004 = (t1004 + 0x2);
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                t1035 = (int)((int)t1005 / (int)0x4);
                                *(unsigned int *)0xC2A1230 = t1035;
                            }
                            t1040 = *(int *)0xC2A11CC;
                            t1004 = t1040;
                            if ((t1004 & 0x8) == 0) {
                                t1041 = *(int *)0xC2A11D4;
                                t1070 = t1004;
                                if (t1041 == 0) {
                                    t1042 = *(int *)0xC2A11D0;
                                    t1065 = t1004;
                                    if ((t1042 & 0x8) != 0) {
                                        t1043 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t1043 == 18) {
                                            t1044 = *(int *)0xC2A1230;
                                            t1004 = 0x3;
                                            t1004 = (t1004 - t1044);
                                            t1045 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1004 = (t1004 << 2);
                                            t1004 = (t1004 + 0x1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1045 - t1004);
                                            t1060 = t1004;
                                        } else {
                                            if (t1010 == 1) {
                                                t1046 = (int)((int)t1005 % (int)0x4);
                                                if (t1046 == 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                    t1050 = 0xC08106C;
                                                } else {
                                                    t1047 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t1004 = t1047;
                                                    t1004 = (t1004 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                                    if ((int)t1004 < 0) {
                                                        t1004 = a5;
                                                        t1004 = (t1004 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                                    }
                                                    t1050 = t1004;
                                                }
                                                t1056 = t1050;
                                            } else {
                                                t1052 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t1004 = t1052;
                                                t1004 = (t1004 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                                if ((int)t1004 < 0) {
                                                    t1004 = a5;
                                                    t1004 = (t1004 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                                }
                                                t1056 = t1004;
                                            }
                                            t1060 = t1056;
                                        }
                                        t1065 = t1060;
                                    }
                                    t1070 = t1065;
                                }
                                t1095 = t1070;
                            } else {
                                t1073 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t1073 == 18) {
                                    t1074 = *(int *)0xC2A1230;
                                    t1004 = 0x3;
                                    t1004 = (t1004 - t1074);
                                    t1075 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1004 = (t1004 << 2);
                                    t1004 = (t1004 + 0x1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1075 - t1004);
                                    t1090 = t1004;
                                } else {
                                    if (t1010 == 1) {
                                        t1076 = (int)((int)t1005 % (int)0x4);
                                        if (t1076 == 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                            t1080 = 0xC08106C;
                                        } else {
                                            t1077 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1004 = t1077;
                                            t1004 = (t1004 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                            if ((int)t1004 < 0) {
                                                t1004 = a5;
                                                t1004 = (t1004 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                            }
                                            t1080 = t1004;
                                        }
                                        t1086 = t1080;
                                    } else {
                                        t1082 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1004 = t1082;
                                        t1004 = (t1004 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                        if ((int)t1004 < 0) {
                                            t1004 = a5;
                                            t1004 = (t1004 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                        }
                                        t1086 = t1004;
                                    }
                                    t1090 = t1086;
                                }
                                t1095 = t1090;
                            }
                            t1098 = *(int *)0xC2A11CC;
                            t1004 = t1095;
                            if ((t1098 & 0x10) == 0) {
                                t1099 = *(int *)0xC2A11D4;
                                if (t1099 == 0) {
                                    t1100 = *(int *)0xC2A11D0;
                                    t1004 = t1100;
                                    if ((t1004 & 0x10) != 0) {
                                        t1101 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t1101 == 1) {
                                            t1102 = *(int *)0xC2A1230;
                                            t1103 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1004 = t1103;
                                            t1004 = (t1004 + ((t1102 << 2) + 0x1));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                        } else {
                                            if (t1010 == 1) {
                                                t1104 = (int)((int)t1005 % (int)0x4);
                                                if (t1104 == 3) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                                } else {
                                                    t1105 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1105 + 0x1);
                                                    if ((int)(t1105 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                t1110 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1110 + 0x1);
                                                if ((int)(t1110 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t1128 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t1128 == 1) {
                                    t1129 = *(int *)0xC2A1230;
                                    t1130 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1004 = t1130;
                                    t1004 = (t1004 + ((t1129 << 2) + 0x1));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1004;
                                } else {
                                    if (t1010 == 1) {
                                        t1131 = (int)((int)t1005 % (int)0x4);
                                        if (t1131 == 3) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                        } else {
                                            t1132 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1132 + 0x1);
                                            if ((int)(t1132 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    } else {
                                        t1137 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1137 + 0x1);
                                        if ((int)(t1137 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    }
                                }
                            }
                            t1151 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t1004 = 0x1;
                            t1004 = (((int)t1151 >= 0) ? (t1004 << (t1151 & 31)) : ((-(int)t1151 & 31) ? ((int)t1004 >> (-(int)t1151 & 31)) : ((int)t1004 >> 31)));
                            if ((t1004 & a6) != 0) continue;
                            break;
                        }
                    }
                } else {
                    t1159 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                    *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t1159 | 0x8);
                    FUN_0c07f5c0();
                    t1161 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    if (((((int)t1161 >= 0) ? (0x1 << (t1161 & 31)) : ((-(int)t1161 & 31) ? ((int)0x1 >> (-(int)t1161 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                        t1162 = (((int)t1161 >= 0) ? (0x1 << (t1161 & 31)) : ((-(int)t1161 & 31) ? ((int)0x1 >> (-(int)t1161 & 31)) : ((int)0x1 >> 31)));
                        t1163 = a4;
                        for (;;) {
                            t1164 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t1168 = 0x0;
                            if ((int)t1164 >= (int)0x2) {
                                t1165 = 0x0;
                                if ((int)t1164 < (int)0x12) {
                                    t1165 = 0x1;
                                }
                                t1168 = t1165;
                            }
                            t1170 = *(int *)0xC2A11CC;
                            if (t1168 == 1) {
                                t1171 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t1163 = t1171;
                                t1163 = (t1163 - 2);
                                if ((0x20 & t1170) == 0) {
                                    t1162 = 0xC2A11D4;
                                    t1172 = *(int *)((t1162 + 0x0));
                                    if (t1172 == 0) {
                                        t1173 = *(int *)0xC2A11D0;
                                        if ((t1173 & 32) != 0) {
                                            t1163 = (t1163 - 4);
                                        }
                                    }
                                } else {
                                    t1163 = (t1163 - 4);
                                }
                                t1162 = 0x40;
                                if ((t1170 & t1162) == 0) {
                                    t1181 = *(int *)0xC2A11D4;
                                    if (t1181 == 0) {
                                        t1182 = *(int *)0xC2A11D0;
                                        if ((t1162 & t1182) != 0) {
                                            t1163 = (t1163 + 0x4);
                                        }
                                    }
                                } else {
                                    t1163 = (t1163 + 0x4);
                                }
                                if ((int)t1163 < 0) {
                                    t1163 = (t1163 + 0x10);
                                } else {
                                    if ((int)t1163 >= (int)0x10) {
                                        t1163 = (t1163 - 16);
                                    }
                                }
                                t1162 = t1163;
                                t1162 = (t1162 + 0x2);
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                t1193 = (int)((int)t1163 / (int)0x4);
                                *(unsigned int *)0xC2A1230 = t1193;
                            }
                            t1198 = *(int *)0xC2A11CC;
                            t1162 = t1198;
                            if ((t1162 & 0x8) == 0) {
                                t1199 = *(int *)0xC2A11D4;
                                t1228 = t1162;
                                if (t1199 == 0) {
                                    t1200 = *(int *)0xC2A11D0;
                                    t1223 = t1162;
                                    if ((t1200 & 0x8) != 0) {
                                        t1201 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t1201 == 18) {
                                            t1202 = *(int *)0xC2A1230;
                                            t1162 = 0x3;
                                            t1162 = (t1162 - t1202);
                                            t1203 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1162 = (t1162 << 2);
                                            t1162 = (t1162 + 0x1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1203 - t1162);
                                            t1218 = t1162;
                                        } else {
                                            if (t1168 == 1) {
                                                t1204 = (int)((int)t1163 % (int)0x4);
                                                if (t1204 == 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                    t1208 = 0xC08106C;
                                                } else {
                                                    t1205 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t1162 = t1205;
                                                    t1162 = (t1162 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                                    if ((int)t1162 < 0) {
                                                        t1162 = a5;
                                                        t1162 = (t1162 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                                    }
                                                    t1208 = t1162;
                                                }
                                                t1214 = t1208;
                                            } else {
                                                t1210 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t1162 = t1210;
                                                t1162 = (t1162 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                                if ((int)t1162 < 0) {
                                                    t1162 = a5;
                                                    t1162 = (t1162 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                                }
                                                t1214 = t1162;
                                            }
                                            t1218 = t1214;
                                        }
                                        t1223 = t1218;
                                    }
                                    t1228 = t1223;
                                }
                                t1253 = t1228;
                            } else {
                                t1231 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t1231 == 18) {
                                    t1232 = *(int *)0xC2A1230;
                                    t1162 = 0x3;
                                    t1162 = (t1162 - t1232);
                                    t1233 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1162 = (t1162 << 2);
                                    t1162 = (t1162 + 0x1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1233 - t1162);
                                    t1248 = t1162;
                                } else {
                                    if (t1168 == 1) {
                                        t1234 = (int)((int)t1163 % (int)0x4);
                                        if (t1234 == 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                            t1238 = 0xC08106C;
                                        } else {
                                            t1235 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1162 = t1235;
                                            t1162 = (t1162 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                            if ((int)t1162 < 0) {
                                                t1162 = a5;
                                                t1162 = (t1162 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                            }
                                            t1238 = t1162;
                                        }
                                        t1244 = t1238;
                                    } else {
                                        t1240 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1162 = t1240;
                                        t1162 = (t1162 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                        if ((int)t1162 < 0) {
                                            t1162 = a5;
                                            t1162 = (t1162 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                        }
                                        t1244 = t1162;
                                    }
                                    t1248 = t1244;
                                }
                                t1253 = t1248;
                            }
                            t1256 = *(int *)0xC2A11CC;
                            t1162 = t1253;
                            if ((t1256 & 0x10) == 0) {
                                t1257 = *(int *)0xC2A11D4;
                                if (t1257 == 0) {
                                    t1258 = *(int *)0xC2A11D0;
                                    t1162 = t1258;
                                    if ((t1162 & 0x10) != 0) {
                                        t1259 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t1259 == 1) {
                                            t1260 = *(int *)0xC2A1230;
                                            t1261 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1162 = t1261;
                                            t1162 = (t1162 + ((t1260 << 2) + 0x1));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                        } else {
                                            if (t1168 == 1) {
                                                t1262 = (int)((int)t1163 % (int)0x4);
                                                if (t1262 == 3) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                                } else {
                                                    t1263 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1263 + 0x1);
                                                    if ((int)(t1263 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                t1268 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1268 + 0x1);
                                                if ((int)(t1268 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t1286 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t1286 == 1) {
                                    t1287 = *(int *)0xC2A1230;
                                    t1288 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1162 = t1288;
                                    t1162 = (t1162 + ((t1287 << 2) + 0x1));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1162;
                                } else {
                                    if (t1168 == 1) {
                                        t1289 = (int)((int)t1163 % (int)0x4);
                                        if (t1289 == 3) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                        } else {
                                            t1290 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1290 + 0x1);
                                            if ((int)(t1290 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    } else {
                                        t1295 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1295 + 0x1);
                                        if ((int)(t1295 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    }
                                }
                            }
                            t1309 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t1162 = 0x1;
                            t1162 = (((int)t1309 >= 0) ? (t1162 << (t1309 & 31)) : ((-(int)t1309 & 31) ? ((int)t1162 >> (-(int)t1309 & 31)) : ((int)t1162 >> 31)));
                            if ((t1162 & a6) != 0) continue;
                            break;
                        }
                    }
                }
            } else {
                if ((t843 & 0x4) != 0) {
                    t1324 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
                    *(unsigned int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14)) = (t1324 | 0x9);
                    FUN_0c07f5c0();
                    t1326 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                    if (((((int)t1326 >= 0) ? (0x1 << (t1326 & 31)) : ((-(int)t1326 & 31) ? ((int)0x1 >> (-(int)t1326 & 31)) : ((int)0x1 >> 31))) & a6) != 0) {
                        t1327 = (((int)t1326 >= 0) ? (0x1 << (t1326 & 31)) : ((-(int)t1326 & 31) ? ((int)0x1 >> (-(int)t1326 & 31)) : ((int)0x1 >> 31)));
                        t1328 = a4;
                        for (;;) {
                            t1329 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t1333 = 0x0;
                            if ((int)t1329 >= (int)0x2) {
                                t1330 = 0x0;
                                if ((int)t1329 < (int)0x12) {
                                    t1330 = 0x1;
                                }
                                t1333 = t1330;
                            }
                            t1335 = *(int *)0xC2A11CC;
                            if (t1333 == 1) {
                                t1336 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t1328 = t1336;
                                t1328 = (t1328 - 2);
                                if ((0x20 & t1335) == 0) {
                                    t1327 = 0xC2A11D4;
                                    t1337 = *(int *)((t1327 + 0x0));
                                    if (t1337 == 0) {
                                        t1338 = *(int *)0xC2A11D0;
                                        if ((t1338 & 32) != 0) {
                                            t1328 = (t1328 - 4);
                                        }
                                    }
                                } else {
                                    t1328 = (t1328 - 4);
                                }
                                t1327 = 0x40;
                                if ((t1335 & t1327) == 0) {
                                    t1346 = *(int *)0xC2A11D4;
                                    if (t1346 == 0) {
                                        t1347 = *(int *)0xC2A11D0;
                                        if ((t1327 & t1347) != 0) {
                                            t1328 = (t1328 + 0x4);
                                        }
                                    }
                                } else {
                                    t1328 = (t1328 + 0x4);
                                }
                                if ((int)t1328 < 0) {
                                    t1328 = (t1328 + 0x10);
                                } else {
                                    if ((int)t1328 >= (int)0x10) {
                                        t1328 = (t1328 - 16);
                                    }
                                }
                                t1327 = t1328;
                                t1327 = (t1327 + 0x2);
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                t1358 = (int)((int)t1328 / (int)0x4);
                                *(unsigned int *)0xC2A1230 = t1358;
                            }
                            t1363 = *(int *)0xC2A11CC;
                            t1327 = t1363;
                            if ((t1327 & 0x8) == 0) {
                                t1364 = *(int *)0xC2A11D4;
                                t1393 = t1327;
                                if (t1364 == 0) {
                                    t1365 = *(int *)0xC2A11D0;
                                    t1388 = t1327;
                                    if ((t1365 & 0x8) != 0) {
                                        t1366 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t1366 == 18) {
                                            t1367 = *(int *)0xC2A1230;
                                            t1327 = 0x3;
                                            t1327 = (t1327 - t1367);
                                            t1368 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1327 = (t1327 << 2);
                                            t1327 = (t1327 + 0x1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1368 - t1327);
                                            t1383 = t1327;
                                        } else {
                                            if (t1333 == 1) {
                                                t1369 = (int)((int)t1328 % (int)0x4);
                                                if (t1369 == 0) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                                    t1373 = 0xC08106C;
                                                } else {
                                                    t1370 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    t1327 = t1370;
                                                    t1327 = (t1327 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                                    if ((int)t1327 < 0) {
                                                        t1327 = a5;
                                                        t1327 = (t1327 - 1);
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                                    }
                                                    t1373 = t1327;
                                                }
                                                t1379 = t1373;
                                            } else {
                                                t1375 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t1327 = t1375;
                                                t1327 = (t1327 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                                if ((int)t1327 < 0) {
                                                    t1327 = a5;
                                                    t1327 = (t1327 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                                }
                                                t1379 = t1327;
                                            }
                                            t1383 = t1379;
                                        }
                                        t1388 = t1383;
                                    }
                                    t1393 = t1388;
                                }
                                t1418 = t1393;
                            } else {
                                t1396 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t1396 == 18) {
                                    t1397 = *(int *)0xC2A1230;
                                    t1327 = 0x3;
                                    t1327 = (t1327 - t1397);
                                    t1398 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1327 = (t1327 << 2);
                                    t1327 = (t1327 + 0x1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1398 - t1327);
                                    t1413 = t1327;
                                } else {
                                    if (t1333 == 1) {
                                        t1399 = (int)((int)t1328 % (int)0x4);
                                        if (t1399 == 0) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x1;
                                            t1403 = 0xC08106C;
                                        } else {
                                            t1400 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1327 = t1400;
                                            t1327 = (t1327 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                            if ((int)t1327 < 0) {
                                                t1327 = a5;
                                                t1327 = (t1327 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                            }
                                            t1403 = t1327;
                                        }
                                        t1409 = t1403;
                                    } else {
                                        t1405 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1327 = t1405;
                                        t1327 = (t1327 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                        if ((int)t1327 < 0) {
                                            t1327 = a5;
                                            t1327 = (t1327 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                        }
                                        t1409 = t1327;
                                    }
                                    t1413 = t1409;
                                }
                                t1418 = t1413;
                            }
                            t1421 = *(int *)0xC2A11CC;
                            t1327 = t1418;
                            if ((t1421 & 0x10) == 0) {
                                t1422 = *(int *)0xC2A11D4;
                                if (t1422 == 0) {
                                    t1423 = *(int *)0xC2A11D0;
                                    t1327 = t1423;
                                    if ((t1327 & 0x10) != 0) {
                                        t1424 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        if (t1424 == 1) {
                                            t1425 = *(int *)0xC2A1230;
                                            t1426 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1327 = t1426;
                                            t1327 = (t1327 + ((t1425 << 2) + 0x1));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                        } else {
                                            if (t1333 == 1) {
                                                t1427 = (int)((int)t1328 % (int)0x4);
                                                if (t1427 == 3) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                                } else {
                                                    t1428 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1428 + 0x1);
                                                    if ((int)(t1428 + 0x1) >= (int)a5) {
                                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                    }
                                                }
                                            } else {
                                                t1433 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1433 + 0x1);
                                                if ((int)(t1433 + 0x1) >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t1451 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                if (t1451 == 1) {
                                    t1452 = *(int *)0xC2A1230;
                                    t1453 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1327 = t1453;
                                    t1327 = (t1327 + ((t1452 << 2) + 0x1));
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1327;
                                } else {
                                    if (t1333 == 1) {
                                        t1454 = (int)((int)t1328 % (int)0x4);
                                        if (t1454 == 3) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                        } else {
                                            t1455 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1455 + 0x1);
                                            if ((int)(t1455 + 0x1) >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                        }
                                    } else {
                                        t1460 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1460 + 0x1);
                                        if ((int)(t1460 + 0x1) >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                    }
                                }
                            }
                            t1474 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t1327 = 0x1;
                            t1327 = (((int)t1474 >= 0) ? (t1327 << (t1474 & 31)) : ((-(int)t1474 & 31) ? ((int)t1327 >> (-(int)t1474 & 31)) : ((int)t1327 >> 31)));
                            if ((t1327 & a6) != 0) continue;
                            break;
                        }
                    }
                } else {
                    t1482 = 0x2;
                    t1483 = t842;
                    t1484 = t843;
                    for (;;) {
                        t1485 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        t1488 = 0x0;
                        if ((int)t1485 >= (int)0x2) {
                            t1482 = 0x12;
                            t1486 = 0x0;
                            if ((int)t1485 < (int)t1482) {
                                t1486 = 0x1;
                            }
                            t1488 = t1486;
                        }
                        t1490 = *(int *)0xC2A11CC;
                        if (t1488 == 1) {
                            t1491 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            t1484 = t1491;
                            t1484 = (t1484 - 2);
                            if ((0x20 & t1490) == 0) {
                                t1483 = 0xC2A11D4;
                                t1492 = *(int *)((t1483 + 0x0));
                                t1482 = t1492;
                                if (t1482 == 0) {
                                    t1482 = 0xC2A11D0;
                                    t1493 = *(int *)((t1482 + 0x0));
                                    if ((t1493 & 32) != 0) {
                                        t1484 = (t1484 - 4);
                                    }
                                }
                            } else {
                                t1484 = (t1484 - 4);
                            }
                            t1483 = 0x40;
                            if ((t1490 & t1483) == 0) {
                                t1499 = *(int *)0xC2A11D4;
                                t1482 = t1499;
                                if (t1482 == 0) {
                                    t1500 = *(int *)0xC2A11D0;
                                    t1482 = t1500;
                                    if ((t1483 & t1482) != 0) {
                                        t1484 = (t1484 + 0x4);
                                    }
                                }
                            } else {
                                t1484 = (t1484 + 0x4);
                            }
                            if ((int)t1484 < 0) {
                                t1484 = (t1484 + 0x10);
                            } else {
                                if ((int)t1484 >= (int)0x10) {
                                    t1484 = (t1484 - 16);
                                }
                            }
                            t1483 = t1484;
                            t1483 = (t1483 + 0x2);
                            t1482 = t1484;
                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                            t1509 = (int)((int)t1482 / (int)0x4);
                            *(unsigned int *)0xC2A1230 = t1509;
                        } else {
                            t1511 = t1482;
                        }
                        t1514 = *(int *)0xC2A11CC;
                        t1482 = t1511;
                        t1483 = t1514;
                        if ((t1483 & 0x8) == 0) {
                            t1515 = *(int *)0xC2A11D4;
                            t1482 = t1515;
                            t1543 = t1482;
                            t1544 = t1483;
                            if (t1482 == 0) {
                                t1516 = *(int *)0xC2A11D0;
                                t1538 = t1482;
                                t1539 = t1483;
                                if ((t1516 & 0x8) != 0) {
                                    t1517 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t1517 == 18) {
                                        t1518 = *(int *)0xC2A1230;
                                        t1483 = 0x3;
                                        t1483 = (t1483 - t1518);
                                        t1519 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1483 = (t1483 << 2);
                                        t1483 = (t1483 + 0x1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1519 - t1483);
                                        t1533 = t1482;
                                        t1534 = t1483;
                                    } else {
                                        if (t1488 == 1) {
                                            t1482 = t1484;
                                            t1520 = (int)((int)t1482 % (int)0x4);
                                            if (t1520 == 0) {
                                                t1482 = 0x1;
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1482;
                                                t1523 = t1482;
                                                t1524 = 0xC08106C;
                                            } else {
                                                t1521 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t1483 = t1521;
                                                t1483 = (t1483 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                                if ((int)t1483 < 0) {
                                                    t1483 = a5;
                                                    t1483 = (t1483 - 1);
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                                }
                                                t1524 = t1483;
                                            }
                                            t1529 = t1523;
                                            t1530 = t1524;
                                        } else {
                                            t1526 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1483 = t1526;
                                            t1483 = (t1483 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                            if ((int)t1483 < 0) {
                                                t1483 = a5;
                                                t1483 = (t1483 - 1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                            }
                                            t1529 = t1482;
                                            t1530 = t1483;
                                        }
                                        t1533 = t1529;
                                        t1534 = t1530;
                                    }
                                    t1538 = t1533;
                                    t1539 = t1534;
                                }
                                t1543 = t1538;
                                t1544 = t1539;
                            }
                            t1568 = t1543;
                            t1569 = t1544;
                        } else {
                            t1547 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            if (t1547 == 18) {
                                t1548 = *(int *)0xC2A1230;
                                t1483 = 0x3;
                                t1483 = (t1483 - t1548);
                                t1549 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t1483 = (t1483 << 2);
                                t1483 = (t1483 + 0x1);
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = (t1549 - t1483);
                                t1563 = t1482;
                                t1564 = t1483;
                            } else {
                                if (t1488 == 1) {
                                    t1482 = t1484;
                                    t1550 = (int)((int)t1482 % (int)0x4);
                                    if (t1550 == 0) {
                                        t1482 = 0x1;
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1482;
                                        t1553 = t1482;
                                        t1554 = 0xC08106C;
                                    } else {
                                        t1551 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1483 = t1551;
                                        t1483 = (t1483 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                        if ((int)t1483 < 0) {
                                            t1483 = a5;
                                            t1483 = (t1483 - 1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                        }
                                        t1554 = t1483;
                                    }
                                    t1559 = t1553;
                                    t1560 = t1554;
                                } else {
                                    t1556 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1483 = t1556;
                                    t1483 = (t1483 - 1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                    if ((int)t1483 < 0) {
                                        t1483 = a5;
                                        t1483 = (t1483 - 1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                    }
                                    t1559 = t1482;
                                    t1560 = t1483;
                                }
                                t1563 = t1559;
                                t1564 = t1560;
                            }
                            t1568 = t1563;
                            t1569 = t1564;
                        }
                        t1572 = *(int *)0xC2A11CC;
                        t1482 = t1568;
                        t1483 = t1569;
                        if ((t1572 & 0x10) == 0) {
                            t1573 = *(int *)0xC2A11D4;
                            t1482 = t1573;
                            t1599 = t1482;
                            if (t1482 == 0) {
                                t1574 = *(int *)0xC2A11D0;
                                t1483 = t1574;
                                t1595 = t1482;
                                if ((t1483 & 0x10) != 0) {
                                    t1575 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    if (t1575 == 1) {
                                        t1576 = *(int *)0xC2A1230;
                                        t1577 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1483 = t1577;
                                        t1483 = (t1483 + ((t1576 << 2) + 0x1));
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                        t1591 = t1482;
                                    } else {
                                        if (t1488 == 1) {
                                            t1482 = t1484;
                                            t1578 = (int)((int)t1482 % (int)0x4);
                                            if (t1578 == 3) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                            } else {
                                                t1579 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                                t1482 = t1579;
                                                t1482 = (t1482 + 0x1);
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1482;
                                                if ((int)t1482 >= (int)a5) {
                                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                                }
                                                t1581 = t1482;
                                            }
                                            t1587 = t1581;
                                        } else {
                                            t1584 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                            t1482 = t1584;
                                            t1482 = (t1482 + 0x1);
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1482;
                                            if ((int)t1482 >= (int)a5) {
                                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                            }
                                            t1587 = t1482;
                                        }
                                        t1591 = t1587;
                                    }
                                    t1595 = t1591;
                                }
                                t1599 = t1595;
                            }
                            t1622 = t1599;
                        } else {
                            t1602 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                            if (t1602 == 1) {
                                t1603 = *(int *)0xC2A1230;
                                t1604 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                t1483 = t1604;
                                t1483 = (t1483 + ((t1603 << 2) + 0x1));
                                *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1483;
                                t1618 = t1482;
                            } else {
                                if (t1488 == 1) {
                                    t1482 = t1484;
                                    t1605 = (int)((int)t1482 % (int)0x4);
                                    if (t1605 == 3) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x12;
                                    } else {
                                        t1606 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                        t1482 = t1606;
                                        t1482 = (t1482 + 0x1);
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1482;
                                        if ((int)t1482 >= (int)a5) {
                                            *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                        }
                                        t1608 = t1482;
                                    }
                                    t1614 = t1608;
                                } else {
                                    t1611 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                                    t1482 = t1611;
                                    t1482 = (t1482 + 0x1);
                                    *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = t1482;
                                    if ((int)t1482 >= (int)a5) {
                                        *(unsigned int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0)) = 0x0;
                                    }
                                    t1614 = t1482;
                                }
                                t1618 = t1614;
                            }
                            t1622 = t1618;
                        }
                        t1625 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
                        t1482 = t1622;
                        t1483 = 0x1;
                        t1482 = a6;
                        t1483 = (((int)t1625 >= 0) ? (t1483 << (t1625 & 31)) : ((-(int)t1625 & 31) ? ((int)t1483 >> (-(int)t1625 & 31)) : ((int)t1483 >> 31)));
                        if ((t1483 & t1482) != 0) continue;
                        break;
                    }
                }
            }
        }
        t1650 = *(int *)0xC2A1230;
        if (t1650 == 3) {
            if ((a6 & 0x3C000) == 0x3C000) {
                *(unsigned int *)0xC2A1230 = 0x0;
            }
        }
        t1655 = *(int *)((((t0 << 2) + (((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x4)) + 0x0));
        t1657 = 0x0;
        if (t1655 != t1) {
            FUN_0c07f5c0();
            t1657 = 0x1;
        }
        t1666 = t1657;
    }
    return t1666;
}

int FUN_0c038ff8(void)
{
    int t0;

    *(unsigned int *)0xC2863F0 = 0x1E0;
    *(unsigned int *)0xC2863F4 = 0x424;
    *(unsigned int *)0xC2863F8 = 0x280;
    *(unsigned int *)0xC2863FC = 0x50;
    t0 = *(int *)0xC2863EC;
    *(unsigned int *)0xC2863EC = (t0 & 0xFFFFFFFE);
    *(float *)0xC286400 = 100.0f;
    FUN_0c07c6b0(0xC275948, 0xC2863EC);
    FUN_0c030b68(0xC286410);
    FUN_0c030e34(0x5, 0xC07D5C0);
    FUN_0c030e34(0x3, 0xC07D5C0);
    FUN_0c07d5c0(0xC3938E8);
    FUN_0c07d5c0(0xC3A60D0);
    FUN_0c07d5c0(0xC3B1220);
    FUN_0c07d5c0(0xC3C0CE8);
    FUN_0c07d5c0(0xC3D32E0);
    FUN_0c07d5c0(0xC3DE628);
    FUN_0c07d5c0(0xC3E1568);
    FUN_0c07d5c0(0xC3F3FE0);
    FUN_0c07d5c0(0xC3FD880);
    FUN_0c07d5c0(0xC3FF3C0);
    FUN_0c07d5c0(0xC414120);
    FUN_0c07d5c0(0xC421D18);
    FUN_0c07d5c0(0xC3B7C10);
    FUN_0c07d5c0(0xC3C05A8);
    FUN_0c07d5c0(0xC3C07C8);
    FUN_0c07d5f0(0xC3A15F0);
    FUN_0c07d5f0(0xC3A2540);
    FUN_0c07d5f0(0xC3A34F0);
    FUN_0c07d5f0(0xC3A4440);
    FUN_0c07d5f0(0xC3A53F0);
    FUN_0c07d5f0(0xC3A5A30);
    FUN_0c07d5f0(0xC3B0240);
    FUN_0c07d5f0(0xC3B0880);
    FUN_0c07d5f0(0xC3EFA70);
    FUN_0c07d5f0(0xC3F08E8);
    FUN_0c07d5f0(0xC3F17C0);
    FUN_0c07d5f0(0xC3F2638);
    FUN_0c07d5f0(0xC3F3510);
    FUN_0c07d5f0(0xC3F3A78);
    FUN_0c07d5f0(0xC3FCAB0);
    FUN_0c07d5f0(0xC3FD018);
    FUN_0c07d5f0(0xC40FB50);
    FUN_0c07d5f0(0xC4109C8);
    FUN_0c07d5f0(0xC4118A0);
    FUN_0c07d5f0(0xC412718);
    FUN_0c07d5f0(0xC4135F0);
    FUN_0c07d5f0(0xC413B58);
    FUN_0c07d5f0(0xC420EE8);
    FUN_0c07d5f0(0xC421450);
    FUN_0c07d5f0(0xC3BD538);
    FUN_0c07d5f0(0xC3BE3B0);
    return nlObjPutSetVtxColorMode(0x1);
}

int kmiFBgetfreemem(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t8;
    int t9;
    int t13;
    int t32;
    int t15;
    int t16;
    int t17;
    int t26;
    int t18;
    int t19;
    int t20;
    int t23;
    int t25;
    int t28;
    int t33;
    int t45;
    int t34;
    int t35;
    int t36;
    int t37;
    int t40;
    int t41;
    int t42;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t61;
    int t66;
    int t67;
    int t68;
    int t69;
    int t98;
    int t99;
    int t94;
    int t95;
    int t90;
    int t91;
    int t86;
    int t87;
    int t82;
    int t83;
    int t78;
    int t79;
    int t74;
    int t75;
    int t70;
    int t71;
    int t101;
    int t102;
    int t103;
    int t104;
    int t106;
    int t110;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t127;
    int t126;
    int t11;
    int t12;
    int t29;
    int t14;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t0 = *(int *)0xC177FC4;
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t2 = *(int *)((t1 + 0x10));
            t3 = *(int *)(((int)stk + 8));
            if ((int)t2 > (int)t3) {
                t4 = *(int *)((t1 + 0x10));
                *(unsigned int *)(((int)stk + 8)) = t4;
            }
            t7 = *(int *)(((int)stk + 24));
            t8 = *(int *)((t1 + 0x10));
            *(unsigned int *)(((int)stk + 24)) = (t7 + t8);
            t9 = *(int *)((t1 + 0x8));
            t1 = t9;
            if (t1 == 0) {
                break;
            }
        }
        t11 = (t7 + t8);
        t12 = t8;
    }
    t13 = *(int *)0xC177FBC;
    t32 = t12;
    if (t13 != 0) {
        t15 = t11;
        t16 = t13;
        for (;;) {
            t17 = *(short *)((t16 + 0x0));
            t26 = (unsigned short)t17;
            if (((unsigned short)t17 & 0x4) == 0) {
                t18 = *(int *)((t16 + 0x10));
                t15 = t18;
                t19 = *(int *)(((int)stk + 8));
                t14 = t19;
                if ((int)t15 > (int)t14) {
                    t20 = *(int *)((t16 + 0x10));
                    *(unsigned int *)(((int)stk + 8)) = t20;
                }
                t23 = *(int *)(((int)stk + 20));
                t15 = t23;
                t25 = *(int *)((t16 + 0x10));
                t15 = (t15 + t25);
                *(unsigned int *)(((int)stk + 20)) = t15;
                t26 = t25;
            }
            t28 = *(int *)((t16 + 0x8));
            t16 = t28;
            if (t16 == 0) {
                break;
            }
        }
        t29 = t14;
        t32 = t26;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC177FD0;
    t33 = *(int *)0xC177FD8;
    t45 = t32;
    if (t33 != 0) {
        t34 = t33;
        for (;;) {
            t35 = *(int *)((t34 + 0x10));
            t36 = *(int *)(((int)stk + 12));
            if ((int)t35 > (int)t36) {
                t37 = *(int *)((t34 + 0x10));
                *(unsigned int *)(((int)stk + 12)) = t37;
            }
            t40 = *(int *)(((int)stk + 28));
            t41 = *(int *)((t34 + 0x10));
            *(unsigned int *)(((int)stk + 28)) = (t40 + t41);
            t42 = *(int *)((t34 + 0x8));
            t34 = t42;
            if (t34 == 0) {
                break;
            }
        }
        t45 = t41;
    }
    t46 = *(int *)(((int)stk + 4));
    t47 = *(int *)((t46 + 0x0));
    if (t47 != 0) {
        t48 = t29;
        t49 = t45;
        t50 = t47;
        for (;;) {
            t51 = *(short *)((t50 + 0x0));
            if (((unsigned short)t51 & 0x4) == 0) {
                t52 = *(int *)((t50 + 0x10));
                t49 = t52;
                t53 = *(int *)(((int)stk + 12));
                t48 = t53;
                if ((int)t49 > (int)t48) {
                    t54 = *(int *)((t50 + 0x10));
                    t49 = t54;
                    *(unsigned int *)(((int)stk + 12)) = t49;
                }
                t56 = *(int *)(((int)stk + 32));
                t57 = *(int *)((t50 + 0x10));
                t49 = t57;
                *(unsigned int *)(((int)stk + 32)) = (t56 + t49);
            }
            t61 = *(int *)((t50 + 0x8));
            t50 = t61;
            if (t50 == 0) {
                break;
            }
        }
    }
    t66 = *(int *)0xC177FE4;
    if (t66 != 0) {
        t67 = 0xC177FE4;
        t68 = t66;
        for (;;) {
            t69 = *(short *)((t68 + 0x0));
            t98 = 0x90;
            t99 = 0x10;
            if (((unsigned short)t69 & 0xF000) != 0x1000) {
                t94 = 0xA0;
                t95 = 0x10;
                if (((unsigned short)t69 & 0xF000) != 0x2000) {
                    t90 = 0xC0;
                    t91 = 0x10;
                    if (((unsigned short)t69 & 0xF000) != 0x3000) {
                        t86 = 0xE0;
                        t87 = 0x10;
                        if (((unsigned short)t69 & 0xF000) != 0x4000) {
                            t82 = 0x200;
                            t83 = 0x8;
                            if (((unsigned short)t69 & 0xF000) != 0x5000) {
                                t78 = 0x360;
                                t79 = 0x4;
                                if (((unsigned short)t69 & 0xF000) != 0x6000) {
                                    t74 = 0x800;
                                    t75 = 0x2;
                                    if (((unsigned short)t69 & 0xF000) != 0x7000) {
                                        t70 = 0xD60;
                                        t71 = 0x1;
                                        if (((unsigned short)t69 & 0xF000) != 0x8000) {
                                            t70 = 0x0;
                                            t71 = 0x0;
                                        }
                                        t74 = t70;
                                        t75 = t71;
                                    }
                                    t78 = t74;
                                    t79 = t75;
                                }
                                t82 = t78;
                                t83 = t79;
                            }
                            t86 = t82;
                            t87 = t83;
                        }
                        t90 = t86;
                        t91 = t87;
                    }
                    t94 = t90;
                    t95 = t91;
                }
                t98 = t94;
                t99 = t95;
            }
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((int)t99 > 0) {
                t101 = (t68 + 0xC);
                t102 = 0xF000;
                for (;;) {
                    t103 = *(int *)((t101 + 0x0));
                    t67 = t103;
                    if (t67 == 0) {
                        t104 = *(int *)(((int)stk + 16));
                        t102 = t104;
                        t102 = (t102 + t98);
                        *(unsigned int *)(((int)stk + 16)) = t102;
                    }
                    t106 = *(int *)(((int)stk + 4));
                    t67 = t106;
                    t67 = (t67 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t67;
                    t101 = (t101 + 0x4);
                    if ((int)t67 >= (int)t99) {
                        break;
                    }
                }
            }
            t110 = *(int *)((t68 + 0x4));
            t68 = t110;
            if (t68 != 0) continue;
            break;
        }
    }
    t119 = *(int *)(((int)stk + 24));
    t120 = *(int *)(((int)stk + 20));
    *(unsigned int *)((a4 + 0x0)) = (t119 + t120);
    t121 = *(int *)(((int)stk + 28));
    t122 = *(int *)(((int)stk + 32));
    *(unsigned int *)((a5 + 0x0)) = (t121 + t122);
    t123 = *(int *)(((int)stk + 16));
    *(unsigned int *)((a6 + 0x0)) = t123;
    t124 = *(int *)(((int)stk + 12));
    t125 = *(int *)(((int)stk + 8));
    t127 = t124;
    if ((int)t125 < (int)t124) {
    } else {
        t126 = *(int *)(((int)stk + 8));
        t127 = t126;
    }
    *(unsigned int *)((a7 + 0x0)) = t127;
    return 0x0;
}

float navi_GetRouteTbl(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;
    float u6;
    int t7;
    int t8;
    int t9;
    int t10;
    float t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    float u18;
    float u19;
    int t20;
    int t21;
    int t22;
    int t23;
    float t24;
    int t25;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    float t33;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    float u127;
    int t2;
    int t3;
    float u5;
    int t35;
    float u39;
    int t114;
    int t101;
    int t64;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = *(int *)0xC2A6690;
    t1 = (t0 + 0xEF4);
    t4 = 0x0;
    u6 = 999999.875f;
    for (;;) {
        t7 = *(int *)(((int)stk + 20));
        t8 = *(int *)((t1 + 0x4));
        t9 = *(int *)((t1 + 0x0));
        t10 = *(int *)((t8 + 0x0));
        t11 = ((int (*)(int, int, int, int))(getNearLineIndex))(0x0, t9, t10, (((int)stk + 4) + 0x8));
        if (u6 > t11) {
            t12 = *(int *)(((int)stk + 12));
            t3 = t12;
            t2 = t4;
            u6 = t11;
            u5 = t11;
        }
        t4 = (t4 + 0x1);
        t1 = (t1 + 0xC);
        if ((int)t4 > (int)0x8) {
            break;
        }
    }
    t14 = *(int *)0xC2A6690;
    if (a6 == -1) {
        t15 = (0xEF4 + t14);
        t16 = 0x0;
        t17 = t14;
        u18 = 999999.875f;
        u19 = 999999.875f;
        for (;;) {
            t20 = *(int *)(((int)stk + 16));
            t21 = *(int *)((t15 + 0x4));
            t22 = *(int *)((t15 + 0x0));
            t23 = *(int *)((t21 + 0x0));
            t24 = ((float (*)(int, int, int, int))(getNearLineIndex))(0x0, t22, t23, (((int)stk + 4) + 0x8));
            if (u19 > t24) {
                t25 = *(int *)(((int)stk + 12));
                t17 = t16;
                u19 = t24;
                *(unsigned int *)(((int)stk + 8)) = t25;
                u18 = t24;
            }
            t16 = (t16 + 0x1);
            t15 = (t15 + 0xC);
            if ((int)t16 > (int)0x8) {
                break;
            }
        }
        t35 = t17;
        u39 = u18;
    } else {
        t28 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 20)) = (((((a6 << 1) + a6) << 2) + t14) + 0xEF4);
        t29 = *(int *)(((((((a6 << 1) + a6) << 2) + t14) + 0xEF4) + 0x4));
        t30 = *(int *)(((int)stk + 20));
        t31 = *(int *)((t29 + 0x0));
        t32 = *(int *)((t30 + 0x0));
        t33 = ((float (*)(int, int, int, int, int, float))(getNearLineIndex))(0x0, t32, t31, (((int)stk + 4) + 0x4), t28, t11);
        t35 = a6;
        u39 = t33;
    }
    if (t2 == t35) {
        t42 = *(int *)(((int)stk + 8));
        t114 = (int)((float)(t3 - t42) < 0.0f ? -(float)(t3 - t42) : (float)(t3 - t42));
    } else {
        *(unsigned int *)(((int)stk + 16)) = (t2 << 2);
        if ((int)t35 > (int)t2) {
            t43 = *(int *)(((int)stk + 16));
            t44 = *(int *)((((t2 << 2) + 0xC0E52C0) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = (t43 + 0xC08AD70);
            *(unsigned int *)(((int)stk + 20)) = ((t35 << 2) + 0xC08AD70);
            t45 = (((t35 - t2) - 1) * 0x1E);
            t46 = ((t35 << 2) + 0xC08AD70);
            t47 = 0x0;
            t48 = 0x270F;
            t49 = 0x270F;
            t50 = t2;
            for (;;) {
                t51 = *(signed char *)(((t44 + (((t35 - t2) - 1) * 0x1E)) + (signed char)((t47 << 2) + t47)));
                if (t51 != -1) {
                    t52 = *(signed char *)((((t44 + (((t35 - t2) - 1) * 0x1E)) + 0xF) + (signed char)((t47 << 2) + t47)));
                    t48 = 0x1;
                    if (t52 == 1) {
                        t53 = *(int *)(((int)stk + 16));
                        t46 = t53;
                        t54 = *(int *)((t46 + 0x0));
                        t46 = t54;
                        t46 = (t46 - t3);
                    } else {
                        t46 = t3;
                    }
                    t50 = t47;
                    t50 = (t50 << 2);
                    t50 = (t50 + t47);
                    t50 = (signed char)t50;
                    for (;;) {
                        t56 = *(signed char *)((t48 + ((t44 + (((t35 - t2) - 1) * 0x1E)) + t50)));
                        if (t56 == t35) {
                            break;
                        }
                        t57 = *(signed char *)((t48 + ((t44 + (((t35 - t2) - 1) * 0x1E)) + t50)));
                        t48 = (t48 + 0x1);
                        t58 = *(int *)((0xC08AD70 + (t57 << 2)));
                        t46 = (t46 + t58);
                    }
                    t59 = *(signed char *)((t48 + ((signed char)((t47 << 2) + t47) + ((t44 + (((t35 - t2) - 1) * 0x1E)) + 0xF))));
                    if (t59 == 1) {
                        t60 = *(int *)(((int)stk + 8));
                        t64 = t60;
                    } else {
                        t61 = *(int *)(((int)stk + 20));
                        t45 = t61;
                        t62 = *(int *)(((int)stk + 8));
                        t63 = *(int *)((t45 + 0x0));
                        t64 = (t63 - t62);
                    }
                    t46 = (t46 + t64);
                    if ((int)t46 < (int)t49) {
                        t49 = t46;
                    }
                }
                t47 = (t47 + 0x1);
                if ((int)t47 >= (int)0x3) {
                    break;
                }
            }
            t101 = t49;
        } else {
            t72 = *(int *)((0xC0E52C0 + (t35 << 2)));
            *(unsigned int *)(((int)stk + 24)) = ((t35 << 2) + 0xC08AD70);
            *(unsigned int *)(((int)stk + 20)) = ((t2 << 2) + 0xC08AD70);
            t73 = ((t2 << 2) + 0xC08AD70);
            t74 = ((t35 << 2) + 0xC08AD70);
            t75 = 0x1E;
            t76 = 0x0;
            t77 = 0x270F;
            for (;;) {
                t78 = *(signed char *)(((signed char)((t76 << 2) + t76) + ((((t2 - t35) - 1) * 0x1E) + t72)));
                if (t78 != -1) {
                    t79 = *(signed char *)(((signed char)((t76 << 2) + t76) + (((((t2 - t35) - 1) * 0x1E) + t72) + 0xF)));
                    t75 = 0x1;
                    if (t79 == 1) {
                        t80 = *(int *)(((int)stk + 24));
                        t74 = t80;
                        t81 = *(int *)(((int)stk + 8));
                        t82 = *(int *)((t74 + 0x0));
                        t74 = t82;
                        t74 = (t74 - t81);
                    } else {
                        t83 = *(int *)(((int)stk + 8));
                        t74 = t83;
                    }
                    for (;;) {
                        t86 = *(signed char *)((t75 + (((((t2 - t35) - 1) * 0x1E) + t72) + (signed char)((t76 << 2) + t76))));
                        if (t86 == t2) {
                            break;
                        }
                        t87 = *(signed char *)((t75 + (((((t2 - t35) - 1) * 0x1E) + t72) + (signed char)((t76 << 2) + t76))));
                        t75 = (t75 + 0x1);
                        t88 = *(int *)((0xC08AD70 + (t87 << 2)));
                        t74 = (t74 + t88);
                    }
                    t89 = *(signed char *)((t75 + ((((((t2 - t35) - 1) * 0x1E) + t72) + 0xF) + (signed char)((t76 << 2) + t76))));
                    if (t89 == 1) {
                        t74 = (t74 + t3);
                    } else {
                        t90 = *(int *)(((int)stk + 20));
                        t91 = *(int *)((t90 + 0x0));
                        t73 = t91;
                        t73 = (t73 - t3);
                        t74 = (t74 + t73);
                    }
                    if ((int)t74 < (int)t77) {
                        t77 = t74;
                    }
                }
                t76 = (t76 + 0x1);
                if ((int)t76 >= (int)0x3) {
                    break;
                }
            }
            t101 = t77;
        }
        t114 = t101;
    }
    u127 = *(float *)0xC02BC14;
    return ((u5 + u127 * (float)t114) + u39);
}

float ExecColliObj(int a4, int a5, float f4)
{
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t108;
    int t115;
    int t116;
    int t14;
    int t15;
    int t16;
    int t17;
    float u23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t32;
    int t33;
    int t35;
    float u36;
    int t37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u43;
    int t47;
    int t48;
    float u50;
    float u52;
    float u53;
    float u54;
    int t57;
    int t59;
    float u60;
    int t63;
    float u64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    float t73;
    float u74;
    int t75;
    int t76;
    int t83;
    float u84;
    int t85;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    float u104;
    int t105;
    float t106;
    int t107;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    float u128;
    float u129;
    float u130;
    float u131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t144;
    int t146;
    int t147;
    int t148;
    int t149;
    float u152;
    float u153;
    float u154;
    float u155;
    float u156;
    float u157;
    float u158;
    int t160;
    int t161;
    float u163;
    float u166;
    float u167;
    float u168;
    int t170;
    int t171;
    int t172;
    float u173;
    int t176;
    int t177;
    float u178;
    int t179;
    int t180;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    float t189;
    float u190;
    int t191;
    int t192;
    int t193;
    int t200;
    int t202;
    int t211;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    float u222;
    float u223;
    float u224;
    int t225;
    int t226;
    int t227;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    float u234;
    float u235;
    float u236;
    float u237;
    float u238;
    int t240;
    int t241;
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
    float t253;
    float u254;
    int t255;
    int t256;
    int t257;
    int t264;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    float u277;
    int t278;
    int t279;
    int t280;
    float u282;
    int t283;
    int t284;
    int t285;
    int t286;
    float u287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t295;
    int t297;
    int t0;
    int t1;
    int t2;
    int t110;
    int t111;
    int t112;
    int t113;
    float u117;
    float u118;
    float u119;
    float u120;
    int t18;
    int t19;
    float u20;
    float u21;
    float u22;
    int t78;
    float u79;
    float u80;
    int t194;
    int t195;
    int t196;
    float u197;
    float u198;
    int t258;
    int t259;
    int t260;
    float u261;
    float u262;
    int t292;
    int t293;

    *(unsigned int *)0xC26ECD8 = 0x0;
    t3 = a4;
    t4 = a5;
    for (;;) {
        t5 = *(int *)0xC26ECD8;
        if ((int)t5 >= (int)0x16) {
            break;
        }
        t6 = *(int *)0xC26ECD8;
        t1 = t6;
        t0 = 0xC26EC7C;
        t1 = (t1 << 2);
        t7 = *(int *)((t1 + t0));
        if (t7 != 0) {
            t8 = *(int *)0xC26ECD8;
            t0 = t8;
            t0 = (t0 << 2);
            t9 = *(int *)((0xC26EBCC + t0));
            t3 = t9;
            for (;;) {
                if (t3 == 0) {
                    break;
                }
                t10 = *(int *)((t3 + 0x0));
                t4 = t10;
                t2 = 0x0;
                *(unsigned int *)((t4 + 0x24)) = t2;
                *(unsigned int *)((t4 + 0x20)) = t2;
                t11 = *(int *)((t3 + 0xC));
                t3 = t11;
            }
        }
        t12 = *(int *)0xC26ECD8;
        t2 = t12;
        t2 = (t2 + 0x1);
        *(unsigned int *)0xC26ECD8 = t2;
    }
    t13 = *(int *)0xC26EC7C;
    t108 = t0;
    t115 = 0xC26EC7C;
    t116 = t3;
    if (t13 != 0) {
        *(unsigned int *)0xC26ECD8 = 0x0;
        *(unsigned int *)0xC26ECF8 = 0xC26ED00;
        t14 = *(int *)0xC26EBCC;
        t15 = *(int *)((t14 + 0x0));
        *(unsigned int *)0xC26ECDC = 0x1;
        t16 = 0x1;
        t17 = t3;
        u23 = f4;
        for (;;) {
            t24 = *(int *)0xC26ECDC;
            if ((int)t24 < (int)0x15) {
                t16 = 0xC26ECDC;
                t25 = *(int *)((t16 + 0x0));
                t26 = *(int *)(((t25 << 2) + 0xC26EC7C));
                if (t26 == 0) {
                } else {
                    t27 = *(int *)0xC26ECD8;
                    t17 = t27;
                    t16 = 0x1C;
                    t28 = *(short *)0xC26ECDC;
                    t17 = ((short)t17 * (short)t16);
                    t17 = (short)t17;
                    t30 = *(int *)((t17 + 0xC0ED458));
                    t17 = t30;
                    t16 = ((short)t28 * (short)t16);
                    t16 = (short)t16;
                    t32 = *(int *)((t16 + 0xC0ED458));
                    t16 = t32;
                    t17 = (t17 & t16);
                    if ((t17 & 0xFFFF0000) != 0) {
                    } else {
                        if ((unsigned short)t17 != 0) {
                            t16 = 0x78;
                            t33 = *(short *)0xC26ECDC;
                            t16 = ((short)t33 * (short)t16);
                            t16 = (short)t16;
                            t16 = (t16 + 0xC26ED00);
                            *(unsigned int *)0xC26ECFC = t16;
                            t16 = 0x1C;
                            t35 = *(short *)0xC26ECDC;
                            u36 = *(float *)0xC0ED440;
                            u21 = u36;
                            t37 = ((short)t35 * (short)t16);
                            t16 = 0xC26ECF0;
                            t17 = t37;
                            t17 = (short)t17;
                            t17 = (t17 + 0xC0ED440);
                            u38 = *(float *)((t17 + 0x4));
                            u22 = u38;
                            u21 = (u21 + u22);
                            *(float *)0xC26ECEC = u21;
                            u39 = *(float *)((t17 + 0x0));
                            u21 = u39;
                            u40 = *(float *)0xC0ED444;
                            u22 = u40;
                            u21 = (u21 + u22);
                            *(float *)((t16 + 0x0)) = u21;
                            u41 = *(float *)0xC26ECEC;
                            u22 = u41;
                            if (u22 > u21) {
                                u42 = *(float *)0xC26ECEC;
                                u22 = u42;
                                *(float *)0xC26ECE4 = u22;
                            } else {
                                u43 = *(float *)((t16 + 0x0));
                                u22 = u43;
                                *(float *)0xC26ECE4 = u22;
                            }
                            t47 = *(int *)0xC26ECD8;
                            t16 = t47;
                            t48 = *(short *)0xC26ECDC;
                            t16 = ((short)t16 * (short)0x1C);
                            t16 = (short)t16;
                            u50 = *(float *)((t16 + 0xC0ED444));
                            u21 = u50;
                            t16 = 0xC26ECE8;
                            u52 = *(float *)(((short)((short)t48 * (short)0x1C) + 0xC0ED444));
                            u22 = u52;
                            u21 = (u21 + u22);
                            *(float *)((t16 + 0x0)) = u21;
                            u53 = *(float *)((t16 + 0x0));
                            u21 = u53;
                            u54 = *(float *)0xC26ECE4;
                            u22 = u54;
                            if (u21 > u22) {
                                *(float *)0xC26ECE4 = u21;
                            }
                            t16 = 0x1C;
                            t57 = *(short *)0xC26ECDC;
                            t16 = ((short)t57 * (short)t16);
                            t16 = (short)t16;
                            t16 = (t16 + 0xC0ED440);
                            t59 = *(int *)0xC26ECD8;
                            u60 = *(float *)((t16 + 0x8));
                            u23 = u60;
                            t16 = 0x1C;
                            u21 = u23;
                            t63 = ((short)t59 * (short)t16);
                            t16 = 0xC26ECDC;
                            u64 = *(float *)((((short)t63 + 0xC0ED440) + 0x8));
                            u22 = u64;
                            u22 = (u22 + u23);
                            u21 = (u21 / u22);
                            *(float *)0xC26ECF4 = u21;
                            t65 = *(int *)0xC26ECD8;
                            t66 = *(int *)((t16 + 0x0));
                            t18 = t66;
                            t18 = (t18 << 2);
                            t67 = *(int *)((t16 + 0x0));
                            t18 = (t18 + (0xC26E4E8 + (short)((short)t65 * (short)0x54)));
                            t68 = *(int *)((t18 + 0x0));
                            t18 = t68;
                            t69 = *(int *)((0xC26EBCC + (t67 << 2)));
                            t19 = t69;
                            t70 = (t67 << 2);
                            t71 = (0xC26E4E8 + (short)((short)t65 * (short)0x54));
                            for (;;) {
                                if (t19 == 0) {
                                    break;
                                }
                                t16 = 0xC078AE0;
                                t72 = *(int *)((t19 + 0x0));
                                t17 = t15;
                                t73 = nlLength(t17, t72);
                                t70 = t73;
                                t16 = 0xC26ECE4;
                                t71 = 0xC26ECE0;
                                *(float *)((t71 + 0x0)) = t73;
                                u20 = t73;
                                u74 = *(float *)((t16 + 0x0));
                                u22 = u74;
                                if (u22 > u20) {
                                    t75 = *(int *)((t19 + 0x0));
                                    t17 = t15;
                                    t76 = ((int (*)(int, int))(t18))(t17, t75);
                                    t70 = t76;
                                } else {
                                    t78 = t16;
                                    u79 = u20;
                                    u80 = u22;
                                }
                                u20 = u79;
                                u22 = u80;
                                t71 = 0xC26ECE0;
                                t16 = t78;
                                t70 = 0x18;
                                t83 = *(int *)((t19 + 0x0));
                                t16 = t83;
                                u84 = *(float *)((t71 + 0x0));
                                u22 = u84;
                                *(float *)((t16 + t70)) = u22;
                                t85 = *(int *)((t19 + 0xC));
                                t19 = t85;
                            }
                        }
                    }
                }
                t99 = *(int *)0xC26ECDC;
                t16 = t99;
                t16 = (t16 + 0x1);
                *(unsigned int *)0xC26ECDC = t16;
                continue;
            }
            break;
        }
        t100 = *(int *)0xC26EC20;
        t101 = 0x54;
        t102 = t18;
        t103 = t100;
        u104 = u20;
        for (;;) {
            if (t103 == 0) {
                break;
            }
            t105 = *(int *)((t103 + 0x0));
            t102 = t105;
            t106 = nlLength(t15, t102);
            u104 = t106;
            t101 = 0x18;
            *(float *)((t102 + t101)) = u104;
            t107 = *(int *)((t103 + 0xC));
            t103 = t107;
        }
        t108 = t101;
        t110 = 0xC0ED440;
        t111 = t15;
        t112 = t102;
        t113 = t103;
        t115 = t16;
        t116 = t17;
        u117 = u104;
        u118 = u21;
        u119 = u22;
        u120 = u23;
    }
    *(unsigned int *)0xC26ECD8 = 0x1;
    t121 = t108;
    t122 = t115;
    t123 = t116;
    t124 = t4;
    t125 = t111;
    t126 = t112;
    t127 = t113;
    u128 = u117;
    u129 = u118;
    u130 = u119;
    u131 = u120;
    for (;;) {
        t132 = *(int *)0xC26ECD8;
        if ((int)t132 < (int)0x15) {
            t121 = 0xC26EC7C;
            t133 = *(int *)(((t132 << 2) + t121));
            t122 = t133;
            if (t122 != 0) {
                t134 = *(int *)0xC26ECD8;
                t122 = 0x78;
                t121 = 0xC26ECF8;
                *(unsigned int *)((t121 + 0x0)) = ((short)((short)t134 * (short)t122) + 0xC26ED00);
                t135 = *(int *)0xC26ECD8;
                t136 = ((short)((short)t134 * (short)t122) + 0xC26ED00);
                t122 = t135;
                t122 = (t122 + 0x1);
                *(unsigned int *)0xC26ECDC = t122;
                t138 = t136;
                for (;;) {
                    t121 = 0xC26ECDC;
                    t122 = 0x15;
                    t139 = *(int *)((t121 + 0x0));
                    if ((int)t139 < (int)t122) {
                        t140 = *(int *)((t121 + 0x0));
                        t124 = t140;
                        t121 = 0xC26EC7C;
                        t122 = t124;
                        t122 = (t122 << 2);
                        t141 = *(int *)((t122 + t121));
                        t138 = t141;
                        if (t138 == 0) {
                        } else {
                            t142 = *(int *)0xC26ECD8;
                            t123 = t142;
                            t122 = 0x1C;
                            t121 = 0xC0ED458;
                            t123 = ((short)t123 * (short)t122);
                            t123 = (short)t123;
                            t144 = *(int *)((t123 + t121));
                            t123 = t144;
                            t122 = ((short)t124 * (short)t122);
                            t122 = (short)t122;
                            t146 = *(int *)((t122 + t121));
                            t122 = t146;
                            t123 = (t123 & t122);
                            t138 = t123;
                            if ((t138 & 0xFFFF0000) != 0) {
                            } else {
                                if ((unsigned short)t123 == 0) {
                                } else {
                                    t122 = 0x78;
                                    t138 = 0xC26ED00;
                                    t147 = ((short)t124 * (short)t122);
                                    t122 = 0x1C;
                                    t121 = 0x4;
                                    t124 = t147;
                                    t124 = (short)t124;
                                    t124 = (t124 + t138);
                                    t138 = 0xC0ED440;
                                    *(unsigned int *)0xC26ECFC = t124;
                                    t148 = *(int *)0xC26ECD8;
                                    t123 = t148;
                                    t149 = *(short *)0xC26ECDC;
                                    t124 = t149;
                                    t123 = ((short)t123 * (short)t122);
                                    t123 = (short)t123;
                                    t123 = (t123 + t138);
                                    t124 = ((short)t124 * (short)t122);
                                    u152 = *(float *)((t123 + 0x0));
                                    u129 = u152;
                                    t124 = (short)t124;
                                    t124 = (t124 + t138);
                                    u153 = *(float *)((t124 + t121));
                                    u130 = u153;
                                    u129 = (u129 + u130);
                                    *(float *)0xC26ECEC = u129;
                                    u154 = *(float *)((t124 + 0x0));
                                    u129 = u154;
                                    u155 = *(float *)((t123 + t121));
                                    u130 = u155;
                                    u129 = (u129 + u130);
                                    *(float *)0xC26ECF0 = u129;
                                    t122 = 0xC26ECEC;
                                    u156 = *(float *)((t122 + 0x0));
                                    u130 = u156;
                                    if (u130 > u129) {
                                        t121 = 0xC26ECEC;
                                        t138 = 0xC26ECE4;
                                        u157 = *(float *)((t121 + 0x0));
                                        u130 = u157;
                                        *(float *)((t138 + 0x0)) = u130;
                                    } else {
                                        t122 = 0xC26ECE4;
                                        u158 = *(float *)0xC26ECF0;
                                        u130 = u158;
                                        *(float *)((t122 + 0x0)) = u130;
                                    }
                                    t160 = *(int *)0xC26ECD8;
                                    t138 = t160;
                                    t122 = 0x1C;
                                    t121 = 0xC26ECDC;
                                    t161 = *(short *)((t121 + 0x0));
                                    t121 = 0xC0ED444;
                                    t138 = ((short)t138 * (short)t122);
                                    t138 = (short)t138;
                                    u163 = *(float *)((t138 + t121));
                                    u129 = u163;
                                    t122 = ((short)t161 * (short)t122);
                                    t138 = 0xC26ECE4;
                                    t122 = (short)t122;
                                    u166 = *(float *)((t122 + t121));
                                    u130 = u166;
                                    t122 = 0xC26ECE8;
                                    u129 = (u129 + u130);
                                    *(float *)((t122 + 0x0)) = u129;
                                    u167 = *(float *)((t122 + 0x0));
                                    u129 = u167;
                                    u168 = *(float *)((t138 + 0x0));
                                    u130 = u168;
                                    if (u129 > u130) {
                                        t121 = 0xC26ECE4;
                                        *(float *)((t121 + 0x0)) = u129;
                                    }
                                    t122 = 0x1C;
                                    t121 = 0x8;
                                    t170 = *(short *)0xC26ECDC;
                                    t138 = t170;
                                    t171 = ((short)t138 * (short)t122);
                                    t138 = 0xC0ED440;
                                    t122 = t171;
                                    t122 = (short)t122;
                                    t122 = (t122 + t138);
                                    t172 = *(int *)0xC26ECD8;
                                    u173 = *(float *)((t122 + t121));
                                    u131 = u173;
                                    t122 = 0x1C;
                                    u129 = u131;
                                    t176 = ((short)t172 * (short)t122);
                                    t122 = 0xC26ECDC;
                                    t177 = ((short)t176 + t138);
                                    t138 = 0xC26E4E8;
                                    u178 = *(float *)((t177 + t121));
                                    u130 = u178;
                                    u130 = (u130 + u131);
                                    u129 = (u129 / u130);
                                    *(float *)0xC26ECF4 = u129;
                                    t179 = *(int *)0xC26ECD8;
                                    t121 = t179;
                                    t180 = *(int *)((t122 + 0x0));
                                    t125 = t180;
                                    t125 = (t125 << 2);
                                    t121 = ((short)t121 * (short)0x54);
                                    t121 = (short)t121;
                                    t138 = (t138 + t121);
                                    t182 = *(int *)0xC26ECD8;
                                    t121 = t182;
                                    t125 = (t125 + t138);
                                    t183 = *(int *)((t125 + 0x0));
                                    t125 = t183;
                                    t121 = (t121 << 2);
                                    t184 = *(int *)((0xC26EBCC + t121));
                                    t126 = t184;
                                    for (;;) {
                                        if (t126 == 0) {
                                            break;
                                        }
                                        t122 = 0xC26ECDC;
                                        t185 = *(int *)((t122 + 0x0));
                                        t121 = t185;
                                        t121 = (t121 << 2);
                                        t186 = *(int *)((0xC26EBCC + t121));
                                        t127 = t186;
                                        for (;;) {
                                            if (t127 == 0) {
                                                break;
                                            }
                                            t187 = *(int *)((t127 + 0x0));
                                            t124 = t187;
                                            t188 = *(int *)((t126 + 0x0));
                                            t123 = t188;
                                            t189 = nlLength(t123, t124);
                                            u128 = t189;
                                            t122 = 0xC26ECE4;
                                            t138 = 0xC26ECE0;
                                            *(float *)((t138 + 0x0)) = u128;
                                            u190 = *(float *)((t122 + 0x0));
                                            u130 = u190;
                                            if (u130 > u128) {
                                                t191 = *(int *)((t127 + 0x0));
                                                t124 = t191;
                                                t192 = *(int *)((t126 + 0x0));
                                                t123 = t192;
                                                t193 = ((int (*)(int, int))(t125))(t123, t124);
                                                t121 = t193;
                                                t194 = t121;
                                            } else {
                                                t195 = t138;
                                                t196 = t122;
                                                u197 = u128;
                                                u198 = u130;
                                            }
                                            t200 = *(int *)((t127 + 0xC));
                                            u128 = u197;
                                            u130 = u198;
                                            t121 = t194;
                                            t127 = t200;
                                            t138 = t195;
                                            t122 = t196;
                                        }
                                        t202 = *(int *)((t126 + 0xC));
                                        t126 = t202;
                                    }
                                }
                            }
                        }
                        t122 = 0xC26ECDC;
                        t211 = *(int *)((t122 + 0x0));
                        t138 = t211;
                        t138 = (t138 + 0x1);
                        *(unsigned int *)((t122 + 0x0)) = t138;
                        continue;
                    }
                    break;
                }
            }
            t214 = *(int *)0xC26ECD8;
            t122 = t214;
            t122 = (t122 + 0x1);
            *(unsigned int *)0xC26ECD8 = t122;
            continue;
        }
        break;
    }
    t215 = 0xC03303C;
    t216 = 0x1;
    t217 = t123;
    t218 = t110;
    t219 = t125;
    t220 = t126;
    t221 = t127;
    u222 = u128;
    u223 = u129;
    u224 = u130;
    for (;;) {
        *(unsigned int *)0xC26ECD8 = t216;
        if ((int)t216 >= (int)0x15) {
            break;
        }
        t225 = *(int *)0xC26ECD8;
        t215 = 0xC26EC7C;
        t226 = *(int *)(((t225 << 2) + t215));
        t216 = t226;
        if ((int)t216 >= (int)0x2) {
            t227 = *(int *)0xC26ECD8;
            t216 = t227;
            t215 = 0xC0ED458;
            t216 = ((short)t216 * (short)0x1C);
            t216 = (short)t216;
            t229 = *(int *)((t216 + t215));
            t216 = t229;
            if ((t216 & 0xFFFF0000) == 0) {
                t230 = *(int *)0xC26ECD8;
                t216 = 0x78;
                t231 = ((short)t230 * (short)t216);
                t216 = 0xC26ECF8;
                t215 = 0xC26ECFC;
                *(unsigned int *)((t215 + 0x0)) = ((short)t231 + 0xC26ED00);
                t215 = 0x4;
                *(unsigned int *)((t216 + 0x0)) = ((short)t231 + 0xC26ED00);
                t216 = 0x1C;
                t232 = *(int *)0xC26ECD8;
                t217 = t232;
                t233 = ((short)t217 * (short)t216);
                t216 = 0xC26ECEC;
                t217 = t233;
                t217 = (short)t217;
                t217 = (t217 + 0xC0ED440);
                u234 = *(float *)((t217 + 0x0));
                u223 = u234;
                u235 = *(float *)((t217 + t215));
                u224 = u235;
                u223 = (u223 + u224);
                *(float *)0xC26ECF0 = u223;
                *(float *)((t216 + 0x0)) = u223;
                t216 = 0xC26ECE8;
                *(float *)0xC26ECE4 = u223;
                u236 = *(float *)((t217 + t215));
                u224 = u236;
                u224 = (u224 * (1.0f + 1.0f));
                *(float *)((t216 + 0x0)) = u224;
                u237 = *(float *)0xC26ECE4;
                u223 = u237;
                if (u224 > u223) {
                    t215 = 0xC26ECE4;
                    u238 = *(float *)((t216 + 0x0));
                    u224 = u238;
                    *(float *)((t215 + 0x0)) = u224;
                }
                t216 = 0xC26ECF4;
                *(float *)((t216 + 0x0)) = 0.5f;
                t240 = *(int *)0xC26ECD8;
                t215 = t240;
                t241 = *(int *)0xC26ECD8;
                t218 = t241;
                t218 = (t218 << 2);
                t215 = ((short)t215 * (short)0x54);
                t215 = (short)t215;
                t243 = *(int *)0xC26ECD8;
                t244 = (0xC26E4E8 + t215);
                t215 = t243;
                t218 = (t218 + t244);
                t245 = *(int *)((t218 + 0x0));
                t218 = t245;
                *(unsigned int *)0xC26ECDC = t215;
                t246 = *(int *)0xC26ECD8;
                t215 = t246;
                t215 = (t215 << 2);
                t247 = *(int *)((0xC26EBCC + t215));
                t220 = t247;
                t248 = 0x54;
                for (;;) {
                    t249 = *(int *)((t220 + 0xC));
                    t219 = t249;
                    if (t219 == 0) {
                        break;
                    }
                    t250 = *(int *)((t220 + 0xC));
                    t221 = t250;
                    for (;;) {
                        if (t221 == 0) {
                            break;
                        }
                        t251 = *(int *)((t221 + 0x0));
                        t252 = *(int *)((t220 + 0x0));
                        t217 = t252;
                        t253 = nlLength(t217, t251);
                        u222 = t253;
                        t216 = 0xC26ECE4;
                        t248 = 0xC26ECE0;
                        *(float *)((t248 + 0x0)) = u222;
                        u254 = *(float *)((t216 + 0x0));
                        u224 = u254;
                        if (u224 > u222) {
                            t255 = *(int *)((t221 + 0x0));
                            t256 = *(int *)((t220 + 0x0));
                            t217 = t256;
                            t257 = ((int (*)(int, int))(t218))(t217, t255);
                            t215 = t257;
                            t258 = t215;
                        } else {
                            t259 = t248;
                            t260 = t216;
                            u261 = u222;
                            u262 = u224;
                        }
                        t264 = *(int *)((t221 + 0xC));
                        u222 = u261;
                        u224 = u262;
                        t215 = t258;
                        t221 = t264;
                        t248 = t259;
                        t216 = t260;
                    }
                    t220 = t219;
                }
            }
        }
        t272 = *(int *)0xC26ECD8;
        t216 = t272;
        t216 = (t216 + 0x1);
    }
    t273 = t215;
    t274 = t216;
    t275 = 0x0;
    t276 = t221;
    u277 = u224;
    for (;;) {
        *(unsigned int *)0xC26ECD8 = t275;
        if ((int)t275 >= (int)0xF) {
            break;
        }
        t278 = *(int *)0xC26ECD8;
        t274 = t278;
        t273 = 0xC26EC7C;
        t274 = (t274 << 2);
        t279 = *(int *)((t274 + t273));
        if (t279 != 0) {
            t280 = *(int *)0xC26ECD8;
            t275 = t280;
            t273 = 0xC0ED444;
            t274 = 0xC26ECE4;
            t275 = ((short)t275 * (short)0x1C);
            t275 = (short)t275;
            u282 = *(float *)((t275 + t273));
            u277 = u282;
            *(float *)((t274 + 0x0)) = u277;
            t283 = *(int *)0xC26ECD8;
            t273 = t283;
            t273 = (t273 << 2);
            t284 = *(int *)((0xC26EBCC + t273));
            t276 = t284;
            t285 = 0x1C;
            for (;;) {
                if (t276 == 0) {
                    break;
                }
                t285 = 0xC26ECE4;
                t286 = *(int *)0xC26ECD8;
                u287 = *(float *)((t285 + 0x0));
                t288 = *(int *)((t276 + 0x0));
                t289 = CheckColliWallBox(t288, t286, u287);
                t273 = t289;
                if (t273 != 0) {
                    t290 = *(int *)((t276 + 0x0));
                    t285 = t290;
                    t291 = *(int *)((t285 + 0x20));
                    t275 = t291;
                    t275 = (t275 | 0x80000000);
                    *(unsigned int *)((t285 + 0x20)) = t275;
                    t292 = t275;
                    t293 = t285;
                }
                t295 = *(int *)((t276 + 0xC));
                t276 = t295;
                t275 = t292;
                t285 = t293;
            }
        }
        t297 = *(int *)0xC26ECD8;
        t275 = t297;
        t275 = (t275 + 0x1);
    }
    return u222;
}

void FUN_0c02b2d6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t29;
    int t30;
    int t31;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t51;
    int t52;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
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
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t135;
    int t136;
    int t137;
    int t141;
    int t142;
    int t143;
    int t144;
    int t146;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t158;
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
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t32;
    int t33;
    int t34;
    int t35;
    int t138;
    int t139;
    int t140;
    int stk[15] = {0};

    t0 = *(int *)0xC1EE1F8;
    t1 = *(int *)0xC1EE1E4;
    t2 = *(int *)0xC1EE1E0;
    t3 = *(int *)0xC1EE1FC;
    *(unsigned int *)(((int)stk + 8)) = t1;
    t4 = *(int *)0xC2A6690;
    *(unsigned int *)(((int)stk + 12)) = t4;
    if (t0 == t2) {
        t5 = *(int *)(((int)stk + 8));
        if ((int)(int)((float)(t3 - t5) < 0.0f ? -(float)(t3 - t5) : (float)(t3 - t5)) <= (int)0x8) {
            t6 = *(int *)0xC1EE1DC;
            *(unsigned int *)((a4 + 0x8)) = t6;
            t7 = *(int *)0xC1EE1D8;
            *(unsigned int *)((a4 + 0x4)) = t7;
            t8 = *(int *)0xC1EE1D4;
            *(unsigned int *)((a4 + 0x0)) = t8;
        } else {
            t9 = *(int *)0xC1EE1FC;
            t10 = *(int *)0xC1EE1E4;
            if ((int)t10 > (int)t9) {
                t11 = *(int *)0xC1EE1F8;
                t12 = *(int *)0xC2A6690;
                t13 = *(int *)0xC1EE1FC;
                t14 = *(int *)(((((((t11 << 1) + t11) << 2) + t12) + 0xEF4) + 0x0));
                t15 = *(int *)((((t14 + (((t13 << 1) + t13) << 2)) + 0x24) + 0x8));
                *(unsigned int *)((a4 + 0x8)) = t15;
                t16 = *(int *)((((t14 + (((t13 << 1) + t13) << 2)) + 0x24) + 0x4));
                *(unsigned int *)((a4 + 0x4)) = t16;
                t17 = *(int *)((((t14 + (((t13 << 1) + t13) << 2)) + 0x24) + 0x0));
                *(unsigned int *)((a4 + 0x0)) = t17;
            } else {
                t18 = *(int *)0xC1EE1F8;
                t19 = *(int *)0xC2A6690;
                t20 = *(int *)0xC1EE1FC;
                t21 = *(int *)(((((((t18 << 1) + t18) << 2) + t19) + 0xEF4) + 0x0));
                t22 = *(int *)((((t21 + (((t20 << 1) + t20) << 2)) - 36) + 0x8));
                *(unsigned int *)((a4 + 0x8)) = t22;
                t23 = *(int *)((((t21 + (((t20 << 1) + t20) << 2)) - 36) + 0x4));
                *(unsigned int *)((a4 + 0x4)) = t23;
                t24 = *(int *)((((t21 + (((t20 << 1) + t20) << 2)) - 36) + 0x0));
                *(unsigned int *)((a4 + 0x0)) = t24;
            }
        }
    } else {
        if ((int)t2 <= (int)t0) {
            t29 = *(int *)((((t2 << 2) + 0xC0E52C0) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = 0x270F;
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t30 = 0x270F;
            t31 = 0x1E;
            for (;;) {
                t36 = *(int *)(((int)stk + 4));
                if ((int)t36 >= (int)0x3) {
                    break;
                }
                t37 = *(int *)(((int)stk + 4));
                t35 = t37;
                t31 = t35;
                t35 = (t35 << 2);
                t35 = (t35 + t31);
                t35 = (signed char)t35;
                t30 = (t29 + (((t0 - t2) - 1) * 0x1E));
                t38 = *(signed char *)((t35 + t30));
                t30 = t38;
                if (t30 != -1) {
                    t30 = (t29 + (((t0 - t2) - 1) * 0x1E));
                    t30 = (t30 + 0xF);
                    t39 = *(signed char *)((t35 + t30));
                    t30 = t39;
                    t34 = 0x1;
                    if (t30 == 1) {
                        t30 = t2;
                        t30 = (t30 << 2);
                        t40 = *(int *)(((int)stk + 8));
                        t31 = t40;
                        t41 = *(int *)((0xC08AD70 + t30));
                        t33 = t41;
                        t33 = (t33 - t31);
                    } else {
                        t42 = *(int *)(((int)stk + 8));
                        t33 = t42;
                    }
                    for (;;) {
                        t30 = (t29 + (((t0 - t2) - 1) * 0x1E));
                        t30 = (t30 + t35);
                        t45 = *(signed char *)((t34 + t30));
                        t31 = t45;
                        if (t31 == t0) {
                            break;
                        }
                        t46 = *(signed char *)((t34 + t30));
                        t30 = t46;
                        t34 = (t34 + 0x1);
                        t30 = (t30 << 2);
                        t47 = *(int *)((0xC08AD70 + t30));
                        t31 = t47;
                        t33 = (t33 + t31);
                    }
                    t30 = (t29 + (((t0 - t2) - 1) * 0x1E));
                    t30 = (t30 + 0xF);
                    t30 = (t30 + t35);
                    t48 = *(signed char *)((t34 + t30));
                    t30 = t48;
                    if (t30 == 1) {
                        t33 = (t33 + t3);
                    } else {
                        t30 = t0;
                        t30 = (t30 << 2);
                        t49 = *(int *)((0xC08AD70 + t30));
                        t31 = t49;
                        t31 = (t31 - t3);
                        t33 = (t33 + t31);
                    }
                    t51 = *(int *)(((int)stk + 16));
                    if ((int)t33 < (int)t51) {
                        t32 = t34;
                        *(unsigned int *)(((int)stk + 16)) = t33;
                        t52 = *(int *)(((int)stk + 4));
                        t31 = t52;
                        *(unsigned int *)(((int)stk + 20)) = t31;
                    }
                }
                t56 = *(int *)(((int)stk + 4));
                t31 = t56;
                t31 = (t31 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t31;
            }
            t57 = *(int *)(((int)stk + 16));
            if ((int)t57 <= (int)0x8) {
                t58 = *(int *)0xC1EE1DC;
                *(unsigned int *)((a4 + 0x8)) = t58;
                t59 = *(int *)0xC1EE1D8;
                *(unsigned int *)((a4 + 0x4)) = t59;
                t60 = *(int *)0xC1EE1D4;
                *(unsigned int *)((a4 + 0x0)) = t60;
            } else {
                t61 = *(int *)(((int)stk + 20));
                t62 = *(signed char *)((t32 + (((t29 + (((t0 - t2) - 1) * 0x1E)) + 0xF) + (signed char)((t61 << 2) + t61))));
                if (t62 != -1) {
                    if ((int)(t3 - 3) >= 0) {
                        t63 = *(int *)0xC1EE1F8;
                        t64 = *(int *)0xC2A6690;
                        t65 = *(int *)0xC1EE1FC;
                        t66 = *(int *)(((((((t63 << 1) + t63) << 2) + t64) + 0xEF4) + 0x0));
                        t67 = *(int *)((((t66 + (((t65 << 1) + t65) << 2)) - 36) + 0x8));
                        *(unsigned int *)((a4 + 0x8)) = t67;
                        t68 = *(int *)((((t66 + (((t65 << 1) + t65) << 2)) - 36) + 0x4));
                        *(unsigned int *)((a4 + 0x4)) = t68;
                        t69 = *(int *)((((t66 + (((t65 << 1) + t65) << 2)) - 36) + 0x0));
                        *(unsigned int *)((a4 + 0x0)) = t69;
                    } else {
                        t70 = *(signed char *)(((t32 - 1) + (((t29 + (((t0 - t2) - 1) * 0x1E)) + 0xF) + (signed char)((t61 << 2) + t61))));
                        if (t70 == -1) {
                            t71 = *(signed char *)(((t32 - 1) + ((t29 + (((t0 - t2) - 1) * 0x1E)) + (signed char)((t61 << 2) + t61))));
                            t72 = *(int *)(((int)stk + 12));
                            t73 = *(int *)(((((((t71 << 1) + t71) << 2) + t72) + 0xEF4) + 0x0));
                            t74 = *(int *)((((t73 - (((t3 << 1) + t3) << 2)) + 0x18) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t74;
                            t75 = *(int *)((((t73 - (((t3 << 1) + t3) << 2)) + 0x18) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t75;
                            t76 = *(int *)((((t73 - (((t3 << 1) + t3) << 2)) + 0x18) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t76;
                        } else {
                            t77 = *(signed char *)(((t32 - 1) + ((t29 + (((t0 - t2) - 1) * 0x1E)) + (signed char)((t61 << 2) + t61))));
                            *(unsigned int *)(((int)stk + 8)) = t77;
                            t78 = *(int *)(((int)stk + 12));
                            t79 = *(int *)(((int)stk + 8));
                            t80 = *(int *)(((((((t77 << 1) + t77) << 2) + t78) + 0xEF4) + 0x0));
                            t81 = *(int *)((0xC08AD70 + (t79 << 2)));
                            t82 = *(int *)(((((t80 + (((t3 << 1) + t3) << 2)) + (((t81 << 1) + t81) << 2)) - 36) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t82;
                            t83 = *(int *)(((((t80 + (((t3 << 1) + t3) << 2)) + (((t81 << 1) + t81) << 2)) - 36) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t83;
                            t84 = *(int *)(((((t80 + (((t3 << 1) + t3) << 2)) + (((t81 << 1) + t81) << 2)) - 36) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t84;
                        }
                    }
                } else {
                    t90 = *(signed char *)((t32 + ((t29 + (((t0 - t2) - 1) * 0x1E)) + (signed char)((t61 << 2) + t61))));
                    t91 = *(int *)((0xC08AD70 + (t90 << 2)));
                    if ((int)(t3 + 0x3) < (int)t91) {
                        t92 = *(int *)0xC1EE1F8;
                        t93 = *(int *)0xC2A6690;
                        t94 = *(int *)0xC1EE1FC;
                        t95 = *(int *)(((((((t92 << 1) + t92) << 2) + t93) + 0xEF4) + 0x0));
                        t96 = *(int *)((((t95 + (((t94 << 1) + t94) << 2)) + 0x24) + 0x8));
                        *(unsigned int *)((a4 + 0x8)) = t96;
                        t97 = *(int *)((((t95 + (((t94 << 1) + t94) << 2)) + 0x24) + 0x4));
                        *(unsigned int *)((a4 + 0x4)) = t97;
                        t98 = *(int *)((((t95 + (((t94 << 1) + t94) << 2)) + 0x24) + 0x0));
                        *(unsigned int *)((a4 + 0x0)) = t98;
                    } else {
                        t99 = *(signed char *)(((t32 - 1) + (((t29 + (((t0 - t2) - 1) * 0x1E)) + 0xF) + (signed char)((t61 << 2) + t61))));
                        if (t99 == -1) {
                            *(unsigned int *)(((int)stk + 8)) = ((signed char)((t61 << 2) + t61) + (t29 + (((t0 - t2) - 1) * 0x1E)));
                            t100 = *(signed char *)(((((signed char)((t61 << 2) + t61) + (t29 + (((t0 - t2) - 1) * 0x1E))) + (t32 - 1)) + 0x0));
                            t101 = *(int *)(((int)stk + 8));
                            t102 = *(int *)(((int)stk + 12));
                            t103 = *(int *)(((((((t100 << 1) + t100) << 2) + t102) + 0xEF4) + 0x0));
                            t104 = *(signed char *)((t32 + t101));
                            t105 = *(int *)((((t104 << 2) + 0xC08AD70) + 0x0));
                            t106 = *(int *)((((((((t3 << 1) + t3) << 2) + t103) - (((t105 << 1) + t105) << 2)) + 0x24) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t106;
                            t107 = *(int *)((((((((t3 << 1) + t3) << 2) + t103) - (((t105 << 1) + t105) << 2)) + 0x24) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t107;
                            t108 = *(int *)((((((((t3 << 1) + t3) << 2) + t103) - (((t105 << 1) + t105) << 2)) + 0x24) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t108;
                        } else {
                            *(unsigned int *)(((int)stk + 8)) = ((signed char)((t61 << 2) + t61) + (t29 + (((t0 - t2) - 1) * 0x1E)));
                            t109 = *(signed char *)(((((signed char)((t61 << 2) + t61) + (t29 + (((t0 - t2) - 1) * 0x1E))) + (t32 - 1)) + 0x0));
                            *(unsigned int *)(((int)stk + 4)) = t109;
                            t110 = *(int *)(((int)stk + 8));
                            t111 = *(int *)(((int)stk + 12));
                            t112 = *(int *)(((int)stk + 4));
                            t113 = *(int *)((((t112 << 2) + 0xC08AD70) + 0x0));
                            t114 = *(int *)(((((((t109 << 1) + t109) << 2) + t111) + 0xEF4) + 0x0));
                            t115 = *(signed char *)((t32 + t110));
                            t116 = *(int *)((((t115 << 2) + 0xC08AD70) + 0x0));
                            t117 = *(int *)(((((((t113 << 1) + t113) << 2) + t114) - (((((t3 - t116) + 0x4) << 1) + ((t3 - t116) + 0x4)) << 2)) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t117;
                            t118 = *(int *)(((((((t113 << 1) + t113) << 2) + t114) - (((((t3 - t116) + 0x4) << 1) + ((t3 - t116) + 0x4)) << 2)) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t118;
                            t119 = *(int *)(((((((t113 << 1) + t113) << 2) + t114) - (((((t3 - t116) + 0x4) << 1) + ((t3 - t116) + 0x4)) << 2)) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t119;
                        }
                    }
                }
            }
        } else {
            t135 = *(int *)((0xC0E52C0 + (t0 << 2)));
            *(unsigned int *)(((int)stk + 16)) = 0x270F;
            t136 = t135;
            t137 = 0x270F;
            t141 = 0x0;
            for (;;) {
                if ((int)t141 >= (int)0x3) {
                    break;
                }
                t136 = t141;
                t136 = (t136 << 2);
                t136 = (t136 + t141);
                t137 = ((((t2 - t0) - 1) * 0x1E) + t135);
                t136 = (signed char)t136;
                t142 = *(signed char *)((t137 + t136));
                t136 = t142;
                if (t136 != -1) {
                    t136 = t141;
                    t136 = (t136 << 2);
                    t137 = ((((t2 - t0) - 1) * 0x1E) + t135);
                    t136 = (t136 + t141);
                    t137 = (t137 + 0xF);
                    t136 = (signed char)t136;
                    t143 = *(signed char *)((t137 + t136));
                    t136 = t143;
                    t139 = 0x1;
                    if (t136 == 1) {
                        t136 = t0;
                        t136 = (t136 << 2);
                        t144 = *(int *)((0xC08AD70 + t136));
                        t140 = t144;
                        t140 = (t140 - t3);
                    } else {
                        t140 = t3;
                    }
                    t137 = t141;
                    t137 = (t137 << 2);
                    t137 = (t137 + t141);
                    t137 = (signed char)t137;
                    *(unsigned int *)(((int)stk + 4)) = t137;
                    for (;;) {
                        t146 = *(int *)(((int)stk + 4));
                        t136 = ((((t2 - t0) - 1) * 0x1E) + t135);
                        t136 = (t136 + t146);
                        t148 = *(signed char *)((t139 + t136));
                        t137 = t148;
                        if (t137 == t2) {
                            break;
                        }
                        t149 = *(int *)(((int)stk + 4));
                        t136 = ((((t2 - t0) - 1) * 0x1E) + t135);
                        t136 = (t136 + t149);
                        t150 = *(signed char *)((t139 + t136));
                        t136 = t150;
                        t139 = (t139 + 0x1);
                        t136 = (t136 << 2);
                        t151 = *(int *)((0xC08AD70 + t136));
                        t137 = t151;
                        t140 = (t140 + t137);
                    }
                    t136 = t141;
                    t136 = (t136 << 2);
                    t137 = ((((t2 - t0) - 1) * 0x1E) + t135);
                    t136 = (t136 + t141);
                    t137 = (t137 + 0xF);
                    t136 = (signed char)t136;
                    t136 = (t136 + t137);
                    t152 = *(signed char *)((t139 + t136));
                    t136 = t152;
                    if (t136 == 1) {
                        t153 = *(int *)(((int)stk + 8));
                        t137 = t153;
                        t140 = (t140 + t137);
                    } else {
                        t136 = t2;
                        t136 = (t136 << 2);
                        t154 = *(int *)(((int)stk + 8));
                        t137 = t154;
                        t155 = *(int *)((0xC08AD70 + t136));
                        t140 = (t140 + (t155 - t137));
                    }
                    t158 = *(int *)(((int)stk + 16));
                    if ((int)t140 < (int)t158) {
                        t138 = t141;
                        *(unsigned int *)(((int)stk + 16)) = t140;
                    }
                }
                t141 = (t141 + 0x1);
            }
            t162 = *(int *)(((int)stk + 16));
            if ((int)t162 <= (int)0x8) {
                t163 = *(int *)0xC1EE1DC;
                *(unsigned int *)((a4 + 0x8)) = t163;
                t164 = *(int *)0xC1EE1D8;
                *(unsigned int *)((a4 + 0x4)) = t164;
                t165 = *(int *)0xC1EE1D4;
                *(unsigned int *)((a4 + 0x0)) = t165;
            } else {
                t166 = *(signed char *)(((((((t2 - t0) - 1) * 0x1E) + t135) + 0xF) + (signed char)((t138 << 2) + t138)));
                if (t166 == 1) {
                    t167 = *(signed char *)((((((t2 - t0) - 1) * 0x1E) + t135) + (signed char)((t138 << 2) + t138)));
                    t168 = *(int *)((0xC08AD70 + (t167 << 2)));
                    if ((int)(t3 + 0x3) < (int)t168) {
                        t169 = *(int *)0xC1EE1F8;
                        t170 = *(int *)0xC2A6690;
                        t171 = *(int *)0xC1EE1FC;
                        t172 = *(int *)(((((((t169 << 1) + t169) << 2) + t170) + 0xEF4) + 0x0));
                        t173 = *(int *)((((t172 + (((t171 << 1) + t171) << 2)) + 0x24) + 0x8));
                        *(unsigned int *)((a4 + 0x8)) = t173;
                        t174 = *(int *)((((t172 + (((t171 << 1) + t171) << 2)) + 0x24) + 0x4));
                        *(unsigned int *)((a4 + 0x4)) = t174;
                        t175 = *(int *)((((t172 + (((t171 << 1) + t171) << 2)) + 0x24) + 0x0));
                        *(unsigned int *)((a4 + 0x0)) = t175;
                    } else {
                        t176 = *(signed char *)((((signed char)((t138 << 2) + t138) + (((((t2 - t0) - 1) * 0x1E) + t135) + 0xF)) + 0x1));
                        if (t176 == 1) {
                            *(unsigned int *)(((int)stk + 8)) = ((signed char)((t138 << 2) + t138) + ((((t2 - t0) - 1) * 0x1E) + t135));
                            t177 = *(signed char *)((((signed char)((t138 << 2) + t138) + ((((t2 - t0) - 1) * 0x1E) + t135)) + 0x1));
                            t178 = *(int *)(((int)stk + 12));
                            t179 = *(int *)(((int)stk + 8));
                            t180 = *(signed char *)((t179 + 0x0));
                            t181 = *(int *)((((t178 + (((t177 << 1) + t177) << 2)) + 0xEF4) + 0x0));
                            t182 = *(int *)((0xC08AD70 + (t180 << 2)));
                            t183 = *(int *)(((((t181 + (((t3 << 1) + t3) << 2)) - (((t182 << 1) + t182) << 2)) + 0x24) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t183;
                            t184 = *(int *)(((((t181 + (((t3 << 1) + t3) << 2)) - (((t182 << 1) + t182) << 2)) + 0x24) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t184;
                            t185 = *(int *)(((((t181 + (((t3 << 1) + t3) << 2)) - (((t182 << 1) + t182) << 2)) + 0x24) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t185;
                        } else {
                            *(unsigned int *)(((int)stk + 8)) = ((signed char)((t138 << 2) + t138) + ((((t2 - t0) - 1) * 0x1E) + t135));
                            t186 = *(signed char *)((((signed char)((t138 << 2) + t138) + ((((t2 - t0) - 1) * 0x1E) + t135)) + 0x1));
                            *(unsigned int *)(((int)stk + 4)) = t186;
                            t187 = *(int *)(((int)stk + 12));
                            t188 = *(int *)(((int)stk + 4));
                            t189 = *(int *)((((t187 + (((t186 << 1) + t186) << 2)) + 0xEF4) + 0x0));
                            t190 = *(int *)((0xC08AD70 + (t188 << 2)));
                            t191 = *(int *)(((int)stk + 8));
                            t192 = *(signed char *)((t191 + 0x0));
                            t193 = *(int *)((0xC08AD70 + (t192 << 2)));
                            t194 = *(int *)((((t189 + (((t190 << 1) + t190) << 2)) - (((((t3 - t193) + 0x4) << 1) + ((t3 - t193) + 0x4)) << 2)) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t194;
                            t195 = *(int *)((((t189 + (((t190 << 1) + t190) << 2)) - (((((t3 - t193) + 0x4) << 1) + ((t3 - t193) + 0x4)) << 2)) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t195;
                            t196 = *(int *)((((t189 + (((t190 << 1) + t190) << 2)) - (((((t3 - t193) + 0x4) << 1) + ((t3 - t193) + 0x4)) << 2)) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t196;
                        }
                    }
                } else {
                    if ((int)(t3 - 3) >= 0) {
                        t203 = *(int *)0xC1EE1F8;
                        t204 = *(int *)0xC2A6690;
                        t205 = *(int *)0xC1EE1FC;
                        t206 = *(int *)(((((((t203 << 1) + t203) << 2) + t204) + 0xEF4) + 0x0));
                        t207 = *(int *)((((t206 + (((t205 << 1) + t205) << 2)) - 36) + 0x8));
                        *(unsigned int *)((a4 + 0x8)) = t207;
                        t208 = *(int *)((((t206 + (((t205 << 1) + t205) << 2)) - 36) + 0x4));
                        *(unsigned int *)((a4 + 0x4)) = t208;
                        t209 = *(int *)((((t206 + (((t205 << 1) + t205) << 2)) - 36) + 0x0));
                        *(unsigned int *)((a4 + 0x0)) = t209;
                    } else {
                        t210 = *(signed char *)((((signed char)((t138 << 2) + t138) + (((((t2 - t0) - 1) * 0x1E) + t135) + 0xF)) + 0x1));
                        if (t210 == 1) {
                            t211 = *(signed char *)((((signed char)((t138 << 2) + t138) + ((((t2 - t0) - 1) * 0x1E) + t135)) + 0x1));
                            t212 = *(int *)(((int)stk + 12));
                            t213 = *(int *)((((t212 + (((t211 << 1) + t211) << 2)) + 0xEF4) + 0x0));
                            t214 = *(int *)((((t213 - (((t3 << 1) + t3) << 2)) + 0x18) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t214;
                            t215 = *(int *)((((t213 - (((t3 << 1) + t3) << 2)) + 0x18) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t215;
                            t216 = *(int *)((((t213 - (((t3 << 1) + t3) << 2)) + 0x18) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t216;
                        } else {
                            t217 = *(signed char *)((((signed char)((t138 << 2) + t138) + ((((t2 - t0) - 1) * 0x1E) + t135)) + 0x1));
                            *(unsigned int *)(((int)stk + 8)) = t217;
                            t218 = *(int *)(((int)stk + 12));
                            t219 = *(int *)(((int)stk + 8));
                            t220 = *(int *)((0xC08AD70 + (t219 << 2)));
                            t221 = *(int *)((((t218 + (((t217 << 1) + t217) << 2)) + 0xEF4) + 0x0));
                            t222 = *(int *)((((t221 + (((t220 << 1) + t220) << 2)) + ((((t3 - 3) << 1) + (t3 - 3)) << 2)) + 0x8));
                            *(unsigned int *)((a4 + 0x8)) = t222;
                            t223 = *(int *)((((t221 + (((t220 << 1) + t220) << 2)) + ((((t3 - 3) << 1) + (t3 - 3)) << 2)) + 0x4));
                            *(unsigned int *)((a4 + 0x4)) = t223;
                            t224 = *(int *)((((t221 + (((t220 << 1) + t220) << 2)) + ((((t3 - 3) << 1) + (t3 - 3)) << 2)) + 0x0));
                            *(unsigned int *)((a4 + 0x0)) = t224;
                        }
                    }
                }
            }
        }
    }
}
