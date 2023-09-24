/*
Find the sum of numbers in the given range
Problem Statement: Find the sum of numbers in the given range.


Example 1:
Input: l=2, r=7
Output: 27
Explanation: 2+3+4+5+6+7=27. Therefore 27 is the answer.

Example 2:
Input: l=5, r=9
Output: 35
Explanation: 5+6+7+8+9=35. Therefore 35 is the answer.
Solution 1:Naive approach

Intuition: Simply add numbers from l to r.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int sum=0;

    for (int i = a; i <=b; i++)
    {
         sum+=i;
    }
    cout<<sum;


return 0;
}