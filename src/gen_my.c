/* Straight-line functions with calls and guards (batch gen_my): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bootRecvHeader(int a4, int a5);

int bootRecvHeader(int a4, int a5)
{
    int t1;

    t1 = 0xC01117E;
    if (a4 != 0) {
        t1 = 0xC0119A8;
    }
    return (((int (*)(int, int))((t1 | 0xA0000000)))(a5, a5));
}
