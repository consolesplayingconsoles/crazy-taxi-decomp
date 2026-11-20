/* Small library functions (batch m): matrix setup sequences, model parameter walks, a 24-byte entry table, byte and
   halfword splitting, memcmp, palette and print-state setup. */

void nlGetMatrix8(void *m);
void nlMultiPushedMatrix(void);
void nlPushMatrix(void *m);
void nlMultiMatrix(void *m);
void nlMultiMatrix8(void *m);
void nlGetMatrix(void *m);
void nlPopMatrix(int n);
void nlLoadRechangeMatrix(void *m);
void nlLoadMatrix8(void *m);
void nlDecMatrixPtr(int n);
void nlPrintSetGarbagedTexture(void);
int kmiWriteRegister(int off, int v);

#define ENTRIES         ((char *)0x0C2B771C)            /* 24-byte entries: byte 0 in use (1), byte 1 locked, word 4 a pointer */


/* The print state's defaults: a parameter block at 0C2AF118 (control, background, TSP words), the garbaged-texture set-up,
   then the colour index and flag. */

/* The value the entry points to, when the entry is in use and locked; else 0. */

/* Frees an entry in use and not locked. */

/* For every record of a model from p on (records of 80 bytes plus the length at +76): sets the bits of mask to val in
   the first word unless the mask is already all set. */


/* A word split into 4 bytes, most significant first. */

/* A halfword split into 2 bytes, most significant first. */


/* The 1024 palette words to the palette RAM registers (0x1000 on). */
int kmSetPaletteData(int *p)
{
    int i;

    for (i = 0; i < 1024; i++)
        kmiWriteRegister(0x1000 + i * 4, p[i]);
    return 0;
}
