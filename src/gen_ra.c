/* Straight-line functions with calls and guards (batch gen_ra): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsInit(int, int, int, int);
int fsInit(void);

int fsInit(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x8;
    for (;;) {
        t1 = gdFsInit(0xC, 0xC26A0E0, 0x46, 0xC26B5A8);
        if (t1 != -23) {
            if (t1 != -33) {
                if (t1 != 0) {
                    t0 = (t0 - 1);
                    if ((int)t0 <= 0) {
                        break;
                    }
                    continue;
                }
                break;
            }
            return 0x0;
        }
        return 0x0;
    }
    t2 = 0x1;
    if (t0 == 0) {
        t2 = 0x0;
    }
    return t2;
}
