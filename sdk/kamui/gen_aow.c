/* Straight-line functions with calls and guards (batch gen_aow): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiProcessVertex_06(int a4);
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int kmiProcessVertex_06(int a4)
{
    int t3;
    int t4;
    int t5;
    int t14;
    int t15;
    int t20;
    int t25;
    int t34;
    int t35;
    int t40;
    int t45;
    int t54;
    int t55;
    int t60;
    int t66;
    int stk[12];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = (*(int *)((a4 + 0x0)));
    R1008 = (*(int *)((a4 + 0x4)));
    R1012 = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    (((struct oC_uint *)0xC2EA724)->v) = (*(int *)(((R1004) + 0x4)));
    (((struct o10_uint *)0xC2EA724)->v) = (*(int *)(((R1004) + 0x8)));
    (((struct o14_uint *)0xC2EA724)->v) = (*(int *)(((R1004) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((R1004) + 0x10))));
    t15 = R1004;
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)((*(float *)(((0x20 + t15) + 0x0))) * 255.0f) << 16) << 8) | ((int)((*(float *)(((0x24 + t15) + 0x0))) * 255.0f) << 16)) | ((int)((*(float *)(((0x28 + t15) + 0x0))) * 255.0f) << 8)) | (int)((*(float *)(((0x2C + t15) + 0x0))) * 255.0f));
    t20 = R1004;
    t25 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)((*(float *)((t20 + 0x30))) * 255.0f) << 16) << 8) | ((int)((*(float *)((t20 + 0x34))) * 255.0f) << 16)) | ((int)((*(float *)((t20 + 0x38))) * 255.0f) << 8)) | (int)((*(float *)((t20 + 0x3C))) * 255.0f)));
    *(unsigned int *)(((t25 << 2) + 0xC2EA724)) = (*(int *)(((R1008) + 0x4)));
    *(unsigned int *)((((t25 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1008) + 0x8)));
    *(unsigned int *)(((((t25 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1008) + 0xC)));
    t34 = kmiBGPlanePutColor(t3, (((t25 + 0x1) + 0x1) + 0x1), (*(int *)(((R1004) + 0x10))));
    t35 = R1008;
    *(unsigned int *)(((t34 << 2) + 0xC2EA724)) = ((((((int)((*(float *)(((0x20 + t35) + 0x0))) * 255.0f) << 16) << 8) | ((int)((*(float *)(((0x24 + t35) + 0x0))) * 255.0f) << 16)) | ((int)((*(float *)(((0x28 + t35) + 0x0))) * 255.0f) << 8)) | (int)((*(float *)(((0x2C + t35) + 0x0))) * 255.0f));
    t40 = R1008;
    t45 = kmiBGPlanePutWord(t3, (t34 + 0x1), ((((((int)((*(float *)((t40 + 0x30))) * 255.0f) << 16) << 8) | ((int)((*(float *)((t40 + 0x34))) * 255.0f) << 16)) | ((int)((*(float *)((t40 + 0x38))) * 255.0f) << 8)) | (int)((*(float *)((t40 + 0x3C))) * 255.0f)));
    *(unsigned int *)(((t45 << 2) + 0xC2EA724)) = (*(int *)(((R1012) + 0x4)));
    *(unsigned int *)((((t45 + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1012) + 0x8)));
    *(unsigned int *)(((((t45 + 0x1) + 0x1) << 2) + 0xC2EA724)) = (*(int *)(((R1012) + 0xC)));
    t54 = kmiBGPlanePutColor(t3, (((t45 + 0x1) + 0x1) + 0x1), (*(int *)(((R1004) + 0x10))));
    t55 = R1012;
    *(unsigned int *)(((t54 << 2) + 0xC2EA724)) = ((((((int)((*(float *)(((0x20 + t55) + 0x0))) * 255.0f) << 16) << 8) | ((int)((*(float *)(((0x24 + t55) + 0x0))) * 255.0f) << 16)) | ((int)((*(float *)(((0x28 + t55) + 0x0))) * 255.0f) << 8)) | (int)((*(float *)(((0x2C + t55) + 0x0))) * 255.0f));
    t60 = R1012;
    (((struct o0_uint *)0xC2EA81C)->v) = ((kmiBGPlanePutWord(t3, (t54 + 0x1), ((((((int)((*(float *)((t60 + 0x30))) * 255.0f) << 16) << 8) | ((int)((*(float *)((t60 + 0x34))) * 255.0f) << 16)) | ((int)((*(float *)((t60 + 0x38))) * 255.0f) << 8)) | (int)((*(float *)((t60 + 0x3C))) * 255.0f)))) << 2);
    t66 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t66, 0x0, 0x0);
    (((struct o14_uint *)0xC2EA81C)->v) = (*(int *)(((R1004) + 0xC)));
    return 0x0;
}
