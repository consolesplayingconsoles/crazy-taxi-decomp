/* Straight-line functions with calls and guards (batch gen_zt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float CalcHomingAngle(int a4, int a5, int a6, int a7);

float CalcHomingAngle(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    float u10;
    int t12;
    int t13;
    float u21;
    int t23;
    int t24;
    float u31;
    float u32;
    int stk[1];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F0;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C036378:;
    t0 = *(int *)((R4 + 0x0));
    t1 = *(int *)((R4 + 0x18));
    R2 = ((*(int *)((R4 + 0xC))));
    R5 = (0x8000);
    R6 = ((t1 - t0));
    if (((int)(short)(t1 - t0) <= (int)((short)(t1 - t0) + 0x8000))) goto L_C03638E;
    goto L_C03638C;
    L_C03638C:;
    R6 = ((-R6));
    goto L_C03638E;
    L_C03638E:;
    u10 = ((float)(short)R6 * (*(float *)((R4 + 0x24))));
    u10 = u10 + (*(float *)((R4 + 0x28))) * (float)R2;
    *(unsigned int *)((R4 + 0xC)) = (int)u10;
    *(unsigned int *)((R4 + 0x0)) = (unsigned short)((*(int *)((R4 + 0x0))) + (int)u10);
    t12 = *(int *)((R4 + 0x1C));
    t13 = *(int *)((R4 + 0x4));
    R2 = ((*(int *)((R4 + 0x10))));
    R6 = ((t12 - t13));
    if (((int)(short)(t12 - t13) <= (int)((short)(t12 - t13) + R5))) goto L_C0363C6;
    goto L_C0363C4;
    L_C0363C4:;
    R6 = ((-R6));
    goto L_C0363C6;
    L_C0363C6:;
    u21 = ((float)(short)R6 * (*(float *)((R4 + 0x24))));
    u21 = u21 + (*(float *)((R4 + 0x28))) * (float)R2;
    *(unsigned int *)((R4 + 0x10)) = (int)u21;
    *(unsigned int *)((R4 + 0x4)) = (unsigned short)((*(int *)((R4 + 0x4))) + (int)u21);
    t23 = *(int *)((R4 + 0x20));
    t24 = *(int *)((R4 + 0x8));
    R3 = ((*(int *)((R4 + 0x14))));
    R6 = ((t23 - t24));
    if (((int)(short)(t23 - t24) <= (int)(R5 + (short)(t23 - t24)))) goto L_C0363FC;
    goto L_C0363FA;
    L_C0363FA:;
    R6 = ((-R6));
    goto L_C0363FC;
    L_C0363FC:;
    u31 = *(float *)((R4 + 0x28));
    u32 = ((float)(short)R6 * (*(float *)((R4 + 0x24))));
    u32 = u32 + u31 * (float)R3;
    *(unsigned int *)((R4 + 0x14)) = (int)u32;
    *(unsigned int *)((R4 + 0x8)) = (unsigned short)((*(int *)((R4 + 0x8))) + (int)u32);
    return u31;
}
