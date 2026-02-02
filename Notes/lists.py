ages = [22,23,25,28,34,36,38,39]
names = ["Alex", "Kaite", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"]
print(names[4])
print(len(names))
print(names)
names[0] = "Eric"
names.append("Jayshree") #adds to the end of the list
index = names.index("Vienna")
names.pop(index) #removes item from the list: if no index given then the last item is removed
print(names)

for name in names: 
    print(f"Hello {name}")

for number in ages:
    print(f"{number} squared is {number**2}")

for i in range(20):
    print(f"It is the {i} iteration of this loop")