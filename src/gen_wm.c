/* Straight-line functions with calls and guards (batch gen_wm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_RankDrum(void);
int rankingInsert(void);
int Start_Pass_Ranking(void);

int Start_Pass_Ranking(void)
{
    int t1;

    Init_RankDrum();
    t1 = rankingInsert();
    if (t1 != 0) {
        *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) | 0x1000);
        *(unsigned int *)0xC2A916C = 0x0;
        *(unsigned int *)0xC2A9178 = 0x0;
        *(unsigned int *)0xC2A917C = 0x0;
    }
    return t1;
}
