admin = "Ms. LaRose"
def hello():
    print(f"Hello {admin}")
    admin = "Mrs. Derbidge"
def hello_user(name):
    print(f"Hello {name}")

def area(length, width):
    return length * width

side_one = 12
side_two = 8

print(f"The area of a rectangle with side of {side_one} and {side_two} is {area(side_one, side_two)}")
print(f"the area of a rectangle with side of 4 and 3 is {area(4, 3)}")
hello()
hello_user("Katie")
hello_user("Treyson")
hello_user(input("Tell me a name: "))


def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x
    return total

print(f"The factorial of 5 is {factorial(5)}") 
print(f"The factorial of 3 is {factorial(3)}") 
print(f"The factorial of 10 is {factorial(10)}") 