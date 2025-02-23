// Write a program to extract and sum all numbers present in a given string.

#include <iostream>
#include <cctype> // For isdigit()
using namespace std;

int sumNumbersInString(const string& str) {
    int sum = 0, num = 0;
    bool hasNumber = false;

    for (char ch : str) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0'); // Forming the number
            hasNumber = true;
        } else if (hasNumber) {
            sum += num; // Add the number to sum
            num = 0;
            hasNumber = false;
        }
    }

    // Add the last number if the string ends with a digit
    if (hasNumber) {
        sum += num;
    }

    return sum;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str); // Read entire line

    cout << "Sum of numbers: " << sumNumbersInString(str) << endl;
    return 0;
}
