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


