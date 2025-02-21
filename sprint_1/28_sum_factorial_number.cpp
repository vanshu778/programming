//Write a program to find the sum of the digits of the factorial of a given number.

#include<iostream>
using namespace std;

int factorial(int number){
    int ans = 1;
    for(int i = number; i>0 ; i--){
         ans = ans * i;
    }
    return ans;
}

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;  
        number /= 10;        
        }
    return sum;
}

int main(){
    int number;
    cout<<"number: ";
    cin>>number;

    if(number<0){
        cout<< "factorial not found";
    }
    else{
        int fact=factorial(number);
        cout<<"factorial is: "<<fact<<endl;
        cout << "Sum of digits: " << sumOfDigits(fact) << endl;
    }
}