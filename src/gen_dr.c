/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSpriteLoadTextureOnce_Sub(int, int, int, int);
void kmiWaitVlank(void);
int FUN_0c07db40(int a4, int a5);

void kmiWaitVlank(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2EA9F0;
    for (;;) {
        t1 = *(int *)0xC2EA9F0;
        if (t0 != t1) {
            break;
        }
    }
}

int FUN_0c07db40(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0x4));
        if (t3 == -1) {
            break;
        }
        t4 = nlSpriteLoadTextureOnce_Sub(a4, a5, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}
