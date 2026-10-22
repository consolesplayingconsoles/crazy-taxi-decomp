/* Straight-line functions with calls and guards (batch gen_qz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMultiMatrix8(int);
int nlOuterProduct(int, int, int);
int MultiRot4Vec(int a4);

int MultiRot4Vec(int a4)
{
    nlOuterProduct((a4 + 0xC), a4, 0xC0ED9F8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC0EDA08) = *(struct mv3 *)((a4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC0EDA18) = *(struct mv3 *)(a4); }
    return nlMultiMatrix8(0xC0ED9F8);
}
