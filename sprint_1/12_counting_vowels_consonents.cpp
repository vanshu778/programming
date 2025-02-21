// Write a program to count vowels and consonants in a given string.
#include<bits/stdc++.h>
using namespace std;

int count_string(string str){
    int count_vowels = 0;
    int count_consonents = 0;

    for (int i = 0; i < str.length(); i++) // 
  {
    str[i] = tolower(str[i]);
  }

    for(int i =0 ; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i] == 'i' || str[i] =='o' || str[i]=='u'){
            count_vowels++;
        }
        else{
            count_consonents++;
        }
    }
    cout<<"vowels: "<<count_vowels<<endl;
    cout<<"consonents: "<<count_consonents;
}

int main(){
    string str;
    cout<<"enter the string: ";
    getline(cin,str);

    count_string(str);
}