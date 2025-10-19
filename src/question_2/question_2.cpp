#include "question_2.h"
#include <cmath>

bool is_prime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<int> get_primes(int num)
{
    vector<int> primes;
    for (int i = 2; i <= num; ++i)
    {
        if (is_prime(i))
        {
            primes.push_back(i);
        }
    }
    return primes;
}
