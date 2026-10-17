/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c080370(int, int, int);
int FUN_0c15c3c8(int);
int InitArrow(int);
int kmiDefaultInterruptHandler(int);
int kmiTXalloc(int, int);
int kmiVQalloc(int);

int FUN_0c05d82a(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(signed char *)0xC2A98FC;
    t1 = *(int *)0xC1EE214;
    
    if ((t1 == 10)) {
        t2 = 0xC131084;
        } else {
        t2 = 0xC131030;
        }
    return InitArrow((t2 + (signed char)(((t0 << 1) + t0) << 2)));
}

int kmCreateTextureSurface(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t5;

    t0 = FUN_0c15c3c8(a4);
    
    if (!(t0 == 0)) {
        t8 = t0;
        } else {
        t1 = *(int *)((a4 + 0x0));
    
        if (((unsigned short)t1 == 3)) {
        t2 = kmiVQalloc(a4);
        t5 = t2;
        } else {
        t3 = *(int *)((a4 + 0x14));
        t4 = kmiTXalloc(t3, a4);
        t5 = t4;
        }
        
        t8 = t5;
        }
    return t8;
}

int FUN_0c1720ac(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t6;
    int t1;
    int t4;

    *(unsigned short *)((a4 + 0x58)) = a5;
    *(unsigned short *)((a4 + 0x5A)) = a6;
    
    
    if (!((int)a5 > 0)) {
        t1 = 0x0;
        } else {
        t0 = a5;
        if (((int)a5 >= (int)0x7F)) {
        t0 = 0x7F;
        }
        t1 = t0;
        }
    
    
    if (!((int)a6 > 0)) {
        t4 = 0x0;
        } else {
        t3 = a6;
        if (((int)a6 >= (int)0x1F)) {
        t3 = 0x1F;
        }
        t4 = t3;
        }
    t6 = *(short *)((a4 + 0x6));
    return FUN_0c080370(t6, t1, t4);
}
