//Write a program to find the Fibonacci number at a specific position.
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int position){
    if (position == 0) return 0; 
    if (position == 1) return 1; 
    
    int a = 0, b = 1, sum;
    for (int i = 2; i <= position; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    return b;
}

int main(){
    int position;
    cout<<"Position: ";
    cin>>position;

    cout<<fibonacci(position);
}