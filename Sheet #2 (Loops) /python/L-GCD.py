#!/usr/bin/python3

user_input = input("")
user_input = user_input.split(" ")

a = int(user_input[0])
b = int(user_input[1])

if a > b:
    a, b = b, a

for i in range(1, a + 1):
    if (a % i == 0 and b % i == 0):
        divisor = i

print(divisor)