/* Straight-line functions with calls and guards (batch gen_atn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int TOANG(int, int, float, float, float);
int getGoiToolSelect(int);
int goiToolCamera(int);
int nlAddVector(int, int);
int nlCalcVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintf(int, int, int, int, int);
int nlPushUnitMatrix(void);
int nlSubVector(int, int);
void goiToolCamData(int a4);

void goiToolCamData(int a4)
{
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t13;
    int t14;
    int t22;
    int t42;
    int t43;
    int t46;
    int t55;
    int t80;
    int t115;
    int t117;
    int t120;
    int t121;
    int t122;
    int t126;
    int t176;
    int t179;
    int t200;
    int t291;
    int t298;
    int t363;
    int t371;
    int t372;
    int t377;
    int t381;
    int t389;
    int t404;
    int t406;
    int t415;
    int t420;
    int t439;
    int t443;
    int t457;
    int t459;
    int t469;
    int t471;
    int t484;
    int t485;
    int t486;
    int t492;
    int t493;
    int t494;
    float t593;
    float u594;
    float u596;
    float u598;
    int t617;
    int t618;
    int t620;
    int t11;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t88;
    int t89;
    int t118;
    int t119;
    int t373;
    int t378;
    int t621;
    int stk[61];

    if (a4 == 0) {
        goiToolCamera(0x0);
        *(unsigned int *)0xC2A6294 = 0x0;
        *(unsigned int *)0xC2A6290 = 0x0;
        *(unsigned int *)0xC2A628C = 0x0;
        *(unsigned int *)0xC2A6288 = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A627C) = *(struct mv3 *)(0xC179840); }
        *(float *)0xC2A6284 = ((*(float *)0xC2A6284) + 10.0f);
        t3 = 0xC2A627C;
        t4 = 0x41200000;
        t5 = 0xC2A5AFC;
        t6 = 0x0;
        for (;;) {
            if ((int)t6 >= (int)0x3C) {
                break;
            }
            t4 = 0x0;
            t3 = t5;
            *(unsigned int *)((t5 + 0x0)) = t4;
            t4 = 0xC081324;
            t3 = (t3 + 0x4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t3) = *(struct mv3 *)(0xC0A4788); }
            t3 = t5;
            t3 = (t3 + 0x10);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t3) = *(struct mv3 *)(0xC0A4788); }
            *(unsigned int *)((t5 + 0x1C)) = 0xFFFFFFFF;
            t5 = (t5 + 0x20);
            t6 = (t6 + 0x1);
        }
        t7 = *(int *)0xC2A1B30;
        t8 = t7;
        t10 = 0xC2A62D0;
        for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)((t7 + 956)) < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
    } else {
        if ((*(int *)0xC2A4E60) == 0) {
            *(unsigned int *)(((int)stk + 60)) = 0x1;
            t13 = getGoiToolSelect(((int)stk + 60));
            if (t13 == 16) {
                *(unsigned int *)(((int)stk + 60)) = 0x2;
                t14 = getGoiToolSelect(((int)stk + 60));
                if ((t14 == 0) && ((t15 = *(int *)0xC2A628C, t16 = *(int *)((0xC2A5AFC + (((t15 << 2) << 2) << 1))), (t16 & 1) != 0) && ((t17 = *(int *)0xC2A628C, t18 = *(int *)0xC2A6290, t19 = *(int *)((((((t17 << 2) << 2) << 1) + 0xC2A5AFC) + 0x1C)), (int)t18 >= (int)t19) && (t20 = *(int *)0xC2A628C, t21 = *(int *)((((((t20 << 2) << 2) << 1) + 0xC2A5AFC) + 0x20)), (t21 & 1) != 0)))) {
                    t22 = *(int *)0xC2A628C;
                    *(unsigned int *)0xC2A628C = (t22 + 0x1);
                    if ((int)(t22 + 0x1) >= (int)0x3C) {
                        *(unsigned int *)0xC2A628C = 0x0;
                    }
                    *(unsigned int *)0xC2A6290 = 0x0;
                }
            }
        }
        { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 60) + 0x10)) = *(struct mv16 *)(((*(int *)0xC2A1B30) + 0xB4)); }
        nlInvertMatrix((((int)stk + 60) + 0x10));
        t42 = *(int *)0xC1EE284;
        if ((t42 & 16) != 0) {
            t43 = *(int *)0xC2A628C;
            *(unsigned int *)0xC2A628C = (t43 + 0x1);
            if ((int)(t43 + 0x1) >= (int)0x3C) {
                *(unsigned int *)0xC2A628C = 0x0;
            }
        } else {
            if ((t42 & 32) != 0) {
                t46 = *(int *)0xC2A628C;
                *(unsigned int *)0xC2A628C = (t46 - 1);
                if ((int)(t46 - 1) < 0) {
                    *(unsigned int *)0xC2A628C = 0x3B;
                }
            }
        }
        t55 = *(int *)0xC2A628C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 60) + 0x5C)) = *(struct mv3 *)((((((t55 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 60) + 0x74)) = *(struct mv3 *)((((((t55 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10)); }
        if (((*(int *)((((((t55 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
            if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                nlPushUnitMatrix();
                nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                nlCalcVector((((int)stk + 60) + 0x5C), (((int)stk + 60) + 0x5C));
                nlCalcVector((((int)stk + 60) + 0x74), (((int)stk + 60) + 0x74));
                nlPopMatrix(0x1);
            }
            nlAddVector((((int)stk + 60) + 0x5C), 0xC2A6348);
            nlAddVector((((int)stk + 60) + 0x74), 0xC2A6348);
        }
        *(unsigned int *)(((int)stk + 72)) = 0xC1EE280;
        t80 = *(int *)0xC1EE284;
        if (((0x10 & t80) != 0) || ((0x20 & t80) != 0)) {
            if ((((*(int *)0xC1EE284) & 32) != 0) && (t88 = *(int *)0xC2A628C, t89 = *(int *)((0xC2A5AFC + (((t88 << 2) << 2) << 1))), (t89 & 1) != 0)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179840) = *(struct mv3 *)((((int)stk + 60) + 0x5C)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A627C) = *(struct mv3 *)((((int)stk + 60) + 0x74)); }
            }
            *(unsigned int *)0xC2A6290 = 0x0;
            *(unsigned int *)0xC2A6288 = 0x1;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 60) + 0x68)) = *(struct mv3 *)(0xC179840); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x80 + ((int)stk + 60))) = *(struct mv3 *)(0xC2A627C); }
        if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
            nlSubVector((((int)stk + 60) + 0x68), 0xC2A6348);
            nlSubVector((0x80 + ((int)stk + 60)), 0xC2A6348);
            if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                nlPushUnitMatrix();
                nlLoadMatrix((((int)stk + 60) + 0x10));
                nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                nlPopMatrix(0x1);
            }
        }
        t115 = *(int *)0xC2A6288;
        if (t115 == 0) {
            *(unsigned int *)(((int)stk + 60)) = 0x2;
            t117 = getGoiToolSelect(((int)stk + 60));
            if ((t117 == 0) && (t118 = *(int *)0xC2A628C, t119 = *(int *)((0xC2A5AFC + (((t118 << 2) << 2) << 1))), (t119 & 2) != 0)) {
                t120 = *(int *)0xC2A628C;
                *(unsigned int *)(((int)stk + 64)) = ((((t120 << 2) << 2) << 1) + 0xC2A5AFC);
                t121 = *(int *)0xC2A6290;
                t122 = *(int *)((((((t120 << 2) << 2) << 1) + 0xC2A5AFC) + 0x1C));
                nlGetAverageVector((((((t120 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4), (((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68), (1.0f / (float)(t122 - t121)), (1.0f - (1.0f / (float)(t122 - t121))));
                nlGetAverageVector(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x10), (0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)), (1.0f / (float)(t122 - t121)), (1.0f - (1.0f / (float)(t122 - t121))));
            } else {
                t126 = *(int *)0xC2A628C;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 60) + 0x68)) = *(struct mv3 *)((((((t126 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x80 + ((int)stk + 60))) = *(struct mv3 *)((((((t126 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10)); }
            }
            *(unsigned int *)0xC2A6290 = ((*(int *)0xC2A6290) + 0x1);
            if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
                if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                    nlPushUnitMatrix();
                    nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                    nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                    nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                    nlPopMatrix(0x1);
                }
                nlAddVector((((int)stk + 60) + 0x68), ((*(int *)0xC2A1B30) + 0x78));
                nlAddVector((0x80 + ((int)stk + 60)), ((*(int *)0xC2A1B30) + 0x78));
            }
        } else {
            if (t115 != 1) {
                if (t115 == 2) {
                    if (((*(int *)0xC1EE250) & 0x8) != 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x4)) = *(struct mv3 *)(0xC179840); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x10)) = *(struct mv3 *)(0xC2A627C); }
                        if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
                            nlSubVector(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x4), 0xC2A6348);
                            nlSubVector(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x10), 0xC2A6348);
                            if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                                nlPushUnitMatrix();
                                nlLoadMatrix((((int)stk + 60) + 0x10));
                                t176 = *(int *)0xC2A628C;
                                *(unsigned int *)(((int)stk + 64)) = ((((t176 << 2) << 2) << 1) + 0xC2A5AFC);
                                nlCalcVector(((*(int *)(((int)stk + 64))) + 0x4), (((((t176 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4));
                                t179 = *(int *)0xC2A628C;
                                *(unsigned int *)(((int)stk + 64)) = ((((t179 << 2) << 2) << 1) + 0xC2A5AFC);
                                nlCalcVector(((*(int *)(((int)stk + 64))) + 0x10), (((((t179 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10));
                                nlPopMatrix(0x1);
                            }
                        }
                        *(unsigned int *)0xC2A6294 = 0x14;
                    }
                    if ((*(int *)0xC2A6294) != 0) {
                        t200 = *(int *)0xC2A6294;
                        *(unsigned int *)0xC2A6294 = (t200 - 1);
                        if ((t200 - 1) == 0) {
                            *(unsigned int *)0xC2A6288 = ((*(int *)0xC2A6288) + 0x1);
                        }
                        nlLocate(0x2C, 0x29);
                        nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C328C);
                        if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
                            if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                                nlPushUnitMatrix();
                                nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                                nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                nlPopMatrix(0x1);
                            }
                            nlAddVector((((int)stk + 60) + 0x68), ((*(int *)0xC2A1B30) + 0x78));
                            nlAddVector((0x80 + ((int)stk + 60)), ((*(int *)0xC2A1B30) + 0x78));
                        }
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 60) + 0x50)) = *(struct mv3 *)(0xC2A627C); }
                        goiToolCamera(0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 60) + 0x68)) = *(struct mv3 *)(0xC179840); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x80 + ((int)stk + 60))) = *(struct mv3 *)(0xC2A627C); }
                        if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 4) != 0) {
                            nlSubVector((((int)stk + 60) + 0x50), (0x80 + ((int)stk + 60)));
                            nlSubVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x50));
                        }
                        if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) == 0) {
                        } else {
                            nlSubVector((((int)stk + 60) + 0x68), 0xC2A6348);
                            nlSubVector((0x80 + ((int)stk + 60)), 0xC2A6348);
                            if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) == 0) {
                            } else {
                                nlPushUnitMatrix();
                                nlLoadMatrix((((int)stk + 60) + 0x10));
                                nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                nlPopMatrix(0x1);
                            }
                            if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
                                if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                                    nlPushUnitMatrix();
                                    nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                                    nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                    nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                    nlPopMatrix(0x1);
                                }
                                nlAddVector((((int)stk + 60) + 0x68), ((*(int *)0xC2A1B30) + 0x78));
                                nlAddVector((0x80 + ((int)stk + 60)), ((*(int *)0xC2A1B30) + 0x78));
                            }
                        }
                    }
                } else {
                    if (t115 == 3) {
                        if (((*(int *)0xC1EE250) & 0x8) != 0) {
                            *(unsigned int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x1C)) = (*(int *)0xC2A6290);
                            t291 = *(int *)0xC2A628C;
                            *(unsigned int *)((((((t291 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t291 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) | 0x1);
                            *(unsigned int *)0xC2A6294 = 0x14;
                        }
                        if ((*(int *)0xC2A6294) == 0) {
                        } else {
                            t298 = *(int *)0xC2A6294;
                            *(unsigned int *)0xC2A6294 = (t298 - 1);
                            if ((t298 - 1) == 0) {
                                *(unsigned int *)0xC2A6288 = 0x1;
                            }
                            nlLocate(0x2C, 0x29);
                            nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C329C);
                        }
                    }
                    if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
                        if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                            nlPushUnitMatrix();
                            nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                            nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                            nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                            nlPopMatrix(0x1);
                        }
                        nlAddVector((((int)stk + 60) + 0x68), ((*(int *)0xC2A1B30) + 0x78));
                        nlAddVector((0x80 + ((int)stk + 60)), ((*(int *)0xC2A1B30) + 0x78));
                    }
                }
            } else {
                if (((*(int *)0xC1EE250) & 0x8) != 0) {
                    *(unsigned int *)0xC2A6294 = 0x14;
                }
                if ((*(int *)0xC2A6294) != 0) {
                    t363 = *(int *)0xC2A6294;
                    *(unsigned int *)0xC2A6294 = (t363 - 1);
                    if ((t363 - 1) == 0) {
                        *(unsigned int *)0xC2A6288 = ((*(int *)0xC2A6288) + 0x1);
                    }
                    nlLocate(0x2C, 0x29);
                    nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C327C);
                } else {
                    t371 = *(int *)0xC1EE250;
                    t372 = *(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                    t377 = 0x0;
                    if (((0x20 & t371) != 0) && (t373 = *(int *)0xC0F4278, (int)t373 < (int)0x4)) {
                        t377 = 0x1;
                    }
                    t381 = 0x0;
                    if (((0x10 & t371) != 0) && (t378 = *(int *)0xC0F4278, (int)t378 > 0)) {
                        t381 = 0x1;
                    }
                    *(unsigned int *)0xC0F4278 = ((*(int *)0xC0F4278) + (t377 - t381));
                    if (((*(int *)0xC1EE250) & 128) == 0) {
                    } else {
                        t389 = *(int *)0xC0F4278;
                        if (t389 != 0) {
                            if (t389 != 1) {
                                if (t389 != 2) {
                                    if (t389 != 3) {
                                        if (t389 == 4) {
                                            t404 = *(int *)0xC2A628C;
                                            *(unsigned int *)((((((t404 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t404 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0xFFFFFFDF);
                                            t406 = *(int *)0xC2A628C;
                                            *(unsigned int *)((((((t406 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t406 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) | ((t372 + 0x20) & 0x20));
                                        }
                                    } else {
                                        if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                                            t415 = *(int *)0xC2A628C;
                                            *(unsigned int *)((((((t415 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t415 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0xFFFFFFEF);
                                            nlPushUnitMatrix();
                                            nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                                        } else {
                                            t420 = *(int *)0xC2A628C;
                                            *(unsigned int *)((((((t420 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t420 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) | 0x10);
                                            nlPushUnitMatrix();
                                            nlLoadMatrix((((int)stk + 60) + 0x10));
                                        }
                                        nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                        nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                        nlPopMatrix(0x1);
                                    }
                                } else {
                                    if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
                                        t439 = *(int *)0xC2A628C;
                                        *(unsigned int *)((((((t439 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t439 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0xFFFFFFF7);
                                        nlAddVector((((int)stk + 60) + 0x68), 0xC2A6348);
                                        nlAddVector((0x80 + ((int)stk + 60)), 0xC2A6348);
                                    } else {
                                        t443 = *(int *)0xC2A628C;
                                        *(unsigned int *)((((((t443 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t443 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) | 0x8);
                                        nlSubVector((((int)stk + 60) + 0x68), 0xC2A6348);
                                        nlSubVector((0x80 + ((int)stk + 60)), 0xC2A6348);
                                    }
                                }
                            } else {
                                t457 = *(int *)0xC2A628C;
                                *(unsigned int *)((((((t457 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t457 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0xFFFFFFFB);
                                t459 = *(int *)0xC2A628C;
                                *(unsigned int *)((((((t459 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t459 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) | ((t372 + 0x4) & 0x4));
                            }
                        } else {
                            t469 = *(int *)0xC2A628C;
                            *(unsigned int *)((((((t469 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t469 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0xFFFFFFFD);
                            t471 = *(int *)0xC2A628C;
                            *(unsigned int *)((((((t471 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t471 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) | ((t372 + 0x2) & 0x2));
                        }
                        *(unsigned int *)(((int)stk + 60)) = ((*(int *)((((((((*(int *)0xC2A628C) - 1) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8);
                        t484 = *(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        t485 = *(int *)(((int)stk + 60));
                        *(unsigned int *)(((int)stk + 60)) = (t485 ^ (t484 & 0x8));
                        if ((t485 ^ (t484 & 0x8)) != 0) {
                            t486 = *(int *)0xC2A628C;
                            *(unsigned int *)((((((t486 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t486 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0xFFFFFFFD);
                        }
                        t492 = *(int *)0xC2A628C;
                        *(unsigned int *)(((int)stk + 68)) = ((((t492 << 2) << 2) << 1) + 0xC2A5AFC);
                        t493 = *(int *)((((((t492 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        if ((t493 & 0x8) != 0) {
                        } else {
                            if ((0x10 & t493) == 0) {
                            } else {
                                t494 = *(int *)0xC2A628C;
                                *(unsigned int *)((((((t494 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = ((*(int *)((((((t494 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0xFFFFFFEF);
                                nlPushUnitMatrix();
                                nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                                nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                nlPopMatrix(0x1);
                            }
                        }
                    }
                }
                if (((*(int *)(((((((*(int *)0xC2A628C) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0))) & 0x8) != 0) {
                    if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 16) != 0) {
                        nlPushUnitMatrix();
                        nlLoadMatrix(((*(int *)0xC2A1B30) + 0xB4));
                        nlCalcVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                        nlCalcVector((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                        nlPopMatrix(0x1);
                    }
                    nlAddVector((((int)stk + 60) + 0x68), ((*(int *)0xC2A1B30) + 0x78));
                    nlAddVector((0x80 + ((int)stk + 60)), ((*(int *)0xC2A1B30) + 0x78));
                }
            }
        }
        if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 4) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x80 + ((int)stk + 60))) = *(struct mv3 *)(((*(int *)0xC2A1B30) + 0x78)); }
        }
        if (((*(int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)))) & 32) != 0) {
            t593 = nlLength((((int)stk + 60) + 0x68), (0x80 + ((int)stk + 60)));
            u594 = (t593 - 50.0f);
            if ((t593 - 50.0f) > 550.0f) {
                u594 = 550.0f;
            }
            u596 = u594;
            if (0.0f > u594) {
                u596 = 0.0f;
            }
            u598 = 5.0f;
            u598 = u598 + 35.0f * (((550.0f - u596) / 550.0f) * ((550.0f - u596) / 550.0f));
            *(float *)0xC1798A4 = u598;
        } else {
            *(float *)0xC1798A4 = 46.0f;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179840) = *(struct mv3 *)((((int)stk + 60) + 0x68)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A627C) = *(struct mv3 *)((0x80 + ((int)stk + 60))); }
        nlSubVector((0x80 + ((int)stk + 60)), (((int)stk + 60) + 0x68));
        TOANG(0xC179858, 0xC17985A, (*(float *)(((int)stk + 188))), (*(float *)(((int)stk + 192))), (-(*(float *)(((int)stk + 196)))));
        t617 = *(int *)0xC2A1B30;
        t618 = t617;
        t620 = 0xC2A62D0;
        for (;;) { t621 = *(int *)t618; t618 = (t618 + 4); if ((unsigned int)((t617 + 956)) < (unsigned int)t618) break; *(unsigned int *)t620 = t621; t620 = (t620 + 4); }
        if ((*(int *)0xC2A4E60) != 1) {
        } else {
            if ((*(int *)0xC2A6288) == 1) {
                nlLocate(0x1F, ((*(int *)0xC0F4278) + 0x2A));
                if (((*(int *)0xC1EE330) & 24) != 0) {
                    nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C3228);
                }
            }
            nlLocate(0x1E, 0x28);
            if (((*(int *)0xC1EE330) & 16) != 0) {
                *(volatile int *)0xC2A6288;
                nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C32AC);
            } else {
                nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C32B4);
            }
            *(volatile int *)0xC2A628C;
            nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C32B8);
            *(volatile int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)));
            nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C32CC);
            *(volatile int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)));
            nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C32E0);
            *(volatile int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)));
            nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C32F4);
            *(volatile int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)));
            nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C3308);
            *(float *)(((int)stk + 12)) = (*(float *)0xC1798A4);
            *(volatile int *)((0xC2A5AFC + ((((*(int *)0xC2A628C) << 2) << 2) << 1)));
            nlPrintf(0x0, 0x0, 0x0, 0x0, 0xC0C331C);
        }
    }
}
