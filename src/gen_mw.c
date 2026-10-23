/* Straight-line functions with calls and guards (batch gen_mw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int SetMenuClass(int);
int SetScreen(int);
int SetWindow(int);
int gdc_StopStreamSongDisk(void);
int windowGoMenu(void);

int windowGoMenu(void)
{
    int t1;

    *(unsigned int *)0xC1EE234 = 0x3;
    *(unsigned int *)0xC1EE238 = 0x0;
    t1 = 0x1;
    if ((int)(GetMenuMode(0x0)) <= (int)0x1) {
        t1 = 0x0;
    }
    SetMenuClass(t1);
    SetScreen(0x4);
    SetWindow(0x0);
    *(unsigned int *)0xC2A11B0 = 0x0;
    return gdc_StopStreamSongDisk();
}
