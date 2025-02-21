// /Write a program to check if two strings are anagrams.

#include <iostream>
#include <algorithm> 
using namespace std;

bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) return false; 
    sort(str1.begin(), str1.end()); 
    sort(str2.begin(), str2.end());

    return str1 == str2; 
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2))
        cout << "Anagram" << endl;
    else
        cout << "Not an Anagram" << endl;

    return 0;
}
