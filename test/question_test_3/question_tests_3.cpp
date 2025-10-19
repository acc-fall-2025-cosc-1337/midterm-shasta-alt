#include <iostream>
#include "question3.h"
using namespace std;

int main()
{
    cout << "Testing find_gcd(15, 25): " << find_gcd(15, 25) << " (Expected: 5)\n";
    cout << "Testing find_gcd(16, 32): " << find_gcd(16, 32) << " (Expected: 16)\n";
    cout << "Testing find_gcd(159, 309): " << find_gcd(159, 309) << " (Expected: 3)\n";
    cout << "Testing find_gcd(5, 7): " << find_gcd(5, 7) << " (Expected: -1)\n";

    return 0;
}

