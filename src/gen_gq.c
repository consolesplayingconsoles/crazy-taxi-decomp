/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Window_SpriteXtoY(int, int, int, int, int, float, float, float, float);
int PutWindow(int a4, float f4, float f5);

int PutWindow(int a4, float f4, float f5)
{
    float u1;
    float u2;
    int t9;
    int t18;

    *(float *)0xC2A1AD4 = ((*(float *)0xC2A1AD4) + 0.0199999996f);
    *(float *)0xC2A1AB0 = 0.799999952f;
    u1 = *(float *)0xC2A1AB0;
    u2 = *(float *)0xC2A1AD4;
    if ((int)a4 <= (int)0x2) {
        t18 = (Put_Window_SpriteXtoY((int)(f4 + 160.0f), (int)(f5 + 72.0f), 0x6, 0x3, a4, u2, 19.0f, 8.0f, u1));
    } else {
        t9 = 0xFFFFFFFF;
        if (a4 == 3) {
            t9 = (Put_Window_SpriteXtoY((int)(f4 + (312.0f)), (int)(f5 + 72.0f), 0x6, 0x3, a4, u2, (38.0f), 8.0f, u1));
        }
        t18 = t9;
    }
    *(float *)0xC2A1AB0 = 1.0f;
    *(float *)0xC2A1AD4 = ((*(float *)0xC2A1AD4) - 0.0199999996f);
    return t18;
}
