/*
Problem Statement: Given a number N, print the smallest and largest digits present in the number.

Example 1:
Input: N = 2746
Output: Largest digit: 7
        Smallest digit: 2
Explanation: By simply going through the digits of
the number, we figure out the largest and smallest
digit in the number.

Example 2:
Input: N = 23004
Output: Largest digit : 4
        Smallest digit : 0
*/
#include <iostream>
#include <math.h>
using namespace std;

void max(int num){
 int max = 0;
    while (num > 0)
    {
        if (num % 10 > max)
        {
            max = num % 10;  
        }
         else
        {
            num = num / 10;
        } 
    }
     cout << max  <<endl; 
}
void min(int num){
 int min = num%10;

    while (num > 0)
    {
        //153
        if ( min >=num % 10)
        {
            min = num % 10;
           
        }
            num = num / 10;
        
    }
     cout << min; 
}

int main()
{
    int num;
    cin >> num;
    max(num);
    min(num);
    return 0;
}