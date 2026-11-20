/* Straight-line functions with calls and guards (batch gen_sa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndDriverMidiReqNum(void);

int nlsndDriverMidiReqNum(void)
{
    return (*(int *)0xA08000EC);
}
