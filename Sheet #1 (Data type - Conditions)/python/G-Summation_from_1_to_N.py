#!/usr/bin/python3

value = int(input())

# A math equation to get the sum
# It's better than for loop for time complixity
# To ensure accurate integer division, use the // operator 
value = int(value * (value + 1) // 2)

print(value)
