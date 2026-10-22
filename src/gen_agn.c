/* Straight-line functions with calls and guards (batch gen_agn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckSetDrive(int, int);
int buGetDiskInfo(int, int);
int memset(int, int, int);
void BupCompleteCallback(int a4, int a5, int a6);

void BupCompleteCallback(int a4, int a5, int a6)
{
    if (a5 != 1) {
        if (a5 != 2) {
            *(unsigned int *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x4)) = a6;
            buGetDiskInfo(a4, (((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x14));
        } else {
            *(unsigned short *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x0)) = 0x0;
            *(unsigned short *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x2)) = 0x0;
            *(unsigned int *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x8)) = 0x0;
            *(unsigned int *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0xC)) = 0x0;
            *(unsigned int *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x10)) = 0x0;
            memset((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x14), 0x0, 0x38);
        }
    } else {
        if (a6 == 0) {
            *(unsigned short *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x0)) = 0x1;
            if ((buGetDiskInfo(a4, (((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x14))) == 0) {
                *(unsigned short *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x2)) = 0x1;
            }
            *(unsigned int *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((((short)((short)a4 * (short)0x4C) + 0xC291E50) + 0x10)) = 0x0;
    if (a5 == 2) {
        CheckSetDrive(a4, a5);
    }
}
