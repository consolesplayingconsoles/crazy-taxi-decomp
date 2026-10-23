/* Straight-line functions with calls and guards (batch gen_wa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int AnnounceSecretFlag(int);
int Init_Adv_Sprite(void);
int Init_Window_Sprite(int);
int LightEffect(int);
int SetWindow(int);
int Sound_Init(void);
int Voice_Clear(void);
int adxStartAfs2(int, int);
int gdc_PlayStreamSong(int);
int gdc_SpriteSetMenu(void);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoiceAll(void);
int gdc_VolStreamSong(int);
int menuReadPad(int);
int menuSpriteAttrInit(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlSetBackColor(int, int, int);
int menuModeInit(void);

int menuModeInit(void)
{
    int t20;
    int t31;
    int t27;
    int t44;
    int t37;
    int t39;
    int t51;
    int t24;

    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    Voice_Clear();
    gdc_StopStreamVoiceAll();
    gdc_StopStreamSongAll();
    Sound_Init();
    gdc_SpriteSetMenu();
    Init_Adv_Sprite();
    Init_Window_Sprite(0x4);
    *(unsigned int *)0xC1EE334 = 0x11;
    nlSetBackColor(0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
    LightEffect(0x0);
    *(unsigned int *)0xC2A11EC = 0x2;
    *(unsigned int *)0xC2A1ADC = 0x280;
    *(unsigned int *)0xC2A1AD8 = 0x280;
    *(unsigned int *)0xC0EF548 = 0x0;
    *(unsigned int *)0xC0EF54C = 0x0;
    if ((*(int *)0xC2A1210) == 0xC09DDE0) {
        SetWindow(0x0);
    }
    menuReadPad(0x0);
    t20 = *(int *)0xC2A11B0;
    t31 = (menuSpriteAttrInit(0xC2A1A84));
    if (t20 == 0) {
        t27 = 0xC2A122C;
        if (((*(int *)0xC2A1228) == 0) && (t24 = *(int *)0xC2A122C, t24 == 0)) {
        } else {
            gdc_PlayStreamSong(0x0);
            t27 = (gdc_VolStreamSong(0x7F));
        }
        t31 = t27;
    }
    t44 = t31;
    if ((*(int *)0xC2A1228) == 0) {
        t37 = *(int *)0xC2A122C;
        t39 = t37;
        if ((t37 != 7) && (t37 != 9)) {
        } else {
            t39 = (adxStartAfs2(0x0, 0x2A0));
        }
        t44 = t39;
    }
    t51 = t44;
    if ((*(int *)0xC2A1214) == 0) {
        t51 = (AnnounceSecretFlag(0x1));
    }
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    return t51;
}
