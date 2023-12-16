#!/usr/bin/python3

user_input = input("")

if user_input == 'z':
    print('a')

else:
    next = ord(user_input) + 1

    print(chr(next))