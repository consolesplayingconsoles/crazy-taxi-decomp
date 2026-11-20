/* Small library functions (batch y): the vmsfs per-drive callback fields, a modifier address check, a driver keyboard enable. */

/* Sets the same field of all 8 drive slots (128 bytes each from 0C2EC578); returns the field's offset. */


/* The common modifier's two addresses, which must be 32-byte aligned (7 when not); b = 0 turns it off. */
int kmfSetCommonModifier(int a, int b)
{
    if (b == 0) {
        *(int *)0x0C2EAAB4 = 0;
        return 0;
    }
    *(int *)0x0C2EAAB4 = 1;
    if ((a & 31) || (b & 31)) {
        *(int *)0x0C2EAAB4 = 0;
        return 7;
    }
    *(int *)0x0C2EAAB8 = a;
    *(int *)0x0C2EAABC = b;
    return 0;
}

