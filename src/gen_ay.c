/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_set_imask(int);
int kdGetDevice(int);
int kdGetDeviceInfo(void);
int kdIsChanged(void);
void SJRBF_Unlock(int a4, int a5);
void ADXCRS_Unlock(void);
int vmsio_ismount(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };


void SJRBF_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void ADXCRS_Unlock(void)
{
    int t0;
    int t1;

    t0 = (((struct o0_int *)0xC178628)->v);
    (((struct o0_uint *)0xC178628)->v) = (t0 - 1);
    if ((t0 - 1) == 0) {
        t1 = (((struct o4_int *)0xC178628)->v);
        _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    }
}


