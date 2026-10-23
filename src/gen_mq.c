/* Straight-line functions with calls and guards (batch gen_mq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
void syIntInit(int a4, int a5);

void syIntInit(int a4, int a5)
{
    int t0;
    int t5;
    int t6;
    int t7;
    int t9;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t18;
    int t20;
    int t21;
    int t23;
    int t24;
    int t25;
    int t27;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t36;
    int t38;
    int t39;
    int t40;
    int t43;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xFF00001C = ((*(int *)0xFF00001C) | 0x800);
    if (a4 == 0x80000000) {
        *(unsigned int *)0xC16DE34 = 0xC16E030;
        *(unsigned int *)0xC16DE90 = 0xC16E030;
        *(unsigned int *)0xC16E1DC = 0x0;
        *(unsigned int *)0xC16E1D4 = a5;
    } else {
        *(unsigned int *)0xC16DE34 = 0xC16DEC4;
        *(unsigned int *)0xC16DE90 = 0xC16DEC4;
        *(unsigned int *)0xC16E1DC = 0x0;
        *(unsigned int *)0xC16E1D4 = 0x0;
    }
    t5 = 0xC16E1DC;
    t6 = 0xC16DE94;
    t7 = ((int)_builtin_get_vbr());
    for (;;) {
        if ((unsigned int)t6 > (unsigned int)0xC16DEC4) {
            break;
        }
        t5 = (*(int *)((t6 + 0x0)));
        t6 = (t6 + 0x4);
        *(unsigned int *)((t7 + 0x0)) = t5;
        t7 = (t7 + 0x4);
    }
    t9 = (int)_builtin_get_vbr();
    t11 = ((int)_builtin_get_vbr());
    t12 = (((unsigned int)((unsigned int)((unsigned int)(t7 - t9) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t11);
        t12 = (t12 - 0x1);
        t11 = (t11 + 0x20);
        if (t12 == 0) {
            break;
        }
    }
    t14 = t5;
    t15 = 0xC16DE00;
    t16 = (((int)_builtin_get_vbr()) + 0x100);
    for (;;) {
        if ((unsigned int)t15 > (unsigned int)0xC16DE38) {
            break;
        }
        t14 = (*(int *)((t15 + 0x0)));
        t15 = (t15 + 0x4);
        *(unsigned int *)((t16 + 0x0)) = t14;
        t16 = (t16 + 0x4);
    }
    t18 = (int)_builtin_get_vbr();
    t20 = (((int)_builtin_get_vbr()) + 0x400);
    t21 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFF00 + (t16 - t18)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t20);
        t21 = (t21 - 0x1);
        t20 = (t20 + 0x20);
        if (t21 == 0) {
            break;
        }
    }
    t23 = t14;
    t24 = 0xC16DE00;
    t25 = (((int)_builtin_get_vbr()) + 0x400);
    for (;;) {
        if ((unsigned int)t24 > (unsigned int)0xC16DE38) {
            break;
        }
        t23 = (*(int *)((t24 + 0x0)));
        t24 = (t24 + 0x4);
        *(unsigned int *)((t25 + 0x0)) = t23;
        t25 = (t25 + 0x4);
    }
    t27 = (int)_builtin_get_vbr();
    t29 = (((int)_builtin_get_vbr()) + 0x1000);
    t30 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFC00 + (t25 - t27)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t29);
        t30 = (t30 - 0x1);
        t29 = (t29 + 0x20);
        if (t30 == 0) {
            break;
        }
    }
    t32 = t23;
    t33 = 0xC16DE38;
    t34 = (((int)_builtin_get_vbr()) + 0x600);
    for (;;) {
        if ((unsigned int)t33 > (unsigned int)0xC16DE94) {
            break;
        }
        t32 = (*(int *)((t33 + 0x0)));
        t33 = (t33 + 0x4);
        *(unsigned int *)((t34 + 0x0)) = t32;
        t34 = (t34 + 0x4);
    }
    t36 = (int)_builtin_get_vbr();
    t38 = (((int)_builtin_get_vbr()) + 0x1800);
    t39 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFA00 + (t34 - t36)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t38);
        t39 = (t39 - 0x1);
        t38 = (t38 + 0x20);
        if (t39 == 0) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    t40 = 0xFFFFFE40;
    for (;;) {
        t43 = (((int)_builtin_get_vbr()) + (((t40 >> 1) >> 1) >> 1));
        t40 = (t40 + 0x20);
        *(unsigned int *)(((t43 + 0x200) + 0x0)) = 0xC16DD08;
        if ((int)t40 >= (int)0x620) {
            break;
        }
    }
    _builtin_set_cr((_builtin_get_cr() & 0xEFFFFFFF));
}
