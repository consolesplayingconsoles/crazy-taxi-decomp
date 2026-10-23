/* Straight-line functions with calls and guards (batch gen_aig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Start_Pass_Judgement2(int a4);

int Start_Pass_Judgement2(int a4)
{
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) | 0x800);
    *(unsigned int *)0xC2A760C = a4;
    *(unsigned int *)0xC2A8F94 = 0x0;
    return 0xC2A8F94;
}
