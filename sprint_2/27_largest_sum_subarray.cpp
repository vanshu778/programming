// //Write a program to find the largest sum of any contiguous subarray.

// //Kadane's Algorithm
#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int>& nums) {
    int maxSum = nums[0];  
    int currentSum = nums[0];  

    for (size_t i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]); 
        maxSum = max(maxSum, currentSum); 
    }
    return maxSum;
}

int main() {
    vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Largest sum of contiguous subarray: " << maxSubarraySum(array) << endl;
    return 0;
}

// //Brute Force method

// #include <iostream>
// #include <vector>
// using namespace std;

// int maxSubarraySum(vector<int>& nums) {
//     int maxSum = nums[0];
//     int n = nums.size();

//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += nums[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     return maxSum;
// }

// int main() {
//     vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     cout << "Largest sum of contiguous subarray: " << maxSubarraySum(array) << endl;
//     return 0;
// }
