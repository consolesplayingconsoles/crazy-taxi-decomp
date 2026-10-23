/* Straight-line functions with calls and guards (batch gen_yk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int nlFastSinCos(int, int, int);
void MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5);

void MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5)
{
    int t7;
    int t10;
    int t11;
    float u13;
    float u14;
    float u15;
    float u20;
    float u24;
    float u4;
    float u5;
    int t9;
    float u12;
    float u33;
    float u34;

    *(unsigned int *)((a4 + 0x0)) = 0xC;
    *(unsigned int *)(((a4 + 0x4) + 0x0)) = (*(int *)(((a6 << 2) + 0xC0ED9E0)));
    *(unsigned int *)((((a4 + 0x4) + 0xA0) + 0x0)) = 0x0;
    if ((*(int *)0xC1EE20C) == 0) {
        u4 = (*(float *)((a5 + 0x4)));
    } else {
        u4 = ((*(float *)((a5 + 0x4))) + 40.0f);
        u5 = 40.0f;
    }
    t7 = ((a4 + 0x4) + 0xA0);
    t10 = 0x0;
    t11 = (a4 + 0x8);
    u13 = u5;
    u14 = f4;
    u15 = f5;
    for (;;) {
        if ((int)t10 >= (int)0xC) {
            break;
        }
        t9 = 0x1555;
        t7 = (t10 * t9);
        nlFastSinCos(t7, (t11 + 0x8), t11);
        u12 = (*(float *)((t11 + 0x0)));
        u13 = (*(float *)((a5 + 0x0)));
        u20 = u13;
        u20 = u20 + f4 * u12;
        u13 = u20;
        t9 = 0xC031EF4;
        *(float *)((t11 + 0x0)) = u13;
        u12 = (*(float *)((t11 + 0x8)));
        u13 = (*(float *)((a5 + 0x8)));
        u24 = u13;
        u24 = u24 + f4 * u12;
        u13 = u24;
        *(float *)((t11 + 0x8)) = u13;
        *(float *)((t11 + 0x4)) = u4;
        u14 = (5.0f);
        t7 = t11;
        t7 = (GetCollision2D(t7, u14));
        u14 = 3.0f;
        if ((*(int *)((t7 + 0x1C))) != -1) {
            u15 = -50.0f;
            u13 = (*(float *)((a5 + 0x4)));
            u12 = (*(float *)((t7 + 0x18)));
            u13 = (u13 + u15);
            if (u13 > u12) {
                u13 = (*(float *)((a5 + 0x4)));
                u13 = (u13 + u14);
            } else {
                u13 = (*(float *)((t7 + 0x18)));
                u13 = (u13 + u14);
            }
            u33 = u12;
            u34 = u15;
        } else {
            u13 = (*(float *)((a5 + 0x4)));
            u13 = (u13 + u14);
        }
        *(float *)((t11 + 0x4)) = u13;
        u12 = u33;
        u15 = u34;
        t11 = (t11 + 0xC);
        t10 = (t10 + 0x1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(t11) = *(struct mv3 *)((a4 + 0x8)); }
}
