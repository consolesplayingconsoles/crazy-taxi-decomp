/* Straight-line functions with calls and guards (batch gen_atl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmStopDisplayFrameBuffer(void);
int nlSetBackColor(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nlChangeDisplayMode(int a4, int a5);

int nlChangeDisplayMode(int a4, int a5)
{
    int t6;
    int t19;
    int t24;
    int t25;
    int t30;
    int t28;

    *(unsigned int *)0xC2AED98 = 0x0;
    if (a4 == 0) {
        *(unsigned int *)0xC2AED98 = 0x1;
    }
    *(unsigned int *)0xC2AED9C = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        *(unsigned int *)0xC2AED9C = 0x1;
    }
    kmStopDisplayFrameBuffer();
    *(unsigned short *)0xC2B3194 = 0x0;
    *(unsigned short *)0xC2B3196 = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0xC2B3194 = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0xC2B3196 = 0x1;
    }
    t6 = *(int *)((((a5 & 0xF) << 2) + 0xC0D63D4));
    if ((*(int *)0xC2AED9C) == 1) {
        kmSetPALEXTCallback(0xC074310);
    }
    kmSetDisplayMode((*(int *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x4))), t6, (*(short *)0xC2B3194), (*(short *)0xC2B3196));
    *(unsigned short *)0xC2B3190 = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x8)));
    *(unsigned short *)0xC2B3192 = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0xA)));
    t19 = kmSetSystemConfiguration(0xC2AECD0);
    nlSetBackColor((*(int *)0xC14A654), (*(int *)0xC14A658), (*(int *)0xC14A65C));
    t24 = *(short *)0xC2B3192;
    t25 = *(short *)0xC2B3190;
    if (0x0 != 0) {
        t30 = (short)t24;
        if ((*(short *)0xC2B3196) == 1) {
            t28 = ((short)t24 + (short)t24);
            if ((int)((short)t24 + (short)t24) > (int)0x1E0) {
                t28 = 0x1E0;
            }
            t30 = t28;
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t25, (float)t30);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t25, (float)(short)t24);
    }
    return t19;
}
