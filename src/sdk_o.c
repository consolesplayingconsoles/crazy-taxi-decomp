/* Small library functions (batch o): Kamui callback table init, the backup library's device copy and type, a file
   handle allocator, ADX file system init and finish, the SJ decoder's server loop. */

void *memset(void *p, int c, unsigned int n);
void ADXSJD_ExecHndl(char *p);

/* Two tables of callback slots (an entry and a 0 argument, 16 bytes apart), the shared word cleared. */
void kmiInitCallback(void)
{
    int *a = (int *)0x0C2EA8B0;
    int *b = (int *)0x0C2EA8B8;

    *(int *)0x0C2EA92C = 0;
    a[0] = 0x0C158E52; a[1] = 0;
    b[0] = 0x0C158E56; b[1] = 0;
    a += 4; a[0] = 0x0C158E5A; a[1] = 0;
    b += 4; b[0] = 0x0C158E80; b[1] = 0;
    a += 4; a[0] = 0x0C158E84; a[1] = 0;
    b += 4; b[0] = 0x0C158E88; b[1] = 0;
    a += 4; a[0] = 0x0C158E8C; a[1] = 0;
    b += 4; b[0] = 0x0C158E90; b[1] = 0;
    a += 4; a[0] = 0x0C158E94; a[1] = 0;
    b += 4; b[0] = 0x0C158ED2; b[1] = 0;
}

/* 24 device records of 24 bytes from the 44-byte ones at +40 of the structure at *0C2FA538. */
void copy_device(void)
{
    char *s = *(char **)0x0C2FA538 + 40;
    char *d = (char *)0x0C2EC014;
    int i;

    for (i = 0; i < 24; i++) {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        *(int *)(d + 8) = *(int *)(s + 16);
        d[4] = s[8];
        d[5] = s[9];
        d[6] = s[10];
        d[7] = s[11];
        *(int *)(d + 12) = *(int *)(s + 20);
        d += 24;
        s += 44;
    }
}

/* The device type (bit 0) and its two function pointers. */
void vmsfs_setdevicetype(int t)
{
    int *p;

    t &= 1;
    **(int **)0x0C2EE98C = t;
    p = *(int **)0x0C2EE98C;
    if (t == 1) {
        p[3] = 0x0C1701D4;
        (*(int **)0x0C2EE98C)[4] = 0x0C1701E6;
    } else {
        p[3] = 0x0C1701DE;
        (*(int **)0x0C2EE98C)[4] = 0x0C1701EE;
    }
}

/* The first free 72-byte handle (first byte 0): marked used (1), numbered; or 0 with the error -249 set. */
char *open_file_handle(void)
{
    char *p = (char *)0x0C2F3650;
    int i;

    for (i = 0; i < *(int *)0x0C2F3890; i++, p += 72) {
        if (!*p) {
            *p = 1;
            *(int *)(p + 12) = i;
            return p;
        }
    }
    *(int *)0x0C2F3894 = -249;
    return 0;
}

void ADXF_Init(void)
{
    memset((void *)0x0C2B9C38, 0, 0x300);
    memset((void *)0x0C2B9F38, 0, 0x400);
    memset((void *)0x0C2BA33C, 255, 0x1000);
    memset((void *)0x0C2BB33C, 0, 32);
    *(int *)0x0C2BB35C = 0;
    *(int *)0x0C2BA338 = 0;
}

void ADXF_Finish(void)
{
    *(int *)0x0C2BA338 = 0;
    *(int *)0x0C2BB35C = 0;
    memset((void *)0x0C2BB33C, 0, 32);
    memset((void *)0x0C2BA33C, 255, 0x1000);
    memset((void *)0x0C2B9F38, 0, 0x400);
    memset((void *)0x0C2B9C38, 0, 0x300);
}

void ADXSJD_ExecServer(void)
{
    char *p = (char *)0x0C2F4F1C;

    do {
        if (p[0] == 1)
            ADXSJD_ExecHndl(p);
        p += 152;
    } while (p < (char *)0x0C2F4F1C + 1216);
}
