#!/usr/bin/python3

values = input("")

values_list = values.split()

int_values = [int(x) for x in values_list]

print(f"{int_values[0]} + {int_values[1]} = {int_values[0] + int_values[1]}")
print(f"{int_values[0]} * {int_values[1]} = {int_values[0] * int_values[1]}")
print(f"{int_values[0]} - {int_values[1]} = {int_values[0] - int_values[1]}")


# Expected output
"""
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
"""