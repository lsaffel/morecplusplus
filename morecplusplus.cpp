#include <iostream>
using namespace std;

int main()
{
    // guess the forgotten pin. pinGuess represents the pin the user guesses.
    int usersPin = 1234, pinGuess, errorCounter = 0;

    do {
        cout << "PIN: ";
        cin >> pinGuess;
        if (pinGuess != usersPin)
            errorCounter++;
    } while (errorCounter < 3 && pinGuess != usersPin);

    if (errorCounter < 3)
        cout << "You entered your PIN correctly. Loading...";
    else
        cout << "Too many attempts. Your account is locked";

}