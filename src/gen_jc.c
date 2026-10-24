/* Straight-line functions with calls and guards (batch gen_jc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndPuru2Start(int, int, int);
int nlRand(void);
float nlRandom(void);
float nlScalor(int);
int set_event(int, int);
int SetEffect(int a4, int a5, int a6);

int SetEffect(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t46;
    float u4;
    float u6;
    int t22;
    float t8;
    float u9;
    float u10;
    float u14;
    float u15;
    float u16;
    int t40;
    int t31;

    t0 = 0xC03663C;
    if (a6 == 3) {
        t0 = 0xC036806;
    }
    t2 = set_event(0x3C, t0);
    t46 = t2;
    if (t2 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x14)) = *(struct mv3 *)(a4); }
        *(float *)((t2 + 0x18)) = ((*(float *)((t2 + 0x18))) - (1.0f + 1.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x20)) = *(struct mv3 *)(a5); }
        u4 = 0.19999999f;
        u6 = u4;
        u6 = u6 + u4 * (nlRandom());
        *(float *)((t2 + 0x2C)) = u6;
        *(unsigned int *)((t2 + 0x34)) = ((nlRand()) & 0x3);
        *(unsigned int *)((t2 + 0x30)) = 0x1E;
        *(unsigned int *)((t2 + 0x38)) = a6;
        if (a6 != 1) {
            if (a6 != 2) {
                t22 = a6;
                if (a6 != 3) {
                } else {
                    t8 = nlScalor(a5);
                    u9 = (-0.39999998f);
                    u10 = (-0.5f);
                    *(float *)(((0x20 + t2) + 0x0)) = ((*(float *)(((0x20 + t2) + 0x0))) + ((nlRandom()) + u10));
                    u14 = 0.099999994f;
                    u15 = 0.29999998f;
                    u16 = (nlRandom());
                    u16 = u16 + u14 * (t8 + u9);
                    *(float *)(((0x24 + t2) + 0x0)) = ((*(float *)(((0x24 + t2) + 0x0))) + (u16 + u15));
                    *(float *)(((0x28 + t2) + 0x0)) = ((*(float *)(((0x28 + t2) + 0x0))) + ((nlRandom()) + u10));
                    *(unsigned int *)((t2 + 0x30)) = 0x14;
                    t22 = (ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x10000, 0x2));
                }
                t31 = t22;
            } else {
                *(float *)((t2 + 0x2C)) = ((*(float *)((t2 + 0x2C))) * (1.0f + 1.0f));
                t31 = (ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x10000, 0x1));
            }
            t40 = t31;
        } else {
            *(float *)((t2 + 0x2C)) = ((*(float *)((t2 + 0x2C))) * 1.5f);
            t40 = (ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x10000, 0x0));
        }
        t46 = t40;
    }
    return t46;
}
