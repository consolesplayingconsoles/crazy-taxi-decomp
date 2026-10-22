/* Straight-line functions with calls and guards (batch gen_xk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int pedGetSubwayFlag(void);

int pedGetSubwayFlag(void)
{
    float u0;
    int t1;
    int t2;
    int t16;
    float u3;
    float u4;
    float u5;
    int t6;
    int t7;
    int t10;
    int t13;
    int t8;

    u0 = 20.0f;
    t1 = GetCollision2D(0xC179144, u0);
    t2 = *(int *)((t1 + 0x1C));
    t16 = 0;
    if (t2 != -1) {
        u3 = *(float *)0xC179148;
        u4 = *(float *)((t1 + 0x4));
        u5 = 80.0f;
        if (!(_builtin_fabsf((u4 - u3)) > u5)) {
            t6 = *(int *)((t1 + 0x1C));
            *(unsigned int *)0xC12FFBC = t6;
            t8 = t6;
        } else {
            t7 = *(int *)0xC12FFBC;
            t8 = t7;
        }
        t13 = t8;
        _builtin_fabsf((u4 - u3));
        t16 = ((_builtin_fabsf((u4 - u3)) > u5));
    } else {
        t10 = *(int *)0xC12FFBC;
        t13 = t10;
        t16 = (1);
    }
    if (t13 == 21) {
        return 0x2;
    }
    return ((((int)t13 >= (int)0x11)) ? 1 : 0);
}
