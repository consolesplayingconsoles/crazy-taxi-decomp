/* A function proven on cases written by hand (tools/handcase.py). */

int FUN_0c038554(void);

int FUN_0c038554(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xC0EDBB8;
    t1 = (int)((int)(0xF2A10000 + t0) / (int)0x20);
    if ((unsigned int)t0 < (unsigned int)0xCE98000) {
        t2 = t0;
        for (;;) {
            if ((*(int *)((t2 + 0x14))) != 0) {
                *(unsigned int *)((t2 + 0x14)) = ((*(int *)((t2 + 0x14))) + (((t1 << 2) << 2) << 1));
            }
            t2 = (t2 + 0x20);
            if ((unsigned int)t2 >= (unsigned int)0xCE98000) {
                break;
            }
        }
    }
    return t1;
}
