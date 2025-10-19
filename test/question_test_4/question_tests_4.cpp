#include <iostream>
#include <cassert>
#include "../../src/question_4/question_4.h"
using namespace std;

int main()
{
    cout << "Running factorial sequence tests..." << endl;

    assert(get_factorial_sequence(3) == "1x2x3=6");
    cout << "Test 1 passed." << endl;

    assert(get_factorial_sequence(4) == "1x2x3x4=24");
    cout << "Test 2 passed." << endl;

    assert(get_factorial_sequence(5) == "1x2x3x4x5=120");
    cout << "Test 3 passed." << endl;

    assert(get_factorial_sequence(6) == "1x2x3x4x5x6=720");
    cout << "Test 4 passed." << endl;

    cout << "All factorial sequence tests passed successfully!" << endl;
    return 0;
}

