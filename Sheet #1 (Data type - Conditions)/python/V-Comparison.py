#!/usr/bin/python3
"""
Given a comparison symbol (S) 
between two numbers A and B. Determine whether it is Right or Wrong.
The comparison is as follows: A < B, A > B, A = B.
"""

user_input = input("")
user_input = user_input.split()
user_input[0] = float(user_input[0])
user_input[2] = float(user_input[2])

if user_input[1] == '>':
    if user_input[0] > user_input[2]:
        print("Right")
    else:
        print("Wrong")

if user_input[1] == '<':
    if user_input[0] < user_input[2]:
        print("Right")
    else:
        print("Wrong")
if user_input[1] == '=':
    if user_input[0] == user_input[2]:
        print("Right")
    else:
        print("Wrong")
