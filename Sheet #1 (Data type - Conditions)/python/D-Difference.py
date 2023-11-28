#!/usr/bin/python3

inputs=input("")
input_list = inputs.split()
values = [int(x) for x in input_list]

a = values[0]
b = values[1]
c = values[2]
d = values[3]

print(f"Difference = {a * b - c * d}")