/* Straight-line functions with calls and guards (batch gen_vm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int SetWindow(int a4);

int SetWindow(int a4)
{
    int t6;
    int t11;
    int t12;

    if ((unsigned int)a4 < (unsigned int)0x11) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)0xC2A1210 = 0x0;
            }
                break;
            case 2:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDE0;
                *(unsigned int *)0xC2A11B0 = 0x1;
            }
                break;
            case 4:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDC8;
                *(unsigned int *)0xC2A11B0 = 0x1;
            }
                break;
            case 6:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DC78;
            }
                break;
            case 8:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DC80;
            }
                break;
            case 10:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DC90;
            }
                break;
            case 12:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCA0;
            }
                break;
            case 14:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCB0;
            }
                break;
            case 16:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCC0;
            }
                break;
            case 18:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCD0;
            }
                break;
            case 20:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DD70;
            }
                break;
            case 22:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DD48;
            }
                break;
            case 24:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCF8;
            }
                break;
            case 26:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DD38;
            }
                break;
            case 28:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCE0;
            }
                break;
            case 30:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDA8;
            }
                break;
            default:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDB8;
            }
                break;
        }
    } else {
        *(unsigned int *)0xC2A1210 = 0x0;
    }
    if (a4 == 0) {
        *(unsigned int *)0xC2A1208 = 0x0;
        *(unsigned int *)0xC2A11B0 = 0x0;
        *(unsigned int *)0xC2A1214 = 0x0;
    } else {
        t6 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = ((t6 & 0xFFFFFFF0) | 0x2);
        *(unsigned int *)0xC2A1214 = 0x1;
    }
    *(unsigned int *)0xC2A11F4 = 0x0;
    t11 = 0xC2A11F8;
    t12 = 0x0;
    for (;;) {
        if ((int)t12 >= (int)0x4) {
            break;
        }
        *(unsigned int *)((t11 + 0x0)) = 0x0;
        t11 = (t11 + 0x4);
        t12 = (t12 + 0x1);
    }
    return NextWindow(0x0);
}
