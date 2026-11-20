/* Straight-line functions with calls and guards (batch gen_ark): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
int kmiWriteFBRegister(Stk29 s);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int kmiWriteFBRegister(Stk29 s)
{
    int t9;
    int t10;
    int t11;
    int stk[40];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    stk[7] = s.w[4];
    stk[8] = s.w[5];
    stk[9] = s.w[6];
    stk[10] = s.w[7];
    stk[11] = s.w[8];
    stk[12] = s.w[9];
    stk[13] = s.w[10];
    stk[14] = s.w[11];
    stk[15] = s.w[12];
    stk[16] = s.w[13];
    stk[17] = s.w[14];
    stk[18] = s.w[15];
    stk[19] = s.w[16];
    stk[20] = s.w[17];
    stk[21] = s.w[18];
    stk[22] = s.w[19];
    stk[23] = s.w[20];
    stk[24] = s.w[21];
    stk[25] = s.w[22];
    stk[26] = s.w[23];
    stk[27] = s.w[24];
    stk[28] = s.w[25];
    stk[29] = s.w[26];
    stk[30] = s.w[27];
    stk[31] = s.w[28];
    (((struct o0_uint *)0xC2EA934)->v) = ((((((struct o58_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o54_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o4_uint *)0xC2EA934)->v) = ((((((struct o60_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o5C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o8_uint *)0xC2EA934)->v) = (((((((struct o48_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) | (((((((struct o4C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1F) << 2) << 2)) | (((((((struct o50_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) << 8) << 1));
    (((struct o0_uint *)0xC2EA6C0)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    (((struct o4_uint *)0xC2EA6C0)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t9 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)((((struct o14_int *)0xC2EA6C0)->v)) > 0) {
        (((struct oC_uint *)0xC2EA934)->v) = (((t10 & 0x3FF) | ((((t11 - ((((struct o14_int *)0xC2EA6C0)->v))) & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    } else {
        (((struct oC_uint *)0xC2EA934)->v) = (((t10 & 0x3FF) | (((t11 & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    }
    (((struct o0_uint *)0xC2EA97C)->v) = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    (((struct o4_uint *)0xC2EA97C)->v) = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    (((struct o10_uint *)0xC2EA934)->v) = (((((struct o44_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1FF);
    (((struct o18_uint *)0xC2EA934)->v) = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    (((struct o14_uint *)0xC2EA934)->v) = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & ((((struct o40_int *)((((int)stk + 4) + 0x8)))->v))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & ((((struct o68_int *)((((int)stk + 4) + 0x8)))->v))) << 16)) | ((((((struct o64_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 22)) | ((((((struct o6C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 23));
    return 0x6C;
}
