/* Straight-line functions with calls and guards (batch gen_xq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetAudio(void);
int SetSEvolume(void);
int nlsndIcsControl(int, int, int);
int nlsndSystemControl(int, int, int);
int Sound_Init(void);

int Sound_Init(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0xC2AE388;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0xD8) {
            break;
        }
    }
    t2 = 0x0;
    for (;;) {
        t3 = t2;
        t4 = (short)((((((t2 << 2) << 1) + t2) << 2) << 2) << 1);
        t2 = (t2 + 0x1);
        *(unsigned int *)((0xC2AE6E8 + (t3 << 2))) = (t4 + 0xC2AE388);
        *(unsigned int *)((0xC2AE6F4 + (t3 << 2))) = (t4 + 0xC2AE388);
        *(unsigned int *)((0xC2AE700 + (t3 << 2))) = 0x0;
        if ((int)t2 >= (int)0x3) {
            break;
        }
    }
    nlsndIcsControl(0x0, 0xA6, 0x0);
    nlsndIcsControl(0x1, 0xA6, 0x0);
    nlsndIcsControl(0x2, 0xA6, 0x0);
    nlsndIcsControl(0x3, 0xA6, 0x0);
    nlsndSystemControl(0x0, 0x1100A0, 0x0);
    nlsndSystemControl(0x1, 0x1100A0, 0x0);
    nlsndSystemControl(0x2, 0x1100A0, 0x0);
    nlsndSystemControl(0x3, 0x1100A0, 0x0);
    nlsndSystemControl(0x4, 0x1100A0, 0x0);
    nlsndSystemControl(0x5, 0x1100A0, 0x0);
    nlsndSystemControl(0x6, 0x1100A0, 0x0);
    nlsndSystemControl(0x7, 0x1100A0, 0x0);
    nlsndSystemControl(0x8, 0x1100A0, 0x0);
    nlsndSystemControl(0x0, 0x1A0, 0x75);
    SetAudio();
    return SetSEvolume();
}
