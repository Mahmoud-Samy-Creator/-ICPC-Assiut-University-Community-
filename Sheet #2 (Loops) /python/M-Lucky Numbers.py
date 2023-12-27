#!/usr/bin/python3

user_input = input("")

user_input = user_input.split(" ")
user_input = [int(x) for x in user_input]
a = user_input[0]
b = user_input[1]
sure = 0

for number in range(a, b + 1):
    if all(digit in ['4', '7'] for digit in str(number)):
        sure += 1
        print(number, end=" ")

if sure == 0:
    print(-1)
