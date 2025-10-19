#include <iostream>
#include <cassert>
#include <vector>
#include "../../src/question_2/question_2.h"

using namespace std;

string vec_to_string(const vector<int>& v)
{
    string s;
    for (size_t i = 0; i < v.size(); ++i)
    {
        s += to_string(v[i]);
        if (i < v.size() - 1)
            s += " ";
    }
    return s;
}

int main()
{
    cout << "Running prime number tests..." << endl;

    assert(vec_to_string(get_primes(10)) == "2 3 5 7");
    cout << "Test 1 passed." << endl;

    assert(vec_to_string(get_primes(15)) == "2 3 5 7 11 13");
    cout << "Test 2 passed." << endl;

    assert(vec_to_string(get_primes(30)) == "2 3 5 7 11 13 17 19 23 29");
    cout << "Test 3 passed." << endl;

    assert(vec_to_string(get_primes(50)) == "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47");
    cout << "Test 4 passed." << endl;

    cout << "All prime number tests passed successfully!" << endl;
    return 0;
}

