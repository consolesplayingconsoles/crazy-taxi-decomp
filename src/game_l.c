/* Game functions (batch l): the menu's open animation step and the step that closes it. Globals are addressed directly
   where the decomp has no name for them yet. */

void windowClose(void);

int menuOpenStep(void)
{
    unsigned int *g = (unsigned int *)0x0C2A11D8;
    int *p = (int *)0x0C0EF548;
    int *q;
    int c, v;

    if (*(int *)0x0C2A1214 == 1)
        return 0;
    if (!(g[5] & 2))
        return 0;
    c = *p - 1;
    *p = c;
    if (c < 0)
        *p = 20;
    else if (*p == 0)
        g[5] = (g[5] & -12) | 4;
    q = (int *)0x0C2A1AD8;
    v = *q - 64;
    *q = v;
    if (v < 0)
        *q = 0;
    if (*p < 15) {
        q = (int *)0x0C2A1ADC;
        v = *q - 64;
        *q = v;
        if (v < 0)
            *q = 0;
    }
    return 1;
}

/* The close step: counts down from m; when it reaches 0 the menu cursor list gets a new empty slot and the state moves on
   (2). Returns 0 when the menu is not in the closing state. */
int windowEnterStep(int m)
{
    unsigned int *g = (unsigned int *)0x0C2A11F4;
    int *p = (int *)0x0C0EF54C;
    int c, n;

    if (!(g[5] & 8))
        return 0;
    g[5] &= -5;
    c = *p - 1;
    *p = c;
    if (c < 0)
        *p = m;
    if (*p == 0) {
        n = g[0] + 1;
        g[0] = n;
        g[1 + n] = 0;
        if ((g[5] & 1) || *(int *)0x0C2A1218)
            windowClose();
        g[5] = (g[5] & -10) | 2;
    }
    return 1;
}
