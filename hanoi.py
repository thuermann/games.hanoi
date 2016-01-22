#!/usr/bin/python3
#
# $Id: hanoi.py,v 1.1 2016/01/22 22:55:35 urs Exp $

import sys

def usage():
    print("Usage:", sys.argv[0], "n")

def hanoi(n, src, dst, tmp):
    if n == 0:
        return;

    hanoi(n - 1, src, tmp, dst)
    print(src, "->", dst)
    hanoi(n - 1, tmp, dst, src)

if len(sys.argv) != 2:
    usage()
    exit(1)

n = int(sys.argv[1])
hanoi(n, 0, 1, 2)
