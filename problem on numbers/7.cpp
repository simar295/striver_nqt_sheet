/*
Problem Statement: Given a number n, check whether a given number is even or odd.

Example 1:
Input: n=5
Output: odd
Explanation: 5 is not divisible by 2.
 
Example 2:  
Input: n=6
Output: even
Explanation: 6 is divisible by 2.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int num;
 cin>>num;

 if (num%2==0)
 {
    cout<<"even";
 }
 else
 {
    cout<<"odd";
 }
 
 

return 0;

}