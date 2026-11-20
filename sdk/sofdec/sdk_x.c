/* The RNA (sound stream) getters: each reports an error through mwRnaErrCallFunc when its handle is null (the message is
   passed on the stack; the call keeps the caller's own r5-r7, written here as the unused parameters b, c and d). */

void mwRnaErrCallFunc(int *h, int b, int c, int d, char *msg);

#define MSG ((char *)0x0C176680)

int mwRnaGetPlaySw(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return -1;
    }
    return (((unsigned char *)h)[1] & 2) >> 1;
}




int mwRnaGetStat(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return -1;
    }
    return ((unsigned char *)h)[1];
}

int mwRnaGetNumData(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return -1;
    }
    return h[13];
}

int mwRnaIsPause(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return 0;
    }
    return ((unsigned char *)h)[7];
}

int mwRnaGetNumRoom(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return -1;
    }
    return h[10] - h[13];
}

int mwRnaGetBitPerSmpl(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return -1;
    }
    return h[2];
}

int mwRnaGetOutVol(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return -1;
    }
    return *(int *)((char *)h + 96);
}

int mwRnaGetDrctLvl(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, MSG);
        return -1;
    }
    return *(int *)((char *)h + 132);
}
