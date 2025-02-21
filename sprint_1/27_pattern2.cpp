//Write a program to generate number patterns (e.g., sequential numbers in a matrix).
// 1  
// 2 3  
// 4 5 6  


#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cout<<"Enter the rows: ";
    cin>>row;

    int num=1;
    for(int i=0;i<row; i++){
        for (int j=0; j<=i ;j++ ){
            cout<<num++;
        }
        cout<<endl;
    }
}