//Write a program to calculate the sum of the first N prime numbers.
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to calculate the sum of the first N prime numbers
int sumFirstNPrimes(int N) {
    int count = 0, num = 2, sum = 0;
    
    while (count < N) {
        if (isPrime(num)) {
            sum += num;
            count++;
        }
        num++;
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter the number of prime numbers: ";
    cin >> N;

    cout << "Sum of the first " << N << " prime numbers: " << sumFirstNPrimes(N) << endl;
    return 0;
}
