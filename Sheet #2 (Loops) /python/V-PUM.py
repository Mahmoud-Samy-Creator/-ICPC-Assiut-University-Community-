#!/usr/bin/python3
N = int(input())

start = 1
for i in range(N):
    print(start, start + 1, start + 2, "PUM")
    start += 4
