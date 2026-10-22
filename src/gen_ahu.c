/* Straight-line functions with calls and guards (batch gen_ahu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c049a72(int a4, float f4, float f5);

int FUN_0c049a72(int a4, float f4, float f5)
{
    float u0;

    u0 = *(float *)0xC049B48;
    if ((*(float *)((a4 + 0x0))) > (f4 + (f5 * u0))) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - f5);
        return 0x0;
    }
    if ((f4 - (f5 * u0)) > (*(float *)((a4 + 0x0)))) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) + f5);
        return 0x0;
    }
    *(float *)((a4 + 0x0)) = f4;
    return 0x1;
}
