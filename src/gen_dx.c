/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetBackColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdc_PlayStreamSong(int);
int gdc_VolStreamSong(int);
int pfColor(int, int, int, int);
int pfOffsetColor(int, int, int, int);
int pfSetFilterMode(int);
int pfSetFont(int);
int pfSize(float, float);
int gameState14(void);

int gameState14(void)
{
    int t9;

    Voice_ShutUp(0x0);
    Voice_Request(0xC0EEA08, 0x0, 0x7F, 0x0);
    CarSel_SetBackColor();
    gdc_PlayStreamSong(0x1);
    gdc_VolStreamSong(0x7F);
    *(unsigned int *)0xC2864AC = 0x0;
    *(unsigned int *)0xC2864A8 = 0x0;
    *(unsigned int *)0xC2864A4 = 0x0;
    *(unsigned int *)0xC2864A0 = 0x0;
    *(unsigned int *)0xC2864BC = 0x0;
    *(unsigned int *)0xC2864B8 = 0x0;
    *(unsigned int *)0xC2864B4 = 0x0;
    *(unsigned int *)0xC2864B0 = 0x0;
    *(float *)0xC2864C0 = 0.399999976f;
    *(float *)0xC2864D4 = 1.0f;
    *(unsigned int *)0xC2864D8 = 0x0;
    *(unsigned int *)0xC2864C4 = 0x744;
    *(unsigned int *)0xC2864CC = 0xC039E58;
    *(unsigned char *)0xC2864D3 = 0x0;
    *(unsigned char *)0xC2864D2 = 0x0;
    *(unsigned char *)0xC2864D1 = 0x0;
    *(unsigned char *)0xC2864D0 = 0x0;
    *(unsigned int *)0xC2864C8 = 0x0;
    pfSetFont(0x0);
    pfSetFilterMode(0x1);
    pfSize((1.0f + 1.0f), (1.0f + 1.0f));
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    t9 = pfOffsetColor(0x3F3F3F, 0x3F3F3F, 0x3F3F3F, 0x3F3F3F);
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    return t9;
}
