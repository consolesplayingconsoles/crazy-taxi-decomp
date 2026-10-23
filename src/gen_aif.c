/* Straight-line functions with calls and guards (batch gen_aif): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void End_Time_Plus(void);

void End_Time_Plus(void)
{
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) & 0xFFFFFDFF);
}
