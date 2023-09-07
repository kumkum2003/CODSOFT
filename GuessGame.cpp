#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    int guess;
    int maxTrials;
    int numAttempts = 0;
    int max;
    char playAgain;
    int ub=max;
    int lb=1;

    srand(time(0));
    int num = 1+ (rand() % 200 );

    cout << "Welcome to the Guessing Game!" << endl;

    do {
        cout << "Choose a difficulty level:" << endl;
        cout << "1. Easy (10 trials)" << endl;
        cout << "2. Medium (7 trials)" << endl;
        cout << "3. Hard (5 trials)" << endl;
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                maxTrials = 10;
                break;
            case 2:
                maxTrials = 7;
                break;
            case 3:
                maxTrials = 5;
                break;
            default:
                cout << "Invalid choice. Defaulting to medium difficulty." << endl;
                maxTrials = 7;
                break;
        }

        cout << "According to the difficulty level you chose:" << endl;
        cout << "You have " << maxTrials << " trials to guess the number." << endl;

        while (numAttempts < maxTrials) {
            cout << "Guess a number from 1 to 200: ";
            cin >> guess;
            numAttempts++;

            if (guess < 1 || guess > 200) {
                cout << "Invalid guess. Please choose a number between 1 and 200" << endl;
                continue;
            }

            if (guess < num) {
                cout << "Too low. ";
            } else if (guess > num) {
                cout << "Too high. ";
            } else {
                cout << "Congratulations! You guessed the number " << num << " in " << numAttempts << " attempts!" << endl;
                break;
            }

            cout << "Attempts left: " << maxTrials - numAttempts << endl;
        }

        if (numAttempts >=maxTrials) {
            cout << "Out of attempts. The correct number was " << num << "." << endl;
        }

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
        if (playAgain == 'Y' || playAgain == 'y') {
            num = rand() % 200 + 1;
            numAttempts = 0;
        }

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for playing!" << endl;

    return 0;
}

