/* Straight-line functions with calls and guards (batch gen_arc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwRnaErrCallFunc(int, int, int, int, int);
int mwRnaSetOutPan(int, int, int);
int mwRnaSetNumChan(int a4, int a5, int a6, int a7);
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };


int mwRnaSetNumChan(int a4, int a5, int a6, int a7)
{
    int t4;
    int t7;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(a4, a5, a6, a7, 0xC176680));
    }
    if ((int)a5 > (int)(unsigned char)(*(signed char *)((a4 + 0x2)))) {
        return (mwRnaErrCallFunc(a4, a5, a6, a7, 0xC176724));
    }
    *(unsigned char *)((a4 + 0x3)) = a5;
    t4 = *(int *)((a4 + 0x38));
    t7 = ((int (*)(int, int))((*(int *)(((*(int *)((t4 + 0x0))) + 0x1C)))))(t4, (signed char)a5);
    if (a5 == 1) {
        (((struct o64_uint *)(a4))->v) = 0x0;
        (((struct o68_uint *)(a4))->v) = 0x0;
    } else {
        (((struct o64_uint *)(a4))->v) = 0xFFFFFFF1;
        (((struct o68_uint *)(a4))->v) = 0xF;
    }
    mwRnaSetOutPan(a4, 0x0, ((((struct o64_int *)(a4))->v)));
    return mwRnaSetOutPan(a4, 0x1, ((((struct o68_int *)(a4))->v)));
}
