#!/usr/bin/python3
'''
Given two person names.
Each person has {"the first name" + "the second name"}
Determine whether they are brothers or not.
Note: The two persons are brothers if they share the same second name.
'''
person_1 = input("")
person_2 = input("")

person_1_1st_2nd_names = person_1.split()
person_2_1st_2nd_names = person_2.split()

if person_1_1st_2nd_names[1] == person_2_1st_2nd_names[1]:
    print("ARE Brothers")
else:
    print("NOT")
