//Write a program to generate a matrix filled with random numbers.
// 3 8 1  
// 7 4 6  

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

void generateMatrix(int rows, int cols) {
    srand(time(0)); // Seed random number generator

    int matrix[rows][cols]; // Declare matrix

    // Fill matrix with random numbers and print
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10; // Generates numbers from 0 to 9
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 2, cols = 3;
    generateMatrix(rows, cols);
    return 0;
}
