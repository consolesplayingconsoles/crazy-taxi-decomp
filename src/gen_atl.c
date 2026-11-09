/* Straight-line functions with calls and guards (batch gen_atl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmStopDisplayFrameBuffer(void);
int nlSetBackColor(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nlChangeDisplayMode(int a4, int a5);
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };


int nlChangeDisplayMode(int a4, int a5)
{
    int t6;
    int t19;
    int t24;
    int t25;
    int t30;

    (((struct o0_uint *)0xC2AED98)->v) = 0x0;
    if (a4 == 0) {
        (((struct o0_uint *)0xC2AED98)->v) = 0x1;
    }
    (((struct o4_uint *)0xC2AED98)->v) = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        (((struct o4_uint *)0xC2AED98)->v) = 0x1;
    }
    kmStopDisplayFrameBuffer();
    (((struct o4_ushort *)0xC2B3190)->v) = 0x0;
    (((struct o6_ushort *)0xC2B3190)->v) = 0x0;
    if ((0x80 & a5) != 0) {
        (((struct o4_ushort *)0xC2B3190)->v) = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        (((struct o6_ushort *)0xC2B3190)->v) = 0x1;
    }
    t6 = *(int *)((((a5 & 0xF) << 2) + 0xC0D63D4));
    if (((((struct o4_int *)0xC2AED98)->v)) == 1) {
        kmSetPALEXTCallback(0xC074310);
    }
    kmSetDisplayMode((*(int *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x4))), t6, ((((struct o4_short *)0xC2B3190)->v)), ((((struct o6_short *)0xC2B3190)->v)));
    (((struct o0_ushort *)0xC2B3190)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x8)));
    (((struct o2_ushort *)0xC2B3190)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0xA)));
    t19 = kmSetSystemConfiguration(0xC2AECD0);
    nlSetBackColor(((((struct o0_int *)0xC14A654)->v)), ((((struct o4_int *)0xC14A654)->v)), ((((struct o8_int *)0xC14A654)->v)));
    t24 = (((struct o2_short *)0xC2B3190)->v);
    t25 = (((struct o0_short *)0xC2B3190)->v);
    if (0x0 != 0) {
        t30 = (short)t24;
        if (((((struct o6_short *)0xC2B3190)->v)) == 1) {
            t30 = ((short)t24 + (short)t24);
            if ((int)((short)t24 + (short)t24) > (int)0x1E0) {
                t30 = 0x1E0;
            }
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t25, (float)t30);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t25, (float)(short)t24);
    }
    return t19;
}
