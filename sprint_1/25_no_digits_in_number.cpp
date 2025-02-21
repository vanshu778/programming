// Write a program to count the number of digits in a given number.

#include<bits/stdc++.h>
using namespace std;

int No_digits(int number){
    if(number==0) return 1;

    int count=0;
    number = abs(number);

    while(number>0){
        number/=10;
        count++;
    }
    return count;
}
int main(){
    int number; 
    cout<<"Enter number: ";
    cin>>number;

    cout<<No_digits(number);
}