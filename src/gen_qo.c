/* Straight-line functions with calls and guards (batch gen_qo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03b698(int);
int FUN_0c040c58(int a4);

int FUN_0c040c58(int a4)
{
    int t4;
    int t1;

    FUN_0c03b698(0x0);
    t4 = 0x7;
    if (a4 != 0xFFFFFF01) {
        t1 = 0x8;
        if (a4 != 0xFFFFFF04) {
            t1 = 0x6;
        }
        t4 = t1;
    }
    return FUN_0c03b698(t4);
}
