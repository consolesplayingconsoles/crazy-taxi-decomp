/* Straight-line functions with calls and guards (batch gen_api): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiProcessVertex_14(int a4);

int kmiProcessVertex_14(int a4)
{
    int t3;
    int t4;
    int t5;
    int t14;
    float u16;
    float u17;
    float u19;
    int t20;
    int t29;
    float u31;
    float u33;
    int t34;
    int t43;
    float u45;
    float u47;
    int t49;
    int stk[12];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    *(unsigned int *)0xC2EA730 = (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x4)));
    *(unsigned int *)0xC2EA734 = (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x8)));
    *(unsigned int *)0xC2EA738 = (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x10))));
    u16 = *(float *)(((0x18 + (*(int *)((((int)stk + 4) + 0x0)))) + 0x0));
    u17 = *(float *)0xC155394;
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u16 * u17) << 16) << 8) | ((int)(u16 * u17) << 16)) | ((int)(u16 * u17) << 8)) | (int)(u16 * u17));
    u19 = *(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x1C));
    t20 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u19 * u17) << 16) << 8) | ((int)(u19 * u17) << 16)) | ((int)(u19 * u17) << 8)) | (int)(u19 * u17)));
    *(unsigned int *)(((t20 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t20 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t20 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) + 0xC)));
    t29 = kmiBGPlanePutColor(t3, (((t20 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) + 0x10))));
    u31 = *(float *)(((0x18 + (*(int *)(((((int)stk + 4) + 0x4) + 0x0)))) + 0x0));
    *(unsigned int *)(((t29 << 2) + 0xC2EA724)) = ((((((int)(u31 * u17) << 16) << 8) | ((int)(u31 * u17) << 16)) | ((int)(u31 * u17) << 8)) | (int)(u31 * u17));
    u33 = *(float *)(((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) + 0x1C));
    t34 = kmiBGPlanePutWord(t3, (t29 + 0x1), ((((((int)(u33 * u17) << 16) << 8) | ((int)(u33 * u17) << 16)) | ((int)(u33 * u17) << 8)) | (int)(u33 * u17)));
    *(unsigned int *)(((t34 << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t34 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t34 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) + 0xC)));
    t43 = kmiBGPlanePutColor(t3, (((t34 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) + 0x10))));
    u45 = *(float *)(((0x18 + (*(int *)(((((int)stk + 4) + 0x8) + 0x0)))) + 0x0));
    *(unsigned int *)(((t43 << 2) + 0xC2EA724)) = ((((((int)(u45 * u17) << 16) << 8) | ((int)(u45 * u17) << 16)) | ((int)(u45 * u17) << 8)) | (int)(u45 * u17));
    u47 = *(float *)(((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) + 0x1C));
    *(unsigned int *)0xC2EA81C = ((kmiBGPlanePutWord(t3, (t43 + 0x1), ((((((int)(u47 * u17) << 16) << 8) | ((int)(u47 * u17) << 16)) | ((int)(u47 * u17) << 8)) | (int)(u47 * u17)))) << 2);
    t49 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t49, 0x0, 0x0);
    *(unsigned int *)0xC2EA830 = (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0xC)));
    return 0x0;
}
