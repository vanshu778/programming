//Write a program to create a matrix where elements form diagonal lines of a given pattern.
// 1 0 0 0  
// 1 1 0 0  
// 1 1 1 0  
// 1 1 1 1  

#include <iostream>
using namespace std;

void generateDiagonalMatrix(int size) {
    int matrix[size][size];

    // Fill the matrix with diagonal pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j <= i) 
                matrix[i][j] = 1;  // Fill diagonals with 1
            else 
                matrix[i][j] = 0;  // Fill the rest with 0
        }
    }

    // Print the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the matrix size: ";
    cin >> size;

    generateDiagonalMatrix(size);

    return 0;
}
