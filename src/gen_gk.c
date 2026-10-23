extern int __init_dteapi_cc_f();
/* Straight-line functions with calls and guards (batch gen_gk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buInit(int, int, int, int);
int memset(int, int, int);
int saveBufferInit(int);
int BupInit(void);

int BupInit(void)
{
    int t17;
    int t20;
    int t22;
    int t24;
    int t26;
    int t28;
    int t30;
    int t23;
    int t27;
    int t31;

    memset(0xC291E50, 0x0, 0x260);
    buInit(0xF, 0xFF, 0xC2920B0, ((int)__init_dteapi_cc_f));
    *(unsigned char *)0xC28A4E8 = (*(signed char *)0xC09D048);
    *(unsigned char *)0xC28A4E9 = (*(signed char *)0xC09D049);
    *(unsigned char *)0xC28A4EA = (*(signed char *)0xC09D04A);
    *(unsigned char *)0xC28A4EB = (*(signed char *)0xC09D04B);
    *(unsigned char *)0xC28A4EC = (*(signed char *)0xC09D04C);
    *(unsigned char *)0xC28A4ED = (*(signed char *)0xC09D04D);
    *(unsigned char *)0xC28A4EE = (*(signed char *)0xC09D04E);
    *(unsigned char *)0xC28A4EF = (*(signed char *)0xC09D04F);
    *(unsigned char *)0xC28A4F0 = (*(signed char *)0xC09D050);
    *(unsigned char *)0xC28A4F1 = (*(signed char *)0xC09D051);
    *(unsigned char *)0xC28A4F2 = (*(signed char *)0xC09D052);
    *(unsigned char *)0xC28A4F3 = (*(signed char *)0xC09D053);
    *(unsigned char *)0xC28A4F4 = (*(signed char *)0xC09D054);
    *(unsigned char *)0xC28A4F5 = (*(signed char *)0xC09D055);
    *(unsigned char *)0xC28A4F6 = (*(signed char *)0xC09D056);
    t17 = 0x0;
    for (;;) {
        saveBufferInit(((short)((short)t17 * (short)0x788) + 0xC28A4F8));
        t17 = (t17 + 0x1);
        if ((int)t17 >= (int)0x4) {
            break;
        }
    }
    t20 = 0xC09D058;
    t22 = 0xC28C318;
    for (;;) { t23 = *(int *)t20; t20 = (t20 + 4); if ((unsigned int)((0xC09D058 + 960)) < (unsigned int)t20) break; *(unsigned int *)t22 = t23; t22 = (t22 + 4); }
    t24 = 0xC09D418;
    t26 = 0xC28C6D8;
    for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0xC09D418 + 960)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
    t28 = 0xC28A4E8;
    t30 = 0xC28F8A0;
    for (;;) { t31 = *(int *)t28; t28 = (t28 + 4); if ((unsigned int)((0xC28A4E8 + 9648)) < (unsigned int)t28) break; *(unsigned int *)t30 = t31; t30 = (t30 + 4); }
    return memset(0xC28CA98, 0x0, 0x8);
}
