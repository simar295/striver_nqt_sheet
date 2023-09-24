/*
Problem Statement: Given a character, Find the ASCII value of the character.

Example 1:
Input: c = ‘A’
Output: 65
Explanation: ASCII value of A is 65

Example 2:
Input: c = ‘e’
Output: 101
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   
  string str=" ";
  getline(cin,str);

 for (int i = 0; i < str.length(); i++)
 {
    cout<<"asci of "<<str[i]<< " is "<<str[i]-'a'<<endl;
 }
 

return 0;
}