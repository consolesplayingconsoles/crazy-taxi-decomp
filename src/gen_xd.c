/* Straight-line functions with calls and guards (batch gen_xd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiPurgeCache(int);
int kmtex_GetTextureLevel(int, int);
int kmtex_ReloadVQMM(int a4, int a5, int a6);

int kmtex_ReloadVQMM(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t6;
    int t7;
    int t8;
    int t20;
    int t21;
    int t22;
    int t31;
    int t32;
    int t33;
    int t46;
    int t47;
    int t48;
    int t54;
    int stk[15];

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = kmtex_GetTextureLevel(a6, a6);
    if (a6 != 1) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
        if ((int)a6 <= (int)0x4) {
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 4))), ((*(int *)((a4 + 0x1C))) + 0x800), 0x10);
            t4 = *(int *)(((int)stk + 8));
            if (a6 == 2) {
                *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (*(signed char *)((t4 + 0x0)));
            } else {
                t6 = ((((int)stk + 4) + 0x8) + 0x2);
                t7 = t4;
                for (;;) {
                    t8 = *(signed char *)((t7 + 0x0));
                    t7 = (t7 + 0x1);
                    *(unsigned char *)((t6 + 0x0)) = t8;
                    t6 = (t6 + 0x1);
                    if ((unsigned int)t6 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x6)) {
                        break;
                    }
                }
            }
            t54 = ((*(int *)((a4 + 0x1C))) + 0x800);
        } else {
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 4))), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC175ED8 + ((t0 - 1) << 2)))) + 0x7FA)), 0x10);
            t20 = ((((int)stk + 4) + 0x8) + 0x6);
            t21 = (*(int *)(((int)stk + 8)));
            for (;;) {
                t22 = *(signed char *)((t21 + 0x0));
                t21 = (t21 + 0x1);
                *(unsigned char *)((t20 + 0x0)) = t22;
                t20 = (t20 + 0x1);
                if ((unsigned int)t20 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x10)) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x1C)));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((*(int *)((0xC175ED8 + ((t0 - 1) << 2)))) + 0x7FA));
            kmiPurgeCache((((int)stk + 4) + 0x8));
            kmiPurgeCache(((((int)stk + 4) + 0x8) + 0x20));
            kmiCopyToFrameBuffer((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x8), 0x10);
            if ((unsigned int)((*(int *)(((t0 << 2) + 0xC175EAC))) - 16) > (unsigned int)0x0) {
                t31 = *(int *)((0xC175ED8 + ((t0 - 1) << 2)));
                t32 = *(int *)((a4 + 0x1C));
                t33 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 4)) = (t33 + 0xA);
                kmiCopyToFrameBuffer((t32 + (t31 + 0x80A)), (t33 + 0xA), ((*(int *)(((t0 << 2) + 0xC175EAC))) - 16));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 4))), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC175ED8 + (t0 << 2)))) + 0x7FA)), 0x10);
            t46 = (((int)stk + 4) + 0x8);
            t47 = (((*(int *)(((t0 << 2) + 0xC175EAC))) + (*(int *)(((int)stk + 8)))) - 6);
            for (;;) {
                t48 = *(signed char *)((t47 + 0x0));
                t47 = (t47 + 0x1);
                *(unsigned char *)((t46 + 0x0)) = t48;
                t46 = (t46 + 0x1);
                if ((unsigned int)t46 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x6)) {
                    break;
                }
            }
            t54 = ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC175ED8 + (t0 << 2)))) + 0x7FA));
        }
        kmiPurgeCache((((int)stk + 4) + 0x8));
        kmiPurgeCache(((((int)stk + 4) + 0x8) + 0x20));
        kmiCopyToFrameBuffer(t54, (((int)stk + 4) + 0x8), 0x10);
    }
    return 0x0;
}
