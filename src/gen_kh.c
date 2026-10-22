/* Straight-line functions with calls and guards (batch gen_kh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int num2char(int);
int CheckXWord(int);
int CheckNameEntryPad(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int pfAddNumber(int);
int pfCleanString(void);
int pfLocate(float, float);
int pfPuts(int);
int ExecNameEntrySelect(void);

int ExecNameEntrySelect(void)
{
    int t1;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t38;
    int t39;
    int t60;
    int t40;
    int t41;
    int t44;
    int t42;
    int t43;
    int t51;
    int t52;
    int t67;
    int t86;
    int t68;
    int t69;
    int t71;
    int t70;
    int t78;
    int t101;
    int t102;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t116;
    int t117;
    int t123;
    int t124;
    int t138;
    int t150;
    int t139;
    int t143;
    int t142;
    int t130;
    int t93;
    int t53;
    int t79;
    int t125;

    CheckNameEntryPad();
    t1 = *(int *)0xC2864C4;
    *(unsigned int *)0xC2864C4 = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)0xC2864C4 = 0x0;
        *(unsigned int *)0xC2864B4 = 0x0;
        *(unsigned int *)0xC2864B0 = 0x0;
    }
    pfLocate(560.0f, 420.0f);
    pfCleanString();
    t6 = *(int *)0xC2864C4;
    t7 = (int)((int)t6 / (int)0x3C);
    pfAddNumber(t7);
    t9 = *(int *)0xC08D678;
    t10 = pfPuts(t9);
    t11 = *(int *)0xC2864A8;
    if (t11 == 0) {
        t12 = *(int *)0xC2864B0;
        if (t12 != 0) {
            t13 = *(int *)0xC2864A0;
            if (t13 == 44) {
                *(unsigned int *)0xC2864C4 = 0x0;
            } else {
                t14 = *(int *)0xC2864A0;
                if (t14 == 43) {
                    t15 = *(int *)0xC2864C8;
                    *(unsigned int *)0xC2864C8 = (t15 - 1);
                    if ((int)(t15 - 1) < 0) {
                        *(unsigned int *)0xC2864C8 = 0x0;
                    }
                    t17 = *(int *)0xC2864C8;
                    *(unsigned char *)((0xC2864D0 + t17)) = 0x0;
                } else {
                    t18 = *(int *)0xC2864C8;
                    *(unsigned int *)0xC2864C8 = (t18 + 0x1);
                    t19 = *(int *)0xC2864A0;
                    t20 = num2char(t19);
                    *(unsigned char *)(((((t18 + 0x1) - 1) + 0xC2864D0) + 0x0)) = t20;
                    t21 = *(int *)0xC2864C8;
                    if ((int)t21 >= (int)0x3) {
                        *(unsigned int *)0xC2864AC = 0x1;
                        *(unsigned int *)0xC2864A8 = 0x1;
                    }
                }
            }
            t38 = Sound_Request(0x405A9, 0x0);
            *(unsigned int *)0xC2864CC = 0xC03A07C;
            t93 = t38;
        } else {
            t39 = *(int *)0xC2864B4;
            t60 = t10;
            if ((int)t39 > 0) {
                t40 = *(int *)0xC2864C8;
                if ((int)t40 >= (int)0x3) {
                    t41 = *(int *)0xC2864A0;
                    t44 = t41;
                    if (t41 != 44) {
                        *(unsigned int *)0xC2864A8 = (-t39);
                        *(unsigned int *)0xC2864A4 = 0x10;
                        t42 = *(int *)0xC2864A0;
                        *(unsigned int *)0xC2864A0 = (t42 + 0x1);
                        t43 = Sound_Request(0x304A9, 0x0);
                        t44 = t43;
                    }
                    t53 = t44;
                } else {
                    *(unsigned int *)0xC2864A8 = (-t39);
                    *(unsigned int *)0xC2864A4 = 0x10;
                    t51 = *(int *)0xC2864A0;
                    *(unsigned int *)0xC2864A0 = (t51 + 0x1);
                    t52 = Sound_Request(0x304A9, 0x0);
                    t53 = t52;
                }
                t60 = t53;
            }
            t67 = *(int *)0xC2864B4;
            t86 = t60;
            if ((int)t67 < 0) {
                t68 = *(int *)0xC2864C8;
                if ((int)t68 >= (int)0x3) {
                    t69 = *(int *)0xC2864A0;
                    t71 = t69;
                    if (t69 != 43) {
                        *(unsigned int *)0xC2864A8 = (-t67);
                        t70 = Sound_Request(0x304A9, 0x0);
                        t71 = t70;
                    }
                    t79 = t71;
                } else {
                    *(unsigned int *)0xC2864A8 = (-t67);
                    t78 = Sound_Request(0x304A9, 0x0);
                    t79 = t78;
                }
                t86 = t79;
            }
            t93 = t86;
        }
        t130 = t93;
    } else {
        t101 = *(int *)0xC2864AC;
        if (t101 != 0) {
            t102 = *(int *)0xC2864A0;
            *(unsigned int *)0xC2864A0 = (t102 + 0x1);
            if ((t102 + 0x1) == 44) {
                *(unsigned int *)0xC2864AC = 0x0;
                *(unsigned int *)0xC2864A8 = 0x0;
            }
            t105 = Sound_Request(0x304A9, 0x0);
            t125 = t105;
        } else {
            t106 = *(int *)0xC2864A4;
            t107 = *(int *)0xC2864A8;
            *(unsigned int *)0xC2864A4 = (t106 + t107);
            if ((int)(t106 + t107) > 0) {
                t108 = *(int *)0xC2864A4;
                if ((int)t108 >= (int)0x10) {
                    *(unsigned int *)0xC2864A4 = 0x0;
                    t109 = *(int *)0xC2864A8;
                    if ((int)t109 > 0) {
                        t110 = *(int *)0xC2864A0;
                        *(unsigned int *)0xC2864A0 = (t110 - 1);
                    }
                    *(unsigned int *)0xC2864A8 = 0x0;
                }
            } else {
                *(unsigned int *)0xC2864A4 = 0x0;
                t116 = *(int *)0xC2864A8;
                if ((int)t116 > 0) {
                    t117 = *(int *)0xC2864A0;
                    *(unsigned int *)0xC2864A0 = (t117 - 1);
                }
                *(unsigned int *)0xC2864A8 = 0x0;
            }
            t123 = *(int *)0xC2864A0;
            t124 = (int)((unsigned int)(t123 + 0x2D) % (unsigned int)0x2D);
            *(unsigned int *)0xC2864A0 = t124;
            t125 = t124;
        }
        t130 = t125;
    }
    t138 = *(int *)0xC2864C4;
    t150 = t130;
    if ((int)t138 <= 0) {
        t139 = *(int *)0xC2864A8;
        t143 = t130;
        if (t139 == 0) {
            CheckXWord(0xC2864D0);
            Voice_ShutUp(0x0);
            t142 = Voice_Request(0xC0EE9F0, 0x0, 0x7F, 0x0);
            *(unsigned int *)0xC2864CC = 0xC03A120;
            *(unsigned int *)0xC2864C4 = 0xE6;
            t143 = t142;
        }
        t150 = t143;
    }
    return t150;
}
