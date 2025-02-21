//Write a program to find the GCD of two numbers.
#include<iostream>
using namespace std;

//iterative method
// int findgcd(int a , int b){
//     int gcd = 1;
//     for(int i=1; i<=min(a,b); i++){
//         if(a%i == 0 && b%i ==0 ){
//             gcd = i;
//         }
//     }
//     return gcd;
// }

//Eucladian algorithm

int findgcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a , b;
    cout<<"Enter number a and b: ";
    cin>>a>>b;

    cout<<findgcd(a,b);
}