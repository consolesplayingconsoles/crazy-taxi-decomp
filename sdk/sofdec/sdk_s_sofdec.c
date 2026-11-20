/* Small functions (batch s): Kamui callback and buffer setters, a bus status test, a delay loop, a BCD decode, and
   three small game sequences. */

int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void Voice_ShutUp(int i);
void CarSel_GotoMotion(void);
void selectDrawDriver(int d);

#define KM_DEVICE       (*(int *)0x0C178268)


/* A busy-wait of 50000 steps. */
void adxf_wait_1ms(void)
{
    volatile int n = 0xC350;

    do
        n--;
    while (n);
}

/* A packed decimal byte (two digits) as a number. */


