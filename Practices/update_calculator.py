#AL, Simplified Financial Calculator
def percentage_income(type, cost, income):
   # calculating percentage income


   percentage = cost / income * 100
   return f"Your {type} is ${cost} and that is {percentage}%"


def main():
   monthly_income = float(input("how much money do you earn monthly? "))
   rent = float(input("what is your rent? "))
   utilities = float(input("what is your monthly utilities? "))
   groceries = float(input("what is your monthly groceries? "))
   transportation = float(input("what is your montly transportation? "))
   total = monthly_income - (rent + utilities + groceries + transportation + (monthly_income * 0.1))


   print(percentage_income("rent", rent, monthly_income))
   print(percentage_income("utilities", utilities, monthly_income))
   print(percentage_income("groceries", groceries, monthly_income))
   print(percentage_income("transportation", transportation, monthly_income))
   print(f"You should save ${monthly_income * 0.1} and that is 10% of your income.")
   print(f"You have ${total} of spending money each month! \n")


main()