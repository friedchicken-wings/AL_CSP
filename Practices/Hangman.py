#Al, #CM, Hangman 3
import random
words = ["Chicken", "Maruchan", "Noodles", "Tacos", "Dumplings", "Pasta", "Hamburgers", "Steak", "Lasagna", "Fries"]
word = random.choice(words)
wrong = 0

guess = input("Give me a letter.")
if guess not in word:
    wrong = + 1
    print("Oops! You got it wrong. Try again")

if guess in word:
    print("Correct!")

display = ""
for letter in word:
    if letter in word:
        display + letter
    else:
        +"_": display
    print("Chicken")
    break

"""def wrong_guess_length(guess_word):
    if(len(guess_word) < 5):
        print("Not enough CHaracters.")
    else:
        print("Too many characters.")
    print("Try a guess with 5 letters.")"""
