#include "question_1.h"
#include <sstream>

// Returns Fibonacci sequence up to n terms
// Example get_fib_sequence(5) -> "0 1 1 2 3 5"
std::string get_fib_sequence(int n)
{
    if (n < 0) return "";
    long long a = 0, b = 1;
    std::ostringstream oss;
    oss << a;
    for (int i = 1; i <= n; ++i)
    {
        oss << " " << b;
        long long next = a + b;
        a = b;
        b = next;
    }
    return oss.str();
}
