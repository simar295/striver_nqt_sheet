/*
Reverse a String
Problem Statement: Reverse a String. Write a program that reverses a given string (in-place).
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   
  string str=" ";
  getline(cin,str);

  int i=0;
  int j=str.length();

  while (i<j)
  {
    swap(str[i++],str[j--]);
  }
  
  cout<<str;
  

return 0;
}