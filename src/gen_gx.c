/* Straight-line functions with calls and guards (batch gen_gx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec4Ang(int, int, int);
int trainCarDrive(int);
int FUN_0c077210(int, int);
int GetCollision2D(int, float);
int carBalance(int);
int TrainInit(int, int);
int carColliReflection(void);
int carEntry(int);
int carMultiCollision(int);
int carResistance(void);
int carSteering(void);
int courseStatusEntry(int, int);
int dropOutCheck(int);
int getNearLineIndex(int, int, int, int, int);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int technicalCheck(int);
int trainCarExec(int a4);

int trainCarExec(int a4)
{
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t65;
    int t66;
    int t67;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    float u180;
    int t181;
    int t182;
    int t183;
    int t200;
    int t201;
    int t202;
    int t203;
    float u214;
    int t204;
    int t205;
    int t206;
    float t208;
    int t216;
    float u217;
    int t218;
    int t219;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    float u237;
    float u239;
    float u240;
    float u241;
    int t243;
    int t257;
    int t259;
    int t260;
    int t261;
    int t262;
    int t263;
    int t264;
    int t268;
    int t269;
    int t270;
    int t271;
    int t272;
    int t273;
    int t279;
    int t281;
    int t283;
    float u286;
    int t289;
    int t290;
    int t291;
    int t292;
    int t293;
    int t294;
    float u295;
    int t300;
    int t301;
    int t303;
    int t304;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    int t311;
    int t312;
    int t313;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t335;
    int t320;
    int t321;
    int t322;
    int t323;
    int t324;
    int t325;
    int t326;
    int t327;
    int t328;
    int t329;
    int t330;
    int t331;
    int t332;
    int t333;
    int t334;
    int t344;
    int t305;
    int stk[29] = {0};

    technicalCheck(a4);
    t1 = *(int *)((a4 + 0x84));
    *(unsigned int *)((a4 + 0x84)) = (t1 | 0xC);
    t2 = *(int *)0xC2A1B30;
    t3 = nlLength((t2 + 0x78), (0x8C + a4));
    if (3000.0f > t3) {
        t4 = *(int *)((a4 + 0x78));
        if (t4 == 19) {
            t5 = *(int *)0xC2A9D60;
            if (t5 == 0) {
                t6 = *(int *)((a4 + 0x78));
                if (t6 == 16) {
                    t7 = *(int *)0xC2A4E4C;
                    if (t7 == 1) {
                        t8 = *(int *)((a4 + 0x84));
                        if ((t8 & 0x1) == 0) {
                            t9 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t9 | 0x1);
                            t10 = 0x5;
                            for (;;) {
                                TrainInit(a4, t10);
                                t10 = (t10 - 1);
                                if ((int)t10 <= 0) {
                                    break;
                                }
                            }
                        }
                    } else {
                        t21 = *(int *)((a4 + 0x84));
                        if ((0x1 & t21) != 0) {
                            t22 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t22 & 0xFFFFFFFE);
                            t23 = a4;
                            t24 = 0x5;
                            for (;;) {
                                t25 = *(int *)((t23 + 0x8));
                                t23 = t25;
                                t24 = (t24 - 0x1);
                                t26 = *(int *)((t23 + 0x84));
                                *(unsigned int *)((t23 + 0x84)) = (t26 & 0xFFFFFFFE);
                                if (t24 == 0) {
                                    break;
                                }
                            }
                        }
                    }
                } else {
                    t43 = *(int *)((a4 + 0x84));
                    if ((0x1 & t43) != 0) {
                        t44 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t44 & 0xFFFFFFFE);
                        t45 = a4;
                        t46 = 0x5;
                        for (;;) {
                            t47 = *(int *)((t45 + 0x8));
                            t45 = t47;
                            t46 = (t46 - 0x1);
                            t48 = *(int *)((t45 + 0x84));
                            *(unsigned int *)((t45 + 0x84)) = (t48 & 0xFFFFFFFE);
                            if (t46 == 0) {
                                break;
                            }
                        }
                    }
                }
            } else {
                t65 = *(int *)((a4 + 0x84));
                if ((t65 & 0x1) == 0) {
                    t66 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t66 | 0x1);
                    t67 = 0x5;
                    for (;;) {
                        TrainInit(a4, t67);
                        t67 = (t67 - 1);
                        if ((int)t67 <= 0) {
                            break;
                        }
                    }
                }
            }
        } else {
            t89 = *(int *)((a4 + 0x78));
            if (t89 == 16) {
                t90 = *(int *)0xC2A4E4C;
                if (t90 == 1) {
                    t91 = *(int *)((a4 + 0x84));
                    if ((t91 & 0x1) == 0) {
                        t92 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t92 | 0x1);
                        t93 = 0x5;
                        for (;;) {
                            TrainInit(a4, t93);
                            t93 = (t93 - 1);
                            if ((int)t93 <= 0) {
                                break;
                            }
                        }
                    }
                } else {
                    t103 = *(int *)((a4 + 0x84));
                    if ((0x1 & t103) != 0) {
                        t104 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t104 & 0xFFFFFFFE);
                        t105 = a4;
                        t106 = 0x5;
                        for (;;) {
                            t107 = *(int *)((t105 + 0x8));
                            t105 = t107;
                            t106 = (t106 - 0x1);
                            t108 = *(int *)((t105 + 0x84));
                            *(unsigned int *)((t105 + 0x84)) = (t108 & 0xFFFFFFFE);
                            if (t106 == 0) {
                                break;
                            }
                        }
                    }
                }
            } else {
                t125 = *(int *)((a4 + 0x84));
                if ((0x1 & t125) != 0) {
                    t126 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t126 & 0xFFFFFFFE);
                    t127 = a4;
                    t128 = 0x5;
                    for (;;) {
                        t129 = *(int *)((t127 + 0x8));
                        t127 = t129;
                        t128 = (t128 - 0x1);
                        t130 = *(int *)((t127 + 0x84));
                        *(unsigned int *)((t127 + 0x84)) = (t130 & 0xFFFFFFFE);
                        if (t128 == 0) {
                            break;
                        }
                    }
                }
            }
        }
    } else {
        t158 = *(int *)((a4 + 0x84));
        if ((0x1 & t158) != 0) {
            t159 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t159 & 0xFFFFFFFE);
            t160 = a4;
            t161 = 0x5;
            for (;;) {
                t162 = *(int *)((t160 + 0x8));
                t160 = t162;
                t161 = (t161 - 0x1);
                t163 = *(int *)((t160 + 0x84));
                *(unsigned int *)((t160 + 0x84)) = (t163 & 0xFFFFFFFE);
                if (t161 == 0) {
                    break;
                }
            }
        }
    }
    if (800.0f > t3) {
        u180 = *(float *)((a4 + 0xCC));
        if (u180 > 0.694444537f) {
            t181 = *(int *)((a4 + 0x78));
            if (t181 == 16) {
                t182 = *(int *)0xC2A4E48;
                *(unsigned int *)0xC2A4E48 = (t182 | 0x3);
            } else {
                if (t181 == 19) {
                    t183 = *(int *)0xC2A4E48;
                    *(unsigned int *)0xC2A4E48 = (t183 | 0xC);
                }
            }
        }
    }
    trainCarDrive(a4);
    t200 = *(int *)(((0x98 + a4) + 0x8));
    t201 = *(int *)(((0x98 + a4) + 0x4));
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x8)) = t200;
    t202 = *(int *)(((0x98 + a4) + 0x0));
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x4)) = t201;
    *(unsigned int *)(((((int)stk + 8) + 0x1C) + 0x0)) = t202;
    t203 = *(int *)((a4 + 0x84));
    u214 = t3;
    if ((t203 & 8) != 0) {
        t204 = *(int *)(((0x8C + a4) + 0x8));
        t205 = *(int *)(((0x8C + a4) + 0x4));
        *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x8)) = t204;
        t206 = *(int *)(((0x8C + a4) + 0x0));
        *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x4)) = t205;
        *(unsigned int *)(((((int)stk + 8) + 0x28) + 0x0)) = t206;
        nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.199999988f);
        t208 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
        *(float *)((a4 + 0x100)) = t208;
        u214 = t208;
    }
    t216 = *(int *)((a4 + 0x84));
    if ((t216 & 0x4) == 0) {
    } else {
        u217 = *(float *)((a4 + 0x9C));
        *(float *)((a4 + 0x9C)) = (u217 - 0.073499985f);
        t218 = *(int *)((a4 + 0x110));
        if ((int)t218 > 0) {
            t219 = *(int *)((a4 + 0x110));
            *(unsigned int *)((a4 + 0x110)) = (t219 - 1);
            carSteering();
            carResistance();
        }
        nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
        nlAddVector((0x8C + a4), (0x98 + a4));
        t232 = GetCollision2D((0x8C + a4), 30.0f);
        t233 = *(int *)((t232 + 0x1C));
        if (t233 != -1) {
            t234 = *(int *)(((t232 + 0xC) + 0x8));
            t235 = *(int *)(((t232 + 0xC) + 0x4));
            *(unsigned int *)(((0xEC + a4) + 0x8)) = t234;
            t236 = *(int *)(((t232 + 0xC) + 0x0));
            *(unsigned int *)(((0xEC + a4) + 0x4)) = t235;
            *(unsigned int *)(((0xEC + a4) + 0x0)) = t236;
            u237 = *(float *)((t232 + 0x18));
            *(float *)((a4 + 0x104)) = u237;
            carMultiCollision(a4);
            u239 = *(float *)((a4 + 0x104));
            u240 = *(float *)((a4 + 0x90));
            if (u239 > u240) {
                u241 = *(float *)((a4 + 0x104));
                *(float *)((a4 + 0x90)) = u241;
                carColliReflection();
                t243 = *(int *)((a4 + 0x110));
                *(unsigned int *)((a4 + 0x110)) = (int)((float)t243 + 5.0f);
            }
        } else {
            dropOutCheck(a4);
        }
        t257 = *(int *)((a4 + 0x110));
        if ((int)t257 > (int)0xA) {
            *(unsigned int *)((a4 + 0x110)) = 0xA;
        }
        *(unsigned int *)((a4 + 0x110)) = 0xA;
        t259 = *(int *)((a4 + 0x80));
        t260 = *(int *)0xC2A6690;
        *(unsigned int *)(((int)stk + 8)) = ((((t259 << 1) + t259) << 2) + t260);
        t261 = *(int *)((((((t259 << 1) + t259) << 2) + t260) + 0x4));
        t262 = *(int *)(((int)stk + 8));
        t263 = *(int *)((t261 + 0x0));
        t264 = *(int *)((t262 + 0x0));
        getNearLineIndex(0x2, t264, t263, (0xD4 + a4), (0x8C + a4));
        nlSubVector3op((((int)stk + 8) + 0x1C), (0x98 + a4), (((int)stk + 8) + 0x1C));
        carBalance(a4);
        t268 = *(signed char *)(((0xA4 + a4) + 0x0));
        *(unsigned char *)(((0x108 + a4) + 0x0)) = t268;
        t269 = *(signed char *)(((0xA4 + a4) + 0x1));
        *(unsigned char *)(((0x108 + a4) + 0x1)) = t269;
        t270 = *(signed char *)(((0xA4 + a4) + 0x2));
        *(unsigned char *)(((0x108 + a4) + 0x2)) = t270;
        t271 = *(signed char *)(((0xA4 + a4) + 0x3));
        *(unsigned char *)(((0x108 + a4) + 0x3)) = t271;
        t272 = *(signed char *)(((0xA4 + a4) + 0x4));
        *(unsigned char *)(((0x108 + a4) + 0x4)) = t272;
        t273 = *(signed char *)(((0xA4 + a4) + 0x5));
        *(unsigned char *)(((0x108 + a4) + 0x5)) = t273;
    }
    nlPushUnitMatrix();
    t279 = *(short *)((a4 + 0xA8));
    nlRotateAZ((-(unsigned short)t279));
    t281 = *(short *)((a4 + 0xA4));
    nlRotateAX((-(unsigned short)t281));
    t283 = *(short *)((a4 + 0xA6));
    nlRotateAY((-(unsigned short)t283));
    FUN_0c077210((0x98 + a4), (((int)stk + 8) + 0x40));
    u286 = *(float *)(((int)stk + 80));
    *(float *)((a4 + 0xCC)) = u286;
    nlPopMatrix(0x1);
    carEntry(a4);
    t289 = *(int *)(((0x8C + a4) + 0x8));
    t290 = *(int *)(((0x8C + a4) + 0x4));
    *(unsigned int *)(((a4 + 0x14) + 0x8)) = t289;
    t291 = *(int *)(((0x8C + a4) + 0x0));
    *(unsigned int *)(((a4 + 0x14) + 0x4)) = t290;
    *(unsigned int *)(((a4 + 0x14) + 0x0)) = t291;
    t292 = *(int *)(((0x98 + a4) + 0x8));
    t293 = *(int *)(((0x98 + a4) + 0x4));
    *(unsigned int *)(((a4 + 0x20) + 0x8)) = t292;
    t294 = *(int *)(((0x98 + a4) + 0x0));
    *(unsigned int *)(((a4 + 0x20) + 0x4)) = t293;
    *(unsigned int *)(((a4 + 0x20) + 0x0)) = t294;
    u295 = *(float *)((a4 + 0x100));
    nlScaleVector((((int)stk + 8) + 0x40), (a4 + 0x44), (u295 - u214));
    nlAddVector((a4 + 0x5C), (((int)stk + 8) + 0x40));
    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.899999976f);
    *(volatile short *)((a4 + 0xA8));
    t300 = *(short *)((a4 + 0xA6));
    t301 = *(short *)((a4 + 0xA4));
    GetRotVec4Ang((a4 + 0x44), (unsigned short)t301, (unsigned short)t300);
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    t303 = *(int *)((a4 + 0x80));
    if (t303 == 0x13B) {
        t304 = 0x80;
        t306 = 0xC0A38B4;
        t307 = 0xC0A3884;
        t308 = 0x0;
        for (;;) {
            if ((unsigned int)t308 >= (unsigned int)0x3) {
                return t304;
            }
            t304 = 0xD4;
            t309 = *(int *)((t307 + 0x0));
            t310 = *(int *)((a4 + t304));
            if ((int)t310 >= (int)t309) {
                t311 = *(int *)((t307 + 0x4));
                t305 = t311;
                if ((int)t310 <= (int)t305) {
                    break;
                }
                t307 = (t307 + 0x8);
                t306 = (t306 + 0x10);
                t308 = (t308 + 0x1);
                continue;
            }
            t307 = (t307 + 0x8);
            t306 = (t306 + 0x10);
            t308 = (t308 + 0x1);
        }
        t312 = t306;
        t313 = 0x0;
        for (;;) {
            t314 = *(int *)((t312 + 0x0));
            t312 = (t312 + 0x4);
            t315 = *(int *)0xC2A6690;
            t316 = *(int *)((((((t314 << 1) + t314) << 2) + t315) + 0x4));
            t317 = *(int *)((t316 + 0x0));
            t318 = courseStatusEntry(t314, (t317 - 1));
            t313 = (t313 + 0x1);
            if ((int)t313 >= (int)0x4) {
                break;
            }
        }
        t344 = t318;
    } else {
        t319 = *(int *)((a4 + 0x80));
        t335 = 0x80;
        if (t319 == 0x13C) {
            t320 = 0x80;
            t321 = 0x13C;
            t322 = 0xC0A38B4;
            t323 = 0xC0A389C;
            t324 = 0x0;
            for (;;) {
                if ((unsigned int)t324 >= (unsigned int)0x3) {
                    return t320;
                }
                t320 = 0xD4;
                t325 = *(int *)((t323 + 0x0));
                t326 = *(int *)((a4 + t320));
                if ((int)t326 >= (int)t325) {
                    t327 = *(int *)((t323 + 0x4));
                    t321 = t327;
                    if ((int)t326 <= (int)t321) {
                        break;
                    }
                    t323 = (t323 + 0x8);
                    t322 = (t322 + 0x10);
                    t324 = (t324 + 0x1);
                    continue;
                }
                t323 = (t323 + 0x8);
                t322 = (t322 + 0x10);
                t324 = (t324 + 0x1);
            }
            t328 = t322;
            t329 = 0x0;
            for (;;) {
                t330 = *(int *)((t328 + 0x0));
                t328 = (t328 + 0x4);
                t331 = *(int *)0xC2A6690;
                t332 = *(int *)((((((t330 << 1) + t330) << 2) + t331) + 0x4));
                t333 = *(int *)((t332 + 0x0));
                t334 = courseStatusEntry(t330, (t333 - 1));
                t329 = (t329 + 0x1);
                if ((int)t329 >= (int)0x4) {
                    break;
                }
            }
            t335 = t334;
        }
        t344 = t335;
    }
    return t344;
}
