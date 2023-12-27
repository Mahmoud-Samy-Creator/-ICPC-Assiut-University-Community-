#!/usr/bin/python3

symbol = input("")
tests = int(input(""))
test_list = input("")
test_list = test_list.split(" ")
test_list = [int(x) for x in test_list]

for i in range(0, tests):
    print(symbol * test_list[i])
