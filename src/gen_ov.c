/* Straight-line functions with calls and guards (batch gen_ov): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetSEvolume(void);
int Voice_Init(void);
int gdc_VolStreamSong(int);
int menuChangeValue(int, int, int);
int menuPutSprites(int, int, int, int);
int putString(int, int, float, float, float);
int menuItemVolume(int a4, int a5);

int menuItemVolume(int a4, int a5)
{
    int t0;
    int t3;
    float u5;
    float u6;
    int t35;
    int t29;
    int t31;
    int t33;
    int stk[12];

    t0 = *(int *)0xC2A1ADC;
    t3 = 0xC28A4ED;
    u5 = 290.0f;
    u6 = (float)(t0 + 0x1DE);
    if (a5 == 4) {
        t3 = 0xC28A4EC;
        u5 = 256.0f;
        u6 = (float)(0x1DE - t0);
    }
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)((t3 + 0x0)));
    if (a4 != 0) {
        if ((menuChangeValue(0x0, ((int)stk + 4), 0x9)) == 1) {
            *(unsigned char *)((t3 + 0x0)) = (*(int *)(((int)stk + 4)));
            SetSEvolume();
            Voice_Init();
            gdc_VolStreamSong(0x7F);
        }
    }
    putString(0x28, 0xC0A2058, (u6 + -82.0f), (u5 + -7.0f), 1.0f);
    t35 = (putString(0x20, 0xC0A205C, (u6 + 82.0f), (u5 + -7.0f), 1.0f));
    if ((int)0x8 > 0) {
        t29 = 0x0;
        for (;;) {
            t31 = 0xC0A0868;
            if ((int)t29 < (int)(*(int *)(((int)stk + 4)))) {
                t31 = 0xC0A0858;
            }
            t33 = menuPutSprites(t31, 0xC2A1A84, (int)((float)(((((t29 - 3) << 2) + (t29 - 3)) << 2) - 10) + u6), (int)u5);
            t29 = (t29 + 0x1);
            if ((int)t29 >= (int)0x8) {
                break;
            }
        }
        t35 = t33;
    }
    return t35;
}
