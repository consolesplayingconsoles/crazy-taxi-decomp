/* Shinobi library, SG_SYCBL (the video cable): our own C, written from the disassembly. */

int syCblCheckCable(void);
void kbCfgIni(int a);
char *FUN_0c167800(void);

int syCblCheckBroadcast(void)
{
    char *p;

    kbCfgIni(0);
    p = FUN_0c167800();
    switch (p[12]) {
    case 49: return 1;
    case 50: return 2;
    case 51: return 3;
    default: return 0;
    }
}

int syCblCheck(void)
{
    int cable = syCblCheckCable();
    int b = syCblCheckBroadcast();

    if (cable == 0)
        return 1;
    if (b == 1 || b == 3)
        return 2;
    return 0;
}
