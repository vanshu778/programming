//Write a program to find the longest sequence of consecutive numbers in an array.
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end()); // Store unique numbers
    int longest = 0;

    for (int num : nums) {
        // Check if this number is the start of a sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            // Count how long the sequence is
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }
    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "Longest Consecutive Sequence Length: " << longestConsecutive(nums) << endl;
    return 0;
}
