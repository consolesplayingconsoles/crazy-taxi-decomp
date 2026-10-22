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

int FUN_0c07e880(void)
{
    if (*(volatile int *)0xA0800098)
        return 1;
    return 0;
}

/* A busy-wait of 50000 steps. */
void adxf_wait_1ms(void)
{
    volatile int n = 0xC350;

    do
        n--;
    while (n);
}

/* A packed decimal byte (two digits) as a number. */
int FUN_0c15f4c8(signed char c)
{
    return ((c & 0xF0) >> 4) * 10 + (c & 15);
}

void Voice_Clear(void)
{
    int i = 0;

    do
        Voice_ShutUp(i++);
    while (i < 4);
}

void CarSel_Select(void)
{
    if (*(int *)0x0C2A7514 == 0)
        CarSel_GotoMotion();
    selectDrawDriver(**(int **)0x0C2A751C);
}
