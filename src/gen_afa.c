/* Straight-line functions with calls and guards (batch gen_afa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckNameEntryPad(void);
int CheckXWord(int);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int num2char(int);
int pfAddNumber(int);
int pfCleanString(void);
int pfLocate(float, float);
int pfPuts(int);
int ExecNameEntrySelect(void);

int ExecNameEntrySelect(void)
{
    int t1;
    int t10;
    int t28;
    int t31;
    int t51;
    int t52;
    int t65;
    int t71;
    int t83;
    int t97;
    int t101;
    int t102;
    int t111;
    int t129;
    int t128;
    int t117;
    int t89;
    int t56;
    int t59;
    int t75;
    int t77;
    int t112;
    int t103;
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
    pfAddNumber(((int)((int)(*(int *)0xC2864C4) / (int)0x3C)));
    t10 = pfPuts((*(int *)0xC08D678));
    if ((*(int *)0xC2864A8) == 0) {
        if ((*(int *)0xC2864B0) != 0) {
            if ((*(int *)0xC2864A0) == 44) {
                *(unsigned int *)0xC2864C4 = 0x0;
            } else {
                if ((*(int *)0xC2864A0) == 43) {
                    t28 = *(int *)0xC2864C8;
                    *(unsigned int *)0xC2864C8 = (t28 - 1);
                    if ((int)(t28 - 1) < 0) {
                        *(unsigned int *)0xC2864C8 = 0x0;
                    }
                    *(unsigned char *)((0xC2864D0 + (*(int *)0xC2864C8))) = 0x0;
                } else {
                    t31 = *(int *)0xC2864C8;
                    *(unsigned int *)0xC2864C8 = (t31 + 0x1);
                    *(unsigned char *)(((((t31 + 0x1) - 1) + 0xC2864D0) + 0x0)) = (num2char((*(int *)0xC2864A0)));
                    if ((int)(*(int *)0xC2864C8) >= (int)0x3) {
                        *(unsigned int *)0xC2864AC = 0x1;
                        *(unsigned int *)0xC2864A8 = 0x1;
                    }
                }
            }
            t51 = Sound_Request(0x405A9, 0x0);
            *(unsigned int *)0xC2864CC = 0xC03A07C;
            t89 = t51;
        } else {
            t52 = *(int *)0xC2864B4;
            t65 = t10;
            if ((int)t52 > 0) {
                if (((int)(*(int *)0xC2864C8) >= (int)0x3) && (t56 = *(int *)0xC2864A0, t56 == 44)) {
                    t59 = t56;
                } else {
                    *(unsigned int *)0xC2864A8 = (-t52);
                    *(unsigned int *)0xC2864A4 = 0x10;
                    *(unsigned int *)0xC2864A0 = ((*(int *)0xC2864A0) + 0x1);
                    t59 = (Sound_Request(0x304A9, 0x0));
                }
                t65 = t59;
            }
            t71 = *(int *)0xC2864B4;
            t83 = t65;
            if ((int)t71 < 0) {
                if (((int)(*(int *)0xC2864C8) >= (int)0x3) && (t75 = *(int *)0xC2864A0, t75 == 43)) {
                    t77 = t75;
                } else {
                    *(unsigned int *)0xC2864A8 = (-t71);
                    t77 = (Sound_Request(0x304A9, 0x0));
                }
                t83 = t77;
            }
            t89 = t83;
        }
        t117 = t89;
    } else {
        if ((*(int *)0xC2864AC) != 0) {
            t97 = *(int *)0xC2864A0;
            *(unsigned int *)0xC2864A0 = (t97 + 0x1);
            if ((t97 + 0x1) == 44) {
                *(unsigned int *)0xC2864AC = 0x0;
                *(unsigned int *)0xC2864A8 = 0x0;
            }
            t112 = (Sound_Request(0x304A9, 0x0));
        } else {
            t101 = *(int *)0xC2864A4;
            t102 = *(int *)0xC2864A8;
            *(unsigned int *)0xC2864A4 = (t101 + t102);
            if (((int)(t101 + t102) > 0) && (t103 = *(int *)0xC2864A4, (int)t103 < (int)0x10)) {
            } else {
                *(unsigned int *)0xC2864A4 = 0x0;
                if ((int)(*(int *)0xC2864A8) > 0) {
                    *(unsigned int *)0xC2864A0 = ((*(int *)0xC2864A0) - 1);
                }
                *(unsigned int *)0xC2864A8 = 0x0;
            }
            t111 = (int)((unsigned int)((*(int *)0xC2864A0) + 0x2D) % (unsigned int)0x2D);
            *(unsigned int *)0xC2864A0 = t111;
            t112 = t111;
        }
        t117 = t112;
    }
    t129 = t117;
    if (((int)(*(int *)0xC2864C4) <= 0) && (t125 = *(int *)0xC2864A8, t125 == 0)) {
        CheckXWord(0xC2864D0);
        Voice_ShutUp(0x0);
        t128 = Voice_Request(0xC0EE9F0, 0x0, 0x7F, 0x0);
        *(unsigned int *)0xC2864CC = 0xC03A120;
        *(unsigned int *)0xC2864C4 = 0xE6;
        t129 = t128;
    }
    return t129;
}
