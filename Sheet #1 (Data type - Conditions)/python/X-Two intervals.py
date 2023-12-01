#!/usr/bin/python3
"""
Given the boundaries of 2 intervals.
Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are
the starting number and the ending number.

Input
Only one line contains two intervals [l1,r1],[l2,r2]
    where (1≤l1,l2,r1,r2≤109), (l1≤r1,l2≤r2).

It's guaranteed that l1≤r1
and l2≤r2
.

Output
If there is an intersection between these 2 intervals print its boundaries , otherwise print -1. 
"""
user_input = input("")
user_input = user_input.split()
user_input = [int(x) for x in user_input]
l1 = user_input[0]
r1 = user_input[1]
l2 = user_input[2]
r2 = user_input[3]


# [l1 - r1] inside [l2 - r2]
if l1 >= l2 and l1 <= r2 and r1 <= r2 and r1 >= l2:
    print(f"{l1} {r1}")

# [l2 - r2] inside [l1 - r1]
elif l2 >= l1 and l2 <= r1 and r2 <= r1 and r2 >= l1:
    print(f"{l2} {r2}")

# Intersection between the two intervals
elif l1 >= l2 and l1 <= r2 and r1 >= r2 and r1 >= l2:
    print(f"{l1} {r2}")

elif l2 >= l1 and l2 <= r1 and r2 >= r1 and r2 >= l1:
    print(f"{l2} {r1}")

else:
    print(-1)
