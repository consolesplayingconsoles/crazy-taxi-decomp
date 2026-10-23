/* Straight-line functions with calls and guards (batch gen_zl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutVM_Message(int, int, int, float, float);
int callNameEntry(void);
int memmove(int, int, int);
int menuCursor(int, int, int);
extern int windowEnterStep();
int windowOpenStep(int);
int windowRecordEntry(int a4, int a5, float f4, float f5);

int windowRecordEntry(int a4, int a5, float f4, float f5)
{
    int t1;
    int t2;
    int t7;
    int t10;
    int t11;
    int t12;
    float u14;
    int t58;
    float u59;
    float u60;
    int t21;
    int t91;
    int t8;
    int t9;
    float u13;
    float u15;
    int t54;
    int t56;
    int t46;
    int t48;
    int t50;
    float u51;
    float u52;
    int t38;
    int t40;
    int t42;
    float u43;
    float u44;
    int t30;
    int t32;
    int t34;
    float u35;
    float u36;
    int t77;

    windowOpenStep(0xA);
    t1 = *(signed char *)0xC28A4F6;
    t2 = (((int)(unsigned char)t1 >= 0) ? (0xFFFFFFFF << ((unsigned char)t1 & 31)) : ((-(int)(unsigned char)t1 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t1 & 31)) : 0));
    if ((int)(unsigned char)t1 < (int)0x4) {
        t2 = ((((int)(unsigned char)t1 >= 0) ? (0xFFFFFFFF << ((unsigned char)t1 & 31)) : ((-(int)(unsigned char)t1 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t1 & 31)) : 0)) & 0xFFFFFFEF);
    }
    menuCursor(0x1, 0x6, (t2 & 0xFFFFFFDF));
    t7 = (PutVM_Message(0x20, 0x1E, 0x0, 223.0f, 112.0f));
    t10 = a5;
    t11 = 0x0;
    t12 = 0x0;
    u14 = f5;
    for (;;) {
        t58 = t10;
        u59 = u13;
        u60 = u14;
        if (((((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31))) & (t2 & 0xFFFFFFDF)) == 0) {
            t8 = (*(int *)0xC2A11F4);
            t9 = 0xC2A11F4;
            t9 = (t9 + 0x4);
            t8 = (t8 << 2);
            t8 = (t8 + t9);
            if (t12 == (*(int *)((t8 + 0x0)))) {
                t10 = 0x2044;
            } else {
                t10 = 0x2024;
            }
            t9 = t11;
            t9 = (t9 << 2);
            t9 = (t9 << 2);
            t21 = t10;
            t10 = 0x90;
            t9 = (t9 << 1);
            t7 = 0xC03EBB4;
            t9 = (t9 + t10);
            u15 = (*(float *)((t7 + 0x0)));
            t7 = (*(signed char *)0xC28A4F6);
            u13 = (float)t9;
            t7 = (unsigned char)t7;
            u14 = u13;
            if ((int)t12 < (int)t7) {
                t9 = 0xC28A4E8;
                t9 = (t9 + 0x10);
                t10 = 0x1F;
                t7 = (PutVM_Message(t21, t10, ((short)((short)t12 * (short)0x788) + t9), u15, u14));
                t11 = (t11 + 0x1);
            } else {
                t7 = t12;
                if (t7 == 4) {
                    t9 = 0xC03C208;
                    t10 = 0x20;
                    t7 = (PutVM_Message(t21, t10, 0x0, u15, u14));
                    t11 = (t11 + 0x1);
                } else {
                    if (t7 == 5) {
                        t10 = 0x21;
                        t7 = (PutVM_Message(t21, t10, 0x0, u15, u14));
                        t11 = (t11 + 0x1);
                    } else {
                        t30 = t8;
                        t32 = t9;
                        t34 = t10;
                        u35 = u13;
                        u36 = u14;
                    }
                    t38 = t30;
                    t40 = t32;
                    t42 = t34;
                    u43 = u35;
                    u44 = u36;
                }
                t46 = t38;
                t48 = t40;
                t50 = t42;
                u51 = u43;
                u52 = u44;
            }
            t54 = t46;
            t56 = t48;
            t58 = t50;
            u59 = u51;
            u60 = u52;
        } else {
            t54 = t8;
            t56 = t9;
        }
        u13 = u59;
        u14 = u60;
        t8 = t54;
        t12 = (t12 + 0x1);
        t9 = t56;
        t10 = t58;
        if ((int)t12 >= (int)0x6) {
            break;
        }
    }
    if ((((*(int *)0xC2A1208) & 0x4) != 0) && (t77 = *(int *)0xC2A11CC, (t77 & 2) != 0)) {
        if ((int)(*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0))) < (int)0x4) {
            t91 = *(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0));
            *(unsigned int *)0xC2A11C4 = t91;
            memmove(0xC2A1248, ((short)((short)t91 * (short)0x788) + 0xC28A4F8), 0x4);
            memmove(0xC2A124C, ((short)((short)(*(int *)0xC2A11C4) * (short)0x788) + 0xC28A4F8), 0x4);
            return ((int (*)(int))(windowEnterStep))(0x14);
        }
        if ((*(int *)((0xC2A11F8 + ((*(int *)0xC2A11F4) << 2)))) == 4) {
            *(unsigned int *)0xC2A11C4 = (unsigned char)(*(signed char *)0xC28A4F6);
            return callNameEntry();
        }
        return ((int (*)(int, int))(windowEnterStep))(0x14, t10);
    }
    return ((int (*)(int, int))(windowEnterStep))(0x14, t10);
}
