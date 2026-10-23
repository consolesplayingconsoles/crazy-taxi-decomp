/* Straight-line functions with calls and guards (batch gen_apm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_insertnop(int);
int mpdrv_v2p(int);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);

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
    int stk[16];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0xC176918)));
    t2 = *(signed char *)(((((int)stk + 8) + 0xC) + 0x0));
    t3 = *(int *)0xC2FA538;
    if (((int)(*(int *)((t3 + 0x10CC))) > 0) && ((t5 = *(int *)((t3 + 0xFD8)), (int)t5 > 0) && (t6 = *(int *)((t3 + 0xFCC)), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop((*(int *)((t3 + 0x10CC))));
    }
    t17 = *(int *)0xC2FA538;
    *(unsigned int *)((t17 + 0xFCC)) = ((*(int *)((t17 + 0xFCC))) + ((*(int *)(((0xFD8 + t17) + 0x0))) << 2));
    t21 = *(int *)(((*(int *)0xC2FA538) + 0xFCC));
    *(unsigned int *)(((int)stk + 28)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    t22 = *(int *)0xC2FA538;
    t23 = *(int *)(((0x10B4 + t22) + 0x0));
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((*(int *)(((int)stk + 8))) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t28 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (unsigned char)(*(signed char *)(((int)stk + 24)));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((int)stk + 20)));
    if ((*(int *)((0x10C4 + (*(int *)0xC2FA538)))) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 12))) << 16) << 8) & 0xFF000000) | (((*(int *)(((int)stk + 8))) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (*(int *)(((int)stk + 28))));
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
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((*(int *)(((int)stk + 8))) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 12))));
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
    if ((*(int *)((0x10C4 + (*(int *)0xC2FA538)))) == 1) {
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
    *(unsigned int *)(((*(int *)0xC2FA538) + 0xFD8)) = (*(int *)(((int)stk + 16)));
    t97 = *(int *)0xC2FA538;
    *(unsigned int *)((t97 + 0xFDC)) = ((*(int *)((t97 + 0xFDC))) + ((*(int *)(((int)stk + 16))) << 2));
    return 0x0;
}
