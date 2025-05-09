#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Initialize the random number generator
    srand(time(0));  
    int targetNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess the number between 1 and 100:" << endl;

    // Using a while loop to allow the user to keep guessing until correct
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        // Check if the guess is correct
        if (userGuess > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << targetNumber 
                 << " in " << attempts << " attempts." << endl;
            break;  // Exit the loop when the user guesses correctly
        }
    }

    return 0;
}
