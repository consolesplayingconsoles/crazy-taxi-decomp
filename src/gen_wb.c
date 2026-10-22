/* Straight-line functions with calls and guards (batch gen_wb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_FogColor(int a4, int a5, float f4, float f5);

int Exec_FogColor(int a4, int a5, float f4, float f5)
{
    int t0;
    int t4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    int t15;
    float u16;
    float u17;
    float u18;
    float u19;
    int t20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u35;
    int t36;
    float u37;
    int t38;
    float u39;
    float u50;
    float u51;
    float u52;
    int t1;

    t0 = *(int *)0xC2A9F64;
    if ((t0 != 3) && (t1 = *(int *)0xC2A9F68, t1 != 3)) {
        t4 = *(int *)0xC2A9F9C;
        if (t4 != 0) {
            u5 = *(float *)0xC2A9F74;
            u6 = *(float *)0xC2A9F8C;
            *(float *)0xC2A9F74 = (u5 + u6);
            u7 = *(float *)0xC2A9F78;
            u8 = *(float *)0xC2A9F90;
            *(float *)0xC2A9F78 = (u7 + u8);
            u9 = *(float *)0xC2A9F7C;
            u10 = *(float *)0xC2A9F94;
            *(float *)0xC2A9F7C = (u9 + u10);
        } else {
            u11 = *(float *)0xC2A9F74;
            u12 = *(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x4));
            u13 = *(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x10));
            u14 = u11;
            u14 = u14 + u13 * (u12 - u11);
            *(float *)0xC2A9F74 = u14;
            t15 = *(int *)0xC2A9F64;
            u16 = *(float *)0xC2A9F78;
            u17 = *(float *)((((signed char)(((t15 << 2) + t15) << 2) + 0xC1322C0) + 0x8));
            u18 = *(float *)((((signed char)(((t15 << 2) + t15) << 2) + 0xC1322C0) + 0x10));
            u19 = u16;
            u19 = u19 + u18 * (u17 - u16);
            *(float *)0xC2A9F78 = u19;
            t20 = *(int *)0xC2A9F64;
            u21 = *(float *)0xC2A9F7C;
            u22 = *(float *)((((signed char)(((t20 << 2) + t20) << 2) + 0xC1322C0) + 0xC));
            u23 = *(float *)((((signed char)(((t20 << 2) + t20) << 2) + 0xC1322C0) + 0x10));
            u24 = u21;
            u24 = u24 + u23 * (u22 - u21);
            *(float *)0xC2A9F7C = u24;
        }
    } else {
        u35 = *(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x4));
        *(float *)0xC2A9F74 = u35;
        t36 = *(int *)0xC2A9F64;
        u37 = *(float *)((((signed char)(((t36 << 2) + t36) << 2) + 0xC1322C0) + 0x8));
        *(float *)0xC2A9F78 = u37;
        t38 = *(int *)0xC2A9F64;
        u39 = *(float *)((((signed char)(((t38 << 2) + t38) << 2) + 0xC1322C0) + 0xC));
        *(float *)0xC2A9F7C = u39;
    }
    u50 = *(float *)0xC2A9F74;
    u51 = *(float *)0xC2A9F78;
    u52 = *(float *)0xC2A9F7C;
    *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u50 << 16) | ((int)u51 << 8)) | (int)u52));
    return 0xC;
}
