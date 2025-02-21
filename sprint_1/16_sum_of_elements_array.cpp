//Write a program to find the sum of elements in an array

#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size){
    int ans=0;
    for(int i = 0; i<size; i++){
        ans = ans+arr[i];
    }
    cout<< ans;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    sum(arr,size);

}