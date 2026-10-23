/* Straight-line functions with calls and guards (batch gen_yg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Iraira(void);
int extRand(void);
int psgEnterState5(int a4, int a5);

int psgEnterState5(int a4, int a5)
{
    int t6;
    int t14;
    int t31;
    int t21;
    int stk[20];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x30)) = *(struct mv3 *)(0xC0D5EEC); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x24)) = *(struct mv3 *)(0xC0D5EF8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)(0xC0D5F04); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0D5F10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0D5F1C); }
    if (a5 != 0) {
        if (a5 != 1) {
            t6 = a5;
            if (a5 != 2) {
            } else {
                *(unsigned int *)((a4 + 0x34)) = (*(int *)((((((int)((unsigned int)(extRand()) % (unsigned int)0x3)) << 2) + ((int)stk + 4)) + 0x0)));
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                t6 = (Chat_Iraira());
            }
            t21 = t6;
        } else {
            t14 = (int)((unsigned int)(extRand()) % (unsigned int)0x3);
            *(unsigned int *)((a4 + 0x34)) = (*(int *)((((t14 << 2) + (((int)stk + 4) + 0x30)) + 0x0)));
            *(float *)((a4 + 0x38)) = 0.0f;
            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
            *(float *)((a4 + 0x108)) = 0.0f;
            *(float *)((a4 + 0x10C)) = 0.0f;
            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            *(unsigned int *)(((0x124 + a4) + 0x0)) = (*(int *)((((((int)stk + 4) + 0x24) + (t14 << 2)) + 0x0)));
            *(unsigned int *)((a4 + 0x128)) = (*(int *)((((t14 << 2) + (((int)stk + 4) + 0x18)) + 0x0)));
            t21 = (Chat_Iraira());
        }
        t31 = t21;
    } else {
        *(unsigned int *)((a4 + 0x34)) = 0xC945094;
        *(float *)((a4 + 0x38)) = 0.0f;
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 0.0f;
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
        t31 = (Chat_Iraira());
    }
    return t31;
}
