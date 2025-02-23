//Write a program to calculate the sum of the diagonal elements in a square matrix.

#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Summing diagonal elements
    }
    
    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Sum of diagonal elements: " << diagonalSum(matrix) << endl;
    return 0;
}
