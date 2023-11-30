#!/usr/bin/python3
"""
Given a Number N corresponding to a person's age (in days).
Print his age in years, months and days,
followed by its respective message
=> "years", "months", "days".
"""

age_in_days = int(input(""))

years = int(age_in_days / 365)

months = int((age_in_days - years * 365) / 30)

days = int(age_in_days - years * 365 - months * 30)

print(f"{years} years")
print(f"{months} months")
print(f"{days} days")
