/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int Pass_Angry(void);
int Start_Pass_Judgement(int);
int psgJolt(int, int, float);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int Sound_Request(int, int);
int nlPopMatrix(int);
extern int nlPushMatrix();
int psgEnterState3(int);
int psgSeatMatrix(int);
int psgFrameState3(int a4);

int psgFrameState3(int a4)
{
    int t0;
    int t2;
    int t4;
    int t6;
    float u531;
    int t7;
    float u8;
    int t9;
    int t11;
    float u12;
    int t13;
    float u15;
    int t16;
    float u17;
    int t18;
    int t19;
    int t28;
    int t29;
    int t30;
    float u32;
    int t33;
    int t34;
    int t40;
    float u41;
    int t42;
    float u44;
    int t45;
    float u46;
    int t47;
    int t48;
    int t56;
    float u58;
    int t59;
    float u61;
    float u60;
    float u64;
    float u66;
    int t67;
    int t68;
    int t74;
    int t79;
    float u81;
    int t82;
    float u84;
    int t86;
    int t87;
    float u89;
    int t90;
    int t91;
    int t94;
    int t95;
    int t107;
    int t117;
    float u119;
    int t120;
    float u122;
    float u124;
    int t125;
    int t130;
    float u132;
    int t133;
    float u135;
    float u137;
    int t138;
    int t144;
    float u146;
    int t147;
    float u149;
    int t151;
    float u152;
    int t153;
    float u168;
    float u177;
    int t178;
    float u189;
    int t190;
    float u205;
    float u214;
    int t215;
    float u226;
    int t227;
    float u242;
    float u251;
    int t252;
    float u263;
    int t264;
    float u279;
    float u288;
    int t289;
    float u300;
    int t301;
    float u316;
    float u325;
    int t326;
    float u337;
    int t338;
    float u353;
    float u362;
    int t363;
    float u374;
    int t375;
    float u390;
    float u399;
    int t400;
    float u411;
    int t412;
    float u427;
    float u436;
    int t437;
    int t448;
    float u450;
    int t451;
    int t453;
    float u454;
    int t455;
    float u456;
    int t461;
    float u463;
    int t464;
    float u466;
    float u467;
    int t469;
    float u470;
    int t471;
    int t480;
    float u482;
    int t483;
    float u485;
    int t486;
    float u487;
    int t488;
    int t497;
    float u499;
    int t500;
    float u502;
    int t507;
    float u508;
    int t509;
    int t537;
    int t539;
    int t543;
    int t547;
    int t551;
    int t555;
    int t559;
    int t563;
    int t574;
    float u523;

    *(unsigned int *)0xC13ED98 = 0x0;
    *(unsigned int *)0xC13ED9C = 0x1;
    *(unsigned int *)0xC13EDA0 = 0x1;
    t0 = ((int (*)(int))(nlPushMatrix))(0x0);
    psgSeatMatrix(a4);
    t2 = *(signed char *)((a4 + 0x149));
    if ((t2 & 128) != 0) {
        psgStepBlend(a4);
        t4 = *(int *)((a4 + 0x118));
        psgJolt(a4, t4, 0.5f);
    } else {
        t6 = *(int *)((a4 + 0x24));
        u531 = 60.0f;
        if ((unsigned int)t6 >= (unsigned int)0x10) {
        } else {
            switch ((t6 << 1)) {
                case 0:
                {
                    t7 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t7 | 0x40);
                    u8 = *(float *)((a4 + 0x38));
                    t9 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t9, (a4 + 0x3C), u8);
                    u523 = 1.0f;
                }
                    break;
                case 2:
                {
                    t11 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t11 & 0xBF);
                    u12 = *(float *)((a4 + 0x38));
                    t13 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t13, (a4 + 0x3C), u12);
                    u15 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u15 + 1.0f);
                    t16 = *(int *)((a4 + 0x34));
                    u17 = *(float *)((a4 + 0x38));
                    t18 = *(int *)((t16 + 0x0));
                    if ((float)(t18 - 1) > u17) {
                    } else {
                        t19 = *(int *)((a4 + 0x24));
                        *(unsigned int *)((a4 + 0x24)) = (t19 + 0x1);
                        psgEnterState3(a4);
                        Drv_StartAction(0x3, a4, 0x0);
                    }
                    u523 = 0.299999982f;
                }
                    break;
                case 4:
                {
                    t28 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t28 & 0xBF);
                    t29 = *(int *)((a4 + 0x34));
                    t30 = *(int *)((t29 + 0x0));
                    FcvStoreBuffer(t29, (a4 + 0x3C), (float)(t30 - 2));
                    u32 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u32 + 1.0f);
                    if (5.0f > (u32 + 1.0f)) {
                    } else {
                        t33 = *(int *)((a4 + 0x24));
                        *(unsigned int *)((a4 + 0x24)) = (t33 + 0x1);
                        t34 = *(int *)((a4 + 0x24));
                        psgEnterState3(a4);
                    }
                    u523 = 0.299999982f;
                }
                    break;
                case 6:
                {
                    t40 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t40 & 0xBF);
                    u41 = *(float *)((a4 + 0x38));
                    t42 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t42, (a4 + 0x3C), u41);
                    u44 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u44 + 1.0f);
                    t45 = *(int *)((a4 + 0x34));
                    u46 = *(float *)((a4 + 0x38));
                    t47 = *(int *)((t45 + 0x0));
                    if ((float)(t47 - 1) > u46) {
                    } else {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t48 = *(int *)((a4 + 0x24));
                        psgEnterState3(a4);
                    }
                    u523 = 0.299999982f;
                }
                    break;
                case 8:
                {
                    t56 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u58 = *(float *)((a4 + 0x38));
                    t59 = *(int *)((a4 + 0x34));
                    u61 = 58.0f;
                    if (!(58.0f > u58)) {
                    } else {
                        u60 = *(float *)((a4 + 0x38));
                        u61 = u60;
                    }
                    FcvStoreBuffer(t59, (a4 + 0x3C), u61);
                    u64 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u64 + 1.0f);
                    nlPopMatrix(0x1);
                    u66 = *(float *)((a4 + 0x38));
                    if (60.0f > u66) {
                    } else {
                        t67 = *(int *)0xC1EE7D4;
                        t68 = (int)((int)(t67 - 150) % (int)0x5A);
                        if (t68 == 30) {
                            *(unsigned int *)((a4 + 0x24)) = 0x8;
                        } else {
                            if (t68 == 60) {
                                *(unsigned int *)((a4 + 0x24)) = 0x7;
                            } else {
                                *(unsigned int *)((a4 + 0x24)) = 0x9;
                            }
                        }
                        t74 = *(int *)((a4 + 0x24));
                        psgEnterState3(a4);
                    }
                    u523 = 60.0f;
                }
                    break;
                case 10:
                case 12:
                case 18:
                {
                    t79 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u81 = *(float *)((a4 + 0x38));
                    t82 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t82, (a4 + 0x3C), u81);
                    u84 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u84 + 1.0f);
                    nlPopMatrix(0x1);
                    t86 = *(signed char *)((a4 + 0x149));
                    if ((t86 & 16) != 0) {
                        *(unsigned int *)((a4 + 0x24)) = 0xA;
                        t87 = *(int *)((a4 + 0x24));
                        psgEnterState3(a4);
                    } else {
                        u89 = *(float *)((a4 + 0x38));
                        if (90.0f > u89) {
                        } else {
                            t90 = *(signed char *)((a4 + 0x149));
                            if ((t90 & 8) != 0) {
                                t91 = *(int *)((a4 + 0x24));
                                if (t91 != 6) {
                                    *(unsigned int *)((a4 + 0x24)) = 0x6;
                                } else {
                                    *(unsigned int *)((a4 + 0x24)) = 0x9;
                                }
                            } else {
                                t94 = *(int *)0xC1EE7CC;
                                if ((int)t94 <= (int)0x69) {
                                    *(unsigned int *)((a4 + 0x24)) = 0x6;
                                } else {
                                    t95 = *(int *)((a4 + 0x24));
                                    if (t95 == 9) {
                                        *(unsigned int *)((a4 + 0x24)) = 0x5;
                                    } else {
                                        *(unsigned int *)((a4 + 0x24)) = 0x9;
                                    }
                                }
                            }
                            t107 = *(int *)((a4 + 0x24));
                            psgEnterState3(a4);
                        }
                    }
                    u523 = 60.0f;
                }
                    break;
                case 14:
                {
                    t117 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u119 = *(float *)((a4 + 0x38));
                    t120 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t120, (a4 + 0x3C), u119);
                    u122 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u122 + 1.0f);
                    nlPopMatrix(0x1);
                    u124 = *(float *)((a4 + 0x38));
                    if (60.0f > u124) {
                    } else {
                        *(unsigned int *)((a4 + 0x24)) = 0x9;
                        t125 = *(int *)((a4 + 0x24));
                        psgEnterState3(a4);
                    }
                    u523 = 60.0f;
                }
                    break;
                case 16:
                {
                    t130 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u132 = *(float *)((a4 + 0x38));
                    t133 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t133, (a4 + 0x3C), u132);
                    u135 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u135 + 1.0f);
                    nlPopMatrix(0x1);
                    u137 = *(float *)((a4 + 0x38));
                    if (30.0f > u137) {
                    } else {
                        *(unsigned int *)((a4 + 0x24)) = 0x6;
                        t138 = *(int *)((a4 + 0x24));
                        psgEnterState3(a4);
                    }
                    u523 = 60.0f;
                }
                    break;
                case 20:
                {
                    t144 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u146 = *(float *)((a4 + 0x38));
                    t147 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t147, (a4 + 0x3C), u146);
                    u149 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u149 + 1.0f);
                    nlPopMatrix(0x1);
                    t151 = *(int *)((a4 + 0x34));
                    if (t151 != 0xC92FC64) {
                        if (t151 != 0xC9323F8) {
                            if (t151 != 0xC934CCC) {
                                if (t151 != 0xC937750) {
                                    if (t151 != 0xC93A1A4) {
                                        if (t151 != 0xC93CD68) {
                                            if (t151 != 0xC93F94C) {
                                                if (t151 != 0xC9424C0) {
                                                } else {
                                                    u152 = *(float *)((a4 + 0x38));
                                                    if (u152 == 5.0f) {
                                                        t153 = *(int *)0xC1EE794;
                                                        if ((int)t153 > 0) {
                                                            Start_Pass_Judgement(0xFFFFFFFF);
                                                            Pass_Angry();
                                                        }
                                                    }
                                                    u168 = *(float *)((a4 + 0x38));
                                                    if (u168 == 120.0f) {
                                                        Drv_StartAction(0x7, 0x0, 0x1);
                                                    }
                                                    u177 = *(float *)((a4 + 0x38));
                                                    if (150.0f > u177) {
                                                    } else {
                                                        t178 = *(signed char *)(((0x149 + a4) + 0x0));
                                                        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t178 | 0x20);
                                                    }
                                                }
                                            } else {
                                                u189 = *(float *)((a4 + 0x38));
                                                if (u189 == 5.0f) {
                                                    t190 = *(int *)0xC1EE794;
                                                    if ((int)t190 > 0) {
                                                        Start_Pass_Judgement(0xFFFFFFFF);
                                                        Pass_Angry();
                                                    }
                                                }
                                                u205 = *(float *)((a4 + 0x38));
                                                if (u205 == 120.0f) {
                                                    Drv_StartAction(0x7, 0x0, 0x1);
                                                }
                                                u214 = *(float *)((a4 + 0x38));
                                                if (150.0f > u214) {
                                                } else {
                                                    t215 = *(signed char *)(((0x149 + a4) + 0x0));
                                                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t215 | 0x20);
                                                }
                                            }
                                        } else {
                                            u226 = *(float *)((a4 + 0x38));
                                            if (u226 == 5.0f) {
                                                t227 = *(int *)0xC1EE794;
                                                if ((int)t227 > 0) {
                                                    Start_Pass_Judgement(0xFFFFFFFF);
                                                    Pass_Angry();
                                                }
                                            }
                                            u242 = *(float *)((a4 + 0x38));
                                            if (u242 == 120.0f) {
                                                Drv_StartAction(0x7, 0x0, 0x1);
                                            }
                                            u251 = *(float *)((a4 + 0x38));
                                            if (150.0f > u251) {
                                            } else {
                                                t252 = *(signed char *)(((0x149 + a4) + 0x0));
                                                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t252 | 0x20);
                                            }
                                        }
                                    } else {
                                        u263 = *(float *)((a4 + 0x38));
                                        if (u263 == 5.0f) {
                                            t264 = *(int *)0xC1EE794;
                                            if ((int)t264 > 0) {
                                                Start_Pass_Judgement(0xFFFFFFFF);
                                                Pass_Angry();
                                            }
                                        }
                                        u279 = *(float *)((a4 + 0x38));
                                        if (u279 == 120.0f) {
                                            Drv_StartAction(0x7, 0x0, 0x1);
                                        }
                                        u288 = *(float *)((a4 + 0x38));
                                        if (150.0f > u288) {
                                        } else {
                                            t289 = *(signed char *)(((0x149 + a4) + 0x0));
                                            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t289 | 0x20);
                                        }
                                    }
                                } else {
                                    u300 = *(float *)((a4 + 0x38));
                                    if (u300 == 5.0f) {
                                        t301 = *(int *)0xC1EE794;
                                        if ((int)t301 > 0) {
                                            Start_Pass_Judgement(0xFFFFFFFF);
                                            Pass_Angry();
                                        }
                                    }
                                    u316 = *(float *)((a4 + 0x38));
                                    if (u316 == 120.0f) {
                                        Drv_StartAction(0x7, 0x0, 0x1);
                                    }
                                    u325 = *(float *)((a4 + 0x38));
                                    if (150.0f > u325) {
                                    } else {
                                        t326 = *(signed char *)(((0x149 + a4) + 0x0));
                                        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t326 | 0x20);
                                    }
                                }
                            } else {
                                u337 = *(float *)((a4 + 0x38));
                                if (u337 == 5.0f) {
                                    t338 = *(int *)0xC1EE794;
                                    if ((int)t338 > 0) {
                                        Start_Pass_Judgement(0xFFFFFFFF);
                                        Pass_Angry();
                                    }
                                }
                                u353 = *(float *)((a4 + 0x38));
                                if (u353 == 120.0f) {
                                    Drv_StartAction(0x7, 0x0, 0x1);
                                }
                                u362 = *(float *)((a4 + 0x38));
                                if (150.0f > u362) {
                                } else {
                                    t363 = *(signed char *)(((0x149 + a4) + 0x0));
                                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t363 | 0x20);
                                }
                            }
                        } else {
                            u374 = *(float *)((a4 + 0x38));
                            if (u374 == 5.0f) {
                                t375 = *(int *)0xC1EE794;
                                if ((int)t375 > 0) {
                                    Start_Pass_Judgement(0xFFFFFFFF);
                                    Pass_Angry();
                                }
                            }
                            u390 = *(float *)((a4 + 0x38));
                            if (u390 == 120.0f) {
                                Drv_StartAction(0x7, 0x0, 0x1);
                            }
                            u399 = *(float *)((a4 + 0x38));
                            if (150.0f > u399) {
                            } else {
                                t400 = *(signed char *)(((0x149 + a4) + 0x0));
                                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t400 | 0x20);
                            }
                        }
                    } else {
                        u411 = *(float *)((a4 + 0x38));
                        if (u411 == 5.0f) {
                            t412 = *(int *)0xC1EE794;
                            if ((int)t412 > 0) {
                                Start_Pass_Judgement(0xFFFFFFFF);
                                Pass_Angry();
                            }
                        }
                        u427 = *(float *)((a4 + 0x38));
                        if (u427 == 120.0f) {
                            Drv_StartAction(0x7, 0x0, 0x1);
                        }
                        u436 = *(float *)((a4 + 0x38));
                        if (150.0f > u436) {
                        } else {
                            t437 = *(signed char *)(((0x149 + a4) + 0x0));
                            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t437 | 0x20);
                        }
                    }
                    u523 = 60.0f;
                }
                    break;
                case 22:
                {
                    t448 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u450 = *(float *)((a4 + 0x38));
                    t451 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t451, (a4 + 0x3C), u450);
                    t453 = *(int *)((a4 + 0x34));
                    u454 = *(float *)((a4 + 0x38));
                    t455 = *(int *)((t453 + 0x0));
                    if (!((float)(t455 - 2) > u454)) {
                    } else {
                        u456 = *(float *)((a4 + 0x38));
                        *(float *)((a4 + 0x38)) = (u456 + 1.0f);
                    }
                    nlPopMatrix(0x1);
                    u523 = 0.299999982f;
                }
                    break;
                case 24:
                {
                    t461 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u463 = *(float *)((a4 + 0x38));
                    t464 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t464, (a4 + 0x3C), u463);
                    u466 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u466 - 1.5f);
                    u467 = *(float *)((a4 + 0x38));
                    if (!(u467 > (1.0f + 1.0f))) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        psgEnterState3(a4);
                        t469 = *(short *)((a4 + 0x154));
                        u470 = *(float *)((a4 + 0x38));
                        t471 = *(int *)((a4 + 0x34));
                        FcvStoreBuffer(t471, ((short)((short)t469 * (short)0xCC) + 0xC2ADCE4), u470);
                    }
                    nlPopMatrix(0x1);
                    u523 = 0.299999982f;
                }
                    break;
                case 26:
                case 28:
                {
                    t480 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u482 = *(float *)((a4 + 0x38));
                    t483 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t483, (a4 + 0x3C), u482);
                    u485 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u485 + 1.0f);
                    t486 = *(int *)((a4 + 0x34));
                    u487 = *(float *)((a4 + 0x38));
                    t488 = *(int *)((t486 + 0x0));
                    if (!((float)(t488 - 2) > u487)) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        psgEnterState3(a4);
                    }
                    nlPopMatrix(0x1);
                    u523 = 0.099999994f;
                }
                    break;
                default:
                {
                    t497 = ((int (*)(int, float, float))(nlPushMatrix))(0x0, 0.299999982f, 0.099999994f);
                    psgUpdatePartTracks(a4);
                    u499 = *(float *)((a4 + 0x38));
                    t500 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t500, (a4 + 0x3C), u499);
                    u502 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u502 + 1.0f);
                    if ((int)(u502 + 1.0f) == 58) {
                        Sound_Request(0x9A9, 0x2);
                    }
                    t507 = *(int *)((a4 + 0x34));
                    u508 = *(float *)((a4 + 0x38));
                    t509 = *(int *)((t507 + 0x0));
                    if (!((float)(t509 - 2) > u508)) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        psgEnterState3(a4);
                    }
                    nlPopMatrix(0x1);
                    u523 = 0.099999994f;
                }
                    break;
            }
            u531 = u523;
        }
        t537 = *(int *)((a4 + 0x24));
        if (t537 != 4) {
            if (t537 != 5) {
                if (t537 != 6) {
                    if (t537 != 7) {
                        if (t537 != 8) {
                            if (t537 != 9) {
                                if (t537 != 10) {
                                    psgJolt(a4, (a4 + 0x3C), u531);
                                } else {
                                    t539 = *(int *)((a4 + 0x0));
                                    FcvPlayBuffer((a4 + 0x3C), t539);
                                }
                            } else {
                                t543 = *(int *)((a4 + 0x0));
                                FcvPlayBuffer((a4 + 0x3C), t543);
                            }
                        } else {
                            t547 = *(int *)((a4 + 0x0));
                            FcvPlayBuffer((a4 + 0x3C), t547);
                        }
                    } else {
                        t551 = *(int *)((a4 + 0x0));
                        FcvPlayBuffer((a4 + 0x3C), t551);
                    }
                } else {
                    t555 = *(int *)((a4 + 0x0));
                    FcvPlayBuffer((a4 + 0x3C), t555);
                }
            } else {
                t559 = *(int *)((a4 + 0x0));
                FcvPlayBuffer((a4 + 0x3C), t559);
            }
        } else {
            t563 = *(int *)((a4 + 0x0));
            FcvPlayBuffer((a4 + 0x3C), t563);
        }
    }
    t574 = nlPopMatrix(0x1);
    *(unsigned int *)0xC13ED98 = 0x1;
    *(unsigned int *)0xC13ED9C = 0x0;
    *(unsigned int *)0xC13EDA0 = 0x0;
    return t574;
}
