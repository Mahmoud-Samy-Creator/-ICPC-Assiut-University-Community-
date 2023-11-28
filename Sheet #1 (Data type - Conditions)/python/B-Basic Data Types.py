#!/usr/bin/python3

# Take input from the user in order:
    # 1) int 
    # 1) long long 
    # 1) char
    # 1) float
# and print them in order

# Take multiple input as a string
values = input("")

# Modify the string in to list of inputs
values_list = values.split()

# Verify inputs types
values_list[0] = int(values_list[0])
values_list[1] = int(values_list[1])
values_list[3] = float(values_list[3])
values_list[4] = float(values_list[4])

# Trancate to 1 persent
values_list[4] = float(f"{values_list[4]:.1f}")

for value in values_list:
    print(value)

# Expected output
"""
3
12345678912345
a
334.23
14049.3
"""