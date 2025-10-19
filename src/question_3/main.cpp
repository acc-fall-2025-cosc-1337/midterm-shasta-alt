#include <iostream>
#include "question3.h"
using namespace std;

int main()
{
    char choice;

    do
    {
        int num1, num2;

        cout << "Enter first number (1 - 200): ";
        cin >> num1;

        cout << "Enter second number (1 - 200): ";
        cin >> num2;

        while (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200)
        {
            cout << "Invalid input. Numbers must be between 1 and 200.\n";
            cout << "Enter first number (1 - 200): ";
            cin >> num1;
            cout << "Enter second number (1 - 200): ";
            cin >> num2;
        }

        int result = find_gcd(num1, num2);
        if (result == -1)
            cout << "No common factors found between " << num1 << " and " << num2 << "." << endl;
        else
            cout << "The GCD of " << num1 << " and " << num2 << " is " << result << "." << endl;

        cout << "Do you want to try again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program exited." << endl;
    return 0;
}
