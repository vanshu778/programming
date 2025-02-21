// Write a program to reverse a given string.

#include <bits/stdc++.h>

using namespace std;

int main() {

  string str;
  cout<<"Enter the string:";
  cin>>str;
  
  reverse(str.begin(), str.end());
  
  cout << "The reversed string " << str;

}