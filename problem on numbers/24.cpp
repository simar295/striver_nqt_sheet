/*
Find GCD of two numbers
Example 1:
Input: num1 = 4, num2 = 8
Output: 4
Explanation: Since 4 is the greatest number which divides both num1 and num2.

Example 2:
Input: num1 = 3, num2 = 6
Output: 3
Explanation: Since 3 is the greatest number which divides both num1 and num2.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int a,b;
 cin>>a>>b;
 int temp;
  for (int i = 1; i < a || i<b; i++)
  { 
    if (a%i==b%i)
    {
        temp=i;
    }
    
  }
  
  cout<<temp;


    return 0;
}