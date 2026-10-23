/* Straight-line functions with calls and guards (batch gen_anz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecArrow(int, float);
int InitArrow(int);
int ResetFadeColor(void);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int Exec_Bowling_Arrow(void);

int Exec_Bowling_Arrow(void)
{
    int t2;
    int t141;
    float t142;

    t2 = *(int *)0xC2A9954;
    if ((*(float *)0xC17914C) > (*(float *)0xC1313C0)) {
        if ((int)t2 < (int)0x6) {
            *(unsigned int *)0xC2A9954 = 0x6;
            InitArrow(0xC1313C4);
        }
    } else {
        if ((*(float *)0xC17914C) > (*(float *)0xC1313B4)) {
            if ((int)t2 < (int)0x5) {
                *(unsigned int *)0xC2A9954 = 0x5;
                InitArrow(0xC1313B8);
            }
        } else {
            if ((*(float *)0xC17914C) > (*(float *)0xC1313A8)) {
                if ((int)t2 < (int)0x4) {
                    *(unsigned int *)0xC2A9954 = 0x4;
                    InitArrow(0xC1313AC);
                }
            } else {
                if ((*(float *)0xC17914C) > (*(float *)0xC13139C)) {
                    if ((int)t2 < (int)0x3) {
                        *(unsigned int *)0xC2A9954 = 0x3;
                        InitArrow(0xC1313A0);
                    }
                } else {
                    if ((*(float *)0xC17914C) > (*(float *)0xC131390)) {
                        if ((int)t2 < (int)0x2) {
                            *(unsigned int *)0xC2A9954 = 0x2;
                            InitArrow(0xC131394);
                        }
                    } else {
                        if ((*(float *)0xC17914C) > (*(float *)0xC131384)) {
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
    t141 = *(int *)0xC2A9954;
    t142 = nlLength(0xC179144, ((signed char)(((t141 << 1) + t141) << 2) + 0xC13137C));
    nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
    ExecArrow(0x1, t142);
    return ResetFadeColor();
}
