/* Straight-line functions with calls and guards (batch gen_xj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CourseTableSet(int);
int Init_Adv_Sprite(void);
int Voice_Clear(void);
int frameFlip(void);
int gdc_CarSoundLoad(void);
int gdc_FileLoad(int, int, int);
int gdc_SpriteSetGame(void);
int gdc_SpriteSetMBox(void);
int gdc_StopStreamSongAll(void);
int loadCity(int, int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int req_load(void);

int req_load(void)
{
    int t15;
    int t55;
    int t59;
    int t62;

    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    gdc_StopStreamSongAll();
    Voice_Clear();
    if ((*(int *)0xC1EE234) != 0) {
        if ((*(int *)0xC1EE20C) == 2) {
            gdc_SpriteSetMBox();
        } else {
            gdc_SpriteSetGame();
        }
    }
    Init_Adv_Sprite();
    t15 = *(int *)0xC1EE20C;
    if ((*(int *)0xC0E5318) != t15) {
        *(unsigned int *)0xC0E5318 = t15;
        if ((*(int *)0xC1EE234) != 0) {
            pfSetFont(0x0);
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            pfLocate(((-((pfLength(0xC08AE08)) * 0.5f)) + 320.0f), 240.0f);
            pfPuts(0xC08AE08);
            frameFlip();
            frameFlip();
        }
        loadCity((*(int *)0xC1EE20C), 0x0);
        CourseTableSet((*(int *)0xC1EE20C));
    } else {
        if (t15 == 2) {
            gdc_CarSoundLoad();
        }
    }
    if ((*(int *)0xC1EE234) == 0) {
        t55 = 0xC08AE24;
        if ((*(int *)0xC1EE20C) == 0) {
            t55 = 0xC08AE14;
        }
        t62 = (gdc_FileLoad(0xC30C000, t55, 0x1C000));
    } else {
        t59 = 0xC08AE44;
        if ((*(int *)0xC1EE20C) == 0) {
            t59 = 0xC08AE34;
        }
        t62 = (gdc_FileLoad(0xC30C000, t59, 0x1C000));
    }
    return t62;
}
