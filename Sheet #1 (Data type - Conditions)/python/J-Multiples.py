#!/usr/bin/python3
'''
Given two numbers A and B.
Print "Multiples" if A is multiple of B or vice versa.
Otherwise print "No Multiples".
'''

user_input = input("")

string_values = user_input.split()
values = [int(x) for x in string_values]
a = values[0]
b = values[1]

if a % b == 0 or b % a == 0:
    print("Multiples")
else:
    print("No Multiples")
