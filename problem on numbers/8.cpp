/*
Check whether a number is positive or negative
Problem statement: Given a number n check whether it’s positive or negative.

Examples:

Example 1:
Input: n=5
Output: Positive

Example2:
Input: n=-6
Output: Negative
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

 int num;
 cin>>num;
 if (num>0)
 {
  cout<<"positive";
 }
 else
 {
    cout<<"negative";
 }
 
 

    return 0;
}