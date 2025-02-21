//Write a program to check whether a number is even or odd.
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;

    if(number%2 == 0){
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}