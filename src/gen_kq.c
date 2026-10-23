/* Straight-line functions with calls and guards (batch gen_kq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndPuru2Start(int, int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
float nlScalor(int, float);
int nlSubVector3op(int, int, int);
int carLoadTransfer(int a4);

int carLoadTransfer(int a4)
{
    float t14;
    int t17;
    int t15;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u34;
    float u57;
    float u58;
    float u59;
    float u60;
    float u62;
    int t64;
    float u66;
    float u67;
    float u71;
    float u73;
    float u77;
    float u79;
    int t80;
    int t81;
    float u82;
    float u113;
    float u124;
    float u115;
    float u117;
    float u119;
    float u120;
    float u12;
    int t87;
    int t89;
    float u110;
    int stk[14];

    nlPushMatrix(0x0);
    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0x86)))));
    nlSubVector3op((((int)stk + 4) + 0xC), (0xFC + a4), (0x108 + a4));
    nlCalcVector((((int)stk + 4) + 0xC), ((int)stk + 4));
    nlPopMatrix(0x1);
    if (((*(int *)((a4 + 0x20))) & 0x801F7FFE) != 0) {
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) * 0.194999993f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * 0.194999993f);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * 0.194999993f);
        u12 = 0.194999993f;
    }
    t14 = nlScalor((((int)stk + 4) + 0xC), u12);
    if (t14 > 0.5f) {
        t17 = 0x3;
        if (1.0f > t14) {
        } else {
            t15 = 0x7;
            if (1.5f > t14) {
                t15 = 0x5;
            }
            t17 = t15;
        }
        ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x10000000, t17);
    }
    u28 = *(float *)((a4 + 0x144));
    u29 = ((*(float *)((a4 + 0x128))) * (*(float *)(((int)stk + 12))));
    u30 = *(float *)((a4 + 0x134));
    u31 = *(float *)((a4 + 0x130));
    u32 = ((u29 * u28) / (u31 + u30));
    if (((u29 * u28) / (u31 + u30)) > 120.0f) {
        u32 = 120.0f;
    }
    u34 = u32;
    if (-180.0f > u32) {
        u34 = -180.0f;
    }
    if (!(0.0f > u34)) {
        *(float *)((a4 + 0x138)) = ((((*(float *)((a4 + 0x134))) * (u34 / (*(float *)((a4 + 0x128)))))) * 1.0f);
        if ((*(float *)((a4 + 0x138))) > ((*(float *)((a4 + 0x134))) * 0.549999952f)) {
            *(float *)((a4 + 0x138)) = ((*(float *)((a4 + 0x134))) * 0.549999952f);
        }
    } else {
        *(float *)((a4 + 0x138)) = ((((*(float *)((a4 + 0x130))) * (u34 / (*(float *)((a4 + 0x128)))))) * 1.0f);
        if ((-((*(float *)((a4 + 0x130))) * 0.549999952f)) > (*(float *)((a4 + 0x138)))) {
            *(float *)((a4 + 0x138)) = (-((*(float *)((a4 + 0x130))) * 0.549999952f));
        }
    }
    u57 = *(float *)((a4 + 0x144));
    u58 = ((*(float *)((a4 + 0x128))) * (*(float *)(((int)stk + 4))));
    u59 = *(float *)((a4 + 0x140));
    u60 = ((u58 * u57) / u59);
    if (((u58 * u57) / u59) > 180.0f) {
        u60 = 180.0f;
    }
    u62 = u60;
    if (-180.0f > u60) {
        u62 = -180.0f;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x108 + a4)) = *(struct mv3 *)((0xFC + a4)); }
    t64 = *(int *)((a4 + 0x54));
    u66 = 0.0f;
    u67 = 0.0f;
    if ((t64 != 0) && (t64 != 3)) {
        u66 = u34;
        u67 = u62;
    }
    *(float *)(((0x1A0 + a4) + 0x8)) = ((((*(float *)((a4 + 0x128))) * 0.25f) - (u66 * 1.5f)) - (u67 * 0.399999976f));
    *(float *)(((0x84 + (0x1A0 + a4)) + 0x8)) = ((((*(float *)((a4 + 0x128))) * 0.25f) - (u66 * 1.5f)) + (u67 * 0.399999976f));
    u71 = (u66 * 1.5f);
    u71 = u71 + 0.25f * (*(float *)((a4 + 0x128)));
    *(float *)(((0x108 + (0x1A0 + a4)) + 0x8)) = (u71 - (u67 * 0.399999976f));
    u73 = (u66 * 1.5f);
    u73 = u73 + 0.25f * (*(float *)((a4 + 0x128)));
    *(float *)(((0x18C + (0x1A0 + a4)) + 0x8)) = (u73 + (u67 * 0.399999976f));
    *(float *)(((0x1A0 + a4) + 0x10)) = ((((*(float *)((a4 + 0x128))) * 0.25f) - (u66 * 0.889999986f)) - (u67 * 0.099999994f));
    *(float *)(((0x84 + (0x1A0 + a4)) + 0x10)) = ((((*(float *)((a4 + 0x128))) * 0.25f) - (u66 * 0.889999986f)) + (u67 * 0.099999994f));
    u77 = (u66 * 0.889999986f);
    u77 = u77 + 0.25f * (*(float *)((a4 + 0x128)));
    *(float *)(((0x108 + (0x1A0 + a4)) + 0x10)) = (u77 - (u67 * 0.099999994f));
    u79 = (u66 * 0.889999986f);
    u79 = u79 + 0.25f * (*(float *)((a4 + 0x128)));
    *(float *)(((0x18C + (0x1A0 + a4)) + 0x10)) = (u79 + (u67 * 0.099999994f));
    *(float *)((a4 + 0x194)) = 0.0f;
    t80 = 0x0;
    t81 = (0x1A0 + a4);
    u82 = u67;
    for (;;) {
        *(float *)((t81 + 0x8)) = ((*(float *)((t81 + 0x8))) + (*(float *)(((0xC + t81) + 0x0))));
        *(float *)((t81 + 0xC)) = 0.0f;
        if ((int)t80 < (int)0x2) {
            t87 = 0x184;
            t89 = (0xC08A8EC + ((*(int *)((t81 + 0x0))) << 2));
        } else {
            t87 = 0x190;
            t89 = (0xC08A8EC + ((*(int *)((t81 + 0x0))) << 2));
        }
        *(float *)((t81 + 0x28)) = ((*(float *)((t89 + 0x4))) * (*(float *)((a4 + t87))));
        *(float *)((a4 + 0x194)) = ((*(float *)((a4 + 0x194))) + (*(float *)(((0x28 + t81) + 0x0))));
        *(float *)((t81 + 0x2C)) = ((((*(float *)(((((*(int *)((t81 + 0x0))) << 2) + 0xC08A94C) + 0x4))) * (*(float *)((t81 + 0x10))))) * (*(float *)((a4 + 0x12C))));
        if ((int)t80 < (int)0x2) {
            u110 = ((((((*(float *)((t81 + 0x28))) * (*(float *)((t81 + 0x10))))) * (*(float *)((a4 + 0x12C))))) * 0.177499995f);
        } else {
            u110 = ((((((*(float *)((t81 + 0x28))) * (*(float *)((t81 + 0x10))))) * (*(float *)((a4 + 0x12C))))) * 0.198799968f);
        }
        *(float *)((t81 + 0x14)) = u110;
        u113 = *(float *)((a4 + 0x15C));
        u124 = _builtin_fabsf(u113);
        if (_builtin_fabsf(u113) > 11.0f) {
            u115 = *(float *)((t81 + 0x2C));
            u82 = _builtin_fabsf((*(float *)((a4 + 0x15C))));
            u82 = (u82 / 11.0f);
            u117 = (((u82 * u82)) * u82);
            u82 = 11.0f;
            *(float *)((t81 + 0x2C)) = (u115 * u117);
            u119 = *(float *)((t81 + 0x14));
            u82 = (u82 / _builtin_fabsf((*(float *)((a4 + 0x15C)))));
            u120 = (u82 * u82);
            *(float *)((t81 + 0x14)) = (u119 * ((u120 * u82)));
            u124 = (u120 * u82);
        }
        t80 = (t80 + 0x1);
        t81 = (t81 + 0x84);
        if ((int)t80 < (int)0x4) continue;
        break;
    }
    *(float *)((a4 + 0x194)) = ((*(float *)((a4 + 0x194))) * 0.25f);
    return 0x194;
}
