/*
Factors of a Given Number
Example 1:
Input: n = 6
Output: 1,2,3,6
Explanation: 6 is divisible by 1,2,3,6

Example 2:
Input: n = 9
Output: 1,3,9
Explanation: 9 is divisible by 1,3,9
*/


#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int num;
 cin>>num;

for (int i = 1; i <= num; i++)
{
    if (num%i==0)
    {
        cout<<i;
    }
}


    return 0;
}