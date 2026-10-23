/* Straight-line functions with calls and guards (batch gen_aok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syIntAdrChk_dumpline(int, int, int);
int syIntAdrChk_finish(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_init(void);
int syIntAdrChk_printh(int);
int syIntAdrChk_prints(int);
int syIntChkDump(int a4, int a5);

int syIntChkDump(int a4, int a5)
{
    int t0;
    int t16;
    int t56;
    int t57;
    int t73;
    int t76;
    int stk[12];

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = *(short *)(((int)stk + 4));
    if (((unsigned short)t0 != 0x300) && (((unsigned short)t0 != 0x340) && (((unsigned short)t0 != 0x380) && ((unsigned short)t0 != 0x3C0)))) {
        return (unsigned short)t0;
    }
    *(unsigned int *)0xC2FB794 = a5;
    *(unsigned int *)(((int)stk + 12)) = (syIntAdrChk_init());
    syIntAdrChk_prints(0xC176E94);
    syIntAdrChk_dumpline(0xC176EB8, 0xA, 0x8);
    syIntAdrChk_dumpline(0xC176EC4, 0x12, 0x8);
    syIntAdrChk_dumpline(0xC176ED0, 0x1A, 0x8);
    syIntAdrChk_dumpline(0xC176EDC, 0x22, 0x8);
    syIntAdrChk_prints(0xC176EE8);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0xA8))));
    syIntAdrChk_prints(0xC176EF0);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0xAC))));
    syIntAdrChk_dumpline(0xC176EFC, 0x2D, 0x8);
    t16 = *(int *)0xC2FB794;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t16 + 0xF0) + 0x0)));
    *(unsigned int *)(((t16 + 0xF0) + 0x0)) = (*(int *)(((*(int *)0xC2FB794) + 0x4)));
    syIntAdrChk_dumpline(0xC176F0C, 0x35, 0x8);
    *(unsigned int *)((0xF0 + (*(int *)0xC2FB794))) = (*(int *)(((int)stk + 8)));
    syIntAdrChk_dumpline(0xC176F18, 0x2, 0x8);
    syIntAdrChk_prints(0xC176F28);
    syIntAdrChk_printh((*(int *)((0xF0 + (*(int *)0xC2FB794)))));
    syIntAdrChk_prints(0xC176F30);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0xF4))));
    syIntAdrChk_prints(0xC176F38);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0xF8))));
    syIntAdrChk_prints(0xC176F40);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0xFC))));
    syIntAdrChk_prints(0xC176F48);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0x0))));
    syIntAdrChk_prints(0xC176F50);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0x100))));
    syIntAdrChk_prints(0xC176F58);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0x104))));
    syIntAdrChk_prints(0xC176F60);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0x108))));
    t56 = 0x0;
    for (;;) {
        t57 = ((~(((~t56) + 0x1) & 0x3)) + 0x1);
        if ((int)t56 >= 0) {
            t57 = (t56 & 0x3);
        }
        if (t57 == 0) {
            syIntAdrChk_prints(0xC176F68);
        }
        syIntAdrChk_printh((*(int *)((((t56 << 2) + 0xC176D80) + 0x0))));
        syIntAdrChk_prints(0xC176F6C);
        syIntAdrChk_printh((*(int *)(((*(int *)((((t56 << 2) + 0xC176D80) + 0x0))) + 0x0))));
        syIntAdrChk_prints(0xC176F70);
        t56 = (t56 + 0x1);
        if ((int)t56 >= (int)0x45) {
            break;
        }
    }
    syIntAdrChk_prints(0xC176F68);
    t73 = 0xC176F74;
    if ((*(int *)(((int)stk + 12))) != 0) {
        
        t73 = 0xC176FC0;
    }
    syIntAdrChk_prints(t73);
    for (;;) {
        t76 = syIntAdrChk_getchar();
        if ((signed char)t76 == 13) {
            break;
        }
    }
    *(unsigned int *)0xFF000024 = (unsigned short)(*(short *)(((int)stk + 4)));
    return syIntAdrChk_finish();
}
