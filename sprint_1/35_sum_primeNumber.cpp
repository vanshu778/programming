//Write a program to calculate the sum of all prime numbers within a given range.

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
int sumOfPrimes(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (checkprime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main()
{
  int a = 1, b = 10;
  cout<< sumOfPrimes(a, b);
  return 0;
}