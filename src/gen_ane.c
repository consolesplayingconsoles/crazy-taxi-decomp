/* Straight-line functions with calls and guards (batch gen_ane): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float, float);
int pedGetSubwayFlag(float f4, float f5);

int pedGetSubwayFlag(float f4, float f5)
{
    int t1;
    int t16;
    float u3;
    float u4;
    float u5;
    int t6;
    int t13;
    int t8;

    t1 = GetCollision2D(0xC179144, (*(float *)0xC0500C8), f5);
    t16 = 0;
    if ((*(int *)((t1 + 0x1C))) != -1) {
        u3 = *(float *)0xC179148;
        u4 = *(float *)((t1 + 0x4));
        u5 = *(float *)0xC0500D4;
        if (!(_builtin_fabsf((u4 - u3)) > u5)) {
            t6 = *(int *)((t1 + 0x1C));
            *(unsigned int *)0xC12FFBC = t6;
            t8 = t6;
        } else {
            t8 = (*(int *)0xC12FFBC);
        }
        t13 = t8;
        _builtin_fabsf((u4 - u3));
        t16 = ((_builtin_fabsf((u4 - u3)) > u5));
    } else {
        t13 = (*(int *)0xC12FFBC);
        t16 = (1);
    }
    if (t13 == 21) {
        return 0x2;
    }
    return ((((int)t13 >= (int)0x11)) ? 1 : 0);
}
