#!/usr/bin/python3

user_input = input("")
reversing = user_input[::-1]
reversing = reversing.lstrip('0')

if user_input == reversing:
    print(user_input)
    print("YES")
else:
    print(reversing)
    print("NO")