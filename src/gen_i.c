/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int callGoBackAdvertise(void);
int callSaveData(int);
int syCfgSetSoundMode(int);
int menuGoBack(void);

int menuGoBack(void)
{
    int t1;
    int t3;

    if ((int)(*(int *)0xC2A11D8) <= (int)0x1) {
        return callGoBackAdvertise();
    }
    t1 = *(int *)0xC2A11D8;
    *(unsigned int *)0xC2A11D8 = (t1 - 2);
    if ((t1 - 2) == 0) {
        if ((GetMenuMode(0x0)) != 3) {
            t3 = GetMenuMode(0x0);
            if (t3 == 5) {
                if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) == 3) {
                    syCfgSetSoundMode((*(int *)0xC2A11BC));
                }
                return callSaveData(0x1);
            }
            return t3;
        }
        if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) == 3) {
            syCfgSetSoundMode((*(int *)0xC2A11BC));
        }
        return callSaveData(0x1);
    }
    return (t1 - 2);
}
