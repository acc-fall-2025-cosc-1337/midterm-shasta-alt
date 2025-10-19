#include <iostream>
#include <string>
#include "question_1/question_1.h"
using namespace std;

int main()
{
    int n;
    char choice;

    do
    {
        cout << "Enter a number between 1 and 15: ";
        cin >> n;

        if (n < 1 || n > 15)
        {
            cout << "Invalid input. Please enter a number between 1 and 15.\n";
            continue;
        }

        string result = get_fib_sequence(n);
        cout << "Fibonacci sequence: " << result << endl;

        cout << "Do you want to run again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended.\n";
    return 0;
}
