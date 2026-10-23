/* Straight-line functions with calls and guards (batch gen_afp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int LightEffect(int, float);
int ResetSpark(void);
int execMiniLight(void);

int execMiniLight(void)
{
    int t0;
    float u1;
    int t4;
    int t2;
    int t6;
    int t12;
    int t9;

    t0 = *(int *)0xC1EE214;
    u1 = *(float *)0xC179844;
    if (t0 != 1) {
        t4 = 0x0;
        if ((t0 == 5) || ((t0 == 6) || ((t0 == 7) || ((t0 == 11) || (t0 == 17))))) {
            t2 = 0x0;
            if (0.0f > u1) {
                t2 = 0x1;
            }
            t4 = t2;
        }
        t9 = t4;
    } else {
        t6 = 0x1;
        if (!(-9.79999924f > u1)) {
            t6 = 0x0;
        }
        t9 = t6;
    }
    t12 = LightEffect(t9, u1);
    if (t9 != 0) {
        return ResetSpark();
    }
    return t12;
}
