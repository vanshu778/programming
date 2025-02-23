//Write a program to generate all possible subsets of a given set of numbers.
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateSubsets(vector<int>& nums) {
    int n = nums.size();
    int totalSubsets = 1 << n;  // 2^n subsets
    vector<vector<int>> subsets;

    for (int i = 0; i < totalSubsets; i++) {
        vector<int> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {  // Check if jth bit is set
                subset.push_back(nums[j]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}

void printSubsets(vector<vector<int>>& subsets) {
    cout << "[ ";
    for (auto subset : subsets) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "] ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {1, 2};
    
    vector<vector<int>> subsets = generateSubsets(nums);
    printSubsets(subsets);

    return 0;
}
