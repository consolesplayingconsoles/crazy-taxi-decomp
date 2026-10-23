/* Straight-line functions with calls and guards (batch gen_ef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLineBlendFunc(int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int InitSpark(void);

int InitSpark(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = ((short)t0 * (short)0x1C);
        t0 = (t0 + 0x1);
        *(unsigned int *)((((short)t1 + 0xC274DF8) + 0x18)) = 0xFFFFFFFF;
        if ((int)t0 >= (int)0x5A) {
            break;
        }
    }
    *(unsigned int *)0xC2757E0 = 0x0;
    *(unsigned int *)0xC2757DC = 0x0;
    *(unsigned int *)0xC2757D8 = 0x0;
    *(unsigned int *)0xC2757D4 = 0x0;
    *(unsigned int *)0xC2757D0 = 0x0;
    nlLineBlendFunc(0x1, 0x4);
    nlLineSetThickness((1.0f + 1.0f));
    return nlLineSetDiv((*(float *)0xC03784C));
}
