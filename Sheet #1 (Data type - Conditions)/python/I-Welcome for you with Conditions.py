#!/usr/bin/python3
'''
Given two numbers A and B.
Print "Yes" if A is greater than or equal to B.
Otherwise print "No".
'''

user_input = input("")


string_values = user_input.split()
values = [int(x) for x in string_values]
a = values[0]
b = values[1]

if a >= b:
    print("Yes")
else:
    print("No")
