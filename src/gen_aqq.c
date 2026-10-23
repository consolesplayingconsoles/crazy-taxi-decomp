/* Straight-line functions with calls and guards (batch gen_aqq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_FogColor(int a4, int a5, float f4, float f5);

int Exec_FogColor(int a4, int a5, float f4, float f5)
{
    int t0;
    float u11;
    float u14;
    int t15;
    float u16;
    float u19;
    int t20;
    float u21;
    float u24;
    int t36;
    int t38;
    int t1;

    t0 = *(int *)0xC2A9F64;
    if ((t0 != 3) && (t1 = *(int *)0xC2A9F68, t1 != 3)) {
        if ((*(int *)0xC2A9F9C) != 0) {
            *(float *)0xC2A9F74 = ((*(float *)0xC2A9F74) + (*(float *)0xC2A9F8C));
            *(float *)0xC2A9F78 = ((*(float *)0xC2A9F78) + (*(float *)0xC2A9F90));
            *(float *)0xC2A9F7C = ((*(float *)0xC2A9F7C) + (*(float *)0xC2A9F94));
        } else {
            u11 = *(float *)0xC2A9F74;
            u14 = u11;
            u14 = u14 + (*(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x10))) * ((*(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x4))) - u11);
            *(float *)0xC2A9F74 = u14;
            t15 = *(int *)0xC2A9F64;
            u16 = *(float *)0xC2A9F78;
            u19 = u16;
            u19 = u19 + (*(float *)((((signed char)(((t15 << 2) + t15) << 2) + 0xC1322C0) + 0x10))) * ((*(float *)((((signed char)(((t15 << 2) + t15) << 2) + 0xC1322C0) + 0x8))) - u16);
            *(float *)0xC2A9F78 = u19;
            t20 = *(int *)0xC2A9F64;
            u21 = *(float *)0xC2A9F7C;
            u24 = u21;
            u24 = u24 + (*(float *)((((signed char)(((t20 << 2) + t20) << 2) + 0xC1322C0) + 0x10))) * ((*(float *)((((signed char)(((t20 << 2) + t20) << 2) + 0xC1322C0) + 0xC))) - u21);
            *(float *)0xC2A9F7C = u24;
        }
    } else {
        *(float *)0xC2A9F74 = (*(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x4)));
        t36 = *(int *)0xC2A9F64;
        *(float *)0xC2A9F78 = (*(float *)((((signed char)(((t36 << 2) + t36) << 2) + 0xC1322C0) + 0x8)));
        t38 = *(int *)0xC2A9F64;
        *(float *)0xC2A9F7C = (*(float *)((((signed char)(((t38 << 2) + t38) << 2) + 0xC1322C0) + 0xC)));
    }
    *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)(*(float *)0xC2A9F74) << 16) | ((int)(*(float *)0xC2A9F78) << 8)) | (int)(*(float *)0xC2A9F7C)));
    return 0xC;
}
