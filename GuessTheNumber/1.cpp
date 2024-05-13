/*========================================================================================================
Write a program that generates a random number and asks the user to guess what the number is.
If the user's guess is higher than the random number, the program should display "Too high, try again."
If the user's guess is lower than the random number, the program should display "Too low, try again."
The program should use a loop that repeats until the user correctly guesses the random number.
========================================================================================================*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int min = 1;
    int max = 100; // You can adjust the range as needed
    int randomNumber = rand() % (max - min + 1) + min;

    cout << "Welcome to the Guess the Number game!";
    cout << "I have selected a random number between " << min << " and " << max << ".";
    cout << "Try to guess the number!";

    int userGuess;
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Too low, try again.";
        } else if (userGuess > randomNumber) {
            cout << "Too high, try again.";
        }
    } while (userGuess != randomNumber);

    cout << "Congratulations! You guessed the correct number: " << randomNumber;
    return 0;
}
