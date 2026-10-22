/* Straight-line functions with calls and guards (batch gen_ahs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f5c0(int);
int SetScreen(int);
int SetWindow(int);
int FUN_0c040acc(void);

int FUN_0c040acc(void)
{
    *(unsigned int *)0xC2A1228 = (*(int *)0xC1EE234);
    *(unsigned int *)0xC2A122C = (*(int *)0xC1EE238);
    if ((*(int *)0xC1EE234) != 3) {
        *(unsigned int *)0xC1EE234 = 0x3;
        *(unsigned int *)0xC1EE238 = 0x0;
    }
    SetScreen(0x6);
    SetWindow(0xC);
    return FUN_0c07f5c0(0x605A9);
}
