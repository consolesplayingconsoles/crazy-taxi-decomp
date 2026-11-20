/* Game functions (batch k): the new-game state reset, the course object tables' init, the 24-byte entry start, the
   vibration init, and Kamui's fog density register. Globals are addressed directly where the decomp has no name for them yet. */

void nlRandomSeed(int seed);
void nlsndSeqRequest(int a);
int pdVibSetStopTime(int t, char *a, char *b, int c);
int kmiWriteRegister(int off, int v);

#define ENTRIES         ((char *)0x0C2B771C)


/* Starts entry i when it is in use and not yet started (marking it started); else returns its byte 0 or 1. */
int nlsndStreamStart(short i)
{
    char *e = ENTRIES + i * 24;

    if (e[0] != 1)
        return e[0];
    if (e[1])
        return e[1];
    nlsndSeqRequest((i << 12) + 0x1A1);
    e[1] = 1;
    return 1;
}

