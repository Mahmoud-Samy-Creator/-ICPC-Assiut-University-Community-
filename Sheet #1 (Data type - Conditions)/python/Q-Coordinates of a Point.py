#!/usr/bin/python3
"""
Given two numbers X, Y:
which donate coordinates of a point in 2D plan.
Determine in which quarter does it belong. 
"""
'''
=> Print Q1, Q2, Q3, Q4 according to the quarter
    in which the point belongs to.
=> Print "Origem" If the point is at the origin.
=> Print "Eixo X" If the point is over X axis.
=> Print "Eixo Y" if the point is over Y axis. 
'''

user_input = input("")

values = user_input.split()

x = float(values[0])
y = float(values[1])

if x == 0 and y == 0:
    print("Origem")

if x == 0 and y != 0:
    print("Eixo Y")

if y == 0 and x != 0:
    print("Eixo X")

if x > 0 and y > 0:
    print("Q1")

if x > 0 and y < 0:
    print("Q4")

if x < 0 and y > 0:
    print("Q2")

if x < 0 and y < 0:
    print("Q3")

