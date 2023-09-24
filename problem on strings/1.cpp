/*
Check if the given String is Palindrome or not
Problem Statement: “Given a string, check if the string ispalindrome or not.” 
A string is said to be palindrome if the reverse of the string is the same as the string.


Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   
  string str=" ";
  cin>>str;
  
  int i=0;
  int j= str.length()-1;
  
  while (i<j)
  {
    swap(str[i++],str[j--]);
  }
  string str2=str;
    if (str2==str)
    {
        cout<<"it is a palindrome";
    }
    return 0;
}
