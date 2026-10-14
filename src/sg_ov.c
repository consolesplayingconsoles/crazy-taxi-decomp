/* Shinobi library, SG_OV (overlay libraries): our own C, written from the disassembly. */

typedef struct {
    int key;
    int refs;
} LibEntry;

typedef struct {
    int count;
    int unused;
    LibEntry ent[1];                /* ent[0] is at +8 */
} LibTable;

int ovLockCs(int *saved);
void ovUnlockCs(int *saved);
LibTable *ovGetLibTbl(void *out);
int ovSearchLibByUuid(int key);

int ovSearchLib(int key)
{
    int out[1];
    LibTable *t = ovGetLibTbl(out);
    int i;

    for (i = 0; i < t->count; i++) {
        if (t->ent[i].key == key)
            return i;
    }
    return -3;
}

void ovLibClose(int key)
{
    int lock;
    int out[1];
    LibTable *t;
    int idx;

    ovLockCs(&lock);
    t = ovGetLibTbl(out);
    idx = ovSearchLibByUuid(key);
    if (idx >= 0)
        t->ent[idx].refs--;
    ovUnlockCs(&lock);
}
