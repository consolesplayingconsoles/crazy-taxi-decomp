/* Straight-line functions with calls and guards (batch gen_qh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03012c(void);
int FUN_0c03019a(void);
int FUN_0c0577dc(void);
int FUN_0c057bdc(int, int);
int FUN_0c072e36(void);
int Voice_Request(int, int, int, int);
int gdc_StopStreamSongAll(void);
int nlInitEvent(void);
int FUN_0c02c42c(void);

int FUN_0c02c42c(void)
{
    int t0;
    int t6;

    t0 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t0 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    *(unsigned int *)0xC1EE334 = 0x11;
    nlInitEvent();
    gdc_StopStreamSongAll();
    FUN_0c072e36();
    FUN_0c0577dc();
    FUN_0c057bdc(0x0, 0x0);
    t6 = *(int *)0xC0E5310;
    if ((int)t6 > 0) {
        *(unsigned int *)0xC0E5310 = 0x384;
        Voice_Request(0xC130DC0, 0x0, 0x7F, 0x0);
    }
    FUN_0c03012c();
    return FUN_0c03019a();
}
