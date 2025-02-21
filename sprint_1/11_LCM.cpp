//Write a program to find the LCM of two numbers.

#include<iostream>
using namespace std;

int lcm(int a, int b){
    int greater = max(a,b);
    int smallest = min(a,b);

    for(int i = greater; ; i+=greater){
        if(i%smallest == 0)
        return i;
    }
}

int main(){
    int a, b;
    cout<<"Enter a and b";
    cin>>a>>b;

    cout<<lcm(a,b);
}