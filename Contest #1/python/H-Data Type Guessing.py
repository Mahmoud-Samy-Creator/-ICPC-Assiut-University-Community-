#!/usr/bin/python3

user_input = input("")
user_input = user_input.split(" ")
user_input = [int(x) for x in user_input]

n = user_input[0]
k = user_input[1]
a = user_input[2]

result_in_float = (n * k) / a
result_in_int = int(result_in_float)

if result_in_float - result_in_int == 0:
    if result_in_int <= 2147483647:
        print("int")
    else:
        print("long long")

else:
    print("double")