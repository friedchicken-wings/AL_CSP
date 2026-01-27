#AL, Financial Calculator py

monthly_income = float(input("how much money do you earn monthly? "))
rent = float(input("what is your rent? "))
utilities = float(input("what is your monthly utilities? "))
groceries = float(input("what is your monthly groceries? "))
transportation = float(input("what is your montly transportation? "))

total = monthly_income - (rent + utilities + groceries + transportation + (monthly_income * 0.1))

print(f" Your rent is ${rent} and that is {(rent // monthly_income) * 100}%")
print(f" Your utilities are $ {utilities} and that is {(utilities // monthly_income) * 100}% of your income. ")
print(f" Your groceries are $ {groceries} and that is {(groceries // monthly_income) * 100}% of your income. ")
print(f" Your transportation are $ {transportation} and that is {(transportation / monthly_income) * 100}% of your income. ")
print(f" You should save ${monthly_income * 0.1} and that is 10% of your income.")
print(f" You have ${total} of spending money each month! \n")
