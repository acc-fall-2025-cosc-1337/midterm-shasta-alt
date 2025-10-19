#include <iostream>
#include "question_4.h"
using namespace std;

int main()
{
    char again = 'y';
    while (again == 'y' || again == 'Y')
    {
        int num;
        cout << "Enter a number (1–10): ";
        cin >> num;

        if (num < 1 || num > 10)
        {
            cout << "Invalid input. Try again.\n";
            continue;
        }

        string result = get_factorial_sequence(num);
        cout << "Factorial sequence: " << result << endl;

        cout << "Run again? (y/n): ";
        cin >> again;
    }
    return 0;
}
