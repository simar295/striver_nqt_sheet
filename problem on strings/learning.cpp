#include<iostream>
using namespace std;

bool palindrome(string str){
   string str2=str;
    int i=0;
    int j=str.length()-1;
    while (i<=j)
    {
        if (str[i]!=str[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }  
    }
    return 1;
}   

int main(){

  string str=" ";
  cin>>str;
  
  cout<<palindrome(str);
    return 0;
}