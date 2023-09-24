/*
Write a program to remove brackets from an algebraic expression
Given an algebraic expression, we need to simplify the expression and remove the brackets.

Example 1:
Input: “a+((b-c)+d)”
Output: “a+b-c+d”
Explanation: Removed all the brackets in the algebric expression.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   
  string str=" ";
  getline(cin,str);

  string str2="";

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i]=='(' || str[i]==')' )
    {
        continue;
    }
    else{
        str2.push_back(str[i]);
    }
  }
  

  cout<<str2;
  


return 0;
}