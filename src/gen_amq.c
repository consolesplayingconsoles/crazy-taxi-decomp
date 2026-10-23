/* Straight-line functions with calls and guards (batch gen_amq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecEndRoll(void);
int ExecRenderTexture1st(float);
int ExecRenderTexture2nd(void);
int exec_loop_Replay(void);
int replayChangeControl(int);
int gameState13(float f4);

int gameState13(float f4)
{
    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    ExecRenderTexture1st(f4);
    if ((replayChangeControl(0x3)) == 0) {
        exec_loop_Replay();
    }
    ExecRenderTexture2nd();
    return ExecEndRoll();
}
