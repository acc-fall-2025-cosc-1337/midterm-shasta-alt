#include <iostream>
#include "question_2.h"
using namespace std;

int main()
{
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        int num;
        cout << "Enter a number (1–60): ";
        cin >> num;

        if (num < 1 || num > 60)
        {
            cout << "Invalid input. Try again.\n";
            continue;
        }

        vector<int> primes = get_primes(num);
        cout << "Prime numbers up to " << num << ": ";
        for (int p : primes)
            cout << p << " ";
        cout << endl;

        cout << "Run again? (y/n): ";
        cin >> choice;
    }
    return 0;
}
