/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetAverageAngle(int, int, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetTranslate(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
extern int nlPushMatrix();
int nlTranslate(float, float, float);
int nlTranslateV(int);
int sklRotate(int);
int SklIpPlay(int a4, int a5, int a6, int a7, int a8, int a9, float f4);

int SklIpPlay(int a4, int a5, int a6, int a7, int a8, int a9, float f4)
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
    float u26;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
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
    int t57;
    int t58;
    int t144;
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
    int t161;
    int t162;
    int t231;
    int t238;
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
    int t255;
    int t256;
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
    int t323;
    int t324;
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
    int t361;
    int t362;
    int t368;
    int t387;
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
    int t404;
    int t405;
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
    int t472;
    int t473;
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
    int t495;
    int t496;
    int t502;
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
    int t532;
    int t533;
    int t624;
    int t630;
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
    int t647;
    int t648;
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
    int t690;
    int t691;
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
    int t713;
    int t714;
    int t721;
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
    int t738;
    int t739;
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
    int t778;
    int t779;
    int t785;
    int t786;
    int t787;
    int t788;
    int t789;
    int t790;
    int t791;
    int t792;
    int t793;
    int t795;
    int t796;
    int t803;
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t0 = *(int *)(((a8 << 2) + 0xC1331B0));
    t1 = *(int *)(((int)stk + 8));
    t2 = *(short *)((t1 + 0x0));
    t3 = *(int *)(((int)stk + 12));
    t4 = (int)((int)t3 % (int)((unsigned short)t2 - 1));
    *(unsigned int *)(((int)stk + 12)) = (t4 + 0x1);
    t5 = *(int *)(((int)stk + 4));
    t6 = *(short *)((t5 + 0x0));
    t7 = *(int *)(((int)stk + 16));
    t8 = (int)((int)t7 % (int)((unsigned short)t6 - 1));
    *(unsigned int *)(((int)stk + 16)) = (t8 + 0x1);
    t9 = *(int *)(((int)stk + 8));
    t10 = *(int *)(((int)stk + 12));
    t11 = *(int *)(((int)stk + 8));
    t12 = *(int *)((t9 + 0x8));
    t13 = *(int *)(((int)stk + 4));
    t14 = *(int *)((t13 + 0x8));
    t15 = *(int *)(((int)stk + 16));
    t16 = ((int (*)(int, float))(nlPushMatrix))(0x0, f4);
    t17 = *(int *)(((int)stk + 4));
    t18 = *(int *)(((int)stk + 8));
    t19 = *(int *)((t17 + 0x4));
    t20 = *(int *)(((int)stk + 16));
    t21 = *(int *)(((int)stk + 8));
    t22 = *(int *)((t21 + 0x4));
    t23 = *(int *)(((int)stk + 12));
    nlGetAverageVector(((t18 - t22) + (((t23 << 1) + t23) << 2)), ((t17 - t19) + (((t20 << 1) + t20) << 2)), (((int)stk + 4) + 0x18), (1.0f - f4), f4);
    if (a9 == 0) {
        nlTranslateV((((int)stk + 4) + 0x18));
    } else {
        u26 = *(float *)(((int)stk + 32));
        nlTranslate(0.0f, u26, 0.0f);
    }
    t31 = *(short *)((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x0));
    t32 = *(short *)((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x0));
    t33 = GetAverageAngle(t32, t31, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t33;
    t34 = *(short *)((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x2));
    t35 = *(short *)((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x2));
    t36 = GetAverageAngle(t35, t34, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t36;
    t37 = *(short *)((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4));
    t38 = *(short *)((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x4));
    t39 = GetAverageAngle(t38, t37, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t39;
    sklRotate((((int)stk + 4) + 0x10));
    t41 = ((int (*)(int))(nlPushMatrix))(0x0);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x30);
    *(unsigned int *)(((int)stk + 8)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x30);
    t42 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x30) + 0x0));
    t43 = *(int *)(((int)stk + 4));
    t44 = *(short *)((t43 + 0x0));
    t45 = GetAverageAngle(t44, t42, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t45;
    t46 = *(int *)(((int)stk + 8));
    t47 = *(int *)(((int)stk + 4));
    t48 = *(short *)((t46 + 0x2));
    t49 = *(short *)((t47 + 0x2));
    t50 = GetAverageAngle(t49, t48, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t50;
    t51 = *(int *)(((int)stk + 8));
    t52 = *(int *)(((int)stk + 4));
    t53 = *(short *)((t51 + 0x4));
    t54 = *(short *)((t52 + 0x4));
    t55 = GetAverageAngle(t54, t53, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t55;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x20);
    t57 = *(int *)(((t0 + 0x20) + 0x0));
    if (t57 != 0) {
        t58 = *(int *)(((t0 + 0x20) + 0x0));
        nlObjPutUseViewMatrix(t58);
    }
    if (a8 != 1) {
        if (a8 != 3) {
            if (a8 != 12) {
                if (a8 != 17) {
                    if (a8 != 18) {
                        if (a8 != 19) {
                            if (a8 != 20) {
                                if (a8 != 21) {
                                    if (a8 != 23) {
                                        if (a8 != 29) {
                                            if (a8 != 34) {
                                                if (a8 != 37) {
                                                    if (a8 != 53) {
                                                        if (a8 != 54) {
                                                            if (a8 != 59) {
                                                                if (a8 != 61) {
                                                                } else {
                                                                    nlObjPutUseViewMatrix(0xC49AFA8);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC56E778);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC55C470);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC5027E8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC4EE460);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC4B15B8);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC4AAA40);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4A87C8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4A68B0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4A49E0);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4A2C40);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A0878);
            }
        } else {
            nlObjPutUseViewMatrix(0xC495C20);
        }
    } else {
        nlObjPutUseViewMatrix(0xC567178);
    }
    t144 = ((int (*)(int))(nlPushMatrix))(0x0);
    nlTranslateV(0xC0D5430);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x6);
    *(unsigned int *)(((int)stk + 8)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x6);
    t146 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x6) + 0x0));
    t147 = *(int *)(((int)stk + 4));
    t148 = *(short *)((t147 + 0x0));
    t149 = GetAverageAngle(t148, t146, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t149;
    t150 = *(int *)(((int)stk + 8));
    t151 = *(int *)(((int)stk + 4));
    t152 = *(short *)((t150 + 0x2));
    t153 = *(short *)((t151 + 0x2));
    t154 = GetAverageAngle(t153, t152, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t154;
    t155 = *(int *)(((int)stk + 8));
    t156 = *(int *)(((int)stk + 4));
    t157 = *(short *)((t155 + 0x4));
    t158 = *(short *)((t156 + 0x4));
    t159 = GetAverageAngle(t158, t157, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t159;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x4);
    t161 = *(int *)(((t0 + 0x4) + 0x0));
    if (t161 != 0) {
        t162 = *(int *)(((t0 + 0x4) + 0x0));
        nlObjPutUseViewMatrix(t162);
    }
    if ((unsigned int)(a8 - 1) < (unsigned int)0x3E) {
        switch (((a8 - 1) << 1)) {
            case 0:
            {
                nlObjPutUseViewMatrix(0xC5634F8);
                nlObjPutUseViewMatrix(0xC5638B8);
                nlObjPutUseViewMatrix(0xC563D68);
            }
                break;
            case 2:
            {
                nlObjPutUseViewMatrix(0xC572F28);
                nlObjPutUseViewMatrix(0xC572D08);
                nlObjPutUseViewMatrix(0xC573600);
            }
                break;
            case 4:
            {
                nlObjPutUseViewMatrix(0xC492DA0);
                nlObjPutUseViewMatrix(0xC493068);
            }
                break;
            case 6:
            {
                nlObjPutUseViewMatrix(0xC5849B0);
            }
                break;
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 34:
            case 46:
            case 48:
            case 50:
            case 54:
            case 56:
            case 60:
            case 62:
            case 64:
            case 70:
            case 72:
            case 74:
            case 82:
            case 88:
            case 96:
            case 104:
            {
            }
                break;
            case 20:
            {
                nlObjPutUseViewMatrix(0xC59E200);
            }
                break;
            case 24:
            {
                nlObjPutUseViewMatrix(0xC5A1B78);
            }
                break;
            case 26:
            {
                nlObjPutUseViewMatrix(0xC5A3430);
                nlObjPutUseViewMatrix(0xC5A3788);
            }
                break;
            case 28:
            {
                nlObjPutUseViewMatrix(0xC5A5CD0);
                nlObjPutUseViewMatrix(0xC5A6028);
            }
                break;
            case 30:
            {
                nlObjPutUseViewMatrix(0xC5A8688);
            }
                break;
            case 32:
            {
                nlObjPutUseViewMatrix(0xC4A1DC0);
            }
                break;
            case 36:
            {
                nlObjPutUseViewMatrix(0xC4A5A30);
            }
                break;
            case 38:
            {
                nlObjPutUseViewMatrix(0xC4A7900);
            }
                break;
            case 40:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 42:
            {
                nlObjPutUseViewMatrix(0xC4ABD18);
            }
                break;
            case 44:
            {
                nlObjPutUseViewMatrix(0xC4AF058);
            }
                break;
            case 52:
            {
                nlObjPutUseViewMatrix(0xC4C5B10);
                nlObjPutUseViewMatrix(0xC4C5CF8);
                nlObjPutUseViewMatrix(0xC4C5EF8);
            }
                break;
            case 58:
            {
                nlObjPutUseViewMatrix(0xC4D6B70);
                nlObjPutUseViewMatrix(0xC4D6D60);
            }
                break;
            case 66:
            {
                nlObjPutUseViewMatrix(0xC4EC4E8);
            }
                break;
            case 68:
            {
                nlObjPutUseViewMatrix(0xC4F6420);
            }
                break;
            case 76:
            {
                nlObjPutUseViewMatrix(0xC50B4E0);
            }
                break;
            case 78:
            {
                nlObjPutUseViewMatrix(0xC511448);
                nlObjPutUseViewMatrix(0xC5116E8);
            }
                break;
            case 80:
            {
                nlObjPutUseViewMatrix(0xC516FD0);
            }
                break;
            case 84:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
            }
                break;
            case 86:
            {
                nlObjPutUseViewMatrix(0xC527BC8);
            }
                break;
            case 90:
            {
                nlObjPutUseViewMatrix(0xC532F58);
            }
                break;
            case 92:
            {
                nlObjPutUseViewMatrix(0xC5386F8);
            }
                break;
            case 94:
            {
                nlObjPutUseViewMatrix(0xC53E200);
            }
                break;
            case 98:
            {
                nlObjPutUseViewMatrix(0xC549570);
            }
                break;
            case 100:
            {
                nlObjPutUseViewMatrix(0xC54EB48);
            }
                break;
            case 102:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
            }
                break;
            case 106:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 108:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 110:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 112:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 114:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 116:
            {
                nlObjPutUseViewMatrix(0xC569030);
                nlObjPutUseViewMatrix(0xC5693F0);
                nlObjPutUseViewMatrix(0xC5698A0);
            }
                break;
            case 118:
            {
                nlObjPutUseViewMatrix(0xC579890);
                nlObjPutUseViewMatrix(0xC579670);
                nlObjPutUseViewMatrix(0xC5794F0);
            }
                break;
            case 120:
            {
                nlObjPutUseViewMatrix(0xC4970A0);
                nlObjPutUseViewMatrix(0xC497368);
            }
                break;
            default:
            {
                nlObjPutUseViewMatrix(0xC58B1E0);
            }
                break;
        }
    }
    t231 = *(int *)0xC13ED9C;
    if (t231 != 0) {
        nlGetTranslate(0xC13EDA4);
    }
    nlPopMatrix(0x1);
    t238 = ((int (*)(int))(nlPushMatrix))(0x0);
    nlTranslateV(0xC0D543C);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x18);
    *(unsigned int *)(((int)stk + 8)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x18);
    t240 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x18) + 0x0));
    t241 = *(int *)(((int)stk + 4));
    t242 = *(short *)((t241 + 0x0));
    t243 = GetAverageAngle(t242, t240, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t243;
    t244 = *(int *)(((int)stk + 8));
    t245 = *(int *)(((int)stk + 4));
    t246 = *(short *)((t244 + 0x2));
    t247 = *(short *)((t245 + 0x2));
    t248 = GetAverageAngle(t247, t246, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t248;
    t249 = *(int *)(((int)stk + 8));
    t250 = *(int *)(((int)stk + 4));
    t251 = *(short *)((t249 + 0x4));
    t252 = *(short *)((t250 + 0x4));
    t253 = GetAverageAngle(t252, t251, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t253;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x10);
    t255 = *(int *)(((t0 + 0x10) + 0x0));
    if (t255 != 0) {
        t256 = *(int *)(((t0 + 0x10) + 0x0));
        nlObjPutUseViewMatrix(t256);
    }
    if (a8 != 1) {
        if (a8 != 2) {
            if (a8 != 4) {
                if (a8 != 25) {
                    if (a8 != 32) {
                        if (a8 != 42) {
                            if (a8 != 59) {
                                if (a8 != 60) {
                                    if (a8 != 62) {
                                    } else {
                                        nlObjPutUseViewMatrix(0xC58DAC0);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57CEC8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56C0E8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51D520);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E21F8);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB208);
                }
            } else {
                nlObjPutUseViewMatrix(0xC586508);
            }
        } else {
            nlObjPutUseViewMatrix(0xC574EA0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5654D8);
    }
    nlTranslateV(0xC0D5448);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x12);
    *(unsigned int *)(((int)stk + 8)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x12);
    t308 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x12) + 0x0));
    t309 = *(int *)(((int)stk + 4));
    t310 = *(short *)((t309 + 0x0));
    t311 = GetAverageAngle(t310, t308, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t311;
    t312 = *(int *)(((int)stk + 8));
    t313 = *(int *)(((int)stk + 4));
    t314 = *(short *)((t312 + 0x2));
    t315 = *(short *)((t313 + 0x2));
    t316 = GetAverageAngle(t315, t314, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t316;
    t317 = *(int *)(((int)stk + 8));
    t318 = *(int *)(((int)stk + 4));
    t319 = *(short *)((t317 + 0x4));
    t320 = *(short *)((t318 + 0x4));
    t321 = GetAverageAngle(t320, t319, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t321;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0xC);
    t323 = *(int *)(((t0 + 0xC) + 0x0));
    if (t323 != 0) {
        t324 = *(int *)(((t0 + 0xC) + 0x0));
        nlObjPutUseViewMatrix(t324);
    }
    if (a8 != 4) {
        if (a8 != 5) {
            if (a8 != 62) {
            } else {
                nlObjPutUseViewMatrix(0xC58C9E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC594548);
        }
    } else {
        nlObjPutUseViewMatrix(0xC585FA0);
    }
    nlTranslateV(0xC0D5454);
    *(unsigned int *)(((int)stk + 8)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0xC);
    *(unsigned int *)(((int)stk + 4)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0xC);
    t346 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0xC) + 0x0));
    t347 = *(int *)(((int)stk + 8));
    t348 = *(short *)((t347 + 0x0));
    t349 = GetAverageAngle(t348, t346, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t349;
    t350 = *(int *)(((int)stk + 4));
    t351 = *(int *)(((int)stk + 8));
    t352 = *(short *)((t350 + 0x2));
    t353 = *(short *)((t351 + 0x2));
    t354 = GetAverageAngle(t353, t352, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t354;
    t355 = *(int *)(((int)stk + 4));
    t356 = *(int *)(((int)stk + 8));
    t357 = *(short *)((t355 + 0x4));
    t358 = *(short *)((t356 + 0x4));
    t359 = GetAverageAngle(t358, t357, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t359;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x8);
    t361 = *(int *)(((t0 + 0x8) + 0x0));
    if (t361 != 0) {
        t362 = *(int *)(((t0 + 0x8) + 0x0));
        nlObjPutUseViewMatrix(t362);
    }
    t368 = *(int *)0xC13ED98;
    if (t368 != 0) {
        if (a8 != 33) {
            if (a8 != 36) {
            } else {
                nlObjPutUseViewMatrix(0xC4FDD38);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4EA2A8);
        }
    }
    nlPopMatrix(0x1);
    t387 = ((int (*)(int))(nlPushMatrix))(0x0);
    nlTranslateV(0xC0D5460);
    *(unsigned int *)(((int)stk + 8)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x2A);
    *(unsigned int *)(((int)stk + 4)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x2A);
    t389 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x2A) + 0x0));
    t390 = *(int *)(((int)stk + 8));
    t391 = *(short *)((t390 + 0x0));
    t392 = GetAverageAngle(t391, t389, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t392;
    t393 = *(int *)(((int)stk + 4));
    t394 = *(int *)(((int)stk + 8));
    t395 = *(short *)((t393 + 0x2));
    t396 = *(short *)((t394 + 0x2));
    t397 = GetAverageAngle(t396, t395, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t397;
    t398 = *(int *)(((int)stk + 4));
    t399 = *(int *)(((int)stk + 8));
    t400 = *(short *)((t398 + 0x4));
    t401 = *(short *)((t399 + 0x4));
    t402 = GetAverageAngle(t401, t400, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t402;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x1C);
    t404 = *(int *)(((t0 + 0x1C) + 0x0));
    if (t404 != 0) {
        t405 = *(int *)(((t0 + 0x1C) + 0x0));
        nlObjPutUseViewMatrix(t405);
    }
    if (a8 != 1) {
        if (a8 != 2) {
            if (a8 != 4) {
                if (a8 != 25) {
                    if (a8 != 32) {
                        if (a8 != 42) {
                            if (a8 != 59) {
                                if (a8 != 60) {
                                    if (a8 != 62) {
                                    } else {
                                        nlObjPutUseViewMatrix(0xC58FB18);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57F2C8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56DCC0);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51DA80);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E2720);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB7A8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC587E40);
            }
        } else {
            nlObjPutUseViewMatrix(0xC5768B8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC566CB0);
    }
    nlTranslateV(0xC0D546C);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x24);
    *(unsigned int *)(((int)stk + 8)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x24);
    t457 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x24) + 0x0));
    t458 = *(int *)(((int)stk + 4));
    t459 = *(short *)((t458 + 0x0));
    t460 = GetAverageAngle(t459, t457, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t460;
    t461 = *(int *)(((int)stk + 8));
    t462 = *(int *)(((int)stk + 4));
    t463 = *(short *)((t461 + 0x2));
    t464 = *(short *)((t462 + 0x2));
    t465 = GetAverageAngle(t464, t463, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t465;
    t466 = *(int *)(((int)stk + 8));
    t467 = *(int *)(((int)stk + 4));
    t468 = *(short *)((t466 + 0x4));
    t469 = *(short *)((t467 + 0x4));
    t470 = GetAverageAngle(t469, t468, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t470;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x18);
    t472 = *(int *)(((t0 + 0x18) + 0x0));
    if (t472 != 0) {
        t473 = *(int *)(((t0 + 0x18) + 0x0));
        nlObjPutUseViewMatrix(t473);
    }
    nlTranslateV(0xC0D5478);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x1E);
    *(unsigned int *)(((int)stk + 8)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x1E);
    t480 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x1E) + 0x0));
    t481 = *(int *)(((int)stk + 4));
    t482 = *(short *)((t481 + 0x0));
    t483 = GetAverageAngle(t482, t480, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t483;
    t484 = *(int *)(((int)stk + 8));
    t485 = *(int *)(((int)stk + 4));
    t486 = *(short *)((t484 + 0x2));
    t487 = *(short *)((t485 + 0x2));
    t488 = GetAverageAngle(t487, t486, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t488;
    t489 = *(int *)(((int)stk + 8));
    t490 = *(int *)(((int)stk + 4));
    t491 = *(short *)((t489 + 0x4));
    t492 = *(short *)((t490 + 0x4));
    t493 = GetAverageAngle(t492, t491, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t493;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x14);
    t495 = *(int *)(((t0 + 0x14) + 0x0));
    if (t495 != 0) {
        t496 = *(int *)(((t0 + 0x14) + 0x0));
        nlObjPutUseViewMatrix(t496);
    }
    t502 = *(int *)0xC13ED98;
    if (t502 != 0) {
        if (a8 == 35) {
            nlObjPutUseViewMatrix(0xC4FA698);
        }
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    t516 = ((int (*)(int))(nlPushMatrix))(0x0);
    *(unsigned int *)(((int)stk + 8)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x5A);
    *(unsigned int *)(((int)stk + 4)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x5A);
    t517 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x5A) + 0x0));
    t518 = *(int *)(((int)stk + 8));
    t519 = *(short *)((t518 + 0x0));
    t520 = GetAverageAngle(t519, t517, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t520;
    t521 = *(int *)(((int)stk + 4));
    t522 = *(int *)(((int)stk + 8));
    t523 = *(short *)((t521 + 0x2));
    t524 = *(short *)((t522 + 0x2));
    t525 = GetAverageAngle(t524, t523, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t525;
    t526 = *(int *)(((int)stk + 4));
    t527 = *(int *)(((int)stk + 8));
    t528 = *(short *)((t526 + 0x4));
    t529 = *(short *)((t527 + 0x4));
    t530 = GetAverageAngle(t529, t528, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t530;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x3C);
    t532 = *(int *)(((t0 + 0x3C) + 0x0));
    if (t532 != 0) {
        t533 = *(int *)(((t0 + 0x3C) + 0x0));
        nlObjPutUseViewMatrix(t533);
    }
    if (a8 != 2) {
        if (a8 != 3) {
            if (a8 != 14) {
                if (a8 != 15) {
                    if (a8 != 29) {
                        if (a8 != 31) {
                            if (a8 != 35) {
                                if (a8 != 37) {
                                    if (a8 != 39) {
                                        if (a8 != 44) {
                                            if (a8 != 45) {
                                                if (a8 != 46) {
                                                    if (a8 != 51) {
                                                        if (a8 != 54) {
                                                            if (a8 != 55) {
                                                                if (a8 != 60) {
                                                                    if (a8 != 61) {
                                                                    } else {
                                                                        nlObjPutUseViewMatrix(0xC499990);
                                                                    }
                                                                } else {
                                                                    nlObjPutUseViewMatrix(0xC5836A0);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC4DCDE0);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D2010);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC550020);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC533FA8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC52E6C8);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC528C18);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC50C828);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC501220);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4F7C78);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4DCDE0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4D2010);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC5A8088);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A57E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4948E0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5786B8);
    }
    t624 = *(int *)0xC13EDA0;
    if (t624 != 0) {
        nlGetTranslate(0xC13EDB0);
    }
    t630 = ((int (*)(int))(nlPushMatrix))(0x0);
    nlTranslateV(0xC0D5484);
    *(unsigned int *)(((int)stk + 8)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x42);
    *(unsigned int *)(((int)stk + 4)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x42);
    t632 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x42) + 0x0));
    t633 = *(int *)(((int)stk + 8));
    t634 = *(short *)((t633 + 0x0));
    t635 = GetAverageAngle(t634, t632, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t635;
    t636 = *(int *)(((int)stk + 4));
    t637 = *(int *)(((int)stk + 8));
    t638 = *(short *)((t636 + 0x2));
    t639 = *(short *)((t637 + 0x2));
    t640 = GetAverageAngle(t639, t638, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t640;
    t641 = *(int *)(((int)stk + 4));
    t642 = *(int *)(((int)stk + 8));
    t643 = *(short *)((t641 + 0x4));
    t644 = *(short *)((t642 + 0x4));
    t645 = GetAverageAngle(t644, t643, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t645;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x2C);
    t647 = *(int *)(((t0 + 0x2C) + 0x0));
    if (t647 != 0) {
        t648 = *(int *)(((t0 + 0x2C) + 0x0));
        nlObjPutUseViewMatrix(t648);
    }
    if (a8 != 25) {
        if (a8 != 35) {
            if (a8 != 42) {
                if (a8 != 44) {
                } else {
                    nlObjPutUseViewMatrix(0xC529218);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E450);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F8138);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC440);
    }
    nlTranslateV(0xC0D5490);
    *(unsigned int *)(((int)stk + 8)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x3C);
    *(unsigned int *)(((int)stk + 4)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x3C);
    t675 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x3C) + 0x0));
    t676 = *(int *)(((int)stk + 8));
    t677 = *(short *)((t676 + 0x0));
    t678 = GetAverageAngle(t677, t675, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t678;
    t679 = *(int *)(((int)stk + 4));
    t680 = *(int *)(((int)stk + 8));
    t681 = *(short *)((t679 + 0x2));
    t682 = *(short *)((t680 + 0x2));
    t683 = GetAverageAngle(t682, t681, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t683;
    t684 = *(int *)(((int)stk + 4));
    t685 = *(int *)(((int)stk + 8));
    t686 = *(short *)((t684 + 0x4));
    t687 = *(short *)((t685 + 0x4));
    t688 = GetAverageAngle(t687, t686, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t688;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x28);
    t690 = *(int *)(((t0 + 0x28) + 0x0));
    if (t690 != 0) {
        t691 = *(int *)(((t0 + 0x28) + 0x0));
        nlObjPutUseViewMatrix(t691);
    }
    nlTranslateV(0xC0D549C);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x36);
    *(unsigned int *)(((int)stk + 8)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x36);
    t698 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x36) + 0x0));
    t699 = *(int *)(((int)stk + 4));
    t700 = *(short *)((t699 + 0x0));
    t701 = GetAverageAngle(t700, t698, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t701;
    t702 = *(int *)(((int)stk + 8));
    t703 = *(int *)(((int)stk + 4));
    t704 = *(short *)((t702 + 0x2));
    t705 = *(short *)((t703 + 0x2));
    t706 = GetAverageAngle(t705, t704, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t706;
    t707 = *(int *)(((int)stk + 8));
    t708 = *(int *)(((int)stk + 4));
    t709 = *(short *)((t707 + 0x4));
    t710 = *(short *)((t708 + 0x4));
    t711 = GetAverageAngle(t710, t709, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t711;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x24);
    t713 = *(int *)(((t0 + 0x24) + 0x0));
    if (t713 != 0) {
        t714 = *(int *)(((t0 + 0x24) + 0x0));
        nlObjPutUseViewMatrix(t714);
    }
    nlPopMatrix(0x1);
    t721 = ((int (*)(int))(nlPushMatrix))(0x0);
    nlTranslateV(0xC0D54A8);
    *(unsigned int *)(((int)stk + 8)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x54);
    *(unsigned int *)(((int)stk + 4)) = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x54);
    t723 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x54) + 0x0));
    t724 = *(int *)(((int)stk + 8));
    t725 = *(short *)((t724 + 0x0));
    t726 = GetAverageAngle(t725, t723, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t726;
    t727 = *(int *)(((int)stk + 4));
    t728 = *(int *)(((int)stk + 8));
    t729 = *(short *)((t727 + 0x2));
    t730 = *(short *)((t728 + 0x2));
    t731 = GetAverageAngle(t730, t729, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t731;
    t732 = *(int *)(((int)stk + 4));
    t733 = *(int *)(((int)stk + 8));
    t734 = *(short *)((t732 + 0x4));
    t735 = *(short *)((t733 + 0x4));
    t736 = GetAverageAngle(t735, t734, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t736;
    sklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x38);
    t738 = *(int *)(((t0 + 0x38) + 0x0));
    if (t738 != 0) {
        t739 = *(int *)(((t0 + 0x38) + 0x0));
        nlObjPutUseViewMatrix(t739);
    }
    if (a8 != 25) {
        if (a8 != 35) {
            if (a8 != 42) {
                if (a8 != 44) {
                } else {
                    nlObjPutUseViewMatrix(0xC5296D8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E990);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F85A8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC8C8);
    }
    nlTranslateV(0xC0D54B4);
    *(unsigned int *)(((int)stk + 4)) = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x4E);
    t766 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4E) + 0x0));
    t767 = *(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x4E) + 0x0));
    t768 = GetAverageAngle(t767, t766, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t768;
    t769 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4E) + 0x2));
    t770 = *(int *)(((int)stk + 4));
    t771 = *(short *)((t770 + 0x2));
    t772 = GetAverageAngle(t771, t769, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t772;
    t773 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4E) + 0x4));
    t774 = *(int *)(((int)stk + 4));
    t775 = *(short *)((t774 + 0x4));
    t776 = GetAverageAngle(t775, t773, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t776;
    sklRotate((((int)stk + 4) + 0x10));
    t778 = *(int *)(((t0 + 0x34) + 0x0));
    if (t778 != 0) {
        t779 = *(int *)(((t0 + 0x34) + 0x0));
        nlObjPutUseViewMatrix(t779);
    }
    nlTranslateV(0xC0D54C0);
    t785 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x48) + 0x0));
    t786 = *(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x48) + 0x0));
    t787 = GetAverageAngle(t786, t785, (1.0f - f4));
    *(unsigned short *)(((int)stk + 20)) = t787;
    t788 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x48) + 0x2));
    t789 = *(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x48) + 0x2));
    t790 = GetAverageAngle(t789, t788, (1.0f - f4));
    *(unsigned short *)(((int)stk + 22)) = t790;
    t791 = *(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x48) + 0x4));
    t792 = *(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x48) + 0x4));
    t793 = GetAverageAngle(t792, t791, (1.0f - f4));
    *(unsigned short *)(((int)stk + 24)) = t793;
    sklRotate((((int)stk + 4) + 0x10));
    t795 = *(int *)(((t0 + 0x30) + 0x0));
    if (t795 != 0) {
        t796 = *(int *)(((t0 + 0x30) + 0x0));
        nlObjPutUseViewMatrix(t796);
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    t803 = nlPopMatrix(0x1);
    return t803;
}
