#include <iostream>
using namespace std;

// bool isPalindrome(string input) {
//     int i = 0;
//     int j = input.length() - 1;  // Corrected: `j` should be `length - 1`

//     while (i < j) {  // Corrected: `while (i < j)`
//         if (input[i] != input[j]) {  // Corrected condition
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;

//     if (isPalindrome(input)) {
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not a Palindrome" << endl;
//     }
//     return 0;
// }

// void isPalindrome(string input)
// {
//     bool flag = true;

//     int i = 0;
//     int j = input.length() - 1; // Corrected: `j` should be `length - 1`

//     while (i < j)
//     { // Corrected: `while (i < j)`
//         if (input[i] != input[j])
//         { 
//             flag=false;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if(flag ){
//         cout<<"it is palindrome";
//     }
//     else{
//         cout<<"it is false";
//     }
// }

// int main()
// {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;

//     isPalindrome(input);
// }

