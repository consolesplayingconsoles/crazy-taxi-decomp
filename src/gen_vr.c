/* Straight-line functions with calls and guards (batch gen_vr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f5c0(int);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int char2num(int);
int num2char(int);
int putString(int, int, float, float, float);
int EditEntryName(int a4, float f4);

int EditEntryName(int a4, float f4)
{
    int t3;
    int t6;
    int t9;
    int t10;
    int t11;
    int t17;
    int t20;
    int t22;
    int t23;
    int t24;
    int t30;
    int t41;
    int t51;
    int t62;
    int t63;
    int t64;
    int t67;
    int t71;
    float u73;
    int t74;
    int t75;
    int t77;
    int t78;
    int t85;
    int t92;
    int t4;
    int t5;
    int t18;
    int t19;
    int t31;
    int t32;
    int t39;
    int t40;
    int t68;
    int t69;
    int t70;
    float u72;
    int t86;
    int t87;
    int t88;
    float u89;
    float u90;
    int t79;
    int t80;
    int t81;
    float u82;
    float u83;

    if (a4 == 0) {
        *(unsigned int *)0xC2A1250 = 0x0;
        *(unsigned int *)0xC2A1254 = 0x0;
        *(unsigned char *)0xC2A1248 = 0x41;
        *(unsigned char *)0xC2A1249 = 0x41;
        *(unsigned char *)0xC2A124A = 0x41;
        *(unsigned char *)0xC2A124B = 0x0;
        t92 = 0x0;
    } else {
        t3 = *(int *)0xC2A11CC;
        if (((t3 & 0x20) == 0) && ((t4 = *(int *)0xC2A11D4, t4 != 0) || (t5 = *(int *)0xC2A11D0, (t5 & 0x20) == 0))) {
        } else {
            t6 = *(int *)0xC2A1250;
            *(unsigned int *)0xC2A1250 = (t6 - 1);
            if ((int)(t6 - 1) < 0) {
                *(unsigned int *)0xC2A1250 = 0x2;
            }
            t9 = *(int *)0xC2A1250;
            t10 = *(signed char *)((0xC2A1248 + t9));
            t11 = char2num(t10);
            *(unsigned int *)0xC2A1254 = t11;
            FUN_0c07f5c0(0x804A9);
        }
        t17 = *(int *)0xC2A11CC;
        if (((t17 & 0x40) == 0) && ((t18 = *(int *)0xC2A11D4, t18 != 0) || (t19 = *(int *)0xC2A11D0, (t19 & 0x40) == 0))) {
        } else {
            t20 = *(int *)0xC2A1250;
            *(unsigned int *)0xC2A1250 = (t20 + 0x1);
            if ((int)(t20 + 0x1) >= (int)0x3) {
                *(unsigned int *)0xC2A1250 = 0x0;
            }
            t22 = *(int *)0xC2A1250;
            t23 = *(signed char *)((0xC2A1248 + t22));
            t24 = char2num(t23);
            *(unsigned int *)0xC2A1254 = t24;
            FUN_0c07f5c0(0x804A9);
        }
        t30 = *(int *)0xC2A11CC;
        if (((t30 & 0x8) == 0) && ((t31 = *(int *)0xC2A11D4, t31 != 0) || (t32 = *(int *)0xC2A11D0, (t32 & 0x8) == 0))) {
            if (((t30 & 0x10) == 0) && ((t39 = *(int *)0xC2A11D4, t39 != 0) || (t40 = *(int *)0xC2A11D0, (t40 & 0x10) == 0))) {
            } else {
                t41 = *(int *)0xC2A1254;
                *(unsigned int *)0xC2A1254 = (t41 - 1);
                if ((int)(t41 - 1) < 0) {
                    *(unsigned int *)0xC2A1254 = 0x2A;
                }
                FUN_0c07f5c0(0x504A9);
            }
        } else {
            t51 = *(int *)0xC2A1254;
            *(unsigned int *)0xC2A1254 = (t51 + 0x1);
            if ((int)(t51 + 0x1) > (int)0x2A) {
                *(unsigned int *)0xC2A1254 = 0x0;
            }
            FUN_0c07f5c0(0x504A9);
        }
        t62 = *(int *)0xC2A1250;
        t63 = *(int *)0xC2A1254;
        t64 = num2char(t63);
        *(unsigned char *)(((t62 + 0xC2A1248) + 0x0)) = t64;
        PutVM_Message(0x20, 0x14, 0x0, 235.0f, 208.0f);
        PutStringFixPfont(0x26, 0xC2A1248, 320.0f, 260.0f, 32.0f, 1.0f);
        t67 = 0xC041364;
        t71 = 0x0;
        u73 = f4;
        for (;;) {
            if ((int)t71 >= (int)0x3) {
                break;
            }
            t69 = t71;
            t69 = (t69 - 1);
            t69 = (t69 << 2);
            t70 = 0x140;
            t69 = (t69 << 2);
            t69 = (t69 << 1);
            t69 = (t69 + t70);
            t74 = *(int *)0xC2A1250;
            t75 = t69;
            t69 = t74;
            u72 = (float)t75;
            u73 = u72;
            if (t71 == t69) {
                t68 = 0xC1EE330;
                t77 = *(int *)((t68 + 0x0));
                t67 = t77;
                if ((t67 & 0x10) != 0) {
                    t69 = 0xC03B324;
                    t78 = putString(0x46, 0xC0A2150, u73, 276.0f, 1.0f);
                    t67 = t78;
                } else {
                    t79 = t68;
                    t80 = t69;
                    t81 = t70;
                    u82 = u72;
                    u83 = u73;
                }
                t86 = t79;
                t87 = t80;
                t88 = t81;
                u89 = u82;
                u90 = u83;
            } else {
                t85 = putString(0x26, 0xC0A2150, u73, 276.0f, 1.0f);
                t67 = t85;
            }
            u72 = u89;
            u73 = u90;
            t68 = t86;
            t71 = (t71 + 0x1);
            t69 = t87;
            t70 = t88;
        }
        t92 = t67;
    }
    return t92;
}
