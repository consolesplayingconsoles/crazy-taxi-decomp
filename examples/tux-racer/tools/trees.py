#!/usr/bin/env python3
"""A course's trees (items.lst of an Extreme Tux Racer course) as places on the course in Crazy Taxi's units, for tuxmodel.py (the models and
the list the layer draws from) and coldc.py (a pole in the wall grid for each trunk).

The positions are ETR's own reading (src/course.cpp: the items' x and z are pixels of the course's maps, nx x ny, and a pixel's world place is
x = (nx - x) / (nx - 1) * width, down the slope (ny - z) / (ny - 1) * length, both in metres: the picture is flipped). A chain's copies repeat
the list a course's length further down. The kinds are the three that grow: tree, tree_barren and shrub, each with the texture object_types.lst
gives it (a picture with alpha); a tree is drawn as ETR draws it (src/course_render.cpp DrawTrees): two quads crossing at its place, diam wide
and height high."""
import os
import re

import terrain

KINDS = ("tree", "tree_barren", "shrub")
POLE_KINDS = ("tree", "tree_barren")                    # the trunks that stop a cab (a shrub is low: it does not)


def kind_textures(data_dir):
    """[texture file path] for KINDS, from data/objects/object_types.lst."""
    text = open(os.path.join(data_dir, "objects", "object_types.lst"), encoding="latin-1").read()
    out = {}
    for m in re.finditer(r"\[name\]\s*(\w+)\s*\[texture\]\s*(\S*)", text):
        out.setdefault(m.group(1), m.group(2))
    return [os.path.join(data_dir, "objects", out[k]) for k in KINDS]


def instances(course, folder):
    """[(x, y, z, radius, height, kind index)] in units, for every copy of the course in `course` (a terrain.Course or terrain.Chain), sorted
    down the slope."""
    parts = getattr(course, "parts", None) or [course]
    p0 = parts[0]
    nx, ny = p0.cols, p0.rows
    items = []
    for m in re.finditer(r"\*\[name\](\w+)\[x\]([-0-9.]+)\[z\]([-0-9.]+)(?:\[height\]([-0-9.]+))?(?:\[diam\]([-0-9.]+))?",
                         open(os.path.join(folder, "items.lst"), encoding="latin-1").read()):
        if m.group(1) in KINDS and m.group(4) and m.group(5):
            items.append((KINDS.index(m.group(1)), float(m.group(2)), float(m.group(3)), float(m.group(4)), float(m.group(5))))
    out = []
    for k in range(len(parts)):
        for kind, x, z, height, diam in items:
            xm = (nx - x) / (nx - 1.0) * p0.width
            dm = (ny - z) / (ny - 1.0) * p0.length
            c = min(max(int(round(xm / p0.width * (nx - 1))), 0), nx - 1)
            r = min(max(int(round(dm / p0.length * (ny - 1))) + k * (ny - 1), 0), course.rows - 1)
            out.append((xm * terrain.UNITS, course.y(c, r), course.z(r), diam / 2.0 * terrain.UNITS, height * terrain.UNITS, kind))
    out.sort(key=lambda t: t[2])
    return out
