/* Straight-line functions with calls and guards (batch gen_vf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int callNameDelete(void);
int callNameEntry(void);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuPutSprites(int, int, int, int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowNameSelect(void);

int windowNameSelect(void)
{
    int t27;
    int t10;
    int t20;
    int t15;
    int t30;
    int t37;
    int t52;
    int t35;
    int t36;
    int t44;

    windowOpenStep(0xA);
    t27 = 0x0;
    if ((int)(*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) <= (int)0x1) {
    } else {
        t10 = *(signed char *)0xC28A4F6;
        t20 = (~(((int)(unsigned char)t10 >= 0) ? (0x1 << ((unsigned char)t10 & 31)) : ((-(int)(unsigned char)t10 & 31) ? ((int)0x1 >> (-(int)(unsigned char)t10 & 31)) : ((int)0x1 >> 31))));
        if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) == 2) {
        } else {
            t15 = 0xF;
            if ((int)(*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) <= (int)0x4) {
                t15 = (((int)(unsigned char)t10 >= 0) ? (0xFFFFFFFF << ((unsigned char)t10 & 31)) : ((-(int)(unsigned char)t10 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t10 & 31)) : 0));
            }
            t20 = t15;
        }
        t27 = t20;
    }
    t30 = *(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0));
    menuCursor(0x1, 0x4, t27);
    *(unsigned int *)0xC2A11C4 = (*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0)));
    if ((((*(int *)0xC1EE330) & 16) == 0) && (t35 = *(int *)0xC2A11F4, t36 = *(int *)((((t35 << 2) + 0xC2A11F8) + 0x0)), t36 == t30)) {
    } else {
        t37 = *(int *)0xC2A11C4;
        menuPutSprites(0xC0A1D98, 0xC2A1A84, 0x190, (((((t37 << 2) + t37) << 2) << 2) + 0x88));
    }
    if ((((*(int *)0xC2A1208) & 4) != 0) && (t44 = *(int *)0xC2A11CC, (t44 & 2) != 0)) {
        memmove(0xC2A1248, ((short)((short)(*(int *)0xC2A11C4) * (short)0x788) + 0xC28A4F8), 0x4);
        if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) != 2) {
            t52 = *(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)));
            if (t52 == 3) {
                return callNameDelete();
            }
            if (t52 == 4) {
                return callNameEntry();
            }
            return windowEnterStep(0x14);
        }
        return callNameEntry();
    }
    return windowEnterStep(0x14);
}
