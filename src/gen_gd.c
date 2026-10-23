/* Straight-line functions with calls and guards (batch gen_gd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Adv_Sprite(void);
int Start_Adv_Title_LOGO(int, int);
int Voice_Clear(void);
int Voice_Request(int, int, int, int);
int gdc_FileLoadInit(void);
int gdc_FileLoadStop(void);
int gdc_StopStreamSongAll(void);
int nlInitEvent(void);
int setReplayType(int);
int init_Title2(void);

int init_Title2(void)
{
    int t21;

    *(unsigned int *)0xC1EE240 = 0x0;
    *(unsigned int *)0xC1EE334 = 0x11;
    *(unsigned char *)0xC1EE778 = (*(signed char *)0xC08ADAC);
    *(unsigned char *)0xC1EE779 = (*(signed char *)0xC08ADAD);
    *(unsigned char *)0xC1EE77A = (*(signed char *)0xC08ADAE);
    *(unsigned char *)0xC1EE77B = (*(signed char *)0xC08ADAF);
    *(unsigned char *)0xC1EE77C = (*(signed char *)0xC08ADB0);
    *(unsigned char *)0xC1EE77D = (*(signed char *)0xC08ADB1);
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    nlInitEvent();
    gdc_StopStreamSongAll();
    Voice_Clear();
    Init_Adv_Sprite();
    Start_Adv_Title_LOGO(0x1, 0x0);
    if ((int)(*(int *)0xC0E5310) > 0) {
        *(unsigned int *)0xC0E5310 = 0x384;
        Voice_Request(0xC130DC0, 0x0, 0x7F, 0x0);
    }
    gdc_FileLoadStop();
    gdc_FileLoadInit();
    t21 = 0x2;
    if ((*(int *)0xC1EE20C) == 0) {
        t21 = 0x1;
    }
    return setReplayType(t21);
}
