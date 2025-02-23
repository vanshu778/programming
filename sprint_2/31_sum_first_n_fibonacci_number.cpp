//Write a program to calculate the sum of the first N Fibonacci numbers.

#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to compute sum of first N Fibonacci numbers
int sumOfFibonacci(int N) {
    if (N <= 0) return 0;
    
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += fibonacci(i);
    }
    
    return sum;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Sum of first " << N << " Fibonacci numbers: " << sumOfFibonacci(N) << endl;
    
    return 0;
}
