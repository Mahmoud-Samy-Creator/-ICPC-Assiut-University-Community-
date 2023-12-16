#!/usr/bin/python3

user_input = input("")
user_input = user_input.split()
user_input = [int(x) for x in user_input]

interval  = user_input[0] - user_input[1]

if interval < 0:
    interval *= -1

if user_input[0] == 0 and user_input[1] == 0:
    print("NO")

elif user_input[0] == user_input[1]:
    print("YES")

elif interval == 1 or interval == 0:
    print("YES")
else:
    print("NO")
