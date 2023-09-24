/*
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.
Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6

Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int a=0;
 int b=1;
 int num;
 cin>>num;

 for (int i = 0; i <num; i++)
 {
 
    
    int sum=a+b;
    a=b;
    b=sum;

    cout<<sum<<" ";
 }
 



    return 0;
}