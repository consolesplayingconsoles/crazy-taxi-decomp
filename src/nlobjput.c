/* The NAOMI library's model put (nlObjPut*: the flat model format of the SDK's nlobjtyp.h), the entry points around the record
   drawer. Range 0C07AD00-0C07B460 (nlObjPut is in sdk_a.c, nlObjPutLoadTexture in sdk_c.c). Names from the SDK's libnlobj
   (the offsets of its names, laid at 0C072100, meet nlObjPut and the nlObjPutSet* names already known). A model starts with two words (the first picks the
   drawer, the second's bit 1 skips the light set-up) and a sphere; then NL_PF_GloblParamType2 records (docs/engine.md). */

extern void nlInvLightVectorUseViewMatrix(void);         /* the same through the view matrix (nlObjPutUseViewMatrix) */
extern void nlPushMatrix(void *m);
extern void nlPopMatrix(int n);
extern void nlMultiMatrix(void *m);
extern void FUN_0c077ee0(void *m);
extern void FUN_0c077f60(void);
extern void FUN_0c081660(void *model, void *light);   /* the record drawer (fldi1 fr4, then FUN_0c081662's loop) */
extern void FUN_0c081662(void *model, void *light, float trs);   /* the same with the model's alpha in fr4 */
extern void nlInvLightVectorUseViewMatrix(void);
extern void FUN_0c078980(void);
extern void FUN_0c077210(void *src, void *dst);
extern void nlScaleUnitVector(float *dst, float *src, float s);

#define MATRIX_0C2B34A8    ((void *)0x0C2B34A8)
#define VIEW_MATRIX     (*(void **)(0x0C2B31F4 + 8))
#define LIGHTS          ((void *)0x0C2B3150)
#define VTX_COLOR_PUT   (*(int *)0x0C14A970)     /* the vertex colour routine nlObjPutSetVtxColorMode picks (0: none) */

void nlobjput_sub(int *model);
void nlMakeModelViewProjectMatrix_objput(void);
void nlInvLightVector(void);
void nlobjput_sub_trnsl(int *model, float trs);

/* The record drawer for a model whose first word is 0 or 1 (other values draw nothing), then the matrix pushed before it popped. */
void nlobjput_sub(int *model)
{
    if (model[0] == 0)
        FUN_0c081660(model, LIGHTS);
    else if (model[0] == 1)
        FUN_0c081660(model, LIGHTS);
    nlPopMatrix(1);
}

/* nlObjPut through the view matrix. */
void nlObjPutUseViewMatrix(int *model)
{
    if (!(model[1] & 2))
        nlInvLightVectorUseViewMatrix();
    nlMakeModelViewProjectMatrix_objput();
    nlobjput_sub(model);
}

void nlMakeModelViewProjectMatrix_objput(void)
{
    nlPushMatrix(MATRIX_0C2B34A8);
    nlMultiMatrix(VIEW_MATRIX);
    FUN_0c077f60();
}

/* The record drawer for a translucent put: as nlobjput_sub, the model's alpha (trs) passed on in fr4. */
void nlobjput_sub_trnsl(int *model, float trs)
{
    if (model[0] == 0)
        FUN_0c081662(model, LIGHTS, trs);
    else if (model[0] == 1)
        FUN_0c081662(model, LIGHTS, trs);
    nlPopMatrix(1);
}

/* nlObjPut with the whole model at alpha trs (below 1.0: drawn in the translucent list). */
void nlObjPutTrnsl(int *model, float trs)
{
    if (!(model[1] & 2))
        nlInvLightVector();
    nlPushMatrix(0);
    FUN_0c077ee0(MATRIX_0C2B34A8);
    nlobjput_sub_trnsl(model, trs);
}

/* nlObjPutTrnsl through the view matrix. */
void nlObjPutUseViewMatrixTrnsl(int *model, float trs)
{
    if (!(model[1] & 2))
        nlInvLightVectorUseViewMatrix();
    nlMakeModelViewProjectMatrix_objput();
    nlobjput_sub_trnsl(model, trs);
}

void nlMakeModelProjectMatrix_objput(void)
{
    nlPushMatrix(0);
    FUN_0c077ee0(MATRIX_0C2B34A8);
}

/* The light vectors for a put: the two at 0C14A918 and 0C14A928 through the current matrix into LIGHTS + 16 and LIGHTS, the
   second scaled to a length of 436.5. */
void nlInvLightVector(void)
{
    FUN_0c078980();
    FUN_0c077210((void *)0x0C14A918, (char *)LIGHTS + 16);
    FUN_0c077210((void *)0x0C14A928, LIGHTS);
    nlScaleUnitVector(LIGHTS, LIGHTS, 436.5f);
    FUN_0c078980();
}

/* Which vertex colour routine puts use: 0 none, 1 and 2 two routines of the drawer (0C08392A, 0C08450A); other values leave
   it as it is. */
void nlObjPutSetVtxColorMode(int type)
{
    if (type == 0)
        VTX_COLOR_PUT = 0;
    else if (type == 1)
        VTX_COLOR_PUT = 0x0C08392A;
    else if (type == 2)
        VTX_COLOR_PUT = 0x0C08450A;
}

/* The scale nlobjput's record test applies to the sphere radius (reset to 1.0 by each put). */
void nlSetScaleFactor(float s)
{
    *(float *)0x0C2B7BE8 = s;
}
