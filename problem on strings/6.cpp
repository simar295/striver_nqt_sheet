/*

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
     if ((str[i] >= 65 && str[i] <= 90) || ( str[i] >= 97 && str[i] <= 122)) // if alphabets
      str2.push_back(str[i]);
  }
  cout<<str2;

return 0;
}
