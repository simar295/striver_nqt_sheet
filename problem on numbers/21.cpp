/*
Example 1:
Input: N = 12
Output: 2,2,3
Explanation: These are the prime factors of 12.

Example 2:
Input: N = 36
Output: 2,2,3,3
Explanation: These are the prime factors of 36.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int num;
 cin>>num;
 int temp=2;

 while (num!=1)
 {
    /* code */
    if (num%temp==0)   //if (12%2==0)
    {
        cout<<temp<<" ";
        num=num/temp;
    }
    else
    {
        temp++;
    }
 }
    return 0;
}