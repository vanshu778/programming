// Write a program to generate the Fibonacci series up to a given number.

#include <iostream>
using namespace std;

int main()
{
    int limit;
    cout << " Enter the limit ";
    cin >> limit;

    int a = 0, b = 1, nextTerm;

    cout << "Fibonacci Series: " << a << " " << b << " ";

    for (int i = 3; i <= limit; i++)
    {
        nextTerm = a + b;
        cout << nextTerm << " ";
        a = b;
        b = nextTerm;
    }

    return 0;
}