//Write a program to generate a pattern where each row contains the first few prime numbers.
// 2  
// 2 3  
// 2 3 5  


#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to generate and print the prime number pattern
void primePattern(int rows) {
    int num = 2; 

    for (int i = 1; i <= rows; i++) {
        int count = 0, currentNum = num;
        
        while (count < i) {  
            if (isPrime(currentNum)) {
                cout << currentNum << " ";
                count++;
            }
            currentNum++; 
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    primePattern(rows);
    return 0;
}
