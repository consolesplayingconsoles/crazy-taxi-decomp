
void psgEnterState5(tagPASSENGER *p, int arg)
{
    void *mot1[3] = { mot_0c91e924, mot_0c91fd28, mot_0c91d170 };
    void *a1[3] = { g_0c0d5720, g_0c0d5720, g_0c0d5720 };
    void *b1[3] = { g_0c0d5728, g_0c0d5728, g_0c0d5728 };
    void *mot3[3] = { mot_0c92fc64, mot_0c934ccc, mot_0c93a1a4 };
    void *mot2[3] = { mot_0c9323f8, mot_0c937750, mot_0c93cd68 };
    int i;

    switch (arg) {
    case 0:
        p->f034 = mot_0c945094;
        p->f038 = 0.0f;
        p->b16 = 0;
        p->f108 = 0.0f;
        p->f10c = 0.0f;
        p->b21 = 0;
        p->f124 = g_0c0d5720;
        p->f128 = g_0c0d5728;
        Chat_Iraira(p, 1, 0);
        break;
    case 1:
        i = extRand() % 3;
        p->f034 = mot1[i];
        p->f038 = 0.0f;
        p->b16 = 0;
        p->f108 = 0.0f;
        p->f10c = 0.0f;
        p->b21 = 0;
        p->f124 = a1[i];
        p->f128 = b1[i];
        Chat_Iraira(p, 1, 1);
        break;
    case 2:
        i = extRand() % 3;
        p->f034 = mot2[i];
        p->f038 = 0.0f;
        p->b16 = 0;
        p->f108 = 0.0f;
        p->f10c = 0.0f;
        p->b21 = 0;
        p->f124 = g_0c0d5720;
        p->f128 = g_0c0d5728;
        Chat_Iraira(p, 2, 2);
        break;
    }
}

void psgEnterState6(tagPASSENGER *p, int arg)
{
    void *walkA[4] = { mot_0cab6bbc, mot_0ca8bcbc, mot_0caa143c, mot_0cb32654 };
    void *walkB[4] = { mot_0cac26f4, mot_0ca977f4, mot_0caab084, mot_0cb38c78 };
    float speed[4] = { 20.0f, 20.0f, 20.0f, 20.0f };
    void *runA[1] = { mot_0ca75d74 };
    void *runB[1] = { mot_0ca7bbdc };
    float runSpeed[1] = { 20.0f };
    NLpoint3 d;
    NLpoint3 v;
    unsigned int r;
    int i;

    r = nlRand();
    switch (arg) {
    case 0:
        nlSubVector3op(&d, &p->pos, &Car_Data[0].pos);
        d.y = 0.0f;
        nlUnitVector(&d);
        v = TaxiDriver.v1e0;
        v.y = 0.0f;
        nlUnitVector(&v);
        if (nlInnerProduct(&d, &v) > 0.0f)
            p->b5 = 0;
        else
            p->b5 = 1;
        if (nlLength(&Car_Data[0].pos, &p->pos) < 75.0f) {
            if (p->b5)
                p->f110 = runA[0];
            else
                p->f110 = runB[0];
            p->f114 = runSpeed[0];
        } else {
            i = r % 4;
            if (p->b5)
                p->f110 = walkA[i];
            else
                p->f110 = walkB[i];
            p->f114 = speed[i];
        }
        p->b16 = 1;
        p->f108 = 0.0f;
        p->f10c = 10.0f;
        p->b21 = 2;
        p->f124 = g_0c0d5720;
        p->f128 = g_0c0d5728;
        Chat_DamnIt(p);
        break;
    case 1:
        break;
    }
}
