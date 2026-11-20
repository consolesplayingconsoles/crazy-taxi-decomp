/* Straight-line functions with calls and guards (batch gen_art): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdSetGunCallback(int);
int pdGunSetCallback(int a4);

int pdGunSetCallback(int a4)
{
    return kdSetGunCallback(a4);
}
