/* Straight-line functions with calls and guards (batch gen_adt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_insertnop(int);
int mpdrv_v2p(int);
int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9);
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
struct oFE0_int { char p[0xFE0]; int v; };
struct oFE0_uint { char p[0xFE0]; unsigned int v; };


int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t115;
    int t3;
    int t4;
    int t19;
    int t22;
    int t24;
    int t25;
    int t26;
    int t30;
    int t31;
    int t41;
    int t37;
    int t38;
    int t39;
    int t40;
    int t52;
    int t47;
    int t48;
    int t49;
    int t50;
    int t68;
    int t69;
    int t70;
    int t81;
    int t82;
    int t83;
    int t84;
    int t99;
    int t102;
    int t103;
    int t104;
    int t105;
    int t6;
    int t7;
    int t8;
    int t9;
    int t60;
    int stk[17];

    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    t0 = *(int *)0xC2FA538;
    t115 = 0xFFFFFFFF;
    if ((*(signed char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6))) != 0) {
    } else {
        *(unsigned char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)(((int)stk + 16)) = ((a7 + a9) + 0x3);
        t3 = *(signed char *)((a4 + 0xC176918));
        (((struct o10_uchar *)(((int)stk + 8)))->v) = t3;
        *(unsigned int *)(((int)stk + 20)) = (unsigned char)(0xC0 & t3);
        *(unsigned int *)(((int)stk + 8)) = (((int)(unsigned char)(0xC0 & t3) >> 6) & 0x3);
        t4 = *(int *)0xC2FA538;
        if (((int)((((struct o10CC_int *)(t4))->v)) > 0) && ((t6 = (((struct oFD8_int *)(t4))->v), (int)t6 > 0) && (t7 = (((struct oFCC_int *)(t4))->v), t8 = *(int *)((t7 + 0x0)), t9 = *(int *)(((int)stk + 8)), t9 == (0x3 & (short)((unsigned int)t8 >> 16))))) {
            mpdrv_insertnop(((((struct o10CC_int *)(t4))->v)));
        }
        t19 = *(int *)0xC2FA538;
        (((struct oFCC_uint *)(t19))->v) = (((((struct oFCC_int *)(t19))->v)) + (((((struct oFD8_int *)(t19))->v)) << 2));
        t22 = *(int *)(((int)stk + 8));
        t24 = (((struct oFCC_int *)((*(int *)0xC2FA538)))->v);
        *(unsigned int *)(((int)stk + 28)) = (unsigned char)(a7 + a9);
        *(unsigned int *)((t24 + 0x0)) = ((t22 << 16) | (unsigned char)(a7 + a9));
        t25 = *(int *)0xC2FA538;
        t26 = (((struct o10B4_int *)(t25))->v);
        *(unsigned int *)(((t24 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)(((a4 << 2) + ((t25 + 0xFE8) + (((((t26 << 1) + t26) << 2) << 2) << 1)))))));
        t30 = *(int *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((int)stk + 12)));
        t31 = *(signed char *)(((int)stk + 24));
        if (((((struct o10C4_int *)((*(int *)0xC2FA538)))->v)) == 1) {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 8))) << 16) << 8) & 0xFF000000) | (((unsigned char)t31 << 16) & 0xFF0000)) | (((*(int *)(((int)stk + 20))) << 8) & 0xFF00)) | (*(int *)(((int)stk + 28))));
            t41 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t37 = t30;
                t38 = 0x0;
                t39 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t40 = *(int *)((t37 + 0x0));
                    t37 = (t37 + 0x4);
                    t38 = (t38 + 0x1);
                    *(unsigned int *)((t39 + 0x0)) = t40;
                    t39 = (t39 + 0x4);
                    if ((int)t38 >= (int)a7) {
                        break;
                    }
                }
                t41 = t39;
            }
            t60 = t41;
        } else {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = ((((((*(int *)(((int)stk + 20))) << 16) & 0xFF0000) | (((unsigned char)t31 << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 8))));
            t52 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t47 = t30;
                t48 = 0x0;
                t49 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t50 = *(int *)((t47 + 0x0));
                    t47 = (t47 + 0x4);
                    t48 = (t48 + 0x1);
                    *(unsigned int *)((t49 + 0x0)) = ((((((t50 << 16) << 8) & 0xFF000000) | ((t50 << 8) & 0xFF0000)) | (((int)t50 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t50 >> 16) >> 8));
                    t49 = (t49 + 0x4);
                    if ((int)t48 >= (int)a7) {
                        break;
                    }
                }
                t52 = t49;
            }
            t60 = t52;
        }
        if (((((struct o10C4_int *)((*(int *)0xC2FA538)))->v)) == 1) {
            if ((int)a9 > 0) {
                t68 = a8;
                t69 = 0x0;
                t70 = t60;
                for (;;) {
                    t69 = (t69 + 0x1);
                    *(unsigned int *)((t70 + 0x0)) = ((((((*(signed char *)((t68 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t68 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t68 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t68 + 0x3))));
                    t70 = (t70 + 0x4);
                    t68 = (t68 + 0x4);
                    if ((int)t69 >= (int)a9) {
                        break;
                    }
                }
            }
        } else {
            if ((int)a9 > 0) {
                t81 = 0x0;
                t82 = a8;
                t83 = t60;
                for (;;) {
                    t84 = *(int *)((t82 + 0x0));
                    t82 = (t82 + 0x4);
                    t81 = (t81 + 0x1);
                    *(unsigned int *)((t83 + 0x0)) = t84;
                    t83 = (t83 + 0x4);
                    if ((int)t81 >= (int)a9) {
                        break;
                    }
                }
            }
        }
        (((struct oFD8_uint *)((*(int *)0xC2FA538)))->v) = (*(int *)(((int)stk + 16)));
        t99 = *(int *)0xC2FA538;
        (((struct oFDC_uint *)(t99))->v) = (((((struct oFDC_int *)(t99))->v)) + ((*(int *)(((int)stk + 16))) << 2));
        t102 = *(int *)0xC2FA538;
        t103 = *(int *)0xC2FA538;
        t104 = (((struct oFE0_int *)(t102))->v);
        (((struct oFE0_uint *)(t102))->v) = (t104 + 0x1);
        *(unsigned int *)((((t103 + 0x28) + (a4 * 0x2C)) + 0x18)) = ((t104 + 0x1) - 1);
        t105 = *(int *)0xC2FA538;
        (((struct oFE0_uint *)(t105))->v) = (((((struct oFE0_int *)(t105))->v)) & 0x7FFFFFFF);
        if (((((struct oFE0_int *)((*(int *)0xC2FA538)))->v)) == 0) {
            (((struct oFE0_uint *)((*(int *)0xC2FA538)))->v) = 0x1;
        }
        t115 = (*(int *)(((((*(int *)0xC2FA538) + 0x28) + (a4 * 0x2C)) + 0x18)));
    }
    return t115;
}
