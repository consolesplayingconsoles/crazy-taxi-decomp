/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetStat(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int nlSetCommonTextureOffset(int);
int texLoadIndexed(int);
int gdc_FileLoadInitAll(int a4);
void nlSetPaletteMap(int a4, int a5);
void fmMngMcpy4(int a4, int a5, int a6);
int fmMngNum2Bit(int a4, int a5, int a6);


void nlSetPaletteMap(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = ((int)a4 >> 4);
    t1 = ((int)0x1 << (int)(a4 & 0xF));
    t2 = ((int)(a5 + 0xF) >> 4);
    t3 = ((((int)a4 >> 4) << 1) + 0xC2AECC8);
    for (;;) {
        t4 = ((int)t2 > 0);
        t2 = (t2 - 1);
        if (!t4) break;
        t5 = *(short *)((t3 + 0x0));
        t0 = t5;
        t0 = (t0 | t1);
        t1 = (t1 + t1);
        *(unsigned short *)((t3 + 0x0)) = t0;
        if ((int)t1 >= (int)0x10000) {
            t1 = 0x1;
            t3 = (t3 + 0x2);
        }
    }
}

void fmMngMcpy4(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = a6;
    if ((int)a6 < 0) {
        t0 = (a6 + 0x3);
    }
    t1 = a4;
    t2 = a5;
    t3 = ((t0 >> 1) >> 1);
    for (;;) {
        t4 = ((int)t3 > 0);
        t3 = (t3 - 1);
        if (!t4) break;
        t5 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = t5;
        t2 = (t2 + 0x4);
    }
}

int fmMngNum2Bit(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = (((a6 << 2) << 2) << 2);
    t1 = a4;
    t2 = a5;
    t3 = a6;
    while ((int)t0 > 0) {
        if ((int)t1 >= (int)0x8) {
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x1);
            t1 = (t1 - 8);
        } else {
            if ((int)t1 > 0) {
                t4 = 0x8;
                do {
                    t3 = (t3 << 1);
                    if ((int)t1 > 0) {
                        t1 = (t1 - 1);
                    } else {
                        t3 = (t3 | 0x1);
                    }
                    t4 = (t4 - 0x1);
                } while (t4 != 0);
                *(unsigned char *)((t2 + 0x0)) = t3;
            } else {
                *(unsigned char *)((t2 + 0x0)) = 0xFFFFFFFF;
            }
            t2 = (t2 + 0x1);
        }
        t0 = (t0 - 1);
    }
    return 0x0;
}

