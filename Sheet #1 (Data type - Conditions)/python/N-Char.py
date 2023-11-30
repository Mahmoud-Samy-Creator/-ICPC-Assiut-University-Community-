#!/usr/bin/python3
'''
Given a letter X.
If the letter is lowercase:
    print the letter after converting it from lowercase letter to uppercase letter.
Otherwise:
    print the letter after converting it from uppercase letter to lowercase letter
'''

user_input = input("")

if user_input.isupper():
    print(user_input.lower())
else:
    print(user_input.upper())
