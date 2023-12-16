#!/usr/bin/python3

user_input = input("")

inputs = user_input.split(" ")

inputs = [int(x) for x in inputs]

if (inputs[0] % inputs[2] == 0 and inputs[1] % inputs[2] == 0):
    print("Both")

elif (inputs[0] % inputs[2] == 0):
    print("Memo")

elif (inputs[1] % inputs[2] == 0):
    print("Momo")

else:
    print("No One")
