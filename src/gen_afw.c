/* Straight-line functions with calls and guards (batch gen_afw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_DontPass(int a4);

int Chat_DontPass(int a4)
{
    int t0;
    int t7;
    int t10;
    int t12;
    int t15;
    int t17;
    int t18;
    int t19;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 2) == 0) {
        Voice_ShutUp(0x3);
        if ((unsigned int)((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7)) < (unsigned int)0x2) {
            t7 = 0xF;
            if (((*(signed char *)((a4 + 0x14A))) & 16) != 0) {
                t7 = 0xFFFFFFF1;
            }
            t10 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
            t17 = ((signed char)((((t10 << 1) << 1) + (t10 << 1)) << 2) + 0xC0D4460);
            t18 = 0x64;
            t19 = t7;
        } else {
            t12 = 0xF;
            if (((*(signed char *)((a4 + 0x14A))) & 16) != 0) {
                t12 = 0xFFFFFFF1;
            }
            t15 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
            t17 = ((signed char)((((t15 << 1) << 1) + (t15 << 1)) << 2) + 0xC0D4460);
            t18 = 0x50;
            t19 = t12;
        }
        return Voice_Request(t17, 0x3, t18, t19);
    }
    return t0;
}

