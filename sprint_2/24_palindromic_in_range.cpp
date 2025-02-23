//Write a program to check for palindromic numbers within a given range.

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int start, end;
    cout << "Enter the range (start end): ";
    cin >> start >> end;

    vector<int> palindromes;
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            palindromes.push_back(i);
        }
    }

    cout << "Palindromic numbers: ";
    for (int num : palindromes) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
