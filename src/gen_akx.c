/* Straight-line functions with calls and guards (batch gen_akx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow4Normal(int, int);
int GetCollision2D(int, float, float);
int Psg_SetPosPtrSet(int a4, int a5, float f4, float f5);

int Psg_SetPosPtrSet(int a4, int a5, float f4, float f5)
{
    int t0;
    int t4;
    int t13;
    int t7;
    int t10;
    int t18;

    t0 = GetCollision2D(a5, 5.0f, f5);
    if ((*(int *)((t0 + 0x1C))) != -1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4)) = *(struct mv3 *)(t0); }
        return CalcShadow4Normal((a4 + 0x14), (t0 + 0xC));
    }
    t4 = *(int *)((a4 + 0x20));
    if (t4 != 2) {
        t13 = t4;
        if (t4 == 4) {
            t7 = *(int *)((a4 + 0x24));
            t10 = t7;
            if (t7 == 2) {
                *(float *)((a4 + 0x4)) = (*(float *)((a5 + 0x0)));
                *(float *)((a4 + 0xC)) = (*(float *)((a5 + 0x8)));
                t10 = 0xC;
            }
            t13 = t10;
        }
        t18 = t13;
    } else {
        *(float *)((a4 + 0x4)) = (*(float *)((a5 + 0x0)));
        *(float *)((a4 + 0xC)) = (*(float *)((a5 + 0x8)));
        t18 = 0xC;
    }
    return t18;
}
