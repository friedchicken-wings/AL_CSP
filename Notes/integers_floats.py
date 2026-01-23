price = float(input("What is the cost of the item: $"))

tax_rate = float(input("What is the tax percent in your state: %"))

tax_rate_decimal = tax_rate/100

total = round(price*(1 + tax_rate_decimal))

print(total)

print(round)(price*(1 + tax_rate_decimal, 2))

apples = 50

friends = 16

print("Each of my friends can have", apples//friends,"and I will have", apples%friends, "left over." )