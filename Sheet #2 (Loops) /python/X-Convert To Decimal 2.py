#!/usr/bin/python3

test_cases = int(input(""))

for i in range(0, test_cases):
    user_input = int(input(""))
    binary_rep = bin(user_input)
    count_ones = str(binary_rep).count('1')
    new_binary_rep = '1' * count_ones

    new_num = int(new_binary_rep, 2)

    print(new_num)