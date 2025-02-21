//Write a program to check if a given year is a leap year.

#include<iostream>
using namespace std;

bool isleapyear(int year){

    if(year%400 == 0){
        return true;
    }
    if(year%100==0){
        return false;
    }
    if(year%4==0){
        return true;
    }
    return false;
}

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if(isleapyear(year)){
        cout<<"It is leap year";
    }
    else{
        cout<<"It is no Leap year";
    }
}