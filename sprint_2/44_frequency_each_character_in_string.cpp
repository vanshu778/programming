//Write a program to count the frequency of each character in a given string.

#include <iostream>
using namespace std;

void countCharacterFrequency(const string &str) {
    int freq[256] = {0};  // Array to store frequency of each character

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Print the character frequencies
    cout << "Character Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << "'" << (char)i << "': " << freq[i] << endl;
        }
    }
}

int main() {
    string str = "hello";
    countCharacterFrequency(str);
    return 0;
}
