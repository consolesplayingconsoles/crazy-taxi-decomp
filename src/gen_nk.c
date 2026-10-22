/* Straight-line functions with calls and guards (batch gen_nk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int ndPuru2Start(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int FUN_0c021244(int a4);

int FUN_0c021244(int a4)
{
    int t1;
    int t6;
    float u7;
    float u8;
    float u9;
    float t14;
    int t17;
    int t15;
    int t19;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u34;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u44;
    float u45;
    float u46;
    float u47;
    float u48;
    float u49;
    float u55;
    float u56;
    float u57;
    float u58;
    float u59;
    float u60;
    float u62;
    int t64;
    float u69;
    float u70;
    float u65;
    float u66;
    float u72;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    float u78;
    float u79;
    float u80;
    float u81;
    float u82;
    float u83;
    int t84;
    int t85;
    float u86;
    float u87;
    float u88;
    int t89;
    int t90;
    float u95;
    float u96;
    float u97;
    float u98;
    int t99;
    float u100;
    float u101;
    float u102;
    float u103;
    float u104;
    float u105;
    float u106;
    float u107;
    float u108;
    float u109;
    float u110;
    float u111;
    float u112;
    float u113;
    float u117;
    float u128;
    float u118;
    float u119;
    float u120;
    float u121;
    float u122;
    float u123;
    float u124;
    float u125;
    float u131;
    int t91;
    int t93;
    float u114;
    int stk[14] = {0};

    nlPushMatrix(0x0);
    t1 = *(short *)((a4 + 0x86));
    nlRotateAY((-(unsigned short)t1));
    nlSubVector3op((((int)stk + 4) + 0xC), (0xFC + a4), (0x108 + a4));
    FUN_0c077210((((int)stk + 4) + 0xC), ((int)stk + 4));
    nlPopMatrix(0x1);
    t6 = *(int *)((a4 + 0x20));
    if ((t6 & 0x801F7FFE) != 0) {
        u7 = *(float *)(((int)stk + 4));
        *(float *)(((int)stk + 4)) = (u7 * 0.194999993f);
        u8 = *(float *)(((int)stk + 8));
        *(float *)(((int)stk + 8)) = (u8 * 0.194999993f);
        u9 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u9 * 0.194999993f);
    }
    t14 = nlScalor((((int)stk + 4) + 0xC));
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
        t19 = *(signed char *)0xC1EE278;
        ndPuru2Start((unsigned char)t19, 0x10000000, t17);
    }
    u26 = *(float *)(((int)stk + 12));
    u27 = *(float *)((a4 + 0x128));
    u28 = *(float *)((a4 + 0x144));
    u29 = (u27 * u26);
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
        u36 = *(float *)((a4 + 0x128));
        u37 = *(float *)((a4 + 0x134));
        u38 = (u37 * (u34 / u36));
        *(float *)((a4 + 0x138)) = (u38 * 1.0f);
        u39 = *(float *)((a4 + 0x134));
        u40 = *(float *)((a4 + 0x138));
        if (u40 > (u39 * 0.549999952f)) {
            u41 = *(float *)((a4 + 0x134));
            *(float *)((a4 + 0x138)) = (u41 * 0.549999952f);
        }
    } else {
        u44 = *(float *)((a4 + 0x128));
        u45 = *(float *)((a4 + 0x130));
        u46 = (u45 * (u34 / u44));
        *(float *)((a4 + 0x138)) = (u46 * 1.0f);
        u47 = *(float *)((a4 + 0x130));
        u48 = *(float *)((a4 + 0x138));
        if ((-(u47 * 0.549999952f)) > u48) {
            u49 = *(float *)((a4 + 0x130));
            *(float *)((a4 + 0x138)) = (-(u49 * 0.549999952f));
        }
    }
    u55 = *(float *)(((int)stk + 4));
    u56 = *(float *)((a4 + 0x128));
    u57 = *(float *)((a4 + 0x144));
    u58 = (u56 * u55);
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
    u69 = 0.0f;
    u70 = 0.0f;
    if (t64 != 0) {
        u65 = u34;
        u66 = u62;
        if (t64 == 3) {
            u65 = 0.0f;
            u66 = 0.0f;
        }
        u69 = u65;
        u70 = u66;
    }
    u72 = *(float *)((a4 + 0x128));
    *(float *)(((0x1A0 + a4) + 0x8)) = (((u72 * 0.25f) - (u69 * 1.5f)) - (u70 * 0.399999976f));
    u73 = *(float *)((a4 + 0x128));
    *(float *)(((0x84 + (0x1A0 + a4)) + 0x8)) = (((u73 * 0.25f) - (u69 * 1.5f)) + (u70 * 0.399999976f));
    u74 = *(float *)((a4 + 0x128));
    u75 = (u69 * 1.5f);
    u75 = u75 + 0.25f * u74;
    *(float *)(((0x108 + (0x1A0 + a4)) + 0x8)) = (u75 - (u70 * 0.399999976f));
    u76 = *(float *)((a4 + 0x128));
    u77 = (u69 * 1.5f);
    u77 = u77 + 0.25f * u76;
    *(float *)(((0x18C + (0x1A0 + a4)) + 0x8)) = (u77 + (u70 * 0.399999976f));
    u78 = *(float *)((a4 + 0x128));
    *(float *)(((0x1A0 + a4) + 0x10)) = (((u78 * 0.25f) - (u69 * 0.889999986f)) - (u70 * 0.099999994f));
    u79 = *(float *)((a4 + 0x128));
    *(float *)(((0x84 + (0x1A0 + a4)) + 0x10)) = (((u79 * 0.25f) - (u69 * 0.889999986f)) + (u70 * 0.099999994f));
    u80 = *(float *)((a4 + 0x128));
    u81 = (u69 * 0.889999986f);
    u81 = u81 + 0.25f * u80;
    *(float *)(((0x108 + (0x1A0 + a4)) + 0x10)) = (u81 - (u70 * 0.099999994f));
    u82 = *(float *)((a4 + 0x128));
    u83 = (u69 * 0.889999986f);
    u83 = u83 + 0.25f * u82;
    *(float *)(((0x18C + (0x1A0 + a4)) + 0x10)) = (u83 + (u70 * 0.099999994f));
    *(float *)((a4 + 0x194)) = 0.0f;
    t84 = 0x0;
    t85 = (0x1A0 + a4);
    u86 = u70;
    for (;;) {
        u87 = *(float *)(((0xC + t85) + 0x0));
        u88 = *(float *)((t85 + 0x8));
        *(float *)((t85 + 0x8)) = (u88 + u87);
        *(float *)((t85 + 0xC)) = 0.0f;
        if ((int)t84 < (int)0x2) {
            t89 = *(int *)((t85 + 0x0));
            t91 = 0x184;
            t93 = (0xC08A8EC + (t89 << 2));
        } else {
            t90 = *(int *)((t85 + 0x0));
            t91 = 0x190;
            t93 = (0xC08A8EC + (t90 << 2));
        }
        u95 = *(float *)((a4 + t91));
        u96 = *(float *)((t93 + 0x4));
        *(float *)((t85 + 0x28)) = (u96 * u95);
        u97 = *(float *)(((0x28 + t85) + 0x0));
        u98 = *(float *)((a4 + 0x194));
        *(float *)((a4 + 0x194)) = (u98 + u97);
        t99 = *(int *)((t85 + 0x0));
        u100 = *(float *)((t85 + 0x10));
        u101 = *(float *)((((t99 << 2) + 0xC08A94C) + 0x4));
        u102 = *(float *)((a4 + 0x12C));
        u103 = (u101 * u100);
        *(float *)((t85 + 0x2C)) = (u103 * u102);
        if ((int)t84 < (int)0x2) {
            u104 = *(float *)((t85 + 0x10));
            u105 = *(float *)((t85 + 0x28));
            u106 = *(float *)((a4 + 0x12C));
            u107 = (u105 * u104);
            u108 = (u107 * u106);
            u114 = (u108 * 0.177499995f);
        } else {
            u109 = *(float *)((t85 + 0x10));
            u110 = *(float *)((t85 + 0x28));
            u111 = *(float *)((a4 + 0x12C));
            u112 = (u110 * u109);
            u113 = (u112 * u111);
            u114 = (u113 * 0.198799968f);
        }
        *(float *)((t85 + 0x14)) = u114;
        u117 = *(float *)((a4 + 0x15C));
        u128 = _builtin_fabsf(u117);
        if (_builtin_fabsf(u117) > 11.0f) {
            u118 = *(float *)((a4 + 0x15C));
            u119 = *(float *)((t85 + 0x2C));
            u86 = _builtin_fabsf(u118);
            u86 = (u86 / 11.0f);
            u120 = (u86 * u86);
            u121 = (u120 * u86);
            u86 = 11.0f;
            *(float *)((t85 + 0x2C)) = (u119 * u121);
            u122 = *(float *)((a4 + 0x15C));
            u123 = *(float *)((t85 + 0x14));
            u86 = (u86 / _builtin_fabsf(u122));
            u124 = (u86 * u86);
            u125 = (u124 * u86);
            *(float *)((t85 + 0x14)) = (u123 * u125);
            u128 = (u124 * u86);
        }
        t84 = (t84 + 0x1);
        t85 = (t85 + 0x84);
        if ((int)t84 < (int)0x4) continue;
        break;
    }
    u131 = *(float *)((a4 + 0x194));
    *(float *)((a4 + 0x194)) = (u131 * 0.25f);
    return 0x194;
}
