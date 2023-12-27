#!/usr/bin/python3

input = int(input(""))

sure = 0
for order in range(1, input + 1):
    if (order % 2 == 0):
        sure += 1
        print(order)

if sure == 0:
    print(-1)
