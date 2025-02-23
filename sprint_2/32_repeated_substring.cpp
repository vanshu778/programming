//Write a program to check if a substring is repeated within a given string.

#include <iostream>
using namespace std;

bool hasRepeatedSubstring(string s) {
    string doubled = s + s;
    string modified = doubled.substr(1, doubled.length() - 2); // Remove first and last character

    return modified.find(s) != string::npos;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (hasRepeatedSubstring(s)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}
