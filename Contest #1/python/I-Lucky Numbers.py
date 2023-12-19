#!/usr/bin/python3

user_input = int(input(""))

digit_1 = user_input // 10
digit_2 = user_input % 10

if (digit_1 == 0 or digit_2 == 0):
    print("YES")

else:
    if digit_1 % digit_2 == 0 or digit_2 % digit_1 == 0:
        print("YES")
    else:
        print("NO")
