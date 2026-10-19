/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
void SJMEM_Unlock(int a4, int a5);
void ADXCRS_Lock(void);

void SJMEM_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void ADXCRS_Lock(void)
{
    int t0;
    int t1;
    int t3;

    t0 = *(int *)0xC178628;
    if (t0 == 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        *(unsigned int *)0xC17862C = t1;
    }
    t3 = *(int *)0xC178628;
    *(unsigned int *)0xC178628 = (t3 + 0x1);
}
