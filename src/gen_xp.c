/* Straight-line functions with calls and guards (batch gen_xp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndIcsControl(int, int, int);
int init_CarSound(void);

int init_CarSound(void)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t19;
    int t22;
    int t23;
    int t10;
    int t11;

    *(unsigned int *)0xC1794AC = 0x0;
    t0 = *(int *)0xC179488;
    if ((int)t0 < (int)0x4) {
        nlsndIcsControl(0x0, 0xA5, 0x400);
        t2 = *(signed char *)0xC28A4ED;
        t10 = 0x0;
        t11 = (signed char)(int)(((float)(unsigned char)t2 / 8.0f) * 55.0f);
    } else {
        nlsndIcsControl(0x0, 0xA5, 0x300);
        t4 = *(signed char *)0xC28A4ED;
        nlsndIcsControl(0x0, 0x10A5, (signed char)(int)(((float)(unsigned char)t4 / 8.0f) * 120.0f));
        nlsndIcsControl(0x3, 0xA5, 0x301);
        t7 = *(signed char *)0xC28A4ED;
        t10 = 0x3;
        t11 = (signed char)(int)(((float)(unsigned char)t7 / 8.0f) * 120.0f);
    }
    nlsndIcsControl(t10, 0x10A5, t11);
    nlsndIcsControl(0x1, 0xA5, 0x100);
    t19 = *(signed char *)0xC28A4ED;
    nlsndIcsControl(0x1, 0x10A5, (signed char)(int)(((float)(unsigned char)t19 / 8.0f) * 103.0f));
    nlsndIcsControl(0x2, 0xA5, 0x101);
    t22 = *(signed char *)0xC28A4ED;
    t23 = nlsndIcsControl(0x2, 0x10A5, (signed char)(int)(((float)(unsigned char)t22 / 8.0f) * 85.0f));
    *(unsigned char *)0xC1794A8 = 0x0;
    *(float *)0xC1794A4 = 0.0f;
    return t23;
}
