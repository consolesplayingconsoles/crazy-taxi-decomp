/* Straight-line functions with calls and guards (batch gen_aav): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c16178a(int a4, int a5);

int FUN_0c16178a(int a4, int a5)
{
    int t6;
    int t4;
    int t2;
    int t0;

    t6 = 0x8;
    if ((unsigned short)a5 != 0) {
        t4 = 0x20;
        if ((unsigned short)a5 != 1) {
            t2 = 0x200;
            if ((unsigned short)a5 != 3) {
                t0 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t0 = 0x80;
                }
                t2 = t0;
            }
            t4 = t2;
        }
        t6 = t4;
    }
    return ((((int)((unsigned int)a4 / (unsigned int)0x64)) * t6) + ((int)((unsigned int)(((int)((unsigned int)a4 % (unsigned int)0x64)) * t6) / (unsigned int)0x64)));
}
