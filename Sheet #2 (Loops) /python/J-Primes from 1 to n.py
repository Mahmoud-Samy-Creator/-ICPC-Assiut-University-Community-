#!/usr/bin/python3

user_input = int(input(""))

sure = 0

for i in range(1, user_input + 1):
    if ((i % 2 == 0 and i != 2) or i == 1):
        continue
    else:
        for j in range(2, i):
            if (i % j == 0):
                sure += 1

        if (sure == 0):
            print(i, end=' ')
    sure = 0