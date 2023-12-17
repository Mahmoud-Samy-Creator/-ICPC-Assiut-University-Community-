#!/usr/bin/python3

# Get the 2 numbers
user_input = input("")
user_input = user_input.split(" ")
user_input = [int(x) for x in user_input]

# Format the numbers to 32-bit binary strings
a = format(user_input[0], '032b')
b = format(user_input[1], '032b')

# Perform bitwise operation
result = ""

# A loop runs from the 31st bit (MSB)
# to the 0th bit (LSB) to perform addition
for i in range(31, -1, -1):
    bit_sum = int(a[i]) + int(b[i])
    result = str(bit_sum % 2) + result

# Display the output
print(f"{int(result, 2)}")
