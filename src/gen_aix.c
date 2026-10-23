/* A function proven on cases written by hand (tools/handcase.py). */

int nlFree(int);
int CleanColliObj(void);

int CleanColliObj(void)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t3;

    t1 = 0xC26EBCC;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t5 = t4;
        for (;;) {
            if (t5 == 0) {
                break;
            }
            *(unsigned int *)(((*(int *)((t5 + 0x0))) + 0x2C)) = 0x0;
            t3 = (*(int *)((t5 + 0xC)));
            nlFree(t5);
            t5 = t3;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x16) {
            break;
        }
    }
    t9 = 0x0;
    t10 = 0x0;
    for (;;) {
        t10 = (t10 + 0x1);
        *(unsigned int *)((0xC26EC24 + t9)) = 0x0;
        *(unsigned int *)((0xC26EBCC + t9)) = 0x0;
        *(unsigned int *)((0xC26EC7C + t9)) = 0x0;
        t11 = t9;
        t9 = (t9 + 0x4);
        if ((int)t10 >= (int)0x16) {
            break;
        }
    }
    *(unsigned int *)0xC26ECD4 = 0x0;
    return t11;
}
