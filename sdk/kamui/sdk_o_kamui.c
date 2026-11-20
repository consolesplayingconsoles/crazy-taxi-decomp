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

/* The device type (bit 0) and its two function pointers. */

/* The first free 72-byte handle (first byte 0): marked used (1), numbered; or 0 with the error -249 set. */


