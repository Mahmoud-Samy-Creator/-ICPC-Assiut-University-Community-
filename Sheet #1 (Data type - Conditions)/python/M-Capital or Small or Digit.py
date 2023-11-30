#!/usr/bin/python3
'''
Given a letter X.
Determine whether X is Digit or Alphabet and if it is Alphabet
determine if it is Capital Case or Small Case.
accoring to ascii code
'''


user_input = input("")

if user_input.isdigit():
    if int(user_input) in range(48, 58):
        print("IS DIGIT")
    if int(user_input) in range(65, 91):
        print("ALPHA\nIS CAPITAL")
    if int(user_input) in range(97, 123):
        print("ALPHA\nIS SMALL")
    if int(user_input) in range(0, 10):
        print("IS DIGIT")

elif user_input >= 'a' and user_input <= 'z':
    print("ALPHA\nIS SMALL")

elif user_input >= 'A' and user_input <= 'Z':
    print("ALPHA\nIS CAPITAL")



"""
    Small Letters (Lowercase):
        ASCII range: 97 to 122
        Characters: 'a' to 'z'

    Capital Letters (Uppercase):
        ASCII range: 65 to 90
        Characters: 'A' to 'Z'

    Numbers:
        ASCII range: 48 to 57
        Characters: '0' to '9'
"""