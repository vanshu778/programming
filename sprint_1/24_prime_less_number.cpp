//Write a program to print all prime numbers less than a given number.
#include <iostream>
#include <math.h>
using namespace std;
bool checkprime(int num)
{
  if (num == 1)
    return false;
  int i = 2;
  for (i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}
void PrintPrimes(int number)
{
  for (int i = 2; i < number; i++)
  {
    if (checkprime(i))
    {
      cout << i << " ";
    }
  }
}
int main()
{
  int number;
  cout<<"number:";
  cin>>number;

  PrintPrimes(number);
  return 0;
}