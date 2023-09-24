/*
Problem Statement: Given a String, write a program to remove vowels from a given String.

Example 1:
Input: Str = “take u forward”
Output: tk  frwrd
Explanation: All vowels are removed from the given String.

Example 2:
Input: Str = “I am very happy today”
Output:  m vry happy tdy
Explanation: All vowels are removed from the given String.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   
  string str=" ";
  getline(cin,str);
  string str2=" ";

  for (int i = 0; i < str.length(); i++)
  {
     if (str[i]== 'a' || str[i]=='e'  || str[i]=='i'  || str[i]=='o'  || str[i]=='u' ){
        continue;
     }
     else{
        str2.push_back(str[i]);
        }
  }

  cout<<str2;
  



return 0;
}