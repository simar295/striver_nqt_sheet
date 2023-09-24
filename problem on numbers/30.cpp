/*
Permutations in which N people can occupy R seats
Problem Statement: Find permutations in which n people can occupy r seats in a classroom.

Examples:

Example 1:
Input: N = 5, r = 3
Output: 60
Explanation: To permute n people in r seats we have to find the value of n!/(n-r)!.The value of 5!/(5-3)! Is 60.

Example 2:
Input: N=6,r = 4.
Output: 360
Solution
*/

#include <iostream>
#include <math.h>
using namespace std;

int fac(int n)
{
    int fac = n;
    for (int i = n; i > 1; i--) //dont let multiply by zero anywhere(i)
    {
        fac = fac * (i - 1);
    }
    return fac;
}

int main()
{
    int n,r;
    cin >> n>>r;
    int permute;

    permute  =  fac(n)/fac(n-r);
    cout<<permute;

    return 0;
}