/* Straight-line functions with calls and guards (batch gen_ub): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetStat(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int nlSetCommonTextureOffset(int);
int texLoadIndexed(int, int);
int gdc_FileLoadInitAll(int a4);

int gdc_FileLoadInitAll(int a4)
{
    int t0;
    int t5;
    int t13;

    *(unsigned int *)0xC0EA3E4 = 0x0;
    if (a4 == 0) {
        t0 = 0x0;
        for (;;) {
            if ((ADXF_LoadPartition(0x3, 0xC08D444, 0xC26E10C, 0x29)) == 0) {
                break;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0xA) {
                *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
            }
        }
    } else {
        t5 = 0x0;
        for (;;) {
            if ((ADXF_LoadPartition(0x3, 0xC08D450, 0xC26E10C, 0x29)) == 0) {
                break;
            }
            t5 = (t5 + 0x1);
            if ((int)t5 > (int)0xA) {
                *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
            }
        }
    }
    for (;;) {
        t13 = ADXF_OpenAfs(0x3, 0x0);
        *(unsigned int *)0xC26E174 = t13;
        if (t13 != 0) {
            break;
        }
    }
    ADXF_ReadNw32(t13, 0x10, 0xCE98000);
    for (;;) {
        if ((ADXF_GetStat((*(int *)0xC26E174))) == 3) {
            break;
        }
    }
    ADXF_Close((*(int *)0xC26E174));
    nlSetCommonTextureOffset(0x0);
    texLoadIndexed(0x7A, 0xCE98000);
    *(unsigned int *)0xC1EE808 = 0x0;
    *(unsigned int *)0xC26E17C = 0x0;
    *(unsigned int *)0xC26E178 = 0x0;
    return 0xC26E17C;
}
