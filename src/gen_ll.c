/* Straight-line functions with calls and guards (batch gen_ll): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfPutc(int, int, float);
int pfSetFont(int);
int pfPutSEGALogo(void);

int pfPutSEGALogo(void)
{
    int t0;
    float u3;
    float u7;

    t0 = *(int *)0xC26E1EC;
    pfSetFont(0x1);
    *(float *)0xC26E208 = 64.0f;
    u3 = *(float *)0xC26E1F8;
    u7 = (u3 * 64.0f);
    if ((*(int *)0xC26E1F0) != 0) {
        u7 = (((u3 * 64.0f)) * 0.5f);
    }
    *(float *)0xC26E204 = u7;
    pfPutc(0x7F, 0xC26E204, u7);
    return pfSetFont(t0);
}
