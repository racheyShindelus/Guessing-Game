#include <iostream>
#include <ctime>

using namespace std;

int main() {
  int lowNumber = 1;        //sets lower bound for guessing range
  int highNumber = 100;     //sets higher bound for guessing range
  int startingPoints = 50;        //# of points to start game with
  int points = startingPoints;
  int pointsDeduction = 7;    //points decucted from score if guess is wrong
  int numberOfIncorrectGuesses = 0;   //total # of inccorect guesses
  int randomNumberGenerated;        //random # to be guessed
  int userGuess;                // the users input guess
  char playAgain = 'Y';    //Would the user like to play (1st will always be Y)

 cout << "CS235 Homework #1: Guessing Game\n";

// Have the game continue as long as user wants and have a score > 0
while ((playAgain == 'Y' && points > 0)|| (playAgain == 'y' && points > 0))
{
  int bonusPoints = 0;            // bonus points to calculate final score
  points = points + bonusPoints;  //points to start round +bonus
  int numberOfGuesses = 0;        //# of guesses per round

// Opening Prompt
  cout << "\n...\nLet's play..." << endl;
  cout << "You're starting score is " << points << " points" << endl;
  cout << endl << "I'm thinking of a number between " << lowNumber;
  cout << " and " << highNumber << "." << endl;
  cout << "Can you guess it? \t";


  // Generate a Random Number
  srand(time(nullptr));
 randomNumberGenerated = (rand() % highNumber) + 1;

  // print out randomNumberGenerated just to check
  // cout << "\n\nRandom Number Generated: " << randomNumberGenerated << endl << endl;
 
 while (points > 0)
 {
   // User Input
  cin >> userGuess;
  cout << endl;
  numberOfGuesses++;
  // Make sure userGuess is within valid range
  if(userGuess >= lowNumber && userGuess <= highNumber)
  {
  // Guess is too high
 if (randomNumberGenerated < userGuess)
 {
   cout << "I'm sorry... You're guess was too HIGH. (-" << pointsDeduction;
   cout << "points)" << endl;
   points = points - pointsDeduction;
   numberOfIncorrectGuesses++;
 }
 // Guess is too low
 else if(randomNumberGenerated > userGuess)
 {
   cout << "I'm sorry... You're guess was too LOW. (-" << pointsDeduction;
   cout << "points)" << endl;
   points = points - pointsDeduction;
   numberOfIncorrectGuesses++;
 }
 // Correct Guess
else
{
  cout << "CONGRATULATIONS!!!  You guessed correctly!" << endl;
  break;
}
cout << "Points Remaining : " << points << endl;
// Game continues as long as points are greater than zero
if (points > 0)
{
cout << "Take another guess: ";
}
// If points run out, game is over. 
else
{
  cout << endl;
  cout << "I'm sorry... You ran out of points. " << endl;
  cout << "The correct answer was:  " << randomNumberGenerated << endl;
  cout << "Game Over..." << endl;
  break;
}
}
// Incase the userGuess is out of range
else if(userGuess < lowNumber || userGuess > highNumber)
{
  cout << "You entered an invalid number. " << endl;
  cout << "Please enter one within the range of " << lowNumber;
  cout << " and " << highNumber << endl;
  cout << "New Guess:  ";
  numberOfGuesses++;    //restore the number of user guesses for this round
}
else
{
  cout << "Error";
  break;
}
}

// Calculate bonusPoints: "50 – (the number of guesses the player took so far)"
if(points > 0)
bonusPoints = startingPoints - numberOfGuesses;
else
bonusPoints = 0;

// Print out player stats
cout << endl;
cout << " Score |# of Incorrect Guesses|Bonus Points Earned" << endl;
cout << "_______|______________________|___________________" << endl;
cout << "  " << points << "   |\t\t   " << numberOfIncorrectGuesses; 
cout << "\t\t  ";
cout << "|\t\t   " << bonusPoints << endl;
cout << endl;

// Print out Ending score
if(points > 0)
{
  cout << "Winning Score:  " << points + bonusPoints << endl;
  // Play again or not
cout << endl;
cout << "Would you like to play again? (Y/N):  ";
cin >> playAgain;
}
else
cout << "Ending Score:  " << points << endl;

}
if (playAgain == 'n' || playAgain == 'N' || points <= 0)
{
cout << endl;
cout << "Great Game!" << endl;
cout << "...Shutting Down..." << endl;
cout << "Goodbye." << endl;
return 0;
}
}
