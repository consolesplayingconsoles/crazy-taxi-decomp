/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bcd2bin(int);

int bcdtime2fad(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(signed char *)((a4 + 0x0));
    t1 = bcd2bin(t0);
    t2 = *(signed char *)(((a4 + 0x1) + 0x0));
    t3 = bcd2bin(t2);
    t4 = *(signed char *)((((a4 + 0x1) + 0x1) + 0x0));
    t5 = bcd2bin(t4);
    return ((((t1 * 0x3C) + t3) * 0x4B) + t5);
}
