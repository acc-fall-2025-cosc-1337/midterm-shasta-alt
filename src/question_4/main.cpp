#include <iostream>
#include "question3.h"
using namespace std;

int main() {
    int num1, num2;
    char choice;

    do {
        cout << "Enter two numbers (1-200): ";
        cin >> num1 >> num2;

        if (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) {
            cout << "Numbers out of range. Try again.\n";
            continue;
        }

        int result = find_gcd(num1, num2);
        cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}

