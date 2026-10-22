/* Straight-line functions with calls and guards (batch gen_ahk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_TimeUp(void);
int SetLandmark(int);
int FUN_0c02d744(void);

int FUN_0c02d744(void)
{
    int t2;

    *(unsigned int *)0xC179120 = 0x0;
    SetLandmark(0x3);
    *(unsigned int *)0xC2A11C8 = (*(int *)0xC1EE7A8);
    t2 = *(int *)0xC1EE7F0;
    *(unsigned int *)0xC1EE7F0 = (t2 - 1);
    if ((int)(t2 - 1) < 0) {
        if ((*(int *)0xC1EE210) != 2) {
            *(unsigned int *)0xC1EE238 = 0x8;
        }
        return End_TimeUp();
    }
    return (t2 - 1);
}
