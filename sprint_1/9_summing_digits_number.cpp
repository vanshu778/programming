//Write a program to calculate the sum of digits of a number.

#include<iostream>
using namespace std;

int Sum_digits(int number){
   int sum = 0;

   while(number!=0){
    int last_digit = number % 10;

    sum += last_digit;

    number/=10;
   }
   return sum;
}

int main(){
    int number;
    cout<<"Number: ";
    cin>>number;

    cout<<"sum of the digits is: "<<Sum_digits(number);
}