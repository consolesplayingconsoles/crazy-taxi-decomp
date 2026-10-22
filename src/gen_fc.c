/* Straight-line functions with calls and guards (batch gen_fc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int kyakuStopAllowed(int, int);
int navi_GetRouteDataB(int, int);
int navi_GetRouteYa(int);
int HomingAngle1(int, int, float);
int TOANG2(int, float);
int getReplayGetOffNo(int);
int Start_ReverseDriving(void);
int Start_OverArea(void);
int Get_Bowling_Gate(void);
int rinRandGetSeed(void);
int FUN_0c07b9e0(void);
int FUN_0c0813d0(int);
int FUN_0c16cb20(void);
int GS_GuestEject(void);
int GS_GuestIn(int);
int GS_GuestOut(void);
int GetCollision2D(int, float);
int InitArrow(int);
int IsBoyFriend(int, int);
int MakeKyakuTakeArea(int, int, int, float);
int kyakuTaskPut(int, int, float);
int Psg_Execute(int, float);
int PutKyakuStopArea(int, int);
int SetLandmarkDist(float);
int Sound_Request(int, int);
int getReplayPassenger(int, int, int, int, int);
int End_ReverseDriving(void);
int End_OverArea(void);
int SetKousyaCount(int);
int kyakuInDestArea(int);
int kyakuInDestArea2(int);
int kyakuMiniGameAreaOk(int);
int kyakuStopAreaVisible(int);
int nlCloseEvent(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int, float, float);
float kyakuTaskExec(int a4, int a5, int a6, int a7, float f4, float f5);
int kmiFBControl(int a4, int a5, int a6, int a7, int a8, int a9);


int kmiFBControl(int a4, int a5, int a6, int a7, int a8, int a9)
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
    int t30;
    int t37;
    int t60;
    int t62;
    int t63;
    int t64;
    int t65;
    int t67;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t141;
    int t142;
    int t143;
    int t144;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t183;
    int t184;
    int t185;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t251;
    int t252;
    int t253;
    int t264;
    int t265;
    int t266;
    int t277;
    int t278;
    int t279;
    int t290;
    int t291;
    int t292;
    int t303;
    int t304;
    int t305;
    int t316;
    int t317;
    int t318;
    int t323;
    int t324;
    int t330;
    int t331;
    int t332;
    int t337;
    int t338;
    int t344;
    int t345;
    int t346;
    int t351;
    int t352;
    int t358;
    int t359;
    int t360;
    int t365;
    int t366;
    int t382;
    int t383;
    int t384;
    int t385;
    int t386;
    int t387;
    int t392;
    int t396;
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
    int t41;
    int t42;
    int t38;
    int stk[87] = {0};

    t0 = *(int *)0xC17680C;
    t1 = *(int *)0xC176810;
    *(unsigned int *)(((((int)stk + 120) + 0x38) + 0x0)) = t0;
    *(unsigned int *)(((((int)stk + 120) + 0x38) + 0x4)) = t1;
    t2 = *(int *)0xC176814;
    t3 = *(int *)0xC176818;
    *(unsigned int *)(((((int)stk + 120) + 0x38) + 0x8)) = t2;
    *(unsigned int *)(((((int)stk + 120) + 0x38) + 0xC)) = t3;
    t4 = *(int *)0xC17681C;
    t5 = *(int *)0xC176820;
    *(unsigned int *)(((((int)stk + 120) + 0x38) + 0x10)) = t4;
    *(unsigned int *)(((((int)stk + 120) + 0x38) + 0x14)) = t5;
    t6 = *(int *)0xC176824;
    t7 = *(int *)0xC176828;
    *(unsigned int *)(((((int)stk + 120) + 0x24) + 0x0)) = t6;
    *(unsigned int *)(((((int)stk + 120) + 0x24) + 0x4)) = t7;
    t8 = *(int *)0xC17682C;
    t9 = *(int *)0xC176830;
    *(unsigned int *)(((((int)stk + 120) + 0x24) + 0x8)) = t8;
    *(unsigned int *)(((((int)stk + 120) + 0x24) + 0xC)) = t9;
    t10 = *(int *)0xC176834;
    *(unsigned int *)(((((int)stk + 120) + 0x24) + 0x10)) = t10;
    t11 = *(int *)0xC17683C;
    t12 = *(int *)0xC176838;
    *(unsigned int *)(((((int)stk + 120) + 0x10) + 0x0)) = t12;
    *(unsigned int *)(((((int)stk + 120) + 0x10) + 0x4)) = t11;
    t13 = *(int *)0xC176844;
    t14 = *(int *)0xC176840;
    *(unsigned int *)(((((int)stk + 120) + 0x10) + 0x8)) = t14;
    *(unsigned int *)(((((int)stk + 120) + 0x10) + 0xC)) = t13;
    t15 = *(int *)0xC176848;
    *(unsigned int *)(((((int)stk + 120) + 0x10) + 0x10)) = t15;
    t16 = *(int *)((((a6 << 2) + (((int)stk + 120) + 0x38)) + 0x0));
    *(unsigned int *)0xC2EA6C8 = a4;
    *(unsigned int *)0xC2EA6CC = a5;
    t17 = *(int *)0xC2EA6A0;
    if ((t17 & 0x1) != 1) {
        t18 = *(int *)0xC2EA6A0;
        if ((t18 & 0x2C) == 32) {
            if (0x1 != 0) {
                t19 = *(int *)0xC2EA6CC;
                *(unsigned int *)0xC2EA6CC = ((unsigned int)t19 >> 1);
            }
        }
    }
    if (a9 != 0) {
        t30 = *(int *)0xC2EA6A0;
        if ((t30 & 32) == 0) {
            *(unsigned int *)(((int)stk + 128)) = 0x2;
        } else {
            *(unsigned int *)(((int)stk + 128)) = 0x1;
        }
    } else {
        *(unsigned int *)(((int)stk + 128)) = 0x1;
    }
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x20)) = 0x1;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x34)) = 0x0;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x40)) = 0x0;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x70)) = 0x0;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x68)) = 0x0;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x64)) = 0x0;
    t37 = *(int *)0xC2EA6A0;
    if ((t37 & 0x1) != 0) {
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x6C)) = 0x1;
        *(unsigned int *)(((int)stk + 132)) = 0x0;
        t42 = 0x1;
    } else {
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x6C)) = 0x0;
        if (a7 == 1) {
            *(unsigned int *)(((int)stk + 132)) = 0x0;
            t38 = 0x2;
        } else {
            *(unsigned int *)(((int)stk + 132)) = 0x1;
            t38 = 0x1;
        }
        t41 = a7;
        t42 = t38;
    }
    if (t16 != 16) {
        if (t16 != 24) {
            if (t16 != 32) {
            } else {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x30)) = 0x6;
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x3C)) = 0x3;
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x2C)) = 0x0;
            }
        } else {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x30)) = 0x4;
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x3C)) = 0x2;
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x2C)) = 0x0;
        }
    } else {
        if (a6 == 3) {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x30)) = 0x3;
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x3C)) = 0x0;
        } else {
            if (a6 == 0) {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x30)) = 0x1;
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x3C)) = 0x1;
            } else {
                if (a6 == 1) {
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x30)) = 0x0;
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x3C)) = 0x0;
                } else {
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x30)) = 0x1;
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x3C)) = 0x1;
                }
            }
        }
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x2C)) = a8;
    }
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x28)) = 0x0;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x24)) = t41;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x1C)) = 0x0;
    *(unsigned int *)(((int)stk + 124)) = (a4 * t16);
    t60 = (a4 * t16);
    if ((int)(a4 * t16) < 0) {
        t60 = ((a4 * t16) + 0x3F);
    }
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x44)) = ((int)t60 >> 6);
    t62 = *(int *)(((int)stk + 124));
    t63 = (int)((int)t62 / (int)0x20);
    t64 = (int)((unsigned int)a5 + (unsigned int)0x0);
    t65 = (int)((unsigned int)t64 + ((((int)0x0 > (int)a5)) ? 1u : 0u));
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x0)) = (t63 - 1);
    t67 = t16;
    if ((int)t16 < 0) {
        t67 = (t16 + 0x7);
    }
    *(unsigned int *)(((int)stk + 120)) = ((((t67 >> 1) >> 1) >> 1) * a4);
    if (t41 == 1) {
        t69 = *(int *)0xC2EA6A0;
        if ((t69 & 0x20) != 0) {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t65 >> 1);
            t70 = *(int *)(((int)stk + 124));
            t71 = (int)((int)t70 / (int)0x20);
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = (t71 + 0x1);
            *(unsigned int *)0xC2EA898 = 0x0;
            t72 = *(int *)(((int)stk + 120));
            *(unsigned int *)0xC2EA89C = t72;
        } else {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = a5;
            *(unsigned int *)0xC2EA898 = 0x0;
            t73 = *(int *)(((int)stk + 120));
            *(unsigned int *)0xC2EA89C = t73;
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
        }
    } else {
        t77 = *(int *)0xC2EA6A0;
        if ((t77 & 0x1) != 0) {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = a5;
            *(unsigned int *)0xC2EA898 = 0x0;
            t78 = *(int *)(((int)stk + 120));
            *(unsigned int *)0xC2EA89C = t78;
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
        } else {
            t79 = *(int *)0xC2EA6A0;
            if ((t79 & 0x20) != 0) {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t65 >> 1);
                *(unsigned int *)0xC2EA898 = 0x0;
                t80 = *(int *)(((int)stk + 120));
                *(unsigned int *)0xC2EA89C = t80;
                t81 = *(int *)(((int)stk + 124));
                t82 = (int)((int)t81 / (int)0x20);
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = (t82 + 0x1);
            } else {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = a5;
                *(unsigned int *)0xC2EA898 = 0x0;
                t83 = *(int *)(((int)stk + 120));
                *(unsigned int *)0xC2EA89C = t83;
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
            }
        }
    }
    t98 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t98 - 1);
    if (a9 == 0) {
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0xC)) = 0x0;
        t99 = *(int *)0xC2EA6A0;
        if ((t99 & 0x1) == 1) {
            if (0x0 != 0) {
                t100 = *(int *)0xC2EA6A0;
                if ((t100 & 0x42) == 66) {
                    t101 = *(int *)0xC2EA6B0;
                    t102 = *(int *)(((t101 << 2) + (((int)stk + 120) + 0x10)));
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t102;
                } else {
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                }
                *(unsigned int *)0xC2EA898 = 0x0;
                *(unsigned int *)0xC2EA89C = 0x0;
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                t108 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t108 - 1);
            } else {
                t109 = *(int *)0xC2EA6A0;
                if ((t109 & 0x1) != 0) {
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x400;
                } else {
                    t110 = *(int *)0xC2EA6A0;
                    if ((t110 & 0x20) != 0) {
                        t111 = *(int *)0xC2EA6A0;
                        if ((t111 & 0x42) == 66) {
                            t112 = *(int *)0xC2EA6B0;
                            t113 = *(int *)(((((int)stk + 120) + 0x24) + (t112 << 2)));
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t113;
                        } else {
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
                        }
                        t118 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t118 - 1);
                    } else {
                        t119 = *(int *)0xC2EA6A0;
                        if ((t119 & 0x42) == 66) {
                            t120 = *(int *)0xC2EA6B0;
                            t121 = *(int *)(((((int)stk + 120) + 0x24) + (t120 << 2)));
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t121;
                            t122 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t122 - 1);
                        } else {
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x400;
                        }
                    }
                }
            }
        } else {
            t141 = *(int *)0xC2EA6A0;
            if ((t141 & 0x2C) == 32) {
                if (0x1 != 0) {
                    t142 = *(int *)0xC2EA6A0;
                    if ((t142 & 0x42) == 66) {
                        t143 = *(int *)0xC2EA6B0;
                        t144 = *(int *)(((t143 << 2) + (((int)stk + 120) + 0x10)));
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t144;
                    } else {
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                    }
                    *(unsigned int *)0xC2EA898 = 0x0;
                    *(unsigned int *)0xC2EA89C = 0x0;
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                    t150 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t150 - 1);
                } else {
                    t151 = *(int *)0xC2EA6A0;
                    if ((t151 & 0x1) != 0) {
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x400;
                    } else {
                        t152 = *(int *)0xC2EA6A0;
                        if ((t152 & 0x20) != 0) {
                            t153 = *(int *)0xC2EA6A0;
                            if ((t153 & 0x42) == 66) {
                                t154 = *(int *)0xC2EA6B0;
                                t155 = *(int *)(((((int)stk + 120) + 0x24) + (t154 << 2)));
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t155;
                            } else {
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
                            }
                            t160 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t160 - 1);
                        } else {
                            t161 = *(int *)0xC2EA6A0;
                            if ((t161 & 0x42) == 66) {
                                t162 = *(int *)0xC2EA6B0;
                                t163 = *(int *)(((((int)stk + 120) + 0x24) + (t162 << 2)));
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t163;
                                t164 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t164 - 1);
                            } else {
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x400;
                            }
                        }
                    }
                }
            } else {
                if (0x0 != 0) {
                    t183 = *(int *)0xC2EA6A0;
                    if ((t183 & 0x42) == 66) {
                        t184 = *(int *)0xC2EA6B0;
                        t185 = *(int *)(((t184 << 2) + (((int)stk + 120) + 0x10)));
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t185;
                    } else {
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                    }
                    *(unsigned int *)0xC2EA898 = 0x0;
                    *(unsigned int *)0xC2EA89C = 0x0;
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                    t191 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t191 - 1);
                } else {
                    t192 = *(int *)0xC2EA6A0;
                    if ((t192 & 0x1) != 0) {
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x400;
                    } else {
                        t193 = *(int *)0xC2EA6A0;
                        if ((t193 & 0x20) != 0) {
                            t194 = *(int *)0xC2EA6A0;
                            if ((t194 & 0x42) == 66) {
                                t195 = *(int *)0xC2EA6B0;
                                t196 = *(int *)(((((int)stk + 120) + 0x24) + (t195 << 2)));
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t196;
                            } else {
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
                            }
                            t201 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t201 - 1);
                        } else {
                            t202 = *(int *)0xC2EA6A0;
                            if ((t202 & 0x42) == 66) {
                                t203 = *(int *)0xC2EA6B0;
                                t204 = *(int *)(((((int)stk + 120) + 0x24) + (t203 << 2)));
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t204;
                                t205 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t205 - 1);
                            } else {
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x400;
                            }
                        }
                    }
                }
            }
        }
        *(unsigned int *)(((int)stk + 120)) = 0x1;
    } else {
        t234 = *(int *)0xC2EA6E8;
        *(unsigned int *)0xC2EA6E8 = (t234 | 0x1);
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0xC)) = 0x1;
        *(unsigned int *)(((int)stk + 120)) = 0x2;
        t235 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4)) = (t235 - 1);
        t236 = *(int *)0xC2EA6A0;
        if ((t236 & 0x1) != 0) {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
        } else {
            t237 = *(int *)0xC2EA6A0;
            if ((t237 & 0xFFFFFFEC) != 100) {
                if ((t237 & 0xFFFFFFEC) != 104) {
                    if ((t237 & 0xFFFFFFEC) != 36) {
                        if ((t237 & 0xFFFFFFEC) != 40) {
                            if ((t237 & 0xFFFFFFEC) != 96) {
                                if ((t237 & 0xFFFFFFEC) != 64) {
                                    if ((t237 & 0xFFFFFFEC) != 68) {
                                        if ((t237 & 0xFFFFFFEC) != 32) {
                                            if ((t237 & 0xFFFFFFEC) != 0) {
                                                if ((t237 & 0xFFFFFFEC) != 4) {
                                                } else {
                                                    *(unsigned int *)0xC2EA898 = 0x0;
                                                    *(unsigned int *)0xC2EA89C = 0x0;
                                                    t238 = *(int *)0xC2EA6A0;
                                                    if ((t238 & 0x42) == 66) {
                                                        t239 = *(int *)0xC2EA6B0;
                                                        t240 = *(int *)(((((int)stk + 120) + 0x10) + (t239 << 2)));
                                                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t240;
                                                    } else {
                                                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                                                    }
                                                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                                                }
                                            } else {
                                                *(unsigned int *)0xC2EA898 = 0x0;
                                                *(unsigned int *)0xC2EA89C = 0x0;
                                                t251 = *(int *)0xC2EA6A0;
                                                if ((t251 & 0x42) == 66) {
                                                    t252 = *(int *)0xC2EA6B0;
                                                    t253 = *(int *)(((((int)stk + 120) + 0x10) + (t252 << 2)));
                                                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t253;
                                                } else {
                                                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                                                }
                                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                                            }
                                        } else {
                                            *(unsigned int *)0xC2EA898 = 0x0;
                                            *(unsigned int *)0xC2EA89C = 0x0;
                                            t264 = *(int *)0xC2EA6A0;
                                            if ((t264 & 0x42) == 66) {
                                                t265 = *(int *)0xC2EA6B0;
                                                t266 = *(int *)(((((int)stk + 120) + 0x10) + (t265 << 2)));
                                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t266;
                                            } else {
                                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                                            }
                                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                                        }
                                    } else {
                                        *(unsigned int *)0xC2EA898 = 0x0;
                                        *(unsigned int *)0xC2EA89C = 0x0;
                                        t277 = *(int *)0xC2EA6A0;
                                        if ((t277 & 0x42) == 66) {
                                            t278 = *(int *)0xC2EA6B0;
                                            t279 = *(int *)(((((int)stk + 120) + 0x10) + (t278 << 2)));
                                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t279;
                                        } else {
                                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                                        }
                                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                                    }
                                } else {
                                    *(unsigned int *)0xC2EA898 = 0x0;
                                    *(unsigned int *)0xC2EA89C = 0x0;
                                    t290 = *(int *)0xC2EA6A0;
                                    if ((t290 & 0x42) == 66) {
                                        t291 = *(int *)0xC2EA6B0;
                                        t292 = *(int *)(((((int)stk + 120) + 0x10) + (t291 << 2)));
                                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t292;
                                    } else {
                                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                                    }
                                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                                }
                            } else {
                                *(unsigned int *)0xC2EA898 = 0x0;
                                *(unsigned int *)0xC2EA89C = 0x0;
                                t303 = *(int *)0xC2EA6A0;
                                if ((t303 & 0x42) == 66) {
                                    t304 = *(int *)0xC2EA6B0;
                                    t305 = *(int *)(((((int)stk + 120) + 0x10) + (t304 << 2)));
                                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t305;
                                } else {
                                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x800;
                                }
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = 0x1;
                            }
                        } else {
                            t316 = *(int *)0xC2EA6A0;
                            if ((t316 & 0x42) == 66) {
                                t317 = *(int *)0xC2EA6B0;
                                t318 = *(int *)(((((int)stk + 120) + 0x24) + (t317 << 2)));
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t318;
                            } else {
                                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
                            }
                            t323 = *(int *)(((int)stk + 124));
                            t324 = (int)((int)t323 / (int)0x20);
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = (t324 + 0x1);
                        }
                    } else {
                        t330 = *(int *)0xC2EA6A0;
                        if ((t330 & 0x42) == 66) {
                            t331 = *(int *)0xC2EA6B0;
                            t332 = *(int *)(((((int)stk + 120) + 0x24) + (t331 << 2)));
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t332;
                        } else {
                            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
                        }
                        t337 = *(int *)(((int)stk + 124));
                        t338 = (int)((int)t337 / (int)0x20);
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = (t338 + 0x1);
                    }
                } else {
                    t344 = *(int *)0xC2EA6A0;
                    if ((t344 & 0x42) == 66) {
                        t345 = *(int *)0xC2EA6B0;
                        t346 = *(int *)(((((int)stk + 120) + 0x24) + (t345 << 2)));
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t346;
                    } else {
                        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
                    }
                    t351 = *(int *)(((int)stk + 124));
                    t352 = (int)((int)t351 / (int)0x20);
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = (t352 + 0x1);
                }
            } else {
                t358 = *(int *)0xC2EA6A0;
                if ((t358 & 0x42) == 66) {
                    t359 = *(int *)0xC2EA6B0;
                    t360 = *(int *)(((((int)stk + 120) + 0x24) + (t359 << 2)));
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = t360;
                } else {
                    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x10)) = 0x401;
                }
                t365 = *(int *)(((int)stk + 124));
                t366 = (int)((int)t365 / (int)0x20);
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x8)) = (t366 + 0x1);
            }
        }
    }
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x14)) = 0x40;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x18)) = 0x80;
    t382 = (int)((int)a4 / (int)0x20);
    t383 = *(int *)(((int)stk + 120));
    *(unsigned int *)0xC2EAADC = (t382 * t383);
    t384 = *(int *)(((int)stk + 128));
    t385 = (int)((int)((a5 * t42) * t384) / (int)0x20);
    t386 = *(int *)(((int)stk + 132));
    *(unsigned int *)0xC2EAAE0 = (t385 + t386);
    t387 = *(int *)0xC2EAAE0;
    if ((unsigned int)t387 > (unsigned int)0xF) {
        *(unsigned int *)0xC2EAAE0 = 0xF;
    }
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x4C)) = 0x9;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x48)) = 0x6;
    if (t16 == 16) {
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x50)) = 0x8;
    } else {
        *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x50)) = 0xB;
    }
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x58)) = 0x0;
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x54)) = (a4 - 1);
    *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x60)) = 0x0;
    t392 = *(int *)0xC2EA6A0;
    if ((t392 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x5C)) = ((t65 >> 1) - 1);
        } else {
            *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x5C)) = (a5 - 1);
        }
    } else {
        t396 = *(int *)0xC2EA6A0;
        if ((t396 & 0x2C) == 32) {
            if (0x1 != 0) {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x5C)) = ((t65 >> 1) - 1);
            } else {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x5C)) = (a5 - 1);
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x5C)) = ((t65 >> 1) - 1);
            } else {
                *(unsigned int *)(((((int)stk + 120) + 0x50) + 0x5C)) = (a5 - 1);
            }
        }
    }
    t410 = *(int *)(((((int)stk + 120) + 0x50) + 0x70));
    *(unsigned int *)((((int)stk + 4) + 0x70)) = t410;
    t411 = *(int *)(((((int)stk + 120) + 0x50) + 0x6C));
    *(unsigned int *)((((int)stk + 4) + 0x6C)) = t411;
    t412 = *(int *)(((((int)stk + 120) + 0x50) + 0x68));
    *(unsigned int *)((((int)stk + 4) + 0x68)) = t412;
    t413 = *(int *)(((((int)stk + 120) + 0x50) + 0x64));
    *(unsigned int *)((((int)stk + 4) + 0x64)) = t413;
    t414 = *(int *)(((((int)stk + 120) + 0x50) + 0x60));
    *(unsigned int *)((((int)stk + 4) + 0x60)) = t414;
    t415 = *(int *)(((((int)stk + 120) + 0x50) + 0x5C));
    *(unsigned int *)((((int)stk + 4) + 0x5C)) = t415;
    t416 = *(int *)(((((int)stk + 120) + 0x50) + 0x58));
    *(unsigned int *)((((int)stk + 4) + 0x58)) = t416;
    t417 = *(int *)(((((int)stk + 120) + 0x50) + 0x54));
    *(unsigned int *)((((int)stk + 4) + 0x54)) = t417;
    t418 = *(int *)(((((int)stk + 120) + 0x50) + 0x50));
    *(unsigned int *)((((int)stk + 4) + 0x50)) = t418;
    t419 = *(int *)(((((int)stk + 120) + 0x50) + 0x4C));
    *(unsigned int *)((((int)stk + 4) + 0x4C)) = t419;
    t420 = *(int *)(((((int)stk + 120) + 0x50) + 0x48));
    *(unsigned int *)((((int)stk + 4) + 0x48)) = t420;
    t421 = *(int *)(((((int)stk + 120) + 0x50) + 0x44));
    *(unsigned int *)((((int)stk + 4) + 0x44)) = t421;
    t422 = *(int *)(((((int)stk + 120) + 0x50) + 0x40));
    *(unsigned int *)((((int)stk + 4) + 0x40)) = t422;
    t423 = *(int *)(((((int)stk + 120) + 0x50) + 0x3C));
    *(unsigned int *)((((int)stk + 4) + 0x3C)) = t423;
    t424 = *(int *)(((((int)stk + 120) + 0x50) + 0x38));
    *(unsigned int *)((((int)stk + 4) + 0x38)) = t424;
    t425 = *(int *)(((((int)stk + 120) + 0x50) + 0x34));
    *(unsigned int *)((((int)stk + 4) + 0x34)) = t425;
    t426 = *(int *)(((((int)stk + 120) + 0x50) + 0x30));
    *(unsigned int *)((((int)stk + 4) + 0x30)) = t426;
    t427 = *(int *)(((((int)stk + 120) + 0x50) + 0x2C));
    *(unsigned int *)((((int)stk + 4) + 0x2C)) = t427;
    t428 = *(int *)(((((int)stk + 120) + 0x50) + 0x28));
    *(unsigned int *)((((int)stk + 4) + 0x28)) = t428;
    t429 = *(int *)(((((int)stk + 120) + 0x50) + 0x24));
    *(unsigned int *)((((int)stk + 4) + 0x24)) = t429;
    t430 = *(int *)(((((int)stk + 120) + 0x50) + 0x20));
    *(unsigned int *)((((int)stk + 4) + 0x20)) = t430;
    t431 = *(int *)(((((int)stk + 120) + 0x50) + 0x1C));
    *(unsigned int *)((((int)stk + 4) + 0x1C)) = t431;
    t432 = *(int *)(((((int)stk + 120) + 0x50) + 0x18));
    *(unsigned int *)((((int)stk + 4) + 0x18)) = t432;
    t433 = *(int *)(((((int)stk + 120) + 0x50) + 0x14));
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t433;
    t434 = *(int *)(((((int)stk + 120) + 0x50) + 0x10));
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t434;
    t435 = *(int *)(((((int)stk + 120) + 0x50) + 0xC));
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t435;
    t436 = *(int *)(((((int)stk + 120) + 0x50) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t436;
    t437 = *(int *)(((((int)stk + 120) + 0x50) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t437;
    t438 = *(int *)(((((int)stk + 120) + 0x50) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t438;
    FUN_0c16cb20();
    *(unsigned int *)0xC2EA6BC = 0x0;
    *(unsigned int *)0xC2EA6B8 = 0x0;
    return 0x0;
}
