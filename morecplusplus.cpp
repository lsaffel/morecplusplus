#include <iostream>
using namespace std;

int main()
{
    // Count digits of a number
    int number;
    cout << "Number: ";
    // cin >> number;

    number = -24689;     // put the number here manually to test this  
                        // program, since cin doesn't work here in VS Code

    if (number == 0)
        cout << "You have entered 0.\n";
    else {
        if (number < 0)
            number = -1 * number;   // now able to count digits 
                    // for negative numbers
        int digitsCounter = 0;
        while (number > 0) {
            // number = number / 10;   // number is an integer so result is also an integer
            number /= 10;   // shorter way to write the same thing
            digitsCounter++;
        }
        cout << "Number contains " << digitsCounter << " digits\n";
    }
}