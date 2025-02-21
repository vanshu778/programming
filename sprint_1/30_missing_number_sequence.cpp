//Write a program to find missing numbers in a sequence from 1 to n.

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size() + 1;

    for(int i = 1; i<=n; i++){
        bool found = false;
        for(int j = 0; j<n-1; j++){
            if(nums[j] == i) {
                found = true;
                break;
            }
        }

        if(!found)
            return i;
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 2, 4, 5};
    cout<<missingNumber(arr);
    return 0;
}
