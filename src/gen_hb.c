/* Straight-line functions with calls and guards (batch gen_hb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8);

int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t15;
    int t19;
    int t3;
    int t7;
    int t29;
    int t33;
    int t48;
    int t24;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if (a6 == 0) {
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
        t48 = 0x103;
    } else {
        t1 = *(int *)(((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF660));
        t15 = 0x100;
        t19 = a6;
        if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18))) & 3) == 0) {
            t3 = a5;
            if ((0x1F & a5) != 0) {
                t3 = ((a5 + 0x1F) & 0xFFFFFFE0);
            }
            t7 = a6;
            if ((0x1F & a6) != 0) {
                t7 = ((a6 + 0x1F) & 0xFFFFFFE0);
            }
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x0)) = (*(int *)0xC2BF668);
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x4)) = t3;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0xC)) = a4;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x14)) = t7;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18)) = (a7 | 0x1);
            *(unsigned int *)((a8 + 0x0)) = (((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1));
            *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF660) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF660) + 0x0))) + 0x1) & 0x7);
            *(unsigned int *)0xC2BF668 = ((*(int *)0xC2BF668) + 0x1);
            t15 = 0x0;
            t19 = t7;
        }
        if (t15 == 0x100) {
        } else {
            if ((((*(int *)((((((*(int *)0xC2BF678) << 8) + 0xC2BF460) + ((((*(int *)0xC2BF674) << 2) << 2) << 1)) + 0x18))) & 3) == 0) && (t24 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18)), (t24 & 0x3) == 1)) {
                *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18)) = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC) | 0x2);
                *(unsigned int *)0xFFA00020 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x4)));
                *(unsigned int *)0xFFA00024 = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0xC))) + 0xF0000000) << 1);
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)t19 >> 2) >> 2) >> 1);
                t29 = 0x241;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18))) & 4) == 0) {
                    t29 = 0x2C1;
                }
                t33 = t29;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18))) & 16) != 0) {
                    t33 = (t29 | 0x1000);
                }
                *(unsigned int *)0xFFA0002C = t33;
                *(unsigned int *)0xA05F6800 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0xC)));
                *(unsigned int *)0xA05F6804 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x14)));
                *(unsigned int *)0xA05F6808 = 0x1;
                *(unsigned int *)0xC2BF674 = t1;
                *(unsigned int *)0xC2BF678 = ((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1);
                *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF66C) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF66C) + 0x0))) + 0x1) & 0x7);
            }
        }
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
        t48 = t15;
    }
    return t48;
}
