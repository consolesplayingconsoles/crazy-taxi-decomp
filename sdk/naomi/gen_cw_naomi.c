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


int nlObjPut_vtxcolbridge(void)
{
    int t0;
    int stk[5] = {0};

    t0 = *(int *)0xC14A970;
    if (t0 != 0) {
        return ((int (*)(void))(t0))();
    }
    return ((int (*)(void))(0xC0868DA))();
}


