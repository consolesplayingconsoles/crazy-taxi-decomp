/* Straight-line functions with calls and guards (batch gen_sm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiQueryFinishDMA(int);
void kmQueryFinishLastTextureDMA(void);

void kmQueryFinishLastTextureDMA(void)
{
    if ((*(int *)0xC2EAAB0) != 1) {
        if ((kmiQueryFinishDMA((*(int *)0xC2EAAAC))) == 1) {
            return;
        }
        return;
    }
}
