/* Draft: generated C that the check did not accept (DIFFERS case 1: calls). Not proven equivalent. */

int mwlRnaSetSvrInt(void);
int mwRnaInitCs(void);
int mwlSbGetWorkTbl(void);
int memset(int, int, int);
int mwRnaErrEntryFunc(int, int);

int mwRnaInit(void)
{
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;

    mwRnaInitCs();
    memset(0xC2F605C, 0x0, 0x480);
    memset(0xC2F64DC, 0x0, 0x820);
    t3 = 0x0;
    t4 = 0xC2F6CFC;
    do {
        t3 = (t3 + 0x1);
        *(unsigned int *)((t4 + 0x0)) = 0x80808080;
        t4 = (t4 + 0x4);
    } while ((int)t3 < (int)0x200);
    t5 = *(int *)0xC178644;
    if (t5 == 0) {
        t6 = mwlSbGetWorkTbl();
        *(unsigned int *)0xC178644 = t6;
    }
    t8 = *(int *)0xC178644;
    t9 = *(int *)((t8 + 0xC));
    t10 = *(int *)0xC178648;
    t11 = ((int (*)(int))(t9))(t10);
    mwlRnaSetSvrInt();
    return mwRnaErrEntryFunc(0x0, 0x0);
}

