/* Straight-line functions with calls and guards (batch gen_pq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_SetFog(void);
int Init_RS_Fog(void);

int Init_RS_Fog(void)
{
    *(float *)0xC130E14 = 0.0f;
    return Result_SetFog();
}
