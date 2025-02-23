//Write a program to generate a square matrix where each element is a random value.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 

using namespace std;

void generateMatrix(int size) {
    vector<vector<int>> matrix(size, vector<int>(size));

    // Seed the random number generator
    srand(time(0));

    // Fill the matrix with random values between 1 and 9
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 9 + 1;  // Random number between 1 and 9
        }
    }

    // Display the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    generateMatrix(size);

    return 0;
}
