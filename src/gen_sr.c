/* Straight-line functions with calls and guards (batch gen_sr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_init_globals(void);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);

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

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)0xC2FA538 = 0xC2F943C;
    *(unsigned int *)0xC2FA400 = a6;
    *(unsigned int *)(((*(int *)0xC2FA538) + 0xFC8)) = (*(int *)(((int)stk + 4)));
    if (((*(int *)(((*(int *)0xC2FA538) + 0xFC4))) & 0x1F) != 0) {
        t4 = *(int *)0xC2FA538;
        *(unsigned int *)((t4 + 0xFC4)) = ((*(int *)((t4 + 0xFC4))) + 0x20);
        t6 = *(int *)0xC2FA538;
        *(unsigned int *)((t6 + 0xFC4)) = ((*(int *)((t6 + 0xFC4))) & 0xFFFFFFE0);
    }
    t12 = *(int *)0xC2FA538;
    if (((*(int *)((t12 + 0xFC8))) & 0x1F) != 0) {
        *(unsigned int *)((t12 + 0xFC8)) = ((*(int *)((t12 + 0xFC8))) + 0x20);
        t15 = *(int *)0xC2FA538;
        *(unsigned int *)((t15 + 0xFC8)) = ((*(int *)((t15 + 0xFC8))) & 0xFFFFFFE0);
    }
    t20 = *(int *)0xC2FA538;
    *(unsigned int *)((t20 + 0xFC4)) = ((*(int *)((t20 + 0xFC4))) | 0xA0000000);
    t22 = *(int *)0xC2FA538;
    *(unsigned int *)((t22 + 0xFC8)) = ((*(int *)((t22 + 0xFC8))) | 0xA0000000);
    mpdrv_init_globals();
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((((0xFE8 + (*(int *)0xC2FA538)) + t25) + 0x0)) = 0x0;
        t28 = ((0xFE8 + (*(int *)0xC2FA538)) + t25);
        t25 = (t25 + 0x4);
        *(unsigned int *)(((t28 + 0x60) + 0x0)) = 0x0;
        if ((unsigned int)t25 >= (unsigned int)0x60) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 12)));
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = *(int *)(((int)stk + 8));
            t30 = (t30 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = (t35 + 0x4);
            t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
            *(unsigned int *)((((0xFE8 + (*(int *)0xC2FA538)) + (t36 << 2)) + 0x0)) = (t33 | 0xA0000000);
            *(unsigned int *)(((((t36 << 2) + (0xFE8 + (*(int *)0xC2FA538))) + 0x60) + 0x0)) = ((t33 | 0xA0000000) + 0x400);
            if ((int)t30 >= (int)a7) {
                break;
            }
        }
    }
    t45 = *(int *)0xC2FA538;
    *(unsigned int *)((t45 + 0x10A8)) = (*(int *)((t45 + 0xFC4)));
    t47 = *(int *)0xC2FA538;
    *(unsigned int *)((t47 + 0x10AC)) = (((a7 << 8) << 2) + (*(int *)((t47 + 0xFC4))));
    t49 = *(int *)0xC2FA538;
    *(unsigned int *)((t49 + 0xFCC)) = (*(int *)((t49 + 0x10A8)));
    t51 = 0x0;
    for (;;) {
        t53 = ((0xF90 + (*(int *)0xC2FA538)) + t51);
        t51 = (t51 + 0x1);
        *(unsigned char *)((t53 + 0x0)) = 0x0;
        if ((int)t51 >= (int)0x18) {
            break;
        }
    }
    t55 = *(int *)(((int)stk + 12));
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
    *(unsigned int *)(((*(int *)0xC2FA538) + 0xFC0)) = 0x1;
    *(unsigned int *)(((*(int *)(((*(int *)0xC2FA538) + 0x10F4))) + 0x8C)) = 0x6155404F;
    *(unsigned int *)(((*(int *)(((*(int *)0xC2FA538) + 0x10F4))) + 0x10)) = 0x0;
    t99 = *(int *)0xC2FA538;
    *(unsigned int *)(((*(int *)((t99 + 0x10F4))) + 0x80)) = ((*(int *)((t99 + 0x10C0))) | (*(int *)((t99 + 0x10D0))));
    *(unsigned int *)(((*(int *)(((*(int *)0xC2FA538) + 0x10F4))) + 0x14)) = 0x1;
    return 0x0;
}
