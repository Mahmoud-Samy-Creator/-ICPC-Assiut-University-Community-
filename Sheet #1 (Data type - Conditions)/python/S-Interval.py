#!/usr/bin/python3

"""
Given a number X.
Determine in which of the following intervals
the number X belongs to:
[0,25], (25,50], (50,75], (75,100]
"""

value = float(input(""))
if value < 0 or value > 100:
    print("Out of Intervals")

elif value <= 25:
    print("Interval [0,25]")

elif value <= 50:
    print("Interval (25,50]")

elif value <= 75:
    print("Interval (50,75]")

elif value <= 100:
    print("Interval (75,100]")
