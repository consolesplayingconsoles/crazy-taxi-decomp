/* Straight-line functions with calls and guards (batch gen_kv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Advtise(void);
int AdvExecState(void);

int AdvExecState(void)
{
    int t1;
    int t2;

    t1 = *(int *)((((*(int *)0xC1EE238) << 2) + 0xC08ADC4));
    if (t1 == 0) {
        *(unsigned int *)0xC1EE238 = 0x0;
    } else {
        t2 = ((int (*)(int))(t1))(0xC1EE238);
    }
    return Advtise();
}
