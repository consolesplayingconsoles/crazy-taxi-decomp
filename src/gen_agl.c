/* Straight-line functions with calls and guards (batch gen_agl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PTime_Color_Set(float, float, float);
int PTime_Pos_Set(float, float);
int PTime_Scale_Set(float, float);
int psgTimeDispInit(void);

int psgTimeDispInit(void)
{
    *(unsigned int *)0xC2AE368 = 0x0;
    *(unsigned int *)0xC2AE364 = 0x0;
    *(float *)0xC2AE36C = 420.0f;
    *(float *)0xC2AE370 = 250.0f;
    *(float *)0xC2AE374 = (-1.0f);
    *(float *)0xC2AE378 = -30.0f;
    *(float *)0xC2AE380 = 0.5f;
    *(float *)0xC2AE37C = 0.5f;
    *(float *)0xC2AE384 = 15.0f;
    PTime_Pos_Set((*(float *)0xC2AE36C), (*(float *)0xC2AE370));
    PTime_Scale_Set(0.5f, 0.5f);
    return PTime_Color_Set(0.899999976f, 0.899999976f, 0.599999964f);
}
