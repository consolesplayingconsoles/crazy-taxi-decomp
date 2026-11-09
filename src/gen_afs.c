/* Straight-line functions with calls and guards (batch gen_afs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColor(float, float, float);
extern int nlSprPut();
int PutNameEntryScreen(int a4, int a5, int a6);

int PutNameEntryScreen(int a4, int a5, int a6)
{
    int t0;
    int t1;
    float u2;
    int t5;
    int t8;
    int t10;
    int t11;
    int t13;
    float u14;
    int t15;
    int stk[29];

    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x705;
    *(unsigned int *)(((int)stk + 48)) = 0x2;
    *(unsigned int *)(((int)stk + 0)) = 0x125;
    *(float *)(((int)stk + 4)) = 32.0f;
    *(float *)(((int)stk + 8)) = 32.0f;
    *(float *)(((int)stk + 12)) = (1.0f + 1.0f);
    t0 = ((int (*)(int, int, int))(nlSprPut))(((int)stk + 0), a5, a6);
    *(unsigned int *)(((int)stk + 0)) = 0x126;
    *(float *)(((int)stk + 4)) = 544.0f;
    t1 = ((int (*)(int))(nlSprPut))(((int)stk + 0));
    u2 = *(float *)0xC2864D4;
    *(float *)(((int)stk + 20)) = u2;
    *(float *)(((int)stk + 16)) = u2;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((0xC0EE9CC + (((*(int *)0xC179488) & 0x3) << 2))));
    *(float *)(((int)stk + 4)) = 528.0f;
    *(float *)(((int)stk + 8)) = 190.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x270A;
    t5 = ((int (*)(int))(nlSprPut))(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((0xC0EE9DC + (((*(int *)0xC179488) & 0x3) << 2))));
    *(float *)(((int)stk + 8)) = 276.0f;
    t8 = ((int (*)(int))(nlSprPut))(((int)stk + 0));
    nlObjPutSetFadeColor(0.699999988f, 0.699999988f, 0.699999988f);
    *(unsigned int *)(((int)stk + 0)) = 0x127;
    *(float *)(((int)stk + 4)) = 320.0f;
    *(float *)(((int)stk + 8)) = 190.0f;
    t10 = ((int (*)(int))(nlSprPut))(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = 0x146;
    *(float *)(((int)stk + 8)) = 320.0f;
    t11 = ((int (*)(int))(nlSprPut))(((int)stk + 0));
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 16)) = 1.0f;
    *(unsigned int *)(((int)stk + 0)) = 0x5D;
    *(float *)(((int)stk + 8)) = 250.0f;
    t13 = 0x0;
    for (;;) {
        u14 = 38.0f;
        u14 = u14 + 17.0f * (float)t13;
        *(float *)(((int)stk + 4)) = u14;
        t15 = ((int (*)(int))(nlSprPut))(((int)stk + 0));
        t13 = (t13 + 0x1);
        if ((int)t13 >= (int)0xA) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 0)) = 0x62;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 112.0f;
    *(float *)(((int)stk + 12)) = 3.0f;
    *(float *)(((int)stk + 16)) = 40.0f;
    *(float *)(((int)stk + 20)) = 30.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x705;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    return (((int (*)(int))(nlSprPut))(((int)stk + 0)));
}
