/* Straight-line functions with calls and guards (batch gen_pa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetMatrix8(int);
int nlLoadMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutWorldMatrixMode(void);

int nlObjPutWorldMatrixMode(void)
{
    nlGetMatrix8(0xC2B7578);
    nlMultiMatrixRevOrder8(0xC2B34E8);
    nlGetMatrix8(0xC2B34A8);
    return nlLoadMatrix8(0xC2B7578);
}
