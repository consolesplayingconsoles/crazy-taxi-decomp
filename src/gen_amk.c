/* Straight-line functions with calls and guards (batch gen_amk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutLoadTexture(int, int);
int LoadBigOne(int a4);

int LoadBigOne(int a4)
{
    return nlObjPutLoadTexture(0xC13F898, a4);
}
