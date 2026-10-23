/* Straight-line functions with calls and guards (batch gen_anb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int StopingCarInit(int, int, int);
int courseCarType(int);
int stopingCarSpawn(int a4, int a5);

int stopingCarSpawn(int a4, int a5)
{
    int t1;
    int t4;

    t1 = *(int *)((((((a4 << 1) + a4) << 2) + (*(int *)0xC2A6690)) + 0x8));
    if (((*(int *)((t1 + 0x0))) & 0x2000) != 0) {
        t4 = *(int *)0xC2A1B1C;
        if ((t4 & 24) != 0) {
            return StopingCarInit((courseCarType(0x1)), a4, a5);
        }
        return t4;
    }
    return t1;
}
