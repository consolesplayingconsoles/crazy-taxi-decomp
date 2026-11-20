/* Straight-line functions with calls and guards (batch gen_xo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiCopyToFrameBuffer(int, int, int);
int kmLoadTextureBlock(int a4, int a5, int a6, int a7);

int kmLoadTextureBlock(int a4, int a5, int a6, int a7)
{
    int t22;
    int t2;
    int t4;
    int t6;
    int t12;
    int t8;
    int t9;

    t22 = 0x4;
    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
    } else {
        t2 = *(int *)((a4 + 0x18));
        t4 = 0x0;
        if (((0x4 & t2) != 0) && (((0x1 & t2) != 0) && (((0x8 & t2) == 0) && ((0x20 & t2) == 0)))) {
            t4 = 0x4;
        }
        t6 = *(int *)((a4 + 0x14));
        t12 = 0xC;
        if ((unsigned int)(t4 + (a6 * (((a7 << 2) << 2) << 1))) >= (unsigned int)t6) {
        } else {
            t8 = *(int *)((a4 + 0x1C));
            t9 = (t6 - (t4 + (a6 * (((a7 << 2) << 2) << 1))));
            if ((unsigned int)(t6 - (t4 + (a6 * (((a7 << 2) << 2) << 1)))) > (unsigned int)(((a7 << 2) << 2) << 1)) {
                t9 = (((a7 << 2) << 2) << 1);
            }
            kmiCopyToFrameBuffer(((t4 + (a6 * (((a7 << 2) << 2) << 1))) + t8), a5, t9);
            t12 = 0x0;
        }
        t22 = t12;
    }
    return t22;
}
