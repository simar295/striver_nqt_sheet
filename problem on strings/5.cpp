/*
Problem Statement: Given a string, write a program to remove all the whitespaces from the string.

Example 1:
Input: str = “Take you forward” 
Output: Takeyouforward
Explanation: After removing all the whitespaces Takeyouforward is the result

Example 2:
Input: str = “How are you doing”
Output: Howareyoudoing
Explanation: After removing all the whitespaces Howareyoudoing is the result

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
    if (str[i]==' ')
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