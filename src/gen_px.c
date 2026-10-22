/* Straight-line functions with calls and guards (batch gen_px): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_ReadySetGo(void);

int Put_ReadySetGo(void)
{
    int t0;
    int t1;
    int t4;
    float u6;
    float u8;
    float u9;
    int t12;
    int t19;
    int t13;
    int t16;
    int t15;

    t0 = *(int *)0xC2A8FC4;
    if ((int)t0 < (int)0xA) {
        t1 = *(int *)0xC2A8FC4;
        *(unsigned int *)0xC2A8FC4 = (t1 + 0x1);
    } else {
        *(unsigned int *)0xC2A8FC4 = 0xA;
    }
    t4 = *(int *)0xC2A8FC4;
    *(float *)0xC2A898C = ((float)t4 / 10.0f);
    *(float *)0xC2A8990 = ((float)t4 / 10.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 0.699999988f);
    *(unsigned int *)0xC2A897C = 0x1A3;
    u6 = *(float *)0xC2A898C;
    *(float *)0xC2A8980 = ((-(u6 * 32.0f)) + 320.0f);
    *(unsigned int *)0xC2A89A4 = 0x0;
    nlSprPut(0xC2A897C);
    *(unsigned int *)0xC2A897C = 0x1A4;
    u8 = *(float *)0xC2A898C;
    u9 = 320.0f;
    u9 = u9 + 128.0f * u8;
    *(float *)0xC2A8980 = u9;
    nlSprPut(0xC2A897C);
    ResetFadeColor();
    t12 = *(int *)0xC2A8FC4;
    t19 = t12;
    if (t12 == 10) {
        t13 = *(int *)0xC2A8FC8;
        t16 = t12;
        if (t13 == 0) {
            Voice_ShutUp(0x0);
            t15 = Voice_Request(0xC130B90, 0x0, 0x7F, 0x0);
            *(unsigned int *)0xC2A8FC8 = 0x1;
            t16 = t15;
        }
        t19 = t16;
    }
    return t19;
}
