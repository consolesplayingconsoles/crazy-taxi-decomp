/* Straight-line functions with calls and guards (batch gen_pn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Adv_Sprite(void);
int Start_Adv_Title_LOGO(int, int);
int Voice_Clear(void);
int Voice_Request(int, int, int, int);
int gdc_FileLoadInit(void);
int gdc_FileLoadStop(void);
int gdc_StopStreamSongAll(void);
int nlInitEvent(void);
int AdvStateTitle2Init(void);

int AdvStateTitle2Init(void)
{
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    *(unsigned int *)0xC1EE334 = 0x11;
    nlInitEvent();
    gdc_StopStreamSongAll();
    Voice_Clear();
    Init_Adv_Sprite();
    Start_Adv_Title_LOGO(0x0, 0x0);
    if ((int)(*(int *)0xC0E5310) > 0) {
        *(unsigned int *)0xC0E5310 = 0x384;
        Voice_Request(0xC130DC0, 0x0, 0x7F, 0x0);
    }
    gdc_FileLoadStop();
    return gdc_FileLoadInit();
}
