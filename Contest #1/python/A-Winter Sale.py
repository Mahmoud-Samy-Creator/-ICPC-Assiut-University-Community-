#!/usr/bin/python3

user_input = input("")
sale_data = user_input.split(" ")

price_after_discout = float(sale_data[1])
discout_percentaage = float(sale_data[0]) / 100

price_before_precentage = price_after_discout / (1 - discout_percentaage)

print(f"{price_before_precentage:.2f}")
