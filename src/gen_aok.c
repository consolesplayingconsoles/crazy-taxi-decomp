/* Straight-line functions with calls and guards (batch gen_aok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syIntAdrChk_dumpline(int, int, int);
int syIntAdrChk_finish(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_init(void);
int syIntAdrChk_printh(int);
int syIntAdrChk_prints(int);
int syIntChkDump(int a4, int a5);
struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };


int syIntChkDump(int a4, int a5)
{
    int t0;
    int t16;
    int t56;
    int t57;
    int t73;
    int t76;
    int stk[11];

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = *(short *)(((int)stk + 0));
    if (((unsigned short)t0 != 0x300) && (((unsigned short)t0 != 0x340) && (((unsigned short)t0 != 0x380) && ((unsigned short)t0 != 0x3C0)))) {
        return (unsigned short)t0;
    }
    *(unsigned int *)0xC2FB794 = a5;
    *(unsigned int *)(((int)stk + 8)) = (syIntAdrChk_init());
    syIntAdrChk_prints(0xC176E94);
    syIntAdrChk_dumpline(0xC176EB8, 0xA, 0x8);
    syIntAdrChk_dumpline(0xC176EC4, 0x12, 0x8);
    syIntAdrChk_dumpline(0xC176ED0, 0x1A, 0x8);
    syIntAdrChk_dumpline(0xC176EDC, 0x22, 0x8);
    syIntAdrChk_prints(0xC176EE8);
    syIntAdrChk_printh(((((struct oA8_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_prints(0xC176EF0);
    syIntAdrChk_printh(((((struct oAC_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_dumpline(0xC176EFC, 0x2D, 0x8);
    t16 = *(int *)0xC2FB794;
    *(unsigned int *)(((int)stk + 4)) = ((((struct oF0_int *)(t16))->v));
    (((struct oF0_uint *)(t16))->v) = (*(int *)(((*(int *)0xC2FB794) + 0x4)));
    syIntAdrChk_dumpline(0xC176F0C, 0x35, 0x8);
    (((struct oF0_uint *)((*(int *)0xC2FB794)))->v) = (*(int *)(((int)stk + 4)));
    syIntAdrChk_dumpline(0xC176F18, 0x2, 0x8);
    syIntAdrChk_prints(0xC176F28);
    syIntAdrChk_printh(((((struct oF0_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_prints(0xC176F30);
    syIntAdrChk_printh(((((struct oF4_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_prints(0xC176F38);
    syIntAdrChk_printh(((((struct oF8_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_prints(0xC176F40);
    syIntAdrChk_printh(((((struct oFC_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_prints(0xC176F48);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC2FB794) + 0x0))));
    syIntAdrChk_prints(0xC176F50);
    syIntAdrChk_printh(((((struct o100_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_prints(0xC176F58);
    syIntAdrChk_printh(((((struct o104_int *)((*(int *)0xC2FB794)))->v)));
    syIntAdrChk_prints(0xC176F60);
    syIntAdrChk_printh(((((struct o108_int *)((*(int *)0xC2FB794)))->v)));
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
    if ((*(int *)(((int)stk + 8))) != 0) {
        
        t73 = 0xC176FC0;
    }
    syIntAdrChk_prints(t73);
    for (;;) {
        t76 = syIntAdrChk_getchar();
        if ((signed char)t76 == 13) {
            break;
        }
    }
    *(unsigned int *)0xFF000024 = (unsigned short)(*(short *)(((int)stk + 0)));
    return syIntAdrChk_finish();
}
