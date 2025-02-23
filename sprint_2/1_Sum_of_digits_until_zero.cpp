//Write a program to repeatedly sum the digits of a number until the result is zero.
#include<bits/stdc++.h>
using namespace std;

int sum_digits(int number){
    while(number>=10){
        int sum = 0;
        while(number>0){
            sum+=number%10;
            number/=10;
        }
        number=sum;
    }
    return number;
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    cout<<sum_digits(number);
}