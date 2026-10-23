/* Straight-line functions with calls and guards (batch gen_xi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ChangeObjGroup(int, int);
int nlMvSetWorkBuffer(int, int);
int nlMvNotShadowObjPutPol(int);
int GetLightVector(int);
int nlMvSetShadowObjPutPol(int);
int nlObjPutSetVtxColorMode(int);
int InitMV(void);

int InitMV(void)
{
    *(unsigned int *)0xC2863F0 = 0x1E0;
    *(unsigned int *)0xC2863F4 = 0x424;
    *(unsigned int *)0xC2863F8 = 0x280;
    *(unsigned int *)0xC2863FC = 0x50;
    *(unsigned int *)0xC2863EC = ((*(int *)0xC2863EC) & 0xFFFFFFFE);
    *(float *)0xC286400 = 100.0f;
    nlMvSetWorkBuffer(0xC275948, 0xC2863EC);
    GetLightVector(0xC286410);
    ChangeObjGroup(0x5, 0xC07D5C0);
    ChangeObjGroup(0x3, 0xC07D5C0);
    nlMvSetShadowObjPutPol(0xC3938E8);
    nlMvSetShadowObjPutPol(0xC3A60D0);
    nlMvSetShadowObjPutPol(0xC3B1220);
    nlMvSetShadowObjPutPol(0xC3C0CE8);
    nlMvSetShadowObjPutPol(0xC3D32E0);
    nlMvSetShadowObjPutPol(0xC3DE628);
    nlMvSetShadowObjPutPol(0xC3E1568);
    nlMvSetShadowObjPutPol(0xC3F3FE0);
    nlMvSetShadowObjPutPol(0xC3FD880);
    nlMvSetShadowObjPutPol(0xC3FF3C0);
    nlMvSetShadowObjPutPol(0xC414120);
    nlMvSetShadowObjPutPol(0xC421D18);
    nlMvSetShadowObjPutPol(0xC3B7C10);
    nlMvSetShadowObjPutPol(0xC3C05A8);
    nlMvSetShadowObjPutPol(0xC3C07C8);
    nlMvNotShadowObjPutPol(0xC3A15F0);
    nlMvNotShadowObjPutPol(0xC3A2540);
    nlMvNotShadowObjPutPol(0xC3A34F0);
    nlMvNotShadowObjPutPol(0xC3A4440);
    nlMvNotShadowObjPutPol(0xC3A53F0);
    nlMvNotShadowObjPutPol(0xC3A5A30);
    nlMvNotShadowObjPutPol(0xC3B0240);
    nlMvNotShadowObjPutPol(0xC3B0880);
    nlMvNotShadowObjPutPol(0xC3EFA70);
    nlMvNotShadowObjPutPol(0xC3F08E8);
    nlMvNotShadowObjPutPol(0xC3F17C0);
    nlMvNotShadowObjPutPol(0xC3F2638);
    nlMvNotShadowObjPutPol(0xC3F3510);
    nlMvNotShadowObjPutPol(0xC3F3A78);
    nlMvNotShadowObjPutPol(0xC3FCAB0);
    nlMvNotShadowObjPutPol(0xC3FD018);
    nlMvNotShadowObjPutPol(0xC40FB50);
    nlMvNotShadowObjPutPol(0xC4109C8);
    nlMvNotShadowObjPutPol(0xC4118A0);
    nlMvNotShadowObjPutPol(0xC412718);
    nlMvNotShadowObjPutPol(0xC4135F0);
    nlMvNotShadowObjPutPol(0xC413B58);
    nlMvNotShadowObjPutPol(0xC420EE8);
    nlMvNotShadowObjPutPol(0xC421450);
    nlMvNotShadowObjPutPol(0xC3BD538);
    nlMvNotShadowObjPutPol(0xC3BE3B0);
    return nlObjPutSetVtxColorMode(0x1);
}
