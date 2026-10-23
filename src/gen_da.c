/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMvGetFaceVerts(int, int);
int nlMvSendTriangle(int, int, int);
int nlMvSendQuad(int, int, int, int);
int nlMvSendFan3(int, int, int, int, int);
int abs(int);
int GetStopPosCenter(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
extern int getNearLineIndex();
int kmLoadTexture(int, int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
float navi_GetRouteTbl(int, int, int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
int nlMultiMatrix8(int);
int putLevelCTFontAssist(int, int, int, int, int);
int gdGdcReqDmaTrans(int a4, int a5);
int BigOneRotate(int a4, int a5, int a6);
int menuRecordsHandler(void);
int texLoadIndexed(int a4, int a5);
int nlMvPutFaceClip(int a4, int a5, int a6, int a7);
float kyakuInitStops(float f4);

int gdGdcReqDmaTrans(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}



int texLoadIndexed(int a4, int a5)
{
    int t3;
    int t0;
    int t4;
    int t5;
    int t17;
    int t6;
    int t7;
    int t8;
    int t11;
    int t9;
    int t10;

    t3 = a4;
    if ((int)a4 >= 0) {
        t0 = *(int *)0xC2B3184;
        t3 = (a4 + t0);
    }
    t4 = *(int *)0xC2AEC84;
    t5 = *(int *)(((((t3 << 2) << 1) + t4) + 0x0));
    t17 = 0x0;
    if (t5 != 0) {
        t6 = *(int *)(((((t3 << 2) << 1) + t4) + 0x4));
        t7 = *(int *)0xC2B29C0;
        t8 = *(int *)((((t6 * 0x3C) + t7) + 0x28));
        t11 = 0x0;
        if (t8 == 0) {
            t9 = kmLoadTexture(((t6 * 0x3C) + t7), a5, 0x0, 0x0);
            t10 = 0x1;
            if (t9 != 0) {
                t10 = 0x0;
            }
            t11 = t10;
        }
        t17 = t11;
    }
    return t17;
}

int nlMvPutFaceClip(int a4, int a5, int a6, int a7)
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
    int t39;
    int t40;
    int t62;
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
    int t61;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t85;
    int t86;
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
    int t113;
    int t114;
    int t87;
    int t54;
    int t57;
    int t58;
    int t59;
    int t60;
    int t79;
    int t82;
    int t83;
    int t84;
    int t106;
    int t109;
    int t110;
    int t111;
    int t112;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 12)) = (a6 + 0x4);
    t0 = *(int *)0xC2B7660;
    *(unsigned int *)(((int)stk + 8)) = (a6 + 0x2);
    t1 = *(int *)0xC2B7668;
    if (a4 == 0) {
        if (a5 != 7) {
            return nlMvGetFaceVerts(t0, a6);
        }
        t2 = *(int *)(((int)stk + 8));
        t3 = *(int *)(((int)stk + 12));
        t4 = *(short *)((a6 + 0x0));
        t5 = *(short *)((t3 + 0x0));
        t6 = *(short *)((t2 + 0x0));
        return nlMvSendTriangle((((t4 << 2) << 2) + t0), (((t6 << 2) << 2) + t0), (((t5 << 2) << 2) + t0));
    }
    if (a4 == 7) {
        if (a5 == 7) {
            return a5;
        }
        if (a5 == 0) {
            t7 = *(int *)(((int)stk + 8));
            t8 = *(int *)(((int)stk + 12));
            t9 = *(short *)((a6 + 0x0));
            t10 = *(short *)((t8 + 0x0));
            t11 = *(short *)((t7 + 0x0));
            return nlMvSendTriangle((((t9 << 2) << 2) + t0), (((t11 << 2) << 2) + t0), (((t10 << 2) << 2) + t0));
        }
        return nlMvGetFaceVerts(t0, a6);
    }
    t12 = *(int *)0xC2B7664;
    if (a5 != 0) {
        if (a5 == 7) {
            return nlMvGetFaceVerts(t0, a6);
        }
        if (a4 == a5) {
            if (a4 != 1) {
                if (a4 != 2) {
                    if (a4 != 3) {
                        if (a4 != 4) {
                            if (a4 != 5) {
                                if (a4 != 6) {
                                    return a4;
                                }
                                t13 = *(short *)(((a7 + 0x4) + 0x0));
                                *(unsigned int *)(((int)stk + 12)) = ((t13 << 2) << 2);
                                t14 = *(short *)(((a7 + 0x2) + 0x0));
                                *(unsigned int *)(((int)stk + 8)) = ((t14 << 2) << 2);
                                t15 = *(int *)(((int)stk + 8));
                                t16 = *(int *)(((int)stk + 12));
                                return nlMvSendQuad((t16 + t12), (t15 + t12), (((t14 << 2) << 2) + t1), (((t13 << 2) << 2) + t1));
                            }
                            t17 = *(short *)(((a7 + 0x2) + 0x0));
                            *(unsigned int *)(((int)stk + 12)) = ((t17 << 2) << 2);
                            t18 = *(short *)((a7 + 0x0));
                            *(unsigned int *)(((int)stk + 8)) = ((t18 << 2) << 2);
                            t19 = *(int *)(((int)stk + 8));
                            t20 = *(int *)(((int)stk + 12));
                            return nlMvSendQuad((t20 + t12), (t19 + t12), (((t18 << 2) << 2) + t1), (((t17 << 2) << 2) + t1));
                        }
                        t21 = *(short *)((a7 + 0x0));
                        *(unsigned int *)(((int)stk + 12)) = ((t21 << 2) << 2);
                        t22 = *(short *)(((a7 + 0x4) + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t22 << 2) << 2);
                        t23 = *(int *)(((int)stk + 8));
                        t24 = *(int *)(((int)stk + 12));
                        return nlMvSendQuad((t24 + t12), (t23 + t12), (((t22 << 2) << 2) + t1), (((t21 << 2) << 2) + t1));
                    }
                    t25 = *(short *)((a7 + 0x0));
                    *(unsigned int *)(((int)stk + 12)) = ((t25 << 2) << 2);
                    t26 = *(short *)(((a7 + 0x4) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t26 << 2) << 2);
                    t27 = *(int *)(((int)stk + 8));
                    t28 = *(int *)(((int)stk + 12));
                    return nlMvSendQuad((t28 + t12), (t27 + t12), (((t26 << 2) << 2) + t1), (((t25 << 2) << 2) + t1));
                }
                t29 = *(short *)(((a7 + 0x2) + 0x0));
                *(unsigned int *)(((int)stk + 12)) = ((t29 << 2) << 2);
                t30 = *(short *)((a7 + 0x0));
                *(unsigned int *)(((int)stk + 8)) = ((t30 << 2) << 2);
                t31 = *(int *)(((int)stk + 8));
                t32 = *(int *)(((int)stk + 12));
                return nlMvSendQuad((t32 + t12), (t31 + t12), (((t30 << 2) << 2) + t1), (((t29 << 2) << 2) + t1));
            }
            t33 = *(short *)(((a7 + 0x4) + 0x0));
            *(unsigned int *)(((int)stk + 12)) = ((t33 << 2) << 2);
            t34 = *(short *)(((a7 + 0x2) + 0x0));
            *(unsigned int *)(((int)stk + 8)) = ((t34 << 2) << 2);
            t35 = *(int *)(((int)stk + 8));
            t36 = *(int *)(((int)stk + 12));
            return nlMvSendQuad((t36 + t12), (t35 + t12), (((t34 << 2) << 2) + t1), (((t33 << 2) << 2) + t1));
        }
        t39 = a4;
        t40 = a5;
        if ((0x4 & a4) != 0) {
            t39 = ((~a4) & 0x7);
            t40 = ((~a5) & 0x7);
        }
        if (t39 != 1) {
            if (t39 != 2) {
                t62 = t39;
                if (t39 == 3) {
                    if (t40 == 2) {
                        t42 = *(short *)((a7 + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t42 << 2) << 2);
                        t43 = *(int *)(((int)stk + 12));
                        t44 = *(short *)(((a7 + 0x4) + 0x0));
                        t45 = *(short *)((t43 + 0x0));
                        t46 = *(short *)(((a7 + 0x2) + 0x0));
                        t47 = *(int *)(((int)stk + 8));
                        t54 = (((t42 << 2) << 2) + t1);
                        t57 = t47;
                        t58 = (((t44 << 2) << 2) + t12);
                        t59 = (((t45 << 2) << 2) + t0);
                        t60 = (((t46 << 2) << 2) + t1);
                    } else {
                        t48 = *(short *)(((a7 + 0x4) + 0x0));
                        *(unsigned int *)(((int)stk + 12)) = ((t48 << 2) << 2);
                        t49 = *(int *)(((int)stk + 8));
                        t50 = *(short *)((a7 + 0x0));
                        t51 = *(short *)((t49 + 0x0));
                        t52 = *(short *)(((a7 + 0x2) + 0x0));
                        t53 = *(int *)(((int)stk + 12));
                        t54 = (((t48 << 2) << 2) + t1);
                        t57 = t53;
                        t58 = (((t50 << 2) << 2) + t12);
                        t59 = (((t51 << 2) << 2) + t0);
                        t60 = (((t52 << 2) << 2) + t1);
                    }
                    t61 = nlMvSendFan3((t57 + t12), t58, t59, t60, t54);
                    t62 = t61;
                }
                t87 = t62;
            } else {
                if (t40 == 3) {
                    t70 = *(short *)((a7 + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t70 << 2) << 2);
                    t71 = *(int *)(((int)stk + 12));
                    t72 = *(short *)(((a7 + 0x4) + 0x0));
                    t73 = *(short *)((t71 + 0x0));
                    t74 = *(short *)(((a7 + 0x2) + 0x0));
                    t79 = (((t70 << 2) << 2) + t1);
                    t82 = t74;
                    t83 = (((t73 << 2) << 2) + t0);
                    t84 = (((t72 << 2) << 2) + t1);
                } else {
                    t75 = *(short *)(((a7 + 0x2) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t75 << 2) << 2);
                    t76 = *(short *)(((a7 + 0x4) + 0x0));
                    t77 = *(short *)((a6 + 0x0));
                    t78 = *(short *)((a7 + 0x0));
                    t79 = (((t75 << 2) << 2) + t1);
                    t82 = t78;
                    t83 = (((t77 << 2) << 2) + t0);
                    t84 = (((t76 << 2) << 2) + t1);
                }
                t85 = *(int *)(((int)stk + 8));
                t86 = nlMvSendFan3((t85 + t12), (((t82 << 2) << 2) + t12), t83, t84, t79);
                t87 = t86;
            }
            t114 = t87;
        } else {
            if (t40 == 3) {
                t95 = *(short *)(((a7 + 0x4) + 0x0));
                *(unsigned int *)(((int)stk + 12)) = ((t95 << 2) << 2);
                t96 = *(int *)(((int)stk + 8));
                t97 = *(short *)(((a7 + 0x2) + 0x0));
                t98 = *(short *)((t96 + 0x0));
                t99 = *(short *)((a7 + 0x0));
                t100 = *(int *)(((int)stk + 12));
                t106 = (((t95 << 2) << 2) + t1);
                t109 = t100;
                t110 = (((t97 << 2) << 2) + t12);
                t111 = (((t98 << 2) << 2) + t0);
                t112 = (((t99 << 2) << 2) + t1);
            } else {
                t101 = *(short *)(((a7 + 0x2) + 0x0));
                *(unsigned int *)(((int)stk + 8)) = ((t101 << 2) << 2);
                t102 = *(short *)((a7 + 0x0));
                t103 = *(short *)((a6 + 0x0));
                t104 = *(short *)(((a7 + 0x4) + 0x0));
                t105 = *(int *)(((int)stk + 8));
                t106 = (((t101 << 2) << 2) + t1);
                t109 = t105;
                t110 = (((t104 << 2) << 2) + t12);
                t111 = (((t103 << 2) << 2) + t0);
                t112 = (((t102 << 2) << 2) + t1);
            }
            t113 = nlMvSendFan3((t109 + t12), t110, t111, t112, t106);
            t114 = t113;
        }
        return t114;
    }
    return nlMvGetFaceVerts(t0, a6);
}

