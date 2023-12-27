#!/usr/bin/python3

sum = 0

while(1):
    user_input = input("")

    user_input = user_input.split(" ")
    a = int(user_input[0])
    b = int(user_input[1])
    if a > 0 and b > 0:
        if a > b:
            a, b = b, a
        for i in range(a, b + 1):
            sum += i

        for i in range(a, b + 1):
            print(i, end= ' ')
        print(f"sum ={sum}")
        sum = 0
    else:
        break

