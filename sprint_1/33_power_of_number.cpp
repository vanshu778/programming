// Write a program to calculate the power of a number.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    cout<< pow(base, exponent) << endl;
    return 0;
}
