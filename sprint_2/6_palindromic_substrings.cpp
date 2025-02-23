//Write a program to count how many palindromic substrings exist in a given string.
#include <iostream>
using namespace std;

// Function to expand around center and count palindromes
int countPalindromes(string s, int left, int right) {
    int count = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}

// Function to count all palindromic substrings
int countPalindromicSubstrings(string s) {
    int count = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        // Count odd-length palindromes (center at i)
        count += countPalindromes(s, i, i);

        // Count even-length palindromes (center between i and i+1)
        count += countPalindromes(s, i, i + 1);
    }
    
    return count;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Number of palindromic substrings: " << countPalindromicSubstrings(s) << endl;
    return 0;
}
