/* Straight-line functions with calls and guards (batch gen_kl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c087e40(void);
extern float _builtin_sqrtf(float);
float ADX_GetCoefficient(int a4, int a5, int a6, int a7);

float ADX_GetCoefficient(int a4, int a5, int a6, int a7)
{
    float t1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;

    *(volatile float *)0xC167E30;
    t1 = FUN_0c087e40();
    u2 = *(float *)0xC167E38;
    u3 = (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)));
    u4 = (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)));
    u5 = (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)));
    *(unsigned short *)((a6 + 0x0)) = (int)(u3 * u2);
    u6 = *(float *)0xC167E3C;
    *(unsigned short *)((a7 + 0x0)) = (int)(-(((u4 * u5)) * u6));
    return u6;
}
