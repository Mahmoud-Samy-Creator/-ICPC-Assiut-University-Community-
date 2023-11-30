#!/usr/bin/python3
# Get the floor, ceil  &round of a / b
from math import floor, ceil

user_input = input("")

values_string_list = user_input.split()

values = [int(x) for x in values_string_list]

a = values[0]
b = values[1]
result = a / b

print(f"floor {a} / {b} = {floor(result)}")
print(f"ceil {a} / {b} = {ceil(result)}")
print(f"round {a} / {b} = {ceil(result) if result - floor(result) >= 0.5 else floor(result)}")
