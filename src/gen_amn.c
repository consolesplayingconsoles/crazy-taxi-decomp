/* Straight-line functions with calls and guards (batch gen_amn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int AreYouBreathing(void);
int BigOneSwims(void);
int ShallWeHaveSomeRelaxation(float);
int RinAqua_Execute(void);

int RinAqua_Execute(void)
{
    AreYouBreathing();
    ShallWeHaveSomeRelaxation(-1240.0f);
    return BigOneSwims();
}
