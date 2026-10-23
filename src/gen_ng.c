/* Straight-line functions with calls and guards (batch gen_ng): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSysMetricsReadTimer(void);
int nlSysMetricsCpuPowerStart(void);

int nlSysMetricsCpuPowerStart(void)
{
    int t0;

    t0 = nlSysMetricsReadTimer();
    *(unsigned int *)0xC2AEEA8 = t0;
    return t0;
}
