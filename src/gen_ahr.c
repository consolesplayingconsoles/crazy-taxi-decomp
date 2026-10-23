/* Straight-line functions with calls and guards (batch gen_ahr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int EditEntryName(int);
int nlsndSeqRequest(int);
int SetScreen(int);
int SetWindow(int);
int callNameEntry(void);

int callNameEntry(void)
{
    *(unsigned int *)0xC2A1228 = (*(int *)0xC1EE234);
    *(unsigned int *)0xC2A122C = (*(int *)0xC1EE238);
    if ((*(int *)0xC1EE234) != 3) {
        *(unsigned int *)0xC1EE234 = 0x3;
        *(unsigned int *)0xC1EE238 = 0x0;
    }
    SetScreen(0x6);
    SetWindow(0xD);
    EditEntryName(0x0);
    return nlsndSeqRequest(0x605A9);
}
