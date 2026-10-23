/* Straight-line functions with calls and guards (batch gen_lc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetStat(int, int, int, int);
int gdc_LandmarkReq(int);
int nlSetCommonTextureOffset(int);
int texLoadIndexed(int, int);
int gdc_LandmarkLoadExec(int a4, int a5, int a6, int a7);

int gdc_LandmarkLoadExec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t15;
    int t9;

    t0 = *(int *)0xC26E178;
    if (t0 == 1) {
        t2 = ADXF_GetStat((*(int *)0xC26E174), a5, a6, a7);
        if (t2 == 3) {
            *(unsigned int *)0xC0EA3E4 = 0x0;
            ADXF_Close((*(int *)0xC26E174));
            *(unsigned int *)0xC1EE808 = (*(int *)0xC26E17C);
            *(unsigned int *)0xC26E178 = 0x0;
            nlSetCommonTextureOffset(0x0);
            return texLoadIndexed(0x7A, 0xCE98000);
        }
        t15 = t2;
        if (t2 == 4) {
            *(unsigned int *)0xC0EA3E4 = ((*(int *)0xC0EA3E4) + 0x1);
            t9 = gdc_LandmarkReq((*(int *)0xC26E17C));
            if ((int)(*(int *)0xC0EA3E4) > (int)0xA) {
                *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
            }
            t15 = t9;
        }
        return t15;
    }
    return t0;
}
