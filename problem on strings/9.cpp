/*
Sum of the Numbers in a String
Problem: Given a string, calculate the sum of numbers in a string (multiple consecutive digits are considered one number):

Example 1:
Input: string = “123xyz”
Output: 123

*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    string str = " ";
    getline(cin, str);

    string str2="";
    
    
string tempSum = "" ;
        int sum = 0  ;
        for (int i = 0; i < str.length(); i++) {

            if (str[i] >= '0' && str[i] <= '9') {
                tempSum += str[i]  ;
            }
            else {
                sum += atoi(tempSum.c_str()) ;
                tempSum = ""  ;
            }
        }
        cout<< sum + atoi(tempSum.c_str()) ;



    return 0;
}