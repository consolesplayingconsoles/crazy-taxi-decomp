/* Straight-line functions with calls and guards (batch gen_cw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPut_vtxcolbridge(void);
int bootSerialGetByte(void);
int Put_TotalDrum(void);
int bootTimerTick(void);
int _setsbit(int a4, int a5, int a6);
struct o0_uchar { unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };


int _setsbit(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t17;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;

    t0 = (int)((int)a6 / (int)0x8);
    t1 = (int)((int)a6 % (int)0x8);
    t2 = *(signed char *)(((t0 + a4) + 0x0));
    t17 = (-t1);
    if (((unsigned char)t2 & (unsigned char)((int)0x80 << (int)(-t1))) == 0) {
        t3 = 0x0;
        t4 = ((int)0x80 << (int)(-t1));
        for (;;) {
            if ((unsigned char)t4 == 0) {
                break;
            }
            t3 = (t3 | t4);
            t4 = (unsigned char)t4;
            t4 = ((unsigned int)t4 >> 1);
        }
        t6 = *(signed char *)(((t0 + a4) + 0x0));
        if (((unsigned char)t6 & (unsigned char)t3) != 0) {
            t7 = *(signed char *)(((t0 + a4) + 0x0));
            *(unsigned char *)(((t0 + a4) + 0x0)) = (t7 | ((int)0x80 << (int)(-t1)));
        } else {
            t8 = (t0 + a4);
            for (;;) {
                t8 = (t8 + 0x1);
                if ((unsigned int)t8 >= (unsigned int)(a4 + a5)) {
                    return (unsigned char)t3;
                }
                t9 = *(signed char *)((t8 + 0x0));
                if (t9 != 0) {
                    break;
                }
            }
            t10 = *(signed char *)(((t0 + a4) + 0x0));
            *(unsigned char *)(((t0 + a4) + 0x0)) = (t10 | ((int)0x80 << (int)(-t1)));
        }
        t17 = (unsigned char)t3;
    }
    return t17;
}
