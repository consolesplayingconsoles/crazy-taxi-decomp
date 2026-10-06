#!/usr/bin/env python3
"""Split a Dreamcast executable into one Hitachi asmsh source per function. Stdlib only.

    split_asm.py <1ST_READ.BIN> <base hex> <report.txt> <out dir>

<report.txt> is DcReport output ("F <addr> <size> <name>" lines), or a functions.txt, which may also
hold "D <addr> 0 <name>" lines: a data boundary (where a C unit's @data range starts or ends), not
a function. Every entry starts a new file that runs to the next entry, so the files cover the binary exactly; in input order and
linked with ALIGN=2 they rebuild it byte for byte. Each file exports its label (_<name>) so C that
replaces a function can call the others by name.

The body is emitted as data words: that is what guarantees the byte match on day one. Turning a
file into real instructions (and then C) is the decomp work itself.
Writes <out dir>/asm/*.src, <out dir>/objects.txt (link order) and <out dir>/functions.txt
("F <addr> <size> <name>", the committed function list setup.sh splits from).
"""
import os
import re
import sys


def main():
    if len(sys.argv) != 5:
        raise SystemExit(__doc__)
    data = open(sys.argv[1], "rb").read()
    base = int(sys.argv[2], 16)
    end = base + len(data)
    names = {}
    for line in open(sys.argv[3]):
        p = line.split()
        if len(p) >= 4 and p[0] in ("F", "D"):
            a = int(p[1], 16)
            if base <= a < end:
                names[a] = p[3]
    starts = sorted(set(names) | {base})
    used = set()
    out = os.path.join(sys.argv[4], "asm")
    os.makedirs(out, exist_ok=True)
    order = []
    for i, a in enumerate(starts):
        b = starts[i + 1] if i + 1 < len(starts) else end
        name = re.sub(r"[^A-Za-z0-9_]", "_", names.get(a, "blob_%08x" % a))
        if name in used:
            name = "%s_%08x" % (name, a)
        used.add(name)
        label = "_" + name
        fname = "%08x_%s.src" % (a, name)
        chunk = data[a - base:b - base]
        lines = ["; %08x-%08x %s (%d bytes)" % (a, b, name, len(chunk)),
                 "          .SECTION    P, CODE, ALIGN=2",
                 "          .EXPORT     %s" % label,
                 "%s:" % label]
        for o in range(0, len(chunk) - 1, 2):
            lines.append("          .DATA.W     H'%04X" % (chunk[o] | chunk[o + 1] << 8))
        if len(chunk) % 2:
            lines.append("          .DATA.B     H'%02X" % chunk[-1])
        lines.append("          .END")
        open(os.path.join(out, fname), "w").write("\n".join(lines) + "\n")
        order.append(fname)
    open(os.path.join(sys.argv[4], "objects.txt"), "w").write("\n".join(order) + "\n")
    if os.path.abspath(sys.argv[3]) != os.path.abspath(os.path.join(sys.argv[4], "functions.txt")):
        with open(os.path.join(sys.argv[4], "functions.txt"), "w") as f:
            for line in open(sys.argv[3]):
                p = line.split()
                if len(p) >= 4 and p[0] in ("F", "D") and base <= int(p[1], 16) < end:
                    f.write("%s %s %s %s\n" % (p[0], p[1], p[2], p[3]))
    print("%d files, %d named, %d bytes" % (len(order), sum(1 for a, n in names.items() if not n.startswith(("FUN_", "data_"))), len(data)))


if __name__ == "__main__":
    main()
