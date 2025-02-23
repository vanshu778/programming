// Write a program to find the sum of the digits of the product of two given numbers.

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }
    return sum;
}

int main() {
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    int product = number1 * number2;
    int result = sumOfDigits(product);

    cout << "Sum of digits of the product: " << result << endl;
    return 0;
}
