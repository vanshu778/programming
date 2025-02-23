// Write a program to generate multiplication tables for numbers within a specified range.

#include<bits/stdc++.h>
using namespace std;

int table_range(int start, int end){
    int mul;
    for(int i= 1; i<=10; i++){
        for(int j = start; j<=end; j++){
            cout<<j<<"*"<<i<<"="<<j*i<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int start, end;
    cout<<"Enter the range start and end: ";
    cin>>start>> end;

    table_range(start,end);
}