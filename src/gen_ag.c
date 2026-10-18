/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0789c0(int);
int FUN_0c081268(void);
int buAnalyzeBackupFileImage(int, int);
int buGetFileInfo(int, int, int);
int buGetFileSize(int, int);
int buGetLastError(int);
int buLoadFile(int, int, int, int);
int buStat(int);
int kmtex_GetTextureLevel(int, int);
int memmove(int, int, int);
int nlMultiMatrix(int, float);
int nlOuterProduct(int, int, int);
int nlUnitVector(int);

void LoadBackupData(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int stk[34];

    t0 = buGetFileSize(a4, 0xC09DB4C);
    if (t0 == 23) {
        t1 = buLoadFile(a4, 0xC09DB4C, 0xC28CAA0, t0);
        if (t1 == 0) {
            do {
                t2 = buStat(a4);
            } while (t2 == -1);
            t3 = buGetLastError(a4);
            if (t3 == 0) {
                t4 = buAnalyzeBackupFileImage((((int)stk + 4) + 0x14), 0xC28CAA0);
                if (t4 == 0) {
                    t5 = *(int *)(((int)stk + 112));
                    memmove(0xC28F8A0, t5, 0x25B0);
                    FUN_0c081268();
                    t8 = buGetFileInfo(a4, 0xC09DB4C, ((int)stk + 4));
                    if (t8 == 0) {
                        memmove(0xC28CA98, (((int)stk + 4) + 0xA), 0x8);
                    }
                }
            }
        }
    }
}

void FUN_0c077a00(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t6;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a6;
    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    *(float *)(((int)stk + 8)) = (u0 - u1);
    u2 = *(float *)((a4 + 0x4));
    u3 = *(float *)((a5 + 0x4));
    *(float *)(((int)stk + 12)) = (u2 - u3);
    u4 = *(float *)((a4 + 0x8));
    u5 = *(float *)((a5 + 0x8));
    *(float *)(((int)stk + 16)) = (u4 - u5);
    t6 = *(int *)(((int)stk + 4));
    nlOuterProduct(t6, (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x1C));
    nlOuterProduct((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x1C));
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    u12 = *(float *)(((int)stk + 32));
    *(float *)(((int)stk + 44)) = u12;
    u13 = *(float *)(((int)stk + 36));
    *(float *)(((int)stk + 60)) = u13;
    u14 = *(float *)(((int)stk + 40));
    *(float *)(((int)stk + 76)) = u14;
    *(float *)(((int)stk + 92)) = 0.0f;
    u15 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 48)) = u15;
    u16 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 64)) = u16;
    u17 = *(float *)(((int)stk + 28));
    *(float *)(((int)stk + 80)) = u17;
    *(float *)(((int)stk + 96)) = 0.0f;
    u18 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 52)) = u18;
    u19 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 68)) = u19;
    u20 = *(float *)(((int)stk + 16));
    *(float *)(((int)stk + 84)) = u20;
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 104)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0x28), 0.0f);
    FUN_0c0789c0(a4);
}

void FUN_0c15c8dc(int a4)
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
    int t16;
    int t17;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x10));
    t2 = kmtex_GetTextureLevel(t0, t1);
    t3 = *(int *)((a4 + 0x18));
    if ((t3 & 0x1) != 0) {
        t4 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1)) {
            t4 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        }
        if ((unsigned int)t4 > (unsigned int)0x1) {
            t5 = t4;
            t6 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
            t7 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t8 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            do {
                t9 = (t7 * t8);
                t7 = ((unsigned int)t7 >> 1);
                t8 = ((unsigned int)t8 >> 1);
                t5 = ((unsigned int)t5 >> 1);
                t6 = (t6 + t9);
            } while ((unsigned int)t5 > (unsigned int)0x1);
        }
        
        t16 = *(int *)(((t2 << 2) + 0xC175DE0));
    } else {
        t17 = *(int *)(((t2 << 2) + 0xC175DC4));
    }
}
