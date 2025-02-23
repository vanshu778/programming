//Write a program to generate a matrix where the elements alternate between 0 and 1.
#include <iostream>
using namespace std;

void generateMatrix(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << ((i + j) % 2) << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    generateMatrix(size);
    return 0;
}
