#!/usr/bin/env python3
"""Write a modified executable's changes into the repo's asm data words.

    apply_bin.py <repo> <original 1ST_READ.BIN> <modified 1ST_READ.BIN>   (run from anywhere)

Every differing byte is mapped to the asm file covering it (asm/<addr>_<name>.src, in BASE order)
and its `.DATA.W` / `.DATA.B` lines are rewritten; nothing else in the file changes. Files already
turned into instructions are refused (patch those by hand). Sizes must be equal.
"""
import os
import re
import sys

repo, orig_p, new_p = sys.argv[1:4]
orig, new = open(orig_p, "rb").read(), open(new_p, "rb").read()
assert len(orig) == len(new), "sizes differ"
base = int(open(os.path.join(repo, "BASE")).read().strip(), 16)
files = sorted(os.listdir(os.path.join(repo, "asm")))
starts = [int(f[:8], 16) for f in files]
diff = [i for i in range(len(orig)) if orig[i] != new[i]]
touched = {}
for i in diff:
    a = base + i
    k = max(j for j, s in enumerate(starts) if s <= a)
    touched.setdefault(files[k], []).append(i)
for f, offs in sorted(touched.items()):
    p = os.path.join(repo, "asm", f)
    lines = open(p).read().split("\n")
    fstart = int(f[:8], 16) - base
    data_lines = [n for n, l in enumerate(lines) if re.match(r"\s+\.DATA\.[WB]\s", l)]
    if any(not (l.startswith(";") or l.strip().startswith(".") or l.endswith(":") or not l.strip())
           for l in lines):
        raise SystemExit("[ERROR] %s has instructions: patch it by hand" % f)
    pos = fstart
    for n in data_lines:
        l = lines[n]
        if ".DATA.W" in l:
            lines[n] = re.sub(r"H'[0-9A-F]{4}", "H'%04X" % (new[pos] | new[pos + 1] << 8), l)
            pos += 2
        else:
            lines[n] = re.sub(r"H'[0-9A-F]{2}", "H'%02X" % new[pos], l)
            pos += 1
    open(p, "w").write("\n".join(lines))
    print("  %s: %d bytes changed" % (f, len(offs)))
print("%d bytes changed in %d asm files" % (len(diff), len(touched)))
