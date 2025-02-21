//Write a program to generate a pyramid of numbers
// 1  
// 12  
// 123  
// 1234  

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j <= i; j++) { 
            cout << j+1;
        }
        cout << endl;
    }
    
    return 0;
}
