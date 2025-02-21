//Write a program to keep summing the digits of a number until a single digit is obtained.

#include <iostream>
using namespace std;

int sumOfDigitsUntilSingle(int num) {
    while (num >= 10) {  
        int sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10;    
        }
        num = sum;  
    }
    return num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << sumOfDigitsUntilSingle(number) << endl;
    return 0;
}
