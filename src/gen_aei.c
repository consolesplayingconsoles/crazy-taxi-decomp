/* Straight-line functions with calls and guards (batch gen_aei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int get_fat(int, int);
int search_fat_dir(int, int);
int set_fat(int, int);
int vmsfs_write_retry(int, int, int);
int write_fat(int);
int write_sys(int);
int write_dir(int a4);

int write_dir(int a4)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t12;
    int t13;
    int t17;
    int t25;
    int t29;
    int t3;
    int t5;
    int t6;
    int stk[12] = {0};

    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((t0 + 0x18)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)(((int)stk + 8)))) {
            if ((*(int *)(((int)stk + 12))) != 0) {
                t12 = write_fat(a4);
                if ((int)t12 >= 0) {
                    t13 = write_sys(a4);
                    if ((int)t13 < 0) {
                        return t13;
                    }
                    return 0x0;
                }
                return t12;
            }
            return 0x0;
        }
        if ((*(signed char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0))) != 0) {
            *(unsigned int *)(((int)stk + 4)) = ((t4 << 8) << 1);
            for (;;) {
                t17 = vmsfs_write_retry(a4, t7, ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28))) + (*(int *)(((int)stk + 4)))));
                if (t17 == 0) {
                    break;
                }
                if (t17 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    t5 = (unsigned short)(get_fat(a4, t7));
                    set_fat(a4, t7);
                    t6 = (search_fat_dir(a4, 0xFFFC));
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6);
                    if (t4 == 0) {
                        t25 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20))), 0x4A, t6);
                    } else {
                        set_fat(a4, t3);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t17;
            }
            t29 = get_fat(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t29;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t3 = t7;
        t5 = (unsigned short)(get_fat(a4, t7));
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}
