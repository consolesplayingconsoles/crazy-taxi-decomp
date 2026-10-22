/* Straight-line functions with calls and guards (batch gen_tf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
int FUN_0c14f3d6(int a4, int a5);

int FUN_0c14f3d6(int a4, int a5)
{
    int t0;
    int t1;

    t0 = (a4 & 0x9FFFFFE0);
    t1 = ((unsigned int)((unsigned int)((unsigned int)((a5 + (a4 & 0x1F)) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        _builtin_prefetch((void *)t0);
        t1 = (t1 - 0x1);
        t0 = (t0 + 0x20);
        if (t1 == 0) {
            break;
        }
    }
    return (a4 & 0x1F);
}
