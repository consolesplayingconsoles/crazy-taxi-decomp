"""Every line the run prints ends with the wall-clock time (HH:MM:SS), so the log's last line tells how long the step after it has
been running: the elapsed seconds alone ([ 606s]) do not, without the run's start time (Virtua Tennis --regen: 38 minutes on the
last 7 functions read, nothing in the log to see it by). At the end, not the start: watch.py, status.py and the tests read the
lines by how they begin ([ 606s], a function name, total)."""
import time


class Stamp:
    def __init__(self, out, clock=None):
        self.out = out; self.clock = clock or (lambda: time.strftime('%H:%M:%S')); self.text = False

    def write(self, t):
        parts = t.split('\n')
        for i, p in enumerate(parts):
            if i:
                self.out.write(('  %s\n' % self.clock()) if self.text else '\n'); self.text = False
            if p:
                self.out.write(p); self.text = True

    def flush(self):
        self.out.flush()
