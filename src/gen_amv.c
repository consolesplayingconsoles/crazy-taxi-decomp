/* Straight-line functions with calls and guards (batch gen_amv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Light(void);
int Result_Next_State(void);
int Result_SetBackColor(void);
int Result_SetFog(void);
int Result_Skip(void);
int Result_Sprite_Put(void);
int Result_Voice(void);
int Result_Wobble(void);
int Exec_Result(void);

int Exec_Result(void)
{
    int t7;

    Result_Skip();
    Result_Next_State();
    Result_Voice();
    Result_Light();
    Result_SetFog();
    Result_SetBackColor();
    Result_Wobble();
    t7 = Result_Sprite_Put();
    *(unsigned int *)0xC2A96F4 = ((*(int *)0xC2A96F4) + 0x1);
    return t7;
}
