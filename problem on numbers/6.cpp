/*
Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).

Examples:

Example 1:
Input: n=6
Output: 6 is a perfect number

Example 2:
Input: n=15
Output: 15 is not a perfect number

Example 3:
Input: n=28
Output: 28 is a perfect number
Reason:
For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num;
    cin >> num;
    int sum = 0;
    //num%0 is nothing 
     for (int i = 1; i <num; i++)
    {
        if (num%i==0)          
        { 
          sum=sum+i;   
        }  
    
    }
    if (sum==num)
    {
        cout<<"it is a perfect number";
    }
    else
    {
        cout<<"not a perfect number";
    }
    
     


    return 0;
}