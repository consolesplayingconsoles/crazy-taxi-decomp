/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSpriteLoadTextureOnce_Sub(int, int, int, int);
void kmiWaitVlank(void);
int nlSpriteLoadTextureGI(int a4, int a5);

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

