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
        switch (t5) {
        case 0:
            *(unsigned int *)0xC2A11C0 = 0x0;
            break;
        case 1:
            *(unsigned int *)0xC2A11C0 = 0x1;
            break;
        case 2:
            *(unsigned int *)0xC2A11C0 = 0x2;
            break;
        case 3:
            *(unsigned int *)0xC2A11C0 = 0x3;
            break;
        case 4:
            *(unsigned int *)0xC2A11C0 = 0x4;
            break;
        default:
            *(unsigned int *)0xC2A11C0 = 0x1;
            break;
        }
        t23 = t5;
    } else {
        *(unsigned int *)0xC2A11C0 = 0x0;
        t23 = t3;
    }
    return t23;
}
