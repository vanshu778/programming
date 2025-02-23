//Write a program to find pairs of strings in a list that are anagrams of each other.

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

bool isAnagram(string str1, string str2) {
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

void findAnagramPairs(vector<string> &words) {
    vector<pair<string, string>> result;

    for (size_t i = 0; i < words.size(); i++) {
        for (size_t j = i + 1; j < words.size(); j++) {
            if (isAnagram(words[i], words[j])) {
                result.push_back({words[i], words[j]});
            }
        }
    }

    cout << "Anagram Pairs: ";
    for (auto &p : result) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
}

int main() {
    vector<string> words = {"listen", "silent", "hello", "world"};
    
    findAnagramPairs(words);
    
    return 0;
}
