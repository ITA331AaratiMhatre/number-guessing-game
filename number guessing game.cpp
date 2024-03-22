#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  // Generate a random number between 1 and 100
  srand(time(NULL));
  int secretNumber = rand() % 100 + 1;

  // Prompt the user to guess the number
  cout << "Guess a number between 1 and 100: ";
  int guess;
  cin >> guess;

  // Keep looping until the user guesses the correct number
  while (guess != secretNumber) {
    // Give the user a hint
    if (guess > secretNumber) {
      cout << "Too high. Try again." << endl;
    } else {
      cout << "Too low. Try again." << endl;
    }

    // Prompt the user to guess again
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
  }

  // Congratulate the user for guessing the correct number
  cout << "Congratulations! You guessed the correct number." << endl;

  return 0;
}