/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_set_imask(int);
int kdGetDevice(int);
int kdGetDeviceInfo(void);
int kdIsChanged(void);
void SJRBF_Unlock(int a4, int a5);
void ADXCRS_Unlock(void);
void vmsio_ismount(int a4);

void SJRBF_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void ADXCRS_Unlock(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC178628;
    *(unsigned int *)0xC178628 = (t0 - 1);
    if ((t0 - 1) == 0) {
        t1 = *(int *)0xC17862C;
        _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    }
}

void vmsio_ismount(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)(((a4 << 2) + 0xC176948));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo();
    t3 = *(signed char *)((t1 + 0x0));
    if (t3 != 0) {
        t4 = kdIsChanged();
        if (t4 == 0) {
            t5 = *(int *)((t2 + 0x0));
            if ((t5 & 2) == 0) {
                return;
            }
            return;
        }
        return;
    }
}
