#!/usr/bin/python3

user_input = input("")
user_input = user_input.split(" ")
a = int(user_input[0])
b = int(user_input[1])

result = a - b

if result >= 0:
    print(result)
else:
    print(0)