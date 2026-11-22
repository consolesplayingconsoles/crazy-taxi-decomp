#!/usr/bin/env python3
"""Function names and addresses from a Hitachi SHC ELF's DWARF 1 debug section. Stdlib only.

    elf_debug_names.py <file.elf> > names.txt        "<hex addr> <name>" per line

SHC links with -debug write a `.debug` section in DWARF version 1 (and no symbol table). Every
TAG_global_subroutine / TAG_subroutine entry with a name and a low_pc is a function the game's own
code defined; library code linked without debug info is not in it. The output is the names file
ghidra/ExportSigs.java and ApplySigs.java take, and a reference list for a decomp of that game.
"""
import struct
import sys

TAG_GLOBAL_SUBROUTINE, TAG_SUBROUTINE = 0x0006, 0x0014
AT_NAME, AT_LOW_PC = 0x0038, 0x0111
FORM_ADDR, FORM_REF, FORM_BLOCK2, FORM_BLOCK4, FORM_DATA2, FORM_DATA4, FORM_DATA8, FORM_STRING = 1, 2, 3, 4, 5, 6, 7, 8

if len(sys.argv) != 2:
    sys.exit(__doc__)
d = open(sys.argv[1], 'rb').read()
if d[:4] != b'\x7fELF':
    sys.exit('[ERROR] not an ELF file')
E = '<' if d[5] == 1 else '>'
shoff = struct.unpack(E + 'I', d[32:36])[0]
shentsize, shnum, shstrndx = struct.unpack(E + 'HHH', d[46:52])
secs = [struct.unpack(E + 'IIIIII', d[shoff + i * shentsize:shoff + i * shentsize + 24]) for i in range(shnum)]
so = secs[shstrndx][4]
names = [d[so + s[0]:d.index(b'\0', so + s[0])].decode('latin-1') for s in secs]
if '.debug' not in names:
    sys.exit('[ERROR] no .debug section: the ELF was linked without -debug')
off, size = secs[names.index('.debug')][4], secs[names.index('.debug')][5]
p, end, funcs = off, off + size, set()
while p + 6 <= end:
    ln = struct.unpack(E + 'I', d[p:p + 4])[0]
    if ln < 8:                                          # padding entry
        p += ln if ln >= 4 else 4
        continue
    tag = struct.unpack(E + 'H', d[p + 4:p + 6])[0]
    q, name, lo = p + 6, None, None
    while q < p + ln:
        at = struct.unpack(E + 'H', d[q:q + 2])[0]
        q += 2
        form = at & 0xF
        if form in (FORM_ADDR, FORM_REF, FORM_DATA4):
            v = struct.unpack(E + 'I', d[q:q + 4])[0]
            q += 4
        elif form == FORM_BLOCK2:
            q += 2 + struct.unpack(E + 'H', d[q:q + 2])[0]
            v = None
        elif form == FORM_BLOCK4:
            q += 4 + struct.unpack(E + 'I', d[q:q + 4])[0]
            v = None
        elif form == FORM_DATA2:
            v = struct.unpack(E + 'H', d[q:q + 2])[0]
            q += 2
        elif form == FORM_DATA8:
            q += 8
            v = None
        elif form == FORM_STRING:
            e = d.index(b'\0', q)
            v = d[q:e].decode('latin-1')
            q = e + 1
        else:
            break
        if at == AT_NAME:
            name = v
        elif at == AT_LOW_PC:
            lo = v
    if tag in (TAG_GLOBAL_SUBROUTINE, TAG_SUBROUTINE) and name and lo:
        funcs.add((lo, name))
    p += ln
for lo, name in sorted(funcs):
    print('%08X %s' % (lo, name))
print('%d functions' % len(funcs), file=sys.stderr)
