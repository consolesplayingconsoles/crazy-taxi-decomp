/* Straight-line functions with calls and guards (batch gen_pw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int AdvNextCourseMode(void);
int Init_Adv_Sprite(void);
int Init_SEGA_LOGO(void);
int gdc_SpriteSetAdv(void);
int AdvStateStart(void);

int AdvStateStart(void)
{
    int t0;

    *(unsigned int *)0xC1EE770 = 0x0;
    t0 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t0 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    AdvNextCourseMode();
    *(unsigned int *)0xC1EE334 = 0x11;
    Init_Adv_Sprite();
    Init_SEGA_LOGO();
    return gdc_SpriteSetAdv();
}
