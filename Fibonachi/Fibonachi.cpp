#include <iostream>
using namespace std;

unsigned long long fibonacci(unsigned int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    unsigned long long a = 0;
    unsigned long long b = 1;

    for (unsigned int i = 2; i <= n; ++i)
    {
        unsigned long long next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main()
{
    unsigned int n;

    cout << "Enter Fibonacci number index: ";
    cin >> n;

    cout << "F(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}