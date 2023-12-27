#!/usr/bin/python3

test_cases = int(input(""))
result = 1

for i in range(1, test_cases + 1):
    test = int(input(""))
    for j in range(1, test + 1):
        result *= j
    print(result)
    result = 1