/* Straight-line functions with calls and guards (batch gen_adc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(int, float);
int CourseSplineGet(int);
int CourseSplineNumGet(int);
int PutCourse_CheckPiece(int, int, int, int, float, float, float);
int PutCourse_Sky(void);
int Put_Build_Patch(void);
int Put_Course_Obj_Dist(void);
int findSplineSection(int, int, int);
int gdc_CoursePut(int, int, float);
int getAreaFromPos(int, int);
int getNearLineIndex(int, int, int, int, int, float);
int getPieceWindow(int, int, int, int, int, int, int, int);
float nlFastSin(int);
float nlLength(int, int);
int nlProjectScreen3D(int, int);
int PutCourse(void);

int PutCourse(void)
{
    int t1;
    int t9;
    int t10;
    int t17;
    float u20;
    int t22;
    int t50;
    float u53;
    int t56;
    int t84;
    float u87;
    int t89;
    int t124;
    int t128;
    int t129;
    int t130;
    int t131;
    int t133;
    float u139;
    int t140;
    int t143;
    int t144;
    int t145;
    int t146;
    float u203;
    float u204;
    float u205;
    float u176;
    float u177;
    float u178;
    int t233;
    int t234;
    int t235;
    int t237;
    float u243;
    int t244;
    int t247;
    int t248;
    int t249;
    int t250;
    float u307;
    float u308;
    float u309;
    float u280;
    float u281;
    float u282;
    int t352;
    int t353;
    int t354;
    int t355;
    int t356;
    float u357;
    float u358;
    float u359;
    float u360;
    int t378;
    int t379;
    int t380;
    int t393;
    int t394;
    int t395;
    int t408;
    int t409;
    int t410;
    int t432;
    int t433;
    int t434;
    int t456;
    int t457;
    int t458;
    int t486;
    int t487;
    int t488;
    int t489;
    int t490;
    float u491;
    float u492;
    float u493;
    float u494;
    int t512;
    int t513;
    int t514;
    int t527;
    int t528;
    int t529;
    int t542;
    int t543;
    int t544;
    int t566;
    int t567;
    int t568;
    int t590;
    int t591;
    int t592;
    int t620;
    int t621;
    int t622;
    int t623;
    int t624;
    float u625;
    float u626;
    float u627;
    float u628;
    int t646;
    int t647;
    int t648;
    int t661;
    int t662;
    int t663;
    int t676;
    int t677;
    int t678;
    int t700;
    int t701;
    int t702;
    int t724;
    int t725;
    int t726;
    int t767;
    int t768;
    int t769;
    int t770;
    int t771;
    float u772;
    float u773;
    float u774;
    float u775;
    int t793;
    int t794;
    int t795;
    int t808;
    int t809;
    int t810;
    int t823;
    int t824;
    int t825;
    int t847;
    int t848;
    int t849;
    int t871;
    int t872;
    int t873;
    int t901;
    int t902;
    int t903;
    int t904;
    int t905;
    float u906;
    float u907;
    float u908;
    float u909;
    int t927;
    int t928;
    int t929;
    int t942;
    int t943;
    int t944;
    int t957;
    int t958;
    int t959;
    int t981;
    int t982;
    int t983;
    int t1005;
    int t1006;
    int t1007;
    int t1035;
    int t1036;
    int t1037;
    int t1038;
    int t1039;
    float u1040;
    float u1041;
    float u1042;
    float u1043;
    int t1061;
    int t1062;
    int t1063;
    int t1076;
    int t1077;
    int t1078;
    int t1091;
    int t1092;
    int t1093;
    int t1115;
    int t1116;
    int t1117;
    int t1139;
    int t1140;
    int t1141;
    int t1169;
    int t1170;
    int t1171;
    int t1172;
    int t1173;
    float u1174;
    float u1175;
    float u1176;
    float u1177;
    int t1195;
    int t1196;
    int t1197;
    int t1210;
    int t1211;
    int t1212;
    int t1225;
    int t1226;
    int t1227;
    int t1249;
    int t1250;
    int t1251;
    int t1273;
    int t1274;
    int t1275;
    int t1303;
    int t1304;
    int t1305;
    int t1306;
    int t1307;
    float u1308;
    float u1309;
    float u1310;
    float u1311;
    int t1329;
    int t1330;
    int t1331;
    int t1344;
    int t1345;
    int t1346;
    int t1359;
    int t1360;
    int t1361;
    int t1383;
    int t1384;
    int t1385;
    int t1407;
    int t1408;
    int t1409;
    int t1444;
    int t1437;
    int t1439;
    int t1442;
    int t1460;
    int t1729;
    int t1463;
    int t1464;
    int t1465;
    float u1466;
    int t1473;
    int t1474;
    int t1477;
    int t1481;
    int t1493;
    int t1494;
    float u1495;
    int t1502;
    int t1503;
    int t1506;
    int t1510;
    float u1522;
    int t1523;
    int t1526;
    int t1528;
    int t1532;
    int t1533;
    int t1536;
    float u1561;
    int t1562;
    int t1565;
    int t1567;
    int t1571;
    int t1572;
    int t1575;
    int t1596;
    int t1597;
    int t1598;
    int t1599;
    float u1600;
    int t1607;
    int t1608;
    int t1611;
    int t1625;
    int t1626;
    int t1627;
    float u1628;
    int t1635;
    int t1636;
    int t1639;
    float u1653;
    int t1654;
    int t1656;
    int t1657;
    int t1659;
    int t1663;
    int t1664;
    int t1667;
    float u1694;
    int t1695;
    int t1697;
    int t1698;
    int t1700;
    int t1704;
    int t1705;
    int t1708;
    int t109;
    int t74;
    int t42;
    float u18;
    float u40;
    float u51;
    float u52;
    float u71;
    float u72;
    float u85;
    float u107;
    float u345;
    float u346;
    float u350;
    float u351;
    int t132;
    float u134;
    float u135;
    float u136;
    float u137;
    float u138;
    int t222;
    int t223;
    float u229;
    float u230;
    float u231;
    float u232;
    int t148;
    int t213;
    float u218;
    float u219;
    float u220;
    float u221;
    float u210;
    float u211;
    float u212;
    float u188;
    float u189;
    float u190;
    float u163;
    float u164;
    float u165;
    float u170;
    float u171;
    float u172;
    float u182;
    float u183;
    float u184;
    float u196;
    float u197;
    float u198;
    int t236;
    float u238;
    float u239;
    float u240;
    float u241;
    float u242;
    int t326;
    int t327;
    float u333;
    float u334;
    float u335;
    float u336;
    int t252;
    int t317;
    float u322;
    float u323;
    float u324;
    float u325;
    float u314;
    float u315;
    float u316;
    float u292;
    float u293;
    float u294;
    float u267;
    float u268;
    float u269;
    float u274;
    float u275;
    float u276;
    float u286;
    float u287;
    float u288;
    float u300;
    float u301;
    float u302;
    int t1424;
    int t1290;
    int t1156;
    int t1022;
    int t888;
    int t754;
    int t607;
    int t473;
    int t465;
    int t466;
    float u467;
    float u468;
    float u469;
    float u470;
    int t450;
    int t451;
    float u452;
    float u453;
    float u454;
    float u455;
    int t426;
    int t427;
    float u428;
    float u429;
    float u430;
    float u431;
    int t402;
    int t403;
    float u404;
    float u405;
    float u406;
    float u407;
    int t387;
    int t388;
    float u389;
    float u390;
    float u391;
    float u392;
    int t417;
    int t418;
    float u419;
    float u420;
    float u421;
    float u422;
    int t441;
    int t442;
    float u443;
    float u444;
    float u445;
    float u446;
    int t599;
    int t600;
    float u601;
    float u602;
    float u603;
    float u604;
    int t584;
    int t585;
    float u586;
    float u587;
    float u588;
    float u589;
    int t560;
    int t561;
    float u562;
    float u563;
    float u564;
    float u565;
    int t536;
    int t537;
    float u538;
    float u539;
    float u540;
    float u541;
    int t521;
    int t522;
    float u523;
    float u524;
    float u525;
    float u526;
    int t551;
    int t552;
    float u553;
    float u554;
    float u555;
    float u556;
    int t575;
    int t576;
    float u577;
    float u578;
    float u579;
    float u580;
    int t741;
    int t733;
    int t734;
    float u735;
    float u736;
    float u737;
    float u738;
    int t718;
    int t719;
    float u720;
    float u721;
    float u722;
    float u723;
    int t694;
    int t695;
    float u696;
    float u697;
    float u698;
    float u699;
    int t670;
    int t671;
    float u672;
    float u673;
    float u674;
    float u675;
    int t655;
    int t656;
    float u657;
    float u658;
    float u659;
    float u660;
    int t685;
    int t686;
    float u687;
    float u688;
    float u689;
    float u690;
    int t709;
    int t710;
    float u711;
    float u712;
    float u713;
    float u714;
    int t880;
    int t881;
    float u882;
    float u883;
    float u884;
    float u885;
    int t865;
    int t866;
    float u867;
    float u868;
    float u869;
    float u870;
    int t841;
    int t842;
    float u843;
    float u844;
    float u845;
    float u846;
    int t817;
    int t818;
    float u819;
    float u820;
    float u821;
    float u822;
    int t802;
    int t803;
    float u804;
    float u805;
    float u806;
    float u807;
    int t832;
    int t833;
    float u834;
    float u835;
    float u836;
    float u837;
    int t856;
    int t857;
    float u858;
    float u859;
    float u860;
    float u861;
    int t1014;
    int t1015;
    float u1016;
    float u1017;
    float u1018;
    float u1019;
    int t999;
    int t1000;
    float u1001;
    float u1002;
    float u1003;
    float u1004;
    int t975;
    int t976;
    float u977;
    float u978;
    float u979;
    float u980;
    int t951;
    int t952;
    float u953;
    float u954;
    float u955;
    float u956;
    int t936;
    int t937;
    float u938;
    float u939;
    float u940;
    float u941;
    int t966;
    int t967;
    float u968;
    float u969;
    float u970;
    float u971;
    int t990;
    int t991;
    float u992;
    float u993;
    float u994;
    float u995;
    int t1148;
    int t1149;
    float u1150;
    float u1151;
    float u1152;
    float u1153;
    int t1133;
    int t1134;
    float u1135;
    float u1136;
    float u1137;
    float u1138;
    int t1109;
    int t1110;
    float u1111;
    float u1112;
    float u1113;
    float u1114;
    int t1085;
    int t1086;
    float u1087;
    float u1088;
    float u1089;
    float u1090;
    int t1070;
    int t1071;
    float u1072;
    float u1073;
    float u1074;
    float u1075;
    int t1100;
    int t1101;
    float u1102;
    float u1103;
    float u1104;
    float u1105;
    int t1124;
    int t1125;
    float u1126;
    float u1127;
    float u1128;
    float u1129;
    int t1282;
    int t1283;
    float u1284;
    float u1285;
    float u1286;
    float u1287;
    int t1267;
    int t1268;
    float u1269;
    float u1270;
    float u1271;
    float u1272;
    int t1243;
    int t1244;
    float u1245;
    float u1246;
    float u1247;
    float u1248;
    int t1219;
    int t1220;
    float u1221;
    float u1222;
    float u1223;
    float u1224;
    int t1204;
    int t1205;
    float u1206;
    float u1207;
    float u1208;
    float u1209;
    int t1234;
    int t1235;
    float u1236;
    float u1237;
    float u1238;
    float u1239;
    int t1258;
    int t1259;
    float u1260;
    float u1261;
    float u1262;
    float u1263;
    int t1416;
    int t1417;
    float u1418;
    float u1419;
    float u1420;
    float u1421;
    int t1401;
    int t1402;
    float u1403;
    float u1404;
    float u1405;
    float u1406;
    int t1377;
    int t1378;
    float u1379;
    float u1380;
    float u1381;
    float u1382;
    int t1353;
    int t1354;
    float u1355;
    float u1356;
    float u1357;
    float u1358;
    int t1338;
    int t1339;
    float u1340;
    float u1341;
    float u1342;
    float u1343;
    int t1368;
    int t1369;
    float u1370;
    float u1371;
    float u1372;
    float u1373;
    int t1392;
    int t1393;
    float u1394;
    float u1395;
    float u1396;
    float u1397;
    float u1594;
    float u1560;
    float u1555;
    int t1723;
    int t1688;
    int t1682;
    int stk[28];

    PutCourse_Sky();
    t1 = *(int *)0xC1EE20C;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            *(float *)(((int)stk + 80)) = 3000.0f;
            *(float *)0xC2A6AC8 = (1.0f / (nlFastSin((((int)((((*(float *)0xC1798A4) * 32768.0f) / 360.0f) + 0.5f) & 0xFFFF) + 0x1))));
            getNearLineIndex(0x0, (CourseSplineGet(0x0)), ((CourseSplineNumGet(0x0))), 0xC2A6EC0, 0xC179840, 3000.0f);
            Put_Course_Obj_Dist();
            t9 = *(int *)0xC1EE214;
            if ((t9 != 0) && ((t9 != 2) && ((t9 != 3) && ((t9 != 4) && ((t9 != 5) && ((t9 != 7) && (t9 != 8))))))) {
                if (t9 != 9) {
                    if ((t9 != 10) && ((t9 != 11) && ((t9 != 12) && (t9 != 14)))) {
                        t10 = *(int *)0xC118670;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x10)) = *(struct mv3 *)((((((t10 << 2) + t10) << 2) + (*(int *)0xC1EE800)) + 0x4)); }
                        nlProjectScreen3D((((int)stk + 44) + 0x10), (((int)stk + 44) + 0x4));
                        t42 = (gdc_CoursePut((*(int *)((((*(int *)0xC1EE214) << 2) + 0xC0C835C))), 0x0, 1000000.0f));
                    } else {
                        t17 = (*(int *)(((t9 << 2) + 0xC0C835C)));
                        u20 = 3000.0f;
                        for (;;) {
                            t22 = *(int *)0xC1EE214;
                            if ((int)t17 >= (int)((*(int *)(((t22 << 2) + (*(int *)(((((*(int *)0xC118670) << 2) + 0xC1244E0) + 0x0)))))) + (*(int *)(((t22 << 2) + 0xC0C835C))))) {
                                break;
                            }
                            *(unsigned int *)(((int)stk + 44)) = (((t17 << 2) + t17) << 2);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x10)) = *(struct mv3 *)((((((t17 << 2) + t17) << 2) + (*(int *)0xC1EE800)) + 0x4)); }
                            nlProjectScreen3D((((int)stk + 44) + 0x10), (((int)stk + 44) + 0x4));
                            u18 = (nlLength((((int)stk + 44) + 0x10), 0xC179840));
                            u20 = u18;
                            if (((*(float *)((((*(int *)0xC1EE214) << 2) + 0xC118630)))) > u20) {
                                if ((CheckClipping((((int)stk + 44) + 0x10), (*(float *)((((*(int *)(((int)stk + 44))) + (*(int *)0xC1EE800)) + 0x0))))) != 0) {
                                    gdc_CoursePut(t17, 0x0, u20);
                                }
                            } else {
                                u40 = u18;
                            }
                            u18 = u40;
                            t17 = (t17 + 0x1);
                        }
                        t42 = 0xC0C835C;
                    }
                    t74 = t42;
                } else {
                    t50 = 0x43;
                    u53 = 3000.0f;
                    for (;;) {
                        t56 = *(int *)((0xC1244E0 + ((*(int *)0xC118670) << 2)));
                        if ((int)t50 >= (int)((*(int *)((((*(int *)0xC1EE214) << 2) + t56))) + 0x43)) {
                            break;
                        }
                        *(unsigned int *)(((int)stk + 44)) = (((t50 << 2) + t50) << 2);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x10)) = *(struct mv3 *)((((((t50 << 2) + t50) << 2) + (*(int *)0xC1EE800)) + 0x4)); }
                        nlProjectScreen3D((((int)stk + 44) + 0x10), (((int)stk + 44) + 0x4));
                        u51 = (nlLength((((int)stk + 44) + 0x10), 0xC179840));
                        u53 = u51;
                        u52 = (*(float *)((((t50 - 67) << 2) + 0xC0C8398)));
                        if (u52 > u53) {
                            if ((CheckClipping((((int)stk + 44) + 0x10), (*(float *)((((*(int *)(((int)stk + 44))) + (*(int *)0xC1EE800)) + 0x0))))) != 0) {
                                gdc_CoursePut(t50, 0x0, u53);
                            }
                        } else {
                            u71 = u51;
                            u72 = u52;
                        }
                        u51 = u71;
                        u52 = u72;
                        t50 = (t50 + 0x1);
                    }
                    t74 = t56;
                }
                t109 = t74;
            } else {
                t84 = (*(int *)(((t9 << 2) + 0xC0C835C)));
                u87 = 3000.0f;
                for (;;) {
                    t89 = *(int *)0xC1EE214;
                    if ((int)t84 >= (int)((*(int *)(((t89 << 2) + (*(int *)(((((*(int *)0xC118670) << 2) + 0xC1244E0) + 0x0)))))) + (*(int *)(((t89 << 2) + 0xC0C835C))))) {
                        break;
                    }
                    *(unsigned int *)(((int)stk + 44)) = (((t84 << 2) + t84) << 2);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x10)) = *(struct mv3 *)((((((t84 << 2) + t84) << 2) + (*(int *)0xC1EE800)) + 0x4)); }
                    nlProjectScreen3D((((int)stk + 44) + 0x10), (((int)stk + 44) + 0x4));
                    u85 = (nlLength((((int)stk + 44) + 0x10), 0xC179840));
                    u87 = u85;
                    if (((*(float *)((((*(int *)0xC1EE214) << 2) + 0xC118630)))) > u87) {
                        if ((CheckClipping((((int)stk + 44) + 0x10), (*(float *)((((*(int *)(((int)stk + 44))) + (*(int *)0xC1EE800)) + 0x0))))) != 0) {
                            gdc_CoursePut(t84, 0x0, u87);
                        }
                    } else {
                        u107 = u85;
                    }
                    u85 = u107;
                    t84 = (t84 + 0x1);
                }
                t109 = 0xC0C835C;
            }
            return t109;
        }
        *(float *)(((int)stk + 80)) = 3000.0f;
        Put_Course_Obj_Dist();
        t124 = 0x0;
        if ((int)(getAreaFromPos(0xC179840, (*(int *)0xC2A6EBC))) >= 0) {
            t124 = (getAreaFromPos(0xC179840, (*(int *)0xC2A6EBC)));
        }
        if ((t124 == 76) || (t124 == 77)) {
            Put_Build_Patch();
        }
        *(unsigned int *)0xC2A6EC4 = 0xC111700;
        t128 = *(int *)0xC2A6EC4;
        *(unsigned int *)0xC2A6EC4 = (t128 + (((((t124 << 1) + t124) << 2) << 2) << 1));
        if ((t124 != 20) && (t124 != 24)) {
            t129 = t124;
            t130 = (t128 + (((((t124 << 1) + t124) << 2) << 2) << 1));
            t131 = 0x0;
            t133 = 0x0;
            u139 = 3000.0f;
            for (;;) {
                t140 = *(int *)0xC2A6EC4;
                if ((unsigned char)(*(signed char *)(((t140 + t131) + 0x0))) != 0xFE) {
                    t132 = t140;
                    t132 = (t132 + t131);
                    t132 = (*(signed char *)((t132 + 0x0)));
                    t132 = (unsigned char)t132;
                    if ((t133 == 0) && (t132 == 0xFF)) {
                        t133 = (t133 + 0x1);
                        t222 = t129;
                        t223 = t130;
                        u229 = u134;
                        u230 = u135;
                        u231 = u136;
                        u232 = u137;
                    } else {
                        if (t133 != 0) {
                            t130 = 0xC1EE804;
                            t143 = *(int *)((t130 + 0x0));
                            t130 = ((int)stk + 24);
                            t130 = (t130 + 0x20);
                            t129 = 0xC;
                            t144 = 0;
                            for (; t144 < (int)t129; t144++) *(unsigned char *)(t130 + t144) = *(unsigned char *)(((t143 + (((t132 << 2) + t132) << 2)) + 0x4) + t144);
                            t148 = (t143 + (((t132 << 2) + t132) << 2));
                        } else {
                            t130 = ((int)stk + 24);
                            t130 = (t130 + 0x20);
                            t145 = *(int *)0xC1EE800;
                            t129 = 0xC;
                            t146 = 0;
                            for (; t146 < (int)t129; t146++) *(unsigned char *)(t130 + t146) = *(unsigned char *)(((t145 + (((t132 << 2) + t132) << 2)) + 0x4) + t146);
                            t148 = (t145 + (((t132 << 2) + t132) << 2));
                        }
                        u139 = (*(float *)((t148 + 0x0)));
                        t129 = (nlProjectScreen3D((((int)stk + 24) + 0x20), (((int)stk + 24) + 0x14)));
                        u134 = (nlLength((((int)stk + 24) + 0x20), 0xC179840));
                        u138 = u134;
                        u134 = (nlLength((((int)stk + 24) + 0x20), 0xC179840));
                        if (2500.0f > u134) {
                            t129 = (CheckClipping((((int)stk + 24) + 0x20), u139));
                            if (t129 != 0) {
                                t129 = 0x14;
                                u135 = u139;
                                u137 = (*(float *)((((int)stk + 24) + t129)));
                                t129 = 0xC04DE14;
                                u136 = (*(float *)((t129 + 0x0)));
                                u137 = _builtin_fabsf(u137);
                                u135 = (u135 + u136);
                                u203 = u135;
                                u204 = u136;
                                u205 = u137;
                                if (u135 > u137) {
                                    if ((int)(*(int *)0xC2A9D60) >= (int)0x1) {
                                        u176 = u135;
                                        u177 = u136;
                                        u178 = u137;
                                        if (t133 == 0) {
                                            if (((int)t132 >= (int)0x9) && (t130 = 0x1C, (int)t132 <= (int)t130)) {
                                                t129 = (gdc_CoursePut(t132, t133, u138));
                                            } else {
                                                u163 = u135;
                                                u164 = u136;
                                                u165 = u137;
                                            }
                                            u135 = u163;
                                            u136 = u164;
                                            u137 = u165;
                                            if ((t133 == 0) && ((int)t132 <= (int)0x8)) {
                                                t129 = (gdc_CoursePut(t132, t133, u138));
                                            } else {
                                                u170 = u135;
                                                u171 = u136;
                                                u172 = u137;
                                            }
                                            u176 = u170;
                                            u177 = u171;
                                            u178 = u172;
                                        }
                                        u188 = u176;
                                        u189 = u177;
                                        u190 = u178;
                                    } else {
                                        if ((t133 == 0) && ((int)t132 <= (int)0x8)) {
                                            t129 = (gdc_CoursePut(t132, t133, u138));
                                        } else {
                                            u182 = u135;
                                            u183 = u136;
                                            u184 = u137;
                                        }
                                        u188 = u182;
                                        u189 = u183;
                                        u190 = u184;
                                    }
                                    u135 = u188;
                                    u136 = u189;
                                    u137 = u190;
                                    t129 = (*(int *)0xC2A9D60);
                                    if ((t129 != 2) && ((t133 != 0) || ((t133 == 0) && ((int)t132 >= (int)0x1D)))) {
                                        t129 = (gdc_CoursePut(t132, t133, u138));
                                    } else {
                                        u196 = u135;
                                        u197 = u136;
                                        u198 = u137;
                                    }
                                    u203 = u196;
                                    u204 = u197;
                                    u205 = u198;
                                }
                                u210 = u203;
                                u211 = u204;
                                u212 = u205;
                            }
                            t213 = t129;
                            u219 = u210;
                            u220 = u211;
                            u221 = u212;
                        } else {
                            u218 = u134;
                        }
                        t222 = t213;
                        u229 = u218;
                        u230 = u219;
                        u231 = u220;
                        u232 = u221;
                    }
                    u134 = u229;
                    u135 = u230;
                    u136 = u231;
                    u137 = u232;
                    t129 = t222;
                    t130 = t223;
                    t131 = (t131 + 0x1);
                    continue;
                }
                break;
            }
            u345 = u134;
            u346 = u135;
            u350 = u136;
            u351 = u137;
        } else {
            t233 = 0xC04DCFC;
            t234 = (t128 + (((((t124 << 1) + t124) << 2) << 2) << 1));
            t235 = 0x0;
            t237 = 0x0;
            u243 = 3000.0f;
            for (;;) {
                t244 = *(int *)0xC2A6EC4;
                if ((unsigned char)(*(signed char *)(((t244 + t235) + 0x0))) != 0xFE) {
                    t236 = t244;
                    t236 = (t236 + t235);
                    t236 = (*(signed char *)((t236 + 0x0)));
                    t236 = (unsigned char)t236;
                    if ((t237 == 0) && (t236 == 0xFF)) {
                        t237 = (t237 + 0x1);
                        t326 = t233;
                        t327 = t234;
                        u333 = u238;
                        u334 = u239;
                        u335 = u240;
                        u336 = u241;
                    } else {
                        if (t237 != 0) {
                            t234 = 0xC1EE804;
                            t247 = *(int *)((t234 + 0x0));
                            t234 = ((int)stk + 24);
                            t234 = (t234 + 0x20);
                            t233 = 0xC;
                            t248 = 0;
                            for (; t248 < (int)t233; t248++) *(unsigned char *)(t234 + t248) = *(unsigned char *)(((t247 + (((t236 << 2) + t236) << 2)) + 0x4) + t248);
                            t252 = (t247 + (((t236 << 2) + t236) << 2));
                        } else {
                            t234 = ((int)stk + 24);
                            t234 = (t234 + 0x20);
                            t249 = *(int *)0xC1EE800;
                            t233 = 0xC;
                            t250 = 0;
                            for (; t250 < (int)t233; t250++) *(unsigned char *)(t234 + t250) = *(unsigned char *)(((t249 + (((t236 << 2) + t236) << 2)) + 0x4) + t250);
                            t252 = (t249 + (((t236 << 2) + t236) << 2));
                        }
                        u243 = (*(float *)((t252 + 0x0)));
                        t233 = (nlProjectScreen3D((((int)stk + 24) + 0x20), (((int)stk + 24) + 0x14)));
                        u238 = (nlLength((((int)stk + 24) + 0x20), 0xC179840));
                        u242 = u238;
                        u238 = (nlLength((((int)stk + 24) + 0x20), 0xC179840));
                        if (2200.0f > u238) {
                            t233 = (CheckClipping((((int)stk + 24) + 0x20), u243));
                            if (t233 != 0) {
                                t233 = 0x14;
                                u239 = u243;
                                u241 = (*(float *)((((int)stk + 24) + t233)));
                                t233 = 0xC04DE14;
                                u240 = (*(float *)((t233 + 0x0)));
                                u241 = _builtin_fabsf(u241);
                                u239 = (u239 + u240);
                                u307 = u239;
                                u308 = u240;
                                u309 = u241;
                                if (u239 > u241) {
                                    if ((int)(*(int *)0xC2A9D60) >= (int)0x1) {
                                        u280 = u239;
                                        u281 = u240;
                                        u282 = u241;
                                        if (t237 == 0) {
                                            if (((int)t236 >= (int)0x9) && (t234 = 0x1C, (int)t236 <= (int)t234)) {
                                                t233 = (gdc_CoursePut(t236, t237, u242));
                                            } else {
                                                u267 = u239;
                                                u268 = u240;
                                                u269 = u241;
                                            }
                                            u239 = u267;
                                            u240 = u268;
                                            u241 = u269;
                                            if ((t237 == 0) && ((int)t236 <= (int)0x8)) {
                                                t233 = (gdc_CoursePut(t236, t237, u242));
                                            } else {
                                                u274 = u239;
                                                u275 = u240;
                                                u276 = u241;
                                            }
                                            u280 = u274;
                                            u281 = u275;
                                            u282 = u276;
                                        }
                                        u292 = u280;
                                        u293 = u281;
                                        u294 = u282;
                                    } else {
                                        if ((t237 == 0) && ((int)t236 <= (int)0x8)) {
                                            t233 = (gdc_CoursePut(t236, t237, u242));
                                        } else {
                                            u286 = u239;
                                            u287 = u240;
                                            u288 = u241;
                                        }
                                        u292 = u286;
                                        u293 = u287;
                                        u294 = u288;
                                    }
                                    u239 = u292;
                                    u240 = u293;
                                    u241 = u294;
                                    t233 = (*(int *)0xC2A9D60);
                                    if ((t233 != 2) && ((t237 != 0) || ((t237 == 0) && ((int)t236 >= (int)0x1D)))) {
                                        t233 = (gdc_CoursePut(t236, t237, u242));
                                    } else {
                                        u300 = u239;
                                        u301 = u240;
                                        u302 = u241;
                                    }
                                    u307 = u300;
                                    u308 = u301;
                                    u309 = u302;
                                }
                                u314 = u307;
                                u315 = u308;
                                u316 = u309;
                            }
                            t317 = t233;
                            u323 = u314;
                            u324 = u315;
                            u325 = u316;
                        } else {
                            u322 = u238;
                        }
                        t326 = t317;
                        u333 = u322;
                        u334 = u323;
                        u335 = u324;
                        u336 = u325;
                    }
                    u238 = u333;
                    u239 = u334;
                    u240 = u335;
                    u241 = u336;
                    t233 = t326;
                    t234 = t327;
                    t235 = (t235 + 0x1);
                    continue;
                }
                break;
            }
            u345 = u238;
            u346 = u239;
            u350 = u240;
            u351 = u241;
        }
        if (t124 != 5) {
            if (t124 != 6) {
                if (t124 != 50) {
                    if (t124 != 51) {
                        if (t124 != 62) {
                            if ((int)t124 >= (int)0xD) {
                                if ((int)t124 > (int)0xF) {
                                    if ((((int)t124 >= (int)0x19) && ((int)t124 <= (int)0x1C)) || (((int)t124 >= (int)0x24) && ((int)t124 <= (int)0x28))) {
                                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                                        *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                        t352 = t124;
                                        t353 = 0xC118600;
                                        t354 = 0xFE;
                                        t355 = 0xC118600;
                                        t356 = 0xC118600;
                                        u357 = u345;
                                        u358 = u346;
                                        u359 = u350;
                                        u360 = u351;
                                        for (;;) {
                                            if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                                                break;
                                            }
                                            if ((int)t124 >= (int)0x25) {
                                                if ((int)t124 <= (int)0x28) {
                                                    t352 = (*(int *)((t355 + 0x0)));
                                                    if (t352 != 109) {
                                                        t352 = (*(int *)(((int)stk + 28)));
                                                        t352 = (*(int *)((t352 + 0x0)));
                                                        if (t352 == 110) {
                                                            if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                                t387 = t353;
                                                                t388 = t354;
                                                                u389 = u357;
                                                                u390 = u358;
                                                                u391 = u359;
                                                                u392 = u360;
                                                            } else {
                                                                t378 = *(int *)((t356 + 0x0));
                                                                t352 = 0xC1EE800;
                                                                t379 = *(int *)((t352 + 0x0));
                                                                t352 = 0xC;
                                                                t380 = 0;
                                                                for (; t380 < (int)t352; t380++) *(unsigned char *)((((int)stk + 24) + 0x20) + t380) = *(unsigned char *)((((((t378 << 2) + t378) << 2) + t379) + 0x4) + t380);
                                                                t354 = 0xC179840;
                                                                t353 = ((int)stk + 24);
                                                                t353 = (t353 + 0x20);
                                                                u357 = (nlLength(t353, t354));
                                                                t354 = 0x0;
                                                                t353 = (*(int *)((t356 + 0x0)));
                                                                t352 = (gdc_CoursePut(t353, t354, u357));
                                                            }
                                                            t402 = t387;
                                                            t403 = t388;
                                                            u404 = u389;
                                                            u405 = u390;
                                                            u406 = u391;
                                                            u407 = u392;
                                                        } else {
                                                            t393 = *(int *)((t356 + 0x0));
                                                            t352 = 0xC1EE800;
                                                            t394 = *(int *)((t352 + 0x0));
                                                            t352 = 0xC;
                                                            t395 = 0;
                                                            for (; t395 < (int)t352; t395++) *(unsigned char *)((((int)stk + 24) + 0x20) + t395) = *(unsigned char *)((((((t393 << 2) + t393) << 2) + t394) + 0x4) + t395);
                                                            t354 = 0xC179840;
                                                            t353 = ((int)stk + 24);
                                                            t353 = (t353 + 0x20);
                                                            u357 = (nlLength(t353, t354));
                                                            t354 = 0x0;
                                                            t353 = (*(int *)((t356 + 0x0)));
                                                            t352 = (gdc_CoursePut(t353, t354, u357));
                                                        }
                                                        t426 = t402;
                                                        t427 = t403;
                                                        u428 = u404;
                                                        u429 = u405;
                                                        u430 = u406;
                                                        u431 = u407;
                                                    } else {
                                                        if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                            t417 = t353;
                                                            t418 = t354;
                                                            u419 = u357;
                                                            u420 = u358;
                                                            u421 = u359;
                                                            u422 = u360;
                                                        } else {
                                                            t408 = *(int *)((t356 + 0x0));
                                                            t352 = 0xC1EE800;
                                                            t409 = *(int *)((t352 + 0x0));
                                                            t352 = 0xC;
                                                            t410 = 0;
                                                            for (; t410 < (int)t352; t410++) *(unsigned char *)((((int)stk + 24) + 0x20) + t410) = *(unsigned char *)((((((t408 << 2) + t408) << 2) + t409) + 0x4) + t410);
                                                            t354 = 0xC179840;
                                                            t353 = ((int)stk + 24);
                                                            t353 = (t353 + 0x20);
                                                            u357 = (nlLength(t353, t354));
                                                            t354 = 0x0;
                                                            t353 = (*(int *)((t356 + 0x0)));
                                                            t352 = (gdc_CoursePut(t353, t354, u357));
                                                        }
                                                        t426 = t417;
                                                        t427 = t418;
                                                        u428 = u419;
                                                        u429 = u420;
                                                        u430 = u421;
                                                        u431 = u422;
                                                    }
                                                    t450 = t426;
                                                    t451 = t427;
                                                    u452 = u428;
                                                    u453 = u429;
                                                    u454 = u430;
                                                    u455 = u431;
                                                } else {
                                                    if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                        t441 = t353;
                                                        t442 = t354;
                                                        u443 = u357;
                                                        u444 = u358;
                                                        u445 = u359;
                                                        u446 = u360;
                                                    } else {
                                                        t432 = *(int *)((t356 + 0x0));
                                                        t352 = 0xC1EE800;
                                                        t433 = *(int *)((t352 + 0x0));
                                                        t352 = 0xC;
                                                        t434 = 0;
                                                        for (; t434 < (int)t352; t434++) *(unsigned char *)((((int)stk + 24) + 0x20) + t434) = *(unsigned char *)((((((t432 << 2) + t432) << 2) + t433) + 0x4) + t434);
                                                        t354 = 0xC179840;
                                                        t353 = ((int)stk + 24);
                                                        t353 = (t353 + 0x20);
                                                        u357 = (nlLength(t353, t354));
                                                        t354 = 0x0;
                                                        t353 = (*(int *)((t356 + 0x0)));
                                                        t352 = (gdc_CoursePut(t353, t354, u357));
                                                    }
                                                    t450 = t441;
                                                    t451 = t442;
                                                    u452 = u443;
                                                    u453 = u444;
                                                    u454 = u445;
                                                    u455 = u446;
                                                }
                                                t465 = t450;
                                                t466 = t451;
                                                u467 = u452;
                                                u468 = u453;
                                                u469 = u454;
                                                u470 = u455;
                                            } else {
                                                t456 = *(int *)((t356 + 0x0));
                                                t352 = 0xC1EE800;
                                                t457 = *(int *)((t352 + 0x0));
                                                t352 = 0xC;
                                                t458 = 0;
                                                for (; t458 < (int)t352; t458++) *(unsigned char *)((((int)stk + 24) + 0x20) + t458) = *(unsigned char *)((((((t456 << 2) + t456) << 2) + t457) + 0x4) + t458);
                                                t354 = 0xC179840;
                                                t353 = ((int)stk + 24);
                                                t353 = (t353 + 0x20);
                                                u357 = (nlLength(t353, t354));
                                                t354 = 0x0;
                                                t353 = (*(int *)((t356 + 0x0)));
                                                t352 = (gdc_CoursePut(t353, t354, u357));
                                            }
                                            u357 = u467;
                                            u358 = u468;
                                            u359 = u469;
                                            u360 = u470;
                                            t353 = t465;
                                            t354 = t466;
                                            t355 = (t355 + 0x4);
                                            t356 = (t356 + 0x4);
                                            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                                            *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                                        }
                                        t473 = t352;
                                    } else {
                                        t473 = t124;
                                    }
                                    t607 = t473;
                                } else {
                                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                                    *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                    t486 = t124;
                                    t487 = 0xC118600;
                                    t488 = 0xFE;
                                    t489 = 0xC118600;
                                    t490 = 0xC118600;
                                    u491 = u345;
                                    u492 = u346;
                                    u493 = u350;
                                    u494 = u351;
                                    for (;;) {
                                        if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                                            break;
                                        }
                                        if ((int)t124 >= (int)0x25) {
                                            if ((int)t124 <= (int)0x28) {
                                                t486 = (*(int *)((t489 + 0x0)));
                                                if (t486 != 109) {
                                                    t486 = (*(int *)(((int)stk + 28)));
                                                    t486 = (*(int *)((t486 + 0x0)));
                                                    if (t486 == 110) {
                                                        if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                            t521 = t487;
                                                            t522 = t488;
                                                            u523 = u491;
                                                            u524 = u492;
                                                            u525 = u493;
                                                            u526 = u494;
                                                        } else {
                                                            t512 = *(int *)((t490 + 0x0));
                                                            t486 = 0xC1EE800;
                                                            t513 = *(int *)((t486 + 0x0));
                                                            t486 = 0xC;
                                                            t514 = 0;
                                                            for (; t514 < (int)t486; t514++) *(unsigned char *)((((int)stk + 24) + 0x20) + t514) = *(unsigned char *)((((((t512 << 2) + t512) << 2) + t513) + 0x4) + t514);
                                                            t488 = 0xC179840;
                                                            t487 = ((int)stk + 24);
                                                            t487 = (t487 + 0x20);
                                                            u491 = (nlLength(t487, t488));
                                                            t488 = 0x0;
                                                            t487 = (*(int *)((t490 + 0x0)));
                                                            t486 = (gdc_CoursePut(t487, t488, u491));
                                                        }
                                                        t536 = t521;
                                                        t537 = t522;
                                                        u538 = u523;
                                                        u539 = u524;
                                                        u540 = u525;
                                                        u541 = u526;
                                                    } else {
                                                        t527 = *(int *)((t490 + 0x0));
                                                        t486 = 0xC1EE800;
                                                        t528 = *(int *)((t486 + 0x0));
                                                        t486 = 0xC;
                                                        t529 = 0;
                                                        for (; t529 < (int)t486; t529++) *(unsigned char *)((((int)stk + 24) + 0x20) + t529) = *(unsigned char *)((((((t527 << 2) + t527) << 2) + t528) + 0x4) + t529);
                                                        t488 = 0xC179840;
                                                        t487 = ((int)stk + 24);
                                                        t487 = (t487 + 0x20);
                                                        u491 = (nlLength(t487, t488));
                                                        t488 = 0x0;
                                                        t487 = (*(int *)((t490 + 0x0)));
                                                        t486 = (gdc_CoursePut(t487, t488, u491));
                                                    }
                                                    t560 = t536;
                                                    t561 = t537;
                                                    u562 = u538;
                                                    u563 = u539;
                                                    u564 = u540;
                                                    u565 = u541;
                                                } else {
                                                    if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                        t551 = t487;
                                                        t552 = t488;
                                                        u553 = u491;
                                                        u554 = u492;
                                                        u555 = u493;
                                                        u556 = u494;
                                                    } else {
                                                        t542 = *(int *)((t490 + 0x0));
                                                        t486 = 0xC1EE800;
                                                        t543 = *(int *)((t486 + 0x0));
                                                        t486 = 0xC;
                                                        t544 = 0;
                                                        for (; t544 < (int)t486; t544++) *(unsigned char *)((((int)stk + 24) + 0x20) + t544) = *(unsigned char *)((((((t542 << 2) + t542) << 2) + t543) + 0x4) + t544);
                                                        t488 = 0xC179840;
                                                        t487 = ((int)stk + 24);
                                                        t487 = (t487 + 0x20);
                                                        u491 = (nlLength(t487, t488));
                                                        t488 = 0x0;
                                                        t487 = (*(int *)((t490 + 0x0)));
                                                        t486 = (gdc_CoursePut(t487, t488, u491));
                                                    }
                                                    t560 = t551;
                                                    t561 = t552;
                                                    u562 = u553;
                                                    u563 = u554;
                                                    u564 = u555;
                                                    u565 = u556;
                                                }
                                                t584 = t560;
                                                t585 = t561;
                                                u586 = u562;
                                                u587 = u563;
                                                u588 = u564;
                                                u589 = u565;
                                            } else {
                                                if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                    t575 = t487;
                                                    t576 = t488;
                                                    u577 = u491;
                                                    u578 = u492;
                                                    u579 = u493;
                                                    u580 = u494;
                                                } else {
                                                    t566 = *(int *)((t490 + 0x0));
                                                    t486 = 0xC1EE800;
                                                    t567 = *(int *)((t486 + 0x0));
                                                    t486 = 0xC;
                                                    t568 = 0;
                                                    for (; t568 < (int)t486; t568++) *(unsigned char *)((((int)stk + 24) + 0x20) + t568) = *(unsigned char *)((((((t566 << 2) + t566) << 2) + t567) + 0x4) + t568);
                                                    t488 = 0xC179840;
                                                    t487 = ((int)stk + 24);
                                                    t487 = (t487 + 0x20);
                                                    u491 = (nlLength(t487, t488));
                                                    t488 = 0x0;
                                                    t487 = (*(int *)((t490 + 0x0)));
                                                    t486 = (gdc_CoursePut(t487, t488, u491));
                                                }
                                                t584 = t575;
                                                t585 = t576;
                                                u586 = u577;
                                                u587 = u578;
                                                u588 = u579;
                                                u589 = u580;
                                            }
                                            t599 = t584;
                                            t600 = t585;
                                            u601 = u586;
                                            u602 = u587;
                                            u603 = u588;
                                            u604 = u589;
                                        } else {
                                            t590 = *(int *)((t490 + 0x0));
                                            t486 = 0xC1EE800;
                                            t591 = *(int *)((t486 + 0x0));
                                            t486 = 0xC;
                                            t592 = 0;
                                            for (; t592 < (int)t486; t592++) *(unsigned char *)((((int)stk + 24) + 0x20) + t592) = *(unsigned char *)((((((t590 << 2) + t590) << 2) + t591) + 0x4) + t592);
                                            t488 = 0xC179840;
                                            t487 = ((int)stk + 24);
                                            t487 = (t487 + 0x20);
                                            u491 = (nlLength(t487, t488));
                                            t488 = 0x0;
                                            t487 = (*(int *)((t490 + 0x0)));
                                            t486 = (gdc_CoursePut(t487, t488, u491));
                                        }
                                        u491 = u601;
                                        u492 = u602;
                                        u493 = u603;
                                        u494 = u604;
                                        t487 = t599;
                                        t488 = t600;
                                        t489 = (t489 + 0x4);
                                        t490 = (t490 + 0x4);
                                        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                                        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                                    }
                                    t607 = t486;
                                }
                                t754 = t607;
                            } else {
                                if ((((int)t124 >= (int)0x19) && ((int)t124 <= (int)0x1C)) || (((int)t124 >= (int)0x24) && ((int)t124 <= (int)0x28))) {
                                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                                    *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                    t620 = t124;
                                    t621 = 0xC118600;
                                    t622 = 0xFE;
                                    t623 = 0xC118600;
                                    t624 = 0xC118600;
                                    u625 = u345;
                                    u626 = u346;
                                    u627 = u350;
                                    u628 = u351;
                                    for (;;) {
                                        if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                                            break;
                                        }
                                        if ((int)t124 >= (int)0x25) {
                                            if ((int)t124 <= (int)0x28) {
                                                t620 = (*(int *)((t623 + 0x0)));
                                                if (t620 != 109) {
                                                    t620 = (*(int *)(((int)stk + 28)));
                                                    t620 = (*(int *)((t620 + 0x0)));
                                                    if (t620 == 110) {
                                                        if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                            t655 = t621;
                                                            t656 = t622;
                                                            u657 = u625;
                                                            u658 = u626;
                                                            u659 = u627;
                                                            u660 = u628;
                                                        } else {
                                                            t646 = *(int *)((t624 + 0x0));
                                                            t620 = 0xC1EE800;
                                                            t647 = *(int *)((t620 + 0x0));
                                                            t620 = 0xC;
                                                            t648 = 0;
                                                            for (; t648 < (int)t620; t648++) *(unsigned char *)((((int)stk + 24) + 0x20) + t648) = *(unsigned char *)((((((t646 << 2) + t646) << 2) + t647) + 0x4) + t648);
                                                            t622 = 0xC179840;
                                                            t621 = ((int)stk + 24);
                                                            t621 = (t621 + 0x20);
                                                            u625 = (nlLength(t621, t622));
                                                            t622 = 0x0;
                                                            t621 = (*(int *)((t624 + 0x0)));
                                                            t620 = (gdc_CoursePut(t621, t622, u625));
                                                        }
                                                        t670 = t655;
                                                        t671 = t656;
                                                        u672 = u657;
                                                        u673 = u658;
                                                        u674 = u659;
                                                        u675 = u660;
                                                    } else {
                                                        t661 = *(int *)((t624 + 0x0));
                                                        t620 = 0xC1EE800;
                                                        t662 = *(int *)((t620 + 0x0));
                                                        t620 = 0xC;
                                                        t663 = 0;
                                                        for (; t663 < (int)t620; t663++) *(unsigned char *)((((int)stk + 24) + 0x20) + t663) = *(unsigned char *)((((((t661 << 2) + t661) << 2) + t662) + 0x4) + t663);
                                                        t622 = 0xC179840;
                                                        t621 = ((int)stk + 24);
                                                        t621 = (t621 + 0x20);
                                                        u625 = (nlLength(t621, t622));
                                                        t622 = 0x0;
                                                        t621 = (*(int *)((t624 + 0x0)));
                                                        t620 = (gdc_CoursePut(t621, t622, u625));
                                                    }
                                                    t694 = t670;
                                                    t695 = t671;
                                                    u696 = u672;
                                                    u697 = u673;
                                                    u698 = u674;
                                                    u699 = u675;
                                                } else {
                                                    if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                        t685 = t621;
                                                        t686 = t622;
                                                        u687 = u625;
                                                        u688 = u626;
                                                        u689 = u627;
                                                        u690 = u628;
                                                    } else {
                                                        t676 = *(int *)((t624 + 0x0));
                                                        t620 = 0xC1EE800;
                                                        t677 = *(int *)((t620 + 0x0));
                                                        t620 = 0xC;
                                                        t678 = 0;
                                                        for (; t678 < (int)t620; t678++) *(unsigned char *)((((int)stk + 24) + 0x20) + t678) = *(unsigned char *)((((((t676 << 2) + t676) << 2) + t677) + 0x4) + t678);
                                                        t622 = 0xC179840;
                                                        t621 = ((int)stk + 24);
                                                        t621 = (t621 + 0x20);
                                                        u625 = (nlLength(t621, t622));
                                                        t622 = 0x0;
                                                        t621 = (*(int *)((t624 + 0x0)));
                                                        t620 = (gdc_CoursePut(t621, t622, u625));
                                                    }
                                                    t694 = t685;
                                                    t695 = t686;
                                                    u696 = u687;
                                                    u697 = u688;
                                                    u698 = u689;
                                                    u699 = u690;
                                                }
                                                t718 = t694;
                                                t719 = t695;
                                                u720 = u696;
                                                u721 = u697;
                                                u722 = u698;
                                                u723 = u699;
                                            } else {
                                                if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                    t709 = t621;
                                                    t710 = t622;
                                                    u711 = u625;
                                                    u712 = u626;
                                                    u713 = u627;
                                                    u714 = u628;
                                                } else {
                                                    t700 = *(int *)((t624 + 0x0));
                                                    t620 = 0xC1EE800;
                                                    t701 = *(int *)((t620 + 0x0));
                                                    t620 = 0xC;
                                                    t702 = 0;
                                                    for (; t702 < (int)t620; t702++) *(unsigned char *)((((int)stk + 24) + 0x20) + t702) = *(unsigned char *)((((((t700 << 2) + t700) << 2) + t701) + 0x4) + t702);
                                                    t622 = 0xC179840;
                                                    t621 = ((int)stk + 24);
                                                    t621 = (t621 + 0x20);
                                                    u625 = (nlLength(t621, t622));
                                                    t622 = 0x0;
                                                    t621 = (*(int *)((t624 + 0x0)));
                                                    t620 = (gdc_CoursePut(t621, t622, u625));
                                                }
                                                t718 = t709;
                                                t719 = t710;
                                                u720 = u711;
                                                u721 = u712;
                                                u722 = u713;
                                                u723 = u714;
                                            }
                                            t733 = t718;
                                            t734 = t719;
                                            u735 = u720;
                                            u736 = u721;
                                            u737 = u722;
                                            u738 = u723;
                                        } else {
                                            t724 = *(int *)((t624 + 0x0));
                                            t620 = 0xC1EE800;
                                            t725 = *(int *)((t620 + 0x0));
                                            t620 = 0xC;
                                            t726 = 0;
                                            for (; t726 < (int)t620; t726++) *(unsigned char *)((((int)stk + 24) + 0x20) + t726) = *(unsigned char *)((((((t724 << 2) + t724) << 2) + t725) + 0x4) + t726);
                                            t622 = 0xC179840;
                                            t621 = ((int)stk + 24);
                                            t621 = (t621 + 0x20);
                                            u625 = (nlLength(t621, t622));
                                            t622 = 0x0;
                                            t621 = (*(int *)((t624 + 0x0)));
                                            t620 = (gdc_CoursePut(t621, t622, u625));
                                        }
                                        u625 = u735;
                                        u626 = u736;
                                        u627 = u737;
                                        u628 = u738;
                                        t621 = t733;
                                        t622 = t734;
                                        t623 = (t623 + 0x4);
                                        t624 = (t624 + 0x4);
                                        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                                        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                                    }
                                    t741 = t620;
                                } else {
                                    t741 = t124;
                                }
                                t754 = t741;
                            }
                            t888 = t754;
                        } else {
                            *(unsigned int *)(((int)stk + 24)) = 0x0;
                            *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                            t767 = t124;
                            t768 = 0xC118600;
                            t769 = 0xFE;
                            t770 = 0xC118600;
                            t771 = 0xC118600;
                            u772 = u345;
                            u773 = u346;
                            u774 = u350;
                            u775 = u351;
                            for (;;) {
                                if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                                    break;
                                }
                                if ((int)t124 >= (int)0x25) {
                                    if ((int)t124 <= (int)0x28) {
                                        t767 = (*(int *)((t770 + 0x0)));
                                        if (t767 != 109) {
                                            t767 = (*(int *)(((int)stk + 28)));
                                            t767 = (*(int *)((t767 + 0x0)));
                                            if (t767 == 110) {
                                                if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                    t802 = t768;
                                                    t803 = t769;
                                                    u804 = u772;
                                                    u805 = u773;
                                                    u806 = u774;
                                                    u807 = u775;
                                                } else {
                                                    t793 = *(int *)((t771 + 0x0));
                                                    t767 = 0xC1EE800;
                                                    t794 = *(int *)((t767 + 0x0));
                                                    t767 = 0xC;
                                                    t795 = 0;
                                                    for (; t795 < (int)t767; t795++) *(unsigned char *)((((int)stk + 24) + 0x20) + t795) = *(unsigned char *)((((((t793 << 2) + t793) << 2) + t794) + 0x4) + t795);
                                                    t769 = 0xC179840;
                                                    t768 = ((int)stk + 24);
                                                    t768 = (t768 + 0x20);
                                                    u772 = (nlLength(t768, t769));
                                                    t769 = 0x0;
                                                    t768 = (*(int *)((t771 + 0x0)));
                                                    t767 = (gdc_CoursePut(t768, t769, u772));
                                                }
                                                t817 = t802;
                                                t818 = t803;
                                                u819 = u804;
                                                u820 = u805;
                                                u821 = u806;
                                                u822 = u807;
                                            } else {
                                                t808 = *(int *)((t771 + 0x0));
                                                t767 = 0xC1EE800;
                                                t809 = *(int *)((t767 + 0x0));
                                                t767 = 0xC;
                                                t810 = 0;
                                                for (; t810 < (int)t767; t810++) *(unsigned char *)((((int)stk + 24) + 0x20) + t810) = *(unsigned char *)((((((t808 << 2) + t808) << 2) + t809) + 0x4) + t810);
                                                t769 = 0xC179840;
                                                t768 = ((int)stk + 24);
                                                t768 = (t768 + 0x20);
                                                u772 = (nlLength(t768, t769));
                                                t769 = 0x0;
                                                t768 = (*(int *)((t771 + 0x0)));
                                                t767 = (gdc_CoursePut(t768, t769, u772));
                                            }
                                            t841 = t817;
                                            t842 = t818;
                                            u843 = u819;
                                            u844 = u820;
                                            u845 = u821;
                                            u846 = u822;
                                        } else {
                                            if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                t832 = t768;
                                                t833 = t769;
                                                u834 = u772;
                                                u835 = u773;
                                                u836 = u774;
                                                u837 = u775;
                                            } else {
                                                t823 = *(int *)((t771 + 0x0));
                                                t767 = 0xC1EE800;
                                                t824 = *(int *)((t767 + 0x0));
                                                t767 = 0xC;
                                                t825 = 0;
                                                for (; t825 < (int)t767; t825++) *(unsigned char *)((((int)stk + 24) + 0x20) + t825) = *(unsigned char *)((((((t823 << 2) + t823) << 2) + t824) + 0x4) + t825);
                                                t769 = 0xC179840;
                                                t768 = ((int)stk + 24);
                                                t768 = (t768 + 0x20);
                                                u772 = (nlLength(t768, t769));
                                                t769 = 0x0;
                                                t768 = (*(int *)((t771 + 0x0)));
                                                t767 = (gdc_CoursePut(t768, t769, u772));
                                            }
                                            t841 = t832;
                                            t842 = t833;
                                            u843 = u834;
                                            u844 = u835;
                                            u845 = u836;
                                            u846 = u837;
                                        }
                                        t865 = t841;
                                        t866 = t842;
                                        u867 = u843;
                                        u868 = u844;
                                        u869 = u845;
                                        u870 = u846;
                                    } else {
                                        if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                            t856 = t768;
                                            t857 = t769;
                                            u858 = u772;
                                            u859 = u773;
                                            u860 = u774;
                                            u861 = u775;
                                        } else {
                                            t847 = *(int *)((t771 + 0x0));
                                            t767 = 0xC1EE800;
                                            t848 = *(int *)((t767 + 0x0));
                                            t767 = 0xC;
                                            t849 = 0;
                                            for (; t849 < (int)t767; t849++) *(unsigned char *)((((int)stk + 24) + 0x20) + t849) = *(unsigned char *)((((((t847 << 2) + t847) << 2) + t848) + 0x4) + t849);
                                            t769 = 0xC179840;
                                            t768 = ((int)stk + 24);
                                            t768 = (t768 + 0x20);
                                            u772 = (nlLength(t768, t769));
                                            t769 = 0x0;
                                            t768 = (*(int *)((t771 + 0x0)));
                                            t767 = (gdc_CoursePut(t768, t769, u772));
                                        }
                                        t865 = t856;
                                        t866 = t857;
                                        u867 = u858;
                                        u868 = u859;
                                        u869 = u860;
                                        u870 = u861;
                                    }
                                    t880 = t865;
                                    t881 = t866;
                                    u882 = u867;
                                    u883 = u868;
                                    u884 = u869;
                                    u885 = u870;
                                } else {
                                    t871 = *(int *)((t771 + 0x0));
                                    t767 = 0xC1EE800;
                                    t872 = *(int *)((t767 + 0x0));
                                    t767 = 0xC;
                                    t873 = 0;
                                    for (; t873 < (int)t767; t873++) *(unsigned char *)((((int)stk + 24) + 0x20) + t873) = *(unsigned char *)((((((t871 << 2) + t871) << 2) + t872) + 0x4) + t873);
                                    t769 = 0xC179840;
                                    t768 = ((int)stk + 24);
                                    t768 = (t768 + 0x20);
                                    u772 = (nlLength(t768, t769));
                                    t769 = 0x0;
                                    t768 = (*(int *)((t771 + 0x0)));
                                    t767 = (gdc_CoursePut(t768, t769, u772));
                                }
                                u772 = u882;
                                u773 = u883;
                                u774 = u884;
                                u775 = u885;
                                t768 = t880;
                                t769 = t881;
                                t770 = (t770 + 0x4);
                                t771 = (t771 + 0x4);
                                *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                            }
                            t888 = t767;
                        }
                        t1022 = t888;
                    } else {
                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                        *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                        t901 = t124;
                        t902 = 0xC118600;
                        t903 = 0xFE;
                        t904 = 0xC118600;
                        t905 = 0xC118600;
                        u906 = u345;
                        u907 = u346;
                        u908 = u350;
                        u909 = u351;
                        for (;;) {
                            if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                                break;
                            }
                            if ((int)t124 >= (int)0x25) {
                                if ((int)t124 <= (int)0x28) {
                                    t901 = (*(int *)((t904 + 0x0)));
                                    if (t901 != 109) {
                                        t901 = (*(int *)(((int)stk + 28)));
                                        t901 = (*(int *)((t901 + 0x0)));
                                        if (t901 == 110) {
                                            if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                                t936 = t902;
                                                t937 = t903;
                                                u938 = u906;
                                                u939 = u907;
                                                u940 = u908;
                                                u941 = u909;
                                            } else {
                                                t927 = *(int *)((t905 + 0x0));
                                                t901 = 0xC1EE800;
                                                t928 = *(int *)((t901 + 0x0));
                                                t901 = 0xC;
                                                t929 = 0;
                                                for (; t929 < (int)t901; t929++) *(unsigned char *)((((int)stk + 24) + 0x20) + t929) = *(unsigned char *)((((((t927 << 2) + t927) << 2) + t928) + 0x4) + t929);
                                                t903 = 0xC179840;
                                                t902 = ((int)stk + 24);
                                                t902 = (t902 + 0x20);
                                                u906 = (nlLength(t902, t903));
                                                t903 = 0x0;
                                                t902 = (*(int *)((t905 + 0x0)));
                                                t901 = (gdc_CoursePut(t902, t903, u906));
                                            }
                                            t951 = t936;
                                            t952 = t937;
                                            u953 = u938;
                                            u954 = u939;
                                            u955 = u940;
                                            u956 = u941;
                                        } else {
                                            t942 = *(int *)((t905 + 0x0));
                                            t901 = 0xC1EE800;
                                            t943 = *(int *)((t901 + 0x0));
                                            t901 = 0xC;
                                            t944 = 0;
                                            for (; t944 < (int)t901; t944++) *(unsigned char *)((((int)stk + 24) + 0x20) + t944) = *(unsigned char *)((((((t942 << 2) + t942) << 2) + t943) + 0x4) + t944);
                                            t903 = 0xC179840;
                                            t902 = ((int)stk + 24);
                                            t902 = (t902 + 0x20);
                                            u906 = (nlLength(t902, t903));
                                            t903 = 0x0;
                                            t902 = (*(int *)((t905 + 0x0)));
                                            t901 = (gdc_CoursePut(t902, t903, u906));
                                        }
                                        t975 = t951;
                                        t976 = t952;
                                        u977 = u953;
                                        u978 = u954;
                                        u979 = u955;
                                        u980 = u956;
                                    } else {
                                        if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                            t966 = t902;
                                            t967 = t903;
                                            u968 = u906;
                                            u969 = u907;
                                            u970 = u908;
                                            u971 = u909;
                                        } else {
                                            t957 = *(int *)((t905 + 0x0));
                                            t901 = 0xC1EE800;
                                            t958 = *(int *)((t901 + 0x0));
                                            t901 = 0xC;
                                            t959 = 0;
                                            for (; t959 < (int)t901; t959++) *(unsigned char *)((((int)stk + 24) + 0x20) + t959) = *(unsigned char *)((((((t957 << 2) + t957) << 2) + t958) + 0x4) + t959);
                                            t903 = 0xC179840;
                                            t902 = ((int)stk + 24);
                                            t902 = (t902 + 0x20);
                                            u906 = (nlLength(t902, t903));
                                            t903 = 0x0;
                                            t902 = (*(int *)((t905 + 0x0)));
                                            t901 = (gdc_CoursePut(t902, t903, u906));
                                        }
                                        t975 = t966;
                                        t976 = t967;
                                        u977 = u968;
                                        u978 = u969;
                                        u979 = u970;
                                        u980 = u971;
                                    }
                                    t999 = t975;
                                    t1000 = t976;
                                    u1001 = u977;
                                    u1002 = u978;
                                    u1003 = u979;
                                    u1004 = u980;
                                } else {
                                    if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                        t990 = t902;
                                        t991 = t903;
                                        u992 = u906;
                                        u993 = u907;
                                        u994 = u908;
                                        u995 = u909;
                                    } else {
                                        t981 = *(int *)((t905 + 0x0));
                                        t901 = 0xC1EE800;
                                        t982 = *(int *)((t901 + 0x0));
                                        t901 = 0xC;
                                        t983 = 0;
                                        for (; t983 < (int)t901; t983++) *(unsigned char *)((((int)stk + 24) + 0x20) + t983) = *(unsigned char *)((((((t981 << 2) + t981) << 2) + t982) + 0x4) + t983);
                                        t903 = 0xC179840;
                                        t902 = ((int)stk + 24);
                                        t902 = (t902 + 0x20);
                                        u906 = (nlLength(t902, t903));
                                        t903 = 0x0;
                                        t902 = (*(int *)((t905 + 0x0)));
                                        t901 = (gdc_CoursePut(t902, t903, u906));
                                    }
                                    t999 = t990;
                                    t1000 = t991;
                                    u1001 = u992;
                                    u1002 = u993;
                                    u1003 = u994;
                                    u1004 = u995;
                                }
                                t1014 = t999;
                                t1015 = t1000;
                                u1016 = u1001;
                                u1017 = u1002;
                                u1018 = u1003;
                                u1019 = u1004;
                            } else {
                                t1005 = *(int *)((t905 + 0x0));
                                t901 = 0xC1EE800;
                                t1006 = *(int *)((t901 + 0x0));
                                t901 = 0xC;
                                t1007 = 0;
                                for (; t1007 < (int)t901; t1007++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1007) = *(unsigned char *)((((((t1005 << 2) + t1005) << 2) + t1006) + 0x4) + t1007);
                                t903 = 0xC179840;
                                t902 = ((int)stk + 24);
                                t902 = (t902 + 0x20);
                                u906 = (nlLength(t902, t903));
                                t903 = 0x0;
                                t902 = (*(int *)((t905 + 0x0)));
                                t901 = (gdc_CoursePut(t902, t903, u906));
                            }
                            u906 = u1016;
                            u907 = u1017;
                            u908 = u1018;
                            u909 = u1019;
                            t902 = t1014;
                            t903 = t1015;
                            t904 = (t904 + 0x4);
                            t905 = (t905 + 0x4);
                            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                            *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                        }
                        t1022 = t901;
                    }
                    t1156 = t1022;
                } else {
                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                    *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                    t1035 = t124;
                    t1036 = 0xC118600;
                    t1037 = 0xFE;
                    t1038 = 0xC118600;
                    t1039 = 0xC118600;
                    u1040 = u345;
                    u1041 = u346;
                    u1042 = u350;
                    u1043 = u351;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                            break;
                        }
                        if ((int)t124 >= (int)0x25) {
                            if ((int)t124 <= (int)0x28) {
                                t1035 = (*(int *)((t1038 + 0x0)));
                                if (t1035 != 109) {
                                    t1035 = (*(int *)(((int)stk + 28)));
                                    t1035 = (*(int *)((t1035 + 0x0)));
                                    if (t1035 == 110) {
                                        if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                            t1070 = t1036;
                                            t1071 = t1037;
                                            u1072 = u1040;
                                            u1073 = u1041;
                                            u1074 = u1042;
                                            u1075 = u1043;
                                        } else {
                                            t1061 = *(int *)((t1039 + 0x0));
                                            t1035 = 0xC1EE800;
                                            t1062 = *(int *)((t1035 + 0x0));
                                            t1035 = 0xC;
                                            t1063 = 0;
                                            for (; t1063 < (int)t1035; t1063++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1063) = *(unsigned char *)((((((t1061 << 2) + t1061) << 2) + t1062) + 0x4) + t1063);
                                            t1037 = 0xC179840;
                                            t1036 = ((int)stk + 24);
                                            t1036 = (t1036 + 0x20);
                                            u1040 = (nlLength(t1036, t1037));
                                            t1037 = 0x0;
                                            t1036 = (*(int *)((t1039 + 0x0)));
                                            t1035 = (gdc_CoursePut(t1036, t1037, u1040));
                                        }
                                        t1085 = t1070;
                                        t1086 = t1071;
                                        u1087 = u1072;
                                        u1088 = u1073;
                                        u1089 = u1074;
                                        u1090 = u1075;
                                    } else {
                                        t1076 = *(int *)((t1039 + 0x0));
                                        t1035 = 0xC1EE800;
                                        t1077 = *(int *)((t1035 + 0x0));
                                        t1035 = 0xC;
                                        t1078 = 0;
                                        for (; t1078 < (int)t1035; t1078++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1078) = *(unsigned char *)((((((t1076 << 2) + t1076) << 2) + t1077) + 0x4) + t1078);
                                        t1037 = 0xC179840;
                                        t1036 = ((int)stk + 24);
                                        t1036 = (t1036 + 0x20);
                                        u1040 = (nlLength(t1036, t1037));
                                        t1037 = 0x0;
                                        t1036 = (*(int *)((t1039 + 0x0)));
                                        t1035 = (gdc_CoursePut(t1036, t1037, u1040));
                                    }
                                    t1109 = t1085;
                                    t1110 = t1086;
                                    u1111 = u1087;
                                    u1112 = u1088;
                                    u1113 = u1089;
                                    u1114 = u1090;
                                } else {
                                    if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                        t1100 = t1036;
                                        t1101 = t1037;
                                        u1102 = u1040;
                                        u1103 = u1041;
                                        u1104 = u1042;
                                        u1105 = u1043;
                                    } else {
                                        t1091 = *(int *)((t1039 + 0x0));
                                        t1035 = 0xC1EE800;
                                        t1092 = *(int *)((t1035 + 0x0));
                                        t1035 = 0xC;
                                        t1093 = 0;
                                        for (; t1093 < (int)t1035; t1093++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1093) = *(unsigned char *)((((((t1091 << 2) + t1091) << 2) + t1092) + 0x4) + t1093);
                                        t1037 = 0xC179840;
                                        t1036 = ((int)stk + 24);
                                        t1036 = (t1036 + 0x20);
                                        u1040 = (nlLength(t1036, t1037));
                                        t1037 = 0x0;
                                        t1036 = (*(int *)((t1039 + 0x0)));
                                        t1035 = (gdc_CoursePut(t1036, t1037, u1040));
                                    }
                                    t1109 = t1100;
                                    t1110 = t1101;
                                    u1111 = u1102;
                                    u1112 = u1103;
                                    u1113 = u1104;
                                    u1114 = u1105;
                                }
                                t1133 = t1109;
                                t1134 = t1110;
                                u1135 = u1111;
                                u1136 = u1112;
                                u1137 = u1113;
                                u1138 = u1114;
                            } else {
                                if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                    t1124 = t1036;
                                    t1125 = t1037;
                                    u1126 = u1040;
                                    u1127 = u1041;
                                    u1128 = u1042;
                                    u1129 = u1043;
                                } else {
                                    t1115 = *(int *)((t1039 + 0x0));
                                    t1035 = 0xC1EE800;
                                    t1116 = *(int *)((t1035 + 0x0));
                                    t1035 = 0xC;
                                    t1117 = 0;
                                    for (; t1117 < (int)t1035; t1117++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1117) = *(unsigned char *)((((((t1115 << 2) + t1115) << 2) + t1116) + 0x4) + t1117);
                                    t1037 = 0xC179840;
                                    t1036 = ((int)stk + 24);
                                    t1036 = (t1036 + 0x20);
                                    u1040 = (nlLength(t1036, t1037));
                                    t1037 = 0x0;
                                    t1036 = (*(int *)((t1039 + 0x0)));
                                    t1035 = (gdc_CoursePut(t1036, t1037, u1040));
                                }
                                t1133 = t1124;
                                t1134 = t1125;
                                u1135 = u1126;
                                u1136 = u1127;
                                u1137 = u1128;
                                u1138 = u1129;
                            }
                            t1148 = t1133;
                            t1149 = t1134;
                            u1150 = u1135;
                            u1151 = u1136;
                            u1152 = u1137;
                            u1153 = u1138;
                        } else {
                            t1139 = *(int *)((t1039 + 0x0));
                            t1035 = 0xC1EE800;
                            t1140 = *(int *)((t1035 + 0x0));
                            t1035 = 0xC;
                            t1141 = 0;
                            for (; t1141 < (int)t1035; t1141++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1141) = *(unsigned char *)((((((t1139 << 2) + t1139) << 2) + t1140) + 0x4) + t1141);
                            t1037 = 0xC179840;
                            t1036 = ((int)stk + 24);
                            t1036 = (t1036 + 0x20);
                            u1040 = (nlLength(t1036, t1037));
                            t1037 = 0x0;
                            t1036 = (*(int *)((t1039 + 0x0)));
                            t1035 = (gdc_CoursePut(t1036, t1037, u1040));
                        }
                        u1040 = u1150;
                        u1041 = u1151;
                        u1042 = u1152;
                        u1043 = u1153;
                        t1036 = t1148;
                        t1037 = t1149;
                        t1038 = (t1038 + 0x4);
                        t1039 = (t1039 + 0x4);
                        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                    }
                    t1156 = t1035;
                }
                t1290 = t1156;
            } else {
                *(unsigned int *)(((int)stk + 24)) = 0x0;
                *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                t1169 = t124;
                t1170 = 0xC118600;
                t1171 = 0xFE;
                t1172 = 0xC118600;
                t1173 = 0xC118600;
                u1174 = u345;
                u1175 = u346;
                u1176 = u350;
                u1177 = u351;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                        break;
                    }
                    if ((int)t124 >= (int)0x25) {
                        if ((int)t124 <= (int)0x28) {
                            t1169 = (*(int *)((t1172 + 0x0)));
                            if (t1169 != 109) {
                                t1169 = (*(int *)(((int)stk + 28)));
                                t1169 = (*(int *)((t1169 + 0x0)));
                                if (t1169 == 110) {
                                    if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                        t1204 = t1170;
                                        t1205 = t1171;
                                        u1206 = u1174;
                                        u1207 = u1175;
                                        u1208 = u1176;
                                        u1209 = u1177;
                                    } else {
                                        t1195 = *(int *)((t1173 + 0x0));
                                        t1169 = 0xC1EE800;
                                        t1196 = *(int *)((t1169 + 0x0));
                                        t1169 = 0xC;
                                        t1197 = 0;
                                        for (; t1197 < (int)t1169; t1197++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1197) = *(unsigned char *)((((((t1195 << 2) + t1195) << 2) + t1196) + 0x4) + t1197);
                                        t1171 = 0xC179840;
                                        t1170 = ((int)stk + 24);
                                        t1170 = (t1170 + 0x20);
                                        u1174 = (nlLength(t1170, t1171));
                                        t1171 = 0x0;
                                        t1170 = (*(int *)((t1173 + 0x0)));
                                        t1169 = (gdc_CoursePut(t1170, t1171, u1174));
                                    }
                                    t1219 = t1204;
                                    t1220 = t1205;
                                    u1221 = u1206;
                                    u1222 = u1207;
                                    u1223 = u1208;
                                    u1224 = u1209;
                                } else {
                                    t1210 = *(int *)((t1173 + 0x0));
                                    t1169 = 0xC1EE800;
                                    t1211 = *(int *)((t1169 + 0x0));
                                    t1169 = 0xC;
                                    t1212 = 0;
                                    for (; t1212 < (int)t1169; t1212++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1212) = *(unsigned char *)((((((t1210 << 2) + t1210) << 2) + t1211) + 0x4) + t1212);
                                    t1171 = 0xC179840;
                                    t1170 = ((int)stk + 24);
                                    t1170 = (t1170 + 0x20);
                                    u1174 = (nlLength(t1170, t1171));
                                    t1171 = 0x0;
                                    t1170 = (*(int *)((t1173 + 0x0)));
                                    t1169 = (gdc_CoursePut(t1170, t1171, u1174));
                                }
                                t1243 = t1219;
                                t1244 = t1220;
                                u1245 = u1221;
                                u1246 = u1222;
                                u1247 = u1223;
                                u1248 = u1224;
                            } else {
                                if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                    t1234 = t1170;
                                    t1235 = t1171;
                                    u1236 = u1174;
                                    u1237 = u1175;
                                    u1238 = u1176;
                                    u1239 = u1177;
                                } else {
                                    t1225 = *(int *)((t1173 + 0x0));
                                    t1169 = 0xC1EE800;
                                    t1226 = *(int *)((t1169 + 0x0));
                                    t1169 = 0xC;
                                    t1227 = 0;
                                    for (; t1227 < (int)t1169; t1227++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1227) = *(unsigned char *)((((((t1225 << 2) + t1225) << 2) + t1226) + 0x4) + t1227);
                                    t1171 = 0xC179840;
                                    t1170 = ((int)stk + 24);
                                    t1170 = (t1170 + 0x20);
                                    u1174 = (nlLength(t1170, t1171));
                                    t1171 = 0x0;
                                    t1170 = (*(int *)((t1173 + 0x0)));
                                    t1169 = (gdc_CoursePut(t1170, t1171, u1174));
                                }
                                t1243 = t1234;
                                t1244 = t1235;
                                u1245 = u1236;
                                u1246 = u1237;
                                u1247 = u1238;
                                u1248 = u1239;
                            }
                            t1267 = t1243;
                            t1268 = t1244;
                            u1269 = u1245;
                            u1270 = u1246;
                            u1271 = u1247;
                            u1272 = u1248;
                        } else {
                            if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                t1258 = t1170;
                                t1259 = t1171;
                                u1260 = u1174;
                                u1261 = u1175;
                                u1262 = u1176;
                                u1263 = u1177;
                            } else {
                                t1249 = *(int *)((t1173 + 0x0));
                                t1169 = 0xC1EE800;
                                t1250 = *(int *)((t1169 + 0x0));
                                t1169 = 0xC;
                                t1251 = 0;
                                for (; t1251 < (int)t1169; t1251++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1251) = *(unsigned char *)((((((t1249 << 2) + t1249) << 2) + t1250) + 0x4) + t1251);
                                t1171 = 0xC179840;
                                t1170 = ((int)stk + 24);
                                t1170 = (t1170 + 0x20);
                                u1174 = (nlLength(t1170, t1171));
                                t1171 = 0x0;
                                t1170 = (*(int *)((t1173 + 0x0)));
                                t1169 = (gdc_CoursePut(t1170, t1171, u1174));
                            }
                            t1267 = t1258;
                            t1268 = t1259;
                            u1269 = u1260;
                            u1270 = u1261;
                            u1271 = u1262;
                            u1272 = u1263;
                        }
                        t1282 = t1267;
                        t1283 = t1268;
                        u1284 = u1269;
                        u1285 = u1270;
                        u1286 = u1271;
                        u1287 = u1272;
                    } else {
                        t1273 = *(int *)((t1173 + 0x0));
                        t1169 = 0xC1EE800;
                        t1274 = *(int *)((t1169 + 0x0));
                        t1169 = 0xC;
                        t1275 = 0;
                        for (; t1275 < (int)t1169; t1275++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1275) = *(unsigned char *)((((((t1273 << 2) + t1273) << 2) + t1274) + 0x4) + t1275);
                        t1171 = 0xC179840;
                        t1170 = ((int)stk + 24);
                        t1170 = (t1170 + 0x20);
                        u1174 = (nlLength(t1170, t1171));
                        t1171 = 0x0;
                        t1170 = (*(int *)((t1173 + 0x0)));
                        t1169 = (gdc_CoursePut(t1170, t1171, u1174));
                    }
                    u1174 = u1284;
                    u1175 = u1285;
                    u1176 = u1286;
                    u1177 = u1287;
                    t1170 = t1282;
                    t1171 = t1283;
                    t1172 = (t1172 + 0x4);
                    t1173 = (t1173 + 0x4);
                    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                }
                t1290 = t1169;
            }
            t1424 = t1290;
        } else {
            *(unsigned int *)(((int)stk + 24)) = 0x0;
            *(unsigned int *)(((int)stk + 28)) = 0xC118600;
            t1303 = t124;
            t1304 = 0xC118600;
            t1305 = 0xFE;
            t1306 = 0xC118600;
            t1307 = 0xC118600;
            u1308 = u345;
            u1309 = u346;
            u1310 = u350;
            u1311 = u351;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)0xC0C8358)) {
                    break;
                }
                if ((int)t124 >= (int)0x25) {
                    if ((int)t124 <= (int)0x28) {
                        t1303 = (*(int *)((t1306 + 0x0)));
                        if (t1303 != 109) {
                            t1303 = (*(int *)(((int)stk + 28)));
                            t1303 = (*(int *)((t1303 + 0x0)));
                            if (t1303 == 110) {
                                if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                    t1338 = t1304;
                                    t1339 = t1305;
                                    u1340 = u1308;
                                    u1341 = u1309;
                                    u1342 = u1310;
                                    u1343 = u1311;
                                } else {
                                    t1329 = *(int *)((t1307 + 0x0));
                                    t1303 = 0xC1EE800;
                                    t1330 = *(int *)((t1303 + 0x0));
                                    t1303 = 0xC;
                                    t1331 = 0;
                                    for (; t1331 < (int)t1303; t1331++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1331) = *(unsigned char *)((((((t1329 << 2) + t1329) << 2) + t1330) + 0x4) + t1331);
                                    t1305 = 0xC179840;
                                    t1304 = ((int)stk + 24);
                                    t1304 = (t1304 + 0x20);
                                    u1308 = (nlLength(t1304, t1305));
                                    t1305 = 0x0;
                                    t1304 = (*(int *)((t1307 + 0x0)));
                                    t1303 = (gdc_CoursePut(t1304, t1305, u1308));
                                }
                                t1353 = t1338;
                                t1354 = t1339;
                                u1355 = u1340;
                                u1356 = u1341;
                                u1357 = u1342;
                                u1358 = u1343;
                            } else {
                                t1344 = *(int *)((t1307 + 0x0));
                                t1303 = 0xC1EE800;
                                t1345 = *(int *)((t1303 + 0x0));
                                t1303 = 0xC;
                                t1346 = 0;
                                for (; t1346 < (int)t1303; t1346++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1346) = *(unsigned char *)((((((t1344 << 2) + t1344) << 2) + t1345) + 0x4) + t1346);
                                t1305 = 0xC179840;
                                t1304 = ((int)stk + 24);
                                t1304 = (t1304 + 0x20);
                                u1308 = (nlLength(t1304, t1305));
                                t1305 = 0x0;
                                t1304 = (*(int *)((t1307 + 0x0)));
                                t1303 = (gdc_CoursePut(t1304, t1305, u1308));
                            }
                            t1377 = t1353;
                            t1378 = t1354;
                            u1379 = u1355;
                            u1380 = u1356;
                            u1381 = u1357;
                            u1382 = u1358;
                        } else {
                            if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                                t1368 = t1304;
                                t1369 = t1305;
                                u1370 = u1308;
                                u1371 = u1309;
                                u1372 = u1310;
                                u1373 = u1311;
                            } else {
                                t1359 = *(int *)((t1307 + 0x0));
                                t1303 = 0xC1EE800;
                                t1360 = *(int *)((t1303 + 0x0));
                                t1303 = 0xC;
                                t1361 = 0;
                                for (; t1361 < (int)t1303; t1361++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1361) = *(unsigned char *)((((((t1359 << 2) + t1359) << 2) + t1360) + 0x4) + t1361);
                                t1305 = 0xC179840;
                                t1304 = ((int)stk + 24);
                                t1304 = (t1304 + 0x20);
                                u1308 = (nlLength(t1304, t1305));
                                t1305 = 0x0;
                                t1304 = (*(int *)((t1307 + 0x0)));
                                t1303 = (gdc_CoursePut(t1304, t1305, u1308));
                            }
                            t1377 = t1368;
                            t1378 = t1369;
                            u1379 = u1370;
                            u1380 = u1371;
                            u1381 = u1372;
                            u1382 = u1373;
                        }
                        t1401 = t1377;
                        t1402 = t1378;
                        u1403 = u1379;
                        u1404 = u1380;
                        u1405 = u1381;
                        u1406 = u1382;
                    } else {
                        if (((int)t124 >= (int)0x25) && ((int)t124 <= (int)0x28)) {
                            t1392 = t1304;
                            t1393 = t1305;
                            u1394 = u1308;
                            u1395 = u1309;
                            u1396 = u1310;
                            u1397 = u1311;
                        } else {
                            t1383 = *(int *)((t1307 + 0x0));
                            t1303 = 0xC1EE800;
                            t1384 = *(int *)((t1303 + 0x0));
                            t1303 = 0xC;
                            t1385 = 0;
                            for (; t1385 < (int)t1303; t1385++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1385) = *(unsigned char *)((((((t1383 << 2) + t1383) << 2) + t1384) + 0x4) + t1385);
                            t1305 = 0xC179840;
                            t1304 = ((int)stk + 24);
                            t1304 = (t1304 + 0x20);
                            u1308 = (nlLength(t1304, t1305));
                            t1305 = 0x0;
                            t1304 = (*(int *)((t1307 + 0x0)));
                            t1303 = (gdc_CoursePut(t1304, t1305, u1308));
                        }
                        t1401 = t1392;
                        t1402 = t1393;
                        u1403 = u1394;
                        u1404 = u1395;
                        u1405 = u1396;
                        u1406 = u1397;
                    }
                    t1416 = t1401;
                    t1417 = t1402;
                    u1418 = u1403;
                    u1419 = u1404;
                    u1420 = u1405;
                    u1421 = u1406;
                } else {
                    t1407 = *(int *)((t1307 + 0x0));
                    t1303 = 0xC1EE800;
                    t1408 = *(int *)((t1303 + 0x0));
                    t1303 = 0xC;
                    t1409 = 0;
                    for (; t1409 < (int)t1303; t1409++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1409) = *(unsigned char *)((((((t1407 << 2) + t1407) << 2) + t1408) + 0x4) + t1409);
                    t1305 = 0xC179840;
                    t1304 = ((int)stk + 24);
                    t1304 = (t1304 + 0x20);
                    u1308 = (nlLength(t1304, t1305));
                    t1305 = 0x0;
                    t1304 = (*(int *)((t1307 + 0x0)));
                    t1303 = (gdc_CoursePut(t1304, t1305, u1308));
                }
                u1308 = u1418;
                u1309 = u1419;
                u1310 = u1420;
                u1311 = u1421;
                t1304 = t1416;
                t1305 = t1417;
                t1306 = (t1306 + 0x4);
                t1307 = (t1307 + 0x4);
                *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
            }
            t1424 = t1303;
        }
        t1444 = t1424;
        if (((int)t124 >= (int)0x43) && ((int)t124 <= (int)0x46)) {
            t1437 = *(int *)0xC1EE804;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x20)) = *(struct mv3 *)(((t1437 + 0x8AC) + 0x4)); }
            t1439 = CheckClipping((((int)stk + 24) + 0x20), (*(float *)(((t1437 + 0x8AC) + 0x0))));
            t1442 = t1439;
            if (t1439 != 0) {
                t1442 = (gdc_CoursePut(0x6F, 0x1, (nlLength((((int)stk + 24) + 0x20), 0xC179840))));
            }
            t1444 = t1442;
        }
        return t1444;
    }
    *(float *)(((int)stk + 80)) = 3000.0f;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(float *)0xC2A6AC8 = (1.0f / (nlFastSin((((int)((((*(float *)0xC1798A4) * 32768.0f) / 360.0f) + 0.5f) & 0xFFFF) + 0x1))));
    getNearLineIndex(0x0, (CourseSplineGet(0x0)), ((CourseSplineNumGet(0x0))), 0xC2A6EC0, 0xC179840, 3000.0f);
    t1460 = findSplineSection(0xC124358, 0xC0C8410, 0xC2A6EC0);
    *(unsigned int *)(((int)stk + 44)) = t1460;
    t1729 = t1460;
    if (t1460 == -1) {
    } else {
        getPieceWindow((((int)stk + 4) + 0x28), 0xC1243F8, 0xC0C8410, 0xC0C8414, 0xFF, (((int)stk + 12) + 0x14), (((int)stk + 16) + 0x20), (((int)stk + 20) + 0x10));
        Put_Course_Obj_Dist();
        t1463 = *(int *)0xC17912C;
        if (((int)t1463 > (int)0x32) && ((((int)t1463 < (int)0x3A) || ((int)t1463 > (int)0x4E)) && (((int)t1463 < (int)0x75) || ((int)t1463 > (int)0x7A)))) {
            if ((int)t1463 < (int)0x8A) {
                t1464 = 0x60;
                t1465 = 0x32;
                u1466 = 3000.0f;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)(((int)stk + 36)))) {
                        break;
                    }
                    t1464 = 0xFF;
                    t1465 = (*(int *)(((int)stk + 24)));
                    t1464 = ((int)((int)((*(int *)(((int)stk + 32))) + t1465) % (int)t1464));
                    t1465 = 0xC081324;
                    *(unsigned int *)(((int)stk + 20)) = t1464;
                    *(unsigned int *)(((int)stk + 28)) = (((t1464 << 2) + t1464) << 2);
                    t1473 = (((((t1464 << 2) + t1464) << 2) + (*(int *)0xC1EE800)) + 0x4);
                    t1464 = 0xC;
                    t1474 = 0;
                    for (; t1474 < (int)t1464; t1474++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t1474) = *(unsigned char *)(t1473 + t1474);
                    t1464 = (nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20)));
                    t1477 = *(int *)(((int)stk + 28));
                    t1465 = (*(int *)0xC1EE800);
                    u1466 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                    t1464 = (CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1477 + t1465) + 0x0)))));
                    if (t1464 != 0) {
                        t1481 = *(int *)(((int)stk + 20));
                        t1464 = 0x20;
                        t1465 = t1481;
                        t1464 = (PutCourse_CheckPiece((*(int *)(((int)stk + 20))), (*(int *)0xC2A6EC0), 0x0, (((int)stk + 20) + 0x2C), u1466, (*(float *)((((int)stk + 20) + t1464))), (*(float *)((((((t1481 << 2) + t1465) << 2) + (*(int *)0xC1EE800)) + 0x0)))));
                        if (t1464 == 1) {
                            t1464 = (gdc_CoursePut((*(int *)(((int)stk + 20))), 0x0, u1466));
                        }
                    }
                    t1465 = (*(int *)(((int)stk + 24)));
                    t1465 = (t1465 + 0x1);
                    *(unsigned int *)(((int)stk + 24)) = t1465;
                }
                u1560 = u1466;
            } else {
                if ((int)t1463 > (int)0x17B) {
                    t1493 = 0x60;
                    t1494 = 0x32;
                    u1495 = 3000.0f;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)(((int)stk + 36)))) {
                            break;
                        }
                        t1493 = 0xFF;
                        t1494 = (*(int *)(((int)stk + 24)));
                        t1493 = ((int)((int)((*(int *)(((int)stk + 32))) + t1494) % (int)t1493));
                        *(unsigned int *)(((int)stk + 20)) = t1493;
                        *(unsigned int *)(((int)stk + 28)) = (((t1493 << 2) + t1493) << 2);
                        t1502 = (((((t1493 << 2) + t1493) << 2) + (*(int *)0xC1EE800)) + 0x4);
                        t1493 = 0xC;
                        t1503 = 0;
                        for (; t1503 < (int)t1493; t1503++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t1503) = *(unsigned char *)(t1502 + t1503);
                        t1493 = (nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20)));
                        t1506 = *(int *)(((int)stk + 28));
                        t1494 = (*(int *)0xC1EE800);
                        u1495 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                        t1493 = (CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1506 + t1494) + 0x0)))));
                        if (t1493 != 0) {
                            t1510 = *(int *)(((int)stk + 20));
                            t1493 = 0x20;
                            t1494 = t1510;
                            t1493 = (PutCourse_CheckPiece((*(int *)(((int)stk + 20))), (*(int *)0xC2A6EC0), 0x0, (((int)stk + 20) + 0x2C), u1495, (*(float *)((((int)stk + 20) + t1493))), (*(float *)((((((t1510 << 2) + t1494) << 2) + (*(int *)0xC1EE800)) + 0x0)))));
                            if (t1493 == 1) {
                                t1493 = (gdc_CoursePut((*(int *)(((int)stk + 20))), 0x0, u1495));
                            }
                        }
                        t1494 = (*(int *)(((int)stk + 24)));
                        t1494 = (t1494 + 0x1);
                        *(unsigned int *)(((int)stk + 24)) = t1494;
                    }
                    u1555 = u1495;
                } else {
                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                    u1522 = 3000.0f;
                    for (;;) {
                        t1523 = *(short *)0xC17912C;
                        if ((*(int *)((((*(int *)(((int)stk + 24))) << 2) + ((unsigned short)(((((t1523 << 2) << 2) + t1523) << 2) << 1) + 0xC0F4588)))) == -1) {
                            break;
                        }
                        t1526 = *(short *)0xC17912C;
                        t1528 = *(int *)((((0xC0F4588 + (unsigned short)(((((t1526 << 2) << 2) + t1526) << 2) << 1)) + (*(int *)(((int)stk + 28)))) + 0x0));
                        *(unsigned int *)(((int)stk + 20)) = t1528;
                        *(unsigned int *)(((int)stk + 40)) = (((t1528 << 2) + t1528) << 2);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x2C)) = *(struct mv3 *)((((((t1528 << 2) + t1528) << 2) + (*(int *)0xC1EE800)) + 0x4)); }
                        nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20));
                        t1532 = *(int *)(((int)stk + 40));
                        t1533 = *(int *)0xC1EE800;
                        u1522 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                        if ((CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1532 + t1533) + 0x0))))) != 0) {
                            t1536 = *(int *)(((int)stk + 20));
                            if ((PutCourse_CheckPiece((*(int *)(((int)stk + 20))), (*(int *)0xC2A6EC0), 0x0, (((int)stk + 20) + 0x2C), u1522, (*(float *)(((int)stk + 52))), (*(float *)((((((t1536 << 2) + t1536) << 2) + (*(int *)0xC1EE800)) + 0x0))))) == 1) {
                                gdc_CoursePut((*(int *)(((int)stk + 20))), 0x0, u1522);
                            }
                        }
                        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                    }
                    u1555 = u1522;
                }
                u1560 = u1555;
            }
            u1594 = u1560;
        } else {
            *(unsigned int *)(((int)stk + 28)) = 0x0;
            u1561 = 3000.0f;
            for (;;) {
                t1562 = *(short *)0xC17912C;
                if ((*(int *)((((*(int *)(((int)stk + 24))) << 2) + ((unsigned short)(((((t1562 << 2) << 2) + t1562) << 2) << 1) + 0xC0F4588)))) == -1) {
                    break;
                }
                t1565 = *(short *)0xC17912C;
                t1567 = *(int *)((((0xC0F4588 + (unsigned short)(((((t1565 << 2) << 2) + t1565) << 2) << 1)) + (*(int *)(((int)stk + 28)))) + 0x0));
                *(unsigned int *)(((int)stk + 20)) = t1567;
                *(unsigned int *)(((int)stk + 40)) = (((t1567 << 2) + t1567) << 2);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x2C)) = *(struct mv3 *)((((((t1567 << 2) + t1567) << 2) + (*(int *)0xC1EE800)) + 0x4)); }
                nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20));
                t1571 = *(int *)(((int)stk + 40));
                t1572 = *(int *)0xC1EE800;
                u1561 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                if ((CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1571 + t1572) + 0x0))))) != 0) {
                    t1575 = *(int *)(((int)stk + 20));
                    if ((PutCourse_CheckPiece((*(int *)(((int)stk + 20))), (*(int *)0xC2A6EC0), 0x0, (((int)stk + 20) + 0x2C), u1561, (*(float *)(((int)stk + 52))), (*(float *)((((((t1575 << 2) + t1575) << 2) + (*(int *)0xC1EE800)) + 0x0))))) == 1) {
                        gdc_CoursePut((*(int *)(((int)stk + 20))), 0x0, u1561);
                    }
                }
                *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
            }
            u1594 = u1561;
        }
        getPieceWindow((((int)stk + 4) + 0x28), 0xC124448, 0xC0C8410, 0xC0C8418, 0xF0, (((int)stk + 12) + 0x14), (((int)stk + 16) + 0x20), (((int)stk + 20) + 0x10));
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        t1596 = *(int *)0xC17912C;
        if (((int)t1596 > (int)0x34) && ((((int)t1596 < (int)0x96) || ((int)t1596 > (int)0x9B)) && ((((int)t1596 < (int)0x9F) || ((int)t1596 > (int)0xAB)) && (((int)t1596 < (int)0xCD) || ((int)t1596 > (int)0x12C))))) {
            if ((int)t1596 < (int)0x14C) {
                t1597 = 0x60;
                t1598 = 0x34;
                t1599 = 0xC1790CC;
                u1600 = u1594;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)(((int)stk + 36)))) {
                        break;
                    }
                    t1597 = 0xF0;
                    t1598 = (*(int *)(((int)stk + 24)));
                    t1597 = ((int)((int)((*(int *)(((int)stk + 32))) + t1598) % (int)t1597));
                    *(unsigned int *)(((int)stk + 20)) = (((t1597 << 2) + t1597) << 2);
                    t1599 = t1597;
                    t1607 = (((((t1597 << 2) + t1597) << 2) + (*(int *)0xC1EE804)) + 0x4);
                    t1597 = 0xC;
                    t1608 = 0;
                    for (; t1608 < (int)t1597; t1608++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t1608) = *(unsigned char *)(t1607 + t1608);
                    t1597 = (nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20)));
                    t1611 = *(int *)(((int)stk + 20));
                    t1598 = (*(int *)0xC1EE804);
                    u1600 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                    t1597 = (CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1611 + t1598) + 0x0)))));
                    if (t1597 != 0) {
                        t1597 = 0x20;
                        t1598 = (*(int *)0xC1EE804);
                        t1597 = (PutCourse_CheckPiece(t1599, (*(int *)0xC2A6EC0), 0x1, (((int)stk + 20) + 0x2C), u1600, (*(float *)((((int)stk + 20) + t1597))), (*(float *)((((*(int *)(((int)stk + 20))) + t1598) + 0x0)))));
                        if (t1597 == 1) {
                            t1597 = (gdc_CoursePut(t1599, 0x1, u1600));
                        }
                    }
                    t1598 = (*(int *)(((int)stk + 24)));
                    t1598 = (t1598 + 0x1);
                    *(unsigned int *)(((int)stk + 24)) = t1598;
                }
                t1688 = t1597;
            } else {
                if ((int)t1596 > (int)0x162) {
                    t1625 = 0x60;
                    t1626 = 0x34;
                    t1627 = 0xC1790CC;
                    u1628 = u1594;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)(((int)stk + 36)))) {
                            break;
                        }
                        t1625 = 0xF0;
                        t1626 = (*(int *)(((int)stk + 24)));
                        t1625 = ((int)((int)((*(int *)(((int)stk + 32))) + t1626) % (int)t1625));
                        *(unsigned int *)(((int)stk + 20)) = (((t1625 << 2) + t1625) << 2);
                        t1627 = t1625;
                        t1635 = (((((t1625 << 2) + t1625) << 2) + (*(int *)0xC1EE804)) + 0x4);
                        t1625 = 0xC;
                        t1636 = 0;
                        for (; t1636 < (int)t1625; t1636++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t1636) = *(unsigned char *)(t1635 + t1636);
                        t1625 = (nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20)));
                        t1639 = *(int *)(((int)stk + 20));
                        t1626 = (*(int *)0xC1EE804);
                        u1628 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                        t1625 = (CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1639 + t1626) + 0x0)))));
                        if (t1625 != 0) {
                            t1625 = 0x20;
                            t1626 = (*(int *)0xC1EE804);
                            t1625 = (PutCourse_CheckPiece(t1627, (*(int *)0xC2A6EC0), 0x1, (((int)stk + 20) + 0x2C), u1628, (*(float *)((((int)stk + 20) + t1625))), (*(float *)((((*(int *)(((int)stk + 20))) + t1626) + 0x0)))));
                            if (t1625 == 1) {
                                t1625 = (gdc_CoursePut(t1627, 0x1, u1628));
                            }
                        }
                        t1626 = (*(int *)(((int)stk + 24)));
                        t1626 = (t1626 + 0x1);
                        *(unsigned int *)(((int)stk + 24)) = t1626;
                    }
                    t1682 = t1625;
                } else {
                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                    u1653 = u1594;
                    for (;;) {
                        t1654 = *(short *)0xC17912C;
                        t1656 = *(int *)((((*(int *)(((int)stk + 24))) << 2) + ((unsigned short)(((((t1654 << 2) << 2) + t1654) << 2) << 1) + 0xC100F68)));
                        if (t1656 == -1) {
                            break;
                        }
                        t1657 = *(short *)0xC17912C;
                        t1659 = *(int *)((((0xC100F68 + (unsigned short)(((((t1657 << 2) << 2) + t1657) << 2) << 1)) + (*(int *)(((int)stk + 28)))) + 0x0));
                        *(unsigned int *)(((int)stk + 20)) = t1659;
                        *(unsigned int *)(((int)stk + 40)) = (((t1659 << 2) + t1659) << 2);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x2C)) = *(struct mv3 *)((((((t1659 << 2) + t1659) << 2) + (*(int *)0xC1EE804)) + 0x4)); }
                        nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20));
                        t1663 = *(int *)(((int)stk + 40));
                        t1664 = *(int *)0xC1EE804;
                        u1653 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                        if ((CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1663 + t1664) + 0x0))))) != 0) {
                            t1667 = *(int *)(((int)stk + 20));
                            if ((PutCourse_CheckPiece((*(int *)(((int)stk + 20))), (*(int *)0xC2A6EC0), 0x1, (((int)stk + 20) + 0x2C), u1653, (*(float *)(((int)stk + 52))), (*(float *)((((((t1667 << 2) + t1667) << 2) + (*(int *)0xC1EE804)) + 0x0))))) == 1) {
                                gdc_CoursePut((*(int *)(((int)stk + 20))), 0x1, u1653);
                            }
                        }
                        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
                    }
                    t1682 = t1656;
                }
                t1688 = t1682;
            }
            t1723 = t1688;
        } else {
            *(unsigned int *)(((int)stk + 28)) = 0x0;
            u1694 = u1594;
            for (;;) {
                t1695 = *(short *)0xC17912C;
                t1697 = *(int *)((((*(int *)(((int)stk + 24))) << 2) + ((unsigned short)(((((t1695 << 2) << 2) + t1695) << 2) << 1) + 0xC100F68)));
                if (t1697 == -1) {
                    break;
                }
                t1698 = *(short *)0xC17912C;
                t1700 = *(int *)((((0xC100F68 + (unsigned short)(((((t1698 << 2) << 2) + t1698) << 2) << 1)) + (*(int *)(((int)stk + 28)))) + 0x0));
                *(unsigned int *)(((int)stk + 20)) = t1700;
                *(unsigned int *)(((int)stk + 40)) = (((t1700 << 2) + t1700) << 2);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x2C)) = *(struct mv3 *)((((((t1700 << 2) + t1700) << 2) + (*(int *)0xC1EE804)) + 0x4)); }
                nlProjectScreen3D((((int)stk + 20) + 0x2C), (((int)stk + 20) + 0x20));
                t1704 = *(int *)(((int)stk + 40));
                t1705 = *(int *)0xC1EE804;
                u1694 = (nlLength((((int)stk + 20) + 0x2C), 0xC179840));
                if ((CheckClipping((((int)stk + 20) + 0x2C), (*(float *)(((t1704 + t1705) + 0x0))))) != 0) {
                    t1708 = *(int *)(((int)stk + 20));
                    if ((PutCourse_CheckPiece((*(int *)(((int)stk + 20))), (*(int *)0xC2A6EC0), 0x1, (((int)stk + 20) + 0x2C), u1694, (*(float *)(((int)stk + 52))), (*(float *)((((((t1708 << 2) + t1708) << 2) + (*(int *)0xC1EE804)) + 0x0))))) == 1) {
                        gdc_CoursePut((*(int *)(((int)stk + 20))), 0x1, u1694);
                    }
                }
                *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
            }
            t1723 = t1697;
        }
        t1729 = t1723;
    }
    return t1729;
}
