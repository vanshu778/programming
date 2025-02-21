//Write a program to sort an array of numbers in ascending order.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,1,4,1,5,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr,arr+size);
   for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    };
}