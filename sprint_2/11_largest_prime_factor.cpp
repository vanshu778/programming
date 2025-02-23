//Write a program to find the largest prime factor of a given number.
#include <iostream>
using namespace std;

// Function to find the largest prime factor
long long largestPrimeFactor(long long n) {
    long long maxPrime = -1;

    // Remove all factors of 2
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    // Check odd factors from 3 to sqrt(n)
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    // If remaining n is a prime number > 2
    if (n > 2)
        maxPrime = n;

    return maxPrime;
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Largest Prime Factor: " << largestPrimeFactor(num) << endl;
    return 0;
}
