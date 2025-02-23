//Write a program to generate a matrix where each element is a Fibonacci number.
#include <iostream>
#include <vector>
using namespace std;

// Function to generate Fibonacci numbers
vector<int> generateFibonacci(int n) {
    vector<int> fib(n);
    fib[0] = 1, fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}

// Function to fill the matrix with Fibonacci numbers
void generateFibonacciMatrix(int size) {
    int total = size * size;
    vector<int> fib = generateFibonacci(total);
    
    int index = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << fib[index++] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    generateFibonacciMatrix(size);
    return 0;
}
