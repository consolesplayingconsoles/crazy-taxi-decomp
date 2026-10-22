/* Straight-line functions with calls and guards (batch gen_ll): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chk_DispCredit(void);
int End_Adv_Title_LOGO(void);
int AdvStateTitle2(void);

int AdvStateTitle2(void)
{
    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    if ((int)(*(int *)0xC0E5310) > 0) {
        *(unsigned int *)0xC0E5310 = ((*(int *)0xC0E5310) - 1);
        if ((int)(*(int *)0xC1EE240) > (int)0x5) {
            *(unsigned int *)0xC1EE240 = 0x5;
        }
    }
    if ((int)(*(int *)0xC1EE240) >= (int)0xF0) {
        *(unsigned int *)0xC1EE238 = 0x0;
        return End_Adv_Title_LOGO();
    }
    return Chk_DispCredit();
}
