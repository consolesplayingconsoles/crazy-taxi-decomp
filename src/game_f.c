/* Game functions (batch f): the 289-entry table setup, a character id test, state 4's init, a stream status test, a
   per-group callback loop, a HUD init and the sprite tables' clears. Globals are addressed directly where the decomp
   has no name for them yet. */

void Init_Adv_Global_Parm(void);
void nd_CarSelInit(void);
void gdc_PlayStreamSong(int a);
void nlInitEvent(void);
int ADXT_GetStat(int h);
void Init_Pass_Time(void);
void Init_Drum_Fare(void);
void lcdInit(void);
int Set_LCDLogoFlag(void);

#define HUD_FLAGS       (*(unsigned int *)0x0C2A75E0)

/* 288 table entries (24 bytes: type byte, link -1, 0, 1000, 0, an address 0x2000 higher each) and a last one of type 4. */
void gdc_CourseBlockInit(void)
{
    char *e = (char *)0x0C26C5DC;
    int a = 0x0C640000;
    int i;

    for (i = 0; i < 288; i++, e += 24, a += 0x2000) {
        *e = 0;
        *(int *)(e + 4) = -1;
        *(int *)(e + 8) = 0;
        *(int *)(e + 12) = 1000;
        *(int *)(e + 16) = 0;
        *(int *)(e + 20) = a;
    }
    *e = 4;
    *(int *)(e + 8) = 0;
    *(int *)(e + 12) = 0;
    *(int *)(e + 4) = -1;
    *(int *)(e + 16) = 0;
    *(int *)(e + 20) = 0x0C640000;
}

/* Whether x is one of the five boyfriend ids (26, 33, 32, 52, 38), all 23 lower when f is set. */
int IsBoyFriend(int x, int f)
{
    int o = f ? -23 : 0;

    if (x == o + 26 || x == o + 33 || x == o + 32 || x == o + 52 || x == o + 38)
        return 1;
    return 0;
}

void gameState4(void)
{
    Init_Adv_Global_Parm();
    nd_CarSelInit();
    gdc_PlayStreamSong(2);
    (*(int *)0x0C1EE238)++;
    *(int *)0x0C1EE240 = 0;
    nlInitEvent();
    *(int *)0x0C1EE240 = 0;
    *(int *)0x0C179488 = 0;
    *(int *)0x0C17948C = 0;
    *(int *)0x0C1EE780 = 0;
}

/* Whether voice i's stream is in a state between 1 and 5 (exclusive). */
int gdc_GetStreamVoiceStat2(int i)
{
    int s = ADXT_GetStat(((int *)0x0C1EE810)[i]);

    if (s > 1 && s < 5)
        return 1;
    return 0;
}

/* Calls f on every entry of group a's list. */
void ChangeObjGroup(int a, void (*f)(int))
{
    int i;

    for (i = 0; i < ((int *)0x0C0D3048)[a]; i++)
        f(((int **)0x0C135134)[a][i]);
}

int Start_Pass_Default_Sprite(int a)
{
    *(int *)0x0C2A8C78 = a;
    *(int *)0x0C2A8C7C = 0x0C1EE788 + 40;
    *(int *)0x0C2A8C80 = 0x0C1EE788 + 44;
    *(int *)0x0C2A8C84 = 0x0C1EE788 + 48;
    HUD_FLAGS |= 0x80;
    *(int *)0x0C2A8E94 = 0;
    Init_Pass_Time();
    Init_Drum_Fare();
    *(int *)0x0C2A8E98 = 0;
    return 0;
}

int Init_LCD(void)
{
    int i;

    lcdInit();
    for (i = 0; i < 8; i++) {
        ((int *)0x0C2A9FB0)[i] = 0;
        ((int *)0x0C2A9FD0)[i] = 120;
    }
    *(int *)0x0C2A9FAC = 0;
    *(int *)0x0C2A9FF0 = 0;
    return Set_LCDLogoFlag();
}

/* Clears 8 blocks of 1536 bytes from 0C2A9FF8. */
void lcdInit(void)
{
    int j, k;

    for (j = 0; j < 8; j++) {
        char *p = (char *)0x0C2A9FF8 + (short)(j * 1536);

        for (k = 0; k < 1536; k++)
            *p++ = 0;
    }
}
