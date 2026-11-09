/* Straight-line functions with calls and guards (batch gen_apm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_insertnop(int);
int mpdrv_v2p(int);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };


int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t2;
    int t3;
    int t17;
    int t21;
    int t22;
    int t23;
    int t28;
    int t40;
    int t35;
    int t36;
    int t37;
    int t38;
    int t51;
    int t45;
    int t46;
    int t47;
    int t48;
    int t66;
    int t67;
    int t68;
    int t79;
    int t80;
    int t81;
    int t82;
    int t97;
    int t5;
    int t6;
    int t7;
    int t59;
    int stk[14];
    int R1008;
    int R1012;
    int R1016;

    R1008 = *(int *)((int)stk + 0);
    R1012 = *(int *)((int)stk + 4);
    R1016 = *(int *)((int)stk + 8);

    R1008 = a4;
    *(unsigned char *)(((int)stk + 16)) = a5;
    R1012 = a6;
    R1016 = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)(((R1008) + 0xC176918)));
    t2 = *(signed char *)(((((int)stk + 0) + 0xC) + 0x0));
    t3 = *(int *)0xC2FA538;
    if (((int)((((struct o10CC_int *)(t3))->v)) > 0) && ((t5 = (((struct oFD8_int *)(t3))->v), (int)t5 > 0) && (t6 = (((struct oFCC_int *)(t3))->v), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop(((((struct o10CC_int *)(t3))->v)));
    }
    t17 = *(int *)0xC2FA538;
    (((struct oFCC_uint *)(t17))->v) = (((((struct oFCC_int *)(t17))->v)) + (((((struct oFD8_int *)(t17))->v)) << 2));
    t21 = (((struct oFCC_int *)((*(int *)0xC2FA538)))->v);
    *(unsigned int *)(((int)stk + 20)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    t22 = *(int *)0xC2FA538;
    t23 = (((struct o10B4_int *)(t22))->v);
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((R1008) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t28 = R1012;
    R1012 = (unsigned char)(*(signed char *)(((int)stk + 16)));
    R1008 = (unsigned char)(*(signed char *)(((int)stk + 12)));
    if (((((struct o10C4_int *)((*(int *)0xC2FA538)))->v)) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((R1012) << 16) << 8) & 0xFF000000) | (((R1008) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (*(int *)(((int)stk + 20))));
        t40 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t35 = t28;
            t36 = 0x0;
            t37 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t38 = *(int *)((t35 + 0x0));
                t35 = (t35 + 0x4);
                t36 = (t36 + 0x1);
                *(unsigned int *)((t37 + 0x0)) = t38;
                t37 = (t37 + 0x4);
                if ((int)t36 >= (int)a7) {
                    break;
                }
            }
            t40 = t37;
        }
        t59 = t40;
    } else {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((R1008) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (R1012));
        t51 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t45 = t28;
            t46 = 0x0;
            t47 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t48 = *(int *)((t45 + 0x0));
                t45 = (t45 + 0x4);
                t46 = (t46 + 0x1);
                *(unsigned int *)((t47 + 0x0)) = ((((((t48 << 16) << 8) & 0xFF000000) | ((t48 << 8) & 0xFF0000)) | (((int)t48 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t48 >> 16) >> 8));
                t47 = (t47 + 0x4);
                if ((int)t46 >= (int)a7) {
                    break;
                }
            }
            t51 = t47;
        }
        t59 = t51;
    }
    if (((((struct o10C4_int *)((*(int *)0xC2FA538)))->v)) == 1) {
        if ((int)a9 > 0) {
            t66 = a8;
            t67 = 0x0;
            t68 = t59;
            for (;;) {
                t67 = (t67 + 0x1);
                *(unsigned int *)((t68 + 0x0)) = ((((((*(signed char *)((t66 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t66 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t66 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t66 + 0x3))));
                t68 = (t68 + 0x4);
                t66 = (t66 + 0x4);
                if ((int)t67 >= (int)a9) {
                    break;
                }
            }
        }
    } else {
        if ((int)a9 > 0) {
            t79 = 0x0;
            t80 = a8;
            t81 = t59;
            for (;;) {
                t82 = *(int *)((t80 + 0x0));
                t80 = (t80 + 0x4);
                t79 = (t79 + 0x1);
                *(unsigned int *)((t81 + 0x0)) = t82;
                t81 = (t81 + 0x4);
                if ((int)t79 >= (int)a9) {
                    break;
                }
            }
        }
    }
    (((struct oFD8_uint *)((*(int *)0xC2FA538)))->v) = (R1016);
    t97 = *(int *)0xC2FA538;
    (((struct oFDC_uint *)(t97))->v) = (((((struct oFDC_int *)(t97))->v)) + ((R1016) << 2));
    return 0x0;
}
