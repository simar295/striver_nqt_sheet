/*
Find Non-repeating characters of a String
Problem:  Given a string, print non-repeating characters of the string.
Example 1:
Input: string = “google”
Output: L,e
Explanation: Non repeating characters are l,e.
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = " ";
    getline(cin, str);
    int freq[26]={0};
   
    for (int i = 0; i < str.length(); i++)
    {       
            freq[str[i]-'a']++;              //char-char => a-a = 0th position 
    }

    for (int i = 0; i <26 ; i++)
    {
        if (freq[i]>=1)
        {
            cout<<(char)(i + 'a') <<" "<<freq[i]<<endl;
        }      
    }
return 0;
}