/* Straight-line functions with calls and guards (batch gen_dt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWallBox(int, int, float);
int GetLightVector(int);
int ChangeObjGroup(int, int);
int Result_Money_Digit_Put(void);
int nlMvSetWorkBuffer(int, int);
int nlMvCalcEdgeA(int, int);
int nlMvCalcEdgeB(int, int, int);
int nlMvPutPolygon(int, int, int, int);
int nlMvPutStrip(int, int);
int nlMvEndList(void);
int nlMvSetShadowObjPutPol(int);
int nlMvNotShadowObjPutPol(int);
int nlsndSeqRequest(void);
int Sound_Request(int, int);
int adxf_ChkPrmGfr(int);
extern float getNearLineIndex();
int kmiCopyFromFrameBuffer(int, int, int);
int kmtex_GetTextureLevel(int, int);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetVtxColorMode(int);
int nlSprPut(int);
int kmtex_ConvertSmallVQFromMem(int a4, int a5, int a6, int a7);
int lcdSetData(int a4, int a5, int a6, int a7, int a8);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);
int nd_StartWait_PutMessage(void);
int menuCursor(int a4, int a5, int a6);
int nlMvObjPutSub(int a4, int a5);
int Result_Money_Put(void);
int menuCursorBox(int a4, int a5, int a6);
int InitMV(void);
int kmiFBgetfreemem(int a4, int a5, int a6, int a7);
float navi_GetRouteTbl(int a4, int a5, int a6);
float ExecColliObj(int a4, int a5, float f4);
void navi_GetRouteYa(int a4);

int kmtex_ConvertSmallVQFromMem(int a4, int a5, int a6, int a7)
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



int nlMvObjPutSub(int a4, int a5)
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
        nlMvCalcEdgeA(t10, t9);
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
        nlMvCalcEdgeB(t32, t31, a5);
    }
    t35 = *(short *)((a4 + 0x10));
    t36 = *(int *)((a4 + 0x4));
    t37 = *(int *)((a4 + 0x8));
    nlMvPutPolygon(t37, t35, t36, a5);
    t39 = *(short *)((a4 + 0xE));
    t40 = *(int *)((a4 + 0x4));
    nlMvPutStrip(t40, t39);
    return nlMvEndList();
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



