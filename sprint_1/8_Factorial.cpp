//Write a program to compute the factorial of a given number.

#include<iostream>
using namespace std;

int factorial(int number){
    int ans = 1;
    for(int i = number; i>0 ; i--){
         ans = ans * i;
    }
}

int main(){
    int number;
    cout<<"number: ";
    cin>>number;

    if(number<0){
        cout<< "factorial not found";
    }
    else{
        cout<<"factorial is: "<<factorial(number);
    }
}