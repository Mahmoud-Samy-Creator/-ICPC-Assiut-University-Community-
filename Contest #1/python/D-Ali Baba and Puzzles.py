#!/usr/bin/python3

user_input = input("")
user_input = user_input.split(" ")
user_input = [int(x) for x in user_input]

a = user_input[0]
b = user_input[1]
c = user_input[2]
d = user_input[3]

# expressions

cond1 = (a + b - c == d)
cond2 = (a + b * c == d)
cond3 = (a - b + c == d)
cond4 = (a - b * c == d)
cond5 = (a * b + c == d)
cond6 = (a * b - c == d)

if cond1 or cond2 or cond3 or cond4 or cond5 or cond6:
    print("YES")
else:
    print("NO")
