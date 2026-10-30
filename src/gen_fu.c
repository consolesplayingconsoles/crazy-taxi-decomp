/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_Create(int, int, int);
int ADXT_Destroy(int);
int SJRBF_Create(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buCalcCRC(int, int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int thunk_ADXRNA_Create(int, int);
int CheckSecretFlag(int a4, int a5);
int ADXT_Create(int a4, int a5, int a6);
int buMakeBackupFileImage(int a4, int a5);
void syChainDeleteHandler(int a4);




void syChainDeleteHandler(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t18;
    int t19;
    int t27;
    int t72;
    int t1;
    int stk[9] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t2 = 0x1;
    for (;;) {
        t3 = *(int *)(((((t2 << 2) << 2) + 0xC2EAC10) + 0x4));
        if (t3 == (((a4 << 2) << 2) + 0xC2EAC10)) {
            t4 = *(int *)(((((t2 << 2) << 2) + 0xC2EAC10) + 0xC));
            t1 = t4;
            if ((t1 & 0x80000000) == 0) {
                t2 = (t2 + 0x1);
                if ((unsigned int)t2 >= (unsigned int)0x100) {
                    break;
                }
                continue;
            }
            break;
        }
        t2 = (t2 + 0x1);
        if ((unsigned int)t2 >= (unsigned int)0x100) {
            break;
        }
    }
    if (t2 != 0x100) {
        t9 = *(int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0x4));
        *(unsigned int *)(((((t2 << 2) << 2) + 0xC2EAC10) + 0x4)) = t9;
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0xC)) = 0x0;
    } else {
        t10 = 0x1;
        for (;;) {
            t11 = *(int *)((0xC2EBC10 + (t10 << 2)));
            if (t11 == (((a4 << 2) << 2) + 0xC2EAC10)) {
                break;
            }
            t10 = (t10 + 0x1);
            if ((unsigned int)t10 >= (unsigned int)0xC0) {
                t13 = *(short *)(((int)stk + 4));
                _builtin_set_imask(((unsigned int)((((unsigned short)t13 & 0xF) << 2) << 2) >> 4));
                return;
            }
        }
        t14 = *(int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0x4));
        *(unsigned int *)((((t10 << 2) + 0xC2EBC10) + 0x0)) = t14;
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0xC)) = 0x0;
        t15 = *(int *)((((t10 << 2) + 0xC2EBC10) + 0x0));
        if (t15 == 0) {
            if (t10 == 0x90) {
                kmSetVSyncCallback(0x0, 0x0);
            } else {
                if (t10 == 0x92) {
                    kmSetHSyncCallback(0x0, 0x0);
                } else {
                    if (((int)(short)((t10 << 2) << 2) >> 8) == 10) {
                        t18 = *(int *)0xA05F6920;
                        *(unsigned int *)0xA05F6920 = (t18 & (~((int)0x1 << (int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) + 0xC))));
                    } else {
                        if (((int)(short)((t10 << 2) << 2) >> 8) == 11) {
                            t19 = *(int *)0xA05F6924;
                            *(unsigned int *)0xA05F6924 = (t19 & (~((int)0x1 << (int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1))));
                        }
                    }
                    t27 = (int)_builtin_get_vbr();
                    *(unsigned int *)((((t27 + ((unsigned int)((unsigned int)(((t10 << 2) << 2) - 512) >> 2) >> 1)) + 0x200) + 0x0)) = 0xC16DD08;
                }
            }
        }
    }
    t72 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)((((unsigned short)t72 & 0xF) << 2) << 2) >> 4));
}
