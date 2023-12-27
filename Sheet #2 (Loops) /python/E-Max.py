#!/usr/bin/python3

test_cases = int(input(""))

user_input = input("")
user_input = user_input.split(" ")
user_input = [int(x) for x in user_input]

print(max(user_input))