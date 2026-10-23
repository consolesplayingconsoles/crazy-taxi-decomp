/* Straight-line functions with calls and guards (batch gen_ags): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int);
int Put_Remain_Time_Frame(void);

int Put_Remain_Time_Frame(void)
{
    *(float *)0xC2A7F80 = (158.0f);
    *(float *)0xC2A7F84 = (96.0f);
    *(unsigned int *)0xC2A7FB0 = 0x200B;
    *(unsigned int *)0xC2A7F7C = 0xF;
    *(float *)0xC2A7F94 = 0.0f;
    *(float *)0xC2A7F9C = 1.0f;
    *(float *)0xC2A7F98 = 0.0f;
    *(float *)0xC2A7FA0 = 1.0f;
    *(float *)0xC2A7F8C = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
    *(unsigned int *)0xC2A7FA4 = 0x0;
    nlSprPut(0xC2A7F7C);
    *(float *)0xC2A7F8C = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
    return 0x14;
}
