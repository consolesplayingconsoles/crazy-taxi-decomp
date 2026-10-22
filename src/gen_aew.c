/* Straight-line functions with calls and guards (batch gen_aew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitAdvLogoSprite(void);
int PatchMotion(void);
int PutAdvLogoSprite(void);
int Put_SEGA_LOGO2(void);
int gdc_FileLoad(int, int, int);
int gdc_PlayStreamSong(int);
int req_load(void);
int AdvStateLogo(void);

int AdvStateLogo(void)
{
    int t1;
    int t26;
    int t5;
    int t17;
    int t7;
    int t12;
    int t23;
    int t34;
    int t46;
    int t36;
    int t41;
    int t52;
    int t80;
    int t89;
    int t86;
    int t98;
    int t55;
    int t61;
    int t74;
    int t81;
    int t94;

    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    t1 = *(int *)0xC1EE770;
    if (t1 != 0) {
        if (t1 != 1) {
            t26 = t1;
            if (t1 != 2) {
            } else {
                PutAdvLogoSprite();
                t5 = *(int *)0xC1EE240;
                t17 = t5;
                if (t5 == 5) {
                    t7 = *(int *)0xC1EE76C;
                    t12 = t7;
                    if (t7 == -1) {
                        *(unsigned int *)0xC1EE33C = 0x0;
                        gdc_FileLoad(0xC880000, 0xC08ADB8, 0x0);
                        PatchMotion();
                        *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + (*(int *)0xC1EE33C));
                        *(unsigned int *)0xC1EE76C = 0x1;
                        t12 = 0xC1EE76C;
                    }
                    t17 = t12;
                }
                t23 = t17;
                if ((int)(*(int *)0xC1EE240) >= (int)0xB4) {
                    *(unsigned int *)0xC1EE238 = 0x6;
                    t23 = 0x6;
                }
                t26 = t23;
            }
            t55 = t26;
        } else {
            *(unsigned int *)0xC1EE770 = ((*(int *)0xC1EE770) + 0x1);
            InitAdvLogoSprite();
            PutAdvLogoSprite();
            t34 = *(int *)0xC1EE240;
            t46 = t34;
            if (t34 == 5) {
                t36 = *(int *)0xC1EE76C;
                t41 = t36;
                if (t36 == -1) {
                    *(unsigned int *)0xC1EE33C = 0x0;
                    gdc_FileLoad(0xC880000, 0xC08ADB8, 0x0);
                    PatchMotion();
                    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + (*(int *)0xC1EE33C));
                    *(unsigned int *)0xC1EE76C = 0x1;
                    t41 = 0xC1EE76C;
                }
                t46 = t41;
            }
            t52 = t46;
            if ((int)(*(int *)0xC1EE240) >= (int)0xB4) {
                *(unsigned int *)0xC1EE238 = 0x6;
                t52 = 0x6;
            }
            t55 = t52;
        }
        t98 = t55;
    } else {
        if (((int)(*(int *)0xC1EE240) < (int)0x78) && (t61 = *(int *)0xC1EE250, (t61 & 8) != 0)) {
            *(unsigned int *)0xC2A93F4 = 0x78;
            *(unsigned int *)0xC1EE240 = 0x78;
        }
        Put_SEGA_LOGO2();
        if ((*(int *)0xC1EE240) == 123) {
            *(unsigned int *)0xC1EE33C = 0x0;
            req_load();
            *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + (*(int *)0xC1EE33C));
        }
        if (((*(int *)0xC1EE23C) == 1) && (t74 = *(int *)0xC1EE240, t74 == 120)) {
            gdc_PlayStreamSong(0x4);
        }
        t80 = *(int *)0xC1EE23C;
        if ((t80 == 0) && (t81 = *(int *)0xC1EE240, (int)t81 >= (int)0x12C)) {
            *(unsigned int *)0xC1EE770 = 0x1;
            *(unsigned int *)0xC1EE240 = 0x0;
            t94 = 0xC1EE240;
        } else {
            t89 = t80;
            if (t80 == 1) {
                t86 = t80;
                if ((int)(*(int *)0xC1EE240) < (int)0x19A) {
                } else {
                    *(unsigned int *)0xC1EE238 = 0x6;
                    t86 = 0x6;
                }
                t89 = t86;
            }
            t94 = t89;
        }
        t98 = t94;
    }
    return t98;
}
