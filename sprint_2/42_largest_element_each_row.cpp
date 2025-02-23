//Write a program to find the largest element in each row of a matrix.

#include <iostream>
#include <vector>
#include <algorithm>  // For max_element
using namespace std;

void findLargestInRows(vector<vector<int>> &matrix) {
    for (auto &row : matrix) {
        cout << *max_element(row.begin(), row.end()) << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Largest elements in each row: ";
    findLargestInRows(matrix);
    
    return 0;
}
