# Guessing Game

This C++ program implements a simple guessing game where the user tries to guess a random number within a specified range. The user starts with a certain number of points, and points are deducted for each incorrect guess. The game continues until the user correctly guesses the number or runs out of points.

## Game Mechanics

- The user specifies a lower bound (`lowNumber`) and an upper bound (`highNumber`) for the guessing range.
- The user starts with a certain number of points (`startingPoints`), and points are deducted for each incorrect guess (`pointsDeduction`).
- A random number is generated between `lowNumber` and `highNumber`, inclusive.
- The user is prompted to guess the randomly generated number.
- If the guess is incorrect, points are deducted, and the user is informed whether the guess was too high or too low.
- The game continues until the user correctly guesses the number or runs out of points.
- After each round, the user's score, the number of incorrect guesses, and bonus points earned are displayed.
- Bonus points are calculated based on the number of guesses taken by the player.
- The user is given the option to play again or exit the game.

## Implementation Details

- The program utilizes a `while` loop to allow the user to play multiple rounds of the game.
- Input validation ensures that the user enters a valid guess within the specified range.
- The `rand()` function is used to generate a random number for the user to guess.
- The game keeps track of the number of incorrect guesses and deducts points accordingly.
- Bonus points are calculated based on the number of guesses taken by the player.
- The game terminates if the user chooses not to play again or if the user runs out of points.

## Main Function

- The `main()` function serves as the entry point of the program.
- It initializes variables and prompts the user to start the game.
- The game loop continues until the user decides to exit or runs out of points.

Feel free to explore and modify the code to enhance the game experience.
