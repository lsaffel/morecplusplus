#include <iostream>
using namespace std;

int main()
{
    // reversing a number
    int number, reversedNumber = 0;
    cout << "Number: ";
    // cin >> number;

    number = 246810;

    cout << number << "  ";

    while (number !=0) {
        reversedNumber *= 10;

        // now take the last digit of the original number
        int lastDigit = number % 10;        // mod 10
        reversedNumber += lastDigit;

        // remove the last digit from the original number
        number /= 10;
    }

    cout << "Reversed number: " << reversedNumber;

}