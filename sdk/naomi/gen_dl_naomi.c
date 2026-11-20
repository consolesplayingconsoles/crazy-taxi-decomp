/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(void);
int direntry(int, int);
int get_vmstime(int, int);
int set_file_info(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int vmsfs_load_file(int a4, int a5, int a6, int a7);
int vmsfs_findnext_ex(int a4, int a5, int a6);

float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float u13;
    float u14;
    int t9;
    int t16;
    int t17;
    int t18;
    int t19;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u29;
    float u30;
    float u20;
    float u21;
    int stk[12] = {0};

    t0 = *(int *)0xC0D68BC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x1C)) = t0;
    t1 = *(int *)0xC0D68B8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x18)) = t1;
    t2 = *(int *)0xC0D68B4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t2;
    t3 = *(int *)0xC0D68B0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t3;
    t4 = *(int *)0xC0D68AC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t4;
    t5 = *(int *)0xC0D68A8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t5;
    t6 = *(int *)0xC0D68A4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t6;
    t7 = *(int *)0xC0D68A0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t7;
    t8 = *(int *)((a4 + 0x34));
    u13 = 1.0f;
    u14 = 1.0f;
    if ((t8 & 15) == 0) {
    } else {
        *(unsigned int *)(((int)stk + 4)) = t8;
        t9 = *(int *)(((int)stk + 4));
        u13 = (float)(t8 & 0x3);
        u14 = (float)(((t9 >> 1) >> 1) & 0x3);
    }
    t16 = 0x4;
    t17 = a5;
    t18 = a6;
    t19 = (((int)stk + 4) + 0x4);
    for (;;) {
        u22 = *(float *)((t19 + 0x0));
        t19 = (t19 + 0x4);
        u23 = *(float *)((t19 + 0x0));
        t19 = (t19 + 0x4);
        u24 = *(float *)((a4 + 0x4));
        u25 = *(float *)((a4 + 0x8));
        u26 = u24;
        u27 = u25;
        if ((u22 - u13) != 0.0f) {
            u21 = (f4 * f6);
            u21 = (u21 * (u22 - u13));
            u20 = (u22 - u13);
            u21 = (-u21);
            u26 = (u24 + u20 * (f4 * f7));
            u27 = (u25 + u21);
        }
        u29 = u26;
        u30 = u27;
        if ((u23 - u14) != 0.0f) {
            u20 = (u23 - u14);
            u29 = (u26 + u20 * (f5 * f6));
            u30 = (u27 + u20 * (f5 * f7));
        }
        t16 = (t16 - 1);
        *(float *)((t17 + 0x0)) = u29;
        *(float *)((t18 + 0x0)) = u30;
        t18 = (t18 + 0x4);
        t17 = (t17 + 0x4);
        if (t16 == 0) {
            break;
        }
    }
    return u20;
}


