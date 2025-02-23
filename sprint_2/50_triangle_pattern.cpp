//Write a program to create a triangle pattern of stars with a specified height.

// *  
// **  
// ***  
// ****  

#include <iostream>
using namespace std;

void printTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter height: ";
    cin >> height;

    printTriangle(height);

    return 0;
}
