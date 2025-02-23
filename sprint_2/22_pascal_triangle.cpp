//Write a program to generate Pascal’s Triangle up to N rows.

#include <iostream>
using namespace std;

void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        int num = 1; 
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1); 
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    printPascalsTriangle(rows);

    return 0;
}
