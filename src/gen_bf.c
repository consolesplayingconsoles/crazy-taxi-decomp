/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int);
int FUN_0c05db72(void);
int kyakuInDestArea2(int a4);

int kyakuInDestArea2(int a4)
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
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
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
    int t55;
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
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
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
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t202;
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
    int t225;
    int t226;
    int t227;
    int t228;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
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
    int t257;
    int t258;
    int t259;
    int t260;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t281;
    int t282;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t292;
    int t293;
    int t294;
    int t295;
    int t296;
    int t297;
    int t298;
    int t299;
    int t300;
    int t301;
    int t302;
    int t303;
    int t304;
    int t305;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    int t311;
    int t312;
    int t313;
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
    int t332;
    int t333;
    int t334;
    int t335;
    int t336;
    int t337;
    int t338;
    int t339;
    int t340;
    int t341;
    int t342;
    int t343;
    int t344;
    int t345;
    int t346;
    int t347;
    int t348;
    int t349;
    int t350;
    int t351;
    int t352;
    int t353;
    int t354;
    int t355;
    int t356;
    int t357;
    int t358;
    int t359;
    int t360;
    int t361;
    int t362;
    int t363;
    int t364;
    int t365;
    int t366;
    int t367;
    int t368;
    int t369;
    int t370;
    int t371;
    int t372;
    int t373;
    int t374;
    int t375;
    int t376;
    int t377;
    int t378;
    int t379;
    int t380;
    int t381;
    int t382;
    int t383;
    int t384;
    int t385;
    int t386;
    int t387;
    int t388;
    int t389;
    int t390;
    int t391;
    int t392;
    int t393;
    int t394;
    int t395;
    int t396;
    int t397;
    int t398;
    int t399;
    int t400;
    int t401;
    int t402;
    int t403;
    int t404;
    int t405;
    int t406;
    int t407;
    int t408;
    int t409;
    int t410;
    int t411;
    int t412;
    int t413;
    int t414;
    int t415;
    int t416;
    int t417;
    int t418;
    int t419;
    int t420;
    int t421;
    int t422;
    int t423;
    int t424;
    int t425;
    int t426;
    int t427;
    int t428;
    int t429;
    int t430;
    int t431;
    int t432;
    int t433;
    int t434;
    int t435;
    int t436;
    int t437;
    int t438;
    int t439;
    int t440;
    int t441;
    int t442;
    int t443;
    int t444;
    int t445;
    int t446;
    int t447;
    int t448;
    int t449;
    int t450;
    int t451;
    int t452;
    int t453;
    int t454;
    int t455;
    int t456;
    int t457;
    int t458;
    int t459;
    int t460;
    int t461;
    int t462;
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
    int t477;
    int t478;
    int t479;
    int t480;
    int t481;
    int t482;
    int t483;
    int t484;
    int t485;
    int t486;
    int t487;
    int t488;
    int t489;
    int t490;
    int t491;
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
    int t503;
    int t504;
    int t505;
    int t506;
    int t507;
    int t508;
    int t509;
    int t510;
    int t511;
    int t512;
    int t513;
    int t514;
    int t515;
    int t516;
    int t517;
    int t518;
    int t519;
    int t520;
    int t521;
    int t522;
    int t523;
    int t524;
    int t525;
    int t526;
    int t527;
    int t528;
    int t529;
    int t530;
    int t531;
    int t532;
    int t533;
    int t534;
    int t535;
    int t536;
    int t537;
    int t538;
    int t539;
    int t540;
    int t541;
    int t542;
    int t543;
    int t544;
    int t545;
    int t546;
    int t547;
    int t548;
    int t549;
    int t550;
    int t551;
    int t552;
    int t553;
    int t554;
    int t555;
    int t556;
    int t557;
    int t558;
    int t559;
    int t560;
    int t561;
    int t562;
    int t563;
    int t564;
    int t565;
    int t566;
    int t567;
    int t568;
    int t569;
    int t570;
    int t571;
    int t572;
    int t573;
    int t574;
    int t575;
    int t576;
    int t577;
    int t578;
    int t579;
    int t580;
    int t581;
    int t582;
    int t583;
    int t584;
    int t585;
    int t586;
    int t587;
    int t588;
    int t589;
    int t590;
    int t591;
    int t592;
    int t593;
    int t594;
    int t595;
    int t596;
    int t597;
    int t598;
    int t599;
    int t600;
    int t601;
    int t602;
    int t603;
    int t604;
    int t605;
    int t606;
    int t607;
    int t608;
    int t609;
    int t610;
    int t611;
    int t612;
    int t613;
    int t614;
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
    int t641;
    int t642;
    int t643;
    int t644;
    int t645;
    int t646;
    int t647;
    int t648;
    int t649;
    int t650;
    int t651;
    int t652;
    int t653;
    int t654;
    int t655;
    int t656;
    int t657;
    int t658;
    int t659;
    int t660;
    int t661;
    int t662;
    int t663;
    int t664;
    int t665;
    int t666;
    int t667;
    int t668;
    int t669;
    int t670;
    int t671;
    int t672;
    int t673;
    int t674;
    int t675;
    int t676;
    int t677;
    int t678;
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
    int t689;
    int t690;
    int t691;
    int t692;
    int t693;
    int t694;
    int t695;
    int t696;
    int t697;
    int t698;
    int t699;
    int t700;
    int t701;
    int t702;
    int t703;
    int t704;
    int t705;
    int t706;
    int t707;
    int t708;
    int t709;
    int t710;
    int t711;
    int t712;
    int t713;
    int t714;
    int t715;
    int t716;
    int t717;
    int t718;
    int t719;
    int t720;
    int t721;
    int t722;
    int t723;
    int t724;
    int t725;
    int t726;
    int t727;
    int t728;
    int t729;
    int t730;
    int t731;
    int t732;
    int t733;
    int t734;
    int t735;
    int t736;
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
    int t748;
    int t749;
    int t750;
    int t751;
    int t752;
    int t753;
    int t754;
    int t755;
    int t756;
    int t757;
    int t758;
    int t759;
    int t760;
    int t761;
    int t762;
    int t763;
    int t764;
    int t765;
    int t766;
    int t767;
    int t768;
    int t769;
    int t770;
    int t771;
    int t772;
    int t773;
    int t774;
    int t775;
    int t776;
    int t777;
    int t778;
    int t779;
    int t780;
    int t781;
    int t782;
    int t783;
    int t784;
    int t785;
    int t786;
    int t787;
    int t788;
    int t789;
    int t790;
    int t791;
    int t792;
    int t793;
    int t794;
    int t795;
    int t796;
    int t797;
    int t798;
    int t799;
    int t800;
    int t801;
    int t802;
    int t803;
    int t804;
    int t805;
    int t806;
    int t807;
    int t808;
    int t809;
    int t810;
    int t811;
    int t812;
    int t813;
    int t814;
    int t815;
    int t816;
    int t817;
    int t818;
    int t819;
    int t820;
    int t821;
    int t822;
    int t823;
    int t824;
    int t825;
    int t826;
    int t827;
    int t828;
    int t829;
    int t830;
    int t831;
    int t832;
    int t833;
    int t834;
    int t835;
    int t836;
    int t837;
    int t838;
    int t839;
    int t840;
    int t841;
    int t842;
    int t843;
    int t844;
    int t845;
    int t846;
    int t847;
    int t848;
    int t849;
    int t850;
    int t851;
    int t852;
    int t853;
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
    int t864;
    int t865;
    int t866;
    int t867;
    int t868;
    int t869;
    int t870;
    int t871;
    int t872;
    int t873;
    int t874;
    int t875;
    int t876;
    int t877;
    int t878;
    int t879;
    int t880;
    int t881;
    int t882;
    int t883;
    int t884;
    int t885;
    int t886;
    int t887;
    int t888;
    int t889;
    int t890;
    int t891;
    int t892;
    int t893;
    int t894;
    int t895;
    int t896;
    int t897;
    int t898;
    int t899;
    int t900;
    int t901;
    int t902;
    int t903;
    int t904;
    int t905;
    int t906;
    int t907;
    int t908;
    int t909;
    int t910;
    int t911;
    int t912;
    int t913;
    int t914;
    int t915;
    int t916;
    int t917;
    int t918;
    int t919;
    int t920;
    int t921;
    int t922;
    int t923;
    int t924;
    int t925;
    int t926;
    int t927;
    int t928;
    int t929;
    int t930;
    int t931;
    int t932;
    int t933;
    int t934;
    int t935;
    int t936;
    int t937;
    int t938;
    int t939;
    int t940;
    int t941;
    int t942;
    int t943;
    int t944;
    int t945;
    int t946;
    int t947;
    int t948;
    int t949;
    int t950;
    int t951;
    int t952;
    int t953;
    int t954;
    int t955;
    int t956;
    int t957;
    int t958;
    int t959;
    int t960;
    int t961;
    int t962;
    int t963;
    int t964;
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
    int t976;
    int t977;
    int t978;
    int t979;
    int t980;
    int t981;
    int t982;
    int t983;
    int t984;
    int t985;
    int t986;
    int t987;
    int t988;
    int t989;
    int t990;
    int t991;
    int t992;
    int t993;
    int t994;
    int t995;
    int t996;
    int t997;
    int t998;
    int t999;
    int t1000;
    int t1001;
    int t1002;
    int t1003;
    int t1004;
    int t1005;
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
    int t1016;
    int t1017;
    int t1018;
    int t1019;
    int t1020;
    int t1021;
    int t1022;
    int t1023;
    int t1024;
    int t1025;
    int t1026;
    int t1027;
    int t1028;
    int t1029;
    int t1030;
    int t1031;
    int t1032;
    int t1033;
    int t1034;
    int t1035;
    int t1036;
    int t1037;
    int t1038;
    int t1039;
    int t1040;
    int t1041;
    int t1042;
    int t1043;
    int t1044;
    int t1045;
    int t1046;
    int t1047;
    int t1048;
    int t1049;
    int t1050;
    int t1051;
    int t1052;
    int t1053;
    int t1054;
    int t1055;
    int t1056;
    int t1057;
    int t1058;
    int t1059;
    int t1060;
    int t1061;
    int t1062;
    int t1063;
    int t1064;
    int t1065;
    int t1066;
    int t1067;
    int t1068;
    int t1069;
    int t1070;
    int t1071;
    int t1072;
    int t1073;
    int t1074;
    int t1075;
    int t1076;
    int t1077;
    int t1078;
    int t1079;
    int t1080;
    int t1081;
    int t1082;
    int t1083;
    int t1084;
    int t1085;
    int t1086;
    int t1087;
    int t1088;
    int t1089;
    int t1090;
    int t1091;
    int t1092;
    int t1093;
    int t1094;
    int t1095;
    int t1096;
    int t1097;
    int t1098;
    int t1099;
    int t1100;
    int t1101;
    int t1102;
    int t1103;
    int t1104;
    int t1105;
    int t1106;
    int t1107;
    int t1108;
    int t1109;
    int t1110;
    int t1111;
    int t1112;
    int t1113;
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
    int t1124;
    int t1125;
    int t1126;
    int t1127;
    int t1128;
    int t1129;
    int t1130;
    int t1131;
    int t1132;
    int t1133;
    int t1134;
    int t1135;
    int t1136;
    int t1137;
    int t1138;
    int t1139;
    int t1140;
    int t1141;
    int t1142;
    int t1143;
    int t1144;
    int t1145;
    int t1146;
    int t1147;
    int t1148;
    int t1149;
    int t1150;
    int t1151;
    int t1152;
    int t1153;
    int t1154;
    int t1155;
    int t1156;
    int t1157;
    int t1158;
    int t1159;
    int t1160;
    int t1161;
    int t1162;
    int t1163;
    int t1164;
    int t1165;
    int t1166;
    int t1167;
    int t1168;
    int t1169;
    int t1170;
    int t1171;
    int t1172;
    int t1173;
    int t1174;
    int t1175;
    int t1176;
    int t1177;
    int t1178;
    int t1179;
    int t1180;
    int t1181;
    int t1182;
    int t1183;
    int t1184;
    int t1185;
    int t1186;
    int t1187;
    int t1188;
    int t1189;
    int t1190;
    int t1191;
    int t1192;
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
    int t1204;
    int t1205;
    int t1206;
    int t1207;
    int t1208;
    int t1209;
    int t1210;
    int t1211;
    int t1212;
    int t1213;
    int t1214;
    int t1215;
    int t1216;
    int t1217;
    int t1218;
    int t1219;
    int t1220;
    int t1221;
    int t1222;
    int t1223;
    int t1224;
    int t1225;
    int t1226;
    int t1227;
    int t1228;
    int t1229;
    int t1230;
    int t1231;
    int t1232;
    int t1233;
    int t1234;
    int t1235;
    int t1236;
    int t1237;
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
    int t1248;
    int t1249;
    int t1250;
    int t1251;
    int t1252;
    int t1253;
    int t1254;
    int t1255;
    int t1256;
    int t1257;
    int t1258;
    int t1259;
    int t1260;
    int t1261;
    int t1262;
    int t1263;
    int t1264;
    int t1265;
    int t1266;
    int t1267;
    int t1268;
    int t1269;
    int t1270;
    int t1271;
    int t1272;
    int t1273;
    int t1274;
    int t1275;
    int t1276;
    int t1277;
    int t1278;
    int t1279;
    int t1280;
    int t1281;
    int t1282;
    int t1283;
    int t1284;
    int t1285;
    int t1286;
    int t1287;
    int t1288;
    int t1289;
    int t1290;
    int t1291;
    int t1292;
    int t1293;
    int t1294;
    int t1295;
    int t1296;
    int t1297;
    int t1298;
    int t1299;
    int t1300;
    int t1301;
    int t1302;
    int t1303;
    int t1304;
    int t1305;
    int t1306;
    int t1307;
    int t1308;
    int t1309;
    int t1310;
    int t1311;
    int t1312;
    int t1313;
    int t1314;
    int t1315;
    int t1316;
    int t1317;
    int t1318;
    int t1319;
    int t1320;
    int t1321;
    int t1322;
    int t1323;
    int t1324;
    int t1325;
    int t1326;
    int t1327;
    int t1328;
    int t1329;
    int t1330;
    int t1331;
    int t1332;
    int t1333;
    int t1334;
    int t1335;
    int t1336;
    int t1337;
    int t1338;
    int t1339;
    int t1340;
    int t1341;
    int t1342;
    int t1343;
    int t1344;
    int t1345;
    int t1346;
    int t1347;
    int t1348;
    int t1349;
    int t1350;
    int t1351;
    int t1352;
    int t1353;
    int t1354;
    int t1355;
    int t1356;
    int t1357;
    int t1358;
    int t1359;
    int t1360;
    int t1361;
    int t1362;
    int t1363;
    int t1364;
    int t1365;
    int t1366;
    int t1367;
    int t1368;
    int t1369;
    int t1370;
    int t1371;
    int t1372;
    int t1373;
    int t1374;
    int t1375;
    int t1376;
    int t1377;
    int t1378;
    int t1379;
    int t1380;
    int t1381;
    int t1382;
    int t1383;
    int t1384;
    int t1385;
    int t1386;
    int t1387;
    int t1388;
    int t1389;
    int t1390;
    int t1391;
    int t1392;
    int t1393;
    int t1394;
    int t1395;
    int t1396;
    int t1397;
    int t1398;
    int t1399;
    int t1400;
    int t1401;
    int t1402;
    int t1403;
    int t1404;
    int t1405;
    int t1406;
    int t1407;
    int t1408;
    int t1409;
    int t1410;
    int t1411;
    int t1412;
    int t1413;
    int t1414;
    int t1415;
    int t1416;
    int t1417;
    int t1418;
    int t1419;
    int t1420;
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
    int t1432;
    int t1433;
    int t1434;
    int t1435;
    int t1436;
    int t1437;
    int t1438;
    int t1439;
    int t1440;
    int t1441;
    int t1442;
    int t1443;
    int t1444;
    int t1445;
    int t1446;
    int t1447;
    int t1448;
    int t1449;
    int t1450;
    int t1451;
    int t1452;
    int t1453;
    int t1454;
    int t1455;
    int t1456;
    int t1457;
    int t1458;
    int t1459;
    int t1460;
    int t1461;
    int t1462;
    int t1463;
    int t1464;
    int t1465;
    int t1466;
    int t1467;
    int t1468;
    int t1469;
    int t1470;
    int t1471;
    int t1472;
    int t1473;
    int t1474;
    int t1475;
    int t1476;
    int t1477;
    int t1478;
    int t1479;
    int t1480;
    int t1481;
    int t1482;
    int t1483;
    int t1484;
    int t1485;
    int t1486;
    int t1487;
    int t1488;
    int t1489;
    int t1490;
    int t1491;
    int t1492;
    int t1493;
    int t1494;
    int t1495;
    int t1496;
    int t1497;
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
    int t1508;
    int t1509;
    int t1510;
    int t1511;
    int t1512;
    int t1513;
    int t1514;
    int t1515;
    int t1516;
    int t1517;
    int t1518;
    int t1519;
    int t1520;
    int t1521;
    int t1522;
    int t1523;
    int t1524;
    int t1525;
    int t1526;
    int t1527;
    int t1528;
    int t1529;
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
    int t1544;
    int t1545;
    int t1546;
    int t1547;
    int t1548;
    int t1549;
    int t1550;
    int t1551;
    int t1552;
    int t1553;
    int t1554;
    int t1555;
    int t1556;
    int t1557;
    int t1558;
    int t1559;
    int t1560;
    int t1561;
    int t1562;
    int t1563;
    int t1564;
    int t1565;
    int t1566;
    int t1567;
    int t1568;
    int t1569;
    int t1570;
    int t1571;
    int t1572;
    int t1573;
    int t1574;
    int t1575;
    int t1576;
    int t1577;
    int t1578;
    int t1579;
    int t1580;
    int t1581;
    int t1582;
    int t1583;
    int t1584;
    int t1585;
    int t1586;
    int t1587;
    int t1588;
    int t1589;
    int t1590;
    int t1591;
    int t1592;
    int t1593;
    int t1594;
    int t1595;
    int t1596;
    int t1597;
    int t1598;
    int t1599;
    int t1600;
    int t1601;
    int t1602;
    int t1603;
    int t1604;
    int t1605;
    int t1606;
    int t1607;
    int t1608;
    int t1609;
    int t1610;
    int t1611;
    int t1612;
    int t1613;
    int t1614;
    int t1615;
    int t1616;
    int t1617;
    int t1618;
    int t1619;
    int t1620;
    int t1621;
    int t1622;
    int t1623;
    int t1624;
    int t1625;
    int t1626;
    int t1627;
    int t1628;
    int t1629;
    int t1630;
    int t1631;
    int t1632;
    int t1633;
    int t1634;
    int t1635;
    int t1636;
    int t1637;
    int t1638;
    int t1639;
    int t1640;
    int t1641;
    int t1642;
    int t1643;
    int t1644;
    int t1645;
    int t1646;
    int t1647;
    int t1648;
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
    int t1663;
    int t1664;
    int t1665;
    int t1666;
    int t1667;
    int t1668;
    int t1669;
    int t1670;
    int t1671;
    int t1672;
    int t1673;
    int t1674;
    int t1675;
    int t1676;
    int t1677;
    int t1678;
    int t1679;
    int t1680;
    int t1681;
    int t1682;
    int t1683;
    int t1684;
    int t1685;
    int t1686;
    int t1687;
    int t1688;
    int t1689;
    int t1690;
    int t1691;
    int t1692;
    int t1693;
    int t1694;
    int t1695;
    int t1696;
    int t1697;
    int t1698;
    int t1699;
    int t1700;
    int t1701;
    int t1702;
    int t1703;
    int t1704;
    int t1705;
    int t1706;
    int t1707;
    int t1708;
    int t1709;
    int t1710;
    int t1711;
    int t1712;
    int t1713;
    int t1714;
    int t1715;
    int t1716;
    int t1717;
    int t1718;
    int t1719;
    int t1720;
    int t1721;
    int t1722;
    int t1723;
    int t1724;
    int t1725;
    int t1726;
    int t1727;
    int t1728;
    int t1729;
    int t1730;
    int t1731;
    int t1732;
    int t1733;
    int t1734;
    int t1735;
    int t1736;
    int t1737;
    int t1738;
    int t1739;
    int t1740;
    int t1741;
    int t1742;
    int t1743;
    int t1744;
    int t1745;
    int t1746;
    int t1747;
    int t1748;
    int t1749;
    int t1750;
    int t1751;
    int t1752;
    int t1753;
    int t1754;
    int t1755;
    int t1756;
    int t1757;
    int t1758;
    int t1759;
    int t1760;
    int t1761;
    int t1762;
    int t1763;
    int t1764;
    int t1765;
    int t1766;
    int t1767;
    int t1768;
    int t1769;
    int t1770;
    int t1771;
    int t1772;
    int t1773;
    int t1774;
    int t1775;
    int t1776;
    int t1777;
    int t1778;
    int t1779;
    int t1780;
    int t1781;
    int t1782;
    int t1783;
    int t1784;
    int t1785;
    int t1786;
    int t1787;
    int t1788;
    int t1789;
    int t1790;
    int t1791;
    int t1792;
    int t1793;
    int t1794;
    int t1795;
    int t1796;
    int t1797;
    int t1798;
    int t1799;
    int t1800;
    int t1801;
    int t1802;
    int t1803;
    int t1804;
    int t1805;
    int t1806;
    int t1807;
    int t1808;
    int t1809;
    int t1810;
    int t1811;
    int t1812;
    int t1813;
    int t1814;
    int t1815;
    int t1816;
    int t1817;
    int t1818;
    int t1819;
    int t1820;
    int t1821;
    int t1822;
    int t1823;
    int t1824;
    int t1825;
    int t1826;
    int t1827;
    int t1828;
    int t1829;
    int t1830;
    int t1831;
    int t1832;
    int t1833;
    int t1834;
    int t1835;
    int t1836;
    int t1837;
    int t1838;
    int t1839;
    int t1840;
    int t1841;
    int t1842;
    int t1843;
    int t1844;
    int t1845;
    int t1846;
    int t1847;
    int t1848;
    int t1849;
    int t1850;
    int t1851;
    int t1852;
    int t1853;
    int t1854;
    int t1855;
    int t1856;
    int t1857;
    int t1858;
    int t1859;
    int t1860;
    int t1861;
    int t1862;
    int t1863;
    int t1864;
    int t1865;
    int t1866;
    int t1867;
    int t1868;
    int t1869;
    int t1870;
    int t1871;
    int t1872;
    int t1873;
    int t1874;
    int t1875;
    int t1876;
    int t1877;
    int t1878;
    int t1879;
    int t1880;
    int t1881;
    int t1882;
    int t1883;
    int t1884;
    int t1885;
    int t1886;
    int t1887;
    int t1888;
    int t1889;
    int t1890;
    int t1891;
    int t1892;
    int t1893;
    int t1894;
    int t1895;
    int t1896;
    int t1897;
    int t1898;
    int t1899;
    int t1900;
    int t1901;
    int t1902;
    int t1903;
    int t1904;
    int t1905;
    int t1906;
    int t1907;
    int t1908;
    int t1909;
    int t1910;
    int t1911;
    int t1912;
    int t1913;
    int t1914;
    int t1915;
    int t1916;
    int t1917;
    int t1918;
    int t1919;
    int t1920;
    int t1921;
    int t1922;
    int t1923;
    int t1924;
    int t1925;
    int t1926;
    int t1927;
    int t1928;
    int t1929;
    int t1930;
    int t1931;
    int t1932;
    int t1933;
    int t1934;
    int t1935;
    int t1936;
    int t1937;
    int t1938;
    int t1939;
    int t1940;
    int t1941;
    int t1942;
    int t1943;
    int t1944;
    int t1945;
    int t1946;
    int t1947;
    int t1948;
    int t1949;
    int t1950;
    int t1951;
    int t1952;
    int t1953;
    int t1954;
    int t1955;
    int t1956;
    int t1957;
    int t1958;
    int t1959;
    int t1960;
    int t1961;
    int t1962;
    int t1963;
    int t1964;
    int t1965;
    int t1966;
    int t1967;
    int t1968;
    int t1969;
    int t1970;
    int t1971;
    int t1972;
    int t1973;
    int t1974;
    int t1975;
    int t1976;
    int t1977;
    int t1978;
    int t1979;
    int t1980;
    int t1981;
    int t1982;
    int t1983;
    int t1984;
    int t1985;
    int t1986;
    int t1987;
    int t1988;
    int t1989;
    int t1990;
    int t1991;
    int t1992;
    int t1993;
    int t1994;
    int t1995;
    int t1996;
    int t1997;
    int t1998;
    int t1999;
    int t2000;
    int t2001;
    int t2002;
    int t2003;
    int t2004;
    int t2005;
    int t2006;
    int t2007;
    int t2008;
    int t2009;
    int t2010;
    int t2011;
    int t2012;
    int t2013;
    int t2014;
    int t2015;
    int t2016;
    int t2017;
    int t2018;
    int t2019;
    int t2020;
    int t2021;
    int t2022;
    int t2023;
    int t2024;
    int t2025;
    int t2026;
    int t2027;
    int t2028;
    int t2029;
    int t2030;
    int t2031;
    int t2032;
    int t2033;
    int t2034;
    int t2035;
    int t2036;
    int t2037;
    int t2038;
    int t2039;
    int t2040;
    int t2041;
    int t2042;
    int t2043;
    int t2044;
    int t2045;
    int t2046;
    int t2047;
    int t2048;
    int t2049;
    int t2050;
    int t2051;
    int t2052;
    int t2053;
    int t2054;
    int t2055;
    int t2056;
    int t2057;
    int t2058;
    int t2059;
    int t2060;
    int t2061;
    int t2062;
    int t2063;
    int t2064;
    int t2065;
    int t2066;
    int t2067;
    int t2068;
    int t2069;
    int t2070;
    int t2071;
    int t2072;
    int t2073;
    int t2074;
    int t2075;
    int t2076;
    int t2077;
    int t2078;
    int t2079;
    int t2080;
    int t2081;
    int t2082;
    int t2083;
    int t2084;
    int t2085;
    int t2086;
    int t2087;
    int t2088;
    int t2089;
    int t2090;
    int t2091;
    int t2092;
    int t2093;
    int t2094;
    int t2095;
    int t2096;
    int t2097;
    int t2098;
    int t2099;
    int t2100;
    int t2101;
    int t2102;
    int t2103;
    int t2104;
    int t2105;
    int t2106;
    int t2107;
    int t2108;
    int t2109;
    int t2110;
    int t2111;
    int t2112;
    int t2113;
    int t2114;
    int t2115;
    int t2116;
    int t2117;
    int t2118;
    int t2119;
    int t2120;
    int t2121;
    int t2122;
    int t2123;
    int t2124;
    int t2125;
    int t2126;
    int t2127;
    int t2128;
    int t2129;
    int t2130;
    int t2131;
    int t2132;
    int t2133;
    int t2134;
    int t2135;
    int t2136;
    int t2137;
    int t2138;
    int t2139;
    int t2140;
    int t2141;
    int t2142;
    int t2143;
    int t2144;
    int t2145;
    int t2146;
    int t2147;
    int t2148;
    int t2149;
    int t2150;
    int t2151;
    int t2152;
    int t2153;
    int t2154;
    int t2155;
    int t2156;
    int t2157;
    int t2158;
    int t2159;
    int t2160;
    int t2161;
    int t2162;
    int t2163;
    int t2164;
    int t2165;
    int t2166;
    int t2167;
    int t2168;
    int t2169;
    int t2170;
    int t2171;
    int t2172;
    int t2173;
    int t2174;
    int t2175;
    int t2176;
    int t2177;
    int t2178;
    int t2179;
    int t2180;
    int t2181;
    int t2182;
    int t2183;
    int t2184;
    int t2185;
    int t2186;
    int t2187;
    int t2188;
    int t2189;
    int t2190;
    int t2191;
    int t2192;
    int t2193;
    int t2194;
    int t2195;
    int t2196;
    int t2197;
    int t2198;
    int t2199;
    int t2200;
    int t2201;
    int t2202;
    int t2203;
    int t2204;
    int t2205;
    int t2206;
    int t2207;
    int t2208;
    int t2209;
    int t2210;
    int t2211;
    int t2212;
    int t2213;
    int t2214;
    int t2215;
    int t2216;
    int t2217;
    int t2218;
    int t2219;
    int t2220;
    int t2221;
    int t2222;
    int t2223;
    int t2224;
    int t2225;
    int t2226;
    int t2227;
    int t2228;
    int t2229;
    int t2230;
    int t2231;
    int t2232;
    int t2233;

    t0 = *(int *)0xC1EE20C;
    if (t0 == 2) {
        t1 = *(int *)0xC1EE214;
        if (t1 == 11) {
            t2 = *(int *)((a4 + 0x198));
            t3 = *(int *)((t2 + 0x0));
            t4 = *(int *)0xC2A98FC;
            if (t4 != t3) {
                t5 = *(int *)0xC1EE20C;
                if (t5 == 2) {
                    t6 = *(int *)0xC1EE214;
                    if (t6 == 14) {
                        t7 = *(int *)((a4 + 0x198));
                        t8 = *(int *)((t7 + 0x0));
                        t9 = *(int *)0xC2A98FC;
                        if (t9 == t8) {
                            t10 = FUN_0c05db72();
                            t11 = *(int *)0xC2A9900;
                            if (t10 != t11) {
                                t12 = *(int *)0xC1EE20C;
                                if (t12 == 2) {
                                    t13 = *(int *)0xC1EE214;
                                    if (t13 != 11) {
                                        t14 = *(int *)0xC1EE214;
                                        if (t14 != 10) {
                                            t15 = *(int *)0xC1EE214;
                                            if (t15 != 14) {
                                                t16 = *(int *)0xC1EE20C;
                                                if (t16 == 0) {
                                                    t17 = *(int *)0xC1EE214;
                                                    if (t17 != 15) {
                                                        t18 = *(int *)((a4 + 0x198));
                                                        t19 = *(int *)((a4 + 0x18));
                                                        t20 = *(int *)((t18 + 0x0));
                                                        t21 = CheckKyakuArea((t19 + 0x78), t20);
                                                        if (t21 == 0) {
                                                            t22 = *(int *)0xC1EE20C;
                                                            if (t22 == 2) {
                                                                t23 = *(int *)0xC1EE214;
                                                                if (t23 == 10) {
                                                                    t24 = *(int *)((a4 + 0x18));
                                                                    t25 = *(int *)0xC2A98FC;
                                                                    t26 = CheckKyakuArea((t24 + 0x78), t25);
                                                                    if (t26 == 0) {
                                                                        t27 = *(int *)0xC1EE20C;
                                                                        if (t27 == 0) {
                                                                            t28 = *(int *)0xC1EE214;
                                                                            if (t28 == 15) {
                                                                                t29 = *(int *)((a4 + 0x18));
                                                                                t30 = CheckKyakuArea((t29 + 0x78), 0x7);
                                                                                if (t30 == 0) {
                                                                                    return 0x0;
                                                                                }
                                                                                return 0x1;
                                                                            }
                                                                            return 0x0;
                                                                        }
                                                                        return 0x0;
                                                                    }
                                                                    return 0x1;
                                                                }
                                                                t31 = *(int *)0xC1EE20C;
                                                                if (t31 == 0) {
                                                                    t32 = *(int *)0xC1EE214;
                                                                    if (t32 == 15) {
                                                                        t33 = *(int *)((a4 + 0x18));
                                                                        t34 = CheckKyakuArea((t33 + 0x78), 0x7);
                                                                        if (t34 == 0) {
                                                                            return 0x0;
                                                                        }
                                                                        return 0x1;
                                                                    }
                                                                    return 0x0;
                                                                }
                                                                return 0x0;
                                                            }
                                                            t35 = *(int *)0xC1EE20C;
                                                            if (t35 == 0) {
                                                                t36 = *(int *)0xC1EE214;
                                                                if (t36 == 15) {
                                                                    t37 = *(int *)((a4 + 0x18));
                                                                    t38 = CheckKyakuArea((t37 + 0x78), 0x7);
                                                                    if (t38 == 0) {
                                                                        return 0x0;
                                                                    }
                                                                    return 0x1;
                                                                }
                                                                return 0x0;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    t39 = *(int *)0xC1EE20C;
                                                    if (t39 == 2) {
                                                        t40 = *(int *)0xC1EE214;
                                                        if (t40 == 10) {
                                                            t41 = *(int *)((a4 + 0x18));
                                                            t42 = *(int *)0xC2A98FC;
                                                            t43 = CheckKyakuArea((t41 + 0x78), t42);
                                                            if (t43 == 0) {
                                                                t44 = *(int *)0xC1EE20C;
                                                                if (t44 == 0) {
                                                                    t45 = *(int *)0xC1EE214;
                                                                    if (t45 == 15) {
                                                                        t46 = *(int *)((a4 + 0x18));
                                                                        t47 = CheckKyakuArea((t46 + 0x78), 0x7);
                                                                        if (t47 == 0) {
                                                                            return 0x0;
                                                                        }
                                                                        return 0x1;
                                                                    }
                                                                    return 0x0;
                                                                }
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        t48 = *(int *)0xC1EE20C;
                                                        if (t48 == 0) {
                                                            t49 = *(int *)0xC1EE214;
                                                            if (t49 == 15) {
                                                                t50 = *(int *)((a4 + 0x18));
                                                                t51 = CheckKyakuArea((t50 + 0x78), 0x7);
                                                                if (t51 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    t52 = *(int *)0xC1EE20C;
                                                    if (t52 == 0) {
                                                        t53 = *(int *)0xC1EE214;
                                                        if (t53 == 15) {
                                                            t54 = *(int *)((a4 + 0x18));
                                                            t55 = CheckKyakuArea((t54 + 0x78), 0x7);
                                                            if (t55 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                t56 = *(int *)((a4 + 0x198));
                                                t57 = *(int *)((a4 + 0x18));
                                                t58 = *(int *)((t56 + 0x0));
                                                t59 = CheckKyakuArea((t57 + 0x78), t58);
                                                if (t59 == 0) {
                                                    t60 = *(int *)0xC1EE20C;
                                                    if (t60 == 2) {
                                                        t61 = *(int *)0xC1EE214;
                                                        if (t61 == 10) {
                                                            t62 = *(int *)((a4 + 0x18));
                                                            t63 = *(int *)0xC2A98FC;
                                                            t64 = CheckKyakuArea((t62 + 0x78), t63);
                                                            if (t64 == 0) {
                                                                t65 = *(int *)0xC1EE20C;
                                                                if (t65 == 0) {
                                                                    t66 = *(int *)0xC1EE214;
                                                                    if (t66 == 15) {
                                                                        t67 = *(int *)((a4 + 0x18));
                                                                        t68 = CheckKyakuArea((t67 + 0x78), 0x7);
                                                                        if (t68 == 0) {
                                                                            return 0x0;
                                                                        }
                                                                        return 0x1;
                                                                    }
                                                                    return 0x0;
                                                                }
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        t69 = *(int *)0xC1EE20C;
                                                        if (t69 == 0) {
                                                            t70 = *(int *)0xC1EE214;
                                                            if (t70 == 15) {
                                                                t71 = *(int *)((a4 + 0x18));
                                                                t72 = CheckKyakuArea((t71 + 0x78), 0x7);
                                                                if (t72 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    t73 = *(int *)0xC1EE20C;
                                                    if (t73 == 0) {
                                                        t74 = *(int *)0xC1EE214;
                                                        if (t74 == 15) {
                                                            t75 = *(int *)((a4 + 0x18));
                                                            t76 = CheckKyakuArea((t75 + 0x78), 0x7);
                                                            if (t76 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t77 = *(int *)0xC1EE20C;
                                            if (t77 == 2) {
                                                t78 = *(int *)0xC1EE214;
                                                if (t78 == 10) {
                                                    t79 = *(int *)((a4 + 0x18));
                                                    t80 = *(int *)0xC2A98FC;
                                                    t81 = CheckKyakuArea((t79 + 0x78), t80);
                                                    if (t81 == 0) {
                                                        t82 = *(int *)0xC1EE20C;
                                                        if (t82 == 0) {
                                                            t83 = *(int *)0xC1EE214;
                                                            if (t83 == 15) {
                                                                t84 = *(int *)((a4 + 0x18));
                                                                t85 = CheckKyakuArea((t84 + 0x78), 0x7);
                                                                if (t85 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t86 = *(int *)0xC1EE20C;
                                                if (t86 == 0) {
                                                    t87 = *(int *)0xC1EE214;
                                                    if (t87 == 15) {
                                                        t88 = *(int *)((a4 + 0x18));
                                                        t89 = CheckKyakuArea((t88 + 0x78), 0x7);
                                                        if (t89 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t90 = *(int *)0xC1EE20C;
                                            if (t90 == 0) {
                                                t91 = *(int *)0xC1EE214;
                                                if (t91 == 15) {
                                                    t92 = *(int *)((a4 + 0x18));
                                                    t93 = CheckKyakuArea((t92 + 0x78), 0x7);
                                                    if (t93 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t94 = *(int *)0xC1EE20C;
                                        if (t94 == 2) {
                                            t95 = *(int *)0xC1EE214;
                                            if (t95 == 10) {
                                                t96 = *(int *)((a4 + 0x18));
                                                t97 = *(int *)0xC2A98FC;
                                                t98 = CheckKyakuArea((t96 + 0x78), t97);
                                                if (t98 == 0) {
                                                    t99 = *(int *)0xC1EE20C;
                                                    if (t99 == 0) {
                                                        t100 = *(int *)0xC1EE214;
                                                        if (t100 == 15) {
                                                            t101 = *(int *)((a4 + 0x18));
                                                            t102 = CheckKyakuArea((t101 + 0x78), 0x7);
                                                            if (t102 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t103 = *(int *)0xC1EE20C;
                                            if (t103 == 0) {
                                                t104 = *(int *)0xC1EE214;
                                                if (t104 == 15) {
                                                    t105 = *(int *)((a4 + 0x18));
                                                    t106 = CheckKyakuArea((t105 + 0x78), 0x7);
                                                    if (t106 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t107 = *(int *)0xC1EE20C;
                                        if (t107 == 0) {
                                            t108 = *(int *)0xC1EE214;
                                            if (t108 == 15) {
                                                t109 = *(int *)((a4 + 0x18));
                                                t110 = CheckKyakuArea((t109 + 0x78), 0x7);
                                                if (t110 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t111 = *(int *)0xC1EE20C;
                                    if (t111 == 2) {
                                        t112 = *(int *)0xC1EE214;
                                        if (t112 == 10) {
                                            t113 = *(int *)((a4 + 0x18));
                                            t114 = *(int *)0xC2A98FC;
                                            t115 = CheckKyakuArea((t113 + 0x78), t114);
                                            if (t115 == 0) {
                                                t116 = *(int *)0xC1EE20C;
                                                if (t116 == 0) {
                                                    t117 = *(int *)0xC1EE214;
                                                    if (t117 == 15) {
                                                        t118 = *(int *)((a4 + 0x18));
                                                        t119 = CheckKyakuArea((t118 + 0x78), 0x7);
                                                        if (t119 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t120 = *(int *)0xC1EE20C;
                                        if (t120 == 0) {
                                            t121 = *(int *)0xC1EE214;
                                            if (t121 == 15) {
                                                t122 = *(int *)((a4 + 0x18));
                                                t123 = CheckKyakuArea((t122 + 0x78), 0x7);
                                                if (t123 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t124 = *(int *)0xC1EE20C;
                                    if (t124 == 0) {
                                        t125 = *(int *)0xC1EE214;
                                        if (t125 == 15) {
                                            t126 = *(int *)((a4 + 0x18));
                                            t127 = CheckKyakuArea((t126 + 0x78), 0x7);
                                            if (t127 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t128 = *(int *)0xC1EE20C;
                                if (t128 == 0) {
                                    t129 = *(int *)0xC1EE214;
                                    if (t129 != 15) {
                                        t130 = *(int *)((a4 + 0x198));
                                        t131 = *(int *)((a4 + 0x18));
                                        t132 = *(int *)((t130 + 0x0));
                                        t133 = CheckKyakuArea((t131 + 0x78), t132);
                                        if (t133 == 0) {
                                            t134 = *(int *)0xC1EE20C;
                                            if (t134 == 2) {
                                                t135 = *(int *)0xC1EE214;
                                                if (t135 == 10) {
                                                    t136 = *(int *)((a4 + 0x18));
                                                    t137 = *(int *)0xC2A98FC;
                                                    t138 = CheckKyakuArea((t136 + 0x78), t137);
                                                    if (t138 == 0) {
                                                        t139 = *(int *)0xC1EE20C;
                                                        if (t139 == 0) {
                                                            t140 = *(int *)0xC1EE214;
                                                            if (t140 == 15) {
                                                                t141 = *(int *)((a4 + 0x18));
                                                                t142 = CheckKyakuArea((t141 + 0x78), 0x7);
                                                                if (t142 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t143 = *(int *)0xC1EE20C;
                                                if (t143 == 0) {
                                                    t144 = *(int *)0xC1EE214;
                                                    if (t144 == 15) {
                                                        t145 = *(int *)((a4 + 0x18));
                                                        t146 = CheckKyakuArea((t145 + 0x78), 0x7);
                                                        if (t146 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t147 = *(int *)0xC1EE20C;
                                            if (t147 == 0) {
                                                t148 = *(int *)0xC1EE214;
                                                if (t148 == 15) {
                                                    t149 = *(int *)((a4 + 0x18));
                                                    t150 = CheckKyakuArea((t149 + 0x78), 0x7);
                                                    if (t150 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t151 = *(int *)0xC1EE20C;
                                    if (t151 == 2) {
                                        t152 = *(int *)0xC1EE214;
                                        if (t152 == 10) {
                                            t153 = *(int *)((a4 + 0x18));
                                            t154 = *(int *)0xC2A98FC;
                                            t155 = CheckKyakuArea((t153 + 0x78), t154);
                                            if (t155 == 0) {
                                                t156 = *(int *)0xC1EE20C;
                                                if (t156 == 0) {
                                                    t157 = *(int *)0xC1EE214;
                                                    if (t157 == 15) {
                                                        t158 = *(int *)((a4 + 0x18));
                                                        t159 = CheckKyakuArea((t158 + 0x78), 0x7);
                                                        if (t159 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t160 = *(int *)0xC1EE20C;
                                        if (t160 == 0) {
                                            t161 = *(int *)0xC1EE214;
                                            if (t161 == 15) {
                                                t162 = *(int *)((a4 + 0x18));
                                                t163 = CheckKyakuArea((t162 + 0x78), 0x7);
                                                if (t163 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t164 = *(int *)0xC1EE20C;
                                    if (t164 == 0) {
                                        t165 = *(int *)0xC1EE214;
                                        if (t165 == 15) {
                                            t166 = *(int *)((a4 + 0x18));
                                            t167 = CheckKyakuArea((t166 + 0x78), 0x7);
                                            if (t167 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t168 = *(int *)((a4 + 0x198));
                                t169 = *(int *)((a4 + 0x18));
                                t170 = *(int *)((t168 + 0x0));
                                t171 = CheckKyakuArea((t169 + 0x78), t170);
                                if (t171 == 0) {
                                    t172 = *(int *)0xC1EE20C;
                                    if (t172 == 2) {
                                        t173 = *(int *)0xC1EE214;
                                        if (t173 == 10) {
                                            t174 = *(int *)((a4 + 0x18));
                                            t175 = *(int *)0xC2A98FC;
                                            t176 = CheckKyakuArea((t174 + 0x78), t175);
                                            if (t176 == 0) {
                                                t177 = *(int *)0xC1EE20C;
                                                if (t177 == 0) {
                                                    t178 = *(int *)0xC1EE214;
                                                    if (t178 == 15) {
                                                        t179 = *(int *)((a4 + 0x18));
                                                        t180 = CheckKyakuArea((t179 + 0x78), 0x7);
                                                        if (t180 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t181 = *(int *)0xC1EE20C;
                                        if (t181 == 0) {
                                            t182 = *(int *)0xC1EE214;
                                            if (t182 == 15) {
                                                t183 = *(int *)((a4 + 0x18));
                                                t184 = CheckKyakuArea((t183 + 0x78), 0x7);
                                                if (t184 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t185 = *(int *)0xC1EE20C;
                                    if (t185 == 0) {
                                        t186 = *(int *)0xC1EE214;
                                        if (t186 == 15) {
                                            t187 = *(int *)((a4 + 0x18));
                                            t188 = CheckKyakuArea((t187 + 0x78), 0x7);
                                            if (t188 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t189 = *(int *)((a4 + 0x198));
                            t190 = *(int *)((a4 + 0x18));
                            t191 = *(int *)((t189 + 0x0));
                            t192 = CheckKyakuArea((t190 + 0x78), t191);
                            if (t192 == 0) {
                                t193 = *(int *)0xC1EE20C;
                                if (t193 == 2) {
                                    t194 = *(int *)0xC1EE214;
                                    if (t194 == 10) {
                                        t195 = *(int *)((a4 + 0x18));
                                        t196 = *(int *)0xC2A98FC;
                                        t197 = CheckKyakuArea((t195 + 0x78), t196);
                                        if (t197 == 0) {
                                            t198 = *(int *)0xC1EE20C;
                                            if (t198 == 0) {
                                                t199 = *(int *)0xC1EE214;
                                                if (t199 == 15) {
                                                    t200 = *(int *)((a4 + 0x18));
                                                    t201 = CheckKyakuArea((t200 + 0x78), 0x7);
                                                    if (t201 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t202 = *(int *)0xC1EE20C;
                                    if (t202 == 0) {
                                        t203 = *(int *)0xC1EE214;
                                        if (t203 == 15) {
                                            t204 = *(int *)((a4 + 0x18));
                                            t205 = CheckKyakuArea((t204 + 0x78), 0x7);
                                            if (t205 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t206 = *(int *)0xC1EE20C;
                                if (t206 == 0) {
                                    t207 = *(int *)0xC1EE214;
                                    if (t207 == 15) {
                                        t208 = *(int *)((a4 + 0x18));
                                        t209 = CheckKyakuArea((t208 + 0x78), 0x7);
                                        if (t209 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t210 = *(int *)0xC1EE20C;
                        if (t210 == 2) {
                            t211 = *(int *)0xC1EE214;
                            if (t211 != 11) {
                                t212 = *(int *)0xC1EE214;
                                if (t212 != 10) {
                                    t213 = *(int *)0xC1EE214;
                                    if (t213 != 14) {
                                        t214 = *(int *)0xC1EE20C;
                                        if (t214 == 0) {
                                            t215 = *(int *)0xC1EE214;
                                            if (t215 != 15) {
                                                t216 = *(int *)((a4 + 0x198));
                                                t217 = *(int *)((a4 + 0x18));
                                                t218 = *(int *)((t216 + 0x0));
                                                t219 = CheckKyakuArea((t217 + 0x78), t218);
                                                if (t219 == 0) {
                                                    t220 = *(int *)0xC1EE20C;
                                                    if (t220 == 2) {
                                                        t221 = *(int *)0xC1EE214;
                                                        if (t221 == 10) {
                                                            t222 = *(int *)((a4 + 0x18));
                                                            t223 = *(int *)0xC2A98FC;
                                                            t224 = CheckKyakuArea((t222 + 0x78), t223);
                                                            if (t224 == 0) {
                                                                t225 = *(int *)0xC1EE20C;
                                                                if (t225 == 0) {
                                                                    t226 = *(int *)0xC1EE214;
                                                                    if (t226 == 15) {
                                                                        t227 = *(int *)((a4 + 0x18));
                                                                        t228 = CheckKyakuArea((t227 + 0x78), 0x7);
                                                                        if (t228 == 0) {
                                                                            return 0x0;
                                                                        }
                                                                        return 0x1;
                                                                    }
                                                                    return 0x0;
                                                                }
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        t229 = *(int *)0xC1EE20C;
                                                        if (t229 == 0) {
                                                            t230 = *(int *)0xC1EE214;
                                                            if (t230 == 15) {
                                                                t231 = *(int *)((a4 + 0x18));
                                                                t232 = CheckKyakuArea((t231 + 0x78), 0x7);
                                                                if (t232 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    t233 = *(int *)0xC1EE20C;
                                                    if (t233 == 0) {
                                                        t234 = *(int *)0xC1EE214;
                                                        if (t234 == 15) {
                                                            t235 = *(int *)((a4 + 0x18));
                                                            t236 = CheckKyakuArea((t235 + 0x78), 0x7);
                                                            if (t236 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t237 = *(int *)0xC1EE20C;
                                            if (t237 == 2) {
                                                t238 = *(int *)0xC1EE214;
                                                if (t238 == 10) {
                                                    t239 = *(int *)((a4 + 0x18));
                                                    t240 = *(int *)0xC2A98FC;
                                                    t241 = CheckKyakuArea((t239 + 0x78), t240);
                                                    if (t241 == 0) {
                                                        t242 = *(int *)0xC1EE20C;
                                                        if (t242 == 0) {
                                                            t243 = *(int *)0xC1EE214;
                                                            if (t243 == 15) {
                                                                t244 = *(int *)((a4 + 0x18));
                                                                t245 = CheckKyakuArea((t244 + 0x78), 0x7);
                                                                if (t245 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t246 = *(int *)0xC1EE20C;
                                                if (t246 == 0) {
                                                    t247 = *(int *)0xC1EE214;
                                                    if (t247 == 15) {
                                                        t248 = *(int *)((a4 + 0x18));
                                                        t249 = CheckKyakuArea((t248 + 0x78), 0x7);
                                                        if (t249 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t250 = *(int *)0xC1EE20C;
                                            if (t250 == 0) {
                                                t251 = *(int *)0xC1EE214;
                                                if (t251 == 15) {
                                                    t252 = *(int *)((a4 + 0x18));
                                                    t253 = CheckKyakuArea((t252 + 0x78), 0x7);
                                                    if (t253 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t254 = *(int *)((a4 + 0x198));
                                        t255 = *(int *)((a4 + 0x18));
                                        t256 = *(int *)((t254 + 0x0));
                                        t257 = CheckKyakuArea((t255 + 0x78), t256);
                                        if (t257 == 0) {
                                            t258 = *(int *)0xC1EE20C;
                                            if (t258 == 2) {
                                                t259 = *(int *)0xC1EE214;
                                                if (t259 == 10) {
                                                    t260 = *(int *)((a4 + 0x18));
                                                    t261 = *(int *)0xC2A98FC;
                                                    t262 = CheckKyakuArea((t260 + 0x78), t261);
                                                    if (t262 == 0) {
                                                        t263 = *(int *)0xC1EE20C;
                                                        if (t263 == 0) {
                                                            t264 = *(int *)0xC1EE214;
                                                            if (t264 == 15) {
                                                                t265 = *(int *)((a4 + 0x18));
                                                                t266 = CheckKyakuArea((t265 + 0x78), 0x7);
                                                                if (t266 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t267 = *(int *)0xC1EE20C;
                                                if (t267 == 0) {
                                                    t268 = *(int *)0xC1EE214;
                                                    if (t268 == 15) {
                                                        t269 = *(int *)((a4 + 0x18));
                                                        t270 = CheckKyakuArea((t269 + 0x78), 0x7);
                                                        if (t270 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t271 = *(int *)0xC1EE20C;
                                            if (t271 == 0) {
                                                t272 = *(int *)0xC1EE214;
                                                if (t272 == 15) {
                                                    t273 = *(int *)((a4 + 0x18));
                                                    t274 = CheckKyakuArea((t273 + 0x78), 0x7);
                                                    if (t274 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t275 = *(int *)0xC1EE20C;
                                    if (t275 == 2) {
                                        t276 = *(int *)0xC1EE214;
                                        if (t276 == 10) {
                                            t277 = *(int *)((a4 + 0x18));
                                            t278 = *(int *)0xC2A98FC;
                                            t279 = CheckKyakuArea((t277 + 0x78), t278);
                                            if (t279 == 0) {
                                                t280 = *(int *)0xC1EE20C;
                                                if (t280 == 0) {
                                                    t281 = *(int *)0xC1EE214;
                                                    if (t281 == 15) {
                                                        t282 = *(int *)((a4 + 0x18));
                                                        t283 = CheckKyakuArea((t282 + 0x78), 0x7);
                                                        if (t283 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t284 = *(int *)0xC1EE20C;
                                        if (t284 == 0) {
                                            t285 = *(int *)0xC1EE214;
                                            if (t285 == 15) {
                                                t286 = *(int *)((a4 + 0x18));
                                                t287 = CheckKyakuArea((t286 + 0x78), 0x7);
                                                if (t287 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t288 = *(int *)0xC1EE20C;
                                    if (t288 == 0) {
                                        t289 = *(int *)0xC1EE214;
                                        if (t289 == 15) {
                                            t290 = *(int *)((a4 + 0x18));
                                            t291 = CheckKyakuArea((t290 + 0x78), 0x7);
                                            if (t291 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t292 = *(int *)0xC1EE20C;
                                if (t292 == 2) {
                                    t293 = *(int *)0xC1EE214;
                                    if (t293 == 10) {
                                        t294 = *(int *)((a4 + 0x18));
                                        t295 = *(int *)0xC2A98FC;
                                        t296 = CheckKyakuArea((t294 + 0x78), t295);
                                        if (t296 == 0) {
                                            t297 = *(int *)0xC1EE20C;
                                            if (t297 == 0) {
                                                t298 = *(int *)0xC1EE214;
                                                if (t298 == 15) {
                                                    t299 = *(int *)((a4 + 0x18));
                                                    t300 = CheckKyakuArea((t299 + 0x78), 0x7);
                                                    if (t300 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t301 = *(int *)0xC1EE20C;
                                    if (t301 == 0) {
                                        t302 = *(int *)0xC1EE214;
                                        if (t302 == 15) {
                                            t303 = *(int *)((a4 + 0x18));
                                            t304 = CheckKyakuArea((t303 + 0x78), 0x7);
                                            if (t304 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t305 = *(int *)0xC1EE20C;
                                if (t305 == 0) {
                                    t306 = *(int *)0xC1EE214;
                                    if (t306 == 15) {
                                        t307 = *(int *)((a4 + 0x18));
                                        t308 = CheckKyakuArea((t307 + 0x78), 0x7);
                                        if (t308 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t309 = *(int *)0xC1EE20C;
                            if (t309 == 2) {
                                t310 = *(int *)0xC1EE214;
                                if (t310 == 10) {
                                    t311 = *(int *)((a4 + 0x18));
                                    t312 = *(int *)0xC2A98FC;
                                    t313 = CheckKyakuArea((t311 + 0x78), t312);
                                    if (t313 == 0) {
                                        t314 = *(int *)0xC1EE20C;
                                        if (t314 == 0) {
                                            t315 = *(int *)0xC1EE214;
                                            if (t315 == 15) {
                                                t316 = *(int *)((a4 + 0x18));
                                                t317 = CheckKyakuArea((t316 + 0x78), 0x7);
                                                if (t317 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t318 = *(int *)0xC1EE20C;
                                if (t318 == 0) {
                                    t319 = *(int *)0xC1EE214;
                                    if (t319 == 15) {
                                        t320 = *(int *)((a4 + 0x18));
                                        t321 = CheckKyakuArea((t320 + 0x78), 0x7);
                                        if (t321 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t322 = *(int *)0xC1EE20C;
                            if (t322 == 0) {
                                t323 = *(int *)0xC1EE214;
                                if (t323 == 15) {
                                    t324 = *(int *)((a4 + 0x18));
                                    t325 = CheckKyakuArea((t324 + 0x78), 0x7);
                                    if (t325 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t326 = *(int *)0xC1EE20C;
                        if (t326 == 0) {
                            t327 = *(int *)0xC1EE214;
                            if (t327 != 15) {
                                t328 = *(int *)((a4 + 0x198));
                                t329 = *(int *)((a4 + 0x18));
                                t330 = *(int *)((t328 + 0x0));
                                t331 = CheckKyakuArea((t329 + 0x78), t330);
                                if (t331 == 0) {
                                    t332 = *(int *)0xC1EE20C;
                                    if (t332 == 2) {
                                        t333 = *(int *)0xC1EE214;
                                        if (t333 == 10) {
                                            t334 = *(int *)((a4 + 0x18));
                                            t335 = *(int *)0xC2A98FC;
                                            t336 = CheckKyakuArea((t334 + 0x78), t335);
                                            if (t336 == 0) {
                                                t337 = *(int *)0xC1EE20C;
                                                if (t337 == 0) {
                                                    t338 = *(int *)0xC1EE214;
                                                    if (t338 == 15) {
                                                        t339 = *(int *)((a4 + 0x18));
                                                        t340 = CheckKyakuArea((t339 + 0x78), 0x7);
                                                        if (t340 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t341 = *(int *)0xC1EE20C;
                                        if (t341 == 0) {
                                            t342 = *(int *)0xC1EE214;
                                            if (t342 == 15) {
                                                t343 = *(int *)((a4 + 0x18));
                                                t344 = CheckKyakuArea((t343 + 0x78), 0x7);
                                                if (t344 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t345 = *(int *)0xC1EE20C;
                                    if (t345 == 0) {
                                        t346 = *(int *)0xC1EE214;
                                        if (t346 == 15) {
                                            t347 = *(int *)((a4 + 0x18));
                                            t348 = CheckKyakuArea((t347 + 0x78), 0x7);
                                            if (t348 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t349 = *(int *)0xC1EE20C;
                            if (t349 == 2) {
                                t350 = *(int *)0xC1EE214;
                                if (t350 == 10) {
                                    t351 = *(int *)((a4 + 0x18));
                                    t352 = *(int *)0xC2A98FC;
                                    t353 = CheckKyakuArea((t351 + 0x78), t352);
                                    if (t353 == 0) {
                                        t354 = *(int *)0xC1EE20C;
                                        if (t354 == 0) {
                                            t355 = *(int *)0xC1EE214;
                                            if (t355 == 15) {
                                                t356 = *(int *)((a4 + 0x18));
                                                t357 = CheckKyakuArea((t356 + 0x78), 0x7);
                                                if (t357 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t358 = *(int *)0xC1EE20C;
                                if (t358 == 0) {
                                    t359 = *(int *)0xC1EE214;
                                    if (t359 == 15) {
                                        t360 = *(int *)((a4 + 0x18));
                                        t361 = CheckKyakuArea((t360 + 0x78), 0x7);
                                        if (t361 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t362 = *(int *)0xC1EE20C;
                            if (t362 == 0) {
                                t363 = *(int *)0xC1EE214;
                                if (t363 == 15) {
                                    t364 = *(int *)((a4 + 0x18));
                                    t365 = CheckKyakuArea((t364 + 0x78), 0x7);
                                    if (t365 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t366 = *(int *)((a4 + 0x198));
                        t367 = *(int *)((a4 + 0x18));
                        t368 = *(int *)((t366 + 0x0));
                        t369 = CheckKyakuArea((t367 + 0x78), t368);
                        if (t369 == 0) {
                            t370 = *(int *)0xC1EE20C;
                            if (t370 == 2) {
                                t371 = *(int *)0xC1EE214;
                                if (t371 == 10) {
                                    t372 = *(int *)((a4 + 0x18));
                                    t373 = *(int *)0xC2A98FC;
                                    t374 = CheckKyakuArea((t372 + 0x78), t373);
                                    if (t374 == 0) {
                                        t375 = *(int *)0xC1EE20C;
                                        if (t375 == 0) {
                                            t376 = *(int *)0xC1EE214;
                                            if (t376 == 15) {
                                                t377 = *(int *)((a4 + 0x18));
                                                t378 = CheckKyakuArea((t377 + 0x78), 0x7);
                                                if (t378 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t379 = *(int *)0xC1EE20C;
                                if (t379 == 0) {
                                    t380 = *(int *)0xC1EE214;
                                    if (t380 == 15) {
                                        t381 = *(int *)((a4 + 0x18));
                                        t382 = CheckKyakuArea((t381 + 0x78), 0x7);
                                        if (t382 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t383 = *(int *)0xC1EE20C;
                            if (t383 == 0) {
                                t384 = *(int *)0xC1EE214;
                                if (t384 == 15) {
                                    t385 = *(int *)((a4 + 0x18));
                                    t386 = CheckKyakuArea((t385 + 0x78), 0x7);
                                    if (t386 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t387 = *(int *)0xC1EE20C;
                    if (t387 == 2) {
                        t388 = *(int *)0xC1EE214;
                        if (t388 != 11) {
                            t389 = *(int *)0xC1EE214;
                            if (t389 != 10) {
                                t390 = *(int *)0xC1EE214;
                                if (t390 != 14) {
                                    t391 = *(int *)0xC1EE20C;
                                    if (t391 == 0) {
                                        t392 = *(int *)0xC1EE214;
                                        if (t392 != 15) {
                                            t393 = *(int *)((a4 + 0x198));
                                            t394 = *(int *)((a4 + 0x18));
                                            t395 = *(int *)((t393 + 0x0));
                                            t396 = CheckKyakuArea((t394 + 0x78), t395);
                                            if (t396 == 0) {
                                                t397 = *(int *)0xC1EE20C;
                                                if (t397 == 2) {
                                                    t398 = *(int *)0xC1EE214;
                                                    if (t398 == 10) {
                                                        t399 = *(int *)((a4 + 0x18));
                                                        t400 = *(int *)0xC2A98FC;
                                                        t401 = CheckKyakuArea((t399 + 0x78), t400);
                                                        if (t401 == 0) {
                                                            t402 = *(int *)0xC1EE20C;
                                                            if (t402 == 0) {
                                                                t403 = *(int *)0xC1EE214;
                                                                if (t403 == 15) {
                                                                    t404 = *(int *)((a4 + 0x18));
                                                                    t405 = CheckKyakuArea((t404 + 0x78), 0x7);
                                                                    if (t405 == 0) {
                                                                        return 0x0;
                                                                    }
                                                                    return 0x1;
                                                                }
                                                                return 0x0;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    t406 = *(int *)0xC1EE20C;
                                                    if (t406 == 0) {
                                                        t407 = *(int *)0xC1EE214;
                                                        if (t407 == 15) {
                                                            t408 = *(int *)((a4 + 0x18));
                                                            t409 = CheckKyakuArea((t408 + 0x78), 0x7);
                                                            if (t409 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                t410 = *(int *)0xC1EE20C;
                                                if (t410 == 0) {
                                                    t411 = *(int *)0xC1EE214;
                                                    if (t411 == 15) {
                                                        t412 = *(int *)((a4 + 0x18));
                                                        t413 = CheckKyakuArea((t412 + 0x78), 0x7);
                                                        if (t413 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t414 = *(int *)0xC1EE20C;
                                        if (t414 == 2) {
                                            t415 = *(int *)0xC1EE214;
                                            if (t415 == 10) {
                                                t416 = *(int *)((a4 + 0x18));
                                                t417 = *(int *)0xC2A98FC;
                                                t418 = CheckKyakuArea((t416 + 0x78), t417);
                                                if (t418 == 0) {
                                                    t419 = *(int *)0xC1EE20C;
                                                    if (t419 == 0) {
                                                        t420 = *(int *)0xC1EE214;
                                                        if (t420 == 15) {
                                                            t421 = *(int *)((a4 + 0x18));
                                                            t422 = CheckKyakuArea((t421 + 0x78), 0x7);
                                                            if (t422 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t423 = *(int *)0xC1EE20C;
                                            if (t423 == 0) {
                                                t424 = *(int *)0xC1EE214;
                                                if (t424 == 15) {
                                                    t425 = *(int *)((a4 + 0x18));
                                                    t426 = CheckKyakuArea((t425 + 0x78), 0x7);
                                                    if (t426 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t427 = *(int *)0xC1EE20C;
                                        if (t427 == 0) {
                                            t428 = *(int *)0xC1EE214;
                                            if (t428 == 15) {
                                                t429 = *(int *)((a4 + 0x18));
                                                t430 = CheckKyakuArea((t429 + 0x78), 0x7);
                                                if (t430 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t431 = *(int *)((a4 + 0x198));
                                    t432 = *(int *)((a4 + 0x18));
                                    t433 = *(int *)((t431 + 0x0));
                                    t434 = CheckKyakuArea((t432 + 0x78), t433);
                                    if (t434 == 0) {
                                        t435 = *(int *)0xC1EE20C;
                                        if (t435 == 2) {
                                            t436 = *(int *)0xC1EE214;
                                            if (t436 == 10) {
                                                t437 = *(int *)((a4 + 0x18));
                                                t438 = *(int *)0xC2A98FC;
                                                t439 = CheckKyakuArea((t437 + 0x78), t438);
                                                if (t439 == 0) {
                                                    t440 = *(int *)0xC1EE20C;
                                                    if (t440 == 0) {
                                                        t441 = *(int *)0xC1EE214;
                                                        if (t441 == 15) {
                                                            t442 = *(int *)((a4 + 0x18));
                                                            t443 = CheckKyakuArea((t442 + 0x78), 0x7);
                                                            if (t443 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t444 = *(int *)0xC1EE20C;
                                            if (t444 == 0) {
                                                t445 = *(int *)0xC1EE214;
                                                if (t445 == 15) {
                                                    t446 = *(int *)((a4 + 0x18));
                                                    t447 = CheckKyakuArea((t446 + 0x78), 0x7);
                                                    if (t447 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t448 = *(int *)0xC1EE20C;
                                        if (t448 == 0) {
                                            t449 = *(int *)0xC1EE214;
                                            if (t449 == 15) {
                                                t450 = *(int *)((a4 + 0x18));
                                                t451 = CheckKyakuArea((t450 + 0x78), 0x7);
                                                if (t451 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t452 = *(int *)0xC1EE20C;
                                if (t452 == 2) {
                                    t453 = *(int *)0xC1EE214;
                                    if (t453 == 10) {
                                        t454 = *(int *)((a4 + 0x18));
                                        t455 = *(int *)0xC2A98FC;
                                        t456 = CheckKyakuArea((t454 + 0x78), t455);
                                        if (t456 == 0) {
                                            t457 = *(int *)0xC1EE20C;
                                            if (t457 == 0) {
                                                t458 = *(int *)0xC1EE214;
                                                if (t458 == 15) {
                                                    t459 = *(int *)((a4 + 0x18));
                                                    t460 = CheckKyakuArea((t459 + 0x78), 0x7);
                                                    if (t460 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t461 = *(int *)0xC1EE20C;
                                    if (t461 == 0) {
                                        t462 = *(int *)0xC1EE214;
                                        if (t462 == 15) {
                                            t463 = *(int *)((a4 + 0x18));
                                            t464 = CheckKyakuArea((t463 + 0x78), 0x7);
                                            if (t464 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t465 = *(int *)0xC1EE20C;
                                if (t465 == 0) {
                                    t466 = *(int *)0xC1EE214;
                                    if (t466 == 15) {
                                        t467 = *(int *)((a4 + 0x18));
                                        t468 = CheckKyakuArea((t467 + 0x78), 0x7);
                                        if (t468 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t469 = *(int *)0xC1EE20C;
                            if (t469 == 2) {
                                t470 = *(int *)0xC1EE214;
                                if (t470 == 10) {
                                    t471 = *(int *)((a4 + 0x18));
                                    t472 = *(int *)0xC2A98FC;
                                    t473 = CheckKyakuArea((t471 + 0x78), t472);
                                    if (t473 == 0) {
                                        t474 = *(int *)0xC1EE20C;
                                        if (t474 == 0) {
                                            t475 = *(int *)0xC1EE214;
                                            if (t475 == 15) {
                                                t476 = *(int *)((a4 + 0x18));
                                                t477 = CheckKyakuArea((t476 + 0x78), 0x7);
                                                if (t477 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t478 = *(int *)0xC1EE20C;
                                if (t478 == 0) {
                                    t479 = *(int *)0xC1EE214;
                                    if (t479 == 15) {
                                        t480 = *(int *)((a4 + 0x18));
                                        t481 = CheckKyakuArea((t480 + 0x78), 0x7);
                                        if (t481 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t482 = *(int *)0xC1EE20C;
                            if (t482 == 0) {
                                t483 = *(int *)0xC1EE214;
                                if (t483 == 15) {
                                    t484 = *(int *)((a4 + 0x18));
                                    t485 = CheckKyakuArea((t484 + 0x78), 0x7);
                                    if (t485 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t486 = *(int *)0xC1EE20C;
                        if (t486 == 2) {
                            t487 = *(int *)0xC1EE214;
                            if (t487 == 10) {
                                t488 = *(int *)((a4 + 0x18));
                                t489 = *(int *)0xC2A98FC;
                                t490 = CheckKyakuArea((t488 + 0x78), t489);
                                if (t490 == 0) {
                                    t491 = *(int *)0xC1EE20C;
                                    if (t491 == 0) {
                                        t492 = *(int *)0xC1EE214;
                                        if (t492 == 15) {
                                            t493 = *(int *)((a4 + 0x18));
                                            t494 = CheckKyakuArea((t493 + 0x78), 0x7);
                                            if (t494 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t495 = *(int *)0xC1EE20C;
                            if (t495 == 0) {
                                t496 = *(int *)0xC1EE214;
                                if (t496 == 15) {
                                    t497 = *(int *)((a4 + 0x18));
                                    t498 = CheckKyakuArea((t497 + 0x78), 0x7);
                                    if (t498 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t499 = *(int *)0xC1EE20C;
                        if (t499 == 0) {
                            t500 = *(int *)0xC1EE214;
                            if (t500 == 15) {
                                t501 = *(int *)((a4 + 0x18));
                                t502 = CheckKyakuArea((t501 + 0x78), 0x7);
                                if (t502 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t503 = *(int *)0xC1EE20C;
                    if (t503 == 0) {
                        t504 = *(int *)0xC1EE214;
                        if (t504 != 15) {
                            t505 = *(int *)((a4 + 0x198));
                            t506 = *(int *)((a4 + 0x18));
                            t507 = *(int *)((t505 + 0x0));
                            t508 = CheckKyakuArea((t506 + 0x78), t507);
                            if (t508 == 0) {
                                t509 = *(int *)0xC1EE20C;
                                if (t509 == 2) {
                                    t510 = *(int *)0xC1EE214;
                                    if (t510 == 10) {
                                        t511 = *(int *)((a4 + 0x18));
                                        t512 = *(int *)0xC2A98FC;
                                        t513 = CheckKyakuArea((t511 + 0x78), t512);
                                        if (t513 == 0) {
                                            t514 = *(int *)0xC1EE20C;
                                            if (t514 == 0) {
                                                t515 = *(int *)0xC1EE214;
                                                if (t515 == 15) {
                                                    t516 = *(int *)((a4 + 0x18));
                                                    t517 = CheckKyakuArea((t516 + 0x78), 0x7);
                                                    if (t517 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t518 = *(int *)0xC1EE20C;
                                    if (t518 == 0) {
                                        t519 = *(int *)0xC1EE214;
                                        if (t519 == 15) {
                                            t520 = *(int *)((a4 + 0x18));
                                            t521 = CheckKyakuArea((t520 + 0x78), 0x7);
                                            if (t521 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t522 = *(int *)0xC1EE20C;
                                if (t522 == 0) {
                                    t523 = *(int *)0xC1EE214;
                                    if (t523 == 15) {
                                        t524 = *(int *)((a4 + 0x18));
                                        t525 = CheckKyakuArea((t524 + 0x78), 0x7);
                                        if (t525 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t526 = *(int *)0xC1EE20C;
                        if (t526 == 2) {
                            t527 = *(int *)0xC1EE214;
                            if (t527 == 10) {
                                t528 = *(int *)((a4 + 0x18));
                                t529 = *(int *)0xC2A98FC;
                                t530 = CheckKyakuArea((t528 + 0x78), t529);
                                if (t530 == 0) {
                                    t531 = *(int *)0xC1EE20C;
                                    if (t531 == 0) {
                                        t532 = *(int *)0xC1EE214;
                                        if (t532 == 15) {
                                            t533 = *(int *)((a4 + 0x18));
                                            t534 = CheckKyakuArea((t533 + 0x78), 0x7);
                                            if (t534 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t535 = *(int *)0xC1EE20C;
                            if (t535 == 0) {
                                t536 = *(int *)0xC1EE214;
                                if (t536 == 15) {
                                    t537 = *(int *)((a4 + 0x18));
                                    t538 = CheckKyakuArea((t537 + 0x78), 0x7);
                                    if (t538 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t539 = *(int *)0xC1EE20C;
                        if (t539 == 0) {
                            t540 = *(int *)0xC1EE214;
                            if (t540 == 15) {
                                t541 = *(int *)((a4 + 0x18));
                                t542 = CheckKyakuArea((t541 + 0x78), 0x7);
                                if (t542 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t543 = *(int *)((a4 + 0x198));
                    t544 = *(int *)((a4 + 0x18));
                    t545 = *(int *)((t543 + 0x0));
                    t546 = CheckKyakuArea((t544 + 0x78), t545);
                    if (t546 == 0) {
                        t547 = *(int *)0xC1EE20C;
                        if (t547 == 2) {
                            t548 = *(int *)0xC1EE214;
                            if (t548 == 10) {
                                t549 = *(int *)((a4 + 0x18));
                                t550 = *(int *)0xC2A98FC;
                                t551 = CheckKyakuArea((t549 + 0x78), t550);
                                if (t551 == 0) {
                                    t552 = *(int *)0xC1EE20C;
                                    if (t552 == 0) {
                                        t553 = *(int *)0xC1EE214;
                                        if (t553 == 15) {
                                            t554 = *(int *)((a4 + 0x18));
                                            t555 = CheckKyakuArea((t554 + 0x78), 0x7);
                                            if (t555 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t556 = *(int *)0xC1EE20C;
                            if (t556 == 0) {
                                t557 = *(int *)0xC1EE214;
                                if (t557 == 15) {
                                    t558 = *(int *)((a4 + 0x18));
                                    t559 = CheckKyakuArea((t558 + 0x78), 0x7);
                                    if (t559 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t560 = *(int *)0xC1EE20C;
                        if (t560 == 0) {
                            t561 = *(int *)0xC1EE214;
                            if (t561 == 15) {
                                t562 = *(int *)((a4 + 0x18));
                                t563 = CheckKyakuArea((t562 + 0x78), 0x7);
                                if (t563 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t564 = *(int *)0xC1EE20C;
                if (t564 == 2) {
                    t565 = *(int *)0xC1EE214;
                    if (t565 != 11) {
                        t566 = *(int *)0xC1EE214;
                        if (t566 != 10) {
                            t567 = *(int *)0xC1EE214;
                            if (t567 != 14) {
                                t568 = *(int *)0xC1EE20C;
                                if (t568 == 0) {
                                    t569 = *(int *)0xC1EE214;
                                    if (t569 != 15) {
                                        t570 = *(int *)((a4 + 0x198));
                                        t571 = *(int *)((a4 + 0x18));
                                        t572 = *(int *)((t570 + 0x0));
                                        t573 = CheckKyakuArea((t571 + 0x78), t572);
                                        if (t573 == 0) {
                                            t574 = *(int *)0xC1EE20C;
                                            if (t574 == 2) {
                                                t575 = *(int *)0xC1EE214;
                                                if (t575 == 10) {
                                                    t576 = *(int *)((a4 + 0x18));
                                                    t577 = *(int *)0xC2A98FC;
                                                    t578 = CheckKyakuArea((t576 + 0x78), t577);
                                                    if (t578 == 0) {
                                                        t579 = *(int *)0xC1EE20C;
                                                        if (t579 == 0) {
                                                            t580 = *(int *)0xC1EE214;
                                                            if (t580 == 15) {
                                                                t581 = *(int *)((a4 + 0x18));
                                                                t582 = CheckKyakuArea((t581 + 0x78), 0x7);
                                                                if (t582 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t583 = *(int *)0xC1EE20C;
                                                if (t583 == 0) {
                                                    t584 = *(int *)0xC1EE214;
                                                    if (t584 == 15) {
                                                        t585 = *(int *)((a4 + 0x18));
                                                        t586 = CheckKyakuArea((t585 + 0x78), 0x7);
                                                        if (t586 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t587 = *(int *)0xC1EE20C;
                                            if (t587 == 0) {
                                                t588 = *(int *)0xC1EE214;
                                                if (t588 == 15) {
                                                    t589 = *(int *)((a4 + 0x18));
                                                    t590 = CheckKyakuArea((t589 + 0x78), 0x7);
                                                    if (t590 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t591 = *(int *)0xC1EE20C;
                                    if (t591 == 2) {
                                        t592 = *(int *)0xC1EE214;
                                        if (t592 == 10) {
                                            t593 = *(int *)((a4 + 0x18));
                                            t594 = *(int *)0xC2A98FC;
                                            t595 = CheckKyakuArea((t593 + 0x78), t594);
                                            if (t595 == 0) {
                                                t596 = *(int *)0xC1EE20C;
                                                if (t596 == 0) {
                                                    t597 = *(int *)0xC1EE214;
                                                    if (t597 == 15) {
                                                        t598 = *(int *)((a4 + 0x18));
                                                        t599 = CheckKyakuArea((t598 + 0x78), 0x7);
                                                        if (t599 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t600 = *(int *)0xC1EE20C;
                                        if (t600 == 0) {
                                            t601 = *(int *)0xC1EE214;
                                            if (t601 == 15) {
                                                t602 = *(int *)((a4 + 0x18));
                                                t603 = CheckKyakuArea((t602 + 0x78), 0x7);
                                                if (t603 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t604 = *(int *)0xC1EE20C;
                                    if (t604 == 0) {
                                        t605 = *(int *)0xC1EE214;
                                        if (t605 == 15) {
                                            t606 = *(int *)((a4 + 0x18));
                                            t607 = CheckKyakuArea((t606 + 0x78), 0x7);
                                            if (t607 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t608 = *(int *)((a4 + 0x198));
                                t609 = *(int *)((a4 + 0x18));
                                t610 = *(int *)((t608 + 0x0));
                                t611 = CheckKyakuArea((t609 + 0x78), t610);
                                if (t611 == 0) {
                                    t612 = *(int *)0xC1EE20C;
                                    if (t612 == 2) {
                                        t613 = *(int *)0xC1EE214;
                                        if (t613 == 10) {
                                            t614 = *(int *)((a4 + 0x18));
                                            t615 = *(int *)0xC2A98FC;
                                            t616 = CheckKyakuArea((t614 + 0x78), t615);
                                            if (t616 == 0) {
                                                t617 = *(int *)0xC1EE20C;
                                                if (t617 == 0) {
                                                    t618 = *(int *)0xC1EE214;
                                                    if (t618 == 15) {
                                                        t619 = *(int *)((a4 + 0x18));
                                                        t620 = CheckKyakuArea((t619 + 0x78), 0x7);
                                                        if (t620 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t621 = *(int *)0xC1EE20C;
                                        if (t621 == 0) {
                                            t622 = *(int *)0xC1EE214;
                                            if (t622 == 15) {
                                                t623 = *(int *)((a4 + 0x18));
                                                t624 = CheckKyakuArea((t623 + 0x78), 0x7);
                                                if (t624 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t625 = *(int *)0xC1EE20C;
                                    if (t625 == 0) {
                                        t626 = *(int *)0xC1EE214;
                                        if (t626 == 15) {
                                            t627 = *(int *)((a4 + 0x18));
                                            t628 = CheckKyakuArea((t627 + 0x78), 0x7);
                                            if (t628 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t629 = *(int *)0xC1EE20C;
                            if (t629 == 2) {
                                t630 = *(int *)0xC1EE214;
                                if (t630 == 10) {
                                    t631 = *(int *)((a4 + 0x18));
                                    t632 = *(int *)0xC2A98FC;
                                    t633 = CheckKyakuArea((t631 + 0x78), t632);
                                    if (t633 == 0) {
                                        t634 = *(int *)0xC1EE20C;
                                        if (t634 == 0) {
                                            t635 = *(int *)0xC1EE214;
                                            if (t635 == 15) {
                                                t636 = *(int *)((a4 + 0x18));
                                                t637 = CheckKyakuArea((t636 + 0x78), 0x7);
                                                if (t637 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t638 = *(int *)0xC1EE20C;
                                if (t638 == 0) {
                                    t639 = *(int *)0xC1EE214;
                                    if (t639 == 15) {
                                        t640 = *(int *)((a4 + 0x18));
                                        t641 = CheckKyakuArea((t640 + 0x78), 0x7);
                                        if (t641 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t642 = *(int *)0xC1EE20C;
                            if (t642 == 0) {
                                t643 = *(int *)0xC1EE214;
                                if (t643 == 15) {
                                    t644 = *(int *)((a4 + 0x18));
                                    t645 = CheckKyakuArea((t644 + 0x78), 0x7);
                                    if (t645 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t646 = *(int *)0xC1EE20C;
                        if (t646 == 2) {
                            t647 = *(int *)0xC1EE214;
                            if (t647 == 10) {
                                t648 = *(int *)((a4 + 0x18));
                                t649 = *(int *)0xC2A98FC;
                                t650 = CheckKyakuArea((t648 + 0x78), t649);
                                if (t650 == 0) {
                                    t651 = *(int *)0xC1EE20C;
                                    if (t651 == 0) {
                                        t652 = *(int *)0xC1EE214;
                                        if (t652 == 15) {
                                            t653 = *(int *)((a4 + 0x18));
                                            t654 = CheckKyakuArea((t653 + 0x78), 0x7);
                                            if (t654 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t655 = *(int *)0xC1EE20C;
                            if (t655 == 0) {
                                t656 = *(int *)0xC1EE214;
                                if (t656 == 15) {
                                    t657 = *(int *)((a4 + 0x18));
                                    t658 = CheckKyakuArea((t657 + 0x78), 0x7);
                                    if (t658 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t659 = *(int *)0xC1EE20C;
                        if (t659 == 0) {
                            t660 = *(int *)0xC1EE214;
                            if (t660 == 15) {
                                t661 = *(int *)((a4 + 0x18));
                                t662 = CheckKyakuArea((t661 + 0x78), 0x7);
                                if (t662 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t663 = *(int *)0xC1EE20C;
                    if (t663 == 2) {
                        t664 = *(int *)0xC1EE214;
                        if (t664 == 10) {
                            t665 = *(int *)((a4 + 0x18));
                            t666 = *(int *)0xC2A98FC;
                            t667 = CheckKyakuArea((t665 + 0x78), t666);
                            if (t667 == 0) {
                                t668 = *(int *)0xC1EE20C;
                                if (t668 == 0) {
                                    t669 = *(int *)0xC1EE214;
                                    if (t669 == 15) {
                                        t670 = *(int *)((a4 + 0x18));
                                        t671 = CheckKyakuArea((t670 + 0x78), 0x7);
                                        if (t671 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t672 = *(int *)0xC1EE20C;
                        if (t672 == 0) {
                            t673 = *(int *)0xC1EE214;
                            if (t673 == 15) {
                                t674 = *(int *)((a4 + 0x18));
                                t675 = CheckKyakuArea((t674 + 0x78), 0x7);
                                if (t675 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t676 = *(int *)0xC1EE20C;
                    if (t676 == 0) {
                        t677 = *(int *)0xC1EE214;
                        if (t677 == 15) {
                            t678 = *(int *)((a4 + 0x18));
                            t679 = CheckKyakuArea((t678 + 0x78), 0x7);
                            if (t679 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t680 = *(int *)0xC1EE20C;
                if (t680 == 0) {
                    t681 = *(int *)0xC1EE214;
                    if (t681 != 15) {
                        t682 = *(int *)((a4 + 0x198));
                        t683 = *(int *)((a4 + 0x18));
                        t684 = *(int *)((t682 + 0x0));
                        t685 = CheckKyakuArea((t683 + 0x78), t684);
                        if (t685 == 0) {
                            t686 = *(int *)0xC1EE20C;
                            if (t686 == 2) {
                                t687 = *(int *)0xC1EE214;
                                if (t687 == 10) {
                                    t688 = *(int *)((a4 + 0x18));
                                    t689 = *(int *)0xC2A98FC;
                                    t690 = CheckKyakuArea((t688 + 0x78), t689);
                                    if (t690 == 0) {
                                        t691 = *(int *)0xC1EE20C;
                                        if (t691 == 0) {
                                            t692 = *(int *)0xC1EE214;
                                            if (t692 == 15) {
                                                t693 = *(int *)((a4 + 0x18));
                                                t694 = CheckKyakuArea((t693 + 0x78), 0x7);
                                                if (t694 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t695 = *(int *)0xC1EE20C;
                                if (t695 == 0) {
                                    t696 = *(int *)0xC1EE214;
                                    if (t696 == 15) {
                                        t697 = *(int *)((a4 + 0x18));
                                        t698 = CheckKyakuArea((t697 + 0x78), 0x7);
                                        if (t698 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t699 = *(int *)0xC1EE20C;
                            if (t699 == 0) {
                                t700 = *(int *)0xC1EE214;
                                if (t700 == 15) {
                                    t701 = *(int *)((a4 + 0x18));
                                    t702 = CheckKyakuArea((t701 + 0x78), 0x7);
                                    if (t702 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t703 = *(int *)0xC1EE20C;
                    if (t703 == 2) {
                        t704 = *(int *)0xC1EE214;
                        if (t704 == 10) {
                            t705 = *(int *)((a4 + 0x18));
                            t706 = *(int *)0xC2A98FC;
                            t707 = CheckKyakuArea((t705 + 0x78), t706);
                            if (t707 == 0) {
                                t708 = *(int *)0xC1EE20C;
                                if (t708 == 0) {
                                    t709 = *(int *)0xC1EE214;
                                    if (t709 == 15) {
                                        t710 = *(int *)((a4 + 0x18));
                                        t711 = CheckKyakuArea((t710 + 0x78), 0x7);
                                        if (t711 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t712 = *(int *)0xC1EE20C;
                        if (t712 == 0) {
                            t713 = *(int *)0xC1EE214;
                            if (t713 == 15) {
                                t714 = *(int *)((a4 + 0x18));
                                t715 = CheckKyakuArea((t714 + 0x78), 0x7);
                                if (t715 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t716 = *(int *)0xC1EE20C;
                    if (t716 == 0) {
                        t717 = *(int *)0xC1EE214;
                        if (t717 == 15) {
                            t718 = *(int *)((a4 + 0x18));
                            t719 = CheckKyakuArea((t718 + 0x78), 0x7);
                            if (t719 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t720 = *(int *)((a4 + 0x198));
                t721 = *(int *)((a4 + 0x18));
                t722 = *(int *)((t720 + 0x0));
                t723 = CheckKyakuArea((t721 + 0x78), t722);
                if (t723 == 0) {
                    t724 = *(int *)0xC1EE20C;
                    if (t724 == 2) {
                        t725 = *(int *)0xC1EE214;
                        if (t725 == 10) {
                            t726 = *(int *)((a4 + 0x18));
                            t727 = *(int *)0xC2A98FC;
                            t728 = CheckKyakuArea((t726 + 0x78), t727);
                            if (t728 == 0) {
                                t729 = *(int *)0xC1EE20C;
                                if (t729 == 0) {
                                    t730 = *(int *)0xC1EE214;
                                    if (t730 == 15) {
                                        t731 = *(int *)((a4 + 0x18));
                                        t732 = CheckKyakuArea((t731 + 0x78), 0x7);
                                        if (t732 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t733 = *(int *)0xC1EE20C;
                        if (t733 == 0) {
                            t734 = *(int *)0xC1EE214;
                            if (t734 == 15) {
                                t735 = *(int *)((a4 + 0x18));
                                t736 = CheckKyakuArea((t735 + 0x78), 0x7);
                                if (t736 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t737 = *(int *)0xC1EE20C;
                    if (t737 == 0) {
                        t738 = *(int *)0xC1EE214;
                        if (t738 == 15) {
                            t739 = *(int *)((a4 + 0x18));
                            t740 = CheckKyakuArea((t739 + 0x78), 0x7);
                            if (t740 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t741 = *(int *)((a4 + 0x198));
            t742 = *(int *)((a4 + 0x18));
            t743 = *(int *)((t741 + 0x0));
            t744 = CheckKyakuArea((t742 + 0x78), t743);
            if (t744 == 0) {
                t745 = *(int *)0xC1EE20C;
                if (t745 == 2) {
                    t746 = *(int *)0xC1EE214;
                    if (t746 == 10) {
                        t747 = *(int *)((a4 + 0x18));
                        t748 = *(int *)0xC2A98FC;
                        t749 = CheckKyakuArea((t747 + 0x78), t748);
                        if (t749 == 0) {
                            t750 = *(int *)0xC1EE20C;
                            if (t750 == 0) {
                                t751 = *(int *)0xC1EE214;
                                if (t751 == 15) {
                                    t752 = *(int *)((a4 + 0x18));
                                    t753 = CheckKyakuArea((t752 + 0x78), 0x7);
                                    if (t753 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t754 = *(int *)0xC1EE20C;
                    if (t754 == 0) {
                        t755 = *(int *)0xC1EE214;
                        if (t755 == 15) {
                            t756 = *(int *)((a4 + 0x18));
                            t757 = CheckKyakuArea((t756 + 0x78), 0x7);
                            if (t757 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t758 = *(int *)0xC1EE20C;
                if (t758 == 0) {
                    t759 = *(int *)0xC1EE214;
                    if (t759 == 15) {
                        t760 = *(int *)((a4 + 0x18));
                        t761 = CheckKyakuArea((t760 + 0x78), 0x7);
                        if (t761 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x1;
        }
        t762 = *(int *)0xC1EE20C;
        if (t762 == 2) {
            t763 = *(int *)0xC1EE214;
            if (t763 == 14) {
                t764 = *(int *)((a4 + 0x198));
                t765 = *(int *)((t764 + 0x0));
                t766 = *(int *)0xC2A98FC;
                if (t766 == t765) {
                    t767 = FUN_0c05db72();
                    t768 = *(int *)0xC2A9900;
                    if (t767 != t768) {
                        t769 = *(int *)0xC1EE20C;
                        if (t769 == 2) {
                            t770 = *(int *)0xC1EE214;
                            if (t770 != 11) {
                                t771 = *(int *)0xC1EE214;
                                if (t771 != 10) {
                                    t772 = *(int *)0xC1EE214;
                                    if (t772 != 14) {
                                        t773 = *(int *)0xC1EE20C;
                                        if (t773 == 0) {
                                            t774 = *(int *)0xC1EE214;
                                            if (t774 != 15) {
                                                t775 = *(int *)((a4 + 0x198));
                                                t776 = *(int *)((a4 + 0x18));
                                                t777 = *(int *)((t775 + 0x0));
                                                t778 = CheckKyakuArea((t776 + 0x78), t777);
                                                if (t778 == 0) {
                                                    t779 = *(int *)0xC1EE20C;
                                                    if (t779 == 2) {
                                                        t780 = *(int *)0xC1EE214;
                                                        if (t780 == 10) {
                                                            t781 = *(int *)((a4 + 0x18));
                                                            t782 = *(int *)0xC2A98FC;
                                                            t783 = CheckKyakuArea((t781 + 0x78), t782);
                                                            if (t783 == 0) {
                                                                t784 = *(int *)0xC1EE20C;
                                                                if (t784 == 0) {
                                                                    t785 = *(int *)0xC1EE214;
                                                                    if (t785 == 15) {
                                                                        t786 = *(int *)((a4 + 0x18));
                                                                        t787 = CheckKyakuArea((t786 + 0x78), 0x7);
                                                                        if (t787 == 0) {
                                                                            return 0x0;
                                                                        }
                                                                        return 0x1;
                                                                    }
                                                                    return 0x0;
                                                                }
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        t788 = *(int *)0xC1EE20C;
                                                        if (t788 == 0) {
                                                            t789 = *(int *)0xC1EE214;
                                                            if (t789 == 15) {
                                                                t790 = *(int *)((a4 + 0x18));
                                                                t791 = CheckKyakuArea((t790 + 0x78), 0x7);
                                                                if (t791 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    t792 = *(int *)0xC1EE20C;
                                                    if (t792 == 0) {
                                                        t793 = *(int *)0xC1EE214;
                                                        if (t793 == 15) {
                                                            t794 = *(int *)((a4 + 0x18));
                                                            t795 = CheckKyakuArea((t794 + 0x78), 0x7);
                                                            if (t795 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t796 = *(int *)0xC1EE20C;
                                            if (t796 == 2) {
                                                t797 = *(int *)0xC1EE214;
                                                if (t797 == 10) {
                                                    t798 = *(int *)((a4 + 0x18));
                                                    t799 = *(int *)0xC2A98FC;
                                                    t800 = CheckKyakuArea((t798 + 0x78), t799);
                                                    if (t800 == 0) {
                                                        t801 = *(int *)0xC1EE20C;
                                                        if (t801 == 0) {
                                                            t802 = *(int *)0xC1EE214;
                                                            if (t802 == 15) {
                                                                t803 = *(int *)((a4 + 0x18));
                                                                t804 = CheckKyakuArea((t803 + 0x78), 0x7);
                                                                if (t804 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t805 = *(int *)0xC1EE20C;
                                                if (t805 == 0) {
                                                    t806 = *(int *)0xC1EE214;
                                                    if (t806 == 15) {
                                                        t807 = *(int *)((a4 + 0x18));
                                                        t808 = CheckKyakuArea((t807 + 0x78), 0x7);
                                                        if (t808 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t809 = *(int *)0xC1EE20C;
                                            if (t809 == 0) {
                                                t810 = *(int *)0xC1EE214;
                                                if (t810 == 15) {
                                                    t811 = *(int *)((a4 + 0x18));
                                                    t812 = CheckKyakuArea((t811 + 0x78), 0x7);
                                                    if (t812 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t813 = *(int *)((a4 + 0x198));
                                        t814 = *(int *)((a4 + 0x18));
                                        t815 = *(int *)((t813 + 0x0));
                                        t816 = CheckKyakuArea((t814 + 0x78), t815);
                                        if (t816 == 0) {
                                            t817 = *(int *)0xC1EE20C;
                                            if (t817 == 2) {
                                                t818 = *(int *)0xC1EE214;
                                                if (t818 == 10) {
                                                    t819 = *(int *)((a4 + 0x18));
                                                    t820 = *(int *)0xC2A98FC;
                                                    t821 = CheckKyakuArea((t819 + 0x78), t820);
                                                    if (t821 == 0) {
                                                        t822 = *(int *)0xC1EE20C;
                                                        if (t822 == 0) {
                                                            t823 = *(int *)0xC1EE214;
                                                            if (t823 == 15) {
                                                                t824 = *(int *)((a4 + 0x18));
                                                                t825 = CheckKyakuArea((t824 + 0x78), 0x7);
                                                                if (t825 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t826 = *(int *)0xC1EE20C;
                                                if (t826 == 0) {
                                                    t827 = *(int *)0xC1EE214;
                                                    if (t827 == 15) {
                                                        t828 = *(int *)((a4 + 0x18));
                                                        t829 = CheckKyakuArea((t828 + 0x78), 0x7);
                                                        if (t829 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t830 = *(int *)0xC1EE20C;
                                            if (t830 == 0) {
                                                t831 = *(int *)0xC1EE214;
                                                if (t831 == 15) {
                                                    t832 = *(int *)((a4 + 0x18));
                                                    t833 = CheckKyakuArea((t832 + 0x78), 0x7);
                                                    if (t833 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t834 = *(int *)0xC1EE20C;
                                    if (t834 == 2) {
                                        t835 = *(int *)0xC1EE214;
                                        if (t835 == 10) {
                                            t836 = *(int *)((a4 + 0x18));
                                            t837 = *(int *)0xC2A98FC;
                                            t838 = CheckKyakuArea((t836 + 0x78), t837);
                                            if (t838 == 0) {
                                                t839 = *(int *)0xC1EE20C;
                                                if (t839 == 0) {
                                                    t840 = *(int *)0xC1EE214;
                                                    if (t840 == 15) {
                                                        t841 = *(int *)((a4 + 0x18));
                                                        t842 = CheckKyakuArea((t841 + 0x78), 0x7);
                                                        if (t842 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t843 = *(int *)0xC1EE20C;
                                        if (t843 == 0) {
                                            t844 = *(int *)0xC1EE214;
                                            if (t844 == 15) {
                                                t845 = *(int *)((a4 + 0x18));
                                                t846 = CheckKyakuArea((t845 + 0x78), 0x7);
                                                if (t846 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t847 = *(int *)0xC1EE20C;
                                    if (t847 == 0) {
                                        t848 = *(int *)0xC1EE214;
                                        if (t848 == 15) {
                                            t849 = *(int *)((a4 + 0x18));
                                            t850 = CheckKyakuArea((t849 + 0x78), 0x7);
                                            if (t850 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t851 = *(int *)0xC1EE20C;
                                if (t851 == 2) {
                                    t852 = *(int *)0xC1EE214;
                                    if (t852 == 10) {
                                        t853 = *(int *)((a4 + 0x18));
                                        t854 = *(int *)0xC2A98FC;
                                        t855 = CheckKyakuArea((t853 + 0x78), t854);
                                        if (t855 == 0) {
                                            t856 = *(int *)0xC1EE20C;
                                            if (t856 == 0) {
                                                t857 = *(int *)0xC1EE214;
                                                if (t857 == 15) {
                                                    t858 = *(int *)((a4 + 0x18));
                                                    t859 = CheckKyakuArea((t858 + 0x78), 0x7);
                                                    if (t859 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t860 = *(int *)0xC1EE20C;
                                    if (t860 == 0) {
                                        t861 = *(int *)0xC1EE214;
                                        if (t861 == 15) {
                                            t862 = *(int *)((a4 + 0x18));
                                            t863 = CheckKyakuArea((t862 + 0x78), 0x7);
                                            if (t863 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t864 = *(int *)0xC1EE20C;
                                if (t864 == 0) {
                                    t865 = *(int *)0xC1EE214;
                                    if (t865 == 15) {
                                        t866 = *(int *)((a4 + 0x18));
                                        t867 = CheckKyakuArea((t866 + 0x78), 0x7);
                                        if (t867 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t868 = *(int *)0xC1EE20C;
                            if (t868 == 2) {
                                t869 = *(int *)0xC1EE214;
                                if (t869 == 10) {
                                    t870 = *(int *)((a4 + 0x18));
                                    t871 = *(int *)0xC2A98FC;
                                    t872 = CheckKyakuArea((t870 + 0x78), t871);
                                    if (t872 == 0) {
                                        t873 = *(int *)0xC1EE20C;
                                        if (t873 == 0) {
                                            t874 = *(int *)0xC1EE214;
                                            if (t874 == 15) {
                                                t875 = *(int *)((a4 + 0x18));
                                                t876 = CheckKyakuArea((t875 + 0x78), 0x7);
                                                if (t876 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t877 = *(int *)0xC1EE20C;
                                if (t877 == 0) {
                                    t878 = *(int *)0xC1EE214;
                                    if (t878 == 15) {
                                        t879 = *(int *)((a4 + 0x18));
                                        t880 = CheckKyakuArea((t879 + 0x78), 0x7);
                                        if (t880 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t881 = *(int *)0xC1EE20C;
                            if (t881 == 0) {
                                t882 = *(int *)0xC1EE214;
                                if (t882 == 15) {
                                    t883 = *(int *)((a4 + 0x18));
                                    t884 = CheckKyakuArea((t883 + 0x78), 0x7);
                                    if (t884 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t885 = *(int *)0xC1EE20C;
                        if (t885 == 0) {
                            t886 = *(int *)0xC1EE214;
                            if (t886 != 15) {
                                t887 = *(int *)((a4 + 0x198));
                                t888 = *(int *)((a4 + 0x18));
                                t889 = *(int *)((t887 + 0x0));
                                t890 = CheckKyakuArea((t888 + 0x78), t889);
                                if (t890 == 0) {
                                    t891 = *(int *)0xC1EE20C;
                                    if (t891 == 2) {
                                        t892 = *(int *)0xC1EE214;
                                        if (t892 == 10) {
                                            t893 = *(int *)((a4 + 0x18));
                                            t894 = *(int *)0xC2A98FC;
                                            t895 = CheckKyakuArea((t893 + 0x78), t894);
                                            if (t895 == 0) {
                                                t896 = *(int *)0xC1EE20C;
                                                if (t896 == 0) {
                                                    t897 = *(int *)0xC1EE214;
                                                    if (t897 == 15) {
                                                        t898 = *(int *)((a4 + 0x18));
                                                        t899 = CheckKyakuArea((t898 + 0x78), 0x7);
                                                        if (t899 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t900 = *(int *)0xC1EE20C;
                                        if (t900 == 0) {
                                            t901 = *(int *)0xC1EE214;
                                            if (t901 == 15) {
                                                t902 = *(int *)((a4 + 0x18));
                                                t903 = CheckKyakuArea((t902 + 0x78), 0x7);
                                                if (t903 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t904 = *(int *)0xC1EE20C;
                                    if (t904 == 0) {
                                        t905 = *(int *)0xC1EE214;
                                        if (t905 == 15) {
                                            t906 = *(int *)((a4 + 0x18));
                                            t907 = CheckKyakuArea((t906 + 0x78), 0x7);
                                            if (t907 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t908 = *(int *)0xC1EE20C;
                            if (t908 == 2) {
                                t909 = *(int *)0xC1EE214;
                                if (t909 == 10) {
                                    t910 = *(int *)((a4 + 0x18));
                                    t911 = *(int *)0xC2A98FC;
                                    t912 = CheckKyakuArea((t910 + 0x78), t911);
                                    if (t912 == 0) {
                                        t913 = *(int *)0xC1EE20C;
                                        if (t913 == 0) {
                                            t914 = *(int *)0xC1EE214;
                                            if (t914 == 15) {
                                                t915 = *(int *)((a4 + 0x18));
                                                t916 = CheckKyakuArea((t915 + 0x78), 0x7);
                                                if (t916 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t917 = *(int *)0xC1EE20C;
                                if (t917 == 0) {
                                    t918 = *(int *)0xC1EE214;
                                    if (t918 == 15) {
                                        t919 = *(int *)((a4 + 0x18));
                                        t920 = CheckKyakuArea((t919 + 0x78), 0x7);
                                        if (t920 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t921 = *(int *)0xC1EE20C;
                            if (t921 == 0) {
                                t922 = *(int *)0xC1EE214;
                                if (t922 == 15) {
                                    t923 = *(int *)((a4 + 0x18));
                                    t924 = CheckKyakuArea((t923 + 0x78), 0x7);
                                    if (t924 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t925 = *(int *)((a4 + 0x198));
                        t926 = *(int *)((a4 + 0x18));
                        t927 = *(int *)((t925 + 0x0));
                        t928 = CheckKyakuArea((t926 + 0x78), t927);
                        if (t928 == 0) {
                            t929 = *(int *)0xC1EE20C;
                            if (t929 == 2) {
                                t930 = *(int *)0xC1EE214;
                                if (t930 == 10) {
                                    t931 = *(int *)((a4 + 0x18));
                                    t932 = *(int *)0xC2A98FC;
                                    t933 = CheckKyakuArea((t931 + 0x78), t932);
                                    if (t933 == 0) {
                                        t934 = *(int *)0xC1EE20C;
                                        if (t934 == 0) {
                                            t935 = *(int *)0xC1EE214;
                                            if (t935 == 15) {
                                                t936 = *(int *)((a4 + 0x18));
                                                t937 = CheckKyakuArea((t936 + 0x78), 0x7);
                                                if (t937 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t938 = *(int *)0xC1EE20C;
                                if (t938 == 0) {
                                    t939 = *(int *)0xC1EE214;
                                    if (t939 == 15) {
                                        t940 = *(int *)((a4 + 0x18));
                                        t941 = CheckKyakuArea((t940 + 0x78), 0x7);
                                        if (t941 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t942 = *(int *)0xC1EE20C;
                            if (t942 == 0) {
                                t943 = *(int *)0xC1EE214;
                                if (t943 == 15) {
                                    t944 = *(int *)((a4 + 0x18));
                                    t945 = CheckKyakuArea((t944 + 0x78), 0x7);
                                    if (t945 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t946 = *(int *)((a4 + 0x198));
                    t947 = *(int *)((a4 + 0x18));
                    t948 = *(int *)((t946 + 0x0));
                    t949 = CheckKyakuArea((t947 + 0x78), t948);
                    if (t949 == 0) {
                        t950 = *(int *)0xC1EE20C;
                        if (t950 == 2) {
                            t951 = *(int *)0xC1EE214;
                            if (t951 == 10) {
                                t952 = *(int *)((a4 + 0x18));
                                t953 = *(int *)0xC2A98FC;
                                t954 = CheckKyakuArea((t952 + 0x78), t953);
                                if (t954 == 0) {
                                    t955 = *(int *)0xC1EE20C;
                                    if (t955 == 0) {
                                        t956 = *(int *)0xC1EE214;
                                        if (t956 == 15) {
                                            t957 = *(int *)((a4 + 0x18));
                                            t958 = CheckKyakuArea((t957 + 0x78), 0x7);
                                            if (t958 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t959 = *(int *)0xC1EE20C;
                            if (t959 == 0) {
                                t960 = *(int *)0xC1EE214;
                                if (t960 == 15) {
                                    t961 = *(int *)((a4 + 0x18));
                                    t962 = CheckKyakuArea((t961 + 0x78), 0x7);
                                    if (t962 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t963 = *(int *)0xC1EE20C;
                        if (t963 == 0) {
                            t964 = *(int *)0xC1EE214;
                            if (t964 == 15) {
                                t965 = *(int *)((a4 + 0x18));
                                t966 = CheckKyakuArea((t965 + 0x78), 0x7);
                                if (t966 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t967 = *(int *)0xC1EE20C;
                if (t967 == 2) {
                    t968 = *(int *)0xC1EE214;
                    if (t968 != 11) {
                        t969 = *(int *)0xC1EE214;
                        if (t969 != 10) {
                            t970 = *(int *)0xC1EE214;
                            if (t970 != 14) {
                                t971 = *(int *)0xC1EE20C;
                                if (t971 == 0) {
                                    t972 = *(int *)0xC1EE214;
                                    if (t972 != 15) {
                                        t973 = *(int *)((a4 + 0x198));
                                        t974 = *(int *)((a4 + 0x18));
                                        t975 = *(int *)((t973 + 0x0));
                                        t976 = CheckKyakuArea((t974 + 0x78), t975);
                                        if (t976 == 0) {
                                            t977 = *(int *)0xC1EE20C;
                                            if (t977 == 2) {
                                                t978 = *(int *)0xC1EE214;
                                                if (t978 == 10) {
                                                    t979 = *(int *)((a4 + 0x18));
                                                    t980 = *(int *)0xC2A98FC;
                                                    t981 = CheckKyakuArea((t979 + 0x78), t980);
                                                    if (t981 == 0) {
                                                        t982 = *(int *)0xC1EE20C;
                                                        if (t982 == 0) {
                                                            t983 = *(int *)0xC1EE214;
                                                            if (t983 == 15) {
                                                                t984 = *(int *)((a4 + 0x18));
                                                                t985 = CheckKyakuArea((t984 + 0x78), 0x7);
                                                                if (t985 == 0) {
                                                                    return 0x0;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                t986 = *(int *)0xC1EE20C;
                                                if (t986 == 0) {
                                                    t987 = *(int *)0xC1EE214;
                                                    if (t987 == 15) {
                                                        t988 = *(int *)((a4 + 0x18));
                                                        t989 = CheckKyakuArea((t988 + 0x78), 0x7);
                                                        if (t989 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            t990 = *(int *)0xC1EE20C;
                                            if (t990 == 0) {
                                                t991 = *(int *)0xC1EE214;
                                                if (t991 == 15) {
                                                    t992 = *(int *)((a4 + 0x18));
                                                    t993 = CheckKyakuArea((t992 + 0x78), 0x7);
                                                    if (t993 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t994 = *(int *)0xC1EE20C;
                                    if (t994 == 2) {
                                        t995 = *(int *)0xC1EE214;
                                        if (t995 == 10) {
                                            t996 = *(int *)((a4 + 0x18));
                                            t997 = *(int *)0xC2A98FC;
                                            t998 = CheckKyakuArea((t996 + 0x78), t997);
                                            if (t998 == 0) {
                                                t999 = *(int *)0xC1EE20C;
                                                if (t999 == 0) {
                                                    t1000 = *(int *)0xC1EE214;
                                                    if (t1000 == 15) {
                                                        t1001 = *(int *)((a4 + 0x18));
                                                        t1002 = CheckKyakuArea((t1001 + 0x78), 0x7);
                                                        if (t1002 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t1003 = *(int *)0xC1EE20C;
                                        if (t1003 == 0) {
                                            t1004 = *(int *)0xC1EE214;
                                            if (t1004 == 15) {
                                                t1005 = *(int *)((a4 + 0x18));
                                                t1006 = CheckKyakuArea((t1005 + 0x78), 0x7);
                                                if (t1006 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t1007 = *(int *)0xC1EE20C;
                                    if (t1007 == 0) {
                                        t1008 = *(int *)0xC1EE214;
                                        if (t1008 == 15) {
                                            t1009 = *(int *)((a4 + 0x18));
                                            t1010 = CheckKyakuArea((t1009 + 0x78), 0x7);
                                            if (t1010 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t1011 = *(int *)((a4 + 0x198));
                                t1012 = *(int *)((a4 + 0x18));
                                t1013 = *(int *)((t1011 + 0x0));
                                t1014 = CheckKyakuArea((t1012 + 0x78), t1013);
                                if (t1014 == 0) {
                                    t1015 = *(int *)0xC1EE20C;
                                    if (t1015 == 2) {
                                        t1016 = *(int *)0xC1EE214;
                                        if (t1016 == 10) {
                                            t1017 = *(int *)((a4 + 0x18));
                                            t1018 = *(int *)0xC2A98FC;
                                            t1019 = CheckKyakuArea((t1017 + 0x78), t1018);
                                            if (t1019 == 0) {
                                                t1020 = *(int *)0xC1EE20C;
                                                if (t1020 == 0) {
                                                    t1021 = *(int *)0xC1EE214;
                                                    if (t1021 == 15) {
                                                        t1022 = *(int *)((a4 + 0x18));
                                                        t1023 = CheckKyakuArea((t1022 + 0x78), 0x7);
                                                        if (t1023 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t1024 = *(int *)0xC1EE20C;
                                        if (t1024 == 0) {
                                            t1025 = *(int *)0xC1EE214;
                                            if (t1025 == 15) {
                                                t1026 = *(int *)((a4 + 0x18));
                                                t1027 = CheckKyakuArea((t1026 + 0x78), 0x7);
                                                if (t1027 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t1028 = *(int *)0xC1EE20C;
                                    if (t1028 == 0) {
                                        t1029 = *(int *)0xC1EE214;
                                        if (t1029 == 15) {
                                            t1030 = *(int *)((a4 + 0x18));
                                            t1031 = CheckKyakuArea((t1030 + 0x78), 0x7);
                                            if (t1031 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1032 = *(int *)0xC1EE20C;
                            if (t1032 == 2) {
                                t1033 = *(int *)0xC1EE214;
                                if (t1033 == 10) {
                                    t1034 = *(int *)((a4 + 0x18));
                                    t1035 = *(int *)0xC2A98FC;
                                    t1036 = CheckKyakuArea((t1034 + 0x78), t1035);
                                    if (t1036 == 0) {
                                        t1037 = *(int *)0xC1EE20C;
                                        if (t1037 == 0) {
                                            t1038 = *(int *)0xC1EE214;
                                            if (t1038 == 15) {
                                                t1039 = *(int *)((a4 + 0x18));
                                                t1040 = CheckKyakuArea((t1039 + 0x78), 0x7);
                                                if (t1040 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1041 = *(int *)0xC1EE20C;
                                if (t1041 == 0) {
                                    t1042 = *(int *)0xC1EE214;
                                    if (t1042 == 15) {
                                        t1043 = *(int *)((a4 + 0x18));
                                        t1044 = CheckKyakuArea((t1043 + 0x78), 0x7);
                                        if (t1044 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1045 = *(int *)0xC1EE20C;
                            if (t1045 == 0) {
                                t1046 = *(int *)0xC1EE214;
                                if (t1046 == 15) {
                                    t1047 = *(int *)((a4 + 0x18));
                                    t1048 = CheckKyakuArea((t1047 + 0x78), 0x7);
                                    if (t1048 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1049 = *(int *)0xC1EE20C;
                        if (t1049 == 2) {
                            t1050 = *(int *)0xC1EE214;
                            if (t1050 == 10) {
                                t1051 = *(int *)((a4 + 0x18));
                                t1052 = *(int *)0xC2A98FC;
                                t1053 = CheckKyakuArea((t1051 + 0x78), t1052);
                                if (t1053 == 0) {
                                    t1054 = *(int *)0xC1EE20C;
                                    if (t1054 == 0) {
                                        t1055 = *(int *)0xC1EE214;
                                        if (t1055 == 15) {
                                            t1056 = *(int *)((a4 + 0x18));
                                            t1057 = CheckKyakuArea((t1056 + 0x78), 0x7);
                                            if (t1057 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1058 = *(int *)0xC1EE20C;
                            if (t1058 == 0) {
                                t1059 = *(int *)0xC1EE214;
                                if (t1059 == 15) {
                                    t1060 = *(int *)((a4 + 0x18));
                                    t1061 = CheckKyakuArea((t1060 + 0x78), 0x7);
                                    if (t1061 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1062 = *(int *)0xC1EE20C;
                        if (t1062 == 0) {
                            t1063 = *(int *)0xC1EE214;
                            if (t1063 == 15) {
                                t1064 = *(int *)((a4 + 0x18));
                                t1065 = CheckKyakuArea((t1064 + 0x78), 0x7);
                                if (t1065 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1066 = *(int *)0xC1EE20C;
                    if (t1066 == 2) {
                        t1067 = *(int *)0xC1EE214;
                        if (t1067 == 10) {
                            t1068 = *(int *)((a4 + 0x18));
                            t1069 = *(int *)0xC2A98FC;
                            t1070 = CheckKyakuArea((t1068 + 0x78), t1069);
                            if (t1070 == 0) {
                                t1071 = *(int *)0xC1EE20C;
                                if (t1071 == 0) {
                                    t1072 = *(int *)0xC1EE214;
                                    if (t1072 == 15) {
                                        t1073 = *(int *)((a4 + 0x18));
                                        t1074 = CheckKyakuArea((t1073 + 0x78), 0x7);
                                        if (t1074 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1075 = *(int *)0xC1EE20C;
                        if (t1075 == 0) {
                            t1076 = *(int *)0xC1EE214;
                            if (t1076 == 15) {
                                t1077 = *(int *)((a4 + 0x18));
                                t1078 = CheckKyakuArea((t1077 + 0x78), 0x7);
                                if (t1078 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1079 = *(int *)0xC1EE20C;
                    if (t1079 == 0) {
                        t1080 = *(int *)0xC1EE214;
                        if (t1080 == 15) {
                            t1081 = *(int *)((a4 + 0x18));
                            t1082 = CheckKyakuArea((t1081 + 0x78), 0x7);
                            if (t1082 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1083 = *(int *)0xC1EE20C;
                if (t1083 == 0) {
                    t1084 = *(int *)0xC1EE214;
                    if (t1084 != 15) {
                        t1085 = *(int *)((a4 + 0x198));
                        t1086 = *(int *)((a4 + 0x18));
                        t1087 = *(int *)((t1085 + 0x0));
                        t1088 = CheckKyakuArea((t1086 + 0x78), t1087);
                        if (t1088 == 0) {
                            t1089 = *(int *)0xC1EE20C;
                            if (t1089 == 2) {
                                t1090 = *(int *)0xC1EE214;
                                if (t1090 == 10) {
                                    t1091 = *(int *)((a4 + 0x18));
                                    t1092 = *(int *)0xC2A98FC;
                                    t1093 = CheckKyakuArea((t1091 + 0x78), t1092);
                                    if (t1093 == 0) {
                                        t1094 = *(int *)0xC1EE20C;
                                        if (t1094 == 0) {
                                            t1095 = *(int *)0xC1EE214;
                                            if (t1095 == 15) {
                                                t1096 = *(int *)((a4 + 0x18));
                                                t1097 = CheckKyakuArea((t1096 + 0x78), 0x7);
                                                if (t1097 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1098 = *(int *)0xC1EE20C;
                                if (t1098 == 0) {
                                    t1099 = *(int *)0xC1EE214;
                                    if (t1099 == 15) {
                                        t1100 = *(int *)((a4 + 0x18));
                                        t1101 = CheckKyakuArea((t1100 + 0x78), 0x7);
                                        if (t1101 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1102 = *(int *)0xC1EE20C;
                            if (t1102 == 0) {
                                t1103 = *(int *)0xC1EE214;
                                if (t1103 == 15) {
                                    t1104 = *(int *)((a4 + 0x18));
                                    t1105 = CheckKyakuArea((t1104 + 0x78), 0x7);
                                    if (t1105 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1106 = *(int *)0xC1EE20C;
                    if (t1106 == 2) {
                        t1107 = *(int *)0xC1EE214;
                        if (t1107 == 10) {
                            t1108 = *(int *)((a4 + 0x18));
                            t1109 = *(int *)0xC2A98FC;
                            t1110 = CheckKyakuArea((t1108 + 0x78), t1109);
                            if (t1110 == 0) {
                                t1111 = *(int *)0xC1EE20C;
                                if (t1111 == 0) {
                                    t1112 = *(int *)0xC1EE214;
                                    if (t1112 == 15) {
                                        t1113 = *(int *)((a4 + 0x18));
                                        t1114 = CheckKyakuArea((t1113 + 0x78), 0x7);
                                        if (t1114 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1115 = *(int *)0xC1EE20C;
                        if (t1115 == 0) {
                            t1116 = *(int *)0xC1EE214;
                            if (t1116 == 15) {
                                t1117 = *(int *)((a4 + 0x18));
                                t1118 = CheckKyakuArea((t1117 + 0x78), 0x7);
                                if (t1118 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1119 = *(int *)0xC1EE20C;
                    if (t1119 == 0) {
                        t1120 = *(int *)0xC1EE214;
                        if (t1120 == 15) {
                            t1121 = *(int *)((a4 + 0x18));
                            t1122 = CheckKyakuArea((t1121 + 0x78), 0x7);
                            if (t1122 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1123 = *(int *)((a4 + 0x198));
                t1124 = *(int *)((a4 + 0x18));
                t1125 = *(int *)((t1123 + 0x0));
                t1126 = CheckKyakuArea((t1124 + 0x78), t1125);
                if (t1126 == 0) {
                    t1127 = *(int *)0xC1EE20C;
                    if (t1127 == 2) {
                        t1128 = *(int *)0xC1EE214;
                        if (t1128 == 10) {
                            t1129 = *(int *)((a4 + 0x18));
                            t1130 = *(int *)0xC2A98FC;
                            t1131 = CheckKyakuArea((t1129 + 0x78), t1130);
                            if (t1131 == 0) {
                                t1132 = *(int *)0xC1EE20C;
                                if (t1132 == 0) {
                                    t1133 = *(int *)0xC1EE214;
                                    if (t1133 == 15) {
                                        t1134 = *(int *)((a4 + 0x18));
                                        t1135 = CheckKyakuArea((t1134 + 0x78), 0x7);
                                        if (t1135 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1136 = *(int *)0xC1EE20C;
                        if (t1136 == 0) {
                            t1137 = *(int *)0xC1EE214;
                            if (t1137 == 15) {
                                t1138 = *(int *)((a4 + 0x18));
                                t1139 = CheckKyakuArea((t1138 + 0x78), 0x7);
                                if (t1139 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1140 = *(int *)0xC1EE20C;
                    if (t1140 == 0) {
                        t1141 = *(int *)0xC1EE214;
                        if (t1141 == 15) {
                            t1142 = *(int *)((a4 + 0x18));
                            t1143 = CheckKyakuArea((t1142 + 0x78), 0x7);
                            if (t1143 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t1144 = *(int *)0xC1EE20C;
            if (t1144 == 2) {
                t1145 = *(int *)0xC1EE214;
                if (t1145 != 11) {
                    t1146 = *(int *)0xC1EE214;
                    if (t1146 != 10) {
                        t1147 = *(int *)0xC1EE214;
                        if (t1147 != 14) {
                            t1148 = *(int *)0xC1EE20C;
                            if (t1148 == 0) {
                                t1149 = *(int *)0xC1EE214;
                                if (t1149 != 15) {
                                    t1150 = *(int *)((a4 + 0x198));
                                    t1151 = *(int *)((a4 + 0x18));
                                    t1152 = *(int *)((t1150 + 0x0));
                                    t1153 = CheckKyakuArea((t1151 + 0x78), t1152);
                                    if (t1153 == 0) {
                                        t1154 = *(int *)0xC1EE20C;
                                        if (t1154 == 2) {
                                            t1155 = *(int *)0xC1EE214;
                                            if (t1155 == 10) {
                                                t1156 = *(int *)((a4 + 0x18));
                                                t1157 = *(int *)0xC2A98FC;
                                                t1158 = CheckKyakuArea((t1156 + 0x78), t1157);
                                                if (t1158 == 0) {
                                                    t1159 = *(int *)0xC1EE20C;
                                                    if (t1159 == 0) {
                                                        t1160 = *(int *)0xC1EE214;
                                                        if (t1160 == 15) {
                                                            t1161 = *(int *)((a4 + 0x18));
                                                            t1162 = CheckKyakuArea((t1161 + 0x78), 0x7);
                                                            if (t1162 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t1163 = *(int *)0xC1EE20C;
                                            if (t1163 == 0) {
                                                t1164 = *(int *)0xC1EE214;
                                                if (t1164 == 15) {
                                                    t1165 = *(int *)((a4 + 0x18));
                                                    t1166 = CheckKyakuArea((t1165 + 0x78), 0x7);
                                                    if (t1166 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t1167 = *(int *)0xC1EE20C;
                                        if (t1167 == 0) {
                                            t1168 = *(int *)0xC1EE214;
                                            if (t1168 == 15) {
                                                t1169 = *(int *)((a4 + 0x18));
                                                t1170 = CheckKyakuArea((t1169 + 0x78), 0x7);
                                                if (t1170 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1171 = *(int *)0xC1EE20C;
                                if (t1171 == 2) {
                                    t1172 = *(int *)0xC1EE214;
                                    if (t1172 == 10) {
                                        t1173 = *(int *)((a4 + 0x18));
                                        t1174 = *(int *)0xC2A98FC;
                                        t1175 = CheckKyakuArea((t1173 + 0x78), t1174);
                                        if (t1175 == 0) {
                                            t1176 = *(int *)0xC1EE20C;
                                            if (t1176 == 0) {
                                                t1177 = *(int *)0xC1EE214;
                                                if (t1177 == 15) {
                                                    t1178 = *(int *)((a4 + 0x18));
                                                    t1179 = CheckKyakuArea((t1178 + 0x78), 0x7);
                                                    if (t1179 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t1180 = *(int *)0xC1EE20C;
                                    if (t1180 == 0) {
                                        t1181 = *(int *)0xC1EE214;
                                        if (t1181 == 15) {
                                            t1182 = *(int *)((a4 + 0x18));
                                            t1183 = CheckKyakuArea((t1182 + 0x78), 0x7);
                                            if (t1183 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t1184 = *(int *)0xC1EE20C;
                                if (t1184 == 0) {
                                    t1185 = *(int *)0xC1EE214;
                                    if (t1185 == 15) {
                                        t1186 = *(int *)((a4 + 0x18));
                                        t1187 = CheckKyakuArea((t1186 + 0x78), 0x7);
                                        if (t1187 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1188 = *(int *)((a4 + 0x198));
                            t1189 = *(int *)((a4 + 0x18));
                            t1190 = *(int *)((t1188 + 0x0));
                            t1191 = CheckKyakuArea((t1189 + 0x78), t1190);
                            if (t1191 == 0) {
                                t1192 = *(int *)0xC1EE20C;
                                if (t1192 == 2) {
                                    t1193 = *(int *)0xC1EE214;
                                    if (t1193 == 10) {
                                        t1194 = *(int *)((a4 + 0x18));
                                        t1195 = *(int *)0xC2A98FC;
                                        t1196 = CheckKyakuArea((t1194 + 0x78), t1195);
                                        if (t1196 == 0) {
                                            t1197 = *(int *)0xC1EE20C;
                                            if (t1197 == 0) {
                                                t1198 = *(int *)0xC1EE214;
                                                if (t1198 == 15) {
                                                    t1199 = *(int *)((a4 + 0x18));
                                                    t1200 = CheckKyakuArea((t1199 + 0x78), 0x7);
                                                    if (t1200 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t1201 = *(int *)0xC1EE20C;
                                    if (t1201 == 0) {
                                        t1202 = *(int *)0xC1EE214;
                                        if (t1202 == 15) {
                                            t1203 = *(int *)((a4 + 0x18));
                                            t1204 = CheckKyakuArea((t1203 + 0x78), 0x7);
                                            if (t1204 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t1205 = *(int *)0xC1EE20C;
                                if (t1205 == 0) {
                                    t1206 = *(int *)0xC1EE214;
                                    if (t1206 == 15) {
                                        t1207 = *(int *)((a4 + 0x18));
                                        t1208 = CheckKyakuArea((t1207 + 0x78), 0x7);
                                        if (t1208 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1209 = *(int *)0xC1EE20C;
                        if (t1209 == 2) {
                            t1210 = *(int *)0xC1EE214;
                            if (t1210 == 10) {
                                t1211 = *(int *)((a4 + 0x18));
                                t1212 = *(int *)0xC2A98FC;
                                t1213 = CheckKyakuArea((t1211 + 0x78), t1212);
                                if (t1213 == 0) {
                                    t1214 = *(int *)0xC1EE20C;
                                    if (t1214 == 0) {
                                        t1215 = *(int *)0xC1EE214;
                                        if (t1215 == 15) {
                                            t1216 = *(int *)((a4 + 0x18));
                                            t1217 = CheckKyakuArea((t1216 + 0x78), 0x7);
                                            if (t1217 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1218 = *(int *)0xC1EE20C;
                            if (t1218 == 0) {
                                t1219 = *(int *)0xC1EE214;
                                if (t1219 == 15) {
                                    t1220 = *(int *)((a4 + 0x18));
                                    t1221 = CheckKyakuArea((t1220 + 0x78), 0x7);
                                    if (t1221 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1222 = *(int *)0xC1EE20C;
                        if (t1222 == 0) {
                            t1223 = *(int *)0xC1EE214;
                            if (t1223 == 15) {
                                t1224 = *(int *)((a4 + 0x18));
                                t1225 = CheckKyakuArea((t1224 + 0x78), 0x7);
                                if (t1225 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1226 = *(int *)0xC1EE20C;
                    if (t1226 == 2) {
                        t1227 = *(int *)0xC1EE214;
                        if (t1227 == 10) {
                            t1228 = *(int *)((a4 + 0x18));
                            t1229 = *(int *)0xC2A98FC;
                            t1230 = CheckKyakuArea((t1228 + 0x78), t1229);
                            if (t1230 == 0) {
                                t1231 = *(int *)0xC1EE20C;
                                if (t1231 == 0) {
                                    t1232 = *(int *)0xC1EE214;
                                    if (t1232 == 15) {
                                        t1233 = *(int *)((a4 + 0x18));
                                        t1234 = CheckKyakuArea((t1233 + 0x78), 0x7);
                                        if (t1234 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1235 = *(int *)0xC1EE20C;
                        if (t1235 == 0) {
                            t1236 = *(int *)0xC1EE214;
                            if (t1236 == 15) {
                                t1237 = *(int *)((a4 + 0x18));
                                t1238 = CheckKyakuArea((t1237 + 0x78), 0x7);
                                if (t1238 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1239 = *(int *)0xC1EE20C;
                    if (t1239 == 0) {
                        t1240 = *(int *)0xC1EE214;
                        if (t1240 == 15) {
                            t1241 = *(int *)((a4 + 0x18));
                            t1242 = CheckKyakuArea((t1241 + 0x78), 0x7);
                            if (t1242 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1243 = *(int *)0xC1EE20C;
                if (t1243 == 2) {
                    t1244 = *(int *)0xC1EE214;
                    if (t1244 == 10) {
                        t1245 = *(int *)((a4 + 0x18));
                        t1246 = *(int *)0xC2A98FC;
                        t1247 = CheckKyakuArea((t1245 + 0x78), t1246);
                        if (t1247 == 0) {
                            t1248 = *(int *)0xC1EE20C;
                            if (t1248 == 0) {
                                t1249 = *(int *)0xC1EE214;
                                if (t1249 == 15) {
                                    t1250 = *(int *)((a4 + 0x18));
                                    t1251 = CheckKyakuArea((t1250 + 0x78), 0x7);
                                    if (t1251 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1252 = *(int *)0xC1EE20C;
                    if (t1252 == 0) {
                        t1253 = *(int *)0xC1EE214;
                        if (t1253 == 15) {
                            t1254 = *(int *)((a4 + 0x18));
                            t1255 = CheckKyakuArea((t1254 + 0x78), 0x7);
                            if (t1255 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1256 = *(int *)0xC1EE20C;
                if (t1256 == 0) {
                    t1257 = *(int *)0xC1EE214;
                    if (t1257 == 15) {
                        t1258 = *(int *)((a4 + 0x18));
                        t1259 = CheckKyakuArea((t1258 + 0x78), 0x7);
                        if (t1259 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1260 = *(int *)0xC1EE20C;
            if (t1260 == 0) {
                t1261 = *(int *)0xC1EE214;
                if (t1261 != 15) {
                    t1262 = *(int *)((a4 + 0x198));
                    t1263 = *(int *)((a4 + 0x18));
                    t1264 = *(int *)((t1262 + 0x0));
                    t1265 = CheckKyakuArea((t1263 + 0x78), t1264);
                    if (t1265 == 0) {
                        t1266 = *(int *)0xC1EE20C;
                        if (t1266 == 2) {
                            t1267 = *(int *)0xC1EE214;
                            if (t1267 == 10) {
                                t1268 = *(int *)((a4 + 0x18));
                                t1269 = *(int *)0xC2A98FC;
                                t1270 = CheckKyakuArea((t1268 + 0x78), t1269);
                                if (t1270 == 0) {
                                    t1271 = *(int *)0xC1EE20C;
                                    if (t1271 == 0) {
                                        t1272 = *(int *)0xC1EE214;
                                        if (t1272 == 15) {
                                            t1273 = *(int *)((a4 + 0x18));
                                            t1274 = CheckKyakuArea((t1273 + 0x78), 0x7);
                                            if (t1274 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1275 = *(int *)0xC1EE20C;
                            if (t1275 == 0) {
                                t1276 = *(int *)0xC1EE214;
                                if (t1276 == 15) {
                                    t1277 = *(int *)((a4 + 0x18));
                                    t1278 = CheckKyakuArea((t1277 + 0x78), 0x7);
                                    if (t1278 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1279 = *(int *)0xC1EE20C;
                        if (t1279 == 0) {
                            t1280 = *(int *)0xC1EE214;
                            if (t1280 == 15) {
                                t1281 = *(int *)((a4 + 0x18));
                                t1282 = CheckKyakuArea((t1281 + 0x78), 0x7);
                                if (t1282 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t1283 = *(int *)0xC1EE20C;
                if (t1283 == 2) {
                    t1284 = *(int *)0xC1EE214;
                    if (t1284 == 10) {
                        t1285 = *(int *)((a4 + 0x18));
                        t1286 = *(int *)0xC2A98FC;
                        t1287 = CheckKyakuArea((t1285 + 0x78), t1286);
                        if (t1287 == 0) {
                            t1288 = *(int *)0xC1EE20C;
                            if (t1288 == 0) {
                                t1289 = *(int *)0xC1EE214;
                                if (t1289 == 15) {
                                    t1290 = *(int *)((a4 + 0x18));
                                    t1291 = CheckKyakuArea((t1290 + 0x78), 0x7);
                                    if (t1291 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1292 = *(int *)0xC1EE20C;
                    if (t1292 == 0) {
                        t1293 = *(int *)0xC1EE214;
                        if (t1293 == 15) {
                            t1294 = *(int *)((a4 + 0x18));
                            t1295 = CheckKyakuArea((t1294 + 0x78), 0x7);
                            if (t1295 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1296 = *(int *)0xC1EE20C;
                if (t1296 == 0) {
                    t1297 = *(int *)0xC1EE214;
                    if (t1297 == 15) {
                        t1298 = *(int *)((a4 + 0x18));
                        t1299 = CheckKyakuArea((t1298 + 0x78), 0x7);
                        if (t1299 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1300 = *(int *)((a4 + 0x198));
            t1301 = *(int *)((a4 + 0x18));
            t1302 = *(int *)((t1300 + 0x0));
            t1303 = CheckKyakuArea((t1301 + 0x78), t1302);
            if (t1303 == 0) {
                t1304 = *(int *)0xC1EE20C;
                if (t1304 == 2) {
                    t1305 = *(int *)0xC1EE214;
                    if (t1305 == 10) {
                        t1306 = *(int *)((a4 + 0x18));
                        t1307 = *(int *)0xC2A98FC;
                        t1308 = CheckKyakuArea((t1306 + 0x78), t1307);
                        if (t1308 == 0) {
                            t1309 = *(int *)0xC1EE20C;
                            if (t1309 == 0) {
                                t1310 = *(int *)0xC1EE214;
                                if (t1310 == 15) {
                                    t1311 = *(int *)((a4 + 0x18));
                                    t1312 = CheckKyakuArea((t1311 + 0x78), 0x7);
                                    if (t1312 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1313 = *(int *)0xC1EE20C;
                    if (t1313 == 0) {
                        t1314 = *(int *)0xC1EE214;
                        if (t1314 == 15) {
                            t1315 = *(int *)((a4 + 0x18));
                            t1316 = CheckKyakuArea((t1315 + 0x78), 0x7);
                            if (t1316 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1317 = *(int *)0xC1EE20C;
                if (t1317 == 0) {
                    t1318 = *(int *)0xC1EE214;
                    if (t1318 == 15) {
                        t1319 = *(int *)((a4 + 0x18));
                        t1320 = CheckKyakuArea((t1319 + 0x78), 0x7);
                        if (t1320 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x1;
        }
        t1321 = *(int *)0xC1EE20C;
        if (t1321 == 2) {
            t1322 = *(int *)0xC1EE214;
            if (t1322 != 11) {
                t1323 = *(int *)0xC1EE214;
                if (t1323 != 10) {
                    t1324 = *(int *)0xC1EE214;
                    if (t1324 != 14) {
                        t1325 = *(int *)0xC1EE20C;
                        if (t1325 == 0) {
                            t1326 = *(int *)0xC1EE214;
                            if (t1326 != 15) {
                                t1327 = *(int *)((a4 + 0x198));
                                t1328 = *(int *)((a4 + 0x18));
                                t1329 = *(int *)((t1327 + 0x0));
                                t1330 = CheckKyakuArea((t1328 + 0x78), t1329);
                                if (t1330 == 0) {
                                    t1331 = *(int *)0xC1EE20C;
                                    if (t1331 == 2) {
                                        t1332 = *(int *)0xC1EE214;
                                        if (t1332 == 10) {
                                            t1333 = *(int *)((a4 + 0x18));
                                            t1334 = *(int *)0xC2A98FC;
                                            t1335 = CheckKyakuArea((t1333 + 0x78), t1334);
                                            if (t1335 == 0) {
                                                t1336 = *(int *)0xC1EE20C;
                                                if (t1336 == 0) {
                                                    t1337 = *(int *)0xC1EE214;
                                                    if (t1337 == 15) {
                                                        t1338 = *(int *)((a4 + 0x18));
                                                        t1339 = CheckKyakuArea((t1338 + 0x78), 0x7);
                                                        if (t1339 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t1340 = *(int *)0xC1EE20C;
                                        if (t1340 == 0) {
                                            t1341 = *(int *)0xC1EE214;
                                            if (t1341 == 15) {
                                                t1342 = *(int *)((a4 + 0x18));
                                                t1343 = CheckKyakuArea((t1342 + 0x78), 0x7);
                                                if (t1343 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t1344 = *(int *)0xC1EE20C;
                                    if (t1344 == 0) {
                                        t1345 = *(int *)0xC1EE214;
                                        if (t1345 == 15) {
                                            t1346 = *(int *)((a4 + 0x18));
                                            t1347 = CheckKyakuArea((t1346 + 0x78), 0x7);
                                            if (t1347 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1348 = *(int *)0xC1EE20C;
                            if (t1348 == 2) {
                                t1349 = *(int *)0xC1EE214;
                                if (t1349 == 10) {
                                    t1350 = *(int *)((a4 + 0x18));
                                    t1351 = *(int *)0xC2A98FC;
                                    t1352 = CheckKyakuArea((t1350 + 0x78), t1351);
                                    if (t1352 == 0) {
                                        t1353 = *(int *)0xC1EE20C;
                                        if (t1353 == 0) {
                                            t1354 = *(int *)0xC1EE214;
                                            if (t1354 == 15) {
                                                t1355 = *(int *)((a4 + 0x18));
                                                t1356 = CheckKyakuArea((t1355 + 0x78), 0x7);
                                                if (t1356 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1357 = *(int *)0xC1EE20C;
                                if (t1357 == 0) {
                                    t1358 = *(int *)0xC1EE214;
                                    if (t1358 == 15) {
                                        t1359 = *(int *)((a4 + 0x18));
                                        t1360 = CheckKyakuArea((t1359 + 0x78), 0x7);
                                        if (t1360 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1361 = *(int *)0xC1EE20C;
                            if (t1361 == 0) {
                                t1362 = *(int *)0xC1EE214;
                                if (t1362 == 15) {
                                    t1363 = *(int *)((a4 + 0x18));
                                    t1364 = CheckKyakuArea((t1363 + 0x78), 0x7);
                                    if (t1364 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1365 = *(int *)((a4 + 0x198));
                        t1366 = *(int *)((a4 + 0x18));
                        t1367 = *(int *)((t1365 + 0x0));
                        t1368 = CheckKyakuArea((t1366 + 0x78), t1367);
                        if (t1368 == 0) {
                            t1369 = *(int *)0xC1EE20C;
                            if (t1369 == 2) {
                                t1370 = *(int *)0xC1EE214;
                                if (t1370 == 10) {
                                    t1371 = *(int *)((a4 + 0x18));
                                    t1372 = *(int *)0xC2A98FC;
                                    t1373 = CheckKyakuArea((t1371 + 0x78), t1372);
                                    if (t1373 == 0) {
                                        t1374 = *(int *)0xC1EE20C;
                                        if (t1374 == 0) {
                                            t1375 = *(int *)0xC1EE214;
                                            if (t1375 == 15) {
                                                t1376 = *(int *)((a4 + 0x18));
                                                t1377 = CheckKyakuArea((t1376 + 0x78), 0x7);
                                                if (t1377 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1378 = *(int *)0xC1EE20C;
                                if (t1378 == 0) {
                                    t1379 = *(int *)0xC1EE214;
                                    if (t1379 == 15) {
                                        t1380 = *(int *)((a4 + 0x18));
                                        t1381 = CheckKyakuArea((t1380 + 0x78), 0x7);
                                        if (t1381 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1382 = *(int *)0xC1EE20C;
                            if (t1382 == 0) {
                                t1383 = *(int *)0xC1EE214;
                                if (t1383 == 15) {
                                    t1384 = *(int *)((a4 + 0x18));
                                    t1385 = CheckKyakuArea((t1384 + 0x78), 0x7);
                                    if (t1385 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1386 = *(int *)0xC1EE20C;
                    if (t1386 == 2) {
                        t1387 = *(int *)0xC1EE214;
                        if (t1387 == 10) {
                            t1388 = *(int *)((a4 + 0x18));
                            t1389 = *(int *)0xC2A98FC;
                            t1390 = CheckKyakuArea((t1388 + 0x78), t1389);
                            if (t1390 == 0) {
                                t1391 = *(int *)0xC1EE20C;
                                if (t1391 == 0) {
                                    t1392 = *(int *)0xC1EE214;
                                    if (t1392 == 15) {
                                        t1393 = *(int *)((a4 + 0x18));
                                        t1394 = CheckKyakuArea((t1393 + 0x78), 0x7);
                                        if (t1394 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1395 = *(int *)0xC1EE20C;
                        if (t1395 == 0) {
                            t1396 = *(int *)0xC1EE214;
                            if (t1396 == 15) {
                                t1397 = *(int *)((a4 + 0x18));
                                t1398 = CheckKyakuArea((t1397 + 0x78), 0x7);
                                if (t1398 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1399 = *(int *)0xC1EE20C;
                    if (t1399 == 0) {
                        t1400 = *(int *)0xC1EE214;
                        if (t1400 == 15) {
                            t1401 = *(int *)((a4 + 0x18));
                            t1402 = CheckKyakuArea((t1401 + 0x78), 0x7);
                            if (t1402 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1403 = *(int *)0xC1EE20C;
                if (t1403 == 2) {
                    t1404 = *(int *)0xC1EE214;
                    if (t1404 == 10) {
                        t1405 = *(int *)((a4 + 0x18));
                        t1406 = *(int *)0xC2A98FC;
                        t1407 = CheckKyakuArea((t1405 + 0x78), t1406);
                        if (t1407 == 0) {
                            t1408 = *(int *)0xC1EE20C;
                            if (t1408 == 0) {
                                t1409 = *(int *)0xC1EE214;
                                if (t1409 == 15) {
                                    t1410 = *(int *)((a4 + 0x18));
                                    t1411 = CheckKyakuArea((t1410 + 0x78), 0x7);
                                    if (t1411 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1412 = *(int *)0xC1EE20C;
                    if (t1412 == 0) {
                        t1413 = *(int *)0xC1EE214;
                        if (t1413 == 15) {
                            t1414 = *(int *)((a4 + 0x18));
                            t1415 = CheckKyakuArea((t1414 + 0x78), 0x7);
                            if (t1415 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1416 = *(int *)0xC1EE20C;
                if (t1416 == 0) {
                    t1417 = *(int *)0xC1EE214;
                    if (t1417 == 15) {
                        t1418 = *(int *)((a4 + 0x18));
                        t1419 = CheckKyakuArea((t1418 + 0x78), 0x7);
                        if (t1419 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1420 = *(int *)0xC1EE20C;
            if (t1420 == 2) {
                t1421 = *(int *)0xC1EE214;
                if (t1421 == 10) {
                    t1422 = *(int *)((a4 + 0x18));
                    t1423 = *(int *)0xC2A98FC;
                    t1424 = CheckKyakuArea((t1422 + 0x78), t1423);
                    if (t1424 == 0) {
                        t1425 = *(int *)0xC1EE20C;
                        if (t1425 == 0) {
                            t1426 = *(int *)0xC1EE214;
                            if (t1426 == 15) {
                                t1427 = *(int *)((a4 + 0x18));
                                t1428 = CheckKyakuArea((t1427 + 0x78), 0x7);
                                if (t1428 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t1429 = *(int *)0xC1EE20C;
                if (t1429 == 0) {
                    t1430 = *(int *)0xC1EE214;
                    if (t1430 == 15) {
                        t1431 = *(int *)((a4 + 0x18));
                        t1432 = CheckKyakuArea((t1431 + 0x78), 0x7);
                        if (t1432 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1433 = *(int *)0xC1EE20C;
            if (t1433 == 0) {
                t1434 = *(int *)0xC1EE214;
                if (t1434 == 15) {
                    t1435 = *(int *)((a4 + 0x18));
                    t1436 = CheckKyakuArea((t1435 + 0x78), 0x7);
                    if (t1436 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t1437 = *(int *)0xC1EE20C;
        if (t1437 == 0) {
            t1438 = *(int *)0xC1EE214;
            if (t1438 != 15) {
                t1439 = *(int *)((a4 + 0x198));
                t1440 = *(int *)((a4 + 0x18));
                t1441 = *(int *)((t1439 + 0x0));
                t1442 = CheckKyakuArea((t1440 + 0x78), t1441);
                if (t1442 == 0) {
                    t1443 = *(int *)0xC1EE20C;
                    if (t1443 == 2) {
                        t1444 = *(int *)0xC1EE214;
                        if (t1444 == 10) {
                            t1445 = *(int *)((a4 + 0x18));
                            t1446 = *(int *)0xC2A98FC;
                            t1447 = CheckKyakuArea((t1445 + 0x78), t1446);
                            if (t1447 == 0) {
                                t1448 = *(int *)0xC1EE20C;
                                if (t1448 == 0) {
                                    t1449 = *(int *)0xC1EE214;
                                    if (t1449 == 15) {
                                        t1450 = *(int *)((a4 + 0x18));
                                        t1451 = CheckKyakuArea((t1450 + 0x78), 0x7);
                                        if (t1451 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1452 = *(int *)0xC1EE20C;
                        if (t1452 == 0) {
                            t1453 = *(int *)0xC1EE214;
                            if (t1453 == 15) {
                                t1454 = *(int *)((a4 + 0x18));
                                t1455 = CheckKyakuArea((t1454 + 0x78), 0x7);
                                if (t1455 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1456 = *(int *)0xC1EE20C;
                    if (t1456 == 0) {
                        t1457 = *(int *)0xC1EE214;
                        if (t1457 == 15) {
                            t1458 = *(int *)((a4 + 0x18));
                            t1459 = CheckKyakuArea((t1458 + 0x78), 0x7);
                            if (t1459 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t1460 = *(int *)0xC1EE20C;
            if (t1460 == 2) {
                t1461 = *(int *)0xC1EE214;
                if (t1461 == 10) {
                    t1462 = *(int *)((a4 + 0x18));
                    t1463 = *(int *)0xC2A98FC;
                    t1464 = CheckKyakuArea((t1462 + 0x78), t1463);
                    if (t1464 == 0) {
                        t1465 = *(int *)0xC1EE20C;
                        if (t1465 == 0) {
                            t1466 = *(int *)0xC1EE214;
                            if (t1466 == 15) {
                                t1467 = *(int *)((a4 + 0x18));
                                t1468 = CheckKyakuArea((t1467 + 0x78), 0x7);
                                if (t1468 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t1469 = *(int *)0xC1EE20C;
                if (t1469 == 0) {
                    t1470 = *(int *)0xC1EE214;
                    if (t1470 == 15) {
                        t1471 = *(int *)((a4 + 0x18));
                        t1472 = CheckKyakuArea((t1471 + 0x78), 0x7);
                        if (t1472 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1473 = *(int *)0xC1EE20C;
            if (t1473 == 0) {
                t1474 = *(int *)0xC1EE214;
                if (t1474 == 15) {
                    t1475 = *(int *)((a4 + 0x18));
                    t1476 = CheckKyakuArea((t1475 + 0x78), 0x7);
                    if (t1476 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t1477 = *(int *)((a4 + 0x198));
        t1478 = *(int *)((a4 + 0x18));
        t1479 = *(int *)((t1477 + 0x0));
        t1480 = CheckKyakuArea((t1478 + 0x78), t1479);
        if (t1480 == 0) {
            t1481 = *(int *)0xC1EE20C;
            if (t1481 == 2) {
                t1482 = *(int *)0xC1EE214;
                if (t1482 == 10) {
                    t1483 = *(int *)((a4 + 0x18));
                    t1484 = *(int *)0xC2A98FC;
                    t1485 = CheckKyakuArea((t1483 + 0x78), t1484);
                    if (t1485 == 0) {
                        t1486 = *(int *)0xC1EE20C;
                        if (t1486 == 0) {
                            t1487 = *(int *)0xC1EE214;
                            if (t1487 == 15) {
                                t1488 = *(int *)((a4 + 0x18));
                                t1489 = CheckKyakuArea((t1488 + 0x78), 0x7);
                                if (t1489 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t1490 = *(int *)0xC1EE20C;
                if (t1490 == 0) {
                    t1491 = *(int *)0xC1EE214;
                    if (t1491 == 15) {
                        t1492 = *(int *)((a4 + 0x18));
                        t1493 = CheckKyakuArea((t1492 + 0x78), 0x7);
                        if (t1493 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1494 = *(int *)0xC1EE20C;
            if (t1494 == 0) {
                t1495 = *(int *)0xC1EE214;
                if (t1495 == 15) {
                    t1496 = *(int *)((a4 + 0x18));
                    t1497 = CheckKyakuArea((t1496 + 0x78), 0x7);
                    if (t1497 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x1;
    }
    t1498 = *(int *)0xC1EE20C;
    if (t1498 == 2) {
        t1499 = *(int *)0xC1EE214;
        if (t1499 == 14) {
            t1500 = *(int *)((a4 + 0x198));
            t1501 = *(int *)((t1500 + 0x0));
            t1502 = *(int *)0xC2A98FC;
            if (t1502 == t1501) {
                t1503 = FUN_0c05db72();
                t1504 = *(int *)0xC2A9900;
                if (t1503 != t1504) {
                    t1505 = *(int *)0xC1EE20C;
                    if (t1505 == 2) {
                        t1506 = *(int *)0xC1EE214;
                        if (t1506 != 11) {
                            t1507 = *(int *)0xC1EE214;
                            if (t1507 != 10) {
                                t1508 = *(int *)0xC1EE214;
                                if (t1508 != 14) {
                                    t1509 = *(int *)0xC1EE20C;
                                    if (t1509 == 0) {
                                        t1510 = *(int *)0xC1EE214;
                                        if (t1510 != 15) {
                                            t1511 = *(int *)((a4 + 0x198));
                                            t1512 = *(int *)((a4 + 0x18));
                                            t1513 = *(int *)((t1511 + 0x0));
                                            t1514 = CheckKyakuArea((t1512 + 0x78), t1513);
                                            if (t1514 == 0) {
                                                t1515 = *(int *)0xC1EE20C;
                                                if (t1515 == 2) {
                                                    t1516 = *(int *)0xC1EE214;
                                                    if (t1516 == 10) {
                                                        t1517 = *(int *)((a4 + 0x18));
                                                        t1518 = *(int *)0xC2A98FC;
                                                        t1519 = CheckKyakuArea((t1517 + 0x78), t1518);
                                                        if (t1519 == 0) {
                                                            t1520 = *(int *)0xC1EE20C;
                                                            if (t1520 == 0) {
                                                                t1521 = *(int *)0xC1EE214;
                                                                if (t1521 == 15) {
                                                                    t1522 = *(int *)((a4 + 0x18));
                                                                    t1523 = CheckKyakuArea((t1522 + 0x78), 0x7);
                                                                    if (t1523 == 0) {
                                                                        return 0x0;
                                                                    }
                                                                    return 0x1;
                                                                }
                                                                return 0x0;
                                                            }
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    t1524 = *(int *)0xC1EE20C;
                                                    if (t1524 == 0) {
                                                        t1525 = *(int *)0xC1EE214;
                                                        if (t1525 == 15) {
                                                            t1526 = *(int *)((a4 + 0x18));
                                                            t1527 = CheckKyakuArea((t1526 + 0x78), 0x7);
                                                            if (t1527 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                t1528 = *(int *)0xC1EE20C;
                                                if (t1528 == 0) {
                                                    t1529 = *(int *)0xC1EE214;
                                                    if (t1529 == 15) {
                                                        t1530 = *(int *)((a4 + 0x18));
                                                        t1531 = CheckKyakuArea((t1530 + 0x78), 0x7);
                                                        if (t1531 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t1532 = *(int *)0xC1EE20C;
                                        if (t1532 == 2) {
                                            t1533 = *(int *)0xC1EE214;
                                            if (t1533 == 10) {
                                                t1534 = *(int *)((a4 + 0x18));
                                                t1535 = *(int *)0xC2A98FC;
                                                t1536 = CheckKyakuArea((t1534 + 0x78), t1535);
                                                if (t1536 == 0) {
                                                    t1537 = *(int *)0xC1EE20C;
                                                    if (t1537 == 0) {
                                                        t1538 = *(int *)0xC1EE214;
                                                        if (t1538 == 15) {
                                                            t1539 = *(int *)((a4 + 0x18));
                                                            t1540 = CheckKyakuArea((t1539 + 0x78), 0x7);
                                                            if (t1540 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t1541 = *(int *)0xC1EE20C;
                                            if (t1541 == 0) {
                                                t1542 = *(int *)0xC1EE214;
                                                if (t1542 == 15) {
                                                    t1543 = *(int *)((a4 + 0x18));
                                                    t1544 = CheckKyakuArea((t1543 + 0x78), 0x7);
                                                    if (t1544 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t1545 = *(int *)0xC1EE20C;
                                        if (t1545 == 0) {
                                            t1546 = *(int *)0xC1EE214;
                                            if (t1546 == 15) {
                                                t1547 = *(int *)((a4 + 0x18));
                                                t1548 = CheckKyakuArea((t1547 + 0x78), 0x7);
                                                if (t1548 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t1549 = *(int *)((a4 + 0x198));
                                    t1550 = *(int *)((a4 + 0x18));
                                    t1551 = *(int *)((t1549 + 0x0));
                                    t1552 = CheckKyakuArea((t1550 + 0x78), t1551);
                                    if (t1552 == 0) {
                                        t1553 = *(int *)0xC1EE20C;
                                        if (t1553 == 2) {
                                            t1554 = *(int *)0xC1EE214;
                                            if (t1554 == 10) {
                                                t1555 = *(int *)((a4 + 0x18));
                                                t1556 = *(int *)0xC2A98FC;
                                                t1557 = CheckKyakuArea((t1555 + 0x78), t1556);
                                                if (t1557 == 0) {
                                                    t1558 = *(int *)0xC1EE20C;
                                                    if (t1558 == 0) {
                                                        t1559 = *(int *)0xC1EE214;
                                                        if (t1559 == 15) {
                                                            t1560 = *(int *)((a4 + 0x18));
                                                            t1561 = CheckKyakuArea((t1560 + 0x78), 0x7);
                                                            if (t1561 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t1562 = *(int *)0xC1EE20C;
                                            if (t1562 == 0) {
                                                t1563 = *(int *)0xC1EE214;
                                                if (t1563 == 15) {
                                                    t1564 = *(int *)((a4 + 0x18));
                                                    t1565 = CheckKyakuArea((t1564 + 0x78), 0x7);
                                                    if (t1565 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t1566 = *(int *)0xC1EE20C;
                                        if (t1566 == 0) {
                                            t1567 = *(int *)0xC1EE214;
                                            if (t1567 == 15) {
                                                t1568 = *(int *)((a4 + 0x18));
                                                t1569 = CheckKyakuArea((t1568 + 0x78), 0x7);
                                                if (t1569 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1570 = *(int *)0xC1EE20C;
                                if (t1570 == 2) {
                                    t1571 = *(int *)0xC1EE214;
                                    if (t1571 == 10) {
                                        t1572 = *(int *)((a4 + 0x18));
                                        t1573 = *(int *)0xC2A98FC;
                                        t1574 = CheckKyakuArea((t1572 + 0x78), t1573);
                                        if (t1574 == 0) {
                                            t1575 = *(int *)0xC1EE20C;
                                            if (t1575 == 0) {
                                                t1576 = *(int *)0xC1EE214;
                                                if (t1576 == 15) {
                                                    t1577 = *(int *)((a4 + 0x18));
                                                    t1578 = CheckKyakuArea((t1577 + 0x78), 0x7);
                                                    if (t1578 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t1579 = *(int *)0xC1EE20C;
                                    if (t1579 == 0) {
                                        t1580 = *(int *)0xC1EE214;
                                        if (t1580 == 15) {
                                            t1581 = *(int *)((a4 + 0x18));
                                            t1582 = CheckKyakuArea((t1581 + 0x78), 0x7);
                                            if (t1582 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t1583 = *(int *)0xC1EE20C;
                                if (t1583 == 0) {
                                    t1584 = *(int *)0xC1EE214;
                                    if (t1584 == 15) {
                                        t1585 = *(int *)((a4 + 0x18));
                                        t1586 = CheckKyakuArea((t1585 + 0x78), 0x7);
                                        if (t1586 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1587 = *(int *)0xC1EE20C;
                            if (t1587 == 2) {
                                t1588 = *(int *)0xC1EE214;
                                if (t1588 == 10) {
                                    t1589 = *(int *)((a4 + 0x18));
                                    t1590 = *(int *)0xC2A98FC;
                                    t1591 = CheckKyakuArea((t1589 + 0x78), t1590);
                                    if (t1591 == 0) {
                                        t1592 = *(int *)0xC1EE20C;
                                        if (t1592 == 0) {
                                            t1593 = *(int *)0xC1EE214;
                                            if (t1593 == 15) {
                                                t1594 = *(int *)((a4 + 0x18));
                                                t1595 = CheckKyakuArea((t1594 + 0x78), 0x7);
                                                if (t1595 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1596 = *(int *)0xC1EE20C;
                                if (t1596 == 0) {
                                    t1597 = *(int *)0xC1EE214;
                                    if (t1597 == 15) {
                                        t1598 = *(int *)((a4 + 0x18));
                                        t1599 = CheckKyakuArea((t1598 + 0x78), 0x7);
                                        if (t1599 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1600 = *(int *)0xC1EE20C;
                            if (t1600 == 0) {
                                t1601 = *(int *)0xC1EE214;
                                if (t1601 == 15) {
                                    t1602 = *(int *)((a4 + 0x18));
                                    t1603 = CheckKyakuArea((t1602 + 0x78), 0x7);
                                    if (t1603 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1604 = *(int *)0xC1EE20C;
                        if (t1604 == 2) {
                            t1605 = *(int *)0xC1EE214;
                            if (t1605 == 10) {
                                t1606 = *(int *)((a4 + 0x18));
                                t1607 = *(int *)0xC2A98FC;
                                t1608 = CheckKyakuArea((t1606 + 0x78), t1607);
                                if (t1608 == 0) {
                                    t1609 = *(int *)0xC1EE20C;
                                    if (t1609 == 0) {
                                        t1610 = *(int *)0xC1EE214;
                                        if (t1610 == 15) {
                                            t1611 = *(int *)((a4 + 0x18));
                                            t1612 = CheckKyakuArea((t1611 + 0x78), 0x7);
                                            if (t1612 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1613 = *(int *)0xC1EE20C;
                            if (t1613 == 0) {
                                t1614 = *(int *)0xC1EE214;
                                if (t1614 == 15) {
                                    t1615 = *(int *)((a4 + 0x18));
                                    t1616 = CheckKyakuArea((t1615 + 0x78), 0x7);
                                    if (t1616 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1617 = *(int *)0xC1EE20C;
                        if (t1617 == 0) {
                            t1618 = *(int *)0xC1EE214;
                            if (t1618 == 15) {
                                t1619 = *(int *)((a4 + 0x18));
                                t1620 = CheckKyakuArea((t1619 + 0x78), 0x7);
                                if (t1620 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1621 = *(int *)0xC1EE20C;
                    if (t1621 == 0) {
                        t1622 = *(int *)0xC1EE214;
                        if (t1622 != 15) {
                            t1623 = *(int *)((a4 + 0x198));
                            t1624 = *(int *)((a4 + 0x18));
                            t1625 = *(int *)((t1623 + 0x0));
                            t1626 = CheckKyakuArea((t1624 + 0x78), t1625);
                            if (t1626 == 0) {
                                t1627 = *(int *)0xC1EE20C;
                                if (t1627 == 2) {
                                    t1628 = *(int *)0xC1EE214;
                                    if (t1628 == 10) {
                                        t1629 = *(int *)((a4 + 0x18));
                                        t1630 = *(int *)0xC2A98FC;
                                        t1631 = CheckKyakuArea((t1629 + 0x78), t1630);
                                        if (t1631 == 0) {
                                            t1632 = *(int *)0xC1EE20C;
                                            if (t1632 == 0) {
                                                t1633 = *(int *)0xC1EE214;
                                                if (t1633 == 15) {
                                                    t1634 = *(int *)((a4 + 0x18));
                                                    t1635 = CheckKyakuArea((t1634 + 0x78), 0x7);
                                                    if (t1635 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t1636 = *(int *)0xC1EE20C;
                                    if (t1636 == 0) {
                                        t1637 = *(int *)0xC1EE214;
                                        if (t1637 == 15) {
                                            t1638 = *(int *)((a4 + 0x18));
                                            t1639 = CheckKyakuArea((t1638 + 0x78), 0x7);
                                            if (t1639 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t1640 = *(int *)0xC1EE20C;
                                if (t1640 == 0) {
                                    t1641 = *(int *)0xC1EE214;
                                    if (t1641 == 15) {
                                        t1642 = *(int *)((a4 + 0x18));
                                        t1643 = CheckKyakuArea((t1642 + 0x78), 0x7);
                                        if (t1643 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1644 = *(int *)0xC1EE20C;
                        if (t1644 == 2) {
                            t1645 = *(int *)0xC1EE214;
                            if (t1645 == 10) {
                                t1646 = *(int *)((a4 + 0x18));
                                t1647 = *(int *)0xC2A98FC;
                                t1648 = CheckKyakuArea((t1646 + 0x78), t1647);
                                if (t1648 == 0) {
                                    t1649 = *(int *)0xC1EE20C;
                                    if (t1649 == 0) {
                                        t1650 = *(int *)0xC1EE214;
                                        if (t1650 == 15) {
                                            t1651 = *(int *)((a4 + 0x18));
                                            t1652 = CheckKyakuArea((t1651 + 0x78), 0x7);
                                            if (t1652 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1653 = *(int *)0xC1EE20C;
                            if (t1653 == 0) {
                                t1654 = *(int *)0xC1EE214;
                                if (t1654 == 15) {
                                    t1655 = *(int *)((a4 + 0x18));
                                    t1656 = CheckKyakuArea((t1655 + 0x78), 0x7);
                                    if (t1656 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1657 = *(int *)0xC1EE20C;
                        if (t1657 == 0) {
                            t1658 = *(int *)0xC1EE214;
                            if (t1658 == 15) {
                                t1659 = *(int *)((a4 + 0x18));
                                t1660 = CheckKyakuArea((t1659 + 0x78), 0x7);
                                if (t1660 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1661 = *(int *)((a4 + 0x198));
                    t1662 = *(int *)((a4 + 0x18));
                    t1663 = *(int *)((t1661 + 0x0));
                    t1664 = CheckKyakuArea((t1662 + 0x78), t1663);
                    if (t1664 == 0) {
                        t1665 = *(int *)0xC1EE20C;
                        if (t1665 == 2) {
                            t1666 = *(int *)0xC1EE214;
                            if (t1666 == 10) {
                                t1667 = *(int *)((a4 + 0x18));
                                t1668 = *(int *)0xC2A98FC;
                                t1669 = CheckKyakuArea((t1667 + 0x78), t1668);
                                if (t1669 == 0) {
                                    t1670 = *(int *)0xC1EE20C;
                                    if (t1670 == 0) {
                                        t1671 = *(int *)0xC1EE214;
                                        if (t1671 == 15) {
                                            t1672 = *(int *)((a4 + 0x18));
                                            t1673 = CheckKyakuArea((t1672 + 0x78), 0x7);
                                            if (t1673 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1674 = *(int *)0xC1EE20C;
                            if (t1674 == 0) {
                                t1675 = *(int *)0xC1EE214;
                                if (t1675 == 15) {
                                    t1676 = *(int *)((a4 + 0x18));
                                    t1677 = CheckKyakuArea((t1676 + 0x78), 0x7);
                                    if (t1677 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1678 = *(int *)0xC1EE20C;
                        if (t1678 == 0) {
                            t1679 = *(int *)0xC1EE214;
                            if (t1679 == 15) {
                                t1680 = *(int *)((a4 + 0x18));
                                t1681 = CheckKyakuArea((t1680 + 0x78), 0x7);
                                if (t1681 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t1682 = *(int *)((a4 + 0x198));
                t1683 = *(int *)((a4 + 0x18));
                t1684 = *(int *)((t1682 + 0x0));
                t1685 = CheckKyakuArea((t1683 + 0x78), t1684);
                if (t1685 == 0) {
                    t1686 = *(int *)0xC1EE20C;
                    if (t1686 == 2) {
                        t1687 = *(int *)0xC1EE214;
                        if (t1687 == 10) {
                            t1688 = *(int *)((a4 + 0x18));
                            t1689 = *(int *)0xC2A98FC;
                            t1690 = CheckKyakuArea((t1688 + 0x78), t1689);
                            if (t1690 == 0) {
                                t1691 = *(int *)0xC1EE20C;
                                if (t1691 == 0) {
                                    t1692 = *(int *)0xC1EE214;
                                    if (t1692 == 15) {
                                        t1693 = *(int *)((a4 + 0x18));
                                        t1694 = CheckKyakuArea((t1693 + 0x78), 0x7);
                                        if (t1694 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1695 = *(int *)0xC1EE20C;
                        if (t1695 == 0) {
                            t1696 = *(int *)0xC1EE214;
                            if (t1696 == 15) {
                                t1697 = *(int *)((a4 + 0x18));
                                t1698 = CheckKyakuArea((t1697 + 0x78), 0x7);
                                if (t1698 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1699 = *(int *)0xC1EE20C;
                    if (t1699 == 0) {
                        t1700 = *(int *)0xC1EE214;
                        if (t1700 == 15) {
                            t1701 = *(int *)((a4 + 0x18));
                            t1702 = CheckKyakuArea((t1701 + 0x78), 0x7);
                            if (t1702 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t1703 = *(int *)0xC1EE20C;
            if (t1703 == 2) {
                t1704 = *(int *)0xC1EE214;
                if (t1704 != 11) {
                    t1705 = *(int *)0xC1EE214;
                    if (t1705 != 10) {
                        t1706 = *(int *)0xC1EE214;
                        if (t1706 != 14) {
                            t1707 = *(int *)0xC1EE20C;
                            if (t1707 == 0) {
                                t1708 = *(int *)0xC1EE214;
                                if (t1708 != 15) {
                                    t1709 = *(int *)((a4 + 0x198));
                                    t1710 = *(int *)((a4 + 0x18));
                                    t1711 = *(int *)((t1709 + 0x0));
                                    t1712 = CheckKyakuArea((t1710 + 0x78), t1711);
                                    if (t1712 == 0) {
                                        t1713 = *(int *)0xC1EE20C;
                                        if (t1713 == 2) {
                                            t1714 = *(int *)0xC1EE214;
                                            if (t1714 == 10) {
                                                t1715 = *(int *)((a4 + 0x18));
                                                t1716 = *(int *)0xC2A98FC;
                                                t1717 = CheckKyakuArea((t1715 + 0x78), t1716);
                                                if (t1717 == 0) {
                                                    t1718 = *(int *)0xC1EE20C;
                                                    if (t1718 == 0) {
                                                        t1719 = *(int *)0xC1EE214;
                                                        if (t1719 == 15) {
                                                            t1720 = *(int *)((a4 + 0x18));
                                                            t1721 = CheckKyakuArea((t1720 + 0x78), 0x7);
                                                            if (t1721 == 0) {
                                                                return 0x0;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x0;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            t1722 = *(int *)0xC1EE20C;
                                            if (t1722 == 0) {
                                                t1723 = *(int *)0xC1EE214;
                                                if (t1723 == 15) {
                                                    t1724 = *(int *)((a4 + 0x18));
                                                    t1725 = CheckKyakuArea((t1724 + 0x78), 0x7);
                                                    if (t1725 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        t1726 = *(int *)0xC1EE20C;
                                        if (t1726 == 0) {
                                            t1727 = *(int *)0xC1EE214;
                                            if (t1727 == 15) {
                                                t1728 = *(int *)((a4 + 0x18));
                                                t1729 = CheckKyakuArea((t1728 + 0x78), 0x7);
                                                if (t1729 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1730 = *(int *)0xC1EE20C;
                                if (t1730 == 2) {
                                    t1731 = *(int *)0xC1EE214;
                                    if (t1731 == 10) {
                                        t1732 = *(int *)((a4 + 0x18));
                                        t1733 = *(int *)0xC2A98FC;
                                        t1734 = CheckKyakuArea((t1732 + 0x78), t1733);
                                        if (t1734 == 0) {
                                            t1735 = *(int *)0xC1EE20C;
                                            if (t1735 == 0) {
                                                t1736 = *(int *)0xC1EE214;
                                                if (t1736 == 15) {
                                                    t1737 = *(int *)((a4 + 0x18));
                                                    t1738 = CheckKyakuArea((t1737 + 0x78), 0x7);
                                                    if (t1738 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t1739 = *(int *)0xC1EE20C;
                                    if (t1739 == 0) {
                                        t1740 = *(int *)0xC1EE214;
                                        if (t1740 == 15) {
                                            t1741 = *(int *)((a4 + 0x18));
                                            t1742 = CheckKyakuArea((t1741 + 0x78), 0x7);
                                            if (t1742 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t1743 = *(int *)0xC1EE20C;
                                if (t1743 == 0) {
                                    t1744 = *(int *)0xC1EE214;
                                    if (t1744 == 15) {
                                        t1745 = *(int *)((a4 + 0x18));
                                        t1746 = CheckKyakuArea((t1745 + 0x78), 0x7);
                                        if (t1746 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1747 = *(int *)((a4 + 0x198));
                            t1748 = *(int *)((a4 + 0x18));
                            t1749 = *(int *)((t1747 + 0x0));
                            t1750 = CheckKyakuArea((t1748 + 0x78), t1749);
                            if (t1750 == 0) {
                                t1751 = *(int *)0xC1EE20C;
                                if (t1751 == 2) {
                                    t1752 = *(int *)0xC1EE214;
                                    if (t1752 == 10) {
                                        t1753 = *(int *)((a4 + 0x18));
                                        t1754 = *(int *)0xC2A98FC;
                                        t1755 = CheckKyakuArea((t1753 + 0x78), t1754);
                                        if (t1755 == 0) {
                                            t1756 = *(int *)0xC1EE20C;
                                            if (t1756 == 0) {
                                                t1757 = *(int *)0xC1EE214;
                                                if (t1757 == 15) {
                                                    t1758 = *(int *)((a4 + 0x18));
                                                    t1759 = CheckKyakuArea((t1758 + 0x78), 0x7);
                                                    if (t1759 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t1760 = *(int *)0xC1EE20C;
                                    if (t1760 == 0) {
                                        t1761 = *(int *)0xC1EE214;
                                        if (t1761 == 15) {
                                            t1762 = *(int *)((a4 + 0x18));
                                            t1763 = CheckKyakuArea((t1762 + 0x78), 0x7);
                                            if (t1763 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t1764 = *(int *)0xC1EE20C;
                                if (t1764 == 0) {
                                    t1765 = *(int *)0xC1EE214;
                                    if (t1765 == 15) {
                                        t1766 = *(int *)((a4 + 0x18));
                                        t1767 = CheckKyakuArea((t1766 + 0x78), 0x7);
                                        if (t1767 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1768 = *(int *)0xC1EE20C;
                        if (t1768 == 2) {
                            t1769 = *(int *)0xC1EE214;
                            if (t1769 == 10) {
                                t1770 = *(int *)((a4 + 0x18));
                                t1771 = *(int *)0xC2A98FC;
                                t1772 = CheckKyakuArea((t1770 + 0x78), t1771);
                                if (t1772 == 0) {
                                    t1773 = *(int *)0xC1EE20C;
                                    if (t1773 == 0) {
                                        t1774 = *(int *)0xC1EE214;
                                        if (t1774 == 15) {
                                            t1775 = *(int *)((a4 + 0x18));
                                            t1776 = CheckKyakuArea((t1775 + 0x78), 0x7);
                                            if (t1776 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1777 = *(int *)0xC1EE20C;
                            if (t1777 == 0) {
                                t1778 = *(int *)0xC1EE214;
                                if (t1778 == 15) {
                                    t1779 = *(int *)((a4 + 0x18));
                                    t1780 = CheckKyakuArea((t1779 + 0x78), 0x7);
                                    if (t1780 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1781 = *(int *)0xC1EE20C;
                        if (t1781 == 0) {
                            t1782 = *(int *)0xC1EE214;
                            if (t1782 == 15) {
                                t1783 = *(int *)((a4 + 0x18));
                                t1784 = CheckKyakuArea((t1783 + 0x78), 0x7);
                                if (t1784 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1785 = *(int *)0xC1EE20C;
                    if (t1785 == 2) {
                        t1786 = *(int *)0xC1EE214;
                        if (t1786 == 10) {
                            t1787 = *(int *)((a4 + 0x18));
                            t1788 = *(int *)0xC2A98FC;
                            t1789 = CheckKyakuArea((t1787 + 0x78), t1788);
                            if (t1789 == 0) {
                                t1790 = *(int *)0xC1EE20C;
                                if (t1790 == 0) {
                                    t1791 = *(int *)0xC1EE214;
                                    if (t1791 == 15) {
                                        t1792 = *(int *)((a4 + 0x18));
                                        t1793 = CheckKyakuArea((t1792 + 0x78), 0x7);
                                        if (t1793 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1794 = *(int *)0xC1EE20C;
                        if (t1794 == 0) {
                            t1795 = *(int *)0xC1EE214;
                            if (t1795 == 15) {
                                t1796 = *(int *)((a4 + 0x18));
                                t1797 = CheckKyakuArea((t1796 + 0x78), 0x7);
                                if (t1797 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1798 = *(int *)0xC1EE20C;
                    if (t1798 == 0) {
                        t1799 = *(int *)0xC1EE214;
                        if (t1799 == 15) {
                            t1800 = *(int *)((a4 + 0x18));
                            t1801 = CheckKyakuArea((t1800 + 0x78), 0x7);
                            if (t1801 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1802 = *(int *)0xC1EE20C;
                if (t1802 == 2) {
                    t1803 = *(int *)0xC1EE214;
                    if (t1803 == 10) {
                        t1804 = *(int *)((a4 + 0x18));
                        t1805 = *(int *)0xC2A98FC;
                        t1806 = CheckKyakuArea((t1804 + 0x78), t1805);
                        if (t1806 == 0) {
                            t1807 = *(int *)0xC1EE20C;
                            if (t1807 == 0) {
                                t1808 = *(int *)0xC1EE214;
                                if (t1808 == 15) {
                                    t1809 = *(int *)((a4 + 0x18));
                                    t1810 = CheckKyakuArea((t1809 + 0x78), 0x7);
                                    if (t1810 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1811 = *(int *)0xC1EE20C;
                    if (t1811 == 0) {
                        t1812 = *(int *)0xC1EE214;
                        if (t1812 == 15) {
                            t1813 = *(int *)((a4 + 0x18));
                            t1814 = CheckKyakuArea((t1813 + 0x78), 0x7);
                            if (t1814 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1815 = *(int *)0xC1EE20C;
                if (t1815 == 0) {
                    t1816 = *(int *)0xC1EE214;
                    if (t1816 == 15) {
                        t1817 = *(int *)((a4 + 0x18));
                        t1818 = CheckKyakuArea((t1817 + 0x78), 0x7);
                        if (t1818 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1819 = *(int *)0xC1EE20C;
            if (t1819 == 0) {
                t1820 = *(int *)0xC1EE214;
                if (t1820 != 15) {
                    t1821 = *(int *)((a4 + 0x198));
                    t1822 = *(int *)((a4 + 0x18));
                    t1823 = *(int *)((t1821 + 0x0));
                    t1824 = CheckKyakuArea((t1822 + 0x78), t1823);
                    if (t1824 == 0) {
                        t1825 = *(int *)0xC1EE20C;
                        if (t1825 == 2) {
                            t1826 = *(int *)0xC1EE214;
                            if (t1826 == 10) {
                                t1827 = *(int *)((a4 + 0x18));
                                t1828 = *(int *)0xC2A98FC;
                                t1829 = CheckKyakuArea((t1827 + 0x78), t1828);
                                if (t1829 == 0) {
                                    t1830 = *(int *)0xC1EE20C;
                                    if (t1830 == 0) {
                                        t1831 = *(int *)0xC1EE214;
                                        if (t1831 == 15) {
                                            t1832 = *(int *)((a4 + 0x18));
                                            t1833 = CheckKyakuArea((t1832 + 0x78), 0x7);
                                            if (t1833 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1834 = *(int *)0xC1EE20C;
                            if (t1834 == 0) {
                                t1835 = *(int *)0xC1EE214;
                                if (t1835 == 15) {
                                    t1836 = *(int *)((a4 + 0x18));
                                    t1837 = CheckKyakuArea((t1836 + 0x78), 0x7);
                                    if (t1837 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1838 = *(int *)0xC1EE20C;
                        if (t1838 == 0) {
                            t1839 = *(int *)0xC1EE214;
                            if (t1839 == 15) {
                                t1840 = *(int *)((a4 + 0x18));
                                t1841 = CheckKyakuArea((t1840 + 0x78), 0x7);
                                if (t1841 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t1842 = *(int *)0xC1EE20C;
                if (t1842 == 2) {
                    t1843 = *(int *)0xC1EE214;
                    if (t1843 == 10) {
                        t1844 = *(int *)((a4 + 0x18));
                        t1845 = *(int *)0xC2A98FC;
                        t1846 = CheckKyakuArea((t1844 + 0x78), t1845);
                        if (t1846 == 0) {
                            t1847 = *(int *)0xC1EE20C;
                            if (t1847 == 0) {
                                t1848 = *(int *)0xC1EE214;
                                if (t1848 == 15) {
                                    t1849 = *(int *)((a4 + 0x18));
                                    t1850 = CheckKyakuArea((t1849 + 0x78), 0x7);
                                    if (t1850 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1851 = *(int *)0xC1EE20C;
                    if (t1851 == 0) {
                        t1852 = *(int *)0xC1EE214;
                        if (t1852 == 15) {
                            t1853 = *(int *)((a4 + 0x18));
                            t1854 = CheckKyakuArea((t1853 + 0x78), 0x7);
                            if (t1854 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1855 = *(int *)0xC1EE20C;
                if (t1855 == 0) {
                    t1856 = *(int *)0xC1EE214;
                    if (t1856 == 15) {
                        t1857 = *(int *)((a4 + 0x18));
                        t1858 = CheckKyakuArea((t1857 + 0x78), 0x7);
                        if (t1858 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1859 = *(int *)((a4 + 0x198));
            t1860 = *(int *)((a4 + 0x18));
            t1861 = *(int *)((t1859 + 0x0));
            t1862 = CheckKyakuArea((t1860 + 0x78), t1861);
            if (t1862 == 0) {
                t1863 = *(int *)0xC1EE20C;
                if (t1863 == 2) {
                    t1864 = *(int *)0xC1EE214;
                    if (t1864 == 10) {
                        t1865 = *(int *)((a4 + 0x18));
                        t1866 = *(int *)0xC2A98FC;
                        t1867 = CheckKyakuArea((t1865 + 0x78), t1866);
                        if (t1867 == 0) {
                            t1868 = *(int *)0xC1EE20C;
                            if (t1868 == 0) {
                                t1869 = *(int *)0xC1EE214;
                                if (t1869 == 15) {
                                    t1870 = *(int *)((a4 + 0x18));
                                    t1871 = CheckKyakuArea((t1870 + 0x78), 0x7);
                                    if (t1871 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1872 = *(int *)0xC1EE20C;
                    if (t1872 == 0) {
                        t1873 = *(int *)0xC1EE214;
                        if (t1873 == 15) {
                            t1874 = *(int *)((a4 + 0x18));
                            t1875 = CheckKyakuArea((t1874 + 0x78), 0x7);
                            if (t1875 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1876 = *(int *)0xC1EE20C;
                if (t1876 == 0) {
                    t1877 = *(int *)0xC1EE214;
                    if (t1877 == 15) {
                        t1878 = *(int *)((a4 + 0x18));
                        t1879 = CheckKyakuArea((t1878 + 0x78), 0x7);
                        if (t1879 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x1;
        }
        t1880 = *(int *)0xC1EE20C;
        if (t1880 == 2) {
            t1881 = *(int *)0xC1EE214;
            if (t1881 != 11) {
                t1882 = *(int *)0xC1EE214;
                if (t1882 != 10) {
                    t1883 = *(int *)0xC1EE214;
                    if (t1883 != 14) {
                        t1884 = *(int *)0xC1EE20C;
                        if (t1884 == 0) {
                            t1885 = *(int *)0xC1EE214;
                            if (t1885 != 15) {
                                t1886 = *(int *)((a4 + 0x198));
                                t1887 = *(int *)((a4 + 0x18));
                                t1888 = *(int *)((t1886 + 0x0));
                                t1889 = CheckKyakuArea((t1887 + 0x78), t1888);
                                if (t1889 == 0) {
                                    t1890 = *(int *)0xC1EE20C;
                                    if (t1890 == 2) {
                                        t1891 = *(int *)0xC1EE214;
                                        if (t1891 == 10) {
                                            t1892 = *(int *)((a4 + 0x18));
                                            t1893 = *(int *)0xC2A98FC;
                                            t1894 = CheckKyakuArea((t1892 + 0x78), t1893);
                                            if (t1894 == 0) {
                                                t1895 = *(int *)0xC1EE20C;
                                                if (t1895 == 0) {
                                                    t1896 = *(int *)0xC1EE214;
                                                    if (t1896 == 15) {
                                                        t1897 = *(int *)((a4 + 0x18));
                                                        t1898 = CheckKyakuArea((t1897 + 0x78), 0x7);
                                                        if (t1898 == 0) {
                                                            return 0x0;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x0;
                                                }
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        t1899 = *(int *)0xC1EE20C;
                                        if (t1899 == 0) {
                                            t1900 = *(int *)0xC1EE214;
                                            if (t1900 == 15) {
                                                t1901 = *(int *)((a4 + 0x18));
                                                t1902 = CheckKyakuArea((t1901 + 0x78), 0x7);
                                                if (t1902 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    t1903 = *(int *)0xC1EE20C;
                                    if (t1903 == 0) {
                                        t1904 = *(int *)0xC1EE214;
                                        if (t1904 == 15) {
                                            t1905 = *(int *)((a4 + 0x18));
                                            t1906 = CheckKyakuArea((t1905 + 0x78), 0x7);
                                            if (t1906 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t1907 = *(int *)0xC1EE20C;
                            if (t1907 == 2) {
                                t1908 = *(int *)0xC1EE214;
                                if (t1908 == 10) {
                                    t1909 = *(int *)((a4 + 0x18));
                                    t1910 = *(int *)0xC2A98FC;
                                    t1911 = CheckKyakuArea((t1909 + 0x78), t1910);
                                    if (t1911 == 0) {
                                        t1912 = *(int *)0xC1EE20C;
                                        if (t1912 == 0) {
                                            t1913 = *(int *)0xC1EE214;
                                            if (t1913 == 15) {
                                                t1914 = *(int *)((a4 + 0x18));
                                                t1915 = CheckKyakuArea((t1914 + 0x78), 0x7);
                                                if (t1915 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1916 = *(int *)0xC1EE20C;
                                if (t1916 == 0) {
                                    t1917 = *(int *)0xC1EE214;
                                    if (t1917 == 15) {
                                        t1918 = *(int *)((a4 + 0x18));
                                        t1919 = CheckKyakuArea((t1918 + 0x78), 0x7);
                                        if (t1919 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1920 = *(int *)0xC1EE20C;
                            if (t1920 == 0) {
                                t1921 = *(int *)0xC1EE214;
                                if (t1921 == 15) {
                                    t1922 = *(int *)((a4 + 0x18));
                                    t1923 = CheckKyakuArea((t1922 + 0x78), 0x7);
                                    if (t1923 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t1924 = *(int *)((a4 + 0x198));
                        t1925 = *(int *)((a4 + 0x18));
                        t1926 = *(int *)((t1924 + 0x0));
                        t1927 = CheckKyakuArea((t1925 + 0x78), t1926);
                        if (t1927 == 0) {
                            t1928 = *(int *)0xC1EE20C;
                            if (t1928 == 2) {
                                t1929 = *(int *)0xC1EE214;
                                if (t1929 == 10) {
                                    t1930 = *(int *)((a4 + 0x18));
                                    t1931 = *(int *)0xC2A98FC;
                                    t1932 = CheckKyakuArea((t1930 + 0x78), t1931);
                                    if (t1932 == 0) {
                                        t1933 = *(int *)0xC1EE20C;
                                        if (t1933 == 0) {
                                            t1934 = *(int *)0xC1EE214;
                                            if (t1934 == 15) {
                                                t1935 = *(int *)((a4 + 0x18));
                                                t1936 = CheckKyakuArea((t1935 + 0x78), 0x7);
                                                if (t1936 == 0) {
                                                    return 0x0;
                                                }
                                                return 0x1;
                                            }
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                t1937 = *(int *)0xC1EE20C;
                                if (t1937 == 0) {
                                    t1938 = *(int *)0xC1EE214;
                                    if (t1938 == 15) {
                                        t1939 = *(int *)((a4 + 0x18));
                                        t1940 = CheckKyakuArea((t1939 + 0x78), 0x7);
                                        if (t1940 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            t1941 = *(int *)0xC1EE20C;
                            if (t1941 == 0) {
                                t1942 = *(int *)0xC1EE214;
                                if (t1942 == 15) {
                                    t1943 = *(int *)((a4 + 0x18));
                                    t1944 = CheckKyakuArea((t1943 + 0x78), 0x7);
                                    if (t1944 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1945 = *(int *)0xC1EE20C;
                    if (t1945 == 2) {
                        t1946 = *(int *)0xC1EE214;
                        if (t1946 == 10) {
                            t1947 = *(int *)((a4 + 0x18));
                            t1948 = *(int *)0xC2A98FC;
                            t1949 = CheckKyakuArea((t1947 + 0x78), t1948);
                            if (t1949 == 0) {
                                t1950 = *(int *)0xC1EE20C;
                                if (t1950 == 0) {
                                    t1951 = *(int *)0xC1EE214;
                                    if (t1951 == 15) {
                                        t1952 = *(int *)((a4 + 0x18));
                                        t1953 = CheckKyakuArea((t1952 + 0x78), 0x7);
                                        if (t1953 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t1954 = *(int *)0xC1EE20C;
                        if (t1954 == 0) {
                            t1955 = *(int *)0xC1EE214;
                            if (t1955 == 15) {
                                t1956 = *(int *)((a4 + 0x18));
                                t1957 = CheckKyakuArea((t1956 + 0x78), 0x7);
                                if (t1957 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t1958 = *(int *)0xC1EE20C;
                    if (t1958 == 0) {
                        t1959 = *(int *)0xC1EE214;
                        if (t1959 == 15) {
                            t1960 = *(int *)((a4 + 0x18));
                            t1961 = CheckKyakuArea((t1960 + 0x78), 0x7);
                            if (t1961 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1962 = *(int *)0xC1EE20C;
                if (t1962 == 2) {
                    t1963 = *(int *)0xC1EE214;
                    if (t1963 == 10) {
                        t1964 = *(int *)((a4 + 0x18));
                        t1965 = *(int *)0xC2A98FC;
                        t1966 = CheckKyakuArea((t1964 + 0x78), t1965);
                        if (t1966 == 0) {
                            t1967 = *(int *)0xC1EE20C;
                            if (t1967 == 0) {
                                t1968 = *(int *)0xC1EE214;
                                if (t1968 == 15) {
                                    t1969 = *(int *)((a4 + 0x18));
                                    t1970 = CheckKyakuArea((t1969 + 0x78), 0x7);
                                    if (t1970 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t1971 = *(int *)0xC1EE20C;
                    if (t1971 == 0) {
                        t1972 = *(int *)0xC1EE214;
                        if (t1972 == 15) {
                            t1973 = *(int *)((a4 + 0x18));
                            t1974 = CheckKyakuArea((t1973 + 0x78), 0x7);
                            if (t1974 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t1975 = *(int *)0xC1EE20C;
                if (t1975 == 0) {
                    t1976 = *(int *)0xC1EE214;
                    if (t1976 == 15) {
                        t1977 = *(int *)((a4 + 0x18));
                        t1978 = CheckKyakuArea((t1977 + 0x78), 0x7);
                        if (t1978 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1979 = *(int *)0xC1EE20C;
            if (t1979 == 2) {
                t1980 = *(int *)0xC1EE214;
                if (t1980 == 10) {
                    t1981 = *(int *)((a4 + 0x18));
                    t1982 = *(int *)0xC2A98FC;
                    t1983 = CheckKyakuArea((t1981 + 0x78), t1982);
                    if (t1983 == 0) {
                        t1984 = *(int *)0xC1EE20C;
                        if (t1984 == 0) {
                            t1985 = *(int *)0xC1EE214;
                            if (t1985 == 15) {
                                t1986 = *(int *)((a4 + 0x18));
                                t1987 = CheckKyakuArea((t1986 + 0x78), 0x7);
                                if (t1987 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t1988 = *(int *)0xC1EE20C;
                if (t1988 == 0) {
                    t1989 = *(int *)0xC1EE214;
                    if (t1989 == 15) {
                        t1990 = *(int *)((a4 + 0x18));
                        t1991 = CheckKyakuArea((t1990 + 0x78), 0x7);
                        if (t1991 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t1992 = *(int *)0xC1EE20C;
            if (t1992 == 0) {
                t1993 = *(int *)0xC1EE214;
                if (t1993 == 15) {
                    t1994 = *(int *)((a4 + 0x18));
                    t1995 = CheckKyakuArea((t1994 + 0x78), 0x7);
                    if (t1995 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t1996 = *(int *)0xC1EE20C;
        if (t1996 == 0) {
            t1997 = *(int *)0xC1EE214;
            if (t1997 != 15) {
                t1998 = *(int *)((a4 + 0x198));
                t1999 = *(int *)((a4 + 0x18));
                t2000 = *(int *)((t1998 + 0x0));
                t2001 = CheckKyakuArea((t1999 + 0x78), t2000);
                if (t2001 == 0) {
                    t2002 = *(int *)0xC1EE20C;
                    if (t2002 == 2) {
                        t2003 = *(int *)0xC1EE214;
                        if (t2003 == 10) {
                            t2004 = *(int *)((a4 + 0x18));
                            t2005 = *(int *)0xC2A98FC;
                            t2006 = CheckKyakuArea((t2004 + 0x78), t2005);
                            if (t2006 == 0) {
                                t2007 = *(int *)0xC1EE20C;
                                if (t2007 == 0) {
                                    t2008 = *(int *)0xC1EE214;
                                    if (t2008 == 15) {
                                        t2009 = *(int *)((a4 + 0x18));
                                        t2010 = CheckKyakuArea((t2009 + 0x78), 0x7);
                                        if (t2010 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t2011 = *(int *)0xC1EE20C;
                        if (t2011 == 0) {
                            t2012 = *(int *)0xC1EE214;
                            if (t2012 == 15) {
                                t2013 = *(int *)((a4 + 0x18));
                                t2014 = CheckKyakuArea((t2013 + 0x78), 0x7);
                                if (t2014 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t2015 = *(int *)0xC1EE20C;
                    if (t2015 == 0) {
                        t2016 = *(int *)0xC1EE214;
                        if (t2016 == 15) {
                            t2017 = *(int *)((a4 + 0x18));
                            t2018 = CheckKyakuArea((t2017 + 0x78), 0x7);
                            if (t2018 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t2019 = *(int *)0xC1EE20C;
            if (t2019 == 2) {
                t2020 = *(int *)0xC1EE214;
                if (t2020 == 10) {
                    t2021 = *(int *)((a4 + 0x18));
                    t2022 = *(int *)0xC2A98FC;
                    t2023 = CheckKyakuArea((t2021 + 0x78), t2022);
                    if (t2023 == 0) {
                        t2024 = *(int *)0xC1EE20C;
                        if (t2024 == 0) {
                            t2025 = *(int *)0xC1EE214;
                            if (t2025 == 15) {
                                t2026 = *(int *)((a4 + 0x18));
                                t2027 = CheckKyakuArea((t2026 + 0x78), 0x7);
                                if (t2027 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t2028 = *(int *)0xC1EE20C;
                if (t2028 == 0) {
                    t2029 = *(int *)0xC1EE214;
                    if (t2029 == 15) {
                        t2030 = *(int *)((a4 + 0x18));
                        t2031 = CheckKyakuArea((t2030 + 0x78), 0x7);
                        if (t2031 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t2032 = *(int *)0xC1EE20C;
            if (t2032 == 0) {
                t2033 = *(int *)0xC1EE214;
                if (t2033 == 15) {
                    t2034 = *(int *)((a4 + 0x18));
                    t2035 = CheckKyakuArea((t2034 + 0x78), 0x7);
                    if (t2035 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t2036 = *(int *)((a4 + 0x198));
        t2037 = *(int *)((a4 + 0x18));
        t2038 = *(int *)((t2036 + 0x0));
        t2039 = CheckKyakuArea((t2037 + 0x78), t2038);
        if (t2039 == 0) {
            t2040 = *(int *)0xC1EE20C;
            if (t2040 == 2) {
                t2041 = *(int *)0xC1EE214;
                if (t2041 == 10) {
                    t2042 = *(int *)((a4 + 0x18));
                    t2043 = *(int *)0xC2A98FC;
                    t2044 = CheckKyakuArea((t2042 + 0x78), t2043);
                    if (t2044 == 0) {
                        t2045 = *(int *)0xC1EE20C;
                        if (t2045 == 0) {
                            t2046 = *(int *)0xC1EE214;
                            if (t2046 == 15) {
                                t2047 = *(int *)((a4 + 0x18));
                                t2048 = CheckKyakuArea((t2047 + 0x78), 0x7);
                                if (t2048 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t2049 = *(int *)0xC1EE20C;
                if (t2049 == 0) {
                    t2050 = *(int *)0xC1EE214;
                    if (t2050 == 15) {
                        t2051 = *(int *)((a4 + 0x18));
                        t2052 = CheckKyakuArea((t2051 + 0x78), 0x7);
                        if (t2052 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t2053 = *(int *)0xC1EE20C;
            if (t2053 == 0) {
                t2054 = *(int *)0xC1EE214;
                if (t2054 == 15) {
                    t2055 = *(int *)((a4 + 0x18));
                    t2056 = CheckKyakuArea((t2055 + 0x78), 0x7);
                    if (t2056 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x1;
    }
    t2057 = *(int *)0xC1EE20C;
    if (t2057 == 2) {
        t2058 = *(int *)0xC1EE214;
        if (t2058 != 11) {
            t2059 = *(int *)0xC1EE214;
            if (t2059 != 10) {
                t2060 = *(int *)0xC1EE214;
                if (t2060 != 14) {
                    t2061 = *(int *)0xC1EE20C;
                    if (t2061 == 0) {
                        t2062 = *(int *)0xC1EE214;
                        if (t2062 != 15) {
                            t2063 = *(int *)((a4 + 0x198));
                            t2064 = *(int *)((a4 + 0x18));
                            t2065 = *(int *)((t2063 + 0x0));
                            t2066 = CheckKyakuArea((t2064 + 0x78), t2065);
                            if (t2066 == 0) {
                                t2067 = *(int *)0xC1EE20C;
                                if (t2067 == 2) {
                                    t2068 = *(int *)0xC1EE214;
                                    if (t2068 == 10) {
                                        t2069 = *(int *)((a4 + 0x18));
                                        t2070 = *(int *)0xC2A98FC;
                                        t2071 = CheckKyakuArea((t2069 + 0x78), t2070);
                                        if (t2071 == 0) {
                                            t2072 = *(int *)0xC1EE20C;
                                            if (t2072 == 0) {
                                                t2073 = *(int *)0xC1EE214;
                                                if (t2073 == 15) {
                                                    t2074 = *(int *)((a4 + 0x18));
                                                    t2075 = CheckKyakuArea((t2074 + 0x78), 0x7);
                                                    if (t2075 == 0) {
                                                        return 0x0;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x0;
                                            }
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    t2076 = *(int *)0xC1EE20C;
                                    if (t2076 == 0) {
                                        t2077 = *(int *)0xC1EE214;
                                        if (t2077 == 15) {
                                            t2078 = *(int *)((a4 + 0x18));
                                            t2079 = CheckKyakuArea((t2078 + 0x78), 0x7);
                                            if (t2079 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                t2080 = *(int *)0xC1EE20C;
                                if (t2080 == 0) {
                                    t2081 = *(int *)0xC1EE214;
                                    if (t2081 == 15) {
                                        t2082 = *(int *)((a4 + 0x18));
                                        t2083 = CheckKyakuArea((t2082 + 0x78), 0x7);
                                        if (t2083 == 0) {
                                            return 0x0;
                                        }
                                        return 0x1;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        t2084 = *(int *)0xC1EE20C;
                        if (t2084 == 2) {
                            t2085 = *(int *)0xC1EE214;
                            if (t2085 == 10) {
                                t2086 = *(int *)((a4 + 0x18));
                                t2087 = *(int *)0xC2A98FC;
                                t2088 = CheckKyakuArea((t2086 + 0x78), t2087);
                                if (t2088 == 0) {
                                    t2089 = *(int *)0xC1EE20C;
                                    if (t2089 == 0) {
                                        t2090 = *(int *)0xC1EE214;
                                        if (t2090 == 15) {
                                            t2091 = *(int *)((a4 + 0x18));
                                            t2092 = CheckKyakuArea((t2091 + 0x78), 0x7);
                                            if (t2092 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t2093 = *(int *)0xC1EE20C;
                            if (t2093 == 0) {
                                t2094 = *(int *)0xC1EE214;
                                if (t2094 == 15) {
                                    t2095 = *(int *)((a4 + 0x18));
                                    t2096 = CheckKyakuArea((t2095 + 0x78), 0x7);
                                    if (t2096 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t2097 = *(int *)0xC1EE20C;
                        if (t2097 == 0) {
                            t2098 = *(int *)0xC1EE214;
                            if (t2098 == 15) {
                                t2099 = *(int *)((a4 + 0x18));
                                t2100 = CheckKyakuArea((t2099 + 0x78), 0x7);
                                if (t2100 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t2101 = *(int *)((a4 + 0x198));
                    t2102 = *(int *)((a4 + 0x18));
                    t2103 = *(int *)((t2101 + 0x0));
                    t2104 = CheckKyakuArea((t2102 + 0x78), t2103);
                    if (t2104 == 0) {
                        t2105 = *(int *)0xC1EE20C;
                        if (t2105 == 2) {
                            t2106 = *(int *)0xC1EE214;
                            if (t2106 == 10) {
                                t2107 = *(int *)((a4 + 0x18));
                                t2108 = *(int *)0xC2A98FC;
                                t2109 = CheckKyakuArea((t2107 + 0x78), t2108);
                                if (t2109 == 0) {
                                    t2110 = *(int *)0xC1EE20C;
                                    if (t2110 == 0) {
                                        t2111 = *(int *)0xC1EE214;
                                        if (t2111 == 15) {
                                            t2112 = *(int *)((a4 + 0x18));
                                            t2113 = CheckKyakuArea((t2112 + 0x78), 0x7);
                                            if (t2113 == 0) {
                                                return 0x0;
                                            }
                                            return 0x1;
                                        }
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            t2114 = *(int *)0xC1EE20C;
                            if (t2114 == 0) {
                                t2115 = *(int *)0xC1EE214;
                                if (t2115 == 15) {
                                    t2116 = *(int *)((a4 + 0x18));
                                    t2117 = CheckKyakuArea((t2116 + 0x78), 0x7);
                                    if (t2117 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        t2118 = *(int *)0xC1EE20C;
                        if (t2118 == 0) {
                            t2119 = *(int *)0xC1EE214;
                            if (t2119 == 15) {
                                t2120 = *(int *)((a4 + 0x18));
                                t2121 = CheckKyakuArea((t2120 + 0x78), 0x7);
                                if (t2121 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t2122 = *(int *)0xC1EE20C;
                if (t2122 == 2) {
                    t2123 = *(int *)0xC1EE214;
                    if (t2123 == 10) {
                        t2124 = *(int *)((a4 + 0x18));
                        t2125 = *(int *)0xC2A98FC;
                        t2126 = CheckKyakuArea((t2124 + 0x78), t2125);
                        if (t2126 == 0) {
                            t2127 = *(int *)0xC1EE20C;
                            if (t2127 == 0) {
                                t2128 = *(int *)0xC1EE214;
                                if (t2128 == 15) {
                                    t2129 = *(int *)((a4 + 0x18));
                                    t2130 = CheckKyakuArea((t2129 + 0x78), 0x7);
                                    if (t2130 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t2131 = *(int *)0xC1EE20C;
                    if (t2131 == 0) {
                        t2132 = *(int *)0xC1EE214;
                        if (t2132 == 15) {
                            t2133 = *(int *)((a4 + 0x18));
                            t2134 = CheckKyakuArea((t2133 + 0x78), 0x7);
                            if (t2134 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t2135 = *(int *)0xC1EE20C;
                if (t2135 == 0) {
                    t2136 = *(int *)0xC1EE214;
                    if (t2136 == 15) {
                        t2137 = *(int *)((a4 + 0x18));
                        t2138 = CheckKyakuArea((t2137 + 0x78), 0x7);
                        if (t2138 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t2139 = *(int *)0xC1EE20C;
            if (t2139 == 2) {
                t2140 = *(int *)0xC1EE214;
                if (t2140 == 10) {
                    t2141 = *(int *)((a4 + 0x18));
                    t2142 = *(int *)0xC2A98FC;
                    t2143 = CheckKyakuArea((t2141 + 0x78), t2142);
                    if (t2143 == 0) {
                        t2144 = *(int *)0xC1EE20C;
                        if (t2144 == 0) {
                            t2145 = *(int *)0xC1EE214;
                            if (t2145 == 15) {
                                t2146 = *(int *)((a4 + 0x18));
                                t2147 = CheckKyakuArea((t2146 + 0x78), 0x7);
                                if (t2147 == 0) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x1;
                }
                t2148 = *(int *)0xC1EE20C;
                if (t2148 == 0) {
                    t2149 = *(int *)0xC1EE214;
                    if (t2149 == 15) {
                        t2150 = *(int *)((a4 + 0x18));
                        t2151 = CheckKyakuArea((t2150 + 0x78), 0x7);
                        if (t2151 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            t2152 = *(int *)0xC1EE20C;
            if (t2152 == 0) {
                t2153 = *(int *)0xC1EE214;
                if (t2153 == 15) {
                    t2154 = *(int *)((a4 + 0x18));
                    t2155 = CheckKyakuArea((t2154 + 0x78), 0x7);
                    if (t2155 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t2156 = *(int *)0xC1EE20C;
        if (t2156 == 2) {
            t2157 = *(int *)0xC1EE214;
            if (t2157 == 10) {
                t2158 = *(int *)((a4 + 0x18));
                t2159 = *(int *)0xC2A98FC;
                t2160 = CheckKyakuArea((t2158 + 0x78), t2159);
                if (t2160 == 0) {
                    t2161 = *(int *)0xC1EE20C;
                    if (t2161 == 0) {
                        t2162 = *(int *)0xC1EE214;
                        if (t2162 == 15) {
                            t2163 = *(int *)((a4 + 0x18));
                            t2164 = CheckKyakuArea((t2163 + 0x78), 0x7);
                            if (t2164 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t2165 = *(int *)0xC1EE20C;
            if (t2165 == 0) {
                t2166 = *(int *)0xC1EE214;
                if (t2166 == 15) {
                    t2167 = *(int *)((a4 + 0x18));
                    t2168 = CheckKyakuArea((t2167 + 0x78), 0x7);
                    if (t2168 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t2169 = *(int *)0xC1EE20C;
        if (t2169 == 0) {
            t2170 = *(int *)0xC1EE214;
            if (t2170 == 15) {
                t2171 = *(int *)((a4 + 0x18));
                t2172 = CheckKyakuArea((t2171 + 0x78), 0x7);
                if (t2172 == 0) {
                    return 0x0;
                }
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    t2173 = *(int *)0xC1EE20C;
    if (t2173 == 0) {
        t2174 = *(int *)0xC1EE214;
        if (t2174 != 15) {
            t2175 = *(int *)((a4 + 0x198));
            t2176 = *(int *)((a4 + 0x18));
            t2177 = *(int *)((t2175 + 0x0));
            t2178 = CheckKyakuArea((t2176 + 0x78), t2177);
            if (t2178 == 0) {
                t2179 = *(int *)0xC1EE20C;
                if (t2179 == 2) {
                    t2180 = *(int *)0xC1EE214;
                    if (t2180 == 10) {
                        t2181 = *(int *)((a4 + 0x18));
                        t2182 = *(int *)0xC2A98FC;
                        t2183 = CheckKyakuArea((t2181 + 0x78), t2182);
                        if (t2183 == 0) {
                            t2184 = *(int *)0xC1EE20C;
                            if (t2184 == 0) {
                                t2185 = *(int *)0xC1EE214;
                                if (t2185 == 15) {
                                    t2186 = *(int *)((a4 + 0x18));
                                    t2187 = CheckKyakuArea((t2186 + 0x78), 0x7);
                                    if (t2187 == 0) {
                                        return 0x0;
                                    }
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    t2188 = *(int *)0xC1EE20C;
                    if (t2188 == 0) {
                        t2189 = *(int *)0xC1EE214;
                        if (t2189 == 15) {
                            t2190 = *(int *)((a4 + 0x18));
                            t2191 = CheckKyakuArea((t2190 + 0x78), 0x7);
                            if (t2191 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t2192 = *(int *)0xC1EE20C;
                if (t2192 == 0) {
                    t2193 = *(int *)0xC1EE214;
                    if (t2193 == 15) {
                        t2194 = *(int *)((a4 + 0x18));
                        t2195 = CheckKyakuArea((t2194 + 0x78), 0x7);
                        if (t2195 == 0) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x1;
        }
        t2196 = *(int *)0xC1EE20C;
        if (t2196 == 2) {
            t2197 = *(int *)0xC1EE214;
            if (t2197 == 10) {
                t2198 = *(int *)((a4 + 0x18));
                t2199 = *(int *)0xC2A98FC;
                t2200 = CheckKyakuArea((t2198 + 0x78), t2199);
                if (t2200 == 0) {
                    t2201 = *(int *)0xC1EE20C;
                    if (t2201 == 0) {
                        t2202 = *(int *)0xC1EE214;
                        if (t2202 == 15) {
                            t2203 = *(int *)((a4 + 0x18));
                            t2204 = CheckKyakuArea((t2203 + 0x78), 0x7);
                            if (t2204 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t2205 = *(int *)0xC1EE20C;
            if (t2205 == 0) {
                t2206 = *(int *)0xC1EE214;
                if (t2206 == 15) {
                    t2207 = *(int *)((a4 + 0x18));
                    t2208 = CheckKyakuArea((t2207 + 0x78), 0x7);
                    if (t2208 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t2209 = *(int *)0xC1EE20C;
        if (t2209 == 0) {
            t2210 = *(int *)0xC1EE214;
            if (t2210 == 15) {
                t2211 = *(int *)((a4 + 0x18));
                t2212 = CheckKyakuArea((t2211 + 0x78), 0x7);
                if (t2212 == 0) {
                    return 0x0;
                }
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    t2213 = *(int *)((a4 + 0x198));
    t2214 = *(int *)((a4 + 0x18));
    t2215 = *(int *)((t2213 + 0x0));
    t2216 = CheckKyakuArea((t2214 + 0x78), t2215);
    if (t2216 == 0) {
        t2217 = *(int *)0xC1EE20C;
        if (t2217 == 2) {
            t2218 = *(int *)0xC1EE214;
            if (t2218 == 10) {
                t2219 = *(int *)((a4 + 0x18));
                t2220 = *(int *)0xC2A98FC;
                t2221 = CheckKyakuArea((t2219 + 0x78), t2220);
                if (t2221 == 0) {
                    t2222 = *(int *)0xC1EE20C;
                    if (t2222 == 0) {
                        t2223 = *(int *)0xC1EE214;
                        if (t2223 == 15) {
                            t2224 = *(int *)((a4 + 0x18));
                            t2225 = CheckKyakuArea((t2224 + 0x78), 0x7);
                            if (t2225 == 0) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x1;
            }
            t2226 = *(int *)0xC1EE20C;
            if (t2226 == 0) {
                t2227 = *(int *)0xC1EE214;
                if (t2227 == 15) {
                    t2228 = *(int *)((a4 + 0x18));
                    t2229 = CheckKyakuArea((t2228 + 0x78), 0x7);
                    if (t2229 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t2230 = *(int *)0xC1EE20C;
        if (t2230 == 0) {
            t2231 = *(int *)0xC1EE214;
            if (t2231 == 15) {
                t2232 = *(int *)((a4 + 0x18));
                t2233 = CheckKyakuArea((t2232 + 0x78), 0x7);
                if (t2233 == 0) {
                    return 0x0;
                }
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x1;
}

