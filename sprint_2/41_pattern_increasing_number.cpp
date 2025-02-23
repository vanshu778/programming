//Write a program to create a pattern where numbers increase with each row.
// 1  
// 12  
// 123  

#include <iostream>
using namespace std;

void generatePattern(int rows) {
    for (int i = 1; i <= rows; i++) {  
        for (int j = 1; j <= i; j++) { 
            cout << j;
        }
        cout << endl; 
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    generatePattern(rows);
    
    return 0;
}
