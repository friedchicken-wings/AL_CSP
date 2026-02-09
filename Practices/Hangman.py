#Al, #CM, Hangman 3
import random
words = ["Chicken", "Maruchan", "Noodles", "Tacos", "Dumplings", "Pasta", "Hamburgers", "Steak", "Lasagna", "Fries"]
print(f"{print}")
def wrong_guess_length(guess_word):
    if(len(guess_word) < 5):
        print("Not enough CHaracters.")
    else:
        print("Too many characters.")
    print("Try a guess with 5 letters.")

