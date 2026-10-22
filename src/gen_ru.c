/* Straight-line functions with calls and guards (batch gen_ru): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f5c0(int);
int FUN_0c07f330(int a4, int a5, int a6, int a7);

int FUN_0c07f330(int a4, int a5, int a6, int a7)
{
    if ((a6 != 0x1B0) && ((a6 != 0x2B0) && ((a6 != 0x7B0) && (a6 != 0x27B0)))) {
        if ((a6 != 0xAB0) && (a6 != 0x2AB0)) {
            return 0xFFFFFFFE;
        }
        return FUN_0c07f5c0(((((((0xF & a4) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + (((a7 + 0x40) & 0x7F) << 16)));
    }
    return FUN_0c07f5c0(((((((0xF & a4) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
}
