/* Straight-line functions with calls and guards (batch gen_xv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Pass_Fare(void);
int Init_Pass_Time(void);
int Start_Pass_Default2_Sprite(int a4);

int Start_Pass_Default2_Sprite(int a4)
{
    *(unsigned int *)0xC2A8C78 = a4;
    *(unsigned int *)0xC2A8C7C = 0xC1EE7B0;
    *(unsigned int *)0xC2A8C80 = 0xC1EE7B4;
    *(unsigned int *)0xC2A8C84 = 0xC1EE7B8;
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) | 0x40);
    *(unsigned int *)0xC2A8E94 = 0x0;
    Init_Pass_Time();
    Init_Pass_Fare();
    *(unsigned int *)0xC2A8E98 = 0x0;
    return 0x0;
}
