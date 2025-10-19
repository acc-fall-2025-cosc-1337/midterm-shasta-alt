#include "question_4.h"

string get_factorial_sequence(int num)
{
    if (num < 1)
        return "Invalid";

    long long result = 1;
    string expression = "";

    for (int i = 1; i <= num; ++i)
    {
        result *= i;
        expression += to_string(i);
        if (i < num)
            expression += "x";
    }

    expression += "=" + to_string(result);
    return expression;
}
