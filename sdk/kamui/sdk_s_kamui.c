/* Small functions (batch s): Kamui callback and buffer setters, a bus status test, a delay loop, a BCD decode, and
   three small game sequences. */

int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void Voice_ShutUp(int i);
void CarSel_GotoMotion(void);
void selectDrawDriver(int d);

#define KM_DEVICE       (*(int *)0x0C178268)

int kmfSetFatalErrorCallback(void *f)
{
    kmiRegisterCallback(KM_DEVICE, 8, f, 0);
    return 0;
}

int kmSetPALEXTCallback(void *f)
{
    kmiRegisterCallback(KM_DEVICE, 9, f, 0);
    return 0;
}

int kmfSetVertexBufferBaseAddress(int a, int b)
{
    *(int *)0x0C2EAAC0 = a;
    *(int *)0x0C2EAAC4 = b;
    return 0;
}

int kmSetStripLength(int n)
{
    *(int *)0x0C2EA85C = n;
    return 0;
}


/* A busy-wait of 50000 steps. */

/* A packed decimal byte (two digits) as a number. */


