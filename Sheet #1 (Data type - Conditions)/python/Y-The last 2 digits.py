#!/usr/bin/python3
"""
Given 4 numbers A, B, C and D

. Print the last 2 digits from their Multiplication.
Input

Only one line containing four numbers A
, B, C and D (2≤A,B,C,D≤109)

.
Output

Print the last 2 digits from their Multiplication.
"""

user_input = input("")
user_input = user_input.split()
user_input = [int(x) for x in user_input]

res = user_input[0] * user_input[1] * user_input[2] * user_input[3]
res %= 100
formated_res = str(res).zfill(2)
print(formated_res)
