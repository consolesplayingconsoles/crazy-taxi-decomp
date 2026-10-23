/* Straight-line functions with calls and guards (batch gen_alu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_TotalDrum(void);

int Put_TotalDrum(void)
{
    if ((*(int *)0xC2A8CB4) == 0) {
        if ((int)(*(int *)0xC2A8EAC) > 0) {
            if ((*(int *)0xC2A8CB8) == 48) {
                return ((int (*)(void))(0xC054726))();
            }
            return ((int (*)(void))(0xC054724))();
        }
        return ((int (*)(void))(0xC054724))();
    }
    return ((int (*)(void))(0xC054724))();
}
