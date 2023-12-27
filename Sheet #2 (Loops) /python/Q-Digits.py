#!/usr/bin/python3

test_cases = int(input(""))

for i in range(0, test_cases):
    test = input("")
    test = test[::-1]
    for num in test:
        print(num, end=' ')
    print('')
