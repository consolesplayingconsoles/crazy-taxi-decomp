/* Small functions (batch s): Kamui callback and buffer setters, a bus status test, a delay loop, a BCD decode, and
   three small game sequences. */

int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void Voice_ShutUp(int i);
void CarSel_GotoMotion(void);
void selectDrawDriver(int d);

#define KM_DEVICE       (*(int *)0x0C178268)


/* A busy-wait of 50000 steps. */

/* A packed decimal byte (two digits) as a number. */

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
