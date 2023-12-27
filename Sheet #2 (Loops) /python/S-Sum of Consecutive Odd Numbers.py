#!/usr/bin/python3

tests = int(input(""))
sum = 0

for i in range(0, tests):
    user_input = input("")
    user_input = user_input.split(" ")
    a = int(user_input[0])
    b = int(user_input[1])
    if a > b:
        a, b = b, a
    for j in range (a + 1, b):
        if j % 2 != 0:
            sum += j
    print(sum)
    sum = 0
