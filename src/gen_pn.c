/* Straight-line functions with calls and guards (batch gen_pn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int, int);
int Result_Class_Shadow_Put(void);

int Result_Class_Shadow_Put(void)
{
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC2A972C = 0x200A;
    *(unsigned int *)0xC2A96F8 = 0x13E;
    *(float *)0xC2A96FC = (*(float *)0xC05A7D0);
    *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0x18C);
    *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    return nlSprPut(0xC2A96F8, 0xC2A9758);
}
