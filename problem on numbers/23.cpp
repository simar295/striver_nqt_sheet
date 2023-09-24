/*
Check if a number is Automorphic Number
Problem Statement: Given a number, check if it is automorphic or not. A number is called
an Automorphic number if and only if its square ends in the same digits as the number itself.

Example 1:
Input Format: N = 76
Result: Automorphic Number
Explanation: Calculating 76 * 76 gives 5776, it ends with the given number.

Input Format: 25
Result: Automorphic Number
Explanation: Calculating 25 * 25 gives 625, it ends with the given number.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int num;
 cin>>num;
 int square=num*num;

 while (num>0)
 {
    if (num%10==square%10)
    {
       cout<<"autotrophic";
    }
    num=num/10;
    square=square/10;
 }

return 0;
}