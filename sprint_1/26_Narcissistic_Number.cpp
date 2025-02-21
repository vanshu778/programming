//Write a program to check if a number is a narcissistic number (where the sum of its digits raised to the power of the number of digits equals the number itself).

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    int originalN = n;
    int digits = to_string(n).size();
    
    while (n > 0) {
        int digit = n % 10;

        // Compute digit^digits
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        n /= 10;
    }
    
    if (sum == originalN) {
        cout << "Narcissistic Number";
    } else {
        cout << "Not a Narcissistic Number";
    }
    
    return 0;
}