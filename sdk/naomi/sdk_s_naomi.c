/* Small functions (batch s): Kamui callback and buffer setters, a bus status test, a delay loop, a BCD decode, and
   three small game sequences. */

int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void Voice_ShutUp(int i);
void CarSel_GotoMotion(void);
void selectDrawDriver(int d);

#define KM_DEVICE       (*(int *)0x0C178268)


int nlsndBlockMoveStatus(void)
{
    if (*(volatile int *)0xA0800098)
        return 1;
    return 0;
}

/* A busy-wait of 50000 steps. */

/* A packed decimal byte (two digits) as a number. */


