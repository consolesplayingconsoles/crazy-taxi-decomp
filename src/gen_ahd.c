/* Straight-line functions with calls and guards (batch gen_ahd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Remain_Time(void);
int Init_Shift(void);
int FUN_0c0530ce(int a4, int a5, int a6, int a7, int a8);
void FUN_0c0530c2(void);

int FUN_0c0530ce(int a4, int a5, int a6, int a7, int a8)
{
    *(unsigned int *)0xC2A8C54 = a4;
    *(unsigned int *)0xC2A8C58 = a5;
    *(unsigned int *)0xC2A7600 = a6;
    *(unsigned int *)0xC2A8C5C = a7;
    *(unsigned int *)0xC2A8C60 = a8;
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) | 0x10);
    Init_Remain_Time();
    return Init_Shift();
}

void FUN_0c0530c2(void)
{
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) & 0xFFFFFFFB);
}
