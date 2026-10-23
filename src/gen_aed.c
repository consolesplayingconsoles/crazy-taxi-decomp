/* Straight-line functions with calls and guards (batch gen_aed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColor(float, float, float);
extern int nlSprPut();
int nd_StartWait_PutMessage(int a4, int a5, int a6);

int nd_StartWait_PutMessage(int a4, int a5, int a6)
{
    int t4;
    float u17;
    int t20;
    int t21;
    int t7;
    int t8;

    if ((*(int *)0xC1EE244) == 0) {
        *(unsigned int *)0xC2A7314 = 0x1D2;
    } else {
        *(unsigned int *)0xC2A7314 = 0x1D9;
    }
    *(float *)0xC2A7318 = 320.0f;
    *(float *)0xC2A731C = 160.0f;
    t4 = ((int (*)(int, int, int))(nlSprPut))(0xC2A7314, a5, a6);
    nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
    if (((int)(*(int *)0xC2A7208) > (int)0x32) && ((t7 = *(int *)0xC2A7208, (int)t7 < (int)0x78) || (t8 = *(int *)0xC2A7208, (int)t8 > (int)0xAA))) {
    } else {
        if ((*(int *)0xC1EE244) == 0) {
            *(unsigned int *)0xC2A7314 = 0x1D1;
        } else {
            *(unsigned int *)0xC2A7314 = 0x1D8;
        }
        u17 = 500.0f;
        if (0.0f > (*(float *)0xC2A72CC)) {
            u17 = 140.0f;
        }
        *(float *)0xC2A7318 = u17;
        *(float *)0xC2A731C = 210.0f;
        t20 = (int)((int)((*(int *)0xC2A72B8) + 0x1) % (int)0x1E);
        *(unsigned int *)0xC2A72B8 = t20;
        if ((int)t20 < (int)0x14) {
            t21 = ((int (*)(int))(nlSprPut))(0xC2A7314);
        }
    }
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}
