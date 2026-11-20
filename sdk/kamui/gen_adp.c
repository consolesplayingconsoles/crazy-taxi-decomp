/* Straight-line functions with calls and guards (batch gen_adp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiFlipVertexBuffer(int);
int kmiWriteRegister(int, int);
int kmiStartRenderTextureEntry(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int kmiStartRenderTextureEntry(int a4)
{
    int t0;
    int t48;
    int t27;

    (((struct o0_uint *)0xC2EA888)->v) = 0x1;
    t0 = (((struct o0_int *)0xC2EA9E4)->v);
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
    (((struct oC_uint *)0xC2EA9E4)->v) = 0x0;
    t48 = 0x0;
    if (((((struct o4_int *)0xC2EA888)->v)) != 0) {
        for (;;) {
            t27 = ((int (*)(int))(((((struct o0_int *)0xC2EA8E8)->v))))(((((struct o4_int *)0xC2EA8E8)->v)));
            if ((unsigned int)((((struct oC_int *)0xC2EA9E4)->v)) > (unsigned int)((((struct o20_int *)0xC2EA888)->v))) {
                break;
            }
            if (((((struct o4_int *)0xC2EA888)->v)) == 0) {
                if (0x0 != 0) {
                    kmiWriteRegister(0x48, ((((struct o18_int *)0xC2EA934)->v)));
                    kmiWriteRegister(0x4C, ((((struct o10_int *)0xC2EA934)->v)));
                    kmiWriteRegister(0x68, ((((struct o0_int *)0xC2EA934)->v)));
                    kmiWriteRegister(0x6C, ((((struct o4_int *)0xC2EA934)->v)));
                    (((struct o4_uint *)0xC2EA888)->v) = 0x0;
                    (((struct o14_uint *)0xC2EA9E4)->v) = 0x0;
                    return kmiFlipVertexBuffer((*(int *)0xC178274));
                }
                kmiWriteRegister(0x8C, ((((struct o4_int *)0xC2EA830)->v)));
                kmiWriteRegister(0x88, (((((struct o0_int *)0xC2EA830)->v)) & 0xFFFFFFF0));
                return (kmiWriteRegister(0x14, 0xFFFFFFFF));
            }
        }
        t48 = 0x1;
    }
    if (t48 != 0) {
        kmiWriteRegister(0x48, ((((struct o18_int *)0xC2EA934)->v)));
        kmiWriteRegister(0x4C, ((((struct o10_int *)0xC2EA934)->v)));
        kmiWriteRegister(0x68, ((((struct o0_int *)0xC2EA934)->v)));
        kmiWriteRegister(0x6C, ((((struct o4_int *)0xC2EA934)->v)));
        (((struct o4_uint *)0xC2EA888)->v) = 0x0;
        (((struct o14_uint *)0xC2EA9E4)->v) = 0x0;
        return kmiFlipVertexBuffer((*(int *)0xC178274));
    }
    kmiWriteRegister(0x8C, ((((struct o4_int *)0xC2EA830)->v)));
    kmiWriteRegister(0x88, (((((struct o0_int *)0xC2EA830)->v)) & 0xFFFFFFF0));
    return (kmiWriteRegister(0x14, 0xFFFFFFFF));
}
