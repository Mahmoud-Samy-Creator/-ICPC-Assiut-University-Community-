#!/usr/bin/python
"""
Given a number X.
Print "EVEN" if the first digit of X is even number.
Otherwise print "ODD".
"""

user_input = input("")

if int(user_input[0]) % 2 == 0:
    print("EVEN")
else:
    print("ODD")
