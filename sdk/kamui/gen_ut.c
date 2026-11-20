/* Straight-line functions with calls and guards (batch gen_ut): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiProcessVertex_05(int a4);

int kmiProcessVertex_05(int a4)
{
    int t3;
    int t4;
    int t5;
    int t12;
    int t16;
    int t17;
    int t22;
    int t27;
    int t34;
    int t38;
    int t39;
    int t44;
    int t49;
    int t56;
    int t60;
    int t61;
    int t66;
    int t72;
    int stk[13];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1008 = (*(int *)((a4 + 0x0)));
    R1012 = (*(int *)((a4 + 0x4)));
    R1016 = (*(int *)((a4 + 0x8)));
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    *(unsigned int *)0xC2EA730 = (*(int *)(((R1008) + 0x4)));
    *(unsigned int *)0xC2EA734 = (*(int *)(((R1008) + 0x8)));
    *(unsigned int *)0xC2EA738 = (*(int *)(((R1008) + 0xC)));
    t12 = R1008;
    R1004 = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((R1004) + 0x10))), (*(int *)((t12 + 0x14))));
    t17 = R1008;
    *(unsigned int *)(((t16 << 2) + 0xC2EA724)) = ((((((int)((*(float *)(((0x20 + t17) + 0x0))) * 255.0f) << 16) << 8) | ((int)((*(float *)(((0x24 + t17) + 0x0))) * 255.0f) << 16)) | ((int)((*(float *)(((0x28 + t17) + 0x0))) * 255.0f) << 8)) | (int)((*(float *)(((0x2C + t17) + 0x0))) * 255.0f));
    t22 = R1008;
    t27 = kmiBGPlanePutWord(t3, (t16 + 0x1), ((((((int)((*(float *)((t22 + 0x30))) * 255.0f) << 16) << 8) | ((int)((*(float *)((t22 + 0x34))) * 255.0f) << 16)) | ((int)((*(float *)((t22 + 0x38))) * 255.0f) << 8)) | (int)((*(float *)((t22 + 0x3C))) * 255.0f)));
    *(unsigned int *)(((t27 << 2) + 0xC2EA724)) = (*(int *)(((R1012) + 0x4)));
    *(unsigned int *)((((t27 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1012) + 0x8)));
    *(unsigned int *)(((((t27 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1012) + 0xC)));
    t34 = R1012;
    R1004 = t34;
    t38 = kmiBGPlanePutColor2(t3, (((t27 + 0x1) + 0x1) + 0x1), (*(int *)(((R1004) + 0x10))), (*(int *)((t34 + 0x14))));
    t39 = R1012;
    *(unsigned int *)(((t38 << 2) + 0xC2EA724)) = ((((((int)((*(float *)(((0x20 + t39) + 0x0))) * 255.0f) << 16) << 8) | ((int)((*(float *)(((0x24 + t39) + 0x0))) * 255.0f) << 16)) | ((int)((*(float *)(((0x28 + t39) + 0x0))) * 255.0f) << 8)) | (int)((*(float *)(((0x2C + t39) + 0x0))) * 255.0f));
    t44 = R1012;
    t49 = kmiBGPlanePutWord(t3, (t38 + 0x1), ((((((int)((*(float *)((t44 + 0x30))) * 255.0f) << 16) << 8) | ((int)((*(float *)((t44 + 0x34))) * 255.0f) << 16)) | ((int)((*(float *)((t44 + 0x38))) * 255.0f) << 8)) | (int)((*(float *)((t44 + 0x3C))) * 255.0f)));
    *(unsigned int *)(((t49 << 2) + 0xC2EA724)) = (*(int *)(((R1016) + 0x4)));
    *(unsigned int *)((((t49 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1016) + 0x8)));
    *(unsigned int *)(((((t49 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1016) + 0xC)));
    t56 = R1016;
    R1004 = t56;
    t60 = kmiBGPlanePutColor2(t3, (((t49 + 0x1) + 0x1) + 0x1), (*(int *)(((R1004) + 0x10))), (*(int *)((t56 + 0x14))));
    t61 = R1016;
    *(unsigned int *)(((t60 << 2) + 0xC2EA724)) = ((((((int)((*(float *)(((0x20 + t61) + 0x0))) * 255.0f) << 16) << 8) | ((int)((*(float *)(((0x24 + t61) + 0x0))) * 255.0f) << 16)) | ((int)((*(float *)(((0x28 + t61) + 0x0))) * 255.0f) << 8)) | (int)((*(float *)(((0x2C + t61) + 0x0))) * 255.0f));
    t66 = R1016;
    *(unsigned int *)0xC2EA81C = ((kmiBGPlanePutWord(t3, (t60 + 0x1), ((((((int)((*(float *)((t66 + 0x30))) * 255.0f) << 16) << 8) | ((int)((*(float *)((t66 + 0x34))) * 255.0f) << 16)) | ((int)((*(float *)((t66 + 0x38))) * 255.0f) << 8)) | (int)((*(float *)((t66 + 0x3C))) * 255.0f)))) << 2);
    t72 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t72, 0x0, 0x0);
    *(unsigned int *)0xC2EA830 = (*(int *)(((R1008) + 0xC)));
    return 0x0;
}
