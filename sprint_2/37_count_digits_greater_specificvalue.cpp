//Write a program to count how many digits in a number are greater than a specific value.

#include <iostream>
using namespace std;

int countGreaterDigits(int number, int value) {
    int count = 0;

    while (number > 0) {
        int digit = number % 10;  
        if (digit > value) {
            count++;  
        }
        number /= 10;  
    }

    return count;
}

int main() {
    int number, value;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter value: ";
    cin >> value;

    cout << "Count of digits greater than " << value << ": " << countGreaterDigits(number, value) << endl;
    return 0;
}
