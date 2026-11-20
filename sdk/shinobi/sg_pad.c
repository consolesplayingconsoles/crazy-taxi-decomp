/* Shinobi library, SG_PAD (the peripheral server): our own C, written from the disassembly. */

typedef struct {
    char bytes[52];
} PdPeripheralSlot;

extern int gPdServerActive;
extern int gPdPeripheralActive;
extern PdPeripheralSlot gPdPeripheralSlots[24];     /* 0x4e0 bytes */
extern int gPdPeripheralSlotWords[24];

void pdExecPeripheralServerUser(void);
void kdExitSystem(void);
void *memset(void *p, int c, unsigned int n);
void _pd_peripheral_set_null(PdPeripheralSlot *s);

void pdExecPeripheralServer(void)
{
    if (gPdServerActive != 0)
        pdExecPeripheralServerUser();
}

void pdExitPeripheral(void)
{
    int i;

    if (gPdPeripheralActive)
        kdExitSystem();
    memset(gPdPeripheralSlots, 0, 0x4e0);
    for (i = 0; i < 24; i++) {
        _pd_peripheral_set_null(&gPdPeripheralSlots[i]);
        gPdPeripheralSlotWords[i] = 0;
    }
}
