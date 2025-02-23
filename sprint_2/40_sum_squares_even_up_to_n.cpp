// Write a program to calculate the sum of squares of all even numbers up to a given N.

#include <iostream>
using namespace std;

int sumOfSquaresEven(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i += 2) { 
        sum += (i * i);
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    cout << "Sum of squares of even numbers up to " << N << " is: " << sumOfSquaresEven(N) << endl;
    
    return 0;
}
