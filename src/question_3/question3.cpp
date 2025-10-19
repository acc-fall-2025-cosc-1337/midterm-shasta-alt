#include "question3.h"

int find_gcd(int num1, int num2)
{
    if (num1 <= 0 || num2 <= 0)
        return -1;  // invalid inputs

    int gcd = 1;
    int smaller = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= smaller; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    if (gcd == 1 && num1 != num2)
        return -1; // no common divisor except 1
    return gcd;
}
