/* Small functions (batch s): Kamui callback and buffer setters, a bus status test, a delay loop, a BCD decode, and
   three small game sequences. */

int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void Voice_ShutUp(int i);
void CarSel_GotoMotion(void);
void selectDrawDriver(int d);

#define KM_DEVICE       (*(int *)0x0C178268)


/* A busy-wait of 50000 steps. */

/* A packed decimal byte (two digits) as a number. */
int bcd2bin(signed char c)
{
    return ((c & 0xF0) >> 4) * 10 + (c & 15);
}


