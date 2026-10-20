/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c034cf2(int);
int FUN_0c034fa8(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
float nlFloor(float);
void FUN_0c14f5a2(int a4, int a5);
float FUN_0c035134(float f4, float f5);

void FUN_0c14f5a2(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int stk[4] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = *(int *)0xC2B9358;
    t2 = *(int *)((t1 + 0x0));
    t3 = t2;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        t6 = *(int *)((t3 + 0x4));
        if ((unsigned int)t6 > (unsigned int)0x0) {
            t7 = *(int *)((t3 + 0x4));
            t5 = (t5 + (t7 - 1));
            if ((unsigned int)t4 < (unsigned int)(t7 - 1)) {
                t8 = *(int *)((t3 + 0x4));
                t4 = t8;
                t4 = (t4 - 1);
            }
        }
        if (t3 != t1) {
            t9 = *(int *)((t3 + 0x0));
            t3 = t9;
            continue;
        }
        break;
    }
    *(unsigned int *)((a4 + 0x0)) = (((t5 << 2) << 2) << 1);
    *(unsigned int *)((a5 + 0x0)) = (((t4 << 2) << 2) << 1);
    t10 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)((((unsigned short)t10 & 0xF) << 2) << 2) >> 4));
}

float FUN_0c035134(float f4, float f5)
{
    float u0;
    float t1;
    float u2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;

    u0 = *(float *)0xC270478;
    t1 = nlFloor((f4 / u0));
    u2 = *(float *)0xC270478;
    t3 = nlFloor((f5 / u2));
    t4 = *(int *)0xC27045C;
    t5 = *(int *)0xC270460;
    t6 = *(int *)0xC27046C;
    if ((int)((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) >= 0) {
        t7 = *(int *)0xC270474;
        if ((int)((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) < (int)t7) {
            t8 = *(int *)0xC270458;
            t9 = *(int *)(((((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2) + t8));
            if (t9 != 0) {
                t10 = *(int *)0xC270458;
                t11 = *(int *)((((((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2) + t10) + 0x0));
                t12 = *(short *)((t11 + 0x0));
                t14 = (t11 + 0x4);
                t15 = t12;
                while (t15 != 0) {
                    t16 = *(int *)((t14 + 0x0));
                    t14 = (t14 + 0x4);
                    FUN_0c034cf2(t16);
                    t15 = (t15 - 1);
                }
                t18 = *(int *)0xC270458;
                t19 = *(int *)((t18 + (((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2)));
                t20 = *(short *)((t19 + 0x2));
                t22 = t14;
                t23 = t20;
                while (t23 != 0) {
                    t24 = *(int *)((t22 + 0x0));
                    t22 = (t22 + 0x4);
                    FUN_0c034fa8(t24);
                    t23 = (t23 - 1);
                }
            }
        }
    }
    return t3;
}
