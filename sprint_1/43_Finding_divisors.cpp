//Write a program to find all divisors of a given number.

#include <iostream>
using namespace std;

void findDivisors(int n) {
    cout << "Divisors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i;
            if (i != n) cout << ", "; 
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    findDivisors(number);
    return 0;
}
