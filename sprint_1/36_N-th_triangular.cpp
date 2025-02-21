//Write a program to find the N-th triangular number.

#include <iostream>
using namespace std;

int triangularNumber(int N) {
    return (N * (N + 1)) / 2;  
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << triangularNumber(N) << endl;

    return 0;
}
