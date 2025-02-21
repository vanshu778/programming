//Write a program to check if a number is an Armstrong number.

#include<iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number){
    int originalnumber = number;
    int sum=0, digits = 0;

    int temp = number;
    while(temp>0){
        digits++;
        temp/=10;
    }

    temp=number;           
    while(temp>0){
        int digit = temp%10;
        sum+=pow(digit,digits);
        temp/=10;
    }
    return sum==originalnumber;
}
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    if(isArmstrong(number)){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not a Armstrong number";
    }
}