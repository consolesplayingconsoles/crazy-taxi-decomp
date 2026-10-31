/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int bootDevWaitBusy(void);

int bootDevWaitBusy(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if (((*(signed char *)(((*(int *)0xAC00F728) + 0x8))) & 0x40) == 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x270F) {
                break;
            }
            continue;
        }
        break;
    }
    return (((t0 == 0x270F)) ? 1 : 0);
}
