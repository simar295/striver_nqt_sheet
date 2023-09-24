/*
Sum Of Digits of A Number
Problem Statement: Given an integer, find the sum of digits of that integer.

Example 1:
Input: N = 472
Output: 13
Explanation: The digits in the number are 4,7 and 2. Summing them up gives us a value of 13

Example 2:
Input: N = 102
Output: 3
Explanation: The digits in the number are 0, 1, and 2. Summing them up gives us a value of 3
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num,sum=0;
    cin>>num;

    while (num>0)
    {
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<sum;
    
}