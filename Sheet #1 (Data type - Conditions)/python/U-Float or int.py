#!/usr/bin/python3
from math import ceil
"""
Given a number N. Determine whether N is float number or integer number.
Note:

If N:
    is float number:
        then print "float" followed by the integer part followed by decimal part separated by space.

    is integer number:
        then print "int" followed by the integer part separated by space. 
"""

N = float(input(""))
verify_equation = N - int(N)
if verify_equation == 0:
    print(f"int {int(N)}")
else:
    print(f"float {int(N)} {verify_equation:.3f}")
