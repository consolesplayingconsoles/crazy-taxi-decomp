/* Straight-line functions with calls and guards (batch gen_anc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_Adv_Logo_Sprite(void);

int Put_Adv_Logo_Sprite(void)
{
    *(unsigned int *)0xC2A92CC = 0x62;
    *(unsigned int *)0xC2A9300 = 0x2005;
    *(float *)0xC2A92DC = 40.0f;
    *(float *)0xC2A92E0 = 30.0f;
    *(float *)0xC2A92D8 = 490.0f;
    *(float *)0xC2A92F8 = 0.5f;
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    return nlSprPut(0xC2A92CC);
}
