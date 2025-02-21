//Write a program to generate multiplication tables for a given number.

#include<bits/stdc++.h>
using namespace std;

int table(int number){
    for (int i=1; i<=10; i++){
        int ans = number*i;
        cout<<number<<"*"<<i<<"="<<ans<<endl;;
    }
}
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;

    table(number);
}