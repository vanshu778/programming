//Write a program to find the sum of all even numbers within a given range.

#include<bits/stdc++.h>
using namespace std;

int odd_number(int start, int end){
    int sum =0;

    if(start%2!=0){
        for(int i=start; i<=end; i+=2){
            sum+=i;
        }
    }
    else{
        start++;
    }
    
    return sum;
}
int main(){
    int start, end;
    cout<<"Enter start and end range: ";
    cin>>start>>end;

    cout<<odd_number(start,end);
}