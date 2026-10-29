"""place.py: fewer labels in a flat-form function, by putting a block where its only jump comes from. Stdlib only.

The flat form has a label for every block and a `goto` at the end of the blocks that do not fall through. SHC stops at about 512
labels in a function ("3018 overflow"), and a function over the limit is split into a main function and parts by splitflat.py, which
keeps every local in one array in memory (Virtua Tennis playerControl: 519 labels, 56 KB compiled for a 21 KB original; the same
function with its locals in registers is what the original had). A block that exactly one plain `goto` reaches, and nothing falls
into, can sit right after that goto: the goto and the label go, the behaviour is the same. A block reached by one `if (c) goto B;`
that ends a block (and falls into the next block N) moves there too, as `if (!(c)) goto N;` followed by B. A block that fell through
into the next one gets an explicit `goto` to it where it moved. Repeated until nothing moves.

    place(text)     the function's text with blocks moved; the text as it was when it has no label, or no block can move
"""
import re

LABEL = re.compile(r'^[ \t]*(L_[0-9A-Fa-f]+):;\s*$')
GOTO = re.compile(r'^\s*goto (L_[0-9A-Fa-f]+);\s*$')
CONDGOTO = re.compile(r'^(\s*)if \((.*)\) goto (L_[0-9A-Fa-f]+);\s*$')
ANYGOTO = re.compile(r'goto (L_[0-9A-Fa-f]+);')


class Block:
    def __init__(self, label, label_line, lines):
        self.label, self.label_line, self.lines = label, label_line, lines

    def last(self):
        for k in range(len(self.lines) - 1, -1, -1):
            if self.lines[k].strip():
                return k
        return None

    def term(self):
        """('goto', label), ('ret',) or ('fall',): how the block ends"""
        k = self.last()
        if k is None:
            return ('fall',)
        m = GOTO.match(self.lines[k])
        if m:
            return ('goto', m.group(1))
        if self.lines[k].strip().startswith('return'):
            return ('ret',)
        return ('fall',)


def place(text):
    lines = text.split('\n')
    ends = [i for i, l in enumerate(lines) if l.strip() == '}']
    first = next((i for i, l in enumerate(lines) if LABEL.match(l)), None)
    if first is None or not ends:
        return text
    end = max(ends)
    head, body, tail = lines[:first], lines[first:end], lines[end:]
    # the statements before the first label are the first block, with no label of its own
    pre = []
    blocks = [Block(None, None, pre)]
    for l in body:
        m = LABEL.match(l)
        if m:
            blocks.append(Block(m.group(1), l, []))
        else:
            blocks[-1].lines.append(l)
    moved = False
    changed = True
    while changed:
        changed = False
        refs = {}
        for b in blocks:
            for l in b.lines:
                for x in ANYGOTO.findall(l):
                    refs[x] = refs.get(x, 0) + 1
        where = {b.label: i for i, b in enumerate(blocks) if b.label}
        for i, a in enumerate(blocks):
            k = a.last()
            m = CONDGOTO.match(a.lines[k]) if k is not None else None
            if m and i + 2 < len(blocks) + 1 and i + 1 < len(blocks):
                # the block ends in `if (c) goto B;` and falls into the next block N: B moves here after `if (!(c)) goto N;`
                j = where.get(m.group(3))
                if j is not None and j != i and j != i + 1 and j != 0 and refs.get(m.group(3), 0) == 1 \
                        and blocks[j - 1].term()[0] != 'fall' and blocks[i + 1].label:
                    b = blocks[j]
                    if b.term()[0] == 'fall':
                        if j + 1 >= len(blocks):
                            continue
                        b.lines.append('    goto %s;' % blocks[j + 1].label)
                    nxt = blocks[i + 1].label
                    a.lines[k] = '%sif (!(%s)) goto %s;' % (m.group(1), m.group(2), nxt)
                    a.lines += b.lines
                    del blocks[j]
                    changed = moved = True
                    break
            t = a.term()
            if t[0] != 'goto':
                continue
            j = where.get(t[1])
            if j is None or j == i or j == 0 or refs.get(t[1], 0) != 1:
                continue
            if blocks[j - 1].term()[0] == 'fall':        # something falls into it
                continue
            b = blocks[j]
            if j != i + 1 and b.term()[0] == 'fall':
                if j + 1 >= len(blocks):
                    continue
                b.lines.append('    goto %s;' % blocks[j + 1].label)
            a.lines.pop(a.last())
            a.lines += b.lines
            del blocks[j]
            changed = moved = True
            break
    if not moved:
        return text
    out = list(head)
    for b in blocks:
        if b.label_line is not None:
            out.append(b.label_line)
        out += b.lines
    return '\n'.join(out + tail)
