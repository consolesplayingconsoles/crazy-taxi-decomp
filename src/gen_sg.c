/* Straight-line functions with calls and guards (batch gen_sg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c158860(int, int, int);
extern void _builtin_prefetch(void *);
int nlSqrt(int, int);
int FUN_0c080d70(int a4, int a5);

int FUN_0c080d70(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t11;
    int t12;
    int t42;
    int t14;
    int t15;
    int t16;
    int t35;
    int t37;
    int t39;
    int t27;
    float u28;
    int stk[20] = {0};

    t0 = *(int *)0xC2AF370;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + (*(int *)0xC2AF368)));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    FUN_0c158860(((t4 & 0x3FFFFFF) | 0xE0000000), (*(int *)0xC2AF36C), t3);
    _builtin_prefetch((void *)(*(int *)(((int)stk + 4))));
    if (t3 == 64) {
        _builtin_prefetch((void *)((*(int *)(((int)stk + 4))) + 0x20));
    }
    t11 = *(int *)0xC2AF368;
    t12 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t12 + t11)) = ((*(int *)((t12 + t11))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    t42 = t11;
    if ((int)a4 > 0) {
        t14 = t12;
        t15 = a4;
        t16 = a5;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t14;
            }
            if ((*(int *)0xC2B7944) != 0) {
                t14 = 0xC0771B0;
                nlSqrt(t16, (((int)stk + 4) + 0xC));
                u28 = (*(float *)(((int)stk + 24)));
            } else {
                *(float *)(((int)stk + 16)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 20)) = (*(float *)((t16 + 0x4)));
                t27 = t14;
                u28 = (*(float *)((t16 + 0x8)));
            }
            t14 = t27;
            *(float *)(((int)stk + 24)) = (1.0f / u28);
            *(float *)(((int)stk + 28)) = (*(float *)((t16 + 0xC)));
            *(float *)(((int)stk + 32)) = (*(float *)((t16 + 0x10)));
            t14 = (*(int *)((t16 + 0x14)));
            *(unsigned int *)(((int)stk + 36)) = t14;
            *(unsigned int *)(((int)stk + 40)) = (*(int *)((t16 + 0x18)));
            t35 = *(int *)(((*(int *)0xC2AF370) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t35 << 2);
            t37 = *(int *)(((t35 << 2) + (*(int *)0xC2AF368)));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            t14 = 0xC158860;
            FUN_0c158860(((t37 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t37 & 0x3FFFFFF) | 0xE0000000));
            t39 = *(int *)0xC2AF368;
            t15 = (t15 - 1);
            t14 = (*(int *)(((int)stk + 4)));
            *(unsigned int *)((t14 + t39)) = ((*(int *)((t14 + t39))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t42 = t39;
    }
    return t42;
}
