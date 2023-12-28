#!/usr/bin/python3

N = int(input())

fib_sequence = [0, 1]
for i in range(2, N):
    fib_sequence.append(fib_sequence[i - 1] + fib_sequence[i - 2])

print(*fib_sequence[:N])

