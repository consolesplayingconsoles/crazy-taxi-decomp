/* Straight-line functions with calls and guards (batch gen_anx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int MakeKyakuTakeArea(int, int, int, float);
int nd_StartWait_InitSprite(void);
int nd_StartWait_SetFog(void);
int nd_StartWait_SetLight(void);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlRand(void);
int nlUnitMatrix(void);
int Init_nd_StartWait(void);

int Init_nd_StartWait(void)
{
    int t5;
    int stk[7];

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    nlMatrixMode(0x1);
    *(unsigned int *)0xC2A7208 = 0x0;
    *(unsigned int *)0xC2A72B8 = 0x0;
    t5 = (int)((int)(nlRand()) % (int)0x100);
    *(unsigned int *)0xC12FFCC = t5;
    if (t5 == 88) {
        *(unsigned int *)0xC2A72BC = 0x1E;
    } else {
        *(unsigned int *)0xC2A72BC = 0x0;
    }
    *(unsigned short *)0xC2A72C0 = 0x3C00;
    *(float *)0xC2A72C4 = 35.0f;
    *(float *)0xC2A72C8 = 0.699999988f;
    *(float *)0xC2A72CC = -140.0f;
    *(float *)0xC2A72D0 = 0.0f;
    *(float *)0xC2A72D4 = -160.0f;
    *(unsigned int *)0xC2A72D8 = ((int)((int)(nlRand()) % (int)0x4));
    *(unsigned short *)0xC2A7304 = 0xEB00;
    *(unsigned short *)0xC2A7306 = 0xF200;
    *(float *)0xC2A7300 = 1.19999993f;
    *(unsigned int *)0xC2A7310 = 0x8;
    nd_StartWait_SetLight();
    *(float *)0xC12FFC8 = 0.0f;
    nd_StartWait_SetFog();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A72E0) = *(struct mv3 *)(0xC0CF5B4); }
    *(unsigned short *)0xC2A72EC = 0xF800;
    *(unsigned short *)0xC2A72EE = 0x0;
    *(unsigned short *)0xC2A72F0 = 0x0;
    *(unsigned int *)0xC2A72DC = 0x0;
    nd_StartWait_InitSprite();
    *(unsigned int *)0xC2A720C = 0x0;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    return (MakeKyakuTakeArea(0xC2A7210, ((int)stk + 4), 0x0, 50.0f));
}
