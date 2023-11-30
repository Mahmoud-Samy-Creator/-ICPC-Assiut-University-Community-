#!/usr/bin/python3
'''
Given 3 numbers A, B and C,
Print the minimum and the maximum numbers.
'''

user_input = input("")

string_values = user_input.split()
values = [float(x) for x in string_values]

max_num = max(values)
min_num = min(values)

print(f"{int(min_num)} {int(max_num)}")
