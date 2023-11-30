#!/usr/bin/python3
user_input = input("")

# Split the input string into individual characters
characters = list(user_input)

# Initialize a list to store individual numbers
numbers = []
current_number = ''

# Iterate through characters and gather numbers
for char in characters:
    if char.isdigit() or char == '.':
        current_number += char
    else:
        numbers.append(float(current_number))
        current_number = ''

# Check if there's a trailing number
if current_number:
    numbers.append(float(current_number))

# Getting the operator
if '+' in user_input:
    print(int(numbers[0] + numbers[1]))

if '-' in user_input:
    print(int(numbers[0] - numbers[1]))

if '*' in user_input:
    print(int(numbers[0] * numbers[1]))

if '/' in user_input:
    print(int(numbers[0] / numbers[1]))
