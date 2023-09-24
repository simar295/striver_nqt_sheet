/*
Problem Statement: Check if the given year is a leap year or not.
Example 1:
Input: 1996
Output: Yes
Explanation: Since 1996 is a leap year answer is “Yes”.
Example 2
Input: 2000
Output: Yes
The year is divisible by 400
The year is divisible by 4 but not by 100

Check if the year is divisible by 4 or 400 but not by 100 then it is a leap year.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int year;
 cin>>year;

 if (year%400==0||year%4==0 && year%100!=0)
 {
    cout<<"it is a leap year";
 }
 

}