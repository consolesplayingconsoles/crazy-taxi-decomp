/* Straight-line functions with calls and guards (batch gen_hw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int FUN_0c05614e(void);

int FUN_0c05614e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t11;
    float u12;
    float u13;
    int t14;
    int t15;
    float u25;
    float u26;
    int t32;
    int t33;
    int t34;
    int t35;
    float u36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t45;
    int t46;
    int t47;
    int t48;
    float u77;
    float u78;
    float u79;
    float u80;
    float u81;
    float u82;
    float u83;
    float u84;
    float u85;
    float u86;
    float u87;
    float u88;
    int t89;
    float u99;
    float u100;
    float u101;
    float u102;
    int t104;
    int t9;
    int t42;
    int t43;

    t0 = *(int *)0xC2A9178;
    if (t0 == 0) {
    } else {
        if (t0 == 6) {
        } else {
            t1 = *(int *)0xC2A8F80;
            if (t1 == 8) {
                t2 = *(int *)0xC2A8F7C;
                t3 = *(int *)(((t2 << 2) + 0xC130D00));
                t9 = t3;
            } else {
                t4 = *(int *)0xC2A8F7C;
                t5 = *(int *)(((t4 << 2) + 0xC130CD8));
                t9 = t5;
            }
            *(unsigned int *)0xC2A80BC = t9;
            t11 = *(int *)0xC2A9178;
            if (t11 != 1) {
                if (t11 == 5) {
                    *(unsigned int *)0xC2A80F0 = 0x6;
                    u12 = *(float *)0xC2A9174;
                    *(float *)0xC2A80D8 = (1.0f - (u12 * 0.5f));
                    *(float *)0xC2A80E0 = 1.0f;
                    u13 = *(float *)0xC2A9174;
                    *(float *)0xC2A80D0 = (u13 * 0.5f);
                    *(float *)0xC2A80C0 = 564.0f;
                    *(float *)0xC2A80C4 = 200.0f;
                } else {
                    *(unsigned int *)0xC2A80F0 = 0xE;
                    *(float *)0xC2A80D8 = 0.0f;
                    t14 = *(int *)0xC2A8F84;
                    if (t14 == 0) {
                        t15 = *(int *)0xC2A8F90;
                        *(float *)0xC2A80E0 = (1.0f - ((float)t15 * 0.25f));
                        *(float *)0xC2A80D0 = (1.0f - ((float)t15 * 0.25f));
                    } else {
                        *(float *)0xC2A80E0 = 1.0f;
                        *(float *)0xC2A80D0 = 1.0f;
                    }
                    *(float *)0xC2A80C0 = 564.0f;
                    *(float *)0xC2A80C4 = 264.0f;
                }
            } else {
                *(unsigned int *)0xC2A80F0 = 0x6;
                u25 = *(float *)0xC2A9174;
                *(float *)0xC2A80D8 = (1.0f - (u25 * 0.5f));
                *(float *)0xC2A80E0 = 1.0f;
                u26 = *(float *)0xC2A9174;
                *(float *)0xC2A80D0 = (u26 * 0.5f);
                *(float *)0xC2A80C0 = 564.0f;
                *(float *)0xC2A80C4 = 200.0f;
            }
            *(unsigned int *)0xC2A80E4 = 0x0;
            t32 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
            t33 = *(int *)0xC2A9178;
            if (t33 != 1) {
                t34 = *(int *)0xC2A9178;
                if (t34 != 5) {
                    t35 = *(int *)0xC2A8F84;
                    if (t35 == 0) {
                        u36 = *(float *)0xC2A80C4;
                        *(float *)0xC2A80C4 = (u36 - 64.0f);
                        t37 = *(int *)0xC2A8F80;
                        if (t37 == 8) {
                            t38 = *(int *)0xC2A8F7C;
                            t39 = (int)((int)(t38 + 0x1) % (int)0xA);
                            t42 = (t39 << 2);
                            t43 = 0xC130D00;
                        } else {
                            t40 = *(int *)0xC2A8F7C;
                            t41 = (int)((int)(t40 + 0x1) % (int)0xA);
                            t42 = (t41 << 2);
                            t43 = 0xC130CD8;
                        }
                        t45 = *(int *)((t43 + t42));
                        *(unsigned int *)0xC2A80BC = t45;
                        *(unsigned int *)0xC2A80F0 = 0x6;
                        t46 = *(int *)0xC2A8F90;
                        *(float *)0xC2A80D0 = ((float)t46 * 0.25f);
                        t47 = *(int *)0xC2A8F90;
                        *(float *)0xC2A80D8 = (1.0f - ((float)t47 * 0.25f));
                        *(float *)0xC2A80E0 = 1.0f;
                        t48 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, 0xA);
                    }
                }
            }
        }
    }
    *(unsigned int *)0xC2A80BC = 0x128;
    u77 = *(float *)0xC05641C;
    *(float *)0xC2A80C0 = u77;
    u78 = *(float *)0xC056420;
    u79 = *(float *)0xC2A9174;
    u80 = *(float *)0xC056424;
    u81 = u78;
    u81 = u81 + u80 * u79;
    *(float *)0xC2A80C4 = u81;
    u82 = *(float *)0xC056428;
    *(float *)0xC2A80C8 = u82;
    u83 = *(float *)0xC05642C;
    *(float *)0xC2A80CC = u83;
    u84 = *(float *)0xC2A9174;
    *(float *)0xC2A80D0 = (u84 * (1.0f + 1.0f));
    u85 = *(float *)0xC2A9174;
    *(float *)0xC2A80D8 = (1.0f - (u85 * 0.5f));
    *(float *)0xC2A80E0 = 1.0f;
    u86 = *(float *)0xC056430;
    *(float *)0xC2A80E8 = u86;
    *(unsigned int *)0xC2A80F0 = 0x200E;
    *(unsigned int *)0xC2A80E4 = 0x0;
    u87 = *(float *)0xC056434;
    u88 = *(float *)0xC2A9174;
    if (!(u87 > u88)) {
        t89 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    }
    *(float *)0xC2A80C4 = 200.0f;
    u99 = *(float *)0xC2A9174;
    u100 = *(float *)0xC056438;
    *(float *)0xC2A80D0 = (u99 * u100);
    u101 = *(float *)0xC05643C;
    u102 = *(float *)0xC2A80D0;
    if (u102 > u101) {
        *(float *)0xC2A80D0 = u101;
    }
    *(unsigned int *)0xC2A80E4 = 0x8000;
    t104 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    *(unsigned int *)0xC2A80E4 = 0x0;
    return t104;
}
