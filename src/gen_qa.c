/* Straight-line functions with calls and guards (batch gen_qa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03b544(int);
int FUN_0c03b698(int);
int FUN_0c03df1a(void);

int FUN_0c03df1a(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t11;

    t0 = *(int *)0xC2A1218;
    if (t0 != 0) {
        t1 = FUN_0c03b698(t0);
        *(unsigned int *)0xC2A1218 = 0x0;
        t11 = t1;
    } else {
        FUN_0c03b544(0x4);
        FUN_0c03b698(0x0);
        *(unsigned int *)0xC2A11B0 = 0x0;
        t4 = *(int *)0xC2A1228;
        *(unsigned int *)0xC1EE234 = t4;
        t5 = *(int *)0xC2A122C;
        *(unsigned int *)0xC1EE238 = t5;
        t6 = *(int *)0xC1EE234;
        if (t6 == 0) {
            *(unsigned int *)0xC1EE210 = 0x0;
            *(unsigned int *)0xC1EE214 = 0x0;
            *(unsigned int *)0xC1EE20C = 0x0;
        }
        t11 = t5;
    }
    return t11;
}
