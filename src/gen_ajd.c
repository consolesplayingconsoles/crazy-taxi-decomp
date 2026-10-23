/* Straight-line functions with calls and guards (batch gen_ajd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetGarbagedTexture_Sub(int, int, int);
int nlObjPutSetGarbagedTexture(int a4);

int nlObjPutSetGarbagedTexture(int a4)
{
    return nlObjPutSetGarbagedTexture_Sub(a4, 0x0, 0x0);
}
