/* Straight-line functions with calls and guards (batch gen_sj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
void FUN_0c14ac40(int a4);

void FUN_0c14ac40(int a4)
{
    int t0;
    int t2;
    int t4;

    t0 = a4;
    if ((0x80000000 & a4) != 0) {
        t0 = 0x0;
    }
    t2 = t0;
    if ((0x7FFFFF00 & t0) != 0) {
        t2 = 0xFF;
    }
    *(unsigned int *)0xC2EA720 = t2;
    t4 = *(int *)0xC2EA94C;
    *(unsigned int *)0xC2EA94C = ((t4 & 0xFF00FFFF) | ((unsigned char)t2 << 15));
    kmiWriteRegister(0x48, ((t4 & 0xFF00FFFF) | ((unsigned char)t2 << 15)));
}
