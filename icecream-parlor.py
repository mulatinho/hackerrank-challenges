#!/bin/python3

import os


def retindex(m, arr):
    total, ii, ij = 0, 0, 0
    for i in arr:
        for j in arr:
            if ii != ij:
                total = i + j
                if total == m:
                    return ii + 1, ij + 1
            ij += 1
        ii += 1
        ij = 0
    return 0, 0


def icecreamParlor(m, arr):
    ri, rj = retindex(m, arr)
    print("retindex: {0}, {1}".format(ri,rj))
    return [ri, rj]


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        m = int(input())

        n = int(input())

        arr = list(map(int, input().rstrip().split()))

        result = icecreamParlor(m, arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()

