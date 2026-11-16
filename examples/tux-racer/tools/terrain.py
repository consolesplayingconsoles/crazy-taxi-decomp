#!/usr/bin/env python3
"""An Extreme Tux Racer course (elev.png, course.dim) as a height field in Crazy Taxi's units, shared by coldc.py (the ground the
cab drives on) and the terrain model (what is drawn), so the two agree.

The course's rules are the game's own (etr src/course.cpp, LoadElevMap): the elevation of a pixel is
    (red - 127) / 255 * scale  -  row / rows * length * tan(angle)
in metres, rows counting down the slope (row 0 is the top). Crazy Taxi's units are 10 to the metre, y up, and the course lies with
x across (0 to width) and z down the slope (0 to length), from the origin. The top of the course is at y = 0. The car moves along
(sin yaw, cos yaw) (its heading is TOANG2(-vx, vz) = nlArcTan2(vx, vz), src/gen_aon.c, src/trig.c), so yaw 0 faces +z, down the course;
the Arcade start's yaw 0x4000 would face +x, across it."""
import math
import os
import re

import PIL.Image

UNITS = 10.0                                            # Crazy Taxi: 10 units a metre


class Course:
    def __init__(self, folder):
        dim = open(os.path.join(folder, "course.dim"), encoding="latin-1").read()

        def key(name, default):
            m = re.search(r"\[%s\]\s*([-0-9.]+)" % name, dim)
            return float(m.group(1)) if m else default
        self.width = key("width", 100.0)
        self.length = key("length", 1000.0)
        self.angle = key("angle", 20.0)
        self.scale = key("scale", 10.0)
        self.play_width = key("play_width", self.width)             # the player's area (etr physics.cpp SetTuxPosition): x within
        self.play_length = key("play_length", self.length)          # (width - play_width) / 2 of each edge, finish at play_length
        self.start_x = key("startx", self.width / 2)                # where the course starts the player, across and down, in metres
        self.start_z = key("starty", 5.0)
        self.oz = 0.0                                               # where the course's top lies on z (Chain moves it to fit the ground grid)
        self.terrain = PIL.Image.open(os.path.join(folder, "terrain.png")).convert("RGB").load()
        img = PIL.Image.open(os.path.join(folder, "elev.png")).convert("RGB")
        self.cols, self.rows = img.size
        px = img.load()
        slope = math.tan(math.radians(self.angle))
        self.h = [[((px[self.cols - 1 - c, r][0] - 127) / 255.0 * self.scale
                    - r / self.rows * self.length * slope) * UNITS for c in range(self.cols)] for r in range(self.rows)]

    def x(self, c):
        return c / (self.cols - 1.0) * self.width * UNITS

    def z(self, r):
        return self.oz + r / (self.rows - 1.0) * self.length * UNITS

    def y(self, c, r):
        return self.h[r][c] - self.h[0][0]

    def terrain_px(self, c, r):
        """The colour terrain.png names for the pixel (c, r) (ETR reads it mirrored across, as it does the elevation)."""
        return self.terrain[self.cols - 1 - c, r]

    def limits(self):
        """The player's area as two polylines of (x, z): the left edge going down the slope, the right edge going down it too, and the z
        where the run ends."""
        x0 = (self.width - self.play_width) / 2 * UNITS
        x1 = self.width * UNITS - x0
        z1 = self.oz + self.play_length * UNITS
        return [(x0, self.oz), (x0, z1)], [(x1, self.oz), (x1, z1)], z1

    def grid(self, step):
        """Vertex columns and rows every `step` pixels, the last one always the edge."""
        cs = list(range(0, self.cols - 1, step)) + [self.cols - 1]
        rs = list(range(0, self.rows - 1, step)) + [self.rows - 1]
        return cs, rs

    def triangles(self, step):
        """Two triangles per square of the grid, each three (x, y, z) vertices, wound counter-clockwise seen from above."""
        cs, rs = self.grid(step)
        out = []
        for j in range(len(rs) - 1):
            for i in range(len(cs) - 1):
                p = [[(self.x(cs[i + di]), self.y(cs[i + di], rs[j + dj]), self.z(rs[j + dj])) for di in (0, 1)] for dj in (0, 1)]
                a, b, c, d = p[0][0], p[0][1], p[1][0], p[1][1]
                out.append((a, c, b))
                out.append((b, c, d))
        return out


BLEND = 15                                              # rows (30 m) over which a part's first rows leave the height the one before ended on
GRID_Z = (-14200.0, 14100.0)                            # the ground grid's z extent (GROUND_HDR: -142 cells to +141 of 100 units)
GRID_EDGE = 200.0                                       # kept clear of the grid's edge


def _smooth(t):
    return t * t * (3.0 - 2.0 * t)


class Chain:
    """Courses joined end to end as one: the same interface as Course (what coldc.py and tuxmodel.py read), so the cab drives through the
    joins as through any row. A part after the first is lowered by the drop the one before ended on, and its first BLEND rows are bent
    from the exact heights the previous part's last row has to its own, so the join is continuous in height, column by column. The
    parts must be the same width and size; the play limits follow each part's own and slant across the blend where they differ."""

    def __init__(self, folders, copies):
        courses = [Course(f) for f in folders]
        self.parts = [c for c in courses for _ in range(copies)]
        p0 = self.parts[0]
        for p in self.parts:
            if (p.cols, p.rows, p.width, p.length) != (p0.cols, p0.rows, p0.width, p0.length):
                raise SystemExit("[ERROR] the courses to join differ in size: %dx%d, %g x %g m against %dx%d, %g x %g m"
                                 % (p.cols, p.rows, p.width, p.length, p0.cols, p0.rows, p0.width, p0.length))
        self.cols, self.width = p0.cols, p0.width
        self.part_rows = p0.rows - 1
        self.rows = len(self.parts) * self.part_rows + 1
        self.length = len(self.parts) * p0.length
        total = self.length * UNITS
        if total > GRID_Z[1] - GRID_Z[0] - 2 * GRID_EDGE:
            raise SystemExit("[ERROR] %d parts of %g m are %.0f units long and the ground grid is %.0f: at most %d parts"
                             % (len(self.parts), p0.length, total, GRID_Z[1] - GRID_Z[0], int((GRID_Z[1] - GRID_Z[0] - 2 * GRID_EDGE) // (p0.length * UNITS))))
        self.oz = min(0.0, GRID_Z[1] - GRID_EDGE - total)
        self.start_x, self.start_z = p0.start_x, p0.start_z
        self.play_width, self.play_length = p0.play_width, (len(self.parts) - 1) * p0.length + self.parts[-1].play_length
        self.h = [list(row) for row in p0.h]
        for k in range(1, len(self.parts)):
            p = self.parts[k]
            end = self.h[-1]
            mean = sum(end) / self.cols - sum(p.h[0]) / self.cols
            for r in range(1, p.rows):
                w = 1.0 - _smooth(min(1.0, r / float(BLEND))) if r < BLEND else 0.0
                self.h.append([p.h[r][c] + mean + (end[c] - (p.h[0][c] + mean)) * w for c in range(self.cols)])

    def x(self, c):
        return c / (self.cols - 1.0) * self.width * UNITS

    def z(self, r):
        return self.oz + r / (self.rows - 1.0) * self.length * UNITS

    def y(self, c, r):
        return self.h[r][c] - self.h[0][0]

    def terrain_px(self, c, r):
        return self.parts[min(r // self.part_rows, len(self.parts) - 1)].terrain_px(c, r - (min(r // self.part_rows, len(self.parts) - 1)) * self.part_rows)

    grid = Course.grid
    triangles = Course.triangles

    def limits(self):
        """Course.limits for the chain: each part's x edges between its own z range, a slant over the blend where one part's differ from the next."""
        row_z = self.length * UNITS / (self.rows - 1.0)
        left, right = [], []
        for k, p in enumerate(self.parts):
            x0 = (p.width - p.play_width) / 2 * UNITS
            x1 = p.width * UNITS - x0
            z_in, z_out = self.oz + k * p.length * UNITS, self.oz + (k + 1) * p.length * UNITS
            if k == 0:
                left.append((x0, z_in))
                right.append((x1, z_in))
            elif (x0, x1) != (left[-1][0], right[-1][0]):
                for pts, x in ((left, x0), (right, x1)):
                    pts.append((pts[-1][0], z_in - BLEND * row_z))
                    pts.append((x, z_in + BLEND * row_z))
            end = self.oz + self.play_length * UNITS if k == len(self.parts) - 1 else z_out
            left.append((left[-1][0] if k else x0, end))
            right.append((right[-1][0] if k else x1, end))
        return left, right, left[-1][1]
