//Write a program to determine if a number is a perfect number.
#include <iostream>
using namespace std;

bool isPerfectNumber(int num) {
    if (num <= 1) return false; 

    int sum = 0;
    for (int i = 1; i <= num / 2; i++) { 
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectNumber(number)) {
        cout << "Perfect Number" << endl;
    } else {
        cout << "Not a Perfect Number" << endl;
    }

    return 0;
}
