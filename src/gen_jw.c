/* Straight-line functions with calls and guards (batch gen_jw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void kmiWriteFBRegister(int a4, int a5, int a6, int a7, int a8);

void kmiWriteFBRegister(int a4, int a5, int a6, int a7, int a8)
{
    int t9;
    int t10;
    int t11;
    int stk[40];

    { int *ap = &a8; int k; for (k = 0; k < 29; k++) stk[3 + k] = ap[k]; }
    *(unsigned int *)0xC2EA934 = (((*(int *)(((((int)stk + 4) + 0x8) + 0x58))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x54))) & 0x7FF) << 16));
    *(unsigned int *)0xC2EA938 = (((*(int *)(((((int)stk + 4) + 0x8) + 0x60))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x5C))) & 0x7FF) << 16));
    *(unsigned int *)0xC2EA93C = ((((*(int *)(((((int)stk + 4) + 0x8) + 0x48))) & 0xF) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x4C))) & 0x1F) << 2) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x50))) & 0xF) << 8) << 1));
    *(unsigned int *)0xC2EA6C0 = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    *(unsigned int *)0xC2EA6C4 = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t9 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)(*(int *)0xC2EA6D4) > 0) {
        *(unsigned int *)0xC2EA940 = (((t10 & 0x3FF) | ((((t11 - (*(int *)0xC2EA6D4)) & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    } else {
        *(unsigned int *)0xC2EA940 = (((t10 & 0x3FF) | (((t11 & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    }
    *(unsigned int *)0xC2EA97C = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    *(unsigned int *)0xC2EA980 = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    *(unsigned int *)0xC2EA944 = ((*(int *)(((((int)stk + 4) + 0x8) + 0x44))) & 0x1FF);
    *(unsigned int *)0xC2EA94C = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    *(unsigned int *)0xC2EA948 = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & (*(int *)(((((int)stk + 4) + 0x8) + 0x40)))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & (*(int *)(((((int)stk + 4) + 0x8) + 0x68)))) << 16)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x64))) & 0x1) << 22)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x6C))) & 0x1) << 23));
}
