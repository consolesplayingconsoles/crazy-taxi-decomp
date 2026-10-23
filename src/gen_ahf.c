/* Straight-line functions with calls and guards (batch gen_ahf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int gdc_FileLoad(int a4, int a5, int a6);

int gdc_FileLoad(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t10;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t0 < (int)0xA) {
            for (;;) {
                t2 = ADXF_Open(a5, 0x0);
                t1 = (t1 + 0x1);
                if ((int)t1 <= (int)0x78) {
                    if (t2 != 0) {
                        break;
                    }
                    continue;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 < (int)0xA) continue;
                *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
                return 0x0;
            }
            t6 = ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1);
            if (a6 == 0) {
                t6 = (ADXF_GetFsizeSct(t2));
            }
            ADXF_ReadNw32(t2, t6, a4);
            for (;;) {
                t10 = ADXF_GetStat(t2);
                if (t10 == 4) {
                    break;
                }
                if (t10 == 3) {
                    ADXF_Close(t2);
                    return t6;
                }
            }
            ADXF_Close(t2);
            t0 = (t0 + 0x1);
            continue;
        }
        *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
        return 0x0;
    }
}
