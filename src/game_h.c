/* Game functions (batch h): the arrow-off voice prompts, the two saved options (a byte and the audio mode), a wrapped
   difference. Globals are addressed directly where the decomp has no name for them yet. */

void Init_Standard(void);
void Voice_ShutUp(int a);
int Voice_Request(int id, int a, int b, int c);
int FUN_0c03bea0(int a, int *p, int n);
int FUN_0c03c792(int id, int table, int n, int v);
void SetAudio(void);
int FUN_0c0813d0(int x);

#define HUD_FLAGS       (*(unsigned int *)0x0C2A75E0)

void FUN_0c05355e(void)
{
    if (*(int *)0x0C1EE210 == 2)
        return;
    if (*(int *)0x0C2A736C)
        return;
    HUD_FLAGS |= 0x01000000;
    Init_Standard();
    Voice_ShutUp(0);
    Voice_Request(0x0C130B48, 0, 127, 0);
    *(int *)0x0C2A8FB0 = 0;
    *(int *)0x0C2A8FBC = *(int *)0x0C1EE244;
}

void FUN_0c0535fc(void)
{
    if (*(int *)0x0C1EE210 == 2)
        return;
    if (*(int *)0x0C2A736C)
        return;
    HUD_FLAGS |= 0x04000000;
    Init_Standard();
    Voice_ShutUp(0);
    Voice_Request(0x0C130B48, 0, 127, 0);
    *(int *)0x0C2A8FB8 = 0;
    *(int *)0x0C2A8FBC = *(int *)0x0C1EE244;
}

/* The saved option byte at 0C28A4E9: read again from the save (m set) and written back when that succeeded, then passed to
   the option screen's set-up. */
int FUN_0c03d678(int m)
{
    int v = *(unsigned char *)0x0C28A4E9;

    if (m) {
        if (FUN_0c03bea0(0, &v, 8) == 1)
            *(char *)0x0C28A4E9 = v;
    }
    return FUN_0c03c792(m ? 0x8017 : 23, 0x0C09E99C, 8, v);
}

int FUN_0c03d9b4(int m)
{
    int v = *(int *)0x0C2A11BC;

    if (m) {
        if (FUN_0c03bea0(0, &v, 2) == 1) {
            *(int *)0x0C2A11BC = v;
            SetAudio();
        }
    }
    return FUN_0c03c792(m ? 0xC017 : 0x4017, 0x0C09EAFC, 2, v);
}

/* The difference b - a, a full turn c nearer when it is more than half of it. */
int FUN_0c04a38a(int a, int b, int c)
{
    int d = b - a;

    if (FUN_0c0813d0(d) > ((c - 1) >> 1)) {
        if (b > a)
            return d - c;
        return d + c;
    }
    return d;
}
