#!/usr/bin/python3
"""
Given three numbers A, B, C.
Print these numbers in ascending order followed by a blank line
and then the values in the sequence as they were read.
"""

user_input = input("")

values = user_input.split()
values = [int(x) for x in values]

sorted_result = sorted(values)

print(f"{sorted_result[0]}\n{sorted_result[1]}\n{sorted_result[2]}")
print("")
print(f"{values[0]}\n{values[1]}\n{values[2]}")
