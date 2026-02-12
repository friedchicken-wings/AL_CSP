#Al, #CM, Hangman 3
import random
words = ["Chicken", "Maruchan", "Noodles", "Tacos", "Dumplings", "Pasta", "Hamburgers", "Steak", "Lasagna", "Fries"]
word = random.choice(words)
wrong = 0
curr = ["_ _ _ _ _ _ _"] 
guess = input("Give me a letter.")
if guess not in word:
    wrong = + 1
    print("Oops! You got it wrong. Try again")

if guess in word:
        print("Correct!")

while True:
    for letter in word:
        if letter in word:
         display += letter
    else:
        display += "_"
        break
