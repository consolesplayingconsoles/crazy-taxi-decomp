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


int bootSerialGetByte(void)
{
    int t0;
    int t1;
    int t2;

    for (;;) {
        t0 = ((int (*)(void))(0xC011AEA))();
        if (t0 != 0) {
            break;
        }
    }
    t1 = *(short *)0xFFE80010;
    t2 = *(signed char *)0xFFE80014;
    *(unsigned short *)0xFFE80010 = (t1 & 0xFFFD);
    return t2;
}


int bootTimerTick(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;
    int t13;

    t0 = (((struct o10_int *)0xAC00F710)->v);
    (((struct o10_uint *)0xAC00F710)->v) = (t0 + 0x1);
    if ((t0 & 0xFFF) == 0) {
        t1 = (((struct o14_int *)0xAC00F710)->v);
        if (t1 == 0) {
            t2 = *(signed char *)0xAC00F710;
            (((struct o0_uchar *)0xAC00F710)->v) = (t2 << 1);
        } else {
            t3 = *(signed char *)0xAC00F710;
            (((struct o0_uchar *)0xAC00F710)->v) = ((unsigned int)(unsigned char)t3 >> 1);
        }
        t6 = *(signed char *)0xAC00F710;
        if (t6 == 0) {
            t7 = (((struct o14_int *)0xAC00F710)->v);
            t8 = 0x80;
            if (t7 != 0) {
                t8 = 0x1;
            }
            (((struct o0_uchar *)0xAC00F710)->v) = t8;
            t9 = (((struct o14_int *)0xAC00F710)->v);
            (((struct o14_uint *)0xAC00F710)->v) = (~t9);
        }
        t13 = *(signed char *)0xAC00F710;
        return ((int (*)(int))(0xC010A26))((unsigned char)t13);
    }
    return 0;
}

