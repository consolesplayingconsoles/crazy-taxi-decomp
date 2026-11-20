/* Straight-line functions with calls and guards (batch gen_afe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiPurgeCache(int);
int kmtex_GetTextureLevel(int, int);
int kmtex_ReloadPalettized4MM(int a4, int a5, int a6);

int kmtex_ReloadPalettized4MM(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t30;
    int t31;
    int t32;
    int t33;
    int t43;
    int t44;
    int t45;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t70;
    int stk[15];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    R1008 = a5;
    t0 = kmtex_GetTextureLevel(a6, a6);
    R1004 = (((int)stk + 0) + 0xC);
    if ((int)a6 <= (int)0x4) {
        R1004 = (((int)stk + 0) + 0xC);
        kmiCopyFromFrameBuffer((((int)stk + 0) + 0xC), (*(int *)((a4 + 0x1C))), 0x10);
        t3 = R1008;
        if (a6 == 1) {
            *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x1)) = (*(signed char *)((t3 + 0x0)));
        } else {
            if (a6 == 2) {
                t5 = ((((int)stk + 0) + 0xC) + 0x2);
                t6 = t3;
                for (;;) {
                    t7 = *(signed char *)((t6 + 0x0));
                    t6 = (t6 + 0x1);
                    *(unsigned char *)((t5 + 0x0)) = t7;
                    t5 = (t5 + 0x1);
                    if ((unsigned int)t5 >= (unsigned int)((((int)stk + 0) + 0xC) + 0x4)) {
                        break;
                    }
                }
            } else {
                t8 = ((((int)stk + 0) + 0xC) + 0x4);
                t9 = t3;
                for (;;) {
                    t10 = *(signed char *)((t9 + 0x0));
                    t9 = (t9 + 0x1);
                    *(unsigned char *)((t8 + 0x0)) = t10;
                    t8 = (t8 + 0x1);
                    if ((unsigned int)t8 >= (unsigned int)((((int)stk + 0) + 0xC) + 0xC)) {
                        break;
                    }
                }
            }
        }
        R1008 = (*(int *)((a4 + 0x1C)));
        kmiPurgeCache((((int)stk + 0) + 0xC));
        kmiPurgeCache(((((int)stk + 0) + 0xC) + 0x20));
        t70 = (R1008);
    } else {
        R1004 = (((int)stk + 0) + 0xC);
        kmiCopyFromFrameBuffer((R1004), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC175F5C + (t0 << 2)))) - 12)), 0x10);
        t30 = ((((int)stk + 0) + 0xC) + 0xC);
        t31 = (R1008);
        for (;;) {
            t32 = *(signed char *)((t31 + 0x0));
            t31 = (t31 + 0x1);
            *(unsigned char *)((t30 + 0x0)) = t32;
            t30 = (t30 + 0x1);
            if ((unsigned int)t30 >= (unsigned int)((((int)stk + 0) + 0xC) + 0x10)) {
                break;
            }
        }
        R1004 = (((int)stk + 0) + 0xC);
        t33 = *(int *)((a4 + 0x1C));
        R1012 = t33;
        R1012 = (t33 + ((*(int *)((0xC175F5C + (t0 << 2)))) - 12));
        kmiPurgeCache((R1004));
        kmiPurgeCache(((R1004) + 0x20));
        kmiCopyToFrameBuffer((R1012), (R1004), 0x10);
        R1004 = 0xC175F88;
        if ((unsigned int)((*(int *)(((t0 << 2) + 0xC175F88))) - 16) > (unsigned int)0x0) {
            t43 = *(int *)((0xC175F5C + (t0 << 2)));
            t44 = R1008;
            t45 = *(int *)((a4 + 0x1C));
            R1012 = (t44 + 0x4);
            kmiCopyToFrameBuffer((t45 + (t43 + 0x4)), (t44 + 0x4), ((*(int *)(((t0 << 2) + (R1004)))) - 16));
        }
        R1004 = (((int)stk + 0) + 0xC);
        kmiCopyFromFrameBuffer((R1004), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC175F5C + ((t0 + 0x1) << 2)))) - 12)), 0x10);
        t59 = (((int)stk + 0) + 0xC);
        t60 = (((*(int *)(((t0 << 2) + 0xC175F88))) + (R1008)) - 12);
        for (;;) {
            t61 = *(signed char *)((t60 + 0x0));
            t60 = (t60 + 0x1);
            *(unsigned char *)((t59 + 0x0)) = t61;
            t59 = (t59 + 0x1);
            if ((unsigned int)t59 >= (unsigned int)((((int)stk + 0) + 0xC) + 0xC)) {
                break;
            }
        }
        t62 = *(int *)((a4 + 0x1C));
        t63 = *(int *)((0xC175F5C + ((t0 + 0x1) << 2)));
        kmiPurgeCache((((int)stk + 0) + 0xC));
        kmiPurgeCache(((((int)stk + 0) + 0xC) + 0x20));
        t70 = (t62 + (t63 - 12));
    }
    kmiCopyToFrameBuffer(t70, (((int)stk + 0) + 0xC), 0x10);
    return 0x0;
}
