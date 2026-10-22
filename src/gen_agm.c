/* Straight-line functions with calls and guards (batch gen_agm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlRoundUp(float);
float Set_Record_Time(void);

float Set_Record_Time(void)
{
    float t1;
    int t2;

    t1 = nlRoundUp((((float)(*(int *)0xC2A98F8) / 60.0f) * 100.0f));
    t2 = (int)((int)(int)t1 / (int)0x1770);
    *(unsigned int *)0xC2A98F4 = ((t2 * 0x2710) + ((int)t1 - (t2 * 0x1770)));
    return t1;
}
