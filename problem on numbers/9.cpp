/*
Sum of first N Natural Numbers
Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

Examples:

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num;
    cin>>num;
    int sum=0;

    for (int i = 0; i <=num; i++)
    {
        sum+=i;
    }
    cout<<sum;
    
}