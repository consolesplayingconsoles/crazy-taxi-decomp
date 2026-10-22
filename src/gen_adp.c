/* Straight-line functions with calls and guards (batch gen_adp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiFlipVertexBuffer(int);
int kmiWriteRegister(int, int);
int kmiStartRenderTextureEntry(int a4);

int kmiStartRenderTextureEntry(int a4)
{
    int t0;
    int t48;
    int t27;

    *(unsigned int *)0xC2EA888 = 0x1;
    t0 = *(int *)0xC2EA9E4;
    if (((*(int *)0xC2EA684) & 16) != 0) {
        kmiWriteRegister(0x8, 0x2);
        kmiWriteRegister(0x8, 0x0);
    }
    kmiWriteRegister(0x2C, (*(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC2EAAF0))));
    kmiWriteRegister(0x20, (*(int *)(((0xC2EAAEC + ((((t0 & 0x1) << 2) << 2) << 1)) + 0x18))));
    kmiWriteRegister(0x60, (*(int *)((a4 + 0x8))));
    kmiWriteRegister(0x48, (*(int *)((a4 + 0x0))));
    kmiWriteRegister(0x4C, (*(int *)((a4 + 0x4))));
    kmiWriteRegister(0x68, (*(int *)((a4 + 0xC))));
    kmiWriteRegister(0x6C, (*(int *)((a4 + 0x10))));
    *(unsigned int *)0xC2EA9F0 = 0x0;
    t48 = 0x0;
    if ((*(int *)0xC2EA88C) != 0) {
        for (;;) {
            t27 = ((int (*)(int))((*(int *)0xC2EA8E8)))((*(int *)0xC2EA8EC));
            if ((unsigned int)(*(int *)0xC2EA9F0) > (unsigned int)(*(int *)0xC2EA8A8)) {
                break;
            }
            if ((*(int *)0xC2EA88C) == 0) {
                if (0x0 != 0) {
                    kmiWriteRegister(0x48, (*(int *)0xC2EA94C));
                    kmiWriteRegister(0x4C, (*(int *)0xC2EA944));
                    kmiWriteRegister(0x68, (*(int *)0xC2EA934));
                    kmiWriteRegister(0x6C, (*(int *)0xC2EA938));
                    *(unsigned int *)0xC2EA88C = 0x0;
                    *(unsigned int *)0xC2EA9F8 = 0x0;
                    return kmiFlipVertexBuffer((*(int *)0xC178274));
                }
                kmiWriteRegister(0x8C, (*(int *)0xC2EA834));
                kmiWriteRegister(0x88, ((*(int *)0xC2EA830) & 0xFFFFFFF0));
                return (kmiWriteRegister(0x14, 0xFFFFFFFF));
            }
        }
        t48 = 0x1;
    }
    if (t48 != 0) {
        kmiWriteRegister(0x48, (*(int *)0xC2EA94C));
        kmiWriteRegister(0x4C, (*(int *)0xC2EA944));
        kmiWriteRegister(0x68, (*(int *)0xC2EA934));
        kmiWriteRegister(0x6C, (*(int *)0xC2EA938));
        *(unsigned int *)0xC2EA88C = 0x0;
        *(unsigned int *)0xC2EA9F8 = 0x0;
        return kmiFlipVertexBuffer((*(int *)0xC178274));
    }
    kmiWriteRegister(0x8C, (*(int *)0xC2EA834));
    kmiWriteRegister(0x88, ((*(int *)0xC2EA830) & 0xFFFFFFF0));
    return (kmiWriteRegister(0x14, 0xFFFFFFFF));
}
