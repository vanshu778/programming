//Write a program to calculate the sum of the series 1 + 1/2 + 1/3 + ... + 1/n up to the nth term.

#include<bits/stdc++.h>
using namespace std;

double sum_of_series(int n){
    double sum= 0.0;
    for(int i=1;i<=n;i++){
        sum+=1.0/i;

    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter  the value of n: ";
    cin>>n;

    cout<<sum_of_series(n);
}