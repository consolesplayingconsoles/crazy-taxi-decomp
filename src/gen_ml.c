/* Straight-line functions with calls and guards (batch gen_ml): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Init(void);
int Voice_Clear(void);
int End_TimeUp(void);

int End_TimeUp(void)
{
    int t1;

    Sound_Init();
    t1 = Voice_Clear();
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) & 0xEFFFFFFF);
    return t1;
}
