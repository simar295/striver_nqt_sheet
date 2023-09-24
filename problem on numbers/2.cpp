/*
Problem Statement: Given a and b, find prime numbers in a given range [a,b], (a and b are included here).

Input: 2 10
Output: 2 3 5 7
Explanation: Prime Numbers b/w 2 and 10 are 2,3,5 and 7.

Example 2:
Input: 10 16
Output: 11 13
Explanation: Prime Numbers b/w 10 and 16 are 11 and 13.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int start;
    cin >> start;
    int end;
    cin >> end;

    for (int no = start; no <= end; no++)
    {
        int temp = 0;

        for (int j = 2; j <= no - 1; j++)
        {
            if (no % j == 0)
            {
                temp += 1;
            }
        }
        if (temp == 0)
        {
            cout << no << endl;
        }
       
    }

    return 0;
}