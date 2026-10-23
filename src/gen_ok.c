/* Straight-line functions with calls and guards (batch gen_ok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int Put_Stop_and_Brake(int a4, int a5);

int Put_Stop_and_Brake(int a4, int a5)
{
    float u1;
    float u2;
    int t3;
    int t6;
    int t10;

    nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
    *(float *)0xC2A7EEC = 1.0f;
    *(float *)0xC2A7EF0 = 1.0f;
    *(float *)0xC2A7F08 = 1.0f;
    *(unsigned int *)0xC2A7F10 = 0x200A;
    *(unsigned int *)0xC2A7F04 = 0x0;
    u1 = *(float *)0xC05757C;
    u2 = *(float *)0xC057580;
    if (a4 == 0) {
        t3 = 0x1D9;
        if (a5 == 0) {
            t3 = 0x1D2;
        }
        nd_SprPut(0xC2A7EDC, t3, u1, u2);
    } else {
        t6 = 0x1D8;
        if (a5 == 0) {
            t6 = 0x1D1;
        }
        nd_SprPut(0xC2A7EDC, t6, u1, u2);
    }
    t10 = ResetFadeColor();
    *(unsigned int *)0xC2A7F10 = 0xA;
    return t10;
}
