//Write a program to find the sum of the squares of the digits of a number.
#include <iostream>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;  
        sum += digit * digit;  
        num /= 10;  
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << sumOfSquares(number) << endl;

    return 0;
}
