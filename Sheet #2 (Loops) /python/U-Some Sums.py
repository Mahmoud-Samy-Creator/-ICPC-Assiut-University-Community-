#!/usr/bin/python3

user_input = input("")
user_input = user_input.split(" ")
user_input = [int(x) for x in user_input]
sum = 0
sum2 = 0

N = user_input[0]
a = user_input[1]
b = user_input[2]

if a > b:
    a, b = b, a

for i in range(1, N + 1):
    number = str(i)
    for j in number:
        sum2 += int(j)
    if sum2 >= a and sum2 <= b:
        sum += i
    sum2 = 0

print(sum)