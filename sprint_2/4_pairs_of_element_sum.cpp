//Write a program to find all pairs of elements in an array whose sum equals a specified target.

#include<bits/stdc++.h>
using namespace std;

int sum_pairs(int arr[], int size, int target){
    bool found= false;
    for(int i = 0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
                found=true;
            }
        }
    }
    if(found=false){
        cout<<"no pairs found";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the target for sum: ";
    cin>>target;

    sum_pairs(arr,size,target);
}