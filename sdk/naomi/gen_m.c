/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int kmSetEORCallback(int, int);
int kmSetTexOverflowCallback(int, int);
int nlIntrSetHSynchLine(int);
int nlSetIntrFunction(int, int);
int nlSetIntrPriority(int, int);
int nlSynchFunction(int);
int syChainAddHandler(int, int, int, int);
int nlInitInterrupt0(int a4);

int nlInitInterrupt0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2B75B8 + t1)) = 0x0;
        *(unsigned int *)((0xC2B75EC + t1)) = 0xFFFFFFFF;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x34) {
            break;
        }
    }
    t1 = 0x0;
    t2 = 0xC0D67EA;
    for (;;) {
        nlSetIntrPriority((*(short *)((t2 + 0x0))), (*(short *)((t2 + 0x2))));
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x4);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    t1 = 0x0;
    for (;;) {
        nlSetIntrFunction(t1, 0x0);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xD) {
            break;
        }
    }
    nlSynchFunction(0x0);
    kmSetEORCallback(0xC07B460, 0x0);
    (((struct o0_uint *)0xC2B75F0)->v) = (syChainAddHandler(0x900, 0xC07B480, 0x58, 0x0));
    (((struct o4_uint *)0xC2B75F0)->v) = (syChainAddHandler(0x920, 0xC07B4A0, 0x0, 0x0));
    if (a4 != 0) {
        (((struct o8_uint *)0xC2B75F0)->v) = (syChainAddHandler(0xA40, 0xC07B4C0, 0x0, 0x0));
        (((struct oC_uint *)0xC2B75F0)->v) = (syChainAddHandler(0xB00, 0xC07B4F0, 0x0, 0x0));
    }
    kmSetTexOverflowCallback(0xC07B520, 0x0);
    t1 = nlIntrSetHSynchLine(0x0);
    _builtin_set_cr((t0 & 0xFFFFFFFF));
    return t1;
}
