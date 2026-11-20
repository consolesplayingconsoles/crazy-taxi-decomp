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


int vmsfs_load_file(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t26;
    int t2;
    int t3;
    int t25;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t19;
    int t33;
    int t34;
    int t56;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t50;
    int t57;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    if (a7 == 0) {
        t0 = *(int *)(((int)stk + 8));
        t1 = vmsfs_fgetsize(a4, t0);
        t26 = t1;
        if ((int)t1 < 0) {
        } else {
            t2 = *(int *)(((int)stk + 8));
            t3 = vmsfs_fopen(a4, t2, ((int)stk + 4));
            t25 = t3;
            if ((int)t3 >= 0) {
                t4 = *(int *)(((int)stk + 12));
                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t1;
                if ((unsigned int)0x0 < (unsigned int)t1) {
                    t5 = 0x0;
                    t6 = t4;
                    for (;;) {
                        t7 = *(int *)(((int)stk + 4));
                        t8 = vmsfs_fread1(t7, t6);
                        if ((int)t8 >= 0) {
                            t5 = (t5 + 0x1);
                            t6 = (t6 + 0x200);
                            if ((unsigned int)t5 >= (unsigned int)t1) {
                                break;
                            }
                            continue;
                        }
                        t9 = *(int *)(((int)stk + 4));
                        vmsfs_fclose(t9, 0x0);
                        return t8;
                    }
                }
                t19 = *(int *)(((int)stk + 4));
                vmsfs_fclose(t19, 0x0);
                t25 = 0x0;
            }
            t26 = t25;
        }
        t57 = t26;
    } else {
        t33 = *(int *)(((int)stk + 8));
        t34 = vmsfs_fopen(a4, t33, ((int)stk + 4));
        t56 = t34;
        if ((int)t34 >= 0) {
            t35 = *(int *)(((int)stk + 12));
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = a7;
            if ((unsigned int)0x0 < (unsigned int)a7) {
                t36 = 0x0;
                t37 = t35;
                for (;;) {
                    t38 = *(int *)(((int)stk + 4));
                    t39 = vmsfs_fread1(t38, t37);
                    if ((int)t39 >= 0) {
                        t36 = (t36 + 0x1);
                        t37 = (t37 + 0x200);
                        if ((unsigned int)t36 >= (unsigned int)a7) {
                            break;
                        }
                        continue;
                    }
                    t40 = *(int *)(((int)stk + 4));
                    vmsfs_fclose(t40, 0x0);
                    return t39;
                }
            }
            t50 = *(int *)(((int)stk + 4));
            vmsfs_fclose(t50, 0x0);
            t56 = 0x0;
        }
        t57 = t56;
    }
    return t57;
}

