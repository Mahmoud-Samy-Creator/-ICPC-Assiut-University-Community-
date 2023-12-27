#!/usr/bin/python3

test_case = int(input(""))

even = 0
odd = 0
positive = 0
negative = 0

input = input("")
input_list = input.split(" ")
input_list = [int(x) for x in input_list]

for test in input_list:
    if test % 2 == 0:
        even += 1
    if test % 2 != 0:
        odd += 1
    if test > 0:
        positive += 1
    if test < 0:
        negative += 1

print(f"Even: {even}")
print(f"Odd: {odd}")
print(f"Positive: {positive}")
print(f"Negative: {negative}")

