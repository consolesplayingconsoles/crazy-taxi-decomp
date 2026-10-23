/* Straight-line functions with calls and guards (batch gen_ant): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syCfgGetLanguage(int);
int syCfgGetSoundMode(int, int, int);
int sysCfgRead(int a4, int a5, int a6);

int sysCfgRead(int a4, int a5, int a6)
{
    int t3;
    int t5;
    int t23;

    if ((syCfgGetSoundMode(0xC2A11BC, a5, a6)) != 0) {
        *(unsigned int *)0xC2A11BC = 0x0;
    }
    t3 = syCfgGetLanguage(0xC2A11C0);
    if (t3 == 0) {
        t5 = *(int *)0xC2A11C0;
        if (t5 != 0) {
            if (t5 != 1) {
                if (t5 != 2) {
                    if (t5 != 3) {
                        if (t5 != 4) {
                            *(unsigned int *)0xC2A11C0 = 0x1;
                        } else {
                            *(unsigned int *)0xC2A11C0 = 0x4;
                        }
                    } else {
                        *(unsigned int *)0xC2A11C0 = 0x3;
                    }
                } else {
                    *(unsigned int *)0xC2A11C0 = 0x2;
                }
            } else {
                *(unsigned int *)0xC2A11C0 = 0x1;
            }
        } else {
            *(unsigned int *)0xC2A11C0 = 0x0;
        }
        t23 = t5;
    } else {
        *(unsigned int *)0xC2A11C0 = 0x0;
        t23 = t3;
    }
    return t23;
}
