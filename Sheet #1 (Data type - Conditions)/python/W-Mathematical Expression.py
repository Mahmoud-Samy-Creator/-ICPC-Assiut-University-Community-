#!/usr/bin/python3

"""
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign
"""
# A + B = C
user_input = input("")
user_input = user_input.split()
A = float(user_input[0])
op = user_input[1]
B = float(user_input[2])
res = float(user_input[4])

if op == '+':
    if A + B == res:
        print("Yes")
    else:
        print(int(A + B))

if op == '-':
    if A - B == res:
        print("Yes")
    else:
        print(int(A - B))

if op == '*':
    if A * B == res:
        print("Yes")
    else:
        print(int(A * B))

