#!/usr/bin/python3

user_input = int(input(""))

sure = 0

if ((user_input % 2 == 0 and user_input != 2) or user_input == 1):
    print("NO")

else:
    for i in range(2, user_input):
        if (user_input % i == 0):
            print("NO")
            sure += 1
            break

    if (sure == 0):
        print("YES")