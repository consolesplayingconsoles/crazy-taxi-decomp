/* Straight-line functions with calls and guards (batch gen_qf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecArrow(int, float);
int InitArrow(int);
int ResetFadeColor(void);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int Exec_Bowling_Arrow(void);

int Exec_Bowling_Arrow(void)
{
    float u0;
    float u1;
    int t2;
    float u11;
    float u12;
    float u21;
    float u22;
    float u31;
    float u32;
    float u41;
    float u42;
    float u51;
    float u52;
    int t111;
    float t112;

    u0 = *(float *)0xC1313C0;
    u1 = *(float *)0xC17914C;
    t2 = *(int *)0xC2A9954;
    if (u1 > u0) {
        if ((int)t2 < (int)0x6) {
            *(unsigned int *)0xC2A9954 = 0x6;
            InitArrow(0xC1313C4);
        }
    } else {
        u11 = *(float *)0xC1313B4;
        u12 = *(float *)0xC17914C;
        if (u12 > u11) {
            if ((int)t2 < (int)0x5) {
                *(unsigned int *)0xC2A9954 = 0x5;
                InitArrow(0xC1313B8);
            }
        } else {
            u21 = *(float *)0xC1313A8;
            u22 = *(float *)0xC17914C;
            if (u22 > u21) {
                if ((int)t2 < (int)0x4) {
                    *(unsigned int *)0xC2A9954 = 0x4;
                    InitArrow(0xC1313AC);
                }
            } else {
                u31 = *(float *)0xC13139C;
                u32 = *(float *)0xC17914C;
                if (u32 > u31) {
                    if ((int)t2 < (int)0x3) {
                        *(unsigned int *)0xC2A9954 = 0x3;
                        InitArrow(0xC1313A0);
                    }
                } else {
                    u41 = *(float *)0xC131390;
                    u42 = *(float *)0xC17914C;
                    if (u42 > u41) {
                        if ((int)t2 < (int)0x2) {
                            *(unsigned int *)0xC2A9954 = 0x2;
                            InitArrow(0xC131394);
                        }
                    } else {
                        u51 = *(float *)0xC131384;
                        u52 = *(float *)0xC17914C;
                        if (u52 > u51) {
                            if ((int)t2 < (int)0x1) {
                                *(unsigned int *)0xC2A9954 = 0x1;
                                InitArrow(0xC131388);
                            }
                        } else {
                            if ((int)t2 < 0) {
                                *(unsigned int *)0xC2A9954 = 0x0;
                                InitArrow(0xC13137C);
                            }
                        }
                    }
                }
            }
        }
    }
    t111 = *(int *)0xC2A9954;
    t112 = nlLength(0xC179144, ((signed char)(((t111 << 1) + t111) << 2) + 0xC13137C));
    nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
    ExecArrow(0x1, t112);
    return ResetFadeColor();
}
