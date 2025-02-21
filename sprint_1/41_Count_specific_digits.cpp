//Write a program to count the occurrences of a specific digit in a number.

#include <iostream>
using namespace std;

int countDigitOccurrences(int number, int digit) {
    int count = 0;
    while (number > 0) {
        if (number % 10 == digit)  
            count++;
        number /= 10;  
    }
    return count;
}

int main() {
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to count: ";
    cin >> digit;

    cout <<  countDigitOccurrences(number, digit) << endl;
    return 0;
}
