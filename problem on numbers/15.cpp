/*
Problem Statement: Given an integer. Write a program to reverse digits of a number.
Example 1:
Input: N = 472
Output: 274
Explanation: Reading the number from back to front, we see that the output should be 274
Example 2:
Input: N = 470
Output: 74
Explanation: Reading the number from back to front, we get 074.
 For an integer with no decimals, we know that leading zeros have no significance and therefore our answer should be 74
*/

#include <iostream>
#include <math.h>
using namespace std;

void reverse(int x){
  int reversednum=0;

  while (x>0)
  {
    reversednum=reversednum*10+x%10;
    x=x/10; //again, just for while condition
  }
  cout<<reversednum;

}

int  main(){
 int x;
 cin>>x;

 reverse(x);

}