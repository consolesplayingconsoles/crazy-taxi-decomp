#!/usr/bin/env python3
"""Cheat codes as named-variable leads. Stdlib only.

    cheat_leads.py <code list .txt | .cht | fetch> <game title> [<1ST_READ.BIN> <base hex>]

Reads a decrypted CodeBreaker / Xploder DC code list (the Xploder DC Code Compiler text format:
game id, @version, @title, then per cheat its name and address/value pairs, ".end" between
games; gamehacking.org exports the same codes), or a RetroArch ".cht" file (libretro-database,
cht/Sega - Dreamcast/<game>.cht: one game per file, "cheatN_address", "cheatN_desc",
"cheatN_memory_search_size", "cheatN_value"; the title is the file name). Every code is an address with a meaning, so each
cheat becomes a globals candidate: the cheat's name as the variable's name, its size from the code
type. Widescreen codes (the community's CodeBreaker widescreen hacks) read the same way: the
address is the game's projection or aspect value. Prints a table, and after it the raw lines of
cheats it could not read.

Code types read (address = 0x8C000000 + the low 24 bits):
  00 / 01 / 02   8 / 16 / 32-bit write: the variable the cheat sets
  0C / 0D        32 / 16-bit compare: the variable the cheat tests
  04 / 05        16 / 32-bit slide (count and step in the value): the table's first entry
Others (enable codes 0B/0E/0F, increments, hooks) are listed as "other" with their raw lines.

"fetch" in place of a file looks the title up in libretro-database (cht/Sega - Dreamcast/, public,
stdlib urllib, no account), keeps the .cht next to this script's dist/cheats/ and reads it. No
network or no match: it says so and stops; a local file always works.

With the executable and its base: "in exe" marks addresses inside the file (a variable with an
initial value, or code), else "RAM". The list's release is printed next to the game: if it is not
the decomp's, the addresses are leads to translate, not to apply.
"""
import re
import sys

HEX8 = re.compile(r"^[0-9A-Fa-f]{8}$")
WRITE = {"00": 1, "01": 2, "02": 4}
COMPARE = {"0C": 4, "0D": 2}
SLIDE = {"04": 2, "05": 4}


def parse(path):
    games, g, cheat = [], None, None
    for raw in open(path, encoding="latin-1"):
        line = raw.strip()
        if not line:
            continue
        if line == ".end":
            g, cheat = None, None
            continue
        if g is None:
            g = {"id": line, "title": "", "version": "", "cheats": []}
            games.append(g)
            continue
        if line.startswith("@"):
            if re.match(r"@V\d", line):
                g["version"] = line[1:]
            else:
                g["title"] = line[1:]
            continue
        if HEX8.match(line):
            if cheat is None:
                cheat = {"name": "(unnamed)", "lines": []}
                g["cheats"].append(cheat)
            cheat["lines"].append(line.upper())
            continue
        cheat = {"name": line, "lines": []}
        g["cheats"].append(cheat)
    return games


CHT_SIZE = {"3": "00", "4": "01", "5": "02"}        # RetroArch search size -> 8/16/32-bit write type


def parse_cht(path):
    """A libretro .cht file as one game, its cheats in the list format (type+address, value)."""
    import os
    kv = {}
    for raw in open(path, encoding="latin-1"):
        if "=" in raw:
            k, v = raw.split("=", 1)
            kv[k.strip()] = v.strip().strip('"')
    g = {"id": os.path.basename(path), "title": os.path.splitext(os.path.basename(path))[0],
         "version": "(libretro .cht)", "cheats": []}
    for i in range(int(kv.get("cheats", "0"))):
        p = "cheat%d_" % i
        addr, desc = kv.get(p + "address"), kv.get(p + "desc", "(unnamed)")
        if addr is None:
            continue
        t = CHT_SIZE.get(kv.get(p + "memory_search_size", ""), "0B")   # unknown width: listed as other
        lines = ["%s%06X" % (t, int(addr) & 0xFFFFFF), "%08X" % (int(kv.get(p + "value", "0") or 0) & 0xFFFFFFFF)]
        g["cheats"].append({"name": desc, "lines": lines})
    return [g]


def fetch_cht(title):
    """The libretro-database .cht for a title (a substring, case-insensitive); the local path."""
    import json, os, urllib.parse, urllib.request
    api = "https://api.github.com/repos/libretro/libretro-database/contents/cht/Sega%20-%20Dreamcast"
    try:
        with urllib.request.urlopen(api, timeout=30) as r:
            names = [e["name"] for e in json.load(r)]
    except Exception as e:
        raise SystemExit("[ERROR] libretro-database not reachable (%s): give a local list instead" % e)
    hits = [n for n in names if title.lower() in n.lower()]
    if not hits:
        raise SystemExit("[ERROR] no .cht matching %r in libretro-database (%d Dreamcast lists)" % (title, len(names)))
    if len(hits) > 1:
        print("several lists match, using the first: " + "; ".join(hits), file=sys.stderr)
    out = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "dist", "cheats", hits[0])
    os.makedirs(os.path.dirname(out), exist_ok=True)
    if not os.path.exists(out):
        url = "https://raw.githubusercontent.com/libretro/libretro-database/master/cht/Sega%20-%20Dreamcast/" + urllib.parse.quote(hits[0])
        with urllib.request.urlopen(url, timeout=30) as r, open(out, "wb") as f:
            f.write(r.read())
    print("libretro-database: %s" % hits[0], file=sys.stderr)
    return out


def main():
    if len(sys.argv) not in (3, 5):
        raise SystemExit(__doc__)
    src = fetch_cht(sys.argv[2]) if sys.argv[1] == "fetch" else sys.argv[1]
    games = parse_cht(src) if src.lower().endswith(".cht") else parse(src)
    want = sys.argv[2].lower()
    hits = [g for g in games if want in g["title"].lower() or want in g["id"].lower()]
    if not hits:
        raise SystemExit("[ERROR] no game matching %r (%d games in the list)" % (sys.argv[2], len(games)))
    exe, base = None, 0
    if len(sys.argv) == 5:
        exe = open(sys.argv[3], "rb").read()
        base = int(sys.argv[4], 16) & 0x1FFFFFFF
    for g in hits:
        print("== %s (%s) %s: %d cheats" % (g["title"], g["id"], g["version"], len(g["cheats"])))
        print("%-10s %-4s %-7s %-10s %s" % ("address", "size", "kind", "value", "cheat"))
        other, bad = [], []
        for c in g["cheats"]:
            lines = c["lines"]
            if len(lines) % 2:
                bad.append((c["name"], lines))
                continue
            shown = False
            for a, v in zip(lines[0::2], lines[1::2]):
                t, off = a[:2], int(a[2:], 16)
                addr = 0x8C000000 | off
                hook = re.search(r"must be on|enable code|master code", c["name"], re.I) is not None
                if (t in WRITE or t in COMPARE or t in SLIDE) and not hook:
                    size = (WRITE.get(t) or COMPARE.get(t) or SLIDE.get(t))
                    kind = "write" if t in WRITE else "compare" if t in COMPARE else "slide"
                    where = ""
                    if exe is not None:
                        where = "in exe" if base <= (addr & 0x1FFFFFFF) - 0 < base + len(exe) and (addr & 0x1FFFFFFF) >= base else "RAM"
                    print("0x%08X %-4d %-7s %-10s %s%s" % (addr, size, kind, v, c["name"], ("  [%s]" % where) if where else ""))
                    shown = True
                else:
                    other.append((c["name"], a, v))
            if not shown and not any(o[0] == c["name"] for o in other):
                bad.append((c["name"], lines))
        if other:
            print("-- other code types (enable codes, hooks, increments), not variables:")
            for n, a, v in other:
                print("   %s %s  %s" % (a, v, n))
        if bad:
            print("-- could not read (odd line count or no codes):")
            for n, lines in bad:
                print("   %s: %s" % (n, " ".join(lines)))


if __name__ == "__main__":
    main()
