/* @unit 0C074270-0C0742F0 -align16 */
/* Palette upload and mode, part of the Naomi library layer (built with -align16). */

extern unsigned char gPaletteDirty;
extern unsigned char gPaletteMode;
extern int gPaletteData[];
extern int gPaletteModeTable[];
extern int g_0c14a644;
void kmSetPaletteData(void *data);
void kmSetPaletteMode(int mode);

void paletteUpload(void)
{
    if (gPaletteDirty == 0)
        return;
    gPaletteDirty = 0;
    kmSetPaletteData(gPaletteData);
}

void paletteSetMode(int mode)
{
    gPaletteMode = mode;
    kmSetPaletteMode(gPaletteModeTable[mode]);
}

void FUN_0c0742c0(int value)
{
    g_0c14a644 = value;
}
