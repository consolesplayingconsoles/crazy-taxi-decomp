/* Straight-line functions with calls and guards (batch gen_anj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetBackColor(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Result_SetBackColor(int a4);

int Result_SetBackColor(int a4)
{
    CarSel_SetBackColor(a4);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    *(unsigned int *)0xC2A96F8 = 0x62;
    *(unsigned int *)0xC2A972C = 0x2005;
    *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + (*(float *)0xC05B184));
    *(float *)0xC2A970C = ((*(float *)0xC2A9758) + (*(float *)0xC05B188));
    *(float *)0xC2A96FC = 0.0f;
    *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x70);
    *(float *)0xC2A9704 = (*(float *)0xC05B190);
    *(unsigned int *)0xC2A9720 = 0x0;
    nlSprPut(0xC2A96F8);
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    *(float *)0xC2A9704 = (*(float *)0xC05B198);
    return 0xC;
}
