//Write a program to find the longest sequence of consecutive 1s in a binary array.

#include <iostream>
#include <vector>
using namespace std;

int longestConsecutiveOnes(vector<int>& arr) {
    int maxCount = 0, currentCount = 0;

    for (int num : arr) {
        if (num == 1) {
            currentCount++; 
            maxCount = max(maxCount, currentCount); 
        } else {
            currentCount = 0; 
        }
    }
    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 1}; 
    cout << "Longest consecutive 1s: " << longestConsecutiveOnes(arr) << endl;
    return 0;
}
