//Write a program to generate a matrix where each element at position (i, j) is the product of i and j.

#include <iostream>
using namespace std;

void generateMultiplicationMatrix(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << (i * j) << " ";  // Multiply row index with column index
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    generateMultiplicationMatrix(size);
    return 0;
}
