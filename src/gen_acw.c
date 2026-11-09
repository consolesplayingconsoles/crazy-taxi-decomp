/* Straight-line functions with calls and guards (batch gen_acw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camGetOffSelect(void);
struct o0_int { int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };


int camGetOffSelect(void)
{
    int t0;
    int t2;
    int t4;
    int t10;

    t0 = (((struct o0_int *)0xC2AD54C)->v);
    t2 = (int)(((unsigned int)(*(int *)(((0x148 + t0) + 0x0))) >> 21) & 0x3);
    if (t2 != 0) {
        if ((t2 == 1) || (t2 == 2)) {
            (((struct o30_uint *)0xC2AD54C)->v) = 0x4;
        }
        t10 = t2;
    } else {
        t4 = *(int *)((t0 + 0x110));
        if ((t4 != 0xC956FCC) && ((t4 != 0xC95A230) && ((t4 != 0xC95D7C4) && ((t4 != 0xC960308) && ((t4 != 0xC962F0C) && ((t4 != 0xC9659C0) && ((t4 != 0xC9684A4) && (t4 != 0xC96B138)))))))) {
            if ((t4 != 0xC96DE8C) && (t4 != 0xC9702C0)) {
                (((struct o30_uint *)0xC2AD54C)->v) = 0x3;
            } else {
                (((struct o30_uint *)0xC2AD54C)->v) = 0x2;
            }
        } else {
            (((struct o30_uint *)0xC2AD54C)->v) = 0x1;
        }
        t10 = t4;
    }
    (((struct o34_uint *)0xC2AD54C)->v) = 0x0;
    return t10;
}
