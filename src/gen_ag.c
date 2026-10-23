/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlTranslateNV(int);
int _quick_mvn(void);
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


void nlLookAtUp(int a4, int a5, int a6)
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
    nlTranslateNV(a4);
}

int kmtex_TextureSize_smallVQ(int *a4)
{
    unsigned int w;
    unsigned int h;
    unsigned int x;
    unsigned int y;
    unsigned int m;
    int level;
    int sum;

    w = a4[3];
    h = a4[4];
    level = kmtex_GetTextureLevel(w, h);
    x = w >> 1;
    y = h >> 1;
    sum = x * y;
    if (a4[6] & 1) {
        x >>= 1;
        y >>= 1;
        m = (x >= y) ? y : x;
        while (m > 1) {
            sum += x * y;
            x >>= 1;
            y >>= 1;
            m >>= 1;
        }
        if (x == y) {
            sum += 2;
        } else {
            sum += x * y;
        }
        sum += 10 + *(int *)(0xC175DE0 + (level << 2));
    } else {
        sum += *(int *)(0xC175DC4 + (level << 2));
    }
    return sum;
}
