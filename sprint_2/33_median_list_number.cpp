//Write a program to find the median value of a list of numbers.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedian(vector<int> &nums) {
    sort(nums.begin(), nums.end()); // Step 1: Sort the list

    int n = nums.size();
    if (n % 2 != 0) {
        return nums[n / 2];  // Step 2: If odd, return middle element
    } else {
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;  // Step 3: If even, return average of middle two
    }
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5}; // Example input

    cout << "Median: " << findMedian(nums) << endl;
    return 0;
}
