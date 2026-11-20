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
