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

/* Remove the library with this key from the table, closing the gap; 0, or -2 when it is not there. */
int ovLibDeleteTbl(int key)
{
    int lock;
    int out[1];
    LibTable *t;
    int idx;
    int rv;
    int i;

    ovLockCs(&lock);
    t = ovGetLibTbl(out);
    idx = ovSearchLib(key);
    if (idx < 0) {
        rv = -2;
    } else {
        t->count--;
        for (i = idx; i < t->count; i++) {
            t->ent[i] = t->ent[i + 1];
        }
        t->ent[i].key = 0;
        t->ent[i].refs = 0;
        rv = 0;
    }
    ovUnlockCs(&lock);
    return rv;
}
