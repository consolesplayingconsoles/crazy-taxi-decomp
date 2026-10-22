/* Game functions (batch j): the course tables' selection, the reverse-mode button sequence, the combo timer step,
   the arrow mode. Globals are addressed directly where the decomp has no name for them yet. */

int setReplayType(int m)
{
    *(int *)0x0C0F2B28 = m;
    *(int *)0x0C0F2B2C = 0x1518;
    if (*(int *)0x0C1EE20C == 0) {
        *(int *)0x0C2A62A8 = 0x0C0A47A0;
        *(int *)0x0C2A62AC = 0x0C0F3F40;
        return m;
    }
    *(int *)0x0C2A62A8 = 0x0C0B28A0;
    *(int *)0x0C2A62AC = 0x0C0F40D8;
    return 0x0C0B28A0;
}

/* The reverse-mode button sequence at 0C2A75BC: step 0 waits for button 0x10000 with 0x20000 not held, step 1 for its
   release, step 2 for the next press with the 4 flag, which turns the reverse mode on. */
void DC_Reverse_Command_Check(void)
{
    int *st = (int *)0x0C2A75BC;
    unsigned int *sw = (unsigned int *)0x0C1EE24C;

    if (*st == 0) {
        if (!(sw[0] & 0x20000) && (sw[0] & 0x10000))
            (*st)++;
    }
    if (*st == 1) {
        if (!(sw[0] & 0x10000))
            (*st)++;
    }
    if (*st == 2) {
        if (!(sw[0] & 0x20000) && (sw[0] & 0x10000) && (sw[1] & 4))
            *(int *)0x0C17948C = 1;
    }
}

void CarSel_GotoMotion(void)
{
    int **pp = (int **)0x0C2A751C;
    int *tbl = (int *)0x0C2A7538;
    int cnt, v;

    if (*(int *)0x0C2A7518 != 1)
        return;
    cnt = *(int *)0x0C2A75A8;
    if (cnt > ((int *)0x0C1305DC)[**pp]) {
        *(int *)0x0C2A75AC = tbl[**pp];
        if (**pp == 0)
            v = 15;
        else if (**pp == 2)
            v = 3;
        else
            v = 8;
        *(int *)0x0C2A75B0 = v;
        tbl[**pp] = 0;
        *(int *)0x0C2A7518 = 2;
    } else
        *(int *)0x0C2A75A8 = cnt + 1;
}

void SetLandmark(int m)
{
    int *s = (int *)0x0C0ED2AC;
    int *p = (int *)0x0C26E398;
    int c;

    if (*(int *)0x0C1EE210 == 2)
        return;
    if (*s != 4)
        *s = m;
    c = *p;
    if (m == 0) {
        if (c > 4)
            *p = 5;
        else if (c > 0)
            *p = 3;
        *s = 4;
    } else if (m == 3 || m == 2) {
        if (c > 0 && c < 3)
            *p = 3;
    }
}
