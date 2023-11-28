#!/usr/bin/python3

inputs = input("")
values_list = inputs.split()
values = [int(x) for x in values_list]

num1 = values[0] % 10
num2 = values[1] % 10

print(num1 + num2)