/*
Count number of vowels, consonants, spaces in String
Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   
  string str=" ";
  getline(cin,str);
  
  int numbers=0;
  int vowels=0;
  int consonents=0;

   for (int i = 0; i < str.length()-1; i++) // converting given string to lowercase
  {
    str[i] = towlower(str[i]);
  }

  for (int i = 0; i <  str.length(); i++)
  {
    if (str[i]== 'a' || str[i]=='e'  || str[i]=='i'  || str[i]=='o'  || str[i]=='u' )
    {
        vowels++;
    }
    
    else if (str[i] >= 'a' && str[i] <= 'z')
    {
        consonents++;
    }
    else if (str[i] == ' ')
      numbers++;    
  }

  cout<<"vowels = "<<vowels;
  cout<<"consonents = "<<consonents;
  cout<<"numbers = "<<numbers;

  

return 0;
}
