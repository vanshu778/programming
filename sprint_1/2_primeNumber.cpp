//Write a program to determine if a number is prime.
#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;  
    for (int i = 2; i < number; i++) { 
        if (number % i == 0) return false;
    }
    return true; 
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
