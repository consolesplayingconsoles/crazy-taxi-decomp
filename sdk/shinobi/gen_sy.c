/* Straight-line functions with calls and guards (batch gen_sy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsGetDrvStatG(void);
int gdFsReqDrvStatG(void);
void gdFsIsTrayOpenG(void);

void gdFsIsTrayOpenG(void)
{
    int t2;

    if ((*(int *)(((*(int *)0xC177A8C) + 0x34))) != 1) {
        t2 = gdFsGetDrvStatG();
        if (t2 == 6) {
            *(unsigned int *)(((*(int *)0xC177A8C) + 0x34)) = 0x1;
            return;
        }
        if (t2 == 0) {
            gdFsReqDrvStatG();
        }
        return;
    }
}
