/* Straight-line functions with calls and guards (batch gen_tq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvInterpolateBuffer(int, int, float, float, float, float, float);
int Drv_ExecBlend(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecBlend(float f4, float f5, float f6, float f7, float f8)
{
    float u0;
    int t1;
    int t10;

    u0 = *(float *)0xC2AD0F8;
    if (u0 == 0.0f) {
        t1 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t1 & 0x7F);
        return (t1 & 0x7F);
    }
    FcvInterpolateBuffer(0xC2AD028, 0xC2AD104, ((*(float *)0xC2AD0F4) / u0), f5, f6, f7, f8);
    *(float *)0xC2AD0F4 = ((*(float *)0xC2AD0F4) + 1.0f);
    t10 = 0xF4;
    if ((*(float *)0xC2AD0F4) == (*(float *)0xC2AD0F8)) {
        *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) & 0x7F);
        *(unsigned int *)0xC2AD020 = (*(int *)0xC2AD0FC);
        *(float *)0xC2AD024 = (*(float *)0xC2AD100);
        t10 = 0x24;
    }
    return t10;
}
