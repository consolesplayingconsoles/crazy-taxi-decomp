/* Straight-line functions with calls and guards (batch gen_tu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitAdvLogoSprite(void);
int PatchMotion(void);
extern int PutAdvLogoSprite();
int Put_SEGA_LOGO2(int, int, int, float, float, float);
int gdc_FileLoad(int, int, int);
int gdc_PlayStreamSong(int);
int req_load(void);
int AdvStateLogo(int a4, int a5, int a6, float f4, float f5, float f6);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int AdvStateLogo(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int t1;
    int t4;
    int t5;
    int t7;
    int t33;
    int t34;
    int t36;
    int t86;
    int t98;
    int t61;
    int t74;
    int t81;

    (((struct o8_uint *)0xC1EE238)->v) = (((((struct o8_int *)0xC1EE238)->v)) + 0x1);
    t1 = (((struct o4_int *)0xC1EE76C)->v);
    if (t1 != 0) {
        if (t1 != 1) {
            t98 = t1;
            if (t1 != 2) {
            } else {
                t4 = ((int (*)(int, int, int))(PutAdvLogoSprite))(a4, a5, a6);
                t5 = (((struct o8_int *)0xC1EE238)->v);
                t98 = t5;
                if (t5 == 5) {
                    t7 = (((struct o0_int *)0xC1EE76C)->v);
                    t98 = t7;
                    if (t7 == -1) {
                        *(unsigned int *)0xC1EE33C = 0x0;
                        gdc_FileLoad(0xC880000, 0xC08ADB8, 0x0);
                        PatchMotion();
                        (((struct o8_uint *)0xC1EE238)->v) = (((((struct o8_int *)0xC1EE238)->v)) + (*(int *)0xC1EE33C));
                        (((struct o0_uint *)0xC1EE76C)->v) = 0x1;
                        t98 = 0xC1EE76C;
                    }
                }
                if ((int)((((struct o8_int *)0xC1EE238)->v)) >= (int)0xB4) {
                    (((struct o0_uint *)0xC1EE238)->v) = 0x6;
                    t98 = 0x6;
                }
            }
        } else {
            (((struct o4_uint *)0xC1EE76C)->v) = (((((struct o4_int *)0xC1EE76C)->v)) + 0x1);
            InitAdvLogoSprite();
            t33 = ((int (*)(void))(PutAdvLogoSprite))();
            t34 = (((struct o8_int *)0xC1EE238)->v);
            t98 = t34;
            if (t34 == 5) {
                t36 = (((struct o0_int *)0xC1EE76C)->v);
                t98 = t36;
                if (t36 == -1) {
                    *(unsigned int *)0xC1EE33C = 0x0;
                    gdc_FileLoad(0xC880000, 0xC08ADB8, 0x0);
                    PatchMotion();
                    (((struct o8_uint *)0xC1EE238)->v) = (((((struct o8_int *)0xC1EE238)->v)) + (*(int *)0xC1EE33C));
                    (((struct o0_uint *)0xC1EE76C)->v) = 0x1;
                    t98 = 0xC1EE76C;
                }
            }
            if ((int)((((struct o8_int *)0xC1EE238)->v)) >= (int)0xB4) {
                (((struct o0_uint *)0xC1EE238)->v) = 0x6;
                t98 = 0x6;
            }
        }
    } else {
        if (((int)((((struct o8_int *)0xC1EE238)->v)) < (int)0x78) && (t61 = (((struct o18_int *)0xC1EE238)->v), (t61 & 8) != 0)) {
            *(unsigned int *)0xC2A93F4 = 0x78;
            (((struct o8_uint *)0xC1EE238)->v) = 0x78;
        }
        Put_SEGA_LOGO2(0x78, a5, a6, f4, f5, f6);
        if (((((struct o8_int *)0xC1EE238)->v)) == 123) {
            *(unsigned int *)0xC1EE33C = 0x0;
            req_load();
            (((struct o8_uint *)0xC1EE238)->v) = (((((struct o8_int *)0xC1EE238)->v)) + (*(int *)0xC1EE33C));
        }
        if ((((((struct o4_int *)0xC1EE238)->v)) == 1) && (t74 = (((struct o8_int *)0xC1EE238)->v), t74 == 120)) {
            gdc_PlayStreamSong(0x4);
        }
        t86 = (((struct o4_int *)0xC1EE238)->v);
        if ((t86 == 0) && (t81 = (((struct o8_int *)0xC1EE238)->v), (int)t81 >= (int)0x12C)) {
            (((struct o4_uint *)0xC1EE76C)->v) = 0x1;
            (((struct o8_uint *)0xC1EE238)->v) = 0x0;
            t98 = 0xC1EE240;
        } else {
            t98 = t86;
            if (t86 == 1) {
                if ((int)((((struct o8_int *)0xC1EE238)->v)) < (int)0x19A) {
                } else {
                    (((struct o0_uint *)0xC1EE238)->v) = 0x6;
                    t86 = 0x6;
                }
                t98 = t86;
            }
        }
    }
    return t98;
}
