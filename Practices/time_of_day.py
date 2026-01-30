#AL,  Period 2, Time of Day
time = int(input("What is the hour in military time?"))
if time > 1 and time < 11:
    print(f"Good morning!")
elif time > 12:
    print(f"Good afternoon!")
else: 
    print(f"Good evening!")