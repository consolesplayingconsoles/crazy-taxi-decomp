#!/usr/bin/env python3
"""fill.py <in.s> <out.s> <start hex> <end hex>: shc's asm output laid out exactly like the game.

The unit is linked in place among the asm files (all ALIGN=2), so its section is declared ALIGN=2
and every alignment is spelled out from the known start address instead:
  .ALIGN n  -> nops (0x0009), the padding the original has in code;
  .RES.x n  -> 0xEE bytes, what the original link filled reserved gaps with;
  and 0xEE after the end, up to <end>, so the next unit starts where it did.
SH-4 instructions are all 2 bytes, so offsets are counted here, not by the assembler.
"""
import re, sys

src, dst = sys.argv[1], sys.argv[2]
start, end = int(sys.argv[3], 16), int(sys.argv[4], 16)
SIZES = {'B': 1, 'W': 2, 'L': 4}
pos = start
out = []
for line in open(src, errors='replace'):
    code = line.split(';', 1)[0].strip()
    m = re.match(r'(\S+:)?\s*(.*)', code)
    label, rest = m.group(1), m.group(2).strip()
    if label and not rest:
        out.append(line); continue
    if not rest:
        out.append(line); continue
    op = rest.split()[0].upper()
    args = rest[len(op):].strip()
    if op == '.SECTION':
        if not re.match(r'P\b', args, re.I):
            sys.exit('[ERROR] fill.py: only a P section is supported, got: ' + rest)
        out.append('          .SECTION    P,CODE,ALIGN=2\n'); continue
    if op == '.ALIGN':
        n = int(args, 0)
        pad = (-pos) % n
        if pad % 2:
            sys.exit('[ERROR] fill.py: odd alignment pad at %08X' % pos)
        out.extend('          .DATA.W     H\'0009\n' for _ in range(pad // 2))
        pos += pad; continue
    mr = re.match(r'\.RES\.([BWL])$', op)
    if mr:
        n = int(args, 0) * SIZES[mr.group(1)]
        if n: out.append('          .DATAB.B    %d,H\'EE\n' % n)
        pos += n; continue
    md = re.match(r'\.DATA\.([BWL])$', op)
    if md:
        pos += SIZES[md.group(1)] * len(args.split(',')); out.append(line); continue
    mb = re.match(r'\.DATAB\.([BWL])$', op)
    if mb:
        pos += SIZES[mb.group(1)] * int(args.split(',')[0], 0); out.append(line); continue
    if op == '.END':
        if pos > end:
            sys.exit('[ERROR] fill.py: unit is %d bytes, %d over its end %08X' % (pos - start, pos - end, end))
        if end > pos:
            out.append('          .DATAB.B    %d,H\'EE\n' % (end - pos))
        out.append(line); continue
    if op.startswith('.'):
        out.append(line); continue      # .EXPORT, .IMPORT, .LINE, ... take no space
    pos += 2                            # an SH-4 instruction
    out.append(line)
open(dst, 'w').writelines(out)
