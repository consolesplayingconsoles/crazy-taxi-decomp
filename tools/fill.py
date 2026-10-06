#!/usr/bin/env python3
"""fill.py <in.s> <out.s> <start hex> <end hex> [<out_data.s> <dstart hex> <dend hex> <unit name>]:
shc's asm output laid out exactly like the game.

The unit is linked in place among the asm files (all ALIGN=2), so its sections are declared ALIGN=2
and every alignment is spelled out from the known start address instead:
  .ALIGN n  -> nops (0x0009) in code, the padding the original has there; zero bytes in data;
  .RES.x n  -> 0xEE bytes, what the original link filled reserved gaps with;
  and 0xEE after the end of the code, up to <end>, so the next piece starts where it did.
SH-4 instructions are all 2 bytes, so offsets are counted here, not by the assembler.

Constant data (shc's C section: initialised tables, string literals) goes to <out_data.s>, laid out
from <dstart> to <dend> (the unit's @data range): the original link put each file's C section in
the data area, far from its code. Labels one piece defines and the other uses get unit-unique names
with .EXPORT/.IMPORT, so the two pieces link as one. A unit with constant data and no @data range,
or with initialised variables (D/B sections), is refused with the reason.
"""
import re
import sys

SIZES = {'B': 1, 'W': 2, 'L': 4}
LABEL = re.compile(r'^([A-Za-z_$.][\w$.]*):')
IDENT = re.compile(r'[A-Za-z_$.][\w$.]*')


def sdata_len(args):
    """Bytes in a .SDATA operand list: "text" pieces (a doubled quote is one quote) and <h'xx> codes."""
    n, i = 0, 0
    while i < len(args):
        c = args[i]
        if c == '"':
            i += 1
            while i < len(args):
                if args[i] == '"':
                    if i + 1 < len(args) and args[i + 1] == '"':
                        n += 1; i += 2; continue
                    break
                n += 1; i += 1
        elif c == '<':
            n += 1; i = args.index('>', i)
        i += 1
    return n


def layout(lines, start, end, data, what):
    pos, out = start, []
    for line in lines:
        code = line.split(';', 1)[0].strip()
        m = re.match(r'(\S+:)?\s*(.*)', code)
        rest = m.group(2).strip()
        if not rest:
            out.append(line); continue
        op = rest.split()[0].upper()
        args = rest[len(op):].strip()
        if op == '.SECTION':
            out.append('          .SECTION    P,CODE,ALIGN=2\n'); continue
        if op == '.ALIGN':
            pad = (-pos) % int(args, 0)
            if data:
                if pad: out.append('          .DATAB.B    %d,H\'00\n' % pad)
            else:
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
        if op in ('.SDATA', '.SDATAZ'):
            pos += sdata_len(args) + (op == '.SDATAZ'); out.append(line); continue
        if op.startswith('.'):
            out.append(line); continue      # .EXPORT, .IMPORT, .LINE, ... take no space
        if data:
            sys.exit('[ERROR] fill.py: instruction in the constant data: ' + rest)
        pos += 2                            # an SH-4 instruction
        out.append(line)
    if pos > end:
        sys.exit('[ERROR] fill.py: unit %s is %d bytes, %d over its end %08X'
                 % (what, pos - start, pos - end, end))
    if end > pos:
        out.append('          .DATAB.B    %d,H\'%s\n' % (end - pos, '00' if data else 'EE'))
        if data:
            print('[note] fill.py: constant data is %d bytes, %d short of its @data end %08X'
                  % (pos - start, end - pos, end), file=sys.stderr)
    return out


def main():
    a = sys.argv[1:]
    if len(a) not in (4, 8):
        sys.exit(__doc__)
    lines = open(a[0], encoding='latin-1').readlines()
    head, parts, cur = [], {'P': [], 'C': []}, None
    for line in lines:
        code = line.split(';', 1)[0].strip()
        op = code.split()[0].upper() if code and not LABEL.match(code) else ''
        if op == '.SECTION':
            name = code.split()[1].split(',')[0].upper()
            if name not in parts:
                sys.exit('[ERROR] fill.py: a %s section (initialised or zeroed variables) is not '
                         'supported yet: keep such variables in asm for now' % name)
            cur = name
        if op == '.END':
            continue
        (head if cur is None else parts[cur]).append(line)
    if parts['C'] and len(a) == 4:
        sys.exit('[ERROR] fill.py: this unit has constant data (tables, strings): give it a range with '
                 '@data <dstart>-<dend> in its @unit line')
    if len(a) == 4:
        open(a[1], 'w', encoding='latin-1').writelines(head + layout(parts['P'], int(a[2], 16), int(a[3], 16), False, 'code') + ['          .END\n'])
        return
    if not parts['C']:
        sys.exit('[ERROR] fill.py: @data given but the unit has no constant data')

    def defined(ls):
        return {m.group(1) for m in (LABEL.match(l) for l in ls) if m}

    def used(ls):
        return {t for l in ls for t in IDENT.findall(l.split(';', 1)[0].split(':')[-1])}

    exported = {l.split()[1] for l in head if l.strip().upper().startswith('.EXPORT')}
    dc, dd = defined(parts['P']), defined(parts['C'])
    cross = {(x, 'P') for x in dc & used(parts['C'])} | {(x, 'C') for x in dd & used(parts['P'])}
    rename = {x: '_U_%s_%s' % (a[7], x.lstrip('_')) for x, _ in cross if x not in exported}

    def sub(ls):
        if not rename:
            return ls
        r = re.compile(r'(?<![\w$.])(%s)(?![\w$.])' % '|'.join(map(re.escape, rename)))
        return [r.sub(lambda m: rename[m.group(1)], l) for l in ls]

    code, data = sub(parts['P']), sub(parts['C'])
    ext = {}
    for x, side in cross:
        n = rename.get(x, x)
        ext.setdefault(side, []).append(n)
    imports = [l for l in head if l.strip().upper().startswith('.IMPORT')]
    code_head = sub(head) + ['          .EXPORT     %s\n' % n for n in ext.get('P', []) if n not in exported] \
        + ['          .IMPORT     %s\n' % n for n in ext.get('C', [])]
    data_head = imports + ['          .EXPORT     %s\n' % n for n in ext.get('C', [])] \
        + ['          .IMPORT     %s\n' % n for n in ext.get('P', [])]
    open(a[1], 'w', encoding='latin-1').writelines(
        code_head + layout(code, int(a[2], 16), int(a[3], 16), False, 'code') + ['          .END\n'])
    open(a[4], 'w', encoding='latin-1').writelines(
        data_head + layout(data, int(a[5], 16), int(a[6], 16), True, 'data') + ['          .END\n'])


if __name__ == '__main__':
    main()
