// Write a recursive program to generate the Fibonacci sequence up to a given number.
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Enter the number of terms: ";
    cin >> number;

    cout << "Fibonacci Sequence: ";
    for (int i = 0; i < number; i++) {
        cout << fibonacci(i);

    }
    cout << endl;
    return 0;
}
