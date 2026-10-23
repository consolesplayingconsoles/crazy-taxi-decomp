/* Straight-line functions with calls and guards (batch gen_qo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Remain_Time(void);
int Init_Shift(void);
int Init_TotalDrum(void);
int Start_Default_Sprite(int a4, int a5, int a6, int a7, int a8);

int Start_Default_Sprite(int a4, int a5, int a6, int a7, int a8)
{
    *(unsigned int *)0xC2A8C54 = a4;
    *(unsigned int *)0xC2A8C58 = a5;
    *(unsigned int *)0xC2A7600 = a6;
    *(unsigned int *)0xC2A8C5C = a7;
    *(unsigned int *)0xC2A8C60 = a8;
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) | 0x20);
    Init_Remain_Time();
    if ((*(int *)0xC1EE20C) != 2) {
        Init_TotalDrum();
    }
    return Init_Shift();
}
