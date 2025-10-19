#include <iostream>
#include <cassert>
#include <string>
#include "../../src/question_1/question_1.h"

using namespace std;

int main()
{
    cout << "Running Fibonacci sequence tests..." << endl;

    // Test 1
    assert(get_fib_sequence(5) == "0 1 1 2 3 5");
    cout << "Test 1 passed." << endl;

    // Test 2  <-- corrected expected value includes F7 which is 13
    assert(get_fib_sequence(7) == "0 1 1 2 3 5 8 13");
    cout << "Test 2 passed." << endl;

    // Test 3
    assert(get_fib_sequence(10) == "0 1 1 2 3 5 8 13 21 34 55");
    cout << "Test 3 passed." << endl;

    // Test 4
    assert(get_fib_sequence(12) == "0 1 1 2 3 5 8 13 21 34 55 89 144");
    cout << "Test 4 passed." << endl;

    cout << "All Fibonacci tests passed successfully!" << endl;

    return 0;
}


