/* Straight-line functions with calls and guards (batch gen_nh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSysMetricsReadTimer(void);
int nlSysMetricsScaleTime(int);
int nlSysMetricsDiffTime(int, int);
int nlSysMetricsCpuPowerEnd(void);

int nlSysMetricsCpuPowerEnd(void)
{
    return nlSysMetricsScaleTime((nlSysMetricsDiffTime((*(int *)0xC2AEEA8), (nlSysMetricsReadTimer()))));
}
