/* Straight-line functions with calls and guards (batch gen_mq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdc_FadeManStreamSong(void);
int gdc_FadeStopStreamSong(int, int);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPutSEGALogo(void);
int pfPuts(int);
int pfSize(float, float);
int ExecEndRoll(void);

int ExecEndRoll(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t10;
    int t11;
    int t12;
    int t13;
    float u18;
    int t26;
    int t3;
    int t25;
    int t35;
    int t43;
    int t54;
    int t55;

    t0 = *(int *)0xC1EE33C;
    *(unsigned int *)0xC2864E0 = t0;
    t1 = 0xC03A4F4;
    t2 = t0;
    t4 = 0x0;
    for (;;) {
        if ((unsigned int)t4 >= (unsigned int)0x87) {
            break;
        }
        t3 = t4;
        t3 = (t3 << 1);
        t2 = t4;
        t3 = (t3 + t2);
        t3 = (t3 << 2);
        t2 = 0x28A;
        t3 = (t3 << 1);
        t3 = (t3 - (*(int *)0xC2864E0));
        t3 = (t3 + t2);
        if (((int)t3 > (int)0xFFFFFFE8) && (t1 = 0x1E0, (int)t3 < (int)t1)) {
            t2 = 0xC030FA2;
            t1 = (pfLocate(330.0f, (float)t3));
            t1 = t4;
            t1 = (t1 << 2);
            t1 = (*(int *)((0xC0EEA20 + t1)));
            t1 = (*(signed char *)((t1 + 0x0)));
            t10 = 0xFFFFFF00;
            t11 = 0xFFFFFF00;
            t12 = 0xFFFFFF00;
            t13 = 0xFFFFFF00;
            if (t1 == 32) {
                t10 = 0xFFFFFFFF;
                t11 = 0xFFFFFFFF;
                t12 = 0xFFFFFFFF;
                t13 = 0xFFFFFFFF;
            }
            t1 = (pfColor(t10, t11, t12, t13));
            t1 = t4;
            if (t1 == 53) {
                t1 = (pfSize(0.789999962f, 1.0f));
            } else {
                t2 = 0x85;
                u18 = 1.0f;
                if (t4 == t2) {
                    u18 = 0.939999998f;
                }
                t1 = (pfSize(u18, 1.0f));
            }
            t1 = t4;
            t2 = 0xC031390;
            t1 = (t1 << 2);
            t1 = (pfPuts((*(int *)((0xC0EEA20 + t1)))));
        } else {
            t25 = t2;
        }
        t4 = (t4 + 0x1);
        t2 = t25;
    }
    t26 = *(int *)0xC2864E0;
    if (((int)(0xF2A - t26) <= (int)0xFFFFFFC0) && ((int)(0xF2A - t26) >= (int)0x1E0)) {
    } else {
        pfLocate(330.0f, (float)(0xF2A - t26));
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfPutSEGALogo();
    }
    if (((int)(*(int *)0xC2864E0) >= (int)0xD8E) && (t35 = *(int *)0xC2864E4, t35 == 2)) {
        Voice_ShutUp(0x0);
        Voice_Request(0xC0EEC40, 0x0, 0x7F, 0x0);
        *(unsigned int *)0xC2864E4 = 0x1;
    }
    if (((int)(*(int *)0xC2864E0) >= (int)0xE10) && (t43 = *(int *)0xC2864E4, t43 != 0)) {
        gdc_FadeStopStreamSong(0x0, 0x104);
        *(unsigned int *)0xC2864E4 = 0x0;
    }
    if (((*(int *)0xC1EE250) & 8) != 0) {
        *(unsigned int *)0xC2864E0 = 0x2710;
    }
    if ((int)(*(int *)0xC2864E0) >= (int)0xFB4) {
        *(unsigned int *)0xC2A4E50 = 0x0;
        if (((GetMenuMode(0x1)) == 0) && ((t54 = *(int *)0xC1EE340, (int)t54 <= (int)0x14) && (t55 = *(int *)0xC17948C, t55 == 0))) {
            *(unsigned int *)0xC1EE238 = 0xE;
        } else {
            *(unsigned int *)0xC1EE238 = 0x2;
        }
    }
    return gdc_FadeManStreamSong();
}
