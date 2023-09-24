/*
Problem Statement: Given a range of numbers, find all the palindrome numbers in the range.

Note: A palindromic number is a number that remains the same when its digits
are reversed.OR  a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552

Examples:

Example 1:
Input: min = 10 , max = 50
Output: 11 22 33 44
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

Example2:
Input: min = 100 , max = 150
Output: 101 111 121 131 141
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

num = 4562 
rev_num = 0
rev_num = rev_num *10 + num%10 = 2 
num = num/10 = 456
rev_num = rev_num *10 + num%10 = 20 + 6 = 26 
num = num/10 = 45
rev_num = rev_num *10 + num%10 = 260 + 5 = 265 
num = num/10 = 4
rev_num = rev_num *10 + num%10 = 2650 + 4 = 2654 
num = num/10 = 0
*/

#include <iostream>
#include <math.h>
using namespace std;

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10; //only one line logic
        num = num / 10; //just checking while condition
    }
    return rev_num;
}

int main()
{

    int start;
    cin >> start;
    int end;
    cin >> end;

    for (int i = start; i <= end; i++)
    {

        int get = reverseDigits(i);
        if (get == i)
        {
            cout << i<<endl;
        }
            
    }

    return 0;
}
