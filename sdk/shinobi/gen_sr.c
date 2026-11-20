/* Straight-line functions with calls and guards (batch gen_sr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_init_globals(void);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
struct o10A8_int { char p[0x10A8]; int v; };
struct o10A8_uint { char p[0x10A8]; unsigned int v; };
struct o10AC_uint { char p[0x10AC]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };


int mpdrv_init_ex(int a4, int a5, int a6, int a7)
{
    int t4;
    int t6;
    int t12;
    int t15;
    int t20;
    int t22;
    int t25;
    int t28;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t36;
    int t45;
    int t47;
    int t49;
    int t51;
    int t53;
    int t55;
    int t56;
    int t57;
    int t58;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t99;
    int t88;
    int t89;
    int t90;
    int t91;
    int stk[11];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    R1004 = a5;
    *(unsigned int *)0xC2FA538 = 0xC2F943C;
    *(unsigned int *)0xC2FA400 = a6;
    (((struct oFC8_uint *)((*(int *)0xC2FA538)))->v) = (R1004);
    if ((((((struct oFC4_int *)((*(int *)0xC2FA538)))->v)) & 0x1F) != 0) {
        t4 = *(int *)0xC2FA538;
        (((struct oFC4_uint *)(t4))->v) = (((((struct oFC4_int *)(t4))->v)) + 0x20);
        t6 = *(int *)0xC2FA538;
        (((struct oFC4_uint *)(t6))->v) = (((((struct oFC4_int *)(t6))->v)) & 0xFFFFFFE0);
    }
    t12 = *(int *)0xC2FA538;
    if ((((((struct oFC8_int *)(t12))->v)) & 0x1F) != 0) {
        (((struct oFC8_uint *)(t12))->v) = (((((struct oFC8_int *)(t12))->v)) + 0x20);
        t15 = *(int *)0xC2FA538;
        (((struct oFC8_uint *)(t15))->v) = (((((struct oFC8_int *)(t15))->v)) & 0xFFFFFFE0);
    }
    t20 = *(int *)0xC2FA538;
    (((struct oFC4_uint *)(t20))->v) = (((((struct oFC4_int *)(t20))->v)) | 0xA0000000);
    t22 = *(int *)0xC2FA538;
    (((struct oFC8_uint *)(t22))->v) = (((((struct oFC8_int *)(t22))->v)) | 0xA0000000);
    mpdrv_init_globals();
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((((0xFE8 + (*(int *)0xC2FA538)) + t25) + 0x0)) = 0x0;
        t28 = ((0xFE8 + (*(int *)0xC2FA538)) + t25);
        t25 = (t25 + 0x4);
        (((struct o60_uint *)(t28))->v) = 0x0;
        if ((unsigned int)t25 >= (unsigned int)0x60) {
            break;
        }
    }
    R1008 = (R1012);
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = R1004;
            R1004 = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = R1008;
            t30 = (t30 + 0x1);
            R1008 = (t35 + 0x4);
            t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
            *(unsigned int *)((((0xFE8 + (*(int *)0xC2FA538)) + (t36 << 2)) + 0x0)) = (t33 | 0xA0000000);
            (((struct o60_uint *)(((t36 << 2) + (0xFE8 + (*(int *)0xC2FA538)))))->v) = ((t33 | 0xA0000000) + 0x400);
            if ((int)t30 >= (int)a7) {
                break;
            }
        }
    }
    t45 = *(int *)0xC2FA538;
    (((struct o10A8_uint *)(t45))->v) = ((((struct oFC4_int *)(t45))->v));
    t47 = *(int *)0xC2FA538;
    (((struct o10AC_uint *)(t47))->v) = (((a7 << 8) << 2) + ((((struct oFC4_int *)(t47))->v)));
    t49 = *(int *)0xC2FA538;
    (((struct oFCC_uint *)(t49))->v) = ((((struct o10A8_int *)(t49))->v));
    t51 = 0x0;
    for (;;) {
        t53 = ((0xF90 + (*(int *)0xC2FA538)) + t51);
        t51 = (t51 + 0x1);
        *(unsigned char *)((t53 + 0x0)) = 0x0;
        if ((int)t51 >= (int)0x18) {
            break;
        }
    }
    t55 = R1012;
    if ((int)a7 > 0) {
        t56 = 0x0;
        t57 = t55;
        for (;;) {
            t58 = *(int *)((t57 + 0x0));
            t57 = (t57 + 0x4);
            if (t58 != 0) {
                if ((t58 != 6) && ((t58 != 12) && (t58 != 18))) {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC2FA538))) + 0x0)) = 0x65;
                } else {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC2FA538))) + 0x0)) = 0x72;
                }
            } else {
                *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC2FA538))) + 0x0)) = 0x72;
            }
            t56 = (t56 + 0x1);
            if ((int)t56 >= (int)a7) {
                break;
            }
        }
    }
    t73 = 0xC176930;
    t74 = 0xC176930;
    t75 = 0x72;
    t76 = 0x65;
    t77 = 0xC176930;
    t78 = 0xC176930;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC2FA538)) + (*(int *)((t78 + 0x0)))) + 0x0))) != 0) {
            t73 = (*(int *)((t77 + 0x0)));
            mpdrv_set_dreq_ns(t73);
        } else {
            t88 = t73;
            t89 = t74;
            t90 = t75;
            t91 = t76;
        }
        t78 = (t78 + 0x4);
        t73 = t88;
        t74 = t89;
        t75 = t90;
        t76 = t91;
        t77 = (t77 + 0x4);
        if ((unsigned int)t78 >= (unsigned int)0xC176940) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC2FA538)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC2FA538)))->v))))->v) = 0x6155404F;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC2FA538)))->v)) + 0x10)) = 0x0;
    t99 = *(int *)0xC2FA538;
    (((struct o80_uint *)(((((struct o10F4_int *)(t99))->v))))->v) = (((((struct o10C0_int *)(t99))->v)) | ((((struct o10D0_int *)(t99))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC2FA538)))->v)) + 0x14)) = 0x1;
    return 0x0;
}
