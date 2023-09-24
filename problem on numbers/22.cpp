/*
When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
Strong number is also known as Krishnamurthi number/Peterson Number.

Input: N = 145
Output: Yes
Explanation: 1! + 4! + 5! = 145. Hence 145 is a strong number. 

Example 2:
Input:  26
Output: No
Explanation: 2! + 6! = 722. Hence 26 is not a strong number.
*/

#include <iostream>
#include <math.h>
using namespace std;

int facreturn(int x){
 int fac=x;
 for (int i = x; i > 1 ; i--)
 {   
    fac=fac*(i-1);
 }
 return fac;
}

int main(){
   int num;
   cin>>num;
   int original=num;
   int sum=0;
   
 //1 4 5

while (num>0)
{
    int digit=num%10;
    sum=sum+facreturn(digit);
    num=num/10;
}

if (original==sum)
{
cout<<sum <<" is a strong number";
    /* code */
}



/*  if (fac==num)
 {
    cout<<"it is a strong number";
 }
  */



    return 0;
}