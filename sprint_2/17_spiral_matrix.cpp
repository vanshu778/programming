//Write a program to generate a matrix filled with numbers in a spiral pattern.

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {
        // Move Right
        for (int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;

        // Move Down
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        // Move Left
        for (int i = right; i >= left; i--)
            matrix[bottom][i] = num++;
        bottom--;

        // Move Up
        for (int i = bottom; i >= top; i--)
            matrix[i][left] = num++;
        left++;
    }
    return matrix;
}

void printMatrix(vector<vector<int>>& matrix) {
    for (auto row : matrix) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    vector<vector<int>> result = generateSpiralMatrix(size);
    printMatrix(result);

    return 0;
}
