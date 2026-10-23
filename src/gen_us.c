/* Straight-line functions with calls and guards (batch gen_us): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_TimeUp(void);

int Put_TimeUp(void)
{
    int t4;
    float u9;
    int t12;
    int t16;
    int t15;
    int t13;

    if ((int)(*(int *)0xC2A8FC4) < (int)0xA) {
        *(unsigned int *)0xC2A8FC4 = ((*(int *)0xC2A8FC4) + 0x1);
    } else {
        *(unsigned int *)0xC2A8FC4 = 0xA;
    }
    t4 = *(int *)0xC2A8FC4;
    *(float *)0xC2A898C = ((float)t4 / 10.0f);
    *(float *)0xC2A8990 = ((float)t4 / 10.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 0.699999988f);
    *(unsigned int *)0xC2A897C = 0x1A3;
    *(float *)0xC2A8980 = ((-((*(float *)0xC2A898C) * 32.0f)) + 320.0f);
    *(unsigned int *)0xC2A89A4 = 0x0;
    nlSprPut(0xC2A897C);
    *(unsigned int *)0xC2A897C = 0x1A4;
    u9 = 320.0f;
    u9 = u9 + 128.0f * (*(float *)0xC2A898C);
    *(float *)0xC2A8980 = u9;
    nlSprPut(0xC2A897C);
    ResetFadeColor();
    t12 = *(int *)0xC2A8FC4;
    t16 = t12;
    if ((t12 == 10) && (t13 = *(int *)0xC2A8FC8, t13 == 0)) {
        Voice_ShutUp(0x0);
        t15 = Voice_Request(0xC130B90, 0x0, 0x7F, 0x0);
        *(unsigned int *)0xC2A8FC8 = 0x1;
        t16 = t15;
    }
    return t16;
}
