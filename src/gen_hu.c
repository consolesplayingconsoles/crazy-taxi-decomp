extern int callNameEntry();
/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int windowOpenStep(void);
int windowEnterStep(void);
int PutVM_Message(int, int, int, float, float);
int memmove(int, int, int);
int menuCursor(int, int, int);
int windowRecordEntry(int a4, int a5, float f4, float f5);

int windowRecordEntry(int a4, int a5, float f4, float f5)
{
    int t1;
    int t2;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    float u14;
    int t51;
    int t53;
    int t54;
    int t55;
    float u56;
    float u57;
    int t16;
    int t17;
    int t19;
    float u20;
    int t21;
    int t23;
    int t25;
    int t26;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t66;
    int t68;
    int t69;
    int t70;
    int t8;
    int t9;
    float u13;
    float u15;
    int t43;
    int t45;
    int t46;
    int t47;
    float u48;
    float u49;
    int t35;
    int t37;
    int t38;
    int t39;
    float u40;
    float u41;
    int t27;
    int t29;
    int t30;
    int t31;
    float u32;
    float u33;

    windowOpenStep();
    t1 = *(signed char *)0xC28A4F6;
    t2 = (((int)(unsigned char)t1 >= 0) ? (0xFFFFFFFF << ((unsigned char)t1 & 31)) : ((-(int)(unsigned char)t1 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t1 & 31)) : 0));
    if ((int)(unsigned char)t1 < (int)0x4) {
        t2 = ((((int)(unsigned char)t1 >= 0) ? (0xFFFFFFFF << ((unsigned char)t1 & 31)) : ((-(int)(unsigned char)t1 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t1 & 31)) : 0)) & 0xFFFFFFEF);
    }
    menuCursor(0x1, 0x6, (t2 & 0xFFFFFFDF));
    t6 = PutVM_Message(0x20, 0x1E, 0x0, 223.0f, 112.0f);
    t7 = t6;
    t10 = a5;
    t11 = 0x0;
    t12 = 0x0;
    u14 = f5;
    for (;;) {
        t51 = t8;
        t53 = t9;
        t54 = 0x1;
        t55 = t10;
        u56 = u13;
        u57 = u14;
        if (((((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31))) & (t2 & 0xFFFFFFDF)) == 0) {
            t16 = *(int *)0xC2A11F4;
            t8 = t16;
            t9 = 0xC2A11F4;
            t9 = (t9 + 0x4);
            t8 = (t8 << 2);
            t8 = (t8 + t9);
            t17 = *(int *)((t8 + 0x0));
            if (t12 == t17) {
                t10 = 0x2044;
            } else {
                t10 = 0x2024;
            }
            t9 = t11;
            t9 = (t9 << 2);
            t9 = (t9 << 2);
            t19 = t10;
            t10 = 0x90;
            t9 = (t9 << 1);
            t7 = 0xC03EBB4;
            t9 = (t9 + t10);
            u20 = *(float *)((t7 + 0x0));
            u15 = u20;
            t21 = *(signed char *)0xC28A4F6;
            t7 = t21;
            u13 = (float)t9;
            t7 = (unsigned char)t7;
            u14 = u13;
            if ((int)t12 < (int)t7) {
                t9 = 0xC28A4E8;
                t9 = (t9 + 0x10);
                t10 = 0x1F;
                t23 = PutVM_Message(t19, t10, ((short)((short)t12 * (short)0x788) + t9), u15, u14);
                t7 = t23;
                t11 = (t11 + 0x1);
            } else {
                t7 = t12;
                if (t7 == 4) {
                    t9 = ((int)PutVM_Message);
                    t10 = 0x20;
                    t25 = PutVM_Message(t19, t10, 0x0, u15, u14);
                    t7 = t25;
                    t11 = (t11 + 0x1);
                } else {
                    if (t7 == 5) {
                        t10 = 0x21;
                        t26 = PutVM_Message(t19, t10, 0x0, u15, u14);
                        t7 = t26;
                        t11 = (t11 + 0x1);
                    } else {
                        t27 = t8;
                        t29 = t9;
                        t30 = t19;
                        t31 = t10;
                        u32 = u13;
                        u33 = u14;
                    }
                    t35 = t27;
                    t37 = t29;
                    t38 = t30;
                    t39 = t31;
                    u40 = u32;
                    u41 = u33;
                }
                t43 = t35;
                t45 = t37;
                t46 = t38;
                t47 = t39;
                u48 = u40;
                u49 = u41;
            }
            t51 = t43;
            t53 = t45;
            t54 = t46;
            t55 = t47;
            u56 = u48;
            u57 = u49;
        }
        u13 = u56;
        u14 = u57;
        t8 = t51;
        t12 = (t12 + 0x1);
        t9 = t53;
        t10 = t55;
        if ((int)t12 >= (int)0x6) {
            break;
        }
    }
    t59 = *(int *)0xC2A1208;
    if ((t59 & 0x4) != 0) {
        t60 = *(int *)0xC2A11CC;
        if ((t60 & 2) != 0) {
            t61 = *(int *)0xC2A11F4;
            t62 = *(int *)((((t61 << 2) + 0xC2A11F8) + 0x0));
            if ((int)t62 < (int)0x4) {
                t63 = *(int *)0xC2A11F4;
                t64 = *(int *)((((t63 << 2) + 0xC2A11F8) + 0x0));
                *(unsigned int *)0xC2A11C4 = t64;
                memmove(0xC2A1248, ((short)((short)t64 * (short)0x788) + 0xC28A4F8), 0x4);
                t66 = *(int *)0xC2A11C4;
                memmove(0xC2A124C, ((short)((short)t66 * (short)0x788) + 0xC28A4F8), 0x4);
                return windowEnterStep();
            }
            t68 = *(int *)0xC2A11F4;
            t69 = *(int *)((0xC2A11F8 + (t68 << 2)));
            if (t69 == 4) {
                t70 = *(signed char *)0xC28A4F6;
                *(unsigned int *)0xC2A11C4 = (unsigned char)t70;
                return ((int (*)(int, int, float, float))(((int)callNameEntry)))(t54, t10, 0.0f, u14);
            }
            return windowEnterStep();
        }
        return windowEnterStep();
    }
    return windowEnterStep();
}
