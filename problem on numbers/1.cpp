/*
Problem Statement: Given a number, check if it is Armstrong Number or Not.

Example 1:
Input:153
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153

Input:170
Output: No, it is not an Armstrong Number
Explanation: 1^3 + 7^3 + 0^3 != 170
Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number
*/

#include <iostream>
#include <math.h>
using namespace std;

int count(int num){ 
int coun=0;
while (num>0)
{
  int digit=num%10;
  coun++;
  num=num/10;
}
return coun;
}

int main(){

  int num;
  cin>>num;
  int temp=num;
  int sum=0;

  int coun= count(num);

   while (num>0)
  {
     int digit = num%10;
     sum=sum+pow(digit,coun);
     num=num/10;
  } 

   if (temp==sum)
  {
    cout<<"it is armstrong number";
  } 
  
  

  return 0;
}