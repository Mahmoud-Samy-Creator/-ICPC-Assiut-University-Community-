#!/usr/bin/python3

# Taking inputs from user
user_input = input("")
user_input = user_input.split(" ")
user_input = [int(x) for x in user_input]

# Unpacking inputs
comp = 0
eyes = user_input[0]
mouths = user_input[1]
bodies = user_input[2]

# Wild cases
if eyes == 0 or bodies == 0:
    print(0)

elif eyes == 1:
    print(1)

elif bodies == 1:
    print(1)

elif bodies >= eyes and mouths >= eyes:
    print(eyes)

elif eyes >= bodies and mouths >= bodies:
    print(bodies)

# Normal cases
else:
    # 1 eye, 1 body, 1 mouth
    if bodies >= mouths and eyes >= mouths:
        comp += mouths
        eyes -= mouths
        bodies -= mouths
        mouths = 0

    if mouths >= bodies and eyes >= bodies:
        temp = bodies
        comp += int(bodies)
        eyes -= bodies
        bodies -= temp
        mouths -= temp
        temp = 0

    if mouths >= eyes and bodies >= eyes:
        comp += int(eyes)
        eyes -= comp
        bodies -= comp
        mouths -= comp

    # 2 eyes, 1 body
    if eyes >= bodies * 2:
        comp += int(bodies)
        eyes -= bodies * 2
        bodies = 0

    # 2 eyes, 1 body
    if bodies >= eyes // 2:
        comp += int(eyes // 2)
        bodies -= eyes // 2
        eyes -= eyes // 2

    print(comp)
