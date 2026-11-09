/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
void SJMEM_Unlock(int a4, int a5);
void ADXCRS_Lock(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


void SJMEM_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void ADXCRS_Lock(void)
{
    int t0;
    int t1;
    int t3;

    t0 = (((struct o0_int *)0xC178628)->v);
    if (t0 == 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        (((struct o4_uint *)0xC178628)->v) = t1;
    }
    t3 = (((struct o0_int *)0xC178628)->v);
    (((struct o0_uint *)0xC178628)->v) = (t3 + 0x1);
}
