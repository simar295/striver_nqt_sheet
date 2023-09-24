/*
Problem Statement: Given an A.P. Series, we need to find the sum of the Series.
a = first term of A.P.
d= common Difference of A.P.
n= Number of Terms in  A.P.
1:
Input:
n=4
a=2
d=2
Output: 20
Explanation: 2+4+6+8 = 20

A.P. is the series of terms having the first term as a and d, common difference. Every next term in the A.P. is greater
 than the previous term by d units.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
 int noofterms;
 cin>>noofterms;
 int firstterm;
 cin>>firstterm;
 int difference;
 cin>>difference;

 int sum=0;

 for (int i = 0; i <noofterms; i++)
 {
    int nextterm=firstterm;
    sum=sum+nextterm;
    firstterm=nextterm+difference;

    /*
    of by formula
     float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    */
  
 }
 cout<<sum;
 
 

    return 0;
}