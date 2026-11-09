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
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int menuModeInit(void)
{
    int t20;
    int t37;
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
    (((struct o3C_uint *)0xC2A11B0)->v) = 0x2;
    (((struct o4_uint *)0xC2A1AD8)->v) = 0x280;
    (((struct o0_uint *)0xC2A1AD8)->v) = 0x280;
    (((struct o0_uint *)0xC0EF548)->v) = 0x0;
    (((struct o4_uint *)0xC0EF548)->v) = 0x0;
    if (((((struct o0_int *)0xC2A1210)->v)) == 0xC09DDE0) {
        SetWindow(0x0);
    }
    menuReadPad(0x0);
    t20 = (((struct o0_int *)0xC2A11B0)->v);
    t51 = (menuSpriteAttrInit(0xC2A1A84));
    if (t20 == 0) {
        t51 = 0xC2A122C;
        if ((((((struct o18_int *)0xC2A1210)->v)) == 0) && (t24 = (((struct o1C_int *)0xC2A1210)->v), t24 == 0)) {
        } else {
            gdc_PlayStreamSong(0x0);
            t51 = (gdc_VolStreamSong(0x7F));
        }
    }
    if (((((struct o18_int *)0xC2A1210)->v)) == 0) {
        t37 = (((struct o1C_int *)0xC2A1210)->v);
        t51 = t37;
        if ((t37 != 7) && (t37 != 9)) {
        } else {
            t51 = (adxStartAfs2(0x0, 0x2A0));
        }
    }
    if (((((struct o4_int *)0xC2A1210)->v)) == 0) {
        t51 = (AnnounceSecretFlag(0x1));
    }
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    return t51;
}
