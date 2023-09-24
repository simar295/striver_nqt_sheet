/*
Remove All Duplicates from a String
Problem Statement: Given a String remove all the duplicate characters from the given String.

Example 1:
Input: s = "bcabc"
Output: “bca"
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = " ";
    getline(cin, str);
    int freq[26]={0};
    int  j=0;

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>=1)
        {
            cout<<(char)(i+'a')<< " ";
        }
        
    }

return 0;
}