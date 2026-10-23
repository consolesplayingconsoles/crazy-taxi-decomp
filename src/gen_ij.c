/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMvGetFaceVerts(int, int, int, int);
int nlMvSendFan3(int, int, int, int, int);
int nlMvSendQuad(int, int, int, int);
int nlMvSendTriangle(int, int, int);
int nlMvPutFaceClip(int a4, int a5, int a6, int a7);

int nlMvPutFaceClip(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t14;
    int t15;
    int t16;
    int t19;
    int t20;
    int t23;
    int t24;
    int t27;
    int t28;
    int t31;
    int t32;
    int t37;
    int t38;
    int t62;
    int t41;
    int t47;
    int t71;
    int t76;
    int t98;
    int t104;
    int t118;
    int t89;
    int t53;
    int t56;
    int t57;
    int t58;
    int t59;
    int t80;
    int t83;
    int t84;
    int t85;
    int t109;
    int t112;
    int t113;
    int t114;
    int t115;
    int stk[12];

    *(unsigned int *)(((int)stk + 12)) = (a6 + 0x4);
    t0 = *(int *)0xC2B7660;
    *(unsigned int *)(((int)stk + 8)) = (a6 + 0x2);
    t1 = *(int *)0xC2B7668;
    if (a4 == 0) {
        if (a5 != 7) {
            return nlMvGetFaceVerts(t0, a6, t1, a7);
        }
        return nlMvSendTriangle(((((*(short *)((a6 + 0x0))) << 2) << 2) + t0), ((((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + t0), ((((*(short *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) << 2) + t0));
    }
    if (a4 == 7) {
        if (a5 == 7) {
            return a5;
        }
        if (a5 == 0) {
            return nlMvSendTriangle(((((*(short *)((a6 + 0x0))) << 2) << 2) + t0), ((((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + t0), ((((*(short *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) << 2) + t0));
        }
        return nlMvGetFaceVerts(t0, a6, t1, a7);
    }
    t14 = *(int *)0xC2B7664;
    if ((a5 != 0) && (a5 != 7)) {
        if (a4 == a5) {
            if (a4 != 1) {
                if (a4 != 2) {
                    if ((a4 != 3) && (a4 != 4)) {
                        if (a4 != 5) {
                            if (a4 != 6) {
                                return a4;
                            }
                            t15 = *(short *)(((a7 + 0x4) + 0x0));
                            *(unsigned int *)(((int)stk + 12)) = ((t15 << 2) << 2);
                            t16 = *(short *)(((a7 + 0x2) + 0x0));
                            *(unsigned int *)(((int)stk + 8)) = ((t16 << 2) << 2);
                            return nlMvSendQuad(((*(int *)(((int)stk + 12))) + t14), ((*(int *)(((int)stk + 8))) + t14), (((t16 << 2) << 2) + t1), (((t15 << 2) << 2) + t1));
                        }
                        t19 = *(short *)(((a7 + 0x2) + 0x0));
                        *(unsigned int *)(((int)stk + 12)) = ((t19 << 2) << 2);
                        t20 = *(short *)((a7 + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t20 << 2) << 2);
                        return nlMvSendQuad(((*(int *)(((int)stk + 12))) + t14), ((*(int *)(((int)stk + 8))) + t14), (((t20 << 2) << 2) + t1), (((t19 << 2) << 2) + t1));
                    }
                    t23 = *(short *)((a7 + 0x0));
                    *(unsigned int *)(((int)stk + 12)) = ((t23 << 2) << 2);
                    t24 = *(short *)(((a7 + 0x4) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t24 << 2) << 2);
                    return nlMvSendQuad(((*(int *)(((int)stk + 12))) + t14), ((*(int *)(((int)stk + 8))) + t14), (((t24 << 2) << 2) + t1), (((t23 << 2) << 2) + t1));
                }
                t27 = *(short *)(((a7 + 0x2) + 0x0));
                *(unsigned int *)(((int)stk + 12)) = ((t27 << 2) << 2);
                t28 = *(short *)((a7 + 0x0));
                *(unsigned int *)(((int)stk + 8)) = ((t28 << 2) << 2);
                return nlMvSendQuad(((*(int *)(((int)stk + 12))) + t14), ((*(int *)(((int)stk + 8))) + t14), (((t28 << 2) << 2) + t1), (((t27 << 2) << 2) + t1));
            }
            t31 = *(short *)(((a7 + 0x4) + 0x0));
            *(unsigned int *)(((int)stk + 12)) = ((t31 << 2) << 2);
            t32 = *(short *)(((a7 + 0x2) + 0x0));
            *(unsigned int *)(((int)stk + 8)) = ((t32 << 2) << 2);
            return nlMvSendQuad(((*(int *)(((int)stk + 12))) + t14), ((*(int *)(((int)stk + 8))) + t14), (((t32 << 2) << 2) + t1), (((t31 << 2) << 2) + t1));
        }
        t37 = a4;
        t38 = a5;
        if ((0x4 & a4) != 0) {
            t37 = ((~a4) & 0x7);
            t38 = ((~a5) & 0x7);
        }
        if (t37 != 1) {
            if (t37 != 2) {
                t62 = t37;
                if (t37 == 3) {
                    if (t38 == 2) {
                        t41 = *(short *)((a7 + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t41 << 2) << 2);
                        t53 = (((t41 << 2) << 2) + t1);
                        t56 = (*(int *)(((int)stk + 8)));
                        t57 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t14);
                        t58 = ((((*(short *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) << 2) + t0);
                        t59 = ((((*(short *)(((a7 + 0x2) + 0x0))) << 2) << 2) + t1);
                    } else {
                        t47 = *(short *)(((a7 + 0x4) + 0x0));
                        *(unsigned int *)(((int)stk + 12)) = ((t47 << 2) << 2);
                        t53 = (((t47 << 2) << 2) + t1);
                        t56 = (*(int *)(((int)stk + 12)));
                        t57 = ((((*(short *)((a7 + 0x0))) << 2) << 2) + t14);
                        t58 = ((((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + t0);
                        t59 = ((((*(short *)(((a7 + 0x2) + 0x0))) << 2) << 2) + t1);
                    }
                    t62 = (nlMvSendFan3((t56 + t14), t57, t58, t59, t53));
                }
                t89 = t62;
            } else {
                if (t38 == 3) {
                    t71 = *(short *)((a7 + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t71 << 2) << 2);
                    t80 = (((t71 << 2) << 2) + t1);
                    t83 = (*(short *)(((a7 + 0x2) + 0x0)));
                    t84 = ((((*(short *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) << 2) + t0);
                    t85 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t1);
                } else {
                    t76 = *(short *)(((a7 + 0x2) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t76 << 2) << 2);
                    t80 = (((t76 << 2) << 2) + t1);
                    t83 = (*(short *)((a7 + 0x0)));
                    t84 = ((((*(short *)((a6 + 0x0))) << 2) << 2) + t0);
                    t85 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t1);
                }
                t89 = (nlMvSendFan3(((*(int *)(((int)stk + 8))) + t14), (((t83 << 2) << 2) + t14), t84, t85, t80));
            }
            t118 = t89;
        } else {
            if (t38 == 3) {
                t98 = *(short *)(((a7 + 0x4) + 0x0));
                *(unsigned int *)(((int)stk + 12)) = ((t98 << 2) << 2);
                t109 = (((t98 << 2) << 2) + t1);
                t112 = (*(int *)(((int)stk + 12)));
                t113 = ((((*(short *)(((a7 + 0x2) + 0x0))) << 2) << 2) + t14);
                t114 = ((((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + t0);
                t115 = ((((*(short *)((a7 + 0x0))) << 2) << 2) + t1);
            } else {
                t104 = *(short *)(((a7 + 0x2) + 0x0));
                *(unsigned int *)(((int)stk + 8)) = ((t104 << 2) << 2);
                t109 = (((t104 << 2) << 2) + t1);
                t112 = (*(int *)(((int)stk + 8)));
                t113 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t14);
                t114 = ((((*(short *)((a6 + 0x0))) << 2) << 2) + t0);
                t115 = ((((*(short *)((a7 + 0x0))) << 2) << 2) + t1);
            }
            t118 = (nlMvSendFan3((t112 + t14), t113, t114, t115, t109));
        }
        return t118;
    }
    return nlMvGetFaceVerts(t0, a6, t14, a7);
}
