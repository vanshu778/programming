// Write a program to determine the length of a string without using built-in functions.

#include <iostream>
using namespace std;

int findStringLength(const char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++; 
    }
    return count;
}

int main() {
    char str[] = "Vanshika";  
    cout << "Length of the string: " << findStringLength(str) << endl;
    return 0;
}

