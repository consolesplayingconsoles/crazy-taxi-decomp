/* Game functions (batch k): the new-game state reset, the course object tables' init, the 24-byte entry start, the
   vibration init, and Kamui's fog density register. Globals are addressed directly where the decomp has no name for them yet. */

void nlRandomSeed(int seed);
void nlsndSeqRequest(int a);
int pdVibSetStopTime(int t, char *a, char *b, int c);
int kmiWriteRegister(int off, int v);

#define ENTRIES         ((char *)0x0C2B771C)

int kmSetFogDensity(int x)
{
    kmiWriteRegister(184, x);
    return 0;
}


/* Starts entry i when it is in use and not yet started (marking it started); else returns its byte 0 or 1. */

