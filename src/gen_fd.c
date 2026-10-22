/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Const_Proposal(void);
int Count_Remain_Drop(void);
int Put_Remain_Icon(void);
int Start_Excellent(void);
int Start_Fault(int);
int Exec_DCmini_Game8(void);

int Exec_DCmini_Game8(void)
{
    if ((*(int *)0xC2A991C) == 0) {
        if ((int)(*(int *)0xC1794D0) >= (int)0x5) {
            Start_Excellent();
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
        }
        if ((*(int *)0xC1EE794) == 0) {
            Start_Fault(0x1);
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
        }
    }
    Count_Remain_Drop();
    Put_Remain_Icon();
    return Const_Proposal();
}
