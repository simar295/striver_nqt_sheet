/*
Replace all the 0’s with 1 in a given integer
Problem Statement: You are given an integer. Your task is to replace all the zeros in the integer with ones.

Example 1:
Input: N = 102003
Output: 112113
Explanation: The 2nd,4th and 5th position from left contain 0.The resultant integer has replaced the 0’s in those  positions with 1.

Example 2:
Input:  204
Output: 214
Explanation: The 2nd position from left contain 0. The resultant integer has replaced the 0 in that position with 1.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    int reversed1 = 0;
    int reversed2 = 0;

    int num2;
    cin >> num;


    while (num > 0)
    {
        int digit = num % 10;

        if (digit == 0)
        {
            digit = 1;
        }
            reversed1 = reversed1 * 10 + digit;
            num = num / 10;
       
    }
    num2=reversed1;
    // again reversing back

    while (num2>0)
    {
        int digit=num2%10;
         reversed2 = reversed2 * 10 + digit;
          num2 = num2 / 10;
    }
    cout<<reversed2;

    return 0;
}