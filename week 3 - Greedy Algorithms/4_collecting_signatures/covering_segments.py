# Uses python3
import sys
import numpy as np
from collections import namedtuple,Counter

Segment = namedtuple('Segment', 'start end')

def optimal_points(segments):
    segments=sorted(segments,key=lambda x: x.end)
    points = []

    while segments:
        index=0
        points.append(segments[0].end)
        # print("Segments: ", segments)

        for _ in range(len(segments)):
            # print("Segment: ",segments[index])
            if points[-1] <= segments[index].end and points[-1] >= segments[index].start:
                segments.pop(index)
            else:
                index+=1
    return points

if __name__ == '__main__':
    input = sys.stdin.read()
    n, *data = map(int, input.split())
    segments = list(map(lambda x: Segment(x[0], x[1]), zip(data[::2], data[1::2])))
    points = optimal_points(segments)
    print(len(points))
    for p in points:
        print(p, end=' ')
