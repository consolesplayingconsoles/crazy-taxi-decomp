/* Straight-line functions with calls and guards (batch gen_am): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_memset_l(int, int, int);
int get_data(int a4);
int make_header(int a4, int a5);
int mpdrv_clear_deviceinfo(int a4);

int get_data(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(signed char *)((a4 + 0x7));
    if ((unsigned char)t0 == 1) {
        t1 = *(signed char *)((a4 + 0x8));
        if ((unsigned char)t1 == 5) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    } else {
        t2 = *(signed char *)((a4 + 0x8));
        if ((unsigned char)t2 != 0xFF) {
            if ((unsigned char)t2 != 0) {
                *(unsigned char *)((a4 + 0x0)) = 0x1;
            } else {
                *(unsigned char *)((a4 + 0x0)) = 0x0;
            }
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    }
    return 0x0;
}

int make_header(int a4, int a5)
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
    int t9;
    int t10;
    int t12;
    int t13;
    int stk[2] = {0};

    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = *(int *)0xC2FA538;
    t2 = *(int *)((0x10C4 + t1));
    if (t2 == 1) {
        t3 = *(signed char *)((((int)stk + 4) + 0x0));
        *(unsigned char *)((a4 + 0xB)) = t3;
        t4 = *(signed char *)(((((int)stk + 4) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0xA)) = t4;
        t5 = *(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0x9)) = t5;
        t6 = *(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0x8)) = t6;
    } else {
        t7 = *(signed char *)((((int)stk + 4) + 0x0));
        *(unsigned char *)((a4 + 0x8)) = t7;
        t8 = *(signed char *)(((((int)stk + 4) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0x9)) = t8;
        t9 = *(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0xA)) = t9;
        t10 = *(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0xB)) = t10;
    }
    t12 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t12 == 0xFF) {
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    } else {
        if ((int)(unsigned char)t12 < (int)0xE0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            t13 = *(int *)(((a5 + 0x4) + 0x0));
            *(unsigned int *)((a4 + 0x14)) = t13;
        }
    }
    return 0x0;
}

int mpdrv_clear_deviceinfo(int a4)
{
    int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    *(unsigned char *)(((a4 + 0x14) + 0x0)) = 0x28;
    *(unsigned char *)((a4 + 0x15)) = 0x6E;
    *(unsigned char *)((a4 + 0x16)) = 0x6F;
    *(unsigned char *)((a4 + 0x17)) = 0x6E;
    *(unsigned char *)((a4 + 0x18)) = 0x65;
    *(unsigned char *)((a4 + 0x19)) = 0x29;
    t1 = (a4 + 0x1A);
    do {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
    } while ((unsigned int)t1 < (unsigned int)(a4 + 0x33));
    *(unsigned char *)((a4 + 0x33)) = 0x0;
    return 0x0;
}

