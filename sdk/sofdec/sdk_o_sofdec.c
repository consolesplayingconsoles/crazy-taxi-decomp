/* Small library functions (batch o): Kamui callback table init, the backup library's device copy and type, a file
   handle allocator, ADX file system init and finish, the SJ decoder's server loop. */

void *memset(void *p, int c, unsigned int n);
void ADXSJD_ExecHndl(char *p);

/* Two tables of callback slots (an entry and a 0 argument, 16 bytes apart), the shared word cleared. */

/* 24 device records of 24 bytes from the 44-byte ones at +40 of the structure at *0C2FA538. */

/* The device type (bit 0) and its two function pointers. */

/* The first free 72-byte handle (first byte 0): marked used (1), numbered; or 0 with the error -249 set. */

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
