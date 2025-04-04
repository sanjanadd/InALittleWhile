#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time(0)
#include <string> 

using namespace std;

int main() {
    // Part 1: guessing the random number
    srand(time(0));
    int randomNumber = rand() % 10 + 1;
    int userGuess = 0;

    // Using a do-while loop for guessing the number
    cout << "Guess the number (between 1 and 10): ";
    do {
        cin >> userGuess;
        if (userGuess < randomNumber) {
            cout << "Too low. Try again: ";
        } else if (userGuess > randomNumber) {
            cout << "Too high. Try again: ";
        } else {
            cout << "Correct! The number was " << randomNumber << "." << endl;
        }
    } while (userGuess != randomNumber);

    // Part 2: Secret Password
    string secretPassword = "akmbrdsd"; 
    string enteredPassword;

    // Using a while loop for password verification
    cout << "\nEnter the secret password: ";
    while (enteredPassword != secretPassword) {
        cin >> enteredPassword;
        if (enteredPassword != secretPassword) {
            cout << "Incorrect. Try again: ";
        }
    }

    cout << "Access Granted!" << endl;

    return 0;
}