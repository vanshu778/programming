//Write a program to find the sum of all even numbers within a given range.

#include<bits/stdc++.h>
using namespace std;

int even_number(int start, int end){
    int sum =0;

    if(start%2!=0){
        start++;
    }

    for(int i=start; i<=end; i+=2){
        sum+=i;
    }
    return sum;
}
int main(){
    int start, end;
    cout<<"Enter start and end range: ";
    cin>>start>>end;

    cout<<even_number(start,end);
}