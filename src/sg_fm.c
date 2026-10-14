/* Shinobi library, SG_FM (flash memory): our own C, written from the disassembly. */

typedef struct {
    char p0[20];
    int count;
    int p24;
    int busy;       /* +28 */
    int mode;       /* +32 */
    int p36;
    int index;      /* +40 */
    int p44;
    int arg;        /* +48 */
} FmState;

extern FmState *gFmMngState;

int fmMngRead(int index, int arg)
{
    FmState *s = gFmMngState;

    if (s == 0)
        return -11;
    if (s->busy != 0)
        return -9;
    if (index < 0 || index >= s->count)
        return -5;
    s->busy = 1;
    gFmMngState->mode = 2;
    gFmMngState->index = index;
    gFmMngState->arg = arg;
    return 0;
}
